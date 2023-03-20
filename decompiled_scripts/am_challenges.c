#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108[65];
	float fLocal_304 = 0f;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	float fLocal_317 = 0f;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	float fLocal_338 = 0f;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	int iLocal_350 = 0;
	struct<3> Local_351[65];
	var uLocal_547[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_613[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	var uLocal_627[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	struct<68> Local_640 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	struct<528> Local_728 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1256 = -1;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = -1082130432;
	var uLocal_1279 = 3;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = -1;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = -1082130432;
	var uLocal_1326 = 3;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = -1;
	var uLocal_1350 = -1;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1082130432;
	var uLocal_1373 = 3;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = -1;
	var uLocal_1397 = -1;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = -1082130432;
	var uLocal_1420 = 3;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = -1;
	var uLocal_1444 = -1;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = -1082130432;
	var uLocal_1467 = 3;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1;
	var uLocal_1491 = -1;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = -1082130432;
	var uLocal_1514 = 3;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = -1;
	var uLocal_1538 = -1;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = -1082130432;
	var uLocal_1561 = 3;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = -1;
	var uLocal_1585 = -1;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = -1082130432;
	var uLocal_1608 = 3;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = -1;
	var uLocal_1632 = -1;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = -1082130432;
	var uLocal_1655 = 3;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = -1;
	var uLocal_1679 = -1;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = -1082130432;
	var uLocal_1702 = 3;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = -1;
	var uLocal_1726 = -1;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = -1082130432;
	var uLocal_1749 = 3;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = -1;
	var uLocal_1773 = -1;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = -1082130432;
	var uLocal_1796 = 3;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = -1;
	var uLocal_1820 = -1;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = -1082130432;
	var uLocal_1843 = 3;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = -1;
	var uLocal_1867 = -1;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = -1082130432;
	var uLocal_1890 = 3;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = -1;
	var uLocal_1914 = -1;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = -1082130432;
	var uLocal_1937 = 3;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = -1;
	var uLocal_1961 = -1;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = -1082130432;
	var uLocal_1984 = 3;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = -1;
	var uLocal_2008 = -1;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = -1082130432;
	var uLocal_2031 = 3;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = -1;
	var uLocal_2055 = -1;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = -1082130432;
	var uLocal_2078 = 3;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = -1;
	var uLocal_2102 = -1;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = -1082130432;
	var uLocal_2125 = 3;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = -1;
	var uLocal_2149 = -1;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = -1082130432;
	var uLocal_2172 = 3;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = -1;
	var uLocal_2196 = -1;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = -1082130432;
	var uLocal_2219 = 3;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = -1;
	var uLocal_2243 = -1;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = -1082130432;
	var uLocal_2266 = 3;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = -1;
	var uLocal_2290 = -1;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = -1082130432;
	var uLocal_2313 = 3;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = -1;
	var uLocal_2337 = -1;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = -1082130432;
	var uLocal_2360 = 3;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = -1;
	var uLocal_2384 = -1;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = -1082130432;
	var uLocal_2407 = 3;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = -1;
	var uLocal_2431 = -1;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = -1082130432;
	var uLocal_2454 = 3;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = -1;
	var uLocal_2478 = -1;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = -1082130432;
	var uLocal_2501 = 3;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = -1;
	var uLocal_2525 = -1;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = -1082130432;
	var uLocal_2548 = 3;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = -1;
	var uLocal_2572 = -1;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = -1082130432;
	var uLocal_2595 = 3;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = -1;
	var uLocal_2619 = -1;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = -1082130432;
	var uLocal_2642 = 3;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = -1;
	var uLocal_2666 = -1;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = -1082130432;
	var uLocal_2689 = 3;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = -1;
	var uLocal_2713 = -1;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = -1082130432;
	var uLocal_2736 = 3;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = -1;
	struct<11> Local_2760[32];
	struct<12> Local_3113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	fLocal_304 = 40000f;
	iLocal_340 = unk_0xBE8BBC6340F2B731();
	iLocal_341 = -1;
	iLocal_342 = -1;
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (!func_611(ScriptParam_0))
		{
			func_585();
		}
	}
	while (true)
	{
		func_584();
		if (func_577() || func_575())
		{
			func_585();
		}
		if (func_573())
		{
			func_585();
		}
		func_547();
		switch (func_546(unk_0x7A2D98760B359FB8()))
		{
			case 0:
				if (func_545() == 1)
				{
					if (func_544())
					{
						func_543(unk_0x7A2D98760B359FB8(), 1);
					}
				}
				break;
			
			case 1:
				if (func_545() == 1)
				{
					func_107();
					func_97();
				}
				else if (func_545() == 3)
				{
					func_543(unk_0x7A2D98760B359FB8(), 3);
				}
				break;
			
			case 3:
				func_585();
				break;
		}
		if (unk_0xCD91CF0F63010FB2())
		{
			switch (func_545())
			{
				case 0:
					if (func_84())
					{
						func_83(1);
					}
					break;
				
				case 1:
					if (Local_640.f_37 == 6)
					{
						func_83(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_318, 1000, 0))
					{
						func_83(3);
					}
					break;
				
				case 3:
					func_585();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x4C779B19E6DDCDA2() && !bParam2)
	{
		if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0x3EAC9995EC220C5A(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C779B19E6DDCDA2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE23D71F521207E8D();
			}
			else
			{
				*uParam0 = unk_0x0A7450968AC14F54();
			}
		}
		else
		{
			*uParam0 = unk_0x3EAC9995EC220C5A();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
		{
			unk_0x573691DB812DC8AA(&(Local_640.f_2), 0);
			Local_640.f_1 = unk_0xE23D71F521207E8D();
		}
	}
	switch (Local_640.f_37)
	{
		case 0:
			if (func_41())
			{
				if (func_31())
				{
					func_30(1);
				}
			}
			else
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_640.f_43), func_29(), 0) || unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_640.f_38 = unk_0xE23D71F521207E8D();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_640.f_39), func_28(0), 0) || unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
			{
				if (!unk_0xB56FEBC510E7E9DE(Local_640.f_2, 1))
				{
					Local_640.f_1 = unk_0xE23D71F521207E8D();
					unk_0x573691DB812DC8AA(&(Local_640.f_2), 1);
					func_27(&(Local_640.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_342, &iLocal_341);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_640.f_41), 20000, 0) || Local_640.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_640.f_3))
				{
					func_27(&(Local_640.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xBE07BFED2D35F867(Local_640.f_67[iVar0 /*2*/].f_1) && !unk_0x0B6E83A9A7ED3EBA(unk_0xB66D3D2DD5A2BA64(Local_640.f_67[iVar0 /*2*/].f_1)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar1)))
		{
			iVar2 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xB56FEBC510E7E9DE(Local_2760[iVar1 /*11*/].f_1, 1) || Local_2760[iVar1 /*11*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xB56FEBC510E7E9DE(Local_2760[iVar1 /*11*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x42145D1DD048146E(unk_0x209E209593217021(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 164;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x8ACD527A7E574590();
	if (!iParam14 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar1)))
		{
			iVar2 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x8ACD527A7E574590() || iParam0)
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x860CE5C791DC28F5(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x6DF20EAB8093DF19(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar0)))
		{
			unk_0x573691DB812DC8AA(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		if (unk_0xB56FEBC510E7E9DE(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x573691DB812DC8AA(&(Local_640.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar0));
				if (unk_0x860CE5C791DC28F5(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_640.f_50)
	{
		Local_640.f_50 = iVar1;
	}
	else
	{
		Local_640.f_66 = (Local_640.f_50 - iVar1);
	}
	if (iVar2 > Local_640.f_51)
	{
		Local_640.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312746;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2760[iParam0 /*11*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_640.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_8789)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_8790)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_8791)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_8792)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_8793)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_8794)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_8795 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_8796)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_8797)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_8798)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_8799)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_8800))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_8801))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_8913)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_8914)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_8804))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_8806))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_8807))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_8808))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_640.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_19()
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_640.f_4[iParam0] == unk_0x8DDF51AF4B711D9F() && func_21(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()
{
	switch (Local_640.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_2760[iParam0 /*11*/].f_4;
	iVar1 = Local_2760[iParam0 /*11*/].f_4.f_1;
	if (!unk_0xB56FEBC510E7E9DE(Local_640.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_640.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_640.f_49++;
			unk_0x573691DB812DC8AA(&(Local_640.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_640.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_640.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_640.f_4[iVar3] < 0 || func_21(iVar0, Local_2760[Local_640.f_4[iVar3] /*11*/].f_4)) || func_24(iVar0, Local_2760[Local_640.f_4[iVar3] /*11*/].f_4, iVar1, Local_2760[Local_640.f_4[iVar3] /*11*/].f_4.f_1))
		{
			iVar4 = Local_640.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_341 = iVar3;
				iLocal_342 = iParam0;
			}
			Local_640.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_640.f_4[iVar5] == iParam0)
				{
					Local_640.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_640.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)
{
	int iVar0;
	
	if (unk_0xB56FEBC510E7E9DE(Local_640.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_640.f_4[iVar0] == iParam0)
			{
				Local_640.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xA5F70A8B83BDFA49(&(Local_640.f_48), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Local_640.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C779B19E6DDCDA2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE23D71F521207E8D();
		}
		else
		{
			*uParam0 = unk_0x0A7450968AC14F54();
		}
	}
	else
	{
		*uParam0 = unk_0x3EAC9995EC220C5A();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xB56FEBC510E7E9DE(Local_640.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_640.f_3)
	{
		case 0:
			return Global_262145.f_8112;
		
		case 8:
			return Global_262145.f_8113;
		
		case 3:
			return Global_262145.f_8114;
		
		case 1:
			return Global_262145.f_8899;
		
		case 6:
			return Global_262145.f_8900;
		
		case 10:
			return Global_262145.f_8902;
		
		case 11:
			return Global_262145.f_8904;
		
		case 12:
			return Global_262145.f_8905;
		
		case 15:
			return Global_262145.f_8909;
		
		case 16:
			return Global_262145.f_8910;
		
		case 17:
			return Global_262145.f_8911;
		
		case 18:
			return Global_262145.f_8912;
		
		case 13:
			return Global_262145.f_8903;
		
		case 14:
			return Global_262145.f_8906;
		
		case 2:
			return Global_262145.f_8116;
		
		case 7:
			return Global_262145.f_8901;
		
		case 9:
			return Global_262145.f_8907;
		
		case 5:
			return Global_262145.f_8117;
		
		case 4:
			return Global_262145.f_8115;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_8869;
}

void func_30(int iParam0)
{
	Local_640.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_640.f_37 == 0 || func_5(Local_640.f_3)) || Local_640.f_54 < 10))
	{
		Var0 = { Local_640.f_67[iLocal_337 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0x55B325D0BC7EF9C7(Var0.f_1))
			{
				if (func_38(Local_640.f_3, iLocal_337, &Var2, &uVar5))
				{
					Local_640.f_55[iLocal_337] = func_34(iLocal_337);
					if (unk_0xB56FEBC510E7E9DE(Local_2760[Local_640.f_55[iLocal_337] /*11*/].f_2, iLocal_337))
					{
						if (func_33(&(Local_640.f_67[iLocal_337 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0))
						{
							unk_0x78FDAB07A98574D5(unk_0xB66D3D2DD5A2BA64(Local_640.f_67[iLocal_337 /*2*/].f_1), 1);
							unk_0xF1040A0061DC97E5(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), 1);
							unk_0xDA1D5B5FA3988462(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), 1);
							unk_0xC3D1AB6B32C2D35C(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), 0);
							func_32(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), 1);
							if (unk_0x9BBC2FD086E9AC98("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x3C73EEDDE53D7F5D(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x9BBC2FD086E9AC98("MPBitset", 3))
							{
								if (unk_0xB22BDF5B6DBD298B(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0xA68F5A9BCA4E78E1(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), "MPBitset");
								}
								unk_0x573691DB812DC8AA(&iVar6, 10);
								unk_0x573691DB812DC8AA(&iVar6, 11);
								unk_0x3C73EEDDE53D7F5D(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_337 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_640.f_55[iLocal_337] = -1;
							Local_640.f_54++;
						}
					}
				}
			}
		}
		iLocal_337++;
		if (iLocal_337 >= 10)
		{
			iLocal_337 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x9BBC2FD086E9AC98("MPBitset", 3))
	{
		if (unk_0xB22BDF5B6DBD298B(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xA68F5A9BCA4E78E1(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x573691DB812DC8AA(&uVar0, 13);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&uVar0, 13);
		}
		unk_0x3C73EEDDE53D7F5D(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x69BF70CE4F471AA2(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3B97B8A2AAD89A9D(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x2EEA15C0C12C8CDE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xAA3A60755EA8F251(uVar0);
	if (unk_0x55B325D0BC7EF9C7(*uParam0))
	{
		unk_0xDA1D5B5FA3988462(uVar0, iParam10);
		if (unk_0x43DF9E154BFEA8DB(iVar0))
		{
			if (bParam8)
			{
				unk_0xB27C4095ABAA3587(*uParam0, 1);
			}
			else
			{
				unk_0xB27C4095ABAA3587(*uParam0, 0);
			}
		}
		unk_0xA809A49D26253646(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	fVar2 = 1000000f;
	if (func_37(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xD92F4D7123D878D4() - 1))
		{
			if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iVar0)))
			{
				iVar8 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iVar0));
				if (func_12(iVar8, 1, 1))
				{
					fVar3 = func_35(func_36(iVar8), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_35(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return unk_0x2A488C176D52CCA5(Param0, Param3);
}

Vector3 func_36(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(iParam0), 0);
}

int func_37(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_38(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_40(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xC60576ADD1AECA45(iParam0);
	return unk_0x4A4B6FD54C499B7D(iParam0);
}

bool func_41()
{
	return (func_5(Local_640.f_3) || func_39(Local_640.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x825762A1424CFB65() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	if (func_45(&(Global_1573875.f_18)))
	{
		if (!func_1(&(Global_1573875.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1573875.f_18));
	}
	if (func_43())
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 0);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x1C5505504E67FF8A() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_43()
{
	return unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 0);
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_45(var uParam0)
{
	return uParam0->f_1;
}

void func_46(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x4CB3F0B0113C6DF8(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x824EA95BCC498CB4(uVar1);
			if (unk_0xB56FEBC510E7E9DE(iVar0, iParam0))
			{
				unk_0xA5F70A8B83BDFA49(&iVar0, iParam0);
				unk_0x4CB3F0B0113C6DF8(iVar0, iParam1);
			}
			break;
	}
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_48(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_47(iParam1);
	uVar1 = unk_0x824EA95BCC498CB4(uVar0);
	return unk_0xB56FEBC510E7E9DE(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 2) && !func_8(unk_0x8ACD527A7E574590())) && !func_7(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x0AAC2160036975D9(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x0AAC2160036975D9(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_50(65, sParam0, sParam1, 1, -1, 2);
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_82(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_51(&Var0);
}

int func_51(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426494.f_2420)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_16);
	func_54(uParam0);
	if (func_53(uParam0->f_1))
	{
		if (Global_2426494.f_2138[0 /*70*/].f_2 == 0)
		{
			Global_2426494.f_2138[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426494.f_2138[0 /*70*/].f_1 == 13 || Global_2426494.f_2138[0 /*70*/].f_1 == 52) || Global_2426494.f_2138[0 /*70*/].f_1 == 53) || Global_2426494.f_2138[0 /*70*/].f_1 == 57)
		{
			Global_2426494.f_2138[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426494.f_2138[iVar0 + 1 /*70*/] = { Global_2426494.f_2138[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426494.f_2138[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_2 == 0)
		{
			Global_2426494.f_2138[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 1);
				Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			}
			if (uParam0->f_1 == 83)
			{
				if (func_52(Global_2426494.f_2138[iVar0 /*70*/].f_1))
				{
					Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
					unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 84:
		case 87:
		case 88:
		case 83:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

int func_53(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0)
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_66 = func_55();
	}
}

int func_55()
{
	return 21;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_57(var uParam0, int iParam1)
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_81())
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_58(iParam1, -2, 0, 0);
		}
	}
}

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_79(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_79(unk_0x8ACD527A7E574590()) || (func_78() && func_77()))
	{
		uVar0 = func_76();
		if (unk_0x1F2158D615BC4B25(uVar0))
		{
			if (unk_0x60F6396843CB51A6(iVar0))
			{
				if (unk_0xAE5AB5A8DE4D19AF(iVar0) != -1)
				{
					if (func_12(unk_0xAE5AB5A8DE4D19AF(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4FE03C08BC095A57()) && iParam1 < 4)
						{
							if (Global_1612768.f_62278[iParam1] != -1)
							{
								return func_75(iParam1, iParam0, 0);
							}
							else
							{
								return func_66(iParam0, unk_0xAE5AB5A8DE4D19AF(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_66(iParam0, unk_0xAE5AB5A8DE4D19AF(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4FE03C08BC095A57()) && iParam1 < 4)
			{
				if (Global_1612768.f_62278[iParam1] != -1)
				{
					return func_75(iParam1, iParam0, 0);
				}
				else
				{
					return func_59(0, -1, 0);
				}
			}
			else
			{
				return func_59(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4FE03C08BC095A57()) && iParam1 < 4)
	{
		if (Global_1612768.f_62278[iParam1] != -1)
		{
			return func_75(iParam1, iParam0, 0);
		}
		else
		{
			return func_66(iParam0, unk_0x8ACD527A7E574590(), iParam1, bParam2, bParam3);
		}
	}
	return func_66(iParam0, unk_0x8ACD527A7E574590(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)
{
	return func_60(unk_0x8ACD527A7E574590(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xE6C94A0E653BD3F1(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_65(iVar0, iParam2, 0) && !unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_64(1);
				}
				else
				{
					return func_64(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_61(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_64(1);
	}
	return func_64(0);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_63(iParam0, iParam1);
	if (func_62(Global_1612768.f_65866))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7302[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_65(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_65(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 0);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 1);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 2);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 4);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 5);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 6);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 8);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 9);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 10);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 12);
				
				case 1:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 13);
				
				case 2:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 14);
				
				case 3:
					return unk_0xB56FEBC510E7E9DE(Global_1612768.f_37, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE6C94A0E653BD3F1(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1586488[unk_0x8ACD527A7E574590() /*408*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1586488[iVar2 /*408*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_74(iParam1, iParam0, iVar0, 0) && !unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 18)) || ((func_65(unk_0xE6C94A0E653BD3F1(iParam1), unk_0xE6C94A0E653BD3F1(iParam0), 0) && unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 23)) && !unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 18)))
			{
				return func_64(1);
			}
			else if (unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 26))
			{
				return func_73(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573829 || Global_1573820) || Global_1586488[iParam0 /*408*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573829 == 1 && Global_1573839 == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573824 && Global_1573404.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_69(iParam0);
	if (!iVar3 == -1)
	{
		return func_67(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = func_68(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 12;
}

var func_68(int iParam0)
{
	return Global_2412289.f_1874.f_44[iParam0 /*2*/].f_1;
}

int func_69(int iParam0)
{
	if (!iParam0 == func_81())
	{
		if (func_71(iParam0, 1))
		{
			return Global_2412289.f_1874.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_70(int iParam0)
{
	if (iParam0 != func_81())
	{
		return Global_1608060[iParam0 /*106*/].f_8;
	}
	return func_81();
}

bool func_71(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_72(iParam0))
		{
			return 0;
		}
	}
	return Global_1608060[iParam0 /*106*/].f_8 != func_81();
}

int func_72(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (Global_1608060[iParam0 /*106*/].f_8 != func_81())
		{
			return Global_1608060[iParam0 /*106*/].f_8 == iParam0;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xE6C94A0E653BD3F1(iParam0) == -1 && unk_0xE6C94A0E653BD3F1(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xE6C94A0E653BD3F1(iParam0) == unk_0xE6C94A0E653BD3F1(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xE6C94A0E653BD3F1(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xE6C94A0E653BD3F1(iParam0) == iParam2;
	}
	return unk_0xE6C94A0E653BD3F1(iParam0) == iParam2;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1612768.f_62278[iParam0] != -1 && Global_1612768.f_62278[iParam0] <= 4)
	{
		if (Global_1612768.f_62278[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1612768.f_62278[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1612768.f_62278[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1612768.f_62278[iParam0] == 4)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_1612768.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1612768.f_62278[iParam0];
		}
	}
	else
	{
		iVar0 = func_60(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_76()
{
	return Global_2359301.f_2;
}

bool func_77()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 4);
}

bool func_78()
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_18, 14);
}

int func_79(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_80())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

int func_81()
{
	return -1;
}

void func_82(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_81();
	uParam1->f_17 = func_81();
	uParam1->f_18 = func_81();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

void func_83(int iParam0)
{
	Local_640.f_0 = iParam0;
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_640.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_640.f_39));
	func_89();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_640.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_85();
	}
	return 1;
}

void func_85()
{
	int iVar0;
	
	if (func_39(Local_640.f_3))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_640.f_67[iVar0 /*2*/] = func_88();
			iVar0++;
		}
	}
	else if (Local_640.f_3 == 12)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_640.f_67[iVar0 /*2*/] = func_87();
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_640.f_67[iVar0 /*2*/] = func_86();
			iVar0++;
		}
	}
}

int func_86()
{
	int iVar0;
	
	iVar0 = unk_0xA3746E7F17F47DC2(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_87()
{
	int iVar0;
	
	iVar0 = unk_0xA3746E7F17F47DC2(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = unk_0xA3746E7F17F47DC2(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_89()
{
	int iVar0;
	
	iVar0 = func_93();
	Local_640.f_3 = iVar0;
	func_90(func_92(133, iVar0, 0, 0));
}

void func_90(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 391;
	Var0.f_1 = unk_0x8ACD527A7E574590();
	Var0.f_2 = iParam0;
	iVar3 = func_91(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 3, iVar3);
	}
}

var func_91(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0BBA31C395EE0D30(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8ACD527A7E574590() || iParam0)
			{
				if (bParam1)
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_93()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_9198;
	iVar0[1] = Global_262145.f_8871;
	iVar0[2] = Global_262145.f_9202;
	iVar0[3] = Global_262145.f_9200;
	iVar0[4] = Global_262145.f_9201;
	iVar0[5] = Global_262145.f_9203;
	iVar0[6] = Global_262145.f_8872;
	iVar0[7] = Global_262145.f_8873;
	iVar0[8] = Global_262145.f_9199;
	iVar0[9] = Global_262145.f_8879;
	iVar0[10] = Global_262145.f_8874;
	iVar0[11] = Global_262145.f_8876;
	iVar0[12] = Global_262145.f_8877;
	iVar0[13] = Global_262145.f_8875;
	iVar0[14] = Global_262145.f_8878;
	iVar0[15] = Global_262145.f_8881;
	iVar0[16] = Global_262145.f_8882;
	iVar0[17] = Global_262145.f_8883;
	iVar0[18] = Global_262145.f_8884;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_96(iVar21) || func_94(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x1BB2D16654966BFB(0f, fVar20);
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (fVar22 <= iVar0[iVar21])
		{
			return iVar21;
		}
		fVar22 = (fVar22 - iVar0[iVar21]);
		iVar21++;
	}
	return func_93();
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
			return 0;
		
		default:
	}
	iVar1 = func_95(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6444)
		{
			if (Global_2452260.f_124[iVar0 /*2*/] == iVar1 && Global_2452260.f_124[iVar0 /*2*/].f_1 == func_92(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		default:
	}
	return -1;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8106;
		
		case 1:
			return Global_262145.f_8885;
		
		case 6:
			return Global_262145.f_8886;
		
		case 7:
			return Global_262145.f_8887;
		
		case 8:
			return Global_262145.f_8107;
		
		case 3:
			return Global_262145.f_8108;
		
		case 4:
			return Global_262145.f_8109;
		
		case 2:
			return Global_262145.f_8110;
		
		case 5:
			return Global_262145.f_8111;
		
		case 9:
			return Global_262145.f_8893;
		
		case 10:
			return Global_262145.f_8888;
		
		case 11:
			return Global_262145.f_8890;
		
		case 12:
			return Global_262145.f_8891;
		
		case 15:
			return Global_262145.f_8895;
		
		case 16:
			return Global_262145.f_8896;
		
		case 17:
			return Global_262145.f_8897;
		
		case 18:
			return Global_262145.f_8898;
		
		case 13:
			return Global_262145.f_8889;
		
		case 14:
			return Global_262145.f_8892;
		
		default:
	}
	return 1;
}

void func_97()
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_640.f_55[iVar0] == unk_0x8DDF51AF4B711D9F())
			{
				if (func_98(iVar0))
				{
					if (!unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_2, iVar0))
					{
						unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_2), iVar0);
					}
				}
				else if (unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_2, iVar0))
				{
					unk_0xA5F70A8B83BDFA49(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_2), iVar0);
				}
			}
			else if (unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_2, iVar0))
			{
				unk_0xA5F70A8B83BDFA49(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_98(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_37(iParam0, &Var0, &uVar3))
	{
		if (func_99(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8AAE56946AAF51A9(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD57B8BE8C701BB42(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD57B8BE8C701BB42(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3B949E96DB795CB7(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0xBF0CC7B3A5D6AC0C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_102(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_100(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404919++;
	return 1;
}

int func_100(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
		{
			if (!unk_0x2CC731F9E664299E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA2490B3CE6382FBB(func_36(unk_0x8ACD527A7E574590()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xDEB29D8C0ACA57B9(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8ACD527A7E574590()))
				{
					if ((func_101(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xE6C94A0E653BD3F1(iVar1) == -1)
							{
								if (unk_0xE6C94A0E653BD3F1(iVar1) == unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xE6C94A0E653BD3F1(iVar1) != unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()))) || unk_0xE6C94A0E653BD3F1(iVar1) == -1)
							{
								if (unk_0xA2490B3CE6382FBB(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x22E8CDD1290DA8EA(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE6C94A0E653BD3F1(iVar1) != iParam8 || unk_0xE6C94A0E653BD3F1(iVar1) == -1)
						{
							if (unk_0xA2490B3CE6382FBB(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x22E8CDD1290DA8EA(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (unk_0x50E425EECEBD370B(unk_0xF555CE342BA0C333(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
	{
		return 1;
	}
	return 0;
}

int func_102(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x8ACD527A7E574590() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iVar1))
				{
					if (!bParam7 || (!unk_0x1E80C02AC16B6622(unk_0xF555CE342BA0C333(iVar1)) && func_101(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) != unk_0xE6C94A0E653BD3F1(iVar1))) || unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) == -1)
						{
							if (((unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) == -1 && uParam9) && bParam6) && func_103(iVar1))
							{
							}
							else if (unk_0x1F2158D615BC4B25(unk_0xF555CE342BA0C333(iVar1)))
							{
								if (unk_0xA2490B3CE6382FBB(func_36(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_106(unk_0x8ACD527A7E574590(), iParam0))
	{
		return 1;
	}
	Global_2456699 = { func_105(iParam0) };
	if (unk_0xB7AE85A639DF6A74(&Global_2456699))
	{
		return 1;
	}
	if (func_104(unk_0x8ACD527A7E574590(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (!iVar0 == func_81())
	{
		if (iVar0 == func_70(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_105(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAEFA54BD5AE42A15(iParam0, &Var0, 13);
	return Var0;
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0x99BD29C80FF8FFC7())
	{
		Global_2456699 = { func_105(iParam0) };
		Global_2456712 = { func_105(iParam1) };
		if (unk_0x149478BD8C953602(&Global_2456699))
		{
			if (unk_0x149478BD8C953602(&Global_2456712))
			{
				unk_0x9B8FA4DF999D2A3A(&Global_2456629, 35, &Global_2456699);
				unk_0x9B8FA4DF999D2A3A(&Global_2456664, 35, &Global_2456712);
				if (Global_2456629 == Global_2456664)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_107()
{
	float fVar0;
	float fVar1;
	
	func_540();
	func_539();
	if (func_537())
	{
		func_438();
	}
	if (!func_7(unk_0x8ACD527A7E574590()))
	{
		if (func_419())
		{
			if (unk_0xB56FEBC510E7E9DE(iLocal_332, 6))
			{
				unk_0xA5F70A8B83BDFA49(&iLocal_332, 6);
			}
			switch (Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_3)
			{
				case 0:
					if (Local_640.f_37 < 2)
					{
						if (Local_640.f_3 != -1)
						{
							func_418(1);
							func_417(1);
						}
					}
					else
					{
						func_417(2);
					}
					break;
				
				case 1:
					func_411(9);
					if (Local_3113.f_8 == 0)
					{
						Local_3113.f_8 = unk_0xAEB19103FF099B1F();
					}
					if (Local_640.f_37 >= 2)
					{
						func_417(2);
						Local_3113.f_9 = unk_0xAEB19103FF099B1F();
					}
					if (func_41())
					{
						func_411(0);
					}
					func_409((func_29() - func_410(&(Local_640.f_43), 0, 0)));
					func_406(func_408((func_29() - func_410(&(Local_640.f_43), 0, 0)), 0), func_407(Local_640.f_3));
					func_395(0, 0);
					func_386();
					func_368();
					if (func_367())
					{
						func_366();
					}
					break;
				
				case 2:
					if (Local_640.f_37 > 2)
					{
						func_418(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_365())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_349(133, fVar0, fVar1, 0, 0, 0, 0);
						func_348(Local_640.f_3, 1);
						func_347(23, 1);
						if (Local_3113.f_8 == 0)
						{
							Local_3113.f_8 = unk_0xAEB19103FF099B1F();
						}
						if (Local_3113.f_9 == 0)
						{
							Local_3113.f_9 = unk_0xAEB19103FF099B1F();
						}
						func_343();
						unk_0x57D24530B1438FD9(1);
						if (func_365())
						{
							unk_0x4AAD01BBE039D160(0f);
							unk_0xCBC9707F3BE3D5C2(0);
						}
						if (Local_640.f_3 == 14)
						{
							func_342(&Local_351);
						}
						func_341();
						if (!func_7(unk_0x8ACD527A7E574590()))
						{
							func_50(62, "AMCH_STARTED", func_340(Local_640.f_3), func_55(), -1, func_55());
							if (func_337("AMCH_WARN", func_339(Local_640.f_3), func_338(Local_640.f_3)))
							{
								unk_0x4ACCE973F9C3CA3B(1);
							}
						}
						if (func_41())
						{
							func_321(678f, 794f, 206f, 8f, 0);
							func_321(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_321(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_417(3);
					}
					break;
				
				case 3:
					if (Local_640.f_37 > 3)
					{
						iLocal_334 = 0;
						func_417(4);
					}
					else
					{
						if (!unk_0xB56FEBC510E7E9DE(Local_640.f_2, 1))
						{
							func_287();
							func_284();
						}
						if (func_283(0) && !func_20(0))
						{
							func_282();
						}
					}
					if (func_365())
					{
						unk_0x8657687F89ED656A(unk_0x8ACD527A7E574590());
					}
					func_281();
					func_258();
					func_438();
					func_395(0, 1);
					func_386();
					func_368();
					func_411(2);
					func_411(5);
					func_411(7);
					break;
				
				case 4:
					if (func_246(&uLocal_343, !unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0)) || unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
					{
						if (func_5(Local_640.f_3))
						{
							if (Local_640.f_37 == 5)
							{
								func_417(5);
							}
						}
						else
						{
							func_417(6);
						}
					}
					func_233();
					func_139();
					func_258();
					func_438();
					func_395(1, 1);
					func_341();
					break;
				
				case 5:
					if (Local_640.f_37 > 5)
					{
						func_417(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_134();
		}
	}
	else
	{
		func_134();
	}
	func_114();
	func_109();
	func_108();
}

void func_108()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_41())
	{
		Var0 = { Local_640.f_67[iLocal_350 /*2*/] };
		if (unk_0x55B325D0BC7EF9C7(Var0.f_1))
		{
			iVar2 = unk_0xFDEE91DAC82E201A(Var0.f_1);
			if (unk_0xE8BD4B74271ABDCC(iVar2))
			{
				if (!unk_0x968EA16107097324(iVar2, 0))
				{
					unk_0xB84D4C251623B60C(&iVar2);
				}
			}
		}
		iLocal_350++;
		if (iLocal_350 >= 10)
		{
			iLocal_350 = 0;
			iLocal_639 = iLocal_638;
			iLocal_638 = 0;
		}
	}
}

void func_109()
{
	if (Local_640.f_37 == 5)
	{
		if (unk_0x55B325D0BC7EF9C7(Local_640.f_67[iLocal_350 /*2*/].f_1))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_350 /*2*/].f_1)))
			{
				if (!unk_0xB56FEBC510E7E9DE(iLocal_626, iLocal_350))
				{
					unk_0x573691DB812DC8AA(&iLocal_626, iLocal_350);
					uLocal_627[iLocal_350] = unk_0xBE8BBC6340F2B731();
					unk_0x44F52B5BE61F39DD(uLocal_627[iLocal_350], "Explosion_Countdown", unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_350 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xDB8724F8CA3DA851(uLocal_627[iLocal_350], "Time", 30f);
				}
				if ((30000 - func_410(&(Local_640.f_45), 0, 0)) >= 0)
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_350 /*2*/].f_1), 0))
					{
						func_411(1);
						iLocal_638 = 1;
					}
				}
				else if (unk_0x378B5BA8197FAE67(Local_640.f_67[iLocal_350 /*2*/].f_1))
				{
					unk_0x1E7F0537BF0E8998(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_350 /*2*/].f_1));
					unk_0x6ED852BC6DD22530(unk_0xFDEE91DAC82E201A(Local_640.f_67[iLocal_350 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xB56FEBC510E7E9DE(iLocal_626, iLocal_350) && !unk_0x4FB4BC44492DEE8D(uLocal_627[iLocal_350]))
			{
				unk_0xE24358A92698B60D(uLocal_627[iLocal_350]);
			}
		}
		if (iLocal_639)
		{
			if (!func_79(unk_0x8ACD527A7E574590()))
			{
				func_111(func_408((30000 - func_410(&(Local_640.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
				func_110();
			}
		}
	}
}

void func_110()
{
	Global_1339928.f_941 = 1;
}

void func_111(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_112(7, iVar0);
		Global_1339928.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3988.f_172[iVar0] = iParam2;
		Global_1339928.f_3988.f_216[iVar0] = iParam3;
		Global_1339928.f_3988.f_183[iVar0] = iParam4;
		Global_1339928.f_3988.f_194[iVar0] = iParam5;
		Global_1339928.f_3988.f_249[iVar0] = iParam6;
		Global_1339928.f_3988.f_260[iVar0] = iParam7;
		Global_1339928.f_3988.f_205[iVar0] = iParam8;
		Global_1339928.f_3988.f_314[iVar0] = iParam9;
		Global_1339928.f_3988.f_325[iVar0] = iParam10;
		Global_1339928.f_3988.f_357[iVar0] = iParam11;
		Global_1339928.f_3988.f_238[iVar0] = iParam12;
		Global_1339928.f_3988.f_271[iVar0] = iParam13;
		Global_1339928.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_112(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_1339928.f_4594[iParam0]), iParam1);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1339928.f_4594[iParam0], iParam1);
}

void func_114()
{
	if (((func_12(unk_0x8ACD527A7E574590(), 1, 1) && !func_7(unk_0x8ACD527A7E574590())) && !func_130(unk_0x8ACD527A7E574590())) && func_419())
	{
		if (Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_3 == 1)
		{
			func_127(func_129(Local_640.f_3), func_339(Local_640.f_3), 0);
		}
		else if (Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_3 == 3)
		{
			if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 10))
			{
				func_115(func_338(Local_640.f_3), 0);
			}
			else
			{
				func_115("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_341();
		}
	}
	else
	{
		func_341();
	}
}

void func_115(char* sParam0, bool bParam1)
{
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return;
	}
	if (unk_0xED3EE687D9336ECE(sParam0) > 23)
	{
		return;
	}
	if (func_125(sParam0))
	{
		return;
	}
	func_119();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x664B47C58CE8A0A4(), 24);
	Global_1312577.f_7 = unk_0x39BD4614CF899227(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_118();
	func_117(bParam1);
	func_116();
}

void func_116()
{
	unk_0x573691DB812DC8AA(&(Global_1312577.f_56), 1);
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		unk_0x573691DB812DC8AA(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0xA5F70A8B83BDFA49(&(Global_1312577.f_56), 0);
}

void func_118()
{
	Global_1312577.f_8 = unk_0x3273EF918EE77B03(unk_0xE23D71F521207E8D(), 86400000);
	Global_1312577.f_9 = unk_0xE23D71F521207E8D();
}

void func_119()
{
	func_121();
	func_120(0);
}

void func_120(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4C779B19E6DDCDA2();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xE23D71F521207E8D();
		Global_1312577.f_9 = unk_0xE23D71F521207E8D();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_121()
{
	if (!func_124())
	{
	}
	if (func_123())
	{
		unk_0xBEF89EB43E4852EE(&(Global_1312577.f_10));
		func_122();
		unk_0xB4E213851ED28262();
	}
}

void func_122()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xA50C1D6E503AA51E(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xA50C1D6E503AA51E(Global_1312577.f_50);
			unk_0xA50C1D6E503AA51E(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x0E477F7C472602E8(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x0E477F7C472602E8(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0xFC059569EB1C537B(Global_1312577.f_55);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_30));
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_14));
			unk_0xFC059569EB1C537B(Global_1312577.f_54);
			unk_0x703D2B4B1C7E10B6(&(Global_1312577.f_46));
			unk_0x82E0649BF28E05D3(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_123()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_124()
{
	if (!func_123())
	{
		return 0;
	}
	unk_0x9C55668C318B45CE(&(Global_1312577.f_10));
	func_122();
	return unk_0x911D2DB971FD2DC2();
}

bool func_125(char* sParam0)
{
	if (!func_123())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_126(sParam0);
	}
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return 0;
	}
	return unk_0x39BD4614CF899227(sParam0) == unk_0x39BD4614CF899227(&(Global_1312577.f_10));
}

bool func_126(char* sParam0)
{
	if (!func_123())
	{
		return 0;
	}
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return 0;
	}
	return unk_0x39BD4614CF899227(sParam0) == unk_0x39BD4614CF899227(&(Global_1312577.f_14));
}

void func_127(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return;
	}
	if (unk_0xED3EE687D9336ECE(sParam0) > 23)
	{
		return;
	}
	if (unk_0x0AAC2160036975D9(sParam1))
	{
		return;
	}
	if (unk_0xED3EE687D9336ECE(sParam1) > 23)
	{
		return;
	}
	if (func_128(sParam0, sParam1))
	{
		return;
	}
	func_119();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), unk_0x664B47C58CE8A0A4(), 24);
	Global_1312577.f_7 = unk_0x39BD4614CF899227(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_118();
	func_117(bParam2);
	func_116();
}

bool func_128(char* sParam0, char* sParam1)
{
	if (!func_123())
	{
		return 0;
	}
	if (unk_0x0AAC2160036975D9(sParam0))
	{
		return 0;
	}
	if (unk_0x0AAC2160036975D9(sParam1))
	{
		return 0;
	}
	if (!unk_0x39BD4614CF899227(sParam0) == unk_0x39BD4614CF899227(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x39BD4614CF899227(sParam1) == unk_0x39BD4614CF899227(&(Global_1312577.f_14));
}

char* func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED())) || unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED())) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) || unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) || unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED())) || unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED())) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) || unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) || unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED())) || unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED());
					iVar1 = unk_0xDF1398076E26B0E4(iVar0);
					if (unk_0x9FAD4C61F8FD96DE(iVar1) && unk_0x583E994764B3211E(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xFB599990805DCA25(unk_0x77F050A399DB77ED(), joaat("weapon_sniperrifle"), 0) && !unk_0xFB599990805DCA25(unk_0x77F050A399DB77ED(), joaat("weapon_heavysniper"), 0)) && !unk_0xFB599990805DCA25(unk_0x77F050A399DB77ED(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED())) || unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED())) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) || unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) || unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_130(int iParam0)
{
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		if ((func_133() && !func_132()) || func_131(unk_0x8ACD527A7E574590(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1573875.f_13)))
		{
			if (!func_1(&(Global_1573875.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1573875.f_13));
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 9);
}

bool func_131(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_206, iParam1);
}

bool func_132()
{
	return Global_1312416.f_1;
}

bool func_133()
{
	return Global_1312416;
}

void func_134()
{
	if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 6))
	{
		unk_0xBD15B9A51130761A();
		func_395(1, 1);
		unk_0xE24358A92698B60D(iLocal_340);
		unk_0xA5F70A8B83BDFA49(&iLocal_332, 4);
		func_138();
		func_136();
		unk_0xC5FCA7E600AF7F63(0f, 0);
		unk_0x573691DB812DC8AA(&iLocal_332, 6);
		func_135();
	}
}

void func_135()
{
	Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_6 = 0;
}

void func_136()
{
	if (Global_2409241.f_6 == unk_0x8EC1FFF6B789C28E())
	{
		func_137();
	}
}

void func_137()
{
	struct<25> Var0;
	
	if (unk_0x4D1CAE1CFC4C8868(Global_2409241.f_6))
	{
		if (!Global_2409241.f_6 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2409241 = { Var0 };
	Global_2409241.f_6 = -1;
}

void func_138()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x8EC1FFF6B789C28E())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_139()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1, 0))
	{
		if (func_7(unk_0x8ACD527A7E574590()))
		{
			unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1), 0);
			return;
		}
		if (func_130(unk_0x8ACD527A7E574590()))
		{
			unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1), 0);
			return;
		}
		func_199(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3113.f_6 = (Local_3113.f_6 + iVar0);
			if (!Global_262145.f_9349)
			{
				func_198(10, Local_3113.f_6);
			}
			Global_2442856 = iVar0;
			if (func_197())
			{
				func_188(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x7D0DD300F4BE97CC(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3113.f_7 = (Local_3113.f_7 + iVar1);
			func_187();
			func_140(0, unk_0x77F050A399DB77ED(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
		}
		unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1), 0);
	}
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_141(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_141(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_151(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x1F2158D615BC4B25(iParam1))
		{
			if (unk_0x94195F7CA642F937(iParam1))
			{
				uVar1 = unk_0xCBABEE38E5DAB356(iParam1);
				func_147(unk_0x5C9D7C3DA25581D1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_142(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_145(iParam0, 1) };
	if (iParam0 == func_144(unk_0x77F050A399DB77ED()))
	{
		func_143(1);
	}
	func_147(Var0, iParam1, 0, sParam2);
}

void func_143(int iParam0)
{
	Global_2426494.f_1322 = iParam0;
}

int func_144(int iParam0)
{
	return iParam0;
}

Vector3 func_145(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_146(unk_0x77F050A399DB77ED()) && unk_0x7DF7F572759C0E1B(unk_0x1B5ACB4894956DC7()) == 4)
	{
		Var0 = { unk_0x03C14E8A9400F2A9(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		fVar3 = unk_0x7578EBD2DA3F8DD2(iParam0);
	}
	unk_0x2C8CA5222767F3E4(unk_0xDF1398076E26B0E4(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xB91BD3EFC17D9612(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_146(int iParam0)
{
	return iParam0;
}

void func_147(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426494.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426494.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426494.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426494.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426494.f_741[iVar1 /*29*/].f_4 = func_150(Global_2426494.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426494.f_741[iVar1 /*29*/].f_7 = unk_0xE23D71F521207E8D();
			Global_2426494.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426494.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426494.f_741[iVar1 /*29*/].f_9 = func_149();
			Global_2426494.f_741[iVar1 /*29*/].f_10 = func_148();
			StringCopy(&(Global_2426494.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_148()
{
	if (Global_2426494.f_1322)
	{
		Global_2426494.f_1322 = 0;
		return 1;
	}
	Global_2426494.f_1322 = 0;
	return 0;
}

var func_149()
{
	var uVar0;
	
	uVar0 = Global_2426494.f_1324;
	Global_2426494.f_1324 = 1;
	return uVar0;
}

float func_150(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xA2490B3CE6382FBB(unk_0x8BA9E59C6E6D644E(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_151(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_152(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_152(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_186(unk_0x8ACD527A7E574590()) || func_185(unk_0x8ACD527A7E574590()))
	{
		if (Global_262145.f_7495 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7495;
		}
	}
	else if (Global_262145.f_5004 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5004;
	}
	if (func_184(uParam2))
	{
	}
	if (func_183())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_181(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_180(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_178(0, &iVar1);
					break;
				
				case 3:
					func_178(1, &iVar1);
					break;
				
				case 1:
					func_176(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_173(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_162((func_172(unk_0x8ACD527A7E574590()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC582843DAE0B318C(iVar1, iParam8, iParam9);
				if (Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_2 != -1)
				{
					func_173(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_157(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_153((func_155(unk_0x8ACD527A7E574590()) + iVar1));
			}
			else
			{
				func_153((func_155(unk_0x8ACD527A7E574590()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_153(int iParam0)
{
	if (func_183())
	{
		Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_192.f_5 = iParam0;
		func_154(joaat("mpply_globalxp"), iParam0);
	}
}

void func_154(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, uParam1, 1);
	}
}

int func_155(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x8ACD527A7E574590())
			{
				return func_156(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1586488[iParam0 /*408*/].f_192.f_5;
			}
		}
		else
		{
			return func_156(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_157(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_105(unk_0x8ACD527A7E574590()) };
	if (unk_0x99BD29C80FF8FFC7())
	{
		if (unk_0x149478BD8C953602(&Var0))
		{
			iVar13 = func_160(func_161(&Var0));
			if (iVar13 == 0)
			{
				func_159(&Global_1347494, iParam0);
				func_158(joaat("mpply_crew_local_xp_0"), Global_1347494);
			}
			else if (iVar13 == 1)
			{
				func_159(&Global_1347495, iParam0);
				func_158(joaat("mpply_crew_local_xp_1"), Global_1347495);
			}
			else if (iVar13 == 2)
			{
				func_159(&Global_1347496, iParam0);
				func_158(joaat("mpply_crew_local_xp_2"), Global_1347496);
			}
			else if (iVar13 == 3)
			{
				func_159(&Global_1347497, iParam0);
				func_158(joaat("mpply_crew_local_xp_3"), Global_1347497);
			}
			else if (iVar13 == 4)
			{
				func_159(&Global_1347498, iParam0);
				func_158(joaat("mpply_crew_local_xp_4"), Global_1347498);
			}
		}
	}
}

void func_158(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347489 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347491 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347491 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347492 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347494 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347496 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347497 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347498 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347499 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347500 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347501 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347502 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347503 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347504 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347505 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_160(int iParam0)
{
	if (iParam0 == Global_1347489)
	{
		return 0;
	}
	else if (iParam0 == Global_1347490)
	{
		return 1;
	}
	else if (iParam0 == Global_1347491)
	{
		return 2;
	}
	else if (iParam0 == Global_1347492)
	{
		return 3;
	}
	else if (iParam0 == Global_1347493)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_161(var uParam0)
{
	if (unk_0x99BD29C80FF8FFC7())
	{
		if (unk_0x149478BD8C953602(uParam0))
		{
			return Global_2440905;
		}
	}
	return Global_2440905;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	if (func_183())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7470 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347609[func_171(-1)])
				{
					unk_0xC582843DAE0B318C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347609[func_171(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7469 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC582843DAE0B318C(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7469 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC582843DAE0B318C(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_170(unk_0x8ACD527A7E574590()))
		{
			Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_192.f_1 = iParam0;
			Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_192.f_6 = func_168(iParam0, 1);
		}
		func_167(629, iParam0, -1, 1);
		func_166(630, func_168(iParam0, 1), -1, 1);
		Global_1347609[func_171(-1)] = iParam0;
		func_163(7, 0);
	}
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_165(iParam0, iParam1))
	{
		iVar0 = func_164();
		Global_2440882[iVar0] = iParam0;
	}
}

int func_164()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2440882[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_165(int iParam0, var uParam1)
{
	if (Global_1315898)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315910) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_171(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_171(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347555[func_171(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347561[func_171(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347567[func_171(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347573[func_171(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347531[func_171(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347537[func_171(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347543[func_171(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347549[func_171(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347507[func_171(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347513[func_171(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347519[func_171(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347525[func_171(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347579[func_171(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347585[func_171(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347591[func_171(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347597[func_171(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347603[func_171(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347609[func_171(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347615[func_171(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488752[0 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488752[1 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2488752[2 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2488752[3 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3683:
			Global_2488803[func_171(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347621[func_171(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347627[func_171(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347633[func_171(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347639[func_171(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488777[0 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488777[1 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488777[2 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488777[3 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2488777[4 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_169(iParam0, 0);
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_273200[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273200[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_170(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_2426494.f_1, iParam0);
	}
	return 1;
}

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_172(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x8ACD527A7E574590())
			{
				return Global_1347609[func_171(-1)];
			}
			else if (func_170(iParam0))
			{
				return Global_1586488[iParam0 /*408*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347609[func_171(-1)];
	}
	return 0;
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_175(iParam0, func_171(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_174(iParam0))
	{
		func_166(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_167(iParam0, iVar0, iParam2, 1);
	}
}

int func_174(int iParam0)
{
	if (Global_1347488)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3683:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
				return 1;
				break;
			}
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_171(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590());
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		iVar4 = unk_0x209E209593217021(iVar0);
		if (unk_0x5D14B2034A3E40D3(iVar4))
		{
			iVar5 = unk_0x42145D1DD048146E(iVar4);
			if (unk_0xE6C94A0E653BD3F1(iVar5) != -1)
			{
				if (unk_0xE6C94A0E653BD3F1(iVar5) == iVar1 || func_65(unk_0xE6C94A0E653BD3F1(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x8ACD527A7E574590())
					{
						if (func_106(unk_0x8ACD527A7E574590(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_177(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_178(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xD92F4D7123D878D4())
		{
			iVar3 = iVar0;
			if (unk_0x5D14B2034A3E40D3(iVar3))
			{
				iVar4 = unk_0x42145D1DD048146E(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x8ACD527A7E574590())
					{
						iVar1++;
						if (func_106(unk_0x8ACD527A7E574590(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x8ACD527A7E574590())
				{
					if (func_179(unk_0x8ACD527A7E574590(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_106(unk_0x8ACD527A7E574590(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_177(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_177(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_179(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (unk_0x9C0DFB51F8482CB5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x737E62570AEFEFAA(iParam0) > func_172(unk_0x8ACD527A7E574590()))
		{
			iParam0 = -func_172(unk_0x8ACD527A7E574590());
		}
	}
	if (func_182(8000, 0, 0) > 0)
	{
		if (func_182(8000, 0, 0) < (iParam0 + func_172(unk_0x8ACD527A7E574590())))
		{
			iParam0 = (func_182(8000, 0, 0) - func_172(unk_0x8ACD527A7E574590()));
		}
	}
	return iParam0;
}

int func_182(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_273200[iParam0];
}

int func_183()
{
	return 1;
}

int func_184(var uParam0)
{
	if (unk_0x9D14A941038EF8A3(uParam0))
	{
		return 1;
	}
	else if (unk_0x35D1CAD6ADAB6491(uParam0, "") || unk_0x35D1CAD6ADAB6491(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_185(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_186(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

void func_187()
{
	Global_2442026 = 1;
}

void func_188(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_197())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
			if (iParam1 > 0)
			{
				func_189(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
			func_189(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_197())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x0539DAE87D010814(func_16()) || unk_0x292CA3F0A08EF671())
		{
			Global_2554355 = 1;
			return 0;
		}
		if (Global_2441709)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2554356 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2553876[iVar1 /*72*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x01478567A525F96A(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x673718B863EC75DD(iVar3))
		{
			*uParam0 = func_196(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2553876[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2554352 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2554354 = 1;
			Global_2554357 = iParam4;
			Global_2554359 = iParam3;
			Global_2554360 = 1;
			Global_2554358 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2554357 = iParam4;
			Global_2554359 = iParam3;
			Global_2554360 = 1;
			Global_2554358 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_195(1, iParam4);
			Global_2554354 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_190(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_190(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x573691DB812DC8AA(&(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_191(iParam0);
	}
}

void func_191(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_197())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_194(iParam0))
		{
			if (!bVar0)
			{
				unk_0x22A86DAAC9EDB234();
			}
		}
		else if (!bVar0)
		{
			unk_0x6A877E329E609E74(Global_2553876[iParam0 /*72*/]);
		}
		func_192(&(Global_2553876[iParam0 /*72*/]));
	}
}

void func_192(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_193(&(uParam0->f_8.f_3));
	func_193(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_193(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_194(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553876[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1)
{
	Global_2442987 = uParam1;
	Global_2442986 = iParam0;
}

int func_196(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2553876[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_197())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2553876[iVar0 /*72*/].f_2 = 1;
			Global_2553876[iVar0 /*72*/].f_1 = uParam5;
			Global_2553876[iVar0 /*72*/].f_3 = uParam1;
			Global_2553876[iVar0 /*72*/].f_4 = uParam2;
			Global_2553876[iVar0 /*72*/].f_7 = uParam3;
			Global_2553876[iVar0 /*72*/].f_5 = 0;
			Global_2553876[iVar0 /*72*/] = iParam0;
			Global_2553876[iVar0 /*72*/].f_6 = iParam4;
			Global_2553876[iVar0 /*72*/].f_68 = uParam8;
			Global_2553876[iVar0 /*72*/].f_67 = uParam7;
			Global_2553876[iVar0 /*72*/].f_71 = 0;
			Global_2554352 = 0;
			if (bParam6)
			{
				Global_2553876[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_197()
{
	if (unk_0x2C063B4379F0C076())
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2457713.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4954)
		{
			iParam1 = Global_262145.f_4954;
		}
		Global_2457713.f_270 = iParam1;
		Global_2457713.f_271 = 0;
	}
}

void func_199(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x8DDF51AF4B711D9F(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_640.f_1 - iLocal_330)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_9284)
		{
			iVar1 = Global_262145.f_9284;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_232() * iVar1);
		*uParam1 = (func_231() * iVar1);
		fVar2 = func_230();
		if (fVar2 > 0f && !unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_229())
			{
				iVar3 = func_229();
			}
			iVar4 = Local_640.f_51;
			if (iVar4 > func_228())
			{
				iVar4 = func_228();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_221(func_227(), func_226(), iVar3, fVar2, func_225(), func_224(), func_223(), iVar4)) * Global_262145.f_9297)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_221(func_220(), func_219(), iVar3, fVar2, func_225(), func_224(), func_223(), iVar4)) * Global_262145.f_9298)));
		}
		else
		{
			func_217(1);
		}
	}
	else
	{
		func_217(0);
	}
	func_200(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_216())
		{
			if (func_215(0))
			{
				if (unk_0x860CE5C791DC28F5(func_214()))
				{
					if (func_213() == 100)
					{
						iVar0 = *uParam0;
						*uParam0 = 0;
					}
					else
					{
						iVar0 = ((*uParam0 / 100) * func_213());
						*uParam0 = (*uParam0 - iVar0);
					}
					func_211(&iVar0);
					if (iParam1 == 1)
					{
						func_204("GB_BCUT_TICK1", func_214(), iVar0, 0, 0, 1, 1);
					}
					func_203(20);
					func_201(func_214(), iVar0, 1);
				}
			}
		}
	}
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 423;
		Var0.f_1 = unk_0x8ACD527A7E574590();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 5, func_202(iParam0));
	}
}

var func_202(int iParam0)
{
	var uVar0;
	
	unk_0x573691DB812DC8AA(&uVar0, iParam0);
	return uVar0;
}

void func_203(int iParam0)
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_4647.f_7), iParam0);
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x2743F2603B2676CC(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x2743F2603B2676CC(iParam1), 64);
		}
		unk_0x2B8B3581C4E63AD1(sParam0);
		unk_0xFC059569EB1C537B(func_58(iParam1, -2, 1, 0));
		unk_0x82E0649BF28E05D3(func_209(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xFC059569EB1C537B(iParam3);
		}
		unk_0xA50C1D6E503AA51E(iParam2);
		iVar0 = unk_0x70E981B5CF659D8A(0, 1);
		func_205(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_205(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_208() || !unk_0x4FE03C08BC095A57()) || !func_14(unk_0x8ACD527A7E574590(), 0))
	{
		return;
	}
	iVar0 = func_206(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1715089.f_5[iVar0 /*53*/] = iParam0;
		Global_1715089.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1715089.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1715089.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1715089.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1715089.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1715089.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1715089.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1715089 - 1))
	{
		if (iParam0 > Global_1715089.f_5[iVar0 /*53*/].f_1)
		{
			func_207(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1715089++;
	if (Global_1715089 > 5)
	{
		Global_1715089 = 5;
		return Global_1715089;
	}
	return (Global_1715089 - 1);
}

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1715089.f_5[iVar0 /*53*/] = { Global_1715089.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_208()
{
	return unk_0x368F9074322AFD91(-1762644250);
}

var func_209(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_210(&cVar0);
}

var func_210(char[4] cParam0)
{
	return cParam0;
}

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_212();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_212()
{
	return Global_262145.f_10228;
}

int func_213()
{
	return Global_262145.f_10227;
}

int func_214()
{
	return Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8;
}

bool func_215(bool bParam0)
{
	return func_71(unk_0x8ACD527A7E574590(), bParam0);
}

bool func_216()
{
	return func_72(unk_0x8ACD527A7E574590());
}

void func_217(bool bParam0)
{
	if (bParam0)
	{
		if (func_218(1))
		{
			unk_0x573691DB812DC8AA(&Global_1573899, 1);
		}
	}
	else if (func_218(2))
	{
		unk_0x573691DB812DC8AA(&Global_1573899, 2);
	}
}

int func_218(int iParam0)
{
	var uVar0;
	
	uVar0 = func_175(2507, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xB56FEBC510E7E9DE(uVar0, 0) && unk_0xB56FEBC510E7E9DE(iVar0, 1)) && unk_0xB56FEBC510E7E9DE(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xB56FEBC510E7E9DE(iVar0, 3) && unk_0xB56FEBC510E7E9DE(iVar0, 4)) && unk_0xB56FEBC510E7E9DE(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xB56FEBC510E7E9DE(iVar0, 6) && unk_0xB56FEBC510E7E9DE(iVar0, 7)) && unk_0xB56FEBC510E7E9DE(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xB56FEBC510E7E9DE(iVar0, 9) && unk_0xB56FEBC510E7E9DE(iVar0, 10)) && unk_0xB56FEBC510E7E9DE(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_219()
{
	return Global_262145.f_8785;
}

int func_220()
{
	return Global_262145.f_8783;
}

int func_221(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_222(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_223()
{
	return Global_262145.f_8788;
}

float func_224()
{
	return Global_262145.f_8787;
}

float func_225()
{
	return Global_262145.f_8786;
}

int func_226()
{
	return Global_262145.f_8784;
}

int func_227()
{
	return Global_262145.f_8782;
}

int func_228()
{
	return Global_262145.f_9190;
}

int func_229()
{
	return Global_262145.f_9189;
}

var func_230()
{
	if (func_20(0))
	{
		return Global_262145.f_8809;
	}
	if (func_20(1))
	{
		return Global_262145.f_8810;
	}
	if (func_20(2))
	{
		return Global_262145.f_8811;
	}
	return Global_262145.f_8812;
}

int func_231()
{
	return Global_262145.f_8781;
}

int func_232()
{
	return Global_262145.f_8780;
}

void func_233()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1, 1) && (func_245() || unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0)))
	{
		if (func_56(func_244()))
		{
			func_243();
		}
		if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
		{
			if (!unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
			{
				if (func_283(0))
				{
					iVar2 = Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4;
					func_239(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_237(63, func_238(Local_640.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_339(Local_640.f_3), 1, 2);
						}
						else if (func_236())
						{
							func_237(68, func_238(Local_640.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_339(Local_640.f_3), 1, 2);
						}
						else
						{
							func_237(63, func_238(Local_640.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_339(Local_640.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_237(66, func_238(Local_640.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_339(Local_640.f_3), 1, 2);
						}
						else if (func_236())
						{
							func_237(74, func_238(Local_640.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_640.f_3), 1, 2);
						}
						else
						{
							func_237(66, func_238(Local_640.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_640.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_237(66, func_238(Local_640.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_339(Local_640.f_3), 1, 2);
						}
						else if (func_236())
						{
							func_237(74, func_238(Local_640.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_640.f_3), 1, 2);
						}
						else
						{
							func_237(66, func_238(Local_640.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_640.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0x209E209593217021(Local_640.f_4[0]);
						if (unk_0x5D14B2034A3E40D3(uVar3))
						{
							iVar4 = unk_0x42145D1DD048146E(iVar3);
							if (Local_2760[Local_640.f_4[0] /*11*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2760[Local_640.f_4[0] /*11*/].f_4;
							func_239(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_235(75, func_81(), func_238(Local_640.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_339(Local_640.f_3), -1, fVar1, 1, 2, unk_0x2743F2603B2676CC(iVar4));
							}
							else if (func_236())
							{
								func_235(76, func_81(), func_238(Local_640.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_339(Local_640.f_3), iVar0, -1082130432, 1, 2, unk_0x2743F2603B2676CC(iVar4));
							}
							else
							{
								func_235(75, func_81(), func_238(Local_640.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_339(Local_640.f_3), iVar0, -1082130432, 1, 2, unk_0x2743F2603B2676CC(iVar4));
							}
						}
					}
				}
				else
				{
					func_50(65, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2);
				}
			}
			else
			{
				func_49("", "", 1);
			}
			unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1), 1);
			func_234(133);
		}
	}
}

void func_234(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_235(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_82(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_16 = iParam1;
	StringCopy(&(Var0.f_55), sParam2, 16);
	StringCopy(&(Var0.f_59), sParam6, 16);
	StringCopy(&(Var0.f_23), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_65 = iParam9;
	Var0.f_66 = iParam10;
	return func_51(&Var0);
}

int func_236()
{
	return 0;
}

int func_237(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_82(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_51(&Var0);
}

char* func_238(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x4964239DC8B02AF6())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x4964239DC8B02AF6())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_239(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_240(Local_640.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (unk_0xBBDA792448DB5A89(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x4964239DC8B02AF6())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_242(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x4964239DC8B02AF6())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_241(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_241(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_242(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_243()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_2 != 0)
		{
			Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_244()
{
	return Global_2426494.f_2138[0 /*70*/].f_1;
}

bool func_245()
{
	return unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 25);
}

int func_246(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((*uParam0 > 0 && !func_257()) && !(func_256(unk_0x8ACD527A7E574590(), 0) && (func_255(unk_0x8ACD527A7E574590()) || func_253(unk_0x8ACD527A7E574590()))))
	{
		func_252();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_45(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 25);
				if (bParam1)
				{
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4413), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_251(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_45(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_248();
				func_251(uParam0, 2);
			}
			break;
		
		case 2:
			func_248();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_247("AMEV_LBD_HELP"))
				{
					unk_0x4ACCE973F9C3CA3B(1);
				}
				func_251(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4413), 1);
				func_251(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4413), 1);
			return 1;
	}
	return 0;
}

bool func_247(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_248()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 0))
	{
		if (((((!unk_0xF0F27AB23835252C() && !unk_0xB56FEBC510E7E9DE(Global_2457713.f_741, 2)) && func_12(unk_0x8ACD527A7E574590(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0x2CC731F9E664299E())
		{
			unk_0x573691DB812DC8AA(&(Global_2457713.f_4413), 1);
			func_250("AMEV_LBD_HELP", -1);
			func_249(1);
			unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4413), 0);
		}
	}
}

void func_249(int iParam0)
{
	unk_0x4533116407F5EAF8(3, 21, 200, 0, 0);
	if (iParam0 && !func_257())
	{
		unk_0xBBEB613A917D7EE8(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_250(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 0, iParam1);
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_252()
{
	Global_2442027 = 1;
}

bool func_253(int iParam0)
{
	return func_254(iParam0, 19);
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_8.f_4, iParam1);
}

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_254(iParam0, 9);
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	if (Global_1608060[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1608060[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_257()
{
	return Global_2426494.f_2138[0 /*70*/].f_1 != 0;
}

void func_258()
{
	int iVar0[3];
	int iVar4;
	var uVar5[3];
	var uVar9[3];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[3];
	var uVar30;
	var uVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	if (Local_640.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_280() && !func_79(unk_0x8ACD527A7E574590()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_81();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_640.f_4[iVar16] > -1)
			{
				uVar30 = unk_0x209E209593217021(Local_640.f_4[iVar16]);
				if (unk_0x5D14B2034A3E40D3(uVar30))
				{
					iVar4 = unk_0x42145D1DD048146E(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2760[Local_640.f_4[iVar16] /*11*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_239(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2760[Local_640.f_4[iVar16] /*11*/].f_4, 1);
								iVar24++;
								if (func_215(1))
								{
									if (func_71(iVar4, 1))
									{
										uVar26[iVar16] = func_58(iVar4, -2, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x8DDF51AF4B711D9F();
		if (func_79(unk_0x8ACD527A7E574590()))
		{
			uVar31 = func_278();
			iVar32 = unk_0xAE5AB5A8DE4D19AF(uVar31);
			if (unk_0x860CE5C791DC28F5(iVar32))
			{
				iVar33 = unk_0x68F357506549EA00(iVar32);
				if (unk_0x5D14B2034A3E40D3(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_239(&iVar13, &fVar18, iLocal_334, 1);
		func_239(&iVar14, &fVar19, Local_2760[iVar17 /*11*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_410(&(Local_640.f_39), 0, 0);
		iVar15 = func_408(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_277(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xB56FEBC510E7E9DE(iLocal_332, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_280() || Local_640.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_640.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_273(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_238(Local_640.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_274(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_236())
		{
			func_272(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_274(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_263(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_238(Local_640.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_274(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_259();
	}
}

void func_259()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_262();
	if (fVar0 >= 0f)
	{
		if (Local_640.f_37 == 3)
		{
			if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
			{
				if (unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()) || unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()))
				{
					iVar1 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iVar1, 0))
					{
						func_261(iVar1, &fLocal_338);
						fVar2 = (fVar0 + fLocal_338);
						unk_0xC5FCA7E600AF7F63(fVar2, 1);
						func_260(fVar0);
						return;
					}
				}
			}
		}
		if (func_247("AMCH_FLYLOW"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
		if (unk_0xB56FEBC510E7E9DE(iLocal_332, 4))
		{
			unk_0xE24358A92698B60D(iLocal_340);
			unk_0xA5F70A8B83BDFA49(&iLocal_332, 4);
		}
		unk_0xC5FCA7E600AF7F63(0f, 0);
	}
}

void func_260(float fParam0)
{
	float fVar0;
	
	if (unk_0x4180F594F5BB5468(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_411(6);
			if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 4))
			{
				unk_0xBBEB613A917D7EE8(iLocal_340, "Altitude_Warning", "EXILE_1", 1);
				unk_0x573691DB812DC8AA(&iLocal_332, 4);
			}
		}
		else
		{
			if (func_247("AMCH_FLYLOW"))
			{
				unk_0x4ACCE973F9C3CA3B(1);
			}
			if (unk_0xB56FEBC510E7E9DE(iLocal_332, 4))
			{
				unk_0xE24358A92698B60D(iLocal_340);
				unk_0xA5F70A8B83BDFA49(&iLocal_332, 4);
			}
		}
	}
}

float func_261(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	unk_0x8BE5D4DC1A953832(Var1, uParam1, 1);
	unk_0x8BE5D4DC1A953832(Var1, &uVar4, 0);
	if (unk_0xAA90D69E13911BBF())
	{
		func_411(3);
		unk_0x573691DB812DC8AA(&iLocal_332, 10);
		func_27(&uLocal_328, 0, 0);
	}
	else if (unk_0xB56FEBC510E7E9DE(iLocal_332, 10))
	{
		if (func_1(&uLocal_328, 2000, 0))
		{
			unk_0xA5F70A8B83BDFA49(&iLocal_332, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_262()
{
	switch (Local_640.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_269(0) == 0)
	{
		return;
	}
	func_268();
	iVar1 = 0;
	if (((Global_2441617[0] != iParam0 || Global_2441617[1] != iParam1) || Global_2441617[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2441617[0] = iParam0;
	Global_2441617[1] = iParam1;
	Global_2441617[2] = iParam2;
	Global_2441617[3] = 0;
	Global_2441617[4] = 0;
	if (Global_2441617[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[0]);
			Global_2441623[0 /*16*/] = { func_267(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_264(iParam3, &(Global_2441623[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16);
		}
	}
	if (Global_2441617[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[1]);
			Global_2441623[1 /*16*/] = { func_267(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_264(iParam4, &(Global_2441623[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17);
		}
	}
	if (Global_2441617[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[2]);
			Global_2441623[2 /*16*/] = { func_267(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_264(iParam5, &(Global_2441623[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18);
		}
	}
	if (bParam12)
	{
		func_264(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x8ACD527A7E574590() != func_81())
			{
				if (func_130(unk_0x8ACD527A7E574590()) == 0)
				{
					func_264(iParam7, unk_0x2743F2603B2676CC(unk_0x8ACD527A7E574590()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0x8ACD527A7E574590()) == 0)
			{
				func_264(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0x8ACD527A7E574590()) == 0)
			{
				func_264(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_184(sParam14))
	{
		sVar2 = sParam14;
	}
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0);
	*iParam10 = 0;
	func_110();
}

void func_264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_112(6, iVar0);
		Global_1339928.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3436.f_183[iVar0] = iParam3;
		Global_1339928.f_3436.f_172[iVar0] = iParam2;
		Global_1339928.f_3436.f_260[iVar0] = iParam4;
		Global_1339928.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339928.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339928.f_3436.f_443[iVar0] = iParam7;
		Global_1339928.f_3436.f_454[iVar0] = fParam8;
		Global_1339928.f_3436.f_497[iVar0] = iParam9;
		Global_1339928.f_3436.f_508[iVar0] = iParam10;
		Global_1339928.f_3436.f_205[iVar0] = iParam11;
		Global_1339928.f_3436.f_216[iVar0] = iParam12;
		Global_1339928.f_3436.f_227[iVar0] = iParam13;
		Global_1339928.f_3436.f_238[iVar0] = iParam14;
		Global_1339928.f_3436.f_249[iVar0] = iParam15;
		Global_1339928.f_3436.f_519[iVar0] = iParam16;
		Global_1339928.f_3436.f_530[iVar0] = iParam17;
		Global_1339928.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_266())
		{
			Global_1339928.f_941 = 1;
		}
		if (unk_0x2C063B4379F0C076())
		{
			iVar2 = 0;
			unk_0x87B14B27D777B56E(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339928.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339928.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339928.f_941 = 1;
			}
			if (func_265())
			{
				Global_1339928.f_945 = 1;
			}
		}
	}
}

int func_265()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2C063B4379F0C076())
	{
		unk_0x87B14B27D777B56E(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_266()
{
	if ((unk_0x7B22015BCC2AAAAE() == 8 || unk_0x7B22015BCC2AAAAE() == 9) || unk_0x7B22015BCC2AAAAE() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_267(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x366B33759CCFE37B("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_268()
{
	unk_0xCA3D1FCD234B8E0B(8);
	unk_0xCA3D1FCD234B8E0B(9);
	unk_0xCA3D1FCD234B8E0B(6);
	unk_0xCA3D1FCD234B8E0B(7);
	Global_2442030 = 1;
}

int func_269(bool bParam0)
{
	if (func_271())
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x8ACD527A7E574590(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_270()
{
	return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_177 != 0;
}

bool func_271()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 12);
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_269(0) == 0)
	{
		return;
	}
	func_268();
	iVar1 = 0;
	if (((Global_2441617[0] != iParam0 || Global_2441617[1] != iParam1) || Global_2441617[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2441617[0] = iParam0;
	Global_2441617[1] = iParam1;
	Global_2441617[2] = iParam2;
	Global_2441617[3] = 0;
	Global_2441617[4] = 0;
	if (Global_2441617[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[0]);
			Global_2441623[0 /*16*/] = { func_267(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_111(iParam3, &(Global_2441623[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15);
		}
	}
	if (Global_2441617[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[1]);
			Global_2441623[1 /*16*/] = { func_267(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_111(iParam4, &(Global_2441623[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16);
		}
	}
	if (Global_2441617[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[2]);
			Global_2441623[2 /*16*/] = { func_267(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_111(iParam5, &(Global_2441623[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17);
		}
	}
	if (bParam11)
	{
		func_111(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x8ACD527A7E574590() != func_81())
			{
				if (func_130(unk_0x8ACD527A7E574590()) == 0)
				{
					func_111(iParam7, unk_0x2743F2603B2676CC(unk_0x8ACD527A7E574590()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0x8ACD527A7E574590()) == 0)
			{
				func_111(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0x8ACD527A7E574590()) == 0)
			{
				func_111(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_184(sParam13))
	{
		sVar2 = sParam13;
	}
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0);
	*iParam9 = 0;
	func_110();
}

void func_273(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_269(0) == 0)
	{
		return;
	}
	func_268();
	iVar1 = 0;
	if (((Global_2441617[0] != iParam0 || Global_2441617[1] != iParam1) || Global_2441617[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2441617[0] = iParam0;
	Global_2441617[1] = iParam1;
	Global_2441617[2] = iParam2;
	Global_2441617[3] = 0;
	Global_2441617[4] = 0;
	if (Global_2441617[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[0]);
			Global_2441623[0 /*16*/] = { func_267(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_264(-1, &(Global_2441623[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16);
		}
	}
	if (Global_2441617[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[1]);
			Global_2441623[1 /*16*/] = { func_267(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_264(-1, &(Global_2441623[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17);
		}
	}
	if (Global_2441617[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x2743F2603B2676CC(Global_2441617[2]);
			Global_2441623[2 /*16*/] = { func_267(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_264(-1, &(Global_2441623[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18);
		}
	}
	if (bParam12)
	{
		func_264(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x8ACD527A7E574590() != func_81())
			{
				if (func_130(unk_0x8ACD527A7E574590()) == 0)
				{
					func_264(-1, unk_0x2743F2603B2676CC(unk_0x8ACD527A7E574590()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0x8ACD527A7E574590()) == 0)
			{
				func_264(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0x8ACD527A7E574590()) == 0)
			{
				func_264(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_184(sParam14))
	{
		sVar2 = sParam14;
	}
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0);
	*iParam10 = 0;
	func_110();
}

char* func_274()
{
	return "HUD_COUNTDOWN";
	switch (func_276(unk_0x8ACD527A7E574590()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_275())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_275()
{
	if (func_276(unk_0x8ACD527A7E574590()) == 133)
	{
		return Global_2457713.f_4634;
	}
	return -1;
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608060[iVar0 /*106*/];
	}
	return -1;
}

void func_277(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x5CB0A4A4240C1B6A())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
		{
			if (!unk_0x0AAC2160036975D9(&(Global_2457713.f_4552)))
			{
				unk_0xE0F8CCEE463E2ACE(&(Global_2457713.f_4552));
			}
			unk_0x3D7142FA27466C86(1);
			unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_FIRA");
			unk_0xE0DB271DC0AEA972("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
			unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
			unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 0);
			if (Global_2457713.f_4560 > -1)
			{
				unk_0xA92DDFCD9C825944(Global_2457713.f_4560);
				Global_2457713.f_4560 = -1;
			}
			Global_2457713.f_4550 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 4))
			{
				if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 2))
				{
					if (unk_0x4D3DD8FCA0E87E12())
					{
						if ((!unk_0x35D1CAD6ADAB6491(unk_0x833ADF2411E6FB02(unk_0x4B2B28DE73831DEB()), "OFF") && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) && !unk_0x0AAC2160036975D9(&(Global_2457713.f_4552)))
						{
							StringCopy(&(Global_2457713.f_4552), "", 32);
							unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_FIRA");
							unk_0xE0DB271DC0AEA972("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
							unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
							unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 0);
							unk_0x3D7142FA27466C86(1);
							unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 2);
						}
					}
				}
				else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 5))
				{
					unk_0xE0F8CCEE463E2ACE("OFF");
				}
			}
			else if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x3345CB85AB9EC035("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x3345CB85AB9EC035("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S");
				}
				unk_0xCAEDD1A8E831AD36("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 1);
			}
			else if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xBF883F3866EF9143() != 0)
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0x84C7091A7C9C1CE2())
						{
							StringCopy(&(Global_2457713.f_4552), unk_0x2ABF947CD85AC605(), 32);
							unk_0xE0F8CCEE463E2ACE("OFF");
						}
						unk_0x3D7142FA27466C86(1);
						unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 3))
				{
					Global_2457713.f_4560 = unk_0xBE8BBC6340F2B731();
					unk_0xBBEB613A917D7EE8(Global_2457713.f_4560, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
			{
				Global_2457713.f_4550 = 0;
				Global_2457713.f_4560 = -1;
				unk_0x374D3B72ED08A312("FM_COUNTDOWN_30S_KILL");
				unk_0x3D7142FA27466C86(0);
				unk_0x3345CB85AB9EC035("FM_PRE_COUNTDOWN_30S");
				unk_0x6BFEA4147919A51C("DisableFlightMusic", 1);
				unk_0x6BFEA4147919A51C("WantedMusicDisabled", 1);
				unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 1);
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 0);
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 2))
				{
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 2);
					unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 5);
				}
				else
				{
					unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 5);
					unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 0))
		{
			Global_2457713.f_4550 = 0;
			Global_2457713.f_4560 = -1;
			unk_0x374D3B72ED08A312("FM_COUNTDOWN_30S_KILL");
			unk_0x3D7142FA27466C86(0);
			unk_0x3345CB85AB9EC035("FM_PRE_COUNTDOWN_30S");
			unk_0x6BFEA4147919A51C("DisableFlightMusic", 1);
			unk_0x6BFEA4147919A51C("WantedMusicDisabled", 1);
			unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 1);
			unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 0);
			if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 2);
				unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 5);
			}
			else
			{
				unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 2);
				unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 5);
			}
		}
	}
}

var func_278()
{
	if (unk_0x1F2158D615BC4B25(func_279()))
	{
		return func_279();
	}
	return func_76();
}

var func_279()
{
	return Global_2359301.f_3;
}

int func_280()
{
	switch (Local_640.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_281()
{
	int iVar0;
	struct<47> Var1;
	int iVar48;
	var uVar49;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_46 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xD92F4D7123D878D4())
	{
		Local_728.f_527[iVar0 /*47*/] = { Var1 };
		Local_728.f_527[iVar0 /*47*/].f_1 = func_81();
		if (Local_640.f_4[iVar0] > -1)
		{
			uVar49 = unk_0x209E209593217021(Local_640.f_4[iVar0]);
			if (unk_0x5D14B2034A3E40D3(uVar49))
			{
				iVar48 = unk_0x42145D1DD048146E(iVar49);
				if (!func_14(iVar48, 0))
				{
					Local_728.f_527[iVar0 /*47*/] = Local_640.f_4[iVar0];
					Local_728.f_527[iVar0 /*47*/].f_1 = iVar48;
					Local_728.f_527[iVar0 /*47*/].f_9 = Local_2760[Local_640.f_4[iVar0] /*11*/].f_4;
					Local_728.f_527[iVar0 /*47*/].f_30 = -1;
					Local_728.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_282()
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_1634), 19);
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_640.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2760[iVar0 /*11*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_284()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	func_239(&iVar1, &fVar2, iLocal_334, 1);
	switch (Local_640.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_286(sVar0, fVar2 >= 70f);
			if (unk_0x0CB2A341EC5513A7(sVar0))
			{
				fVar2 = func_285(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x525F5A547B30D98B(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x7D22D4D991648BDE();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_286(sVar0, bVar3);
			if (unk_0x0CB2A341EC5513A7(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_285(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_285(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x525F5A547B30D98B(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_339 != iLocal_334)
			{
				if (iLocal_334 > 0)
				{
					unk_0xBBEB613A917D7EE8(iVar5, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0xDB8724F8CA3DA851(iVar5, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xA92DDFCD9C825944(iVar5);
					unk_0xBBEB613A917D7EE8(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_339 = iLocal_334;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 3))
		{
			unk_0xBBEB613A917D7EE8(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0x573691DB812DC8AA(&iLocal_332, 3);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(iLocal_332, 3))
	{
		unk_0xBBEB613A917D7EE8(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0xA5F70A8B83BDFA49(&iLocal_332, 3);
	}
}

float func_285(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_286(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0CB2A341EC5513A7(sParam0))
		{
			unk_0xCAEDD1A8E831AD36(sParam0);
		}
	}
	else if (unk_0x0CB2A341EC5513A7(sParam0))
	{
		unk_0xE0DB271DC0AEA972(sParam0);
	}
}

void func_287()
{
	int iVar0;
	
	if ((!func_130(unk_0x8ACD527A7E574590()) && !func_14(unk_0x8ACD527A7E574590(), 0)) && func_12(unk_0x8ACD527A7E574590(), 1, 1))
	{
		iVar0 = func_305();
		if (iVar0 != Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4)
		{
			if (func_21(iVar0, iLocal_331) || func_304(iVar0, iLocal_331))
			{
				if (!func_303() || func_1(&uLocal_320, 1000, 0))
				{
					func_27(&uLocal_320, 0, 0);
					iLocal_331 = iVar0;
					Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4 = iVar0;
					func_290();
					if (iLocal_330 == 0)
					{
						iLocal_330 = unk_0xE23D71F521207E8D();
					}
					if (Local_3113.f_11 == 0)
					{
						Local_3113.f_11 = unk_0xAEB19103FF099B1F();
					}
				}
			}
		}
		iLocal_334 = func_288();
	}
}

int func_288()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_640.f_3)
	{
		case 0:
			fVar1 = unk_0xC22285964D80140F();
			break;
		
		case 1:
			fVar1 = unk_0xB7021D97F2C44824();
			break;
		
		case 2:
			fVar1 = unk_0x7D22D4D991648BDE();
			break;
		
		case 3:
			fVar1 = unk_0xDD1BBF9D8F64A8E3();
			break;
		
		case 4:
			fVar1 = unk_0xFAB8BAC66FCFE9C5();
			break;
		
		case 5:
			fVar1 = unk_0x539D0F47F8BE1492();
			break;
		
		case 8:
			iVar0 = unk_0x5819FA335D0069B7();
			break;
		
		case 9:
			fVar1 = unk_0xF12FD95FC0628E6C();
			break;
		
		case 11:
			fVar1 = unk_0x92A7A6B7C2C9DB56();
			break;
		
		case 12:
			fVar1 = unk_0x92A7A6B7C2C9DB56();
			break;
		
		case 13:
			fVar1 = unk_0xDD6957FF8A3520B0();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x737E62570AEFEFAA(iVar0);
	func_289(&iVar2);
	if (iVar2 == iLocal_333)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 1))
			{
				func_27(&uLocal_322, 0, 0);
				Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4.f_1 = func_410(&uLocal_322, 0, 0);
				unk_0x573691DB812DC8AA(&iLocal_332, 1);
			}
			else if ((func_410(&uLocal_322, 0, 0) % 1000) == 0)
			{
				Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4.f_1 = func_410(&uLocal_322, 0, 0);
			}
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&iLocal_332, 1);
	}
	if ((func_21(iLocal_333, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_324, 2000, 0))
	{
		iVar2 = iLocal_333;
		unk_0x573691DB812DC8AA(&iLocal_332, 2);
	}
	else
	{
		iLocal_333 = iVar2;
		func_44(&uLocal_324);
		unk_0xA5F70A8B83BDFA49(&iLocal_332, 2);
	}
	return iVar2;
}

void func_289(int iParam0)
{
	switch (Local_640.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if ((((unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()) || unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED())) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) || unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) || unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_290()
{
	if (!unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1, 2))
	{
		unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_1), 2);
		func_291(1);
	}
}

void func_291(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_133())
		{
			func_296(0);
			func_295();
		}
		if (func_294(0))
		{
			uVar0 = func_175(2453, -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, 0);
			func_295();
		}
		if (func_294(func_293(func_276(unk_0x8ACD527A7E574590()))))
		{
			uVar0 = func_175(2453, -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, func_293(func_276(unk_0x8ACD527A7E574590())));
			func_295();
		}
		if (func_292())
		{
			func_295();
		}
		if (func_276(unk_0x8ACD527A7E574590()) > -1)
		{
			unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 7);
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 7);
	}
}

int func_292()
{
	if (Global_2426494.f_615.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 19;
}

bool func_294(int iParam0)
{
	var uVar0;
	
	uVar0 = func_175(2453, -1, 0);
	return unk_0xB56FEBC510E7E9DE(uVar0, iParam0);
}

void func_295()
{
	if (func_292())
	{
		Global_2426494.f_615.f_16 = 1;
	}
}

void func_296(int iParam0)
{
	if (func_133())
	{
		if (iParam0 == 1)
		{
			if (Global_2457713.f_4246 == -1)
			{
				Global_2457713.f_4246 = 60000;
			}
			func_27(&(Global_2457713.f_4244), 0, 0);
			if (Global_2457713.f_4249 == -1)
			{
				Global_2457713.f_4249 = 10000;
			}
			func_27(&(Global_2457713.f_4247), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_302();
		}
		if ((!unk_0x4FE03C08BC095A57() && !func_301()) && !func_297(unk_0x8ACD527A7E574590()))
		{
			Global_976339 = 0;
		}
		Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_7 = 0;
	}
}

int func_297(int iParam0)
{
	if (func_298(iParam0, 1))
	{
		if (Global_1586488[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_299(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586488[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_299(int iParam0)
{
	return func_300(iParam0);
}

bool func_300(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_13.f_1, 0);
}

bool func_301()
{
	return Global_2432717.f_712;
}

void func_302()
{
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (!func_133())
		{
			if (func_12(unk_0x8ACD527A7E574590(), 1, 0))
			{
				unk_0x076FCD919E69B97E(unk_0x77F050A399DB77ED(), 1);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 342, 0);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 122, 0);
			}
			unk_0xDA11395BF6459EE6(unk_0x8ACD527A7E574590(), 1f);
			unk_0x52CAB9CF58E98D68(0);
			unk_0x568B517D01D9F933(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xDECBDC43B878B8F0(0);
			}
		}
		else
		{
			if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
			{
				unk_0x076FCD919E69B97E(unk_0x77F050A399DB77ED(), 0);
				unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 342, 1);
				unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 122, 1);
				unk_0xDA11395BF6459EE6(unk_0x8ACD527A7E574590(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xDECBDC43B878B8F0(1);
				}
			}
			unk_0x52CAB9CF58E98D68(1);
			unk_0x568B517D01D9F933(0);
		}
	}
}

int func_303()
{
	switch (Local_640.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	if (Local_640.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_320())
	{
		if (Local_640.f_3 == 14)
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && func_319(unk_0x77F050A399DB77ED(), 0) == -1)
			{
				iVar2 = unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED());
				if ((!func_318(&iVar2, 0) || unk_0xDF1398076E26B0E4(iVar2) != joaat("dodo")) && unk_0x314654A7E186B6B2(iVar2))
				{
					func_311(0, 1, 0);
					if (func_310())
					{
						iVar3 = func_309();
						if (iVar3 >= 0)
						{
							if (!unk_0xB56FEBC510E7E9DE(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_7[func_308(iVar3)], func_307(iVar3)))
							{
								iLocal_335++;
								unk_0x573691DB812DC8AA(&(Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_7[func_308(iVar3)]), func_307(iVar3));
							}
						}
					}
					iVar0 = iLocal_335;
				}
			}
		}
		else
		{
			iVar0 = func_306();
		}
	}
	else
	{
		unk_0x5C80E0F04D6FAB0F(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x737E62570AEFEFAA(iVar0);
}

int func_306()
{
	switch (Local_640.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return func_175(137, -1, 0);
		
		default:
	}
	return -1;
}

int func_307(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_308(iParam0) * 31);
}

int func_308(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_309()
{
	return iLocal_97;
}

int func_310()
{
	if (iLocal_104 == 1)
	{
		iLocal_104 = 0;
		return 1;
	}
	return 0;
}

void func_311(int iParam0, bool bParam1, int iParam2)
{
	func_313(iParam0, iParam2);
	if (bParam1)
	{
		if (Local_305.f_2 < Local_308.f_2)
		{
			Local_305.f_2 = 0f;
		}
		else
		{
			Local_308.f_2 = 0f;
		}
		if (Local_311.f_2 < Local_314.f_2)
		{
			Local_311.f_2 = 0f;
		}
		else
		{
			Local_314.f_2 = 0f;
		}
	}
	switch (iLocal_98)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Local_108[iLocal_97 /*3*/]) < fLocal_304)
				{
					if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
					{
						if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
						{
							if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0))
							{
								bLocal_99 = true;
								iLocal_98 = 1;
							}
							if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
							{
								bLocal_100 = true;
								iLocal_98 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (!unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) && !unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
				{
					func_312();
				}
				else if (!unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
				{
					func_312();
				}
				else if (!unk_0x314654A7E186B6B2(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) && !bParam1)
				{
					func_312();
				}
				if (bLocal_99)
				{
					if (iLocal_103)
					{
						if (iLocal_102)
						{
							if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
							{
								func_312();
								iLocal_104 = 1;
							}
						}
						else if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
						{
							iLocal_102 = 1;
						}
						else if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
						{
							func_312();
						}
					}
					else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
					{
						iLocal_103 = 1;
					}
					else if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
					{
						func_312();
					}
				}
				else if (bLocal_100)
				{
					if (iLocal_103)
					{
						if (iLocal_101)
						{
							if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
							{
								func_312();
								iLocal_104 = 1;
							}
						}
						else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
						{
							iLocal_101 = 1;
						}
						else if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
						{
							func_312();
						}
					}
					else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
					{
						iLocal_103 = 1;
					}
					else if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_305, Local_308, fLocal_317, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_311, Local_314, fLocal_317, 0, 1, 0))
					{
						func_312();
					}
				}
			}
			break;
	}
}

void func_312()
{
	bLocal_99 = false;
	bLocal_100 = false;
	iLocal_101 = 0;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_98 = 0;
}

void func_313(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_105 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_317(iVar0)) && (uParam1 || !func_316(iVar0)))
		{
			if (func_315(Local_105, Local_108[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_105, Local_108[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_97 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_314(iLocal_97);
}

void func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_305 = { 1103.014f, -233.0374f, 56.13004f };
			Local_308 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_317 = 30f;
			Local_311 = { 1093.589f, -248.5926f, 56.88639f };
			Local_314 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_305 = { 1044.182f, -324.5904f, 49.33408f };
			Local_308 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_317 = 30f;
			Local_311 = { 1007.983f, -320.6159f, 48.4543f };
			Local_314 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_305 = { 916.599f, -419.8782f, 35.62748f };
			Local_308 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_317 = 7f;
			Local_311 = { 912.1362f, -420.5161f, 35.38034f };
			Local_314 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_305 = { 757.7189f, -472.924f, 19.2535f };
			Local_308 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_317 = 20.75f;
			Local_311 = { 744.9114f, -480.7373f, 19.06514f };
			Local_314 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_305 = { 680.3677f, -581.1792f, 14.2145f };
			Local_308 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_317 = 45f;
			Local_311 = { 667.3692f, -610.5356f, 13.85401f };
			Local_314 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_305 = { 644.2497f, -844.7504f, 12.36707f };
			Local_308 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_317 = 25f;
			Local_311 = { 644.3659f, -859.3878f, 12.59677f };
			Local_314 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_305 = { 634.972f, -1011.64f, 10.92594f };
			Local_308 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_317 = 25f;
			Local_311 = { 634.9612f, -1029.123f, 10.61846f };
			Local_314 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_305 = { 645.7223f, -1191.215f, 10.45198f };
			Local_308 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_317 = 50f;
			Local_311 = { 645.7223f, -1228.966f, 10.98015f };
			Local_314 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_305 = { 642.1216f, -1295.73f, 9.005976f };
			Local_308 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_317 = 7f;
			Local_311 = { 644.7772f, -1298.168f, 9.128529f };
			Local_314 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_305 = { 686.5675f, -1444.71f, 9.065001f };
			Local_308 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_317 = 25f;
			Local_311 = { 682.3027f, -1429.872f, 9.890836f };
			Local_314 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_305 = { 718.7617f, -1734.313f, 9.082874f };
			Local_308 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_317 = 30f;
			Local_311 = { 717.5355f, -1748.646f, 9.363478f };
			Local_314 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_305 = { 694.3165f, -2049.806f, 0.009695f };
			Local_308 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_317 = 30f;
			Local_311 = { 693.1836f, -2063.225f, 0.429037f };
			Local_314 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_305 = { 642.6671f, -2494.551f, 0.468485f };
			Local_308 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_317 = 20f;
			Local_311 = { 647.0339f, -2506.202f, 0.583701f };
			Local_314 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_305 = { 691.8235f, -2558.219f, 0.363352f };
			Local_308 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_317 = 10.25f;
			Local_311 = { 695.7928f, -2561.034f, 0.346731f };
			Local_314 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_305 = { 723.6254f, -2562.171f, 0.255647f };
			Local_308 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_317 = 15f;
			Local_311 = { 735.765f, -2561.935f, 0.311182f };
			Local_314 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_305 = { 891.4387f, -2603.12f, 0f };
			Local_308 = { 704.4932f, -2634.793f, 45f };
			fLocal_317 = 20f;
			Local_311 = { 893.2578f, -2616.235f, 0f };
			Local_314 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_305 = { -2669.587f, 2491.96f, 2.043799f };
			Local_308 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_317 = 26.5f;
			Local_311 = { -2687.606f, 2494.868f, 2.608733f };
			Local_314 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_305 = { -1986.173f, 4521.799f, 0f };
			Local_308 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_317 = 17f;
			Local_311 = { -1995.668f, 4531.259f, 0f };
			Local_314 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_305 = { -526.0265f, 4472.442f, 0f };
			Local_308 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_317 = 10f;
			Local_311 = { -519.9281f, 4476.346f, 0f };
			Local_314 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_305 = { 98.1615f, 3384.489f, 45.45169f };
			Local_308 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_317 = 8f;
			Local_311 = { 152.6802f, 3346.793f, 45.02156f };
			Local_314 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_305 = { 147.8606f, 3406.796f, 38.03672f };
			Local_308 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_317 = 14.5f;
			Local_311 = { 130.0916f, 3425.417f, 38.05672f };
			Local_314 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_305 = { 2830.972f, 4967.14f, 34.56013f };
			Local_308 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_317 = 10f;
			Local_311 = { 2826.767f, 4964.185f, 34.10636f };
			Local_314 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_305 = { -151.5764f, 4264.417f, 31.04735f };
			Local_308 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_317 = 10f;
			Local_311 = { -148.3842f, 4261.071f, 31.57409f };
			Local_314 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_305 = { -426.6919f, 2964.272f, 14.848f };
			Local_308 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_317 = 7f;
			Local_311 = { -425.0283f, 2967.861f, 15.22699f };
			Local_314 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_305 = { -192.3414f, 2864.916f, 30.72595f };
			Local_308 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_317 = 10f;
			Local_311 = { -192.0129f, 2871.603f, 29.99943f };
			Local_314 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_305 = { 2539.185f, 2228.772f, 18.6102f };
			Local_308 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_317 = 10f;
			Local_311 = { 2543.708f, 2231.402f, 18.331f };
			Local_314 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_305 = { 2954.087f, 815.7209f, 0.037901f };
			Local_308 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_317 = 35f;
			Local_311 = { 2966.123f, 806.8889f, 0.544056f };
			Local_314 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_305 = { 2329.673f, -459.6648f, 70.24277f };
			Local_308 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_317 = 12f;
			Local_311 = { 2324.752f, -455.5238f, 70.25145f };
			Local_314 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_305 = { 1943.428f, -753.251f, 80.17905f };
			Local_308 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_317 = 7f;
			Local_311 = { 1943.366f, -758.287f, 80.32291f };
			Local_314 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_305 = { -271.2849f, -2414.993f, -10f };
			Local_308 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_317 = 30f;
			Local_311 = { -279.8399f, -2427.212f, -10f };
			Local_314 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_305 = { -1483f, 2691.428f, -10f };
			Local_308 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_317 = 12f;
			Local_311 = { -1478.152f, 2696.688f, -10f };
			Local_314 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_305 = { 222.1519f, -2343.487f, 0.039199f };
			Local_308 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_317 = 12f;
			Local_311 = { 216.959f, -2343.487f, 0.207734f };
			Local_314 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_305 = { 346.4622f, -2244.374f, 0.159779f };
			Local_308 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_317 = 20f;
			Local_311 = { 359.609f, -2244.468f, 0.129684f };
			Local_314 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_305 = { -1859.68f, -322.6357f, 56.16368f };
			Local_308 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_317 = 7.5f;
			Local_311 = { -1860.27f, -327.8634f, 57.543f };
			Local_314 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_305 = { -680.2632f, -600.818f, 69.11289f };
			Local_308 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_317 = 31.5f;
			Local_311 = { -680.6077f, -618.3658f, 69.27496f };
			Local_314 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_305 = { -1468.096f, -591.7158f, 67.05518f };
			Local_308 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_317 = 11.75f;
			Local_311 = { -1474.903f, -591.1215f, 67.08091f };
			Local_314 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_305 = { -1544.958f, -537.1475f, 72.44347f };
			Local_308 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_317 = 11.75f;
			Local_311 = { -1541.008f, -541.5494f, 71.61972f };
			Local_314 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_305 = { 333.2108f, -2727.274f, 20.71663f };
			Local_308 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_317 = 20f;
			Local_311 = { 343.1127f, -2727.236f, 20.23613f };
			Local_314 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_305 = { 1928.071f, 6228.355f, 43.49398f };
			Local_308 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_317 = 13f;
			Local_311 = { 1931.82f, 6235.634f, 43.37382f };
			Local_314 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_305 = { -736.4309f, -1590.921f, 10.80892f };
			Local_308 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_317 = 15f;
			Local_311 = { -727.2307f, -1585.221f, 11.78027f };
			Local_314 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_305 = { -676.3775f, -1548.553f, 12.33747f };
			Local_308 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_317 = 25f;
			Local_311 = { -654.203f, -1536.146f, 9.191055f };
			Local_314 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_305 = { -624.2344f, -1537.045f, 12.60193f };
			Local_308 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_317 = 8f;
			Local_311 = { -615.4003f, -1536.65f, 12.40271f };
			Local_314 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_305 = { -492.5057f, -1632.457f, 24.3307f };
			Local_308 = { -418.2088f, -1487.452f, 0f };
			fLocal_317 = 25f;
			Local_311 = { -486.2016f, -1636.095f, 24.20805f };
			Local_314 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_305 = { -359.3541f, -1639.693f, 13.13455f };
			Local_308 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_317 = 25f;
			Local_311 = { -378.1518f, -1705.66f, 12.47196f };
			Local_314 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_305 = { -243.4436f, -1814.623f, 25.69465f };
			Local_308 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_317 = 25f;
			Local_311 = { -235.1319f, -1822.094f, 25.86542f };
			Local_314 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_305 = { 84.55537f, -2046.159f, 13.30767f };
			Local_308 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_317 = 25f;
			Local_311 = { 17.90788f, -2035.773f, 12.62706f };
			Local_314 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_305 = { 221.5029f, -2232.766f, 9.88676f };
			Local_308 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_317 = 8f;
			Local_311 = { 218.583f, -2232.766f, 9.886198f };
			Local_314 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_305 = { 221.6518f, -2184.635f, 11.66457f };
			Local_308 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_317 = 8f;
			Local_311 = { 217.8995f, -2184.635f, 11.5405f };
			Local_314 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_305 = { 2326.57f, 1096.031f, 76.31458f };
			Local_308 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_317 = 21f;
			Local_311 = { 2334.453f, 1103.067f, 76.26603f };
			Local_314 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_305 = { 2379.442f, 1150.776f, 58.79632f };
			Local_308 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_317 = 12f;
			Local_311 = { 2374.064f, 1146.282f, 58.83331f };
			Local_314 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_305 = { -1179.405f, -355.2554f, 56.53003f };
			Local_308 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_317 = 12.5f;
			Local_311 = { -1178.385f, -361.8784f, 56.15081f };
			Local_314 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_305 = { -921.3846f, -384.94f, 137.0181f };
			Local_308 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_317 = 16f;
			Local_311 = { -914.1658f, -387.9444f, 137.0794f };
			Local_314 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_305 = { -740.2564f, 246.4529f, 132.2922f };
			Local_308 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_317 = 16f;
			Local_311 = { -726.6429f, 253.0676f, 132.3319f };
			Local_314 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_305 = { -771.2068f, 268.2729f, 132.1689f };
			Local_308 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_317 = 16f;
			Local_311 = { -770.8035f, 310.8625f, 137.4161f };
			Local_314 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_305 = { 259.2205f, 135.4146f, 136.7083f };
			Local_308 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_317 = 16f;
			Local_311 = { 261.9694f, 142.9676f, 136.6889f };
			Local_314 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_305 = { 393.548f, -30.87166f, 152.6635f };
			Local_308 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_317 = 8f;
			Local_311 = { 390.5358f, -36.08882f, 152.7813f };
			Local_314 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_305 = { 114.3139f, -648.4297f, 261.8488f };
			Local_308 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_317 = 20f;
			Local_311 = { 124.8467f, -646.6575f, 261.8488f };
			Local_314 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_305 = { -215.919f, -823.8436f, 126.0224f };
			Local_308 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_317 = 20f;
			Local_311 = { -225.397f, -820.3937f, 126.0812f };
			Local_314 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_305 = { -296.4725f, -802.0815f, 95.40108f };
			Local_308 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_317 = 20f;
			Local_311 = { -305.4602f, -798.8369f, 95.48194f };
			Local_314 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_305 = { -292.3034f, -823.3569f, 95.37621f };
			Local_308 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_317 = 20f;
			Local_311 = { -288.9206f, -814.022f, 95.37556f };
			Local_314 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_305 = { -256.3589f, -714.7838f, 110.1617f };
			Local_308 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_317 = 20f;
			Local_311 = { -253.7723f, -705.6632f, 110.1736f };
			Local_314 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_305 = { 1808.214f, 1949.246f, 71.73707f };
			Local_308 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_317 = 9.75f;
			Local_311 = { 1802.786f, 1950.262f, 71.74002f };
			Local_314 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_305 = { 2388.733f, 2931.941f, 46.62681f };
			Local_308 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_317 = 10f;
			Local_311 = { 2392.547f, 2934.867f, 46.6268f };
			Local_314 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_305 = { 2700.056f, 4836.381f, 42.07854f };
			Local_308 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_317 = 20.75f;
			Local_311 = { 2685.672f, 4821.653f, 42.18471f };
			Local_314 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_305 = { -1053.446f, 4766.245f, 234.3251f };
			Local_308 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_317 = 5f;
			Local_311 = { -1051.414f, 4767.193f, 234.4293f };
			Local_314 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_315(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x092B928D30C0282D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_318(var uParam0, int iParam1)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(*uParam0) || iParam1)
		{
			if (unk_0xAB5BBCD9D3B6625D(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0xB42592B9FFEB5EDE(iParam0, iParam1))
		{
			iVar0 = unk_0xF8D66A34AF0C53A5(iParam0, iParam1);
			if (unk_0x1F2158D615BC4B25(iVar0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
				{
					iVar1 = unk_0xFCD89114F33612D0(unk_0xDF1398076E26B0E4(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x9A2BADF8B8CE0E2A(iVar0, iVar3))
						{
							if (unk_0x07A8845F7F106A38(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_320()
{
	switch (Local_640.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_321(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_336() < 10)
	{
		iVar0 = func_335();
		func_322(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_322(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_323(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_323(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_332(unk_0x8ACD527A7E574590()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_331(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_326(Var0))
		{
			Global_2404919.f_39.f_64 = func_325(unk_0x8ACD527A7E574590());
			func_324(Var0, iParam8);
		}
	}
}

void func_324(struct<12> Param0, int iParam12)
{
	Global_2404919.f_347[iParam12 /*12*/] = { Param0 };
	Global_2404919.f_347[iParam12 /*12*/].f_9 = 1;
}

int func_325(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2416794[iParam0 /*303*/].f_1;
	}
	return 0;
}

int func_326(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404919.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_327(Global_2404919.f_39[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_327(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_330(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_328(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_330(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_328(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_328(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_329(Param0, Param3, Var0, Var3);
}

int func_329(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_330(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_332(int iParam0)
{
	if ((func_334(iParam0, 1) || func_333(iParam0)) || func_256(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608060[iVar0 /*106*/] != -1;
	}
	return 0;
}

bool func_334(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_325(iParam0) != 0;
	}
	return func_298(iParam0, bParam1);
}

int func_335()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_336()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_337(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xBA89110203C50939(sParam0);
	unk_0x703D2B4B1C7E10B6(sParam1);
	unk_0x703D2B4B1C7E10B6(sParam2);
	return unk_0x62881E3F5F311834(0);
}

char* func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC";
		
		case 1:
			return "AMCH_1SLC";
		
		case 2:
			return "AMCH_2SLC";
		
		case 3:
			return "AMCH_3SLC";
		
		case 4:
			return "AMCH_4SLC";
		
		case 5:
			return "AMCH_5SLC";
		
		case 6:
			return "AMCH_6SLC";
		
		case 7:
			return "AMCH_7SLC";
		
		case 8:
			return "AMCH_8SLC";
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_341()
{
	if (!func_123())
	{
		return;
	}
	if (!unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) == Global_1312577.f_7)
	{
		return;
	}
	func_119();
}

void func_342(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_317(iVar0) && !func_316(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_108[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_343()
{
	if (!func_320())
	{
		if (Local_640.f_3 == 14)
		{
			func_346();
		}
	}
	else if ((!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 4) && !unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 5)) && !func_345(unk_0x8ACD527A7E574590()))
	{
		func_344();
	}
}

void func_344()
{
	switch (Local_640.f_3)
	{
		case 0:
			unk_0x672C9BF0628FFC83(8, 2);
			break;
		
		case 1:
			unk_0x672C9BF0628FFC83(13, 2);
			break;
		
		case 2:
			unk_0x672C9BF0628FFC83(4, 2);
			break;
		
		case 4:
			unk_0x672C9BF0628FFC83(1, 2);
			break;
		
		case 3:
			unk_0x672C9BF0628FFC83(2, 2);
			break;
		
		case 5:
			unk_0x672C9BF0628FFC83(3, 2);
			break;
		
		case 6:
			unk_0x672C9BF0628FFC83(11, 3);
			break;
		
		case 7:
			unk_0x672C9BF0628FFC83(14, 1);
			break;
		
		case 8:
			unk_0x672C9BF0628FFC83(29, 2);
			break;
		
		case 9:
			unk_0x672C9BF0628FFC83(12, 2);
			break;
		
		case 10:
			unk_0x672C9BF0628FFC83(10, 2);
			break;
		
		case 11:
			unk_0x672C9BF0628FFC83(18, 2);
			break;
		
		case 12:
			unk_0x672C9BF0628FFC83(20, 2);
			break;
		
		case 13:
			unk_0x672C9BF0628FFC83(27, 2);
			break;
		
		case 15:
			unk_0x672C9BF0628FFC83(26, 1);
			break;
		
		case 16:
			unk_0x672C9BF0628FFC83(25, 1);
			break;
		
		case 17:
			unk_0x672C9BF0628FFC83(22, 1);
			break;
		
		case 18:
			unk_0x672C9BF0628FFC83(24, 1);
			break;
	}
	unk_0x573691DB812DC8AA(&iLocal_332, 8);
}

bool func_345(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_346()
{
	Local_108[0 /*3*/] = { 1083f, -231f, 60f };
	Local_108[1 /*3*/] = { 1024f, -325f, 60f };
	Local_108[2 /*3*/] = { 910f, -401f, 43f };
	Local_108[3 /*3*/] = { 721f, -457f, 26f };
	Local_108[4 /*3*/] = { 643f, -579f, 26f };
	Local_108[5 /*3*/] = { 590f, -851f, 26f };
	Local_108[6 /*3*/] = { 590f, -1023f, 16f };
	Local_108[7 /*3*/] = { 582f, -1205f, 24f };
	Local_108[8 /*3*/] = { 608f, -1335f, 16f };
	Local_108[9 /*3*/] = { 640f, -1434f, 16f };
	Local_108[10 /*3*/] = { 671f, -1742f, 20f };
	Local_108[11 /*3*/] = { 651f, -2046f, 16f };
	Local_108[12 /*3*/] = { 603f, -2505f, 9f };
	Local_108[13 /*3*/] = { 673f, -2582f, 4f };
	Local_108[14 /*3*/] = { 728f, -2594f, 10f };
	Local_108[15 /*3*/] = { 794f, -2624f, 27f };
	Local_108[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_108[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_108[18 /*3*/] = { -513f, 4427f, 40f };
	Local_108[19 /*3*/] = { 126f, 3366f, 40f };
	Local_108[20 /*3*/] = { 143f, 3418f, 36f };
	Local_108[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_108[22 /*3*/] = { -162f, 4249f, 40f };
	Local_108[23 /*3*/] = { -408f, 2964f, 20f };
	Local_108[24 /*3*/] = { -181f, 2862f, 38f };
	Local_108[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_108[26 /*3*/] = { 2950f, 803f, 8f };
	Local_108[27 /*3*/] = { 2369f, -409f, 80f };
	Local_108[28 /*3*/] = { 1906f, -755f, 84f };
	Local_108[29 /*3*/] = { -403f, -2333f, 40f };
	Local_108[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_108[31 /*3*/] = { 219f, -2315f, 5f };
	Local_108[32 /*3*/] = { 350f, -2315f, 5f };
	Local_108[33 /*3*/] = { -1848f, -333f, 75f };
	Local_108[34 /*3*/] = { -693f, -608f, 69f };
	Local_108[35 /*3*/] = { -1461f, -582f, 53f };
	Local_108[36 /*3*/] = { -1553f, -546f, 59f };
	Local_108[37 /*3*/] = { 338f, -2758f, 23f };
	Local_108[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_108[39 /*3*/] = { -713f, -1538f, 13f };
	Local_108[40 /*3*/] = { -659f, -1518f, 13f };
	Local_108[41 /*3*/] = { -620f, -1502f, 16f };
	Local_108[42 /*3*/] = { -445f, -1575f, 26f };
	Local_108[43 /*3*/] = { -373f, -1680f, 19f };
	Local_108[44 /*3*/] = { -212f, -1805f, 29f };
	Local_108[45 /*3*/] = { 47f, -2040f, 18f };
	Local_108[46 /*3*/] = { 223f, -2240f, 6f };
	Local_108[47 /*3*/] = { 218f, -2189f, 6f };
	Local_108[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_108[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_108[50 /*3*/] = { -1186f, -365f, 46f };
	Local_108[51 /*3*/] = { -916f, -407f, 93f };
	Local_108[52 /*3*/] = { -726f, 235f, 105f };
	Local_108[53 /*3*/] = { -774f, 286f, 112f };
	Local_108[54 /*3*/] = { 271f, 134f, 125f };
	Local_108[55 /*3*/] = { 377f, -28f, 125f };
	Local_108[56 /*3*/] = { 121f, -703f, 150f };
	Local_108[57 /*3*/] = { -204f, -784f, 74f };
	Local_108[58 /*3*/] = { -287f, -774f, 72f };
	Local_108[59 /*3*/] = { -272f, -824f, 71f };
	Local_108[60 /*3*/] = { -230f, -723f, 80f };
	Local_108[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_108[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_108[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_108[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206, iParam0))
		{
			unk_0x573691DB812DC8AA(&(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206, iParam0))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_206), iParam0);
	}
}

void func_348(var uParam0, int iParam1)
{
	if (func_276(unk_0x8ACD527A7E574590()) == 133 && iParam1)
	{
		Global_2457713.f_4634 = uParam0;
	}
	else
	{
		Global_2457713.f_4634 = -1;
	}
}

void func_349(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x6BFEA4147919A51C("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x6BFEA4147919A51C("WantedMusicDisabled", 1);
	}
	Global_2457713.f_4560 = -1;
	bVar0 = (func_256(unk_0x8ACD527A7E574590(), 0) && func_255(unk_0x8ACD527A7E574590()));
	if (bParam6)
	{
		func_347(21, 1);
	}
	else
	{
		func_364(iParam0, -1);
		if (func_8(unk_0x8ACD527A7E574590()))
		{
			Global_1573875.f_3 = iParam0;
		}
		else
		{
			func_363(iParam0);
		}
		Global_1573875.f_4 = -1;
		if (func_8(unk_0x8ACD527A7E574590()))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 5);
		}
		if ((func_133() && !func_132()) || func_131(unk_0x8ACD527A7E574590(), 21))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 4);
		}
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 17);
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 20);
		if (func_362(iParam0))
		{
			func_361();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_358(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x4AAD01BBE039D160(fParam2);
			if (iParam0 == 146)
			{
				unk_0xCBC9707F3BE3D5C2(0);
				unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 0, 0);
				unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
			}
		}
		if (func_356(iParam0))
		{
			unk_0xCBC9707F3BE3D5C2(0);
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 0, 0);
			unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 8);
		}
		if (bParam3)
		{
			func_355(1);
			if (func_218(0))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 9);
			}
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 14);
		}
		if (bParam4)
		{
			func_353(1);
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 12);
		}
		if (bParam5)
		{
			func_352();
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_350(iParam0))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 21);
			}
		}
	}
	Global_2456625 = 1;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_351())
	{
		return 1;
	}
	return 0;
}

int func_351()
{
	switch (func_275())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_352()
{
	unk_0x573691DB812DC8AA(&(Global_2457713.f_4551), 0);
}

void func_353(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91158.f_8 = 1;
	}
	else
	{
		Global_91158.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_354(iVar0);
		iVar0++;
	}
}

void func_354(int iParam0)
{
	Global_91158.f_156[iParam0] = 1;
	Global_91158.f_155 = 1;
}

void func_355(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_357(unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_1608060[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

void func_358(float fParam0)
{
	if (unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) == func_359())
	{
		return;
	}
	if (unk_0x4D1CAE1CFC4C8868(Global_2457713.f_4643))
	{
		if (!Global_2457713.f_4643 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	Global_2457713.f_4642 = fParam0;
	Global_2457713.f_4643 = unk_0x8EC1FFF6B789C28E();
}

int func_359()
{
	switch (func_360())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_360()
{
	return Global_25115;
}

void func_361()
{
	Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_198 = 0;
	unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4412), 1);
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_363(int iParam0)
{
	Global_1608060[unk_0x8ACD527A7E574590() /*106*/] = iParam0;
}

void func_364(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_294(0) || func_294(func_293(iVar0)))
		{
			unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 2);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 2);
		}
	}
}

int func_365()
{
	switch (Local_640.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_366()
{
	Global_1715730 = 1;
	if (!unk_0xB56FEBC510E7E9DE(Global_2464277, 0))
	{
		unk_0x573691DB812DC8AA(&Global_2464277, 0);
		unk_0x573691DB812DC8AA(&Global_1715731, 0);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_2464277, 1))
	{
		unk_0x573691DB812DC8AA(&Global_2464277, 1);
		unk_0x573691DB812DC8AA(&Global_1715731, 1);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_2464277, 5))
	{
		unk_0x573691DB812DC8AA(&Global_2464277, 5);
		unk_0x573691DB812DC8AA(&Global_1715731, 5);
	}
	if (unk_0x456AF8BC83CCA6FF(-355737150))
	{
		unk_0x39FEEC3E8273065D(-355737150, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-580979506))
	{
		unk_0x39FEEC3E8273065D(-580979506, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-1426452475))
	{
		unk_0x39FEEC3E8273065D(-1426452475, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(745417724))
	{
		unk_0x39FEEC3E8273065D(745417724, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-1305304906))
	{
		unk_0x39FEEC3E8273065D(-1305304906, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-1543175077))
	{
		unk_0x39FEEC3E8273065D(-1543175077, 0, 0, 0);
	}
	if (unk_0x456AF8BC83CCA6FF(-811770997))
	{
		unk_0x39FEEC3E8273065D(-811770997, 0, 0, 0);
	}
}

int func_367()
{
	switch (Local_640.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_368()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_640.f_3))
	{
		if (Local_640.f_3 == 1 || Local_640.f_3 == 6)
		{
			iVar0 = func_385(unk_0x8ACD527A7E574590(), 1);
			iVar1 = func_168(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
				{
					unk_0x1592B6D205958934(unk_0x77F050A399DB77ED(), joaat("gadget_parachute"), 1, 0, 0);
					func_369(1);
				}
			}
			else
			{
				unk_0x04E09A418C0AF4E9(unk_0x8ACD527A7E574590(), 1);
			}
		}
	}
}

void func_369(bool bParam0)
{
	int iVar0;
	
	if (unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 5) != 0)
	{
		unk_0xD214B72C983BCE75(unk_0x77F050A399DB77ED(), 177, 1);
		unk_0x4DC89289A02BBAB3(unk_0x8ACD527A7E574590(), func_175(575, -1, 0));
		if (func_384())
		{
			unk_0x39933916AAAF3AA7(unk_0x8ACD527A7E574590(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_383())
		{
			unk_0x39933916AAAF3AA7(unk_0x8ACD527A7E574590(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_380(3610, -1, -1))
		{
		}
		iVar0 = func_175(2029, -1, 0);
		unk_0x9BF110A4EF75F560(unk_0x8ACD527A7E574590(), func_379(unk_0xF555CE342BA0C333(unk_0x8ACD527A7E574590()), iVar0));
		if (func_215(0))
		{
			unk_0x4DC89289A02BBAB3(unk_0x8ACD527A7E574590(), func_175(575, -1, 0));
		}
		else
		{
			unk_0x4DC89289A02BBAB3(unk_0x8ACD527A7E574590(), func_378(Global_2464464));
		}
		func_377(unk_0x8ACD527A7E574590(), iVar0);
		unk_0x6D6B5AC04C200793(unk_0x8ACD527A7E574590(), 5, func_373(unk_0x77F050A399DB77ED(), iVar0), func_372(unk_0x77F050A399DB77ED(), iVar0), 0);
		func_371(func_175(2029, -1, 0), 1);
		Global_2457713.f_273 = 1;
		func_370(unk_0x8ACD527A7E574590(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_370(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_175(2029, -1, 0);
		}
		unk_0x6D6B5AC04C200793(iParam0, 5, func_373(unk_0xF555CE342BA0C333(iParam0), iParam2), func_372(unk_0xF555CE342BA0C333(iParam0), iParam2), 0);
		func_377(iParam0, iParam2);
		unk_0x9BF110A4EF75F560(iParam0, func_379(unk_0xF555CE342BA0C333(iParam0), iParam2));
		unk_0x5F2AACB0122E1554(unk_0xF555CE342BA0C333(iParam0), 5, func_373(unk_0xF555CE342BA0C333(iParam0), iParam2), func_372(unk_0xF555CE342BA0C333(iParam0), iParam2), func_379(unk_0xF555CE342BA0C333(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_175(575, -1, 0);
		}
		unk_0x4DC89289A02BBAB3(iParam0, iParam1);
		if (func_384())
		{
			unk_0x39933916AAAF3AA7(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_383())
		{
			unk_0x39933916AAAF3AA7(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0xD214B72C983BCE75(unk_0xF555CE342BA0C333(iParam0), 177, 1);
	}
}

void func_371(int iParam0, int iParam1)
{
	if (unk_0x4C779B19E6DDCDA2())
	{
		func_166(2029, iParam0, -1, 1);
		unk_0x6D6B5AC04C200793(unk_0x8ACD527A7E574590(), 5, func_373(unk_0x77F050A399DB77ED(), iParam0), func_372(unk_0x77F050A399DB77ED(), iParam0), 0);
		func_377(unk_0x8ACD527A7E574590(), iParam0);
		unk_0x9BF110A4EF75F560(unk_0x8ACD527A7E574590(), func_379(unk_0x77F050A399DB77ED(), iParam0));
		if ((iParam1 && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED())) && unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 5) != 0)
		{
			func_370(unk_0x8ACD527A7E574590(), -1, -1);
		}
	}
}

int func_372(var uParam0, int iParam1)
{
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

int func_373(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0xB2833E96F49D3CDC(uParam0, 11);
	if (unk_0xB2833E96F49D3CDC(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0xDF1398076E26B0E4(iParam0);
	uVar3 = unk_0xB4190D50AD0EB378(iParam0, 8, unk_0xB2833E96F49D3CDC(iParam0, 8), unk_0xD01703B8B3FC785F(iParam0, 8));
	if (unk_0x99A214601817F926(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		uVar5 = unk_0xB4190D50AD0EB378(iParam0, 11, iVar0, unk_0xD01703B8B3FC785F(iParam0, 11));
		if (unk_0x99A214601817F926(uVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar4);
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_376(uVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar4);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_375(uVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar4);
						break;
					
					default:
						iVar0 = func_375(uVar5);
						break;
					}
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x99A214601817F926(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_374(uVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_375(uVar5);
					break;
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0x99A214601817F926(uVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0x99A214601817F926(uVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0x99A214601817F926(uVar5, -1086258388, 0) || unk_0x99A214601817F926(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x99A214601817F926(uVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0x99A214601817F926(uVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if ((unk_0x99A214601817F926(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x99A214601817F926(uVar5, joaat("SILK_ROBE"), 0)) || unk_0x99A214601817F926(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_375(uVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 9:
				return (2 + iVar4);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (4 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			}
	}
	return (1 + iVar4);
	return 0;
}

int func_374(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_375(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x99A214601817F926(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_376(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x99A214601817F926(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x99A214601817F926(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x99A214601817F926(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

void func_377(int iParam0, int iParam1)
{
	if (func_384())
	{
		if (iParam1 > 46)
		{
			unk_0xBC66374841A64612(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0xBC66374841A64612(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0xBC66374841A64612(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x1253858BF54A80DD(iParam0);
		}
	}
	else if (func_383())
	{
		if (iParam1 > 0)
		{
			unk_0xBC66374841A64612(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x1253858BF54A80DD(iParam0);
		}
	}
}

int func_378(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_379(var uParam0, int iParam1)
{
	return 0;
}

int func_380(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_382(iParam0, iParam1);
	uVar2 = func_381(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x31E96FB56E815232(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_381(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
	}
	return iVar0;
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_383()
{
	return unk_0x368F9074322AFD91(joaat("mppilot"));
}

bool func_384()
{
	return unk_0x368F9074322AFD91(joaat("mplts"));
}

int func_385(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_172(iParam0);
}

void func_386()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	var uVar5;
	float fVar6;
	int iVar7;
	struct<3> Var8;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	struct<3> Var15;
	float fVar18;
	
	if ((((!func_7(unk_0x8ACD527A7E574590()) && !func_130(unk_0x8ACD527A7E574590())) && !func_270()) && !func_394(unk_0x8ACD527A7E574590(), 0)) && !func_393(unk_0x8ACD527A7E574590()))
	{
		if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			bVar11 = func_5(Local_640.f_3);
			bVar12 = unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0);
			bVar13 = func_391();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_640.f_67[iVar4 /*2*/].f_1;
				if (unk_0xBE07BFED2D35F867(uVar14) && unk_0x968EA16107097324(unk_0xFDEE91DAC82E201A(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0) == unk_0xFDEE91DAC82E201A(uVar14))
						{
							func_291(1);
						}
					}
					unk_0x573691DB812DC8AA(&uVar5, iVar4);
					if (bVar11 && func_38(Local_640.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xAF99169F0F5AE41D(unk_0xFDEE91DAC82E201A(uVar14), 1) };
						if (unk_0x2A488C176D52CCA5(Var15, Var0) <= 10f)
						{
							fVar18 = unk_0x2A488C176D52CCA5(Var15, Var8);
							if (fVar18 < fVar6)
							{
								fVar6 = fVar18;
								iVar7 = iVar4;
							}
						}
					}
				}
				iVar4++;
			}
			if (func_39(Local_640.f_3))
			{
				unk_0x573691DB812DC8AA(&uVar5, 31);
			}
			Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_6 = uVar5;
			if (func_5(Local_640.f_3))
			{
				if ((unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()) || (unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED()) && !unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_640.f_3, iVar7, &Var0, &uVar3))
						{
							func_390(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
							func_389(Var0, 1, 0);
							func_388(10, 0, 0);
							unk_0x573691DB812DC8AA(&iLocal_332, 5);
						}
					}
				}
				else
				{
					func_387();
				}
			}
		}
	}
	else
	{
		func_387();
	}
}

void func_387()
{
	if (unk_0xB56FEBC510E7E9DE(iLocal_332, 5))
	{
		func_138();
		func_136();
		unk_0xA5F70A8B83BDFA49(&iLocal_332, 5);
		func_135();
	}
}

void func_388(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409226 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x8EC1FFF6B789C28E();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_389(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

void func_390(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x4D1CAE1CFC4C8868(Global_2409241.f_6))
	{
		if (!Global_2409241.f_6 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	else
	{
		Global_2409241.f_6 = unk_0x8EC1FFF6B789C28E();
	}
	Var0.f_6 = Global_2409241.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_332(unk_0x8ACD527A7E574590()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2409241 = { Var0 };
}

int func_391()
{
	if (((((func_392(unk_0x8ACD527A7E574590()) || func_133()) || func_132()) || func_131(unk_0x8ACD527A7E574590(), 21)) || func_8(unk_0x8ACD527A7E574590())) || func_7(unk_0x8ACD527A7E574590()))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_1608060[iVar0 /*106*/].f_1, 7);
	}
	return 0;
}

int func_393(int iParam0)
{
	if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 14))
	{
		return 1;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0, bool bParam1)
{
	if (Global_1586488[iParam0 /*408*/].f_248.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_395(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	struct<3> Var9;
	
	if (Local_640.f_3 == 14 && iParam1)
	{
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (!func_317(iVar0) && !func_316(iVar0))
			{
				iVar1 = unk_0x8DDF51AF4B711D9F();
				if (func_79(unk_0x8ACD527A7E574590()))
				{
					uVar2 = func_278();
					iVar3 = unk_0xAE5AB5A8DE4D19AF(uVar2);
					if (unk_0x860CE5C791DC28F5(iVar3))
					{
						iVar4 = unk_0x68F357506549EA00(iVar3);
						if (unk_0x5D14B2034A3E40D3(iVar4))
						{
							iVar1 = iVar4;
						}
					}
				}
				if (!unk_0xB56FEBC510E7E9DE(Local_2760[iVar1 /*11*/].f_7[func_308(iVar0)], func_307(iVar0)) && !bParam0)
				{
					Var5 = { Local_351[iVar0 /*3*/] };
					if (!unk_0xC3B073777B46C61A(uLocal_547[iVar0]))
					{
						if (!func_405(Var5, 0f, 0f, 0f, 0) && !func_405(Var5, 0f, 0f, -2000f, 0))
						{
							uLocal_547[iVar0] = unk_0x1802011F6E339FFF(Var5);
							unk_0x18EA864BF4963320(uLocal_547[iVar0], 9);
							unk_0x45C91EE3FC674072(uLocal_547[iVar0], "AMCH_BRIDGE");
							func_400(uLocal_547[iVar0], 25);
							func_398(&(uLocal_547[iVar0]), 12);
							unk_0x9555F96101785581(uLocal_547[iVar0], 1);
						}
					}
					else if (unk_0x4F297F09162EFB5D())
					{
						unk_0xBE97057E01D4909F(uLocal_547[iVar0], 255);
					}
					else
					{
						func_400(uLocal_547[iVar0], 25);
					}
				}
				else if (unk_0xC3B073777B46C61A(uLocal_547[iVar0]))
				{
					unk_0x296CDA10C549A502(&(uLocal_547[iVar0]));
					if (!bParam0)
					{
						unk_0xBBEB613A917D7EE8(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_41())
	{
		iVar8 = 0;
		while (iVar8 < 10)
		{
			if (((!bParam0 && unk_0xBE07BFED2D35F867(Local_640.f_67[iVar8 /*2*/].f_1)) && unk_0x968EA16107097324(unk_0xFDEE91DAC82E201A(Local_640.f_67[iVar8 /*2*/].f_1), 0)) && unk_0x9A2BADF8B8CE0E2A(unk_0xFDEE91DAC82E201A(Local_640.f_67[iVar8 /*2*/].f_1), -1))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_613[iVar8]))
				{
					uLocal_613[iVar8] = unk_0xBAA49E1DC5584B87(unk_0xB66D3D2DD5A2BA64(Local_640.f_67[iVar8 /*2*/].f_1));
					unk_0x06E25D9668199664(uLocal_613[iVar8], func_397(iVar8));
					unk_0x18EA864BF4963320(uLocal_613[iVar8], 9);
					unk_0x45C91EE3FC674072(uLocal_613[iVar8], func_396(iVar8));
					func_398(&(uLocal_613[iVar8]), 9);
				}
				else if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
				{
					Var9 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
					if (unk_0x2A488C176D52CCA5(Var9, unk_0xAF99169F0F5AE41D(unk_0xFDEE91DAC82E201A(Local_640.f_67[iVar8 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x9555F96101785581(uLocal_613[iVar8], 1);
					}
					else
					{
						unk_0x9555F96101785581(uLocal_613[iVar8], 0);
					}
				}
			}
			else if (unk_0xC3B073777B46C61A(uLocal_613[iVar8]))
			{
				unk_0x296CDA10C549A502(&(uLocal_613[iVar8]));
			}
			iVar8++;
		}
	}
}

char* func_396(int iParam0)
{
	switch (Local_640.f_67[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return "AMCH_AC";
		
		case joaat("mammatus"):
		case joaat("stunt"):
		case joaat("besra"):
			return "AMCH_AC";
		
		case joaat("sanchez"):
		case joaat("pcj"):
			return "AMCH_BIKE";
		
		default:
	}
	return "";
}

int func_397(int iParam0)
{
	switch (Local_640.f_67[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
		case joaat("stunt"):
		case joaat("besra"):
			return 423;
		
		case joaat("sanchez"):
		case joaat("pcj"):
			return 348;
		
		default:
	}
	return -1;
}

void func_398(var uParam0, int iParam1)
{
	if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x80553402FCEB9A9C(*uParam0, func_399(iParam1));
	}
}

int func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xF63BA5AC6A181C40(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_400(var uParam0, int iParam1)
{
	unk_0xBE97057E01D4909F(uParam0, func_401(uParam0, iParam1));
}

int func_401(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_404(Global_2426494))
	{
		fVar0 = func_403(uParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_402();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_402()
{
	if (func_334(Global_2426494, 1))
	{
		return 50;
	}
	return 0;
}

float func_403(var uParam0, float fParam1, float fParam2)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	uVar0 = Global_2426494;
	Var2 = { unk_0xAF014E234F6ECC62(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(uVar0), 0) };
	Var5.f_2 = 0f;
	fVar1 = unk_0x652D2EEEF1D3E62C(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

int func_404(int iParam0)
{
	if ((unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 15) && !(unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 6) && unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 7))) || ((unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 6) && !unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 7)) && !unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_69.f_2, 15)))
	{
		return 1;
	}
	return 0;
}

bool func_405(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_406(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_269(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_184(sParam1))
	{
		sVar0 = sParam1;
	}
	func_111(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0);
}

char* func_407(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x664B47C58CE8A0A4();
	return "HUD_STARTING";
	if (unk_0x35D1CAD6ADAB6491(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x35D1CAD6ADAB6491(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_408(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_409(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x5CB0A4A4240C1B6A())
	{
		Global_2457713.f_4550 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 1))
		{
			unk_0xBBEB613A917D7EE8(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2457713.f_4550 = 0;
			unk_0x573691DB812DC8AA(&(Global_2457713.f_4550), 1);
		}
	}
}

int func_410(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C779B19E6DDCDA2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), *uParam0);
		}
		else
		{
			return unk_0xC552B3A8E47271B7(unk_0x0A7450968AC14F54(), *uParam0);
		}
	}
	return unk_0xC552B3A8E47271B7(unk_0x3EAC9995EC220C5A(), *uParam0);
}

void func_411(int iParam0)
{
	if (!unk_0xF0F27AB23835252C() && !unk_0x2CC731F9E664299E())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C())
					{
						if (func_5(Local_640.f_3))
						{
							if (Local_640.f_3 == 12)
							{
								func_250("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_250("AMCH_AIRAV", 30000);
							}
						}
						else
						{
							func_250("AMCH_BIKEAV", 30000);
						}
						func_249(1);
						unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D())
					{
						func_250("AMCH_BLOW", 30000);
						func_249(1);
						unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D() && !func_416(62))
					{
						switch (Local_640.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									if (unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
									{
										func_250("AMCH_ALTI", 30000);
										func_249(1);
										unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_NMIS", 30000);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_FRFALL", -1);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_PVPO1", -1);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_PVPO2", -1);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_WHEELIE", 30000);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_STOPPIE", 30000);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_LFALL", 30000);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_LPARA", 30000);
									func_249(1);
									unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && !func_416(62))
					{
						switch (Local_640.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									if (unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
									{
										if (func_1(&uLocal_326, 1000, 0))
										{
											func_250("AMCH_OCEAN", 30000);
											func_249(1);
											func_44(&uLocal_326);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D() && !func_416(62))
					{
						switch (Local_640.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									if (unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
									{
										if (func_404(unk_0x8ACD527A7E574590()) && !func_413(unk_0x8ACD527A7E574590()))
										{
											func_250("AMCH_ALTIEXP", 30000);
											func_249(1);
											unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && !func_416(62))
					{
						if (func_1(&uLocal_326, 1000, 0))
						{
							func_250("AMCH_FLYLOW", 30000);
							func_249(1);
							func_44(&uLocal_326);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if (Local_640.f_3 == 7)
					{
						if (iLocal_625 == 0)
						{
							if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && !func_416(62))
							{
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_MVS1", 30000);
									func_249(1);
									iLocal_625 = 1;
								}
							}
						}
						else if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && !func_416(62))
						{
							if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
							{
								func_250("AMCH_MVS2", 30000);
								func_249(1);
								unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
							}
						}
					}
					if (Local_640.f_3 == 14)
					{
						if (iLocal_625 == 0)
						{
							if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && !func_416(62))
							{
								if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
								{
									func_250("AMCH_BRBL", 30000);
									func_249(1);
									iLocal_625 = 1;
								}
							}
						}
						else if ((!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C()) && !func_416(62))
						{
							if (func_12(unk_0x8ACD527A7E574590(), 1, 1))
							{
								func_250("AMCH_BRBL2", 30000);
								func_249(1);
								unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xB56FEBC510E7E9DE(iLocal_624, iParam0))
				{
					if (!unk_0x4F297F09162EFB5D() && !unk_0x8E9825258F5C145C())
					{
						func_412("AMCH_WARN", func_339(Local_640.f_3), func_338(Local_640.f_3), 30000);
						func_249(0);
						Local_3113.f_8 = unk_0xAEB19103FF099B1F();
						unk_0xBBEB613A917D7EE8(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x573691DB812DC8AA(&iLocal_624, iParam0);
					}
				}
				break;
			}
	}
}

void func_412(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0x703D2B4B1C7E10B6(sParam1);
	unk_0x703D2B4B1C7E10B6(sParam2);
	unk_0xF34A1D3B3034CC8A(0, 0, 0, iParam3);
}

bool func_413(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_241.f_136[func_415(9) /*33*/][iParam0], func_414(9));
}

int func_414(int iParam0)
{
	return (iParam0 % 32);
}

int func_415(int iParam0)
{
	return (iParam0 / 32);
}

bool func_416(int iParam0)
{
	return Global_2426494.f_2138[0 /*70*/].f_1 == iParam0;
}

void func_417(int iParam0)
{
	Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_3 = iParam0;
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 4);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 4);
	}
}

int func_419()
{
	if (func_131(unk_0x8ACD527A7E574590(), 21))
	{
		return 0;
	}
	if (unk_0x94B2757D7DE07565())
	{
		return 0;
	}
	if (unk_0xC5B525958FB84246())
	{
		return 0;
	}
	if (func_297(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_437())
	{
		return 0;
	}
	if (func_436(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_435())
	{
		return 0;
	}
	if (func_427(unk_0x8ACD527A7E574590()) == 3)
	{
		return 0;
	}
	if (func_426(func_244()))
	{
		return 0;
	}
	if (func_425())
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	if (unk_0x4FE03C08BC095A57())
	{
		return 0;
	}
	if (func_299(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!func_423())
	{
		return 0;
	}
	if (func_131(unk_0x8ACD527A7E574590(), 0) || func_131(unk_0x8ACD527A7E574590(), 3))
	{
		return 0;
	}
	if ((func_131(unk_0x8ACD527A7E574590(), 12) || func_131(unk_0x8ACD527A7E574590(), 14)) || func_131(unk_0x8ACD527A7E574590(), 13))
	{
		return 0;
	}
	if (func_394(unk_0x8ACD527A7E574590(), 0))
	{
		return 0;
	}
	if (func_422())
	{
		return 0;
	}
	if (Global_1706258)
	{
		return 0;
	}
	if (func_421(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_420())
	{
		return 0;
	}
	return 1;
}

int func_420()
{
	if (Global_2548279.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1586488[iParam0 /*408*/].f_35;
}

bool func_422()
{
	return Global_91158.f_297 > 0;
}

int func_423()
{
	if (func_424() == 0)
	{
		return 1;
	}
	return 0;
}

int func_424()
{
	return Global_1312466.f_18;
}

bool func_425()
{
	return Global_1315910;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 84:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

int func_427(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_333(iParam0) && !func_8(iParam0)) && !unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 8));
	bVar2 = func_434(iParam0);
	uVar3 = func_133();
	uVar4 = func_428();
	if ((bVar1 && (func_392(iParam0) || func_357(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_255(iParam0)) && !func_253(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2457713.f_4647.f_18 != iVar0)
	{
		Global_2457713.f_4647.f_18 = iVar0;
	}
	return iVar0;
}

int func_428()
{
	if ((func_254(unk_0x8ACD527A7E574590(), 21) || func_254(unk_0x8ACD527A7E574590(), 22)) || func_432())
	{
		return 1;
	}
	if (func_430())
	{
		func_429(22);
		return 1;
	}
	return 0;
}

void func_429(int iParam0)
{
	unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8.f_4), iParam0);
}

int func_430()
{
	if (func_256(unk_0x8ACD527A7E574590(), 0))
	{
		if ((func_133() && !func_132()) || func_131(unk_0x8ACD527A7E574590(), 21))
		{
			if (!func_254(unk_0x8ACD527A7E574590(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_431(27);
		}
	}
	return 0;
}

void func_431(int iParam0)
{
	unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8.f_4), iParam0);
}

int func_432()
{
	return func_433(261, -1);
}

int func_433(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486179[iParam0 /*5*/][func_171(iParam1)];
	if (unk_0x89E37638462C1F4C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_434(int iParam0)
{
	return func_254(iParam0, 20);
}

bool func_435()
{
	return Global_1586488[unk_0x8ACD527A7E574590() /*408*/] == 5;
}

int func_436(int iParam0)
{
	if (Global_2416794[iParam0 /*303*/].f_256.f_4 != 0 || Global_2416794[iParam0 /*303*/].f_256.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_437()
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_18, 0);
}

void func_438()
{
	func_439(&(Local_728.f_527), &Local_728, 23, &(Local_728.f_1), &(Local_728.f_110), Local_640.f_3, 0);
}

void func_439(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_536(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_534() || iParam2 == 24)
	{
		if (func_496(uParam1, iParam2, uParam3, Global_1573677, 0, func_537()))
		{
			func_495(1);
			if ((!func_494() && !func_493()) || unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 1))
			{
				if (func_492())
				{
					func_491();
				}
				else
				{
					unk_0x015513B8B0CE59A3(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_490(1);
						Global_1573677 = 0;
						iVar54 = -1;
						if (Global_1573825 != 1)
						{
							func_489(uParam1);
							if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 7))
							{
								unk_0xA5F70A8B83BDFA49(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_12(unk_0x0BBA31C395EE0D30(iVar52), 0, 1))
								{
									iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((unk_0xBED80336E95ED6FE(iVar35, unk_0x8ACD527A7E574590()) || Global_2416794[iVar35 /*303*/].f_231 != -1) || func_488(iVar35))
										{
											iVar44 = iVar35;
											if (func_72(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_485(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_483(unk_0x8ACD527A7E574590(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_481())
							{
								if (func_12(unk_0x0BBA31C395EE0D30(iVar52), 0, 1))
								{
									iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
								}
								else
								{
									iVar35 = func_81();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_480(iVar35) && func_476(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								iVar42 = Global_1586488[iVar44 /*408*/].f_192.f_6;
								Var38 = { func_471(iVar35) };
								if (iVar35 == unk_0x8ACD527A7E574590())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x2743F2603B2676CC(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_105(iVar35) };
								iVar37 = func_465(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x1192AA24F7A5B405(iVar37);
								}
								Global_1573677++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_481())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_463(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_238(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_462(iVar35, 0);
								if (bVar34)
								{
									if (func_71(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								if (func_461(iParam5))
								{
									func_460(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_460(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x573691DB812DC8AA(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xB56FEBC510E7E9DE(iVar49, iVar35))
							{
								iVar35 = unk_0x0BBA31C395EE0D30(iVar52);
							}
							else
							{
								iVar35 = func_81();
							}
							if (func_480(iVar35))
							{
								if (func_12(unk_0x0BBA31C395EE0D30(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									iVar42 = Global_1586488[iVar44 /*408*/].f_192.f_6;
									Var38 = { func_471(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_105(iVar35) };
									iVar37 = func_465(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x1192AA24F7A5B405(iVar37);
									}
									Global_1573677++;
									iVar51 = func_462(iVar35, 1);
									if (bVar34)
									{
										if (func_71(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									func_452(unk_0x2743F2603B2676CC(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 11))
						{
							func_449(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_448();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xB56FEBC510E7E9DE(uParam3->f_33, 7))
						{
							func_447(uParam3, uParam1);
							func_446(uParam1, 0, 1);
							unk_0x573691DB812DC8AA(&(uParam3->f_33), 7);
						}
						func_447(uParam3, uParam1);
						if (!unk_0xB56FEBC510E7E9DE(uParam3->f_33, 11))
						{
							unk_0x573691DB812DC8AA(&(uParam3->f_33), 11);
						}
						if (func_442(uParam3))
						{
							Global_1573825 = 1;
						}
						func_440(uParam3);
						if (Global_1573825 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573825 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xEDE19C6ED6E2F478(*uParam1))
					{
						unk_0x227C85DAD96E2942(7);
						unk_0x50137349427F6296(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x227C85DAD96E2942(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_448();
			func_490(0);
			if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 7))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam3->f_33), 7);
			}
			if (unk_0xB56FEBC510E7E9DE(uParam3->f_33, 10))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xA514BB978EE93FAD();
}

void func_440(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_441(0);
	}
}

void func_441(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573825 != 2)
		{
			Global_1573825 = 2;
		}
	}
	else
	{
		switch (Global_1573825)
		{
			case 0:
				Global_1573825 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_442(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0BBA31C395EE0D30(uParam0->f_37);
	if (iVar15 != func_81() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_105(iVar15) };
		iVar1 = func_445(uParam0, uParam0->f_37);
		if (func_444(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8DA1FEA39396CBE5(&Var2))
					{
						if (unk_0x06DC10F693195684(&Var2))
						{
							iVar16 = 1;
							func_443(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x0F7AC3501AA23585(&Var2))
					{
						iVar16 = 1;
						func_443(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8DA1FEA39396CBE5(&Var2))
					{
						if (!unk_0x06DC10F693195684(&Var2))
						{
							iVar16 = 1;
							func_443(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_443(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8DA1FEA39396CBE5(&Var2))
					{
						if (!unk_0x0F7AC3501AA23585(&Var2))
						{
							iVar16 = 1;
							func_443(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x0F7AC3501AA23585(&Var2))
					{
						iVar16 = 1;
						func_443(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_443(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_444(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xDE70C6265E82B1E0(&uParam0, 13);
}

var func_445(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_446(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x758017413321C628(*uParam0, "COLLAPSE"))
	{
		unk_0x360FCC9A8FE84159(iParam1);
		unk_0x098CA28C04E62E55();
	}
	if (iParam2 == 1)
	{
		if (unk_0x758017413321C628(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x098CA28C04E62E55();
		}
	}
}

void func_447(var uParam0, var uParam1)
{
	if (!unk_0xB56FEBC510E7E9DE(uParam0->f_33, 10))
	{
		unk_0x758017413321C628(*uParam1, "SET_HIGHLIGHT");
		unk_0x4D57F6B69CCB6D95(uParam0->f_35);
		unk_0x098CA28C04E62E55();
		unk_0x573691DB812DC8AA(&(uParam0->f_33), 10);
	}
}

void func_448()
{
	if (Global_1573825 != 0)
	{
		Global_1573825 = 0;
	}
}

void func_449(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0BBA31C395EE0D30(iVar0);
		if (iVar2 != func_81())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_451(uParam0->f_38[iVar0 /*2*/], 0);
					func_450(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1586488[iVar0 /*408*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_450(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		if (unk_0x758017413321C628(*uParam0, "SET_ICON"))
		{
			unk_0x4D57F6B69CCB6D95(iParam1);
			unk_0x4D57F6B69CCB6D95(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4D57F6B69CCB6D95(iParam3);
			}
			unk_0x098CA28C04E62E55();
		}
	}
}

int func_451(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_452(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_459() && iParam3 < func_458())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573679)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573825 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x758017413321C628(*uParam1, sVar1))
		{
			unk_0x4D57F6B69CCB6D95(iParam3);
			if (unk_0xB56FEBC510E7E9DE(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_457("");
			}
			else
			{
				unk_0x4D57F6B69CCB6D95(iParam9);
			}
			func_457(sParam0);
			unk_0x4D57F6B69CCB6D95(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_457("");
			}
			else
			{
				unk_0x4D57F6B69CCB6D95(65);
			}
			unk_0x4D57F6B69CCB6D95(-1);
			func_457("");
			if (uParam2->f_108 == 6)
			{
				func_457("");
			}
			else
			{
				func_457(&sParam4);
			}
			unk_0x360FCC9A8FE84159(uParam2->f_36);
			unk_0xECBAA26A5E3A0B96(sParam8);
			unk_0xECBAA26A5E3A0B96(sParam8);
			if (func_456(uParam2))
			{
				func_455("DPAD_FRIEND");
			}
			else if (func_454(uParam2))
			{
				func_455("DPAD_FRIEND");
			}
			else if (func_453(uParam2))
			{
				func_455("DPAD_CREW");
			}
			else
			{
				func_455("");
			}
			unk_0x098CA28C04E62E55();
		}
	}
}

bool func_453(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(uParam0->f_33, 6);
}

bool func_454(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(uParam0->f_33, 5);
}

void func_455(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

int func_456(var uParam0)
{
	if (func_454(uParam0) && func_453(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_457(char* sParam0)
{
	unk_0x2747B3A98BE1082E(sParam0);
}

int func_458()
{
	int iVar0;
	
	if (Global_1573679)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_459()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573679)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_460(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_459() && iParam2 < func_458())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573679)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573825 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEDE19C6ED6E2F478(*uParam0))
		{
			if (unk_0x758017413321C628(*uParam0, sVar1))
			{
				unk_0x4D57F6B69CCB6D95(iParam2);
				if (unk_0xB56FEBC510E7E9DE(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_457("");
				}
				else
				{
					unk_0x4D57F6B69CCB6D95(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x0AAC2160036975D9(sParam15))
				{
					func_455(sParam15);
				}
				else
				{
					func_457(&(uParam1->f_1));
				}
				unk_0x4D57F6B69CCB6D95(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_457("");
				}
				else
				{
					unk_0x4D57F6B69CCB6D95(65);
				}
				if (iParam11 == 1)
				{
					unk_0x4D57F6B69CCB6D95(iVar0);
				}
				else
				{
					unk_0x4D57F6B69CCB6D95(-1);
				}
				if (func_481())
				{
					func_457("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x0AAC2160036975D9(sParam15))
				{
					unk_0xC976485333F81CE8("FM_AE_ONE_INT");
					unk_0x703D2B4B1C7E10B6(sParam15);
					unk_0xA50C1D6E503AA51E(iParam17);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (uParam1->f_108 == 5 && !unk_0x0AAC2160036975D9(sParam15))
				{
					unk_0xC976485333F81CE8("FM_AE_ONE_INT");
					unk_0x703D2B4B1C7E10B6(sParam15);
					unk_0xA50C1D6E503AA51E(iParam17);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x0AAC2160036975D9(sParam15)) && !unk_0x0AAC2160036975D9(sParam16))
				{
					unk_0xC976485333F81CE8("FM_AE_TWO_INT");
					unk_0x703D2B4B1C7E10B6(sParam15);
					unk_0x703D2B4B1C7E10B6(sParam16);
					unk_0xA50C1D6E503AA51E(iParam17);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (uParam1->f_108 == 8 && !unk_0x0AAC2160036975D9(&(uParam1->f_104)))
				{
					unk_0xC976485333F81CE8("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x3C6EADCCA29B8BAB(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0xA50C1D6E503AA51E(iParam9);
					}
					unk_0x703D2B4B1C7E10B6(&(uParam1->f_104));
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0xC976485333F81CE8("FM_AE_CASH");
					unk_0x9214E63FEF74EFBC(iParam9, 1);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x0AAC2160036975D9(&(uParam1->f_104)))
					{
						func_455(&(uParam1->f_104));
					}
					else
					{
						func_457("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0xC976485333F81CE8("STRING");
					unk_0x31E2823F336CCAD6(iParam13, 6);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (fParam12 != -1f)
				{
					unk_0xC976485333F81CE8("NUMBER");
					unk_0x3C6EADCCA29B8BAB(fParam12, 1);
					unk_0xC8C5D5B9E15EB2E2();
				}
				else if (iParam9 != -1)
				{
					unk_0x4D57F6B69CCB6D95(iParam9);
				}
				else
				{
					func_457("");
				}
				if (uParam1->f_108 == 6)
				{
					func_457("");
				}
				else
				{
					func_457(&sParam3);
				}
				unk_0x360FCC9A8FE84159(uParam1->f_36);
				if (iParam11 == 1 || unk_0x0AAC2160036975D9(sParam7))
				{
					func_457("");
					func_457("");
				}
				else
				{
					unk_0xECBAA26A5E3A0B96(sParam7);
					unk_0xECBAA26A5E3A0B96(sParam7);
				}
				if (func_456(uParam1))
				{
					func_455("DPAD_FRIEND");
				}
				else if (func_454(uParam1))
				{
					func_455("DPAD_FRIEND");
				}
				else if (func_453(uParam1))
				{
					func_455("DPAD_CREW");
				}
				else
				{
					func_455("");
				}
				unk_0x098CA28C04E62E55();
			}
		}
	}
}

int func_461(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_462(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_333(iParam0)) && !func_434(iParam0))
	{
		iVar0 = func_55();
	}
	iVar1 = func_69(iParam0);
	if (!iVar1 == -1)
	{
		return func_67(iVar1);
	}
	return iVar0;
}

int func_463(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_464(iParam3))
	{
		*fParam1 = (func_240(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_461(iParam3))
	{
		*fParam1 = (func_240(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_465(int iParam0)
{
	int iVar0;
	
	iVar0 = func_468(iParam0);
	if (iVar0 == -1)
	{
		func_466(iParam0, 1);
		return 0;
	}
	Global_1348405[iVar0 /*5*/].f_4 = 1;
	return Global_1348405[iVar0 /*5*/].f_2;
}

void func_466(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_468(iParam0) != -1)
	{
		return;
	}
	if (Global_1348568)
	{
		if (iParam0 == Global_1348568.f_1)
		{
			return;
		}
	}
	if (func_467(iParam0))
	{
		return;
	}
	if (Global_1348606 >= 32)
	{
		return;
	}
	Global_1348573[Global_1348606] = iParam0;
	Global_1348606++;
	if (bParam1)
	{
	}
}

int func_467(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348606)
	{
		if (Global_1348573[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348566 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348566)
	{
		if (Global_1348405[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xE638EF34CE32C2C6(Global_1348405[iVar0 /*5*/].f_2) && unk_0x12CBAC0E267ACCE3(Global_1348405[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_469(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_469(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348566)
	{
		return;
	}
	if (unk_0xE638EF34CE32C2C6(Global_1348405[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348405[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x1192AA24F7A5B405(Global_1348405[iParam0 /*5*/].f_2), 64);
			unk_0x73E4492DF34D2BC9(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x7EEE720A06796607(Global_1348405[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348566)
	{
		Global_1348405[iVar32 /*5*/] = { Global_1348405[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_470(&(Global_1348405[iVar32 /*5*/]));
	Global_1348566 = (Global_1348566 - 1);
}

void func_470(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_81();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C779B19E6DDCDA2())
	{
		uParam0->f_3 = unk_0xE23D71F521207E8D();
	}
}

struct<4> func_471(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2456699 = { func_105(iParam0) };
		if (unk_0xBB3DCD23C363D187())
		{
			if (func_444(Global_2456699))
			{
				if (!unk_0xC59026760C543939(&Global_2456699))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x0CCE21CD7644969B(0))
		{
			return Var0;
		}
		if (func_475(&Global_2456699))
		{
			Global_2456629 = { func_473(iParam0) };
			func_472(&Global_2456629, &Var0);
		}
	}
	return Var0;
}

void func_472(var uParam0, var uParam1)
{
	unk_0x1DBE0FEDFBF4E5D6(uParam0, 35, uParam1);
}

struct<35> func_473(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_474(iParam0))
	{
		return Global_1315944[unk_0x8ACD527A7E574590() /*35*/];
	}
	Var0 = { func_105(iParam0) };
	unk_0x9B8FA4DF999D2A3A(&Var13, 35, &Var0);
	return Var13;
}

int func_474(int iParam0)
{
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		return 1;
	}
	return 0;
}

int func_475(var uParam0)
{
	if (unk_0x0783E320AE7A231F())
	{
		if (unk_0x99BD29C80FF8FFC7() && unk_0x149478BD8C953602(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_8(iParam0) || func_479(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_478(iParam0))
	{
		return 0;
	}
	if ((!func_477(iParam0) && Global_2416794[iParam0 /*303*/].f_231 == -1) && !func_488(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_477(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x8ACD527A7E574590(), 0, 1))
		{
			if (unk_0xBED80336E95ED6FE(iParam0, unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_478(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_128, 22);
}

int func_479(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 10) || unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 9));
	}
	return 0;
}

int func_480(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1586488[iVar0 /*408*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_481()
{
	switch (func_276(unk_0x8ACD527A7E574590()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_434(unk_0x8ACD527A7E574590()))
	{
		switch (func_482(unk_0x8ACD527A7E574590()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_482(int iParam0)
{
	if (func_256(iParam0, 0))
	{
		return Global_1608060[iParam0 /*106*/].f_8.f_27;
	}
	return -1;
}

int func_483(int iParam0, int iParam1)
{
	if (Global_1608060[iParam0 /*106*/].f_8.f_27 != -1 && func_484(Global_1608060[iParam0 /*106*/].f_8.f_27))
	{
		return 1;
	}
	if (iParam1 && Global_1608060[iParam0 /*106*/].f_8.f_26 != -1)
	{
		if (func_484(Global_1608060[iParam0 /*106*/].f_8.f_26))
		{
			return 1;
		}
	}
	return 0;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
			return 1;
		
		default:
	}
	return 0;
}

void func_485(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x0BBA31C395EE0D30(iVar0), 0, 1))
		{
			iVar1 = unk_0x0BBA31C395EE0D30(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((unk_0xBED80336E95ED6FE(iVar1, unk_0x8ACD527A7E574590()) || Global_2416794[iVar1 /*303*/].f_231 != -1) || func_488(iVar1))
				{
					if (func_486(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_486(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_81())
	{
		if (!bParam2)
		{
			if (func_487(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608060[iParam0 /*106*/].f_8 != func_81())
		{
			return iParam1 == Global_1608060[iParam0 /*106*/].f_8;
		}
	}
	return 0;
}

int func_487(int iParam0, int iParam1)
{
	if (iParam1 != func_81())
	{
		if (iParam0 != func_81())
		{
			if (Global_1608060[iParam0 /*106*/].f_8 != func_81())
			{
				if (Global_1608060[iParam0 /*106*/].f_8 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_488(int iParam0)
{
	return Global_1586488[iParam0 /*408*/].f_177 != 0;
}

void func_489(var uParam0)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4D57F6B69CCB6D95(0);
		unk_0x098CA28C04E62E55();
	}
}

void func_490(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338607.f_2 == 0)
		{
			Global_1338607.f_2 = 1;
		}
	}
	else if (Global_1338607.f_2 == 1)
	{
		Global_1338607.f_2 = 0;
	}
}

void func_491()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 1))
	{
		if (func_257())
		{
			func_243();
		}
	}
}

int func_492()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 0) && func_257())
	{
		return 1;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4413, 1) && func_257())
	{
		return 1;
	}
	return 0;
}

int func_493()
{
	if (func_257())
	{
		if (func_52(Global_2426494.f_2138[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_494()
{
	if (func_257())
	{
		if (func_56(Global_2426494.f_2138[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_495(int iParam0)
{
	Global_1338607.f_1 = Global_1338607;
	Global_1338607 = iParam0;
}

int func_496(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_533(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_532();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_531())
		{
			if (func_530() > 0 && Global_1573679)
			{
				unk_0xED841E2299EBB634();
				unk_0x0B46E54044546374(fVar7);
				unk_0xCA3D1FCD234B8E0B(18);
				if (unk_0x8E9825258F5C145C())
				{
					unk_0xC563FA29651E1515();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_521())
		{
			func_520(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4416, 26))
	{
		func_520(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_530() == 1)
		{
			func_519(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_520(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x8E9825258F5C145C())
		{
			unk_0xC563FA29651E1515();
		}
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_530() == 0 && !bParam5))
		{
			func_520(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_518();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0xED841E2299EBB634();
				}
				unk_0xCA3D1FCD234B8E0B(18);
			}
			if (unk_0xB56FEBC510E7E9DE(uParam2->f_33, 0))
			{
				Global_1573677 = uParam3;
				Global_1573676 = 1;
				unk_0x0B46E54044546374(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573678)
					{
						unk_0xA5F70A8B83BDFA49(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_518();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xED841E2299EBB634();
					}
					unk_0xCA3D1FCD234B8E0B(18);
				}
				unk_0x0B46E54044546374(fVar7);
				if (func_519(bVar6, uParam0, 0))
				{
					func_489(uParam0);
					uVar4 = func_516(iParam1, &(Global_1612768.f_65873), bParam4);
					if (bParam4)
					{
						func_513(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_507(uParam0, func_510(uParam2), func_508(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_504(uParam0, func_506(), func_505(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573678;
						func_513(uParam0, uVar4, "", 0, -1, Global_1573678, 1);
					}
					else
					{
						Var0 = { func_502(iParam1) };
						iVar8 = func_497(iParam1);
						func_513(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x573691DB812DC8AA(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_501())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_500(unk_0x8ACD527A7E574590()))
			{
				iVar0 = 20;
			}
			if (func_499(unk_0x8ACD527A7E574590()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_498(unk_0x8ACD527A7E574590()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_498(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 4;
}

bool func_499(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

bool func_500(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_501()
{
	return Global_1612768.f_1 == 0;
}

struct<4> func_502(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_503(unk_0x8ACD527A7E574590()) || func_498(unk_0x8ACD527A7E574590()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1612768.f_21, 16);
			break;
	}
	return Var0;
}

bool func_503(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 5;
}

void func_504(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_TITLE");
		if (unk_0x0AAC2160036975D9(sParam2))
		{
			func_455(sParam1);
		}
		else
		{
			unk_0xC976485333F81CE8("FM_AE_BRACKT");
			unk_0x703D2B4B1C7E10B6(sParam1);
			unk_0x703D2B4B1C7E10B6(sParam2);
			unk_0xC8C5D5B9E15EB2E2();
		}
		func_455("");
		if (iParam3 != -1)
		{
			unk_0x4D57F6B69CCB6D95(iParam3);
		}
		unk_0x098CA28C04E62E55();
	}
}

char* func_505()
{
	switch (func_482(unk_0x8ACD527A7E574590()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_506()
{
	switch (func_482(unk_0x8ACD527A7E574590()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
	}
	return "";
}

void func_507(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_TITLE");
		if (unk_0x0AAC2160036975D9(uParam2))
		{
			func_455(uParam1);
		}
		else if (func_276(unk_0x8ACD527A7E574590()) == 133)
		{
			unk_0xC976485333F81CE8("FM_AE_BRACKT_C");
			unk_0x703D2B4B1C7E10B6(uParam1);
			unk_0x703D2B4B1C7E10B6(sParam2);
			unk_0xC8C5D5B9E15EB2E2();
		}
		else
		{
			unk_0xC976485333F81CE8("FM_AE_BRACKT");
			unk_0x703D2B4B1C7E10B6(sParam1);
			unk_0x703D2B4B1C7E10B6(sParam2);
			unk_0xC8C5D5B9E15EB2E2();
		}
		func_455("");
		if (iParam3 != -1)
		{
			unk_0x4D57F6B69CCB6D95(iParam3);
		}
		unk_0x098CA28C04E62E55();
	}
}

char* func_508(var uParam0)
{
	int iVar0;
	
	iVar0 = func_276(unk_0x8ACD527A7E574590());
	if (func_509())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_275())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_509()
{
	return Global_1586487;
}

char* func_510(var uParam0)
{
	int iVar0;
	
	iVar0 = func_276(unk_0x8ACD527A7E574590());
	if (func_509())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_512() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_512() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_275())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_511() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_511()
{
	return Global_2457713.f_4637;
}

int func_512()
{
	if (func_276(unk_0x8ACD527A7E574590()) == 132)
	{
		return Global_2457713.f_4632;
	}
	return -1;
}

void func_513(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0x758017413321C628(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_457(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xC976485333F81CE8(uParam1);
			unk_0xA50C1D6E503AA51E(iParam5);
			unk_0xC8C5D5B9E15EB2E2();
		}
		else
		{
			func_455(sParam1);
		}
		if (func_531() && iParam6)
		{
			if (func_515())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xC976485333F81CE8("LBD_DPD_CNT");
			unk_0xA50C1D6E503AA51E(iVar0);
			unk_0xA50C1D6E503AA51E(iVar1);
			unk_0xC8C5D5B9E15EB2E2();
		}
		else
		{
			func_455(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4D57F6B69CCB6D95(iParam4);
			if (func_514(unk_0x8ACD527A7E574590()))
			{
				unk_0x4D57F6B69CCB6D95(166);
			}
		}
		unk_0x098CA28C04E62E55();
	}
}

int func_514(int iParam0)
{
	if (func_500(iParam0) || func_499(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_515()
{
	return Global_1573679;
}

char* func_516(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_517();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573843 == 0)
		{
			Global_1573843 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x0AAC2160036975D9(uParam1))
	{
		if (Global_1573843 == 1)
		{
			Global_1573843 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573843 == 0)
		{
			Global_1573843 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_517()
{
	if (unk_0xE555F9996469E4CE())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xEEAA0B700048924E())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xCABF40559052EFC6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x34BE50285BD9E4A1())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_518()
{
	Global_36522 = 1;
}

bool func_519(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x2F14983962462691("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x2F14983962462691("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x2F14983962462691("mp_matchmaking_card");
	}
	return unk_0xEDE19C6ED6E2F478(*uParam1);
}

void func_520(var uParam0, var uParam1, bool bParam2)
{
	unk_0xA5F70A8B83BDFA49(&(uParam1->f_33), 7);
	Global_1573677 = 0;
	func_448();
	Global_1573676 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
		}
	}
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0xD2E03CEA477E4E3D(uParam0);
	}
	if (unk_0xB56FEBC510E7E9DE(uParam1->f_33, 0))
	{
		unk_0xA5F70A8B83BDFA49(&(uParam1->f_33), 0);
	}
	unk_0x0B46E54044546374(0f);
}

int func_521()
{
	if (func_529())
	{
		return 0;
	}
	if (func_435())
	{
		return 0;
	}
	if (!func_527())
	{
		return 0;
	}
	if (!func_423())
	{
		return 0;
	}
	if (func_526(8, -1))
	{
		return 0;
	}
	if (func_530() == 2)
	{
		return 0;
	}
	if (Global_2457713.f_4396)
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	else if (!func_298(unk_0x8ACD527A7E574590(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_525(1) || func_523(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (func_79(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (Global_1706258)
	{
		return 0;
	}
	if (Global_1706261)
	{
		return 0;
	}
	if (func_522(0))
	{
		return 0;
	}
	return 1;
}

bool func_522(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_2457713.f_4647.f_16, iParam0);
}

int func_523(bool bParam0)
{
	if (unk_0xFDB8C0B1E2EEA481())
	{
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (func_524(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xE721293454745300(0, 25) || unk_0xE721293454745300(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0xE721293454745300(0, 19) || (!bParam0 && unk_0xECDBFACBE670BD70(0, 19)))
	{
		return 1;
	}
	if (unk_0x2C063B4379F0C076())
	{
		if (((unk_0xE721293454745300(0, 166) || unk_0xE721293454745300(0, 167)) || unk_0xE721293454745300(0, 168)) || unk_0xE721293454745300(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xECDBFACBE670BD70(0, 166) || unk_0xECDBFACBE670BD70(0, 167)) || unk_0xECDBFACBE670BD70(0, 168)) || unk_0xECDBFACBE670BD70(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_524(int iParam0)
{
	int iVar0;
	
	if (unk_0xFFB998F7CF994F0E())
	{
		if (!unk_0x1E80C02AC16B6622(uParam0))
		{
			unk_0x587BE7B13B3A93BF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_525(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_526(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

int func_527()
{
	if (func_528())
	{
		return 1;
	}
	if (unk_0x2CC731F9E664299E())
	{
		return 0;
	}
	if (unk_0x8DD09BB8ACF9E623() || unk_0x329E4482E654B910())
	{
		return 0;
	}
	if (unk_0x3502F016A4FB24C5())
	{
		return 0;
	}
	return 1;
}

bool func_528()
{
	return Global_1312438;
}

bool func_529()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

int func_530()
{
	return Global_1338610.f_68;
}

int func_531()
{
	if (Global_1573678 > 16)
	{
		return 1;
	}
	return 0;
}

float func_532()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5E94674CEC1591AA()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_534()
{
	if (func_537())
	{
		return 1;
	}
	if (func_7(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (func_509())
	{
		return 1;
	}
	if (func_333(unk_0x8ACD527A7E574590()))
	{
		switch (func_276(unk_0x8ACD527A7E574590()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_535(unk_0x8ACD527A7E574590()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_535(unk_0x8ACD527A7E574590()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_535(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 4);
}

int func_536(int iParam0)
{
	if ((iParam0 == 24 && func_333(unk_0x8ACD527A7E574590())) && !func_434(unk_0x8ACD527A7E574590()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_256(unk_0x8ACD527A7E574590(), 0) && func_434(unk_0x8ACD527A7E574590()))
		{
			return 1;
		}
		if (func_427(unk_0x8ACD527A7E574590()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_537()
{
	if (func_538(unk_0x8ACD527A7E574590()))
	{
		return Global_1318846;
	}
	return 0;
}

int func_538(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return unk_0x05699AF6D145B1B8(iParam0);
	}
	return 0;
}

void func_539()
{
	if (Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_3 == 3)
	{
		if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 8))
		{
			if ((!func_7(unk_0x8ACD527A7E574590()) && !func_130(unk_0x8ACD527A7E574590())) && !func_345(unk_0x8ACD527A7E574590()))
			{
				func_344();
			}
		}
		else if (!unk_0xB56FEBC510E7E9DE(iLocal_332, 9))
		{
			if ((func_7(unk_0x8ACD527A7E574590()) || func_130(unk_0x8ACD527A7E574590())) || func_345(unk_0x8ACD527A7E574590()))
			{
				unk_0x6D2104693334D33F();
				Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4 = 0;
				unk_0x573691DB812DC8AA(&iLocal_332, 9);
			}
		}
	}
}

void func_540()
{
	int iVar0;
	
	if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(iLocal_336)))
	{
		iVar0 = unk_0x42145D1DD048146E(unk_0x209E209593217021(iLocal_336));
		if (unk_0x860CE5C791DC28F5(iVar0))
		{
			func_541(iVar0, 2);
		}
	}
	iLocal_336++;
	if (iLocal_336 >= unk_0xD92F4D7123D878D4())
	{
		iLocal_336 = 0;
	}
}

void func_541(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1573875.f_18)))
	{
		return;
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_2, iParam0))
	{
		if (Global_1573875 < iParam1 && unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 1))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 0);
			return;
		}
		if (Global_1573875 != 0)
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 1);
		}
		Global_1573875 = 0;
		Global_1573875.f_2 = 0;
	}
	unk_0x573691DB812DC8AA(&(Global_1573875.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_542(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1573875++;
	}
}

bool func_542(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_1, 10);
}

void func_543(int iParam0, int iParam1)
{
	Local_2760[iParam0 /*11*/] = iParam1;
}

int func_544()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_728.f_527[iVar0 /*47*/].f_1 = func_81();
		iVar0++;
	}
	return 1;
}

int func_545()
{
	return Local_640.f_0;
}

int func_546(int iParam0)
{
	return Local_2760[iParam0 /*11*/];
}

void func_547()
{
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 6))
	{
		func_570();
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 6);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 7))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 4) || unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 16))
		{
			if (((!unk_0xF0F27AB23835252C() && !unk_0x8E9825258F5C145C()) && !func_257()) && func_12(unk_0x8ACD527A7E574590(), 1, 1))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 7);
				func_250("FME_PASINT", 30000);
				func_249(1);
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 17))
		{
			if (func_133() && !func_132())
			{
				unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 17);
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 16);
			}
		}
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 23))
	{
		if (((((!unk_0xF0F27AB23835252C() && !unk_0xB56FEBC510E7E9DE(Global_2457713.f_741, 2)) && func_12(unk_0x8ACD527A7E574590(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0x8E9825258F5C145C())
		{
			if (func_568())
			{
				func_250("AMEV_GA_RP", -1);
				func_249(1);
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 23);
			}
		}
	}
	if (unk_0x4F297F09162EFB5D() && unk_0x8FE63F025578C271() == 15)
	{
		if (func_357(unk_0x8ACD527A7E574590()))
		{
			if (!unk_0x915165A5AB17A987(1344549371))
			{
				unk_0x5705C31EB59B804F(1344549371);
			}
		}
		else if (unk_0x915165A5AB17A987(1344549371))
		{
			unk_0x5CEAA1213640136E(1344549371);
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 9))
	{
		if ((((!unk_0xF0F27AB23835252C() && !unk_0x8E9825258F5C145C()) && !func_257()) && func_12(unk_0x8ACD527A7E574590(), 1, 1)) && !func_131(unk_0x8ACD527A7E574590(), 21))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 9);
			func_567(0);
			func_250("FME_TBL00", -1);
			func_249(1);
		}
	}
	if (func_333(unk_0x8ACD527A7E574590()))
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 18))
		{
			if ((func_131(unk_0x8ACD527A7E574590(), 21) && unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 20)) && !unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 19))
			{
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 18);
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 18))
		{
			if (((((!unk_0xF0F27AB23835252C() && !unk_0x8E9825258F5C145C()) && !func_257()) && func_12(unk_0x8ACD527A7E574590(), 1, 1)) && unk_0x398F615441F52A47()) && !Global_2457713.f_4641)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 18);
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 19);
				func_250("AMTT_RPAS", -1);
				func_249(1);
			}
		}
	}
	if (((((func_333(unk_0x8ACD527A7E574590()) && !func_8(unk_0x8ACD527A7E574590())) && func_276(unk_0x8ACD527A7E574590()) != 146) && !func_7(unk_0x8ACD527A7E574590())) && !func_130(unk_0x8ACD527A7E574590())) && !func_557())
	{
		if (func_356(func_276(unk_0x8ACD527A7E574590())))
		{
			unk_0x8657687F89ED656A(unk_0x8ACD527A7E574590());
		}
		if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 22))
		{
			unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 22);
		}
		if (func_392(unk_0x8ACD527A7E574590()) || func_351())
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 10))
			{
				if (func_556(func_276(unk_0x8ACD527A7E574590())))
				{
					if (func_218(0) && !Global_2391042)
					{
						unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 9);
					}
					func_355(1);
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 14);
				}
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 10);
			}
		}
		if (func_357(unk_0x8ACD527A7E574590()))
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 11))
			{
				if (!Global_91158.f_8)
				{
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 12);
					func_353(1);
				}
				if (!func_555())
				{
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 13);
					func_352();
				}
				if (!Global_2391042)
				{
					unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 14);
					if (func_218(0) && !Global_2391042)
					{
						unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 9);
					}
					func_355(1);
				}
				unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 11);
			}
		}
		else
		{
			func_553(0);
		}
	}
	else
	{
		func_553(1);
	}
	func_548();
	if (func_350(func_276(unk_0x8ACD527A7E574590())) && !unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 21))
	{
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 21);
	}
	if ((func_133() && !func_132()) || func_131(unk_0x8ACD527A7E574590(), 21))
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 10))
		{
			unk_0x573691DB812DC8AA(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 10);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 10))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 10);
	}
}

void func_548()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_257())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_416(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 62 || iVar0 >= 80)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 26))
				{
					unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 26);
				}
				func_549(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 26))
	{
		func_44(&(Global_1573875.f_21));
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 26);
	}
}

void func_549(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1573875.f_21)))
	{
		func_2(&(Global_1573875.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573875.f_21), iParam1, 0))
	{
		if (func_530() > 0)
		{
			func_552(iParam0);
			if (func_247("AMEV_LBD_HELP"))
			{
				unk_0x4ACCE973F9C3CA3B(1);
			}
			func_44(&(Global_1573875.f_21));
		}
	}
	else
	{
		func_551(0);
		func_550();
	}
}

void func_550()
{
	Global_2457713.f_4383 = 0;
}

void func_551(int iParam0)
{
	Global_1338610.f_68 = iParam0;
}

void func_552(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			unk_0x573691DB812DC8AA(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_553(int iParam0)
{
	if ((unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 11) || (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 10) && iParam0)) || (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 22) && iParam0))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 12))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 12);
			func_353(0);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 13))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 13);
			func_554();
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 14) && !func_256(unk_0x8ACD527A7E574590(), 0))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 14);
			func_355(0);
		}
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 11);
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 10);
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 22);
	}
}

void func_554()
{
	unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4551), 0);
}

bool func_555()
{
	return unk_0xB56FEBC510E7E9DE(Global_2457713.f_4551, 0);
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_357(unk_0x8ACD527A7E574590());
		
		case 133:
			return (func_351() || func_5(func_275()));
		
		default:
	}
	return 0;
}

int func_557()
{
	if (((((((((func_566() || func_565()) || func_564()) || func_270()) || (func_563() && !unk_0x4FE03C08BC095A57())) || (func_560() && !func_559())) || Global_2394609) || Global_2394609.f_1 != 0) || Global_2394682 != 0) || (func_558() == 2 && !unk_0x4FE03C08BC095A57()))
	{
		return 1;
	}
	return 0;
}

int func_558()
{
	return Global_976340;
}

bool func_559()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717.f_2, 27);
}

int func_560()
{
	if (func_562() || func_561())
	{
		return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_84 == 8;
	}
	return 0;
}

var func_561()
{
	return Global_2432717.f_609;
}

bool func_562()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717.f_2, 11);
}

bool func_563()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717, 5);
}

bool func_564()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717, 2);
}

bool func_565()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717, 20);
}

bool func_566()
{
	return Global_2432717.f_573;
}

void func_567(int iParam0)
{
	int iVar0;
	
	iVar0 = func_175(2507, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 0))
		{
			unk_0x573691DB812DC8AA(&iVar0, 0);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 1))
		{
			unk_0x573691DB812DC8AA(&iVar0, 1);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 2))
		{
			unk_0x573691DB812DC8AA(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 3))
		{
			unk_0x573691DB812DC8AA(&iVar0, 3);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 4))
		{
			unk_0x573691DB812DC8AA(&iVar0, 4);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 5))
		{
			unk_0x573691DB812DC8AA(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 6))
		{
			unk_0x573691DB812DC8AA(&iVar0, 6);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 7))
		{
			unk_0x573691DB812DC8AA(&iVar0, 7);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 8))
		{
			unk_0x573691DB812DC8AA(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xB56FEBC510E7E9DE(iVar0, 9))
		{
			unk_0x573691DB812DC8AA(&iVar0, 9);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 10))
		{
			unk_0x573691DB812DC8AA(&iVar0, 10);
		}
		else if (!unk_0xB56FEBC510E7E9DE(iVar0, 11))
		{
			unk_0x573691DB812DC8AA(&iVar0, 11);
		}
	}
	func_166(2507, iVar0, -1, 1);
}

int func_568()
{
	int iVar0;
	
	if (!func_45(&(Global_1573875.f_15)))
	{
		func_2(&(Global_1573875.f_15), 0, 0);
		Global_1573875.f_17 = 0;
	}
	else if (func_1(&(Global_1573875.f_15), 1000, 0))
	{
		if (unk_0x5D14B2034A3E40D3(unk_0x209E209593217021(Global_1573875.f_17)))
		{
			iVar0 = unk_0x42145D1DD048146E(unk_0x209E209593217021(Global_1573875.f_17));
			if (unk_0x860CE5C791DC28F5(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_569(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0x8ACD527A7E574590()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573875.f_17++;
		if (Global_1573875.f_17 >= 32)
		{
			Global_1573875.f_17 = 0;
			func_44(&(Global_1573875.f_15));
		}
	}
	return 0;
}

int func_569(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_170(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1586488[iVar0 /*408*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_570()
{
	unk_0xCBC9707F3BE3D5C2(5);
	func_572();
	unk_0x4AAD01BBE039D160(1f);
	unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 8);
	func_571();
}

void func_571()
{
	if (Global_1715730)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1715731, 0))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2464277, 0);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1715731, 1))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2464277, 1);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1715731, 5))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2464277, 5);
		}
		if (unk_0x456AF8BC83CCA6FF(-355737150))
		{
			unk_0x39FEEC3E8273065D(-355737150, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-580979506))
		{
			unk_0x39FEEC3E8273065D(-580979506, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-1426452475))
		{
			unk_0x39FEEC3E8273065D(-1426452475, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(745417724))
		{
			unk_0x39FEEC3E8273065D(745417724, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-1305304906))
		{
			unk_0x39FEEC3E8273065D(-1305304906, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-1543175077))
		{
			unk_0x39FEEC3E8273065D(-1543175077, 1, 0, 0);
		}
		if (unk_0x456AF8BC83CCA6FF(-811770997))
		{
			unk_0x39FEEC3E8273065D(-811770997, 1, 0, 0);
		}
		Global_1715731 = 0;
	}
	Global_1715730 = 0;
}

void func_572()
{
	if (unk_0x4D1CAE1CFC4C8868(Global_2457713.f_4643))
	{
		if (!Global_2457713.f_4643 == unk_0x8EC1FFF6B789C28E())
		{
			return;
		}
	}
	Global_2457713.f_4643 = -1;
	Global_2457713.f_4642 = 1f;
}

int func_573()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2457713.f_4549)
	{
		return 0;
	}
	if ((!func_45(&(Local_640.f_39)) && !func_45(&(Local_640.f_41))) && !func_45(&(Local_640.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0xE23D71F521207E8D();
	if (func_45(&(Local_640.f_41)))
	{
		iVar0 = func_574(&uVar2, &(Local_640.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_640.f_39)))
	{
		iVar0 = func_574(&uVar2, &(Local_640.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_640.f_43)))
	{
		iVar0 = func_574(&uVar2, &(Local_640.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_574(var uParam0, var uParam1)
{
	return unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(*uParam0, *uParam1));
}

int func_575()
{
	if (func_576())
	{
		return 1;
	}
	return 0;
}

bool func_576()
{
	return Global_1573875.f_23;
}

int func_577()
{
	bool bVar0;
	
	func_581(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315885 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 1;
		}
	}
	if (func_580())
	{
		return 1;
	}
	if (Global_2442895)
	{
		return 1;
	}
	if (func_579())
	{
		return 1;
	}
	if (func_578(157))
	{
		if (!func_566())
		{
			return 1;
		}
	}
	if (func_578(155))
	{
		return 1;
	}
	if (!unk_0x3A691B47D5DE2593())
	{
		return 1;
	}
	if (func_359() != 0)
	{
		if (unk_0xB1A77D5C890711F9(func_359()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_578(int iParam0)
{
	if (unk_0xF5F50153667BD068(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_579()
{
	return Global_2440977;
}

bool func_580()
{
	return Global_2432717.f_568;
}

void func_581(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE8F73785A0FB2F57(1))
	{
		iVar1 = unk_0x6688A198308BEB5E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xA961A8FBAD16D683(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 315:
					func_582(iVar0);
					break;
				
				case 2:
					unk_0xA961A8FBAD16D683(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_582(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xA961A8FBAD16D683(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xF555CE342BA0C333(Var0.f_1);
			if (unk_0x1F2158D615BC4B25(uVar3))
			{
				if (unk_0xB42592B9FFEB5EDE(iVar3, 0))
				{
					uVar4 = unk_0xF8D66A34AF0C53A5(iVar3, 0);
					if (unk_0x8F41BA1B6610A17B(uVar4, Var0.f_2) && unk_0xCD9901F3C995D4B9())
					{
						if (func_583(uVar4, &bVar5))
						{
							unk_0x8534CE5144691854(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB84D4C251623B60C(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_583(int iParam0, var uParam1)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x335346A332B62CA2(iParam0))
		{
			if (unk_0xA203F67D4FCA77C8(iParam0))
			{
				unk_0x8D429A827A931AC9(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x95CBA891BCA778AA(iParam0, 0))
		{
			if (unk_0xE8BD4B74271ABDCC(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_584()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_585()
{
	int iVar0;
	
	if (func_577())
	{
		Local_3113.f_5 = 5;
	}
	else if (unk_0xB56FEBC510E7E9DE(Local_640.f_2, 0))
	{
		Local_3113.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3113.f_5 = 1;
	}
	else
	{
		Local_3113.f_5 = 2;
	}
	Local_3113.f_0 = Local_640.f_52;
	Local_3113.f_1 = Local_640.f_53;
	Local_3113.f_4 = Local_640.f_66;
	Local_3113.f_3 = Local_640.f_51;
	Local_3113.f_10 = (unk_0xAEB19103FF099B1F() - Local_3113.f_9);
	if (!Global_262145.f_9349)
	{
		if (Local_3113.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x8DDF51AF4B711D9F() != -1)
	{
		func_610(Local_3113, Local_640.f_3, Local_2760[unk_0x8DDF51AF4B711D9F() /*11*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xB56FEBC510E7E9DE(iLocal_332, 4))
	{
		unk_0xE24358A92698B60D(iLocal_340);
		unk_0xA5F70A8B83BDFA49(&iLocal_332, 4);
	}
	unk_0xA92DDFCD9C825944(iLocal_340);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB56FEBC510E7E9DE(iLocal_626, iVar0) && !unk_0x4FB4BC44492DEE8D(uLocal_627[iVar0]))
		{
			unk_0xE24358A92698B60D(uLocal_627[iVar0]);
			unk_0xA92DDFCD9C825944(uLocal_627[iVar0]);
		}
		iVar0++;
	}
	func_341();
	func_395(1, 1);
	unk_0x57D24530B1438FD9(0);
	func_418(0);
	func_348(Local_640.f_3, 0);
	func_586(133, 0, Local_640.f_37 == 6);
	func_347(23, 0);
	if (func_262() >= 0f)
	{
		unk_0xC5FCA7E600AF7F63(0f, 0);
	}
	unk_0x6D2104693334D33F();
	unk_0x2F798BA2098FDADE();
}

void func_586(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x8ACD527A7E574590() != -1)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 13))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 13);
		}
		if (unk_0xB56FEBC510E7E9DE(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1, 14))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1), 14);
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_1573875.f_1, 21))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_1573875.f_1), 21);
	}
	func_606();
	unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
	unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_605(func_276(unk_0x8ACD527A7E574590()));
		func_347(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x8ACD527A7E574590() != -1) && func_604(unk_0x8ACD527A7E574590()) >= 12)
		{
			func_603(2519, -1);
			iVar1 = func_175(2519, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x573691DB812DC8AA(&Global_1573900, 5);
			}
		}
		func_602();
		func_601();
		func_600();
		if (!func_255(unk_0x8ACD527A7E574590()) && !func_253(unk_0x8ACD527A7E574590()))
		{
			func_593();
		}
		func_592();
		if (!unk_0xB56FEBC510E7E9DE(Global_1718248.f_3, 0) && !unk_0xB56FEBC510E7E9DE(Global_1718248.f_3, 1))
		{
			func_570();
		}
		func_591();
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1637), 2);
		func_590();
		func_135();
	}
	if (unk_0x915165A5AB17A987(1344549371))
	{
		unk_0x5CEAA1213640136E(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x8ACD527A7E574590() != -1 && !func_131(unk_0x8ACD527A7E574590(), 21)) && !func_256(unk_0x8ACD527A7E574590(), 0))
		{
			func_355(0);
			func_353(0);
			func_589();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2442839 = -1;
			func_46(26, -1);
		}
	}
	if (!func_587())
	{
		Global_2456625 = 1;
	}
}

int func_587()
{
	if (((!func_514(unk_0x8ACD527A7E574590()) && !func_498(unk_0x8ACD527A7E574590())) && func_276(unk_0x8ACD527A7E574590()) != 146) && !func_588())
	{
		return 0;
	}
	return 1;
}

int func_588()
{
	if (Global_1612768 == 0 && ((((((((((((((((unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 15) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 18)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 19)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 28)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_4, 27)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 0)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 1)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 2)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 5)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 7)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 8)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 6)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 3)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 9)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 10)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 11)) || unk_0xB56FEBC510E7E9DE(Global_1612768.f_5, 4)))
	{
		return 1;
	}
	return 0;
}

void func_589()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0xA5F70A8B83BDFA49(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_590()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4550, 1))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_4550), 1);
	}
	if (Global_2457713.f_4550 > 0)
	{
		unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_KILL");
		unk_0x3345CB85AB9EC035("FM_COUNTDOWN_30S_FIRA");
		unk_0xE0DB271DC0AEA972("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x3D7142FA27466C86(1);
		Global_2457713.f_4550 = 0;
		unk_0x6BFEA4147919A51C("DisableFlightMusic", 0);
		unk_0x6BFEA4147919A51C("WantedMusicDisabled", 0);
		unk_0x6BFEA4147919A51C("AllowScoreAndRadio", 0);
		if (!unk_0x35D1CAD6ADAB6491(unk_0x664B47C58CE8A0A4(), "am_pi_menu"))
		{
			if (Global_2457713.f_4560 > -1)
			{
				unk_0xA92DDFCD9C825944(Global_2457713.f_4560);
				Global_2457713.f_4560 = -1;
			}
		}
	}
}

void func_591()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573875 = { Var0 };
}

void func_592()
{
	var uVar0;
	
	Global_1318846 = uVar0;
}

void func_593()
{
	Global_2404919.f_20 = { Global_2406518 };
	Global_2404919.f_22 = { Global_2406520 };
	func_594(1, 1);
}

void func_594(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406537 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406537 };
		Global_2404919.f_39.f_49 = { Global_2406537.f_49 };
		Global_2404919.f_39.f_52 = Global_2406537.f_52;
		Global_2404919.f_39.f_53 = Global_2406537.f_53;
	}
	if (bParam0)
	{
		func_599();
	}
	func_596(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_595(0);
	func_138();
}

void func_595(bool bParam0)
{
	if (bParam0)
	{
		Global_2404919.f_629 = 0;
	}
	else
	{
		Global_2404919.f_629 = 1;
	}
}

void func_596(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		func_597();
		func_388(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1139 = iParam3;
		Global_2404919.f_1140 = iParam4;
		Global_2404919.f_1137 = iParam5;
		Global_2404919.f_1138 = iParam6;
		Global_2404919.f_1141 = iParam7;
		Global_2404919.f_1142 = iParam8;
		Global_2404919.f_1143 = iParam9;
	}
	else
	{
		func_597();
		func_388(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_597()
{
	func_598();
	Global_2404919.f_631 = 0;
}

void func_598()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404919.f_632[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_599()
{
	Global_2404919.f_347 = { Global_2406845 };
}

void func_600()
{
	Global_2457713.f_4551 = 0;
}

void func_601()
{
	if (unk_0x8ACD527A7E574590() != -1)
	{
		Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_1 = 0;
	}
}

void func_602()
{
	int iVar0;
	
	iVar0 = unk_0x8ACD527A7E574590();
	if (iVar0 != -1)
	{
		Global_1608060[iVar0 /*106*/] = -1;
	}
}

void func_603(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_175(iParam0, func_171(iParam1), 0);
	iVar0++;
	if (!func_174(iParam0))
	{
		func_166(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_167(iParam0, iVar0, iParam1, 1);
	}
}

int func_604(int iParam0)
{
	return Global_1586488[iParam0 /*408*/].f_192.f_6;
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_357(unk_0x8ACD527A7E574590()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_606()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 3) || unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 4))
	{
		if (unk_0x2CC731F9E664299E() || unk_0x8DD09BB8ACF9E623())
		{
			unk_0xCA6D671341405469(800);
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 5))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1635), 5);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 3))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1635), 3);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_1635, 4))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2457713.f_1635), 4);
	}
	func_609(0);
	func_608(0);
	func_607(0);
}

void func_607(int iParam0)
{
	if (Global_2457713.f_4371 != iParam0)
	{
		Global_2457713.f_4371 = iParam0;
	}
}

void func_608(bool bParam0)
{
	if (Global_2457713.f_4370 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2457713.f_4370 = bParam0;
	}
}

void func_609(int iParam0)
{
	if (Global_2457713.f_4368 != iParam0)
	{
		Global_2457713.f_4368 = iParam0;
	}
}

void func_610(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	var uVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	uVar0 = unk_0x664B47C58CE8A0A4();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69317)
	{
		if (unk_0x35D1CAD6ADAB6491(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x87C9FFD02F36010D(&Var1);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xD7BCE57D3E3C6357(&Var14);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x6039AF128DEF4D92(&Var28);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xD1464D98A78E042B(&Var52);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_penned_in"))
		{
			unk_0xDD873900121D53C8(&Param0);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x83B701077804D55E(&Var66);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x7415E4FE7D84C270(&Var79);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xC0103A0E44DFACFD(&Var93);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0xE3A668C6D43D48C4(&Var107);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xE52D2969162A9974(&Var123);
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xAE7D20497F72F04C(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xAE52C7DB2424F011(&Var150);
			}
		}
		else if (unk_0x35D1CAD6ADAB6491(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x62657C82F090B19F(&Var164);
		}
	}
}

int func_611(struct<20> Param0)
{
	func_619(func_620(Param0.f_0), Param0);
	unk_0xEF0C9156550D021E(0);
	unk_0x243D22C9CB37ECA3(func_618(9));
	func_615(0, -1, 0);
	func_613(133);
	unk_0x39875B70C130EB4D(&Local_640, 88);
	unk_0x630A256DB3A5FC80(&Local_2760, 353);
	if (!func_612())
	{
		func_585();
	}
	if (unk_0xCD91CF0F63010FB2())
	{
		unk_0xB3F2BA4ABA5D5497(&(Local_640.f_52), &(Local_640.f_53));
	}
	Local_3113.f_2 = unk_0x825762A1424CFB65();
	unk_0x2A1F1A3180086B2E(0);
	return 1;
}

int func_612()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 0;
		}
		if (unk_0xCF7D33D72A6A0841())
		{
			return 1;
		}
		if (func_580())
		{
			return 0;
		}
		if (func_578(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

void func_613(int iParam0)
{
	func_591();
	func_614();
	func_600();
	Global_1573875.f_4 = iParam0;
	Global_1573875.f_5 = iParam0;
	func_364(iParam0, -1);
	func_27(&(Global_1573875.f_18), 0, 0);
	Global_2457713.f_4413 = 0;
	Global_2441617[0] = func_81();
	Global_2441617[1] = func_81();
	Global_2441617[2] = func_81();
	Global_2441617[3] = func_81();
	Global_2441617[4] = func_81();
	func_135();
	func_243();
	if (func_133() && !func_132())
	{
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 16);
	}
	else
	{
		unk_0x573691DB812DC8AA(&(Global_1573875.f_1), 17);
	}
}

void func_614()
{
	var uVar0;
	
	Global_1573899 = uVar0;
}

int func_615(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x61AA115EF3AAF17E();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_617();
			}
			else
			{
				return 0;
			}
		}
		if (!func_616())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C779B19E6DDCDA2())
				{
					if (!bParam2)
					{
						func_617();
					}
					else
					{
						return 0;
					}
				}
				if (func_580())
				{
					if (!bParam2)
					{
						func_617();
					}
					else
					{
						return 0;
					}
				}
				if (func_578(155))
				{
					if (!bParam2)
					{
						func_617();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x511A80B99C8ADD82())
			{
				if (!bParam2)
				{
					func_617();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x61AA115EF3AAF17E();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			if (!bParam2)
			{
				func_617();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x511A80B99C8ADD82())
	{
		if (!bParam2)
		{
			func_617();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_616()
{
	return Global_1315885;
}

void func_617()
{
	unk_0x2F798BA2098FDADE();
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

void func_619(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		func_617();
	}
	unk_0xF38C3C2D73EE34BB(uParam0, 0, Param1.f_16);
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 65:
			return 32;
		
		case 66:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}


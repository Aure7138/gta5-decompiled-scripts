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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110[65];
	float fLocal_306 = 0f;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	float fLocal_319 = 0f;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	float fLocal_340 = 0f;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	struct<3> Local_354[65];
	var uLocal_550[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_616[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	var uLocal_630[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	struct<68> Local_643 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	struct<528> Local_731 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1259 = -1;
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
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = -1082130432;
	var uLocal_1282 = 3;
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
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = -1;
	var uLocal_1308 = -1;
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
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = -1082130432;
	var uLocal_1331 = 3;
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
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = -1;
	var uLocal_1357 = -1;
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
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = -1082130432;
	var uLocal_1380 = 3;
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
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = -1;
	var uLocal_1406 = -1;
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
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = -1082130432;
	var uLocal_1429 = 3;
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
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = -1;
	var uLocal_1455 = -1;
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
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = -1082130432;
	var uLocal_1478 = 3;
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
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
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
	var uLocal_1503 = -1;
	var uLocal_1504 = -1;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
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
	var uLocal_1526 = -1082130432;
	var uLocal_1527 = 3;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
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
	var uLocal_1552 = -1;
	var uLocal_1553 = -1;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
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
	var uLocal_1575 = -1082130432;
	var uLocal_1576 = 3;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
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
	var uLocal_1601 = -1;
	var uLocal_1602 = -1;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
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
	var uLocal_1624 = -1082130432;
	var uLocal_1625 = 3;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
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
	var uLocal_1650 = -1;
	var uLocal_1651 = -1;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
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
	var uLocal_1673 = -1082130432;
	var uLocal_1674 = 3;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
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
	var uLocal_1699 = -1;
	var uLocal_1700 = -1;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
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
	var uLocal_1722 = -1082130432;
	var uLocal_1723 = 3;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
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
	var uLocal_1748 = -1;
	var uLocal_1749 = -1;
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
	var uLocal_1771 = -1082130432;
	var uLocal_1772 = 3;
	var uLocal_1773 = 0;
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
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = -1;
	var uLocal_1798 = -1;
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
	var uLocal_1819 = 0;
	var uLocal_1820 = -1082130432;
	var uLocal_1821 = 3;
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
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = -1;
	var uLocal_1847 = -1;
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
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = -1082130432;
	var uLocal_1870 = 3;
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
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = -1;
	var uLocal_1896 = -1;
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
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = -1082130432;
	var uLocal_1919 = 3;
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
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = -1;
	var uLocal_1945 = -1;
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
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = -1082130432;
	var uLocal_1968 = 3;
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
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = -1;
	var uLocal_1994 = -1;
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
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = -1082130432;
	var uLocal_2017 = 3;
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
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
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
	var uLocal_2042 = -1;
	var uLocal_2043 = -1;
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
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = -1082130432;
	var uLocal_2066 = 3;
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
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
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
	var uLocal_2091 = -1;
	var uLocal_2092 = -1;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
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
	var uLocal_2114 = -1082130432;
	var uLocal_2115 = 3;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
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
	var uLocal_2140 = -1;
	var uLocal_2141 = -1;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
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
	var uLocal_2163 = -1082130432;
	var uLocal_2164 = 3;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
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
	var uLocal_2189 = -1;
	var uLocal_2190 = -1;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
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
	var uLocal_2212 = -1082130432;
	var uLocal_2213 = 3;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
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
	var uLocal_2238 = -1;
	var uLocal_2239 = -1;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
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
	var uLocal_2261 = -1082130432;
	var uLocal_2262 = 3;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
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
	var uLocal_2287 = -1;
	var uLocal_2288 = -1;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
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
	var uLocal_2310 = -1082130432;
	var uLocal_2311 = 3;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
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
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = -1;
	var uLocal_2386 = -1;
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
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = -1082130432;
	var uLocal_2409 = 3;
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
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = -1;
	var uLocal_2435 = -1;
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
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = -1082130432;
	var uLocal_2458 = 3;
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
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = -1;
	var uLocal_2484 = -1;
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
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = -1082130432;
	var uLocal_2507 = 3;
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
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = -1;
	var uLocal_2533 = -1;
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
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = -1082130432;
	var uLocal_2556 = 3;
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
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = -1;
	var uLocal_2582 = -1;
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
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = -1082130432;
	var uLocal_2605 = 3;
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
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
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
	var uLocal_2630 = -1;
	var uLocal_2631 = -1;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
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
	var uLocal_2653 = -1082130432;
	var uLocal_2654 = 3;
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
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
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
	var uLocal_2679 = -1;
	var uLocal_2680 = -1;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
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
	var uLocal_2702 = -1082130432;
	var uLocal_2703 = 3;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
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
	var uLocal_2728 = -1;
	var uLocal_2729 = -1;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
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
	var uLocal_2751 = -1082130432;
	var uLocal_2752 = 3;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = -1;
	var uLocal_2778 = -1;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = -1082130432;
	var uLocal_2801 = 3;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = -1;
	struct<12> Local_2827[32];
	struct<12> Local_3212 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	fLocal_306 = 40000f;
	iLocal_342 = unk_0xA6EB3FD2D3CE76A2();
	iLocal_343 = unk_0xA6EB3FD2D3CE76A2();
	iLocal_344 = -1;
	iLocal_345 = -1;
	if (unk_0x1995B52453EF6537())
	{
		if (!func_657(ScriptParam_0))
		{
			func_621();
		}
	}
	while (true)
	{
		func_620();
		if (func_613() || func_611())
		{
			func_621();
		}
		if (func_609())
		{
			func_621();
		}
		func_583();
		switch (func_582(unk_0xBF9F666ECB14FCC3()))
		{
			case 0:
				if (func_581() == 1)
				{
					if (func_580())
					{
						func_579(unk_0xBF9F666ECB14FCC3(), 1);
					}
				}
				break;
			
			case 1:
				if (func_581() == 1)
				{
					func_109();
					func_99();
				}
				else if (func_581() == 3)
				{
					func_579(unk_0xBF9F666ECB14FCC3(), 3);
				}
				break;
			
			case 3:
				func_621();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_581())
			{
				case 0:
					if (func_86())
					{
						func_85(1);
					}
					break;
				
				case 1:
					if (Local_643.f_37 == 6)
					{
						func_85(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_320, 1000, 0))
					{
						func_85(3);
					}
					break;
				
				case 3:
					func_621();
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
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xF44A5E894FE76438(Local_643.f_2, 0))
		{
			unk_0xB8A73E7DA87B2968(&(Local_643.f_2), 0);
			Local_643.f_1 = unk_0x7414B386C0020BEC();
		}
	}
	switch (Local_643.f_37)
	{
		case 0:
			if (func_41())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_643.f_43), func_29(), 0) || unk_0xF44A5E894FE76438(Local_643.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_643.f_38 = unk_0x7414B386C0020BEC();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_643.f_39), func_28(0), 0) || unk_0xF44A5E894FE76438(Local_643.f_2, 0))
			{
				if (!unk_0xF44A5E894FE76438(Local_643.f_2, 1))
				{
					Local_643.f_1 = unk_0x7414B386C0020BEC();
					unk_0xB8A73E7DA87B2968(&(Local_643.f_2), 1);
					func_27(&(Local_643.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_345, &iLocal_344);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_643.f_41), 20000, 0) || Local_643.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_643.f_3))
				{
					func_27(&(Local_643.f_45), 0, 0);
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
		if (unk_0x1B982A8B37108B3C(Local_643.f_67[iVar0 /*2*/].f_1) && !unk_0xB529B2A4B7C64D6D(unk_0x0DE80E23B2BD02BD(Local_643.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xF44A5E894FE76438(Local_2827[iVar1 /*12*/].f_1, 1) || Local_2827[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xF44A5E894FE76438(Local_2827[iVar1 /*12*/].f_1, 0))
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
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(*iParam0));
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
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar2);
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
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			unk_0xB8A73E7DA87B2968(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0xF44A5E894FE76438(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xB8A73E7DA87B2968(&(Local_643.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0));
				if (unk_0x1E0256D6F1052B31(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_643.f_50)
	{
		Local_643.f_50 = iVar1;
	}
	else
	{
		Local_643.f_66 = (Local_643.f_50 - iVar1);
	}
	if (iVar2 > Local_643.f_51)
	{
		Local_643.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312731;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2827[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4);
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
	switch (Local_643.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_9446)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_9447)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_9448)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_9449)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_9450)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_9451)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_9452 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_9453)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_9454)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_9455)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_9456)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_9457))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_9458))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_9570)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_9571)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_9461))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_9463))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_9464))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_9465))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_643.f_3)
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
		if (Local_643.f_4[iParam0] == unk_0x1E7FB1CA38C403F6() && func_21(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4, 0))
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
	switch (Local_643.f_3)
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
	
	iVar0 = Local_2827[iParam0 /*12*/].f_4;
	iVar1 = Local_2827[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xF44A5E894FE76438(Local_643.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_643.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_643.f_49++;
			unk_0xB8A73E7DA87B2968(&(Local_643.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_643.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_643.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_643.f_4[iVar3] < 0 || func_21(iVar0, Local_2827[Local_643.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2827[Local_643.f_4[iVar3] /*12*/].f_4, iVar1, Local_2827[Local_643.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_643.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_344 = iVar3;
				iLocal_345 = iParam0;
			}
			Local_643.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_643.f_4[iVar5] == iParam0)
				{
					Local_643.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_643.f_3 == 2)
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
	
	if (unk_0xF44A5E894FE76438(Local_643.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_643.f_4[iVar0] == iParam0)
			{
				Local_643.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x4EA098C870B73AB7(&(Local_643.f_48), iParam0);
		unk_0x4EA098C870B73AB7(&(Local_643.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xF44A5E894FE76438(Local_643.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_643.f_3)
	{
		case 0:
			return Global_262145.f_8768;
		
		case 8:
			return Global_262145.f_8770;
		
		case 3:
			return Global_262145.f_8771;
		
		case 1:
			return Global_262145.f_9556;
		
		case 6:
			return Global_262145.f_9557;
		
		case 10:
			return Global_262145.f_9559;
		
		case 11:
			return Global_262145.f_9561;
		
		case 12:
			return Global_262145.f_9562;
		
		case 15:
			return Global_262145.f_9566;
		
		case 16:
			return Global_262145.f_9567;
		
		case 17:
			return Global_262145.f_9568;
		
		case 18:
			return Global_262145.f_9569;
		
		case 13:
			return Global_262145.f_9560;
		
		case 14:
			return Global_262145.f_9563;
		
		case 2:
			return Global_262145.f_8773;
		
		case 7:
			return Global_262145.f_9558;
		
		case 9:
			return Global_262145.f_9564;
		
		case 5:
			return Global_262145.f_8774;
		
		case 4:
			return Global_262145.f_8772;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_9526;
}

void func_30(int iParam0)
{
	Local_643.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_643.f_37 == 0 || func_5(Local_643.f_3)) || Local_643.f_54 < 10))
	{
		Var0 = { Local_643.f_67[iLocal_339 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0xF6A32456BABBBA74(Var0.f_1))
			{
				if (func_38(Local_643.f_3, iLocal_339, &Var2, &uVar5))
				{
					Local_643.f_55[iLocal_339] = func_34(iLocal_339);
					if (unk_0xF44A5E894FE76438(Local_2827[Local_643.f_55[iLocal_339] /*12*/].f_2, iLocal_339))
					{
						if (func_33(&(Local_643.f_67[iLocal_339 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0))
						{
							unk_0xD09A5BC5752CAEDE(unk_0x0DE80E23B2BD02BD(Local_643.f_67[iLocal_339 /*2*/].f_1), 1, 1);
							unk_0xAFC3B32426D08964(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), 1);
							unk_0x0BD3F78CDD5346A8(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), 1);
							unk_0x25041ED63D93D755(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), 0);
							func_32(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), 1);
							if (unk_0xFACD5AD331C52454("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x570F410C5E24C75B(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0xFACD5AD331C52454("MPBitset", 3))
							{
								if (unk_0xA438D75809973A56(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x483BD2141ADAC3CE(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), "MPBitset");
								}
								unk_0xB8A73E7DA87B2968(&iVar6, 10);
								unk_0xB8A73E7DA87B2968(&iVar6, 11);
								unk_0x570F410C5E24C75B(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_339 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_643.f_55[iLocal_339] = -1;
							Local_643.f_54++;
						}
					}
				}
			}
		}
		iLocal_339++;
		if (iLocal_339 >= 10)
		{
			iLocal_339 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0xFACD5AD331C52454("MPBitset", 3))
	{
		if (unk_0xA438D75809973A56(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x483BD2141ADAC3CE(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xB8A73E7DA87B2968(&uVar0, 13);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&uVar0, 13);
		}
		unk_0x570F410C5E24C75B(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
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
		while (iVar0 <= (unk_0x11B9E7FF50B2F4CC() - 1))
		{
			if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
			{
				iVar8 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0));
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
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
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
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

bool func_41()
{
	return (func_5(Local_643.f_3) || func_39(Local_643.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x38550DD9BFA5B08B() < iParam0)
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
	if (func_45(&(Global_1574332.f_18)))
	{
		if (!func_1(&(Global_1574332.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1574332.f_18));
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
	if (iParam1 && unk_0xDDCAF6F04D987266() < iParam0)
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
	return unk_0xF44A5E894FE76438(Global_1574332.f_1, 0);
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
			unk_0x4283463A361766E5(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x2428688746A375BE(uVar1);
			if (unk_0xF44A5E894FE76438(iVar0, iParam0))
			{
				unk_0x4EA098C870B73AB7(&iVar0, iParam0);
				unk_0x4283463A361766E5(iVar0, iParam1);
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
	uVar1 = unk_0x2428688746A375BE(uVar0);
	return unk_0xF44A5E894FE76438(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xF44A5E894FE76438(Global_1574332.f_1, 2) && !func_8(unk_0xFB6B3EEFAB2DD12C())) && !func_7(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xC55B9553B3EDADE9(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xC55B9553B3EDADE9(sParam1))
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
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_84(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_51(&Var0);
}

int func_51(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2433082.f_2505)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_16);
	func_54(uParam0);
	if (func_53(uParam0->f_1))
	{
		if (Global_2433082.f_2199[0 /*76*/].f_2 == 0)
		{
			Global_2433082.f_2199[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2433082.f_2199[0 /*76*/].f_1 == 13 || Global_2433082.f_2199[0 /*76*/].f_1 == 52) || Global_2433082.f_2199[0 /*76*/].f_1 == 53) || Global_2433082.f_2199[0 /*76*/].f_1 == 57)
		{
			Global_2433082.f_2199[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2433082.f_2199[iVar0 + 1 /*76*/] = { Global_2433082.f_2199[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2433082.f_2199[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 == 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 1);
				Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_52(Global_2433082.f_2199[iVar0 /*76*/].f_1))
				{
					Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
					unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
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
		case 87:
		case 86:
		case 90:
		case 91:
		case 85:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 88:
		case 99:
		case 100:
		case 101:
		case 102:
		case 89:
			return 1;
		
		default:
	}
	return 0;
}

int func_53(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 103) || iParam0 == 99) || iParam0 == 102)
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0)
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_70 = func_55();
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
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_83())
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_58(iParam1, -2, 0, 0);
		}
	}
}

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_81(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_81(unk_0xFB6B3EEFAB2DD12C()) || (func_80() && func_79()))
	{
		uVar1 = func_78();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(iVar1))
			{
				if (unk_0x61263E0F7C8C9996(iVar1) != -1)
				{
					if (func_12(unk_0x61263E0F7C8C9996(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_76(iParam1, iParam0, 0);
							}
							else
							{
								return func_66(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_66(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_76(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_76(iParam1, iParam0, 0);
		}
		else
		{
			return func_66(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_66(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)
{
	return func_60(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_65(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
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
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_61(iVar0, iParam2, 1);
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
	if (func_62(Global_1632166.f_86360))
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
		if (iParam0 == Global_262145.f_7770[iVar0])
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
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
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
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_75())
			{
				iVar3 = func_71(iParam0);
				if (!iVar3 == -1)
				{
					return func_69(iVar3);
				}
			}
			if ((func_68(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_65(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_64(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_67(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_71(iParam0);
	if (!iVar4 == -1)
	{
		return func_69(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_67(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_68(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_70(iParam0);
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
			}
		
		default:
	}
	return 1;
}

var func_70(int iParam0)
{
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_71(int iParam0)
{
	if (!iParam0 == func_83())
	{
		if (func_73(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_72(iParam0)];
		}
	}
	return -1;
}

int func_72(int iParam0)
{
	if (iParam0 != func_83())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_83();
}

bool func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_83();
}

int func_74(int iParam0)
{
	if (iParam0 != func_83())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_83())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_75()
{
	return Global_2443089.f_12;
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_75())
	{
		iVar1 = func_71(iParam1);
		if (!iVar1 == -1)
		{
			return func_69(iVar1);
		}
	}
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
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
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_60(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_77(iParam0);
	}
	return iVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_78()
{
	return Global_2359301.f_2;
}

bool func_79()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_80()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

int func_81(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_82())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_83()
{
	return -1;
}

void func_84(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_83();
	uParam1->f_17 = func_83();
	uParam1->f_18 = func_83();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

void func_85(int iParam0)
{
	Local_643.f_0 = iParam0;
}

int func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_643.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_643.f_39));
	func_91();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_643.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_87();
	}
	return 1;
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_643.f_3))
		{
			Local_643.f_67[iVar0 /*2*/] = func_90();
		}
		else
		{
			Local_643.f_67[iVar0 /*2*/] = func_88();
		}
		iVar0++;
	}
}

int func_88()
{
	int iVar0;
	
	switch (Local_643.f_3)
	{
		case 12:
			return func_89();
			break;
	}
	iVar0 = unk_0x7BC26452241AC7C9(0, 2);
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

int func_89()
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 2);
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

int func_90()
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 2);
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

void func_91()
{
	int iVar0;
	
	iVar0 = func_95();
	Local_643.f_3 = iVar0;
	func_92(func_94(133, iVar0, 0, 0));
}

void func_92(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 441;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_2 = iParam0;
	iVar3 = func_93(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 3, iVar3);
	}
}

var func_93(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_95()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_9855;
	iVar0[1] = Global_262145.f_9528;
	iVar0[2] = Global_262145.f_9859;
	iVar0[3] = Global_262145.f_9857;
	iVar0[4] = Global_262145.f_9858;
	iVar0[5] = Global_262145.f_9860;
	iVar0[6] = Global_262145.f_9529;
	iVar0[7] = Global_262145.f_9530;
	iVar0[8] = Global_262145.f_9856;
	iVar0[9] = Global_262145.f_9536;
	iVar0[10] = Global_262145.f_9531;
	iVar0[11] = Global_262145.f_9533;
	iVar0[12] = Global_262145.f_9534;
	iVar0[13] = Global_262145.f_9532;
	iVar0[14] = Global_262145.f_9535;
	iVar0[15] = Global_262145.f_9538;
	iVar0[16] = Global_262145.f_9539;
	iVar0[17] = Global_262145.f_9540;
	iVar0[18] = Global_262145.f_9541;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_98(iVar21) || func_96(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0xB5FEA1F26F05B9F5(0f, fVar20);
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
	return func_95();
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_97(iParam0);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6911)
		{
			if (Global_2477219.f_148[iVar0 /*2*/] == iVar1 && Global_2477219.f_148[iVar0 /*2*/].f_1 == func_94(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)
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

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8762;
		
		case 1:
			return Global_262145.f_9542;
		
		case 6:
			return Global_262145.f_9543;
		
		case 7:
			return Global_262145.f_9544;
		
		case 8:
			return Global_262145.f_8763;
		
		case 3:
			return Global_262145.f_8764;
		
		case 4:
			return Global_262145.f_8765;
		
		case 2:
			return Global_262145.f_8766;
		
		case 5:
			return Global_262145.f_8767;
		
		case 9:
			return Global_262145.f_9550;
		
		case 10:
			return Global_262145.f_9545;
		
		case 11:
			return Global_262145.f_9547;
		
		case 12:
			return Global_262145.f_9548;
		
		case 15:
			return Global_262145.f_9552;
		
		case 16:
			return Global_262145.f_9553;
		
		case 17:
			return Global_262145.f_9554;
		
		case 18:
			return Global_262145.f_9555;
		
		case 13:
			return Global_262145.f_9546;
		
		case 14:
			return Global_262145.f_9549;
		
		default:
	}
	return 1;
}

void func_99()
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_643.f_55[iVar0] == unk_0x1E7FB1CA38C403F6())
			{
				if (func_100(iVar0))
				{
					if (!unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_2, iVar0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_2, iVar0))
				{
					unk_0x4EA098C870B73AB7(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_2, iVar0))
			{
				unk_0x4EA098C870B73AB7(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_100(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_37(iParam0, &Var0, &uVar3))
	{
		if (func_101(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_104(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_102(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

int func_102(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_36(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_103(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
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
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

int func_104(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_103(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && uParam9) && bParam6) && func_105(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_36(iVar1), Param0, 1) < fParam3)
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

int func_105(int iParam0)
{
	if (func_108(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_107(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_106(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (!iVar0 == func_83())
	{
		if (iVar0 == func_72(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_107(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

int func_108(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_107(iParam0) };
		Global_2482018 = { func_107(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_109()
{
	float fVar0;
	float fVar1;
	
	func_576();
	func_575();
	if (func_573())
	{
		func_460();
	}
	if (!func_7(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_438())
		{
			if (unk_0xF44A5E894FE76438(iLocal_334, 6))
			{
				unk_0x4EA098C870B73AB7(&iLocal_334, 6);
			}
			switch (Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_3)
			{
				case 0:
					if (Local_643.f_37 < 2)
					{
						if (Local_643.f_37 > 0)
						{
							if (Local_643.f_3 != -1)
							{
								func_437(1);
								func_436(1);
							}
						}
					}
					else
					{
						func_436(2);
					}
					break;
				
				case 1:
					func_430(9);
					if (Local_3212.f_8 == 0)
					{
						Local_3212.f_8 = unk_0x632066A9E8CB2C4D();
					}
					if (Local_643.f_37 >= 2)
					{
						func_436(2);
						Local_3212.f_9 = unk_0x632066A9E8CB2C4D();
					}
					if (func_41())
					{
						func_430(0);
					}
					func_428((func_29() - func_429(&(Local_643.f_43), 0, 0)));
					func_425(func_427((func_29() - func_429(&(Local_643.f_43), 0, 0)), 0), func_426(Local_643.f_3));
					func_409(0, func_424());
					func_398();
					func_378();
					if (func_377())
					{
						func_376();
					}
					break;
				
				case 2:
					if (Local_643.f_37 > 2)
					{
						func_437(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_375())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_358(133, fVar0, fVar1, 0, 0, 0, 0);
						func_357(Local_643.f_3, 1);
						func_356(23, 1);
						if (Local_3212.f_8 == 0)
						{
							Local_3212.f_8 = unk_0x632066A9E8CB2C4D();
						}
						if (Local_3212.f_9 == 0)
						{
							Local_3212.f_9 = unk_0x632066A9E8CB2C4D();
						}
						func_352();
						unk_0x47A28EEE8F051A15(1);
						if (func_375())
						{
							unk_0xFA5E84DCAE200259(0f);
							unk_0x028AA922F2B17B2A(0);
						}
						if (Local_643.f_3 == 14)
						{
							func_351(&Local_354);
						}
						func_350();
						if (!func_7(unk_0xFB6B3EEFAB2DD12C()))
						{
							func_50(62, "AMCH_STARTED", func_349(Local_643.f_3), func_55(), -1, func_55());
							if (func_346("AMCH_WARN", func_348(Local_643.f_3), func_347(Local_643.f_3)))
							{
								unk_0x04890EB0282525A5(1);
							}
						}
						if (func_41())
						{
							func_330(678f, 794f, 206f, 8f, 0);
							func_330(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_330(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_436(3);
					}
					break;
				
				case 3:
					if (Local_643.f_37 > 3)
					{
						iLocal_336 = 0;
						func_436(4);
					}
					else
					{
						if (!unk_0xF44A5E894FE76438(Local_643.f_2, 1))
						{
							func_296();
							func_293();
							func_292();
						}
						if (func_291(0) && !func_20(0))
						{
							func_290();
						}
					}
					if (func_375())
					{
						unk_0x9915665260A3283D(unk_0xFB6B3EEFAB2DD12C());
					}
					func_289();
					func_266();
					func_460();
					func_409(0, 1);
					func_398();
					func_378();
					func_430(2);
					func_430(5);
					func_430(7);
					break;
				
				case 4:
					if (func_252(&uLocal_346, !unk_0xF44A5E894FE76438(Local_643.f_2, 0)) || unk_0xF44A5E894FE76438(Local_643.f_2, 0))
					{
						if (func_5(Local_643.f_3))
						{
							if (Local_643.f_37 == 5)
							{
								func_436(5);
							}
						}
						else
						{
							func_436(6);
						}
					}
					func_239();
					func_141();
					func_266();
					func_460();
					func_409(1, 1);
					func_350();
					break;
				
				case 5:
					if (Local_643.f_37 > 5)
					{
						func_436(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_136();
		}
	}
	else
	{
		func_136();
	}
	func_116();
	func_111();
	func_110();
}

void func_110()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_41())
	{
		Var0 = { Local_643.f_67[iLocal_353 /*2*/] };
		if (unk_0xF6A32456BABBBA74(Var0.f_1))
		{
			iVar2 = unk_0xE95C934718B1A4FF(Var0.f_1);
			if (unk_0x4A478FA962FF575A(iVar2))
			{
				if (!unk_0xA4DB44DF73EF4FE5(iVar2, 0))
				{
					unk_0xB24D3BF5DABD13AA(&iVar2);
				}
			}
		}
		iLocal_353++;
		if (iLocal_353 >= 10)
		{
			iLocal_353 = 0;
			iLocal_642 = iLocal_641;
			iLocal_641 = 0;
		}
	}
}

void func_111()
{
	if (Local_643.f_37 == 5)
	{
		if (unk_0xF6A32456BABBBA74(Local_643.f_67[iLocal_353 /*2*/].f_1))
		{
			if (!unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_353 /*2*/].f_1), 0))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_629, iLocal_353))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_629, iLocal_353);
					uLocal_630[iLocal_353] = unk_0xA6EB3FD2D3CE76A2();
					unk_0xEC49B508B83FF2C9(uLocal_630[iLocal_353], "Explosion_Countdown", unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_353 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x6D49692FDF820BED(uLocal_630[iLocal_353], "Time", 30f);
				}
				if ((30000 - func_429(&(Local_643.f_45), 0, 0)) >= 0)
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_353 /*2*/].f_1), 0))
					{
						func_430(1);
						iLocal_641 = 1;
					}
				}
				else if (unk_0x50CED8EEAE806923(Local_643.f_67[iLocal_353 /*2*/].f_1))
				{
					unk_0x3C05FE2296BF5F53(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_353 /*2*/].f_1));
					unk_0xD4D4124964213CEE(unk_0xE95C934718B1A4FF(Local_643.f_67[iLocal_353 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xF44A5E894FE76438(iLocal_629, iLocal_353) && !unk_0xDE27719822608DA7(uLocal_630[iLocal_353]))
			{
				unk_0x91A6DE61891987F6(uLocal_630[iLocal_353]);
			}
		}
		if (iLocal_642)
		{
			if (!func_81(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_113(func_427((30000 - func_429(&(Local_643.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_112();
			}
		}
	}
}

void func_112()
{
	Global_1354290.f_941 = 1;
}

void func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_115(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_114(7, iVar0);
		Global_1354290.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_4131.f_172[iVar0] = iParam2;
		Global_1354290.f_4131.f_216[iVar0] = iParam3;
		Global_1354290.f_4131.f_183[iVar0] = iParam4;
		Global_1354290.f_4131.f_194[iVar0] = iParam5;
		Global_1354290.f_4131.f_249[iVar0] = iParam6;
		Global_1354290.f_4131.f_260[iVar0] = iParam7;
		Global_1354290.f_4131.f_205[iVar0] = iParam8;
		Global_1354290.f_4131.f_314[iVar0] = iParam9;
		Global_1354290.f_4131.f_325[iVar0] = iParam10;
		Global_1354290.f_4131.f_357[iVar0] = iParam11;
		Global_1354290.f_4131.f_238[iVar0] = iParam12;
		Global_1354290.f_4131.f_271[iVar0] = iParam13;
		Global_1354290.f_4131.f_368[iVar0] = iParam14;
		Global_1354290.f_4131.f_379[iVar0] = iParam15;
		Global_1354290.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_114(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_115(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

void func_116()
{
	if (((func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && !func_7(unk_0xFB6B3EEFAB2DD12C())) && !func_132(unk_0xFB6B3EEFAB2DD12C())) && func_438())
	{
		if (Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_3 == 1)
		{
			func_129(func_131(Local_643.f_3), func_348(Local_643.f_3), 0, 0);
		}
		else if (Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_3 == 3)
		{
			if (!unk_0xF44A5E894FE76438(iLocal_334, 10))
			{
				func_117(func_347(Local_643.f_3), 0);
			}
			else
			{
				func_117("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_350();
		}
	}
	else
	{
		func_350();
	}
}

void func_117(char* sParam0, bool bParam1)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return;
	}
	if (func_127(sParam0))
	{
		return;
	}
	func_121();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_120();
	func_119(bParam1);
	func_118();
}

void func_118()
{
	unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 1);
}

void func_119(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x4EA098C870B73AB7(&(Global_1312571.f_59), 0);
}

void func_120()
{
	Global_1312571.f_10 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 86400000);
	Global_1312571.f_11 = unk_0x7414B386C0020BEC();
}

void func_121()
{
	func_123();
	func_122(0);
}

void func_122(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1995B52453EF6537();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x7414B386C0020BEC();
		Global_1312571.f_11 = unk_0x7414B386C0020BEC();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_123()
{
	if (!func_126())
	{
	}
	if (func_125())
	{
		unk_0x9F87DFE2C82D23E7(&(Global_1312571.f_12));
		func_124();
		unk_0x231B7D69E0C82ABD();
	}
}

void func_124()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			unk_0xF99222307D7150A9(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_125()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_126()
{
	if (!func_125())
	{
		return 0;
	}
	unk_0xC450F7ACA7F40F98(&(Global_1312571.f_12));
	func_124();
	return unk_0x1B1A26465DF20C87();
}

bool func_127(char* sParam0)
{
	if (!func_125())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_128(sParam0);
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12));
}

bool func_128(char* sParam0)
{
	if (!func_125())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

int func_129(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (func_130(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_121();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_120();
	func_119(bParam2);
	func_118();
	return 1;
}

bool func_130(char* sParam0, char* sParam1)
{
	if (!func_125())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam1) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

char* func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126())) || unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126())) || unk_0xD6E13289C5649502(unk_0xD5A676B97920D126())) || unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126())) || unk_0x687B7FD02B116DD0(unk_0xD5A676B97920D126()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126())) || unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126())) || unk_0xD6E13289C5649502(unk_0xD5A676B97920D126())) || unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126())) || unk_0x687B7FD02B116DD0(unk_0xD5A676B97920D126())) || unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
					iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
					if (unk_0x7F132EC931B9581A(iVar1) && unk_0xA214826AC4BEA074(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x51D836BF46000450(unk_0xD5A676B97920D126()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), joaat("weapon_sniperrifle"), 0) && !unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), joaat("weapon_heavysniper"), 0)) && !unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126())) || unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126())) || unk_0xD6E13289C5649502(unk_0xD5A676B97920D126())) || unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126())) || unk_0x687B7FD02B116DD0(unk_0xD5A676B97920D126()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_132(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		if ((func_135() && !func_134()) || func_133(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1574332.f_13)))
		{
			if (!func_1(&(Global_1574332.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1574332.f_13));
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 9);
}

bool func_133(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

bool func_134()
{
	return Global_1312412.f_1;
}

bool func_135()
{
	return Global_1312412;
}

void func_136()
{
	if (!unk_0xF44A5E894FE76438(iLocal_334, 6))
	{
		unk_0x043CEB5C995EBF13();
		func_409(1, 1);
		unk_0x91A6DE61891987F6(iLocal_342);
		unk_0x4EA098C870B73AB7(&iLocal_334, 4);
		func_140();
		func_138();
		unk_0x90F98B1B4CB48453(0f, 0);
		unk_0xB8A73E7DA87B2968(&iLocal_334, 6);
		func_137();
	}
}

void func_137()
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_7 = 0;
}

void func_138()
{
	if (Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
	{
		func_139();
	}
}

void func_139()
{
	struct<25> Var0;
	
	if (unk_0x597C1E51157E5516(Global_2412527.f_6))
	{
		if (!Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412527 = { Var0 };
	Global_2412527.f_6 = -1;
}

void func_140()
{
	struct<4> Var0;
	
	if (Global_2404994.f_477.f_1 == unk_0x3ED6DDB11A7AD67F())
	{
		Global_2404994.f_477 = { Var0 };
	}
}

void func_141()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1, 0))
	{
		if (func_7(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1), 0);
			return;
		}
		if (func_132(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1), 0);
			return;
		}
		func_201(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3212.f_6 = (Local_3212.f_6 + iVar0);
			if (!Global_262145.f_10006)
			{
				func_200(10, Local_3212.f_6);
			}
			Global_2454660 = iVar0;
			if (func_199())
			{
				func_190(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0xBA11645C7A2ECDE2(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3212.f_7 = (Local_3212.f_7 + iVar1);
			func_189();
			func_142(0, unk_0xD5A676B97920D126(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1), 0);
	}
}

int func_142(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_143(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_143(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_153(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iParam1);
				func_149(unk_0x6DE9A8183DA7678E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_144(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_144(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_147(iParam0, 1) };
	if (iParam0 == func_146(unk_0xD5A676B97920D126()))
	{
		func_145(1);
	}
	func_149(Var0, iParam1, 0, sParam2, uParam3);
}

void func_145(int iParam0)
{
	Global_2433082.f_1382 = iParam0;
}

int func_146(int iParam0)
{
	return iParam0;
}

Vector3 func_147(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC31BB47A21F61C6C())
	{
		Var3 = { unk_0x4FC37A47A7CC5D48(2) };
	}
	if (iParam0 == func_148(unk_0xD5A676B97920D126()) && unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		Var0 = { unk_0x7E140C583F91AE2B(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		fVar6 = unk_0x714F015B4D2DE1DC(iParam0);
		if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x0A0C20E171493CD0(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_148(int iParam0)
{
	return iParam0;
}

void func_149(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433082.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433082.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433082.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433082.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433082.f_781[iVar1 /*30*/].f_4 = func_152(Global_2433082.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433082.f_781[iVar1 /*30*/].f_7 = unk_0x7414B386C0020BEC();
			Global_2433082.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433082.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433082.f_781[iVar1 /*30*/].f_9 = func_151();
			Global_2433082.f_781[iVar1 /*30*/].f_10 = func_150();
			StringCopy(&(Global_2433082.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433082.f_781[iVar1 /*30*/].f_26 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), uParam6);
		}
	}
}

int func_150()
{
	if (Global_2433082.f_1382)
	{
		Global_2433082.f_1382 = 0;
		return 1;
	}
	Global_2433082.f_1382 = 0;
	return 0;
}

var func_151()
{
	var uVar0;
	
	uVar0 = Global_2433082.f_1384;
	Global_2433082.f_1384 = 1;
	return uVar0;
}

float func_152(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x8E92CDAEB8357ABD(unk_0x816B691E0C59C315(), Param0, 1);
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

var func_153(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_154(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_154(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_188(unk_0xFB6B3EEFAB2DD12C()) || func_187(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_186(uParam2))
	{
	}
	if (func_185())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_183(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_182(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_180(0, &iVar1);
					break;
				
				case 3:
					func_180(1, &iVar1);
					break;
				
				case 1:
					func_178(&iVar1);
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
			func_175(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_164((func_174(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_175(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_159(iVar1);
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
				func_155((func_157(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_155((func_157(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_155(int iParam0)
{
	if (func_185())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_156(joaat("mpply_globalxp"), iParam0);
	}
}

void func_156(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_157(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_158(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_158(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_107(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_162(func_163(&Var0));
			if (iVar13 == 0)
			{
				func_161(&Global_1362334, iParam0);
				func_160(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_161(&Global_1362335, iParam0);
				func_160(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_161(&Global_1362336, iParam0);
				func_160(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_161(&Global_1362337, iParam0);
				func_160(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_161(&Global_1362338, iParam0);
				func_160(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_160(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_162(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_163(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	if (func_185())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_173(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_173(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_172(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_170(iParam0, 1);
		}
		func_169(634, iParam0, -1, 1);
		func_168(635, func_170(iParam0, 1), -1, 1, 0);
		Global_1362449[func_173(-1)] = iParam0;
		func_165(7, 0);
	}
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_167(iParam0, iParam1))
	{
		iVar0 = func_166();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_167(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_173(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_173(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_173(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_173(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_173(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_173(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_173(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_173(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_173(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_173(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_173(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_173(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_173(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_173(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_173(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_173(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_173(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_173(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_173(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_173(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_173(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_173(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_173(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_173(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_173(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_173(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_173(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_173(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_173(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_173(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_173(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_173(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_173(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_171(iParam0, 0);
}

int func_171(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_174(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_173(-1)];
			}
			else if (func_172(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_173(-1)];
	}
	return 0;
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_177(iParam0, func_173(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_176(iParam0))
	{
		func_168(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_169(iParam0, iVar0, iParam2, 1);
	}
}

int func_176(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_173(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_65(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_108(unk_0xFB6B3EEFAB2DD12C(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_179(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_179(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_179(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_180(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_108(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_181(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_108(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_179(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_179(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_181(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_182(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_179(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_183(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_174(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_174(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_184(8000, 0, 0) > 0)
	{
		if (func_184(8000, 0, 0) < (iParam0 + func_174(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_184(8000, 0, 0) - func_174(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_184(int iParam0, bool bParam1, int iParam2)
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
	return Global_279816[iParam0];
}

int func_185()
{
	return 1;
}

int func_186(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_187(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_188(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

void func_189()
{
	Global_2454002 = 1;
}

void func_190(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_199())
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
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
			if (iParam1 > 0)
			{
				func_191(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
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
		case 848090538:
		case -47546905:
		case -293060240:
			func_191(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_199())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_16()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_198(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_197(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_192(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_193(iParam0);
	}
}

void func_193(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_199())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_196(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_194(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_194(var uParam0)
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
	func_195(&(uParam0->f_8.f_3));
	func_195(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_195(var uParam0)
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

int func_196(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_197(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_198(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_199())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_199()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2494149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5416)
		{
			iParam1 = Global_262145.f_5416;
		}
		Global_2494149.f_270 = iParam1;
		Global_2494149.f_271 = 0;
	}
}

void func_201(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x1E7FB1CA38C403F6(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_643.f_1 - iLocal_332)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_9941)
		{
			iVar1 = Global_262145.f_9941;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_238() * iVar1);
		*uParam1 = (func_237() * iVar1);
		fVar2 = func_236();
		if (fVar2 > 0f && !unk_0xF44A5E894FE76438(Local_643.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_235())
			{
				iVar3 = func_235();
			}
			iVar4 = Local_643.f_51;
			if (iVar4 > func_234())
			{
				iVar4 = func_234();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_227(func_233(), func_232(), iVar3, fVar2, func_231(), func_230(), func_229(), iVar4)) * Global_262145.f_9954)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_227(func_226(), func_225(), iVar3, fVar2, func_231(), func_230(), func_229(), iVar4)) * Global_262145.f_9955)));
		}
		else
		{
			func_223(1);
		}
	}
	else
	{
		func_223(0);
	}
	func_202(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_202(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_222())
		{
			if (func_221(0))
			{
				if (!func_217(0))
				{
					if (unk_0x1E0256D6F1052B31(func_216()))
					{
						if (func_215() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_215());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_213(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_206("GB_BCUT_TICK1", func_216(), iVar0, 0, 0, 1, 1);
						}
						func_205(20);
						func_203(func_216(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_203(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 474;
		Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_204(iParam0));
	}
}

var func_204(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_206(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		unk_0xF5640E619D8FCD5B(func_58(iParam1, -2, 1, 0));
		unk_0x4C51E4FBCD1D8830(func_211(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF5640E619D8FCD5B(iParam3);
		}
		unk_0xF99222307D7150A9(iParam2);
		iVar0 = unk_0x84EF96E928190AB1(0, 1);
		func_207(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_207(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_210() || !unk_0x8676DE83D4396C39()) || !func_14(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_208(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_209(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_210()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

var func_211(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_212(&cVar0);
}

var func_212(char[4] cParam0)
{
	return cParam0;
}

void func_213(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_214(1);
	}
	else
	{
		iVar1 = func_214(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_214(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10889;
}

int func_215()
{
	return Global_262145.f_10888;
}

int func_216()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

bool func_217(bool bParam0)
{
	return func_218(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

int func_218(int iParam0, bool bParam1)
{
	return func_219(iParam0, bParam1, 1);
}

int func_219(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_83())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_220(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_83() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1)
{
	if (iParam0 != func_83())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_83())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_221(bool bParam0)
{
	return func_73(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

bool func_222()
{
	return func_74(unk_0xFB6B3EEFAB2DD12C());
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
		if (func_224(1))
		{
			unk_0xB8A73E7DA87B2968(&Global_1574357, 1);
		}
	}
	else if (func_224(2))
	{
		unk_0xB8A73E7DA87B2968(&Global_1574357, 2);
	}
}

int func_224(int iParam0)
{
	var uVar0;
	
	uVar0 = func_177(2516, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xF44A5E894FE76438(uVar0, 0) && unk_0xF44A5E894FE76438(iVar0, 1)) && unk_0xF44A5E894FE76438(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xF44A5E894FE76438(iVar0, 3) && unk_0xF44A5E894FE76438(iVar0, 4)) && unk_0xF44A5E894FE76438(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xF44A5E894FE76438(iVar0, 6) && unk_0xF44A5E894FE76438(iVar0, 7)) && unk_0xF44A5E894FE76438(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xF44A5E894FE76438(iVar0, 9) && unk_0xF44A5E894FE76438(iVar0, 10)) && unk_0xF44A5E894FE76438(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_225()
{
	return Global_262145.f_9442;
}

int func_226()
{
	return Global_262145.f_9440;
}

int func_227(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_228(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_228(int iParam0, int iParam1, int iParam2)
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

float func_229()
{
	return Global_262145.f_9445;
}

float func_230()
{
	return Global_262145.f_9444;
}

float func_231()
{
	return Global_262145.f_9443;
}

int func_232()
{
	return Global_262145.f_9441;
}

int func_233()
{
	return Global_262145.f_9439;
}

int func_234()
{
	return Global_262145.f_9847;
}

int func_235()
{
	return Global_262145.f_9846;
}

var func_236()
{
	if (func_20(0))
	{
		return Global_262145.f_9466;
	}
	if (func_20(1))
	{
		return Global_262145.f_9467;
	}
	if (func_20(2))
	{
		return Global_262145.f_9468;
	}
	return Global_262145.f_9469;
}

int func_237()
{
	return Global_262145.f_9438;
}

int func_238()
{
	return Global_262145.f_9437;
}

void func_239()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1, 1) && (func_251() || unk_0xF44A5E894FE76438(Local_643.f_2, 0)))
	{
		if (func_56(func_250()))
		{
			func_249();
		}
		if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0xF44A5E894FE76438(Local_643.f_2, 0))
			{
				if (func_291(0))
				{
					iVar2 = Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4;
					func_245(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_243(63, func_244(Local_643.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_348(Local_643.f_3), 1, 2);
						}
						else if (func_242())
						{
							func_243(68, func_244(Local_643.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_348(Local_643.f_3), 1, 2);
						}
						else
						{
							func_243(63, func_244(Local_643.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_348(Local_643.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_243(66, func_244(Local_643.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_348(Local_643.f_3), 1, 2);
						}
						else if (func_242())
						{
							func_243(74, func_244(Local_643.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_348(Local_643.f_3), 1, 2);
						}
						else
						{
							func_243(66, func_244(Local_643.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_348(Local_643.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_243(66, func_244(Local_643.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_348(Local_643.f_3), 1, 2);
						}
						else if (func_242())
						{
							func_243(74, func_244(Local_643.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_348(Local_643.f_3), 1, 2);
						}
						else
						{
							func_243(66, func_244(Local_643.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_348(Local_643.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0x1C2C3C236D3FE99A(Local_643.f_4[0]);
						if (unk_0x28E01BEA13B73DF2(uVar3))
						{
							iVar4 = unk_0x28B48C55342F6368(iVar3);
							if (Local_2827[Local_643.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2827[Local_643.f_4[0] /*12*/].f_4;
							func_245(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_241(75, func_83(), func_244(Local_643.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_348(Local_643.f_3), -1, fVar1, 1, 2, unk_0x7746E8ACE891BFA4(iVar4));
							}
							else if (func_242())
							{
								func_241(76, func_83(), func_244(Local_643.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_348(Local_643.f_3), iVar0, -1082130432, 1, 2, unk_0x7746E8ACE891BFA4(iVar4));
							}
							else
							{
								func_241(75, func_83(), func_244(Local_643.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_348(Local_643.f_3), iVar0, -1082130432, 1, 2, unk_0x7746E8ACE891BFA4(iVar4));
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
			unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1), 1);
			func_240(133);
		}
	}
}

void func_240(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_241(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_84(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_16 = iParam1;
	StringCopy(&(Var0.f_55), sParam2, 16);
	StringCopy(&(Var0.f_59), sParam6, 16);
	StringCopy(&(Var0.f_23), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_69 = iParam9;
	Var0.f_70 = iParam10;
	return func_51(&Var0);
}

int func_242()
{
	return 0;
}

int func_243(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_84(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_69 = iParam8;
	Var0.f_70 = iParam9;
	return func_51(&Var0);
}

char* func_244(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xD065018956F1AA2B())
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
			if (unk_0xD065018956F1AA2B())
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

int func_245(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_246(Local_643.f_3, iParam2) / 10f);
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

float func_246(int iParam0, int iParam1)
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
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_248(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_247(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_247(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_248(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_249()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

int func_250()
{
	return Global_2433082.f_2199[0 /*76*/].f_1;
}

bool func_251()
{
	return unk_0xF44A5E894FE76438(Global_1574332.f_1, 25);
}

int func_252(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_265()) && !(func_264(unk_0xFB6B3EEFAB2DD12C(), 0) && (func_263(unk_0xFB6B3EEFAB2DD12C()) || func_261(unk_0xFB6B3EEFAB2DD12C())))) && !func_259(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_258();
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
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 25);
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_257(uParam0, 1);
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
				func_254();
				func_257(uParam0, 2);
			}
			break;
		
		case 2:
			func_254();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_253("AMEV_LBD_HELP"))
				{
					unk_0x04890EB0282525A5(1);
				}
				func_257(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
				func_257(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
			return 1;
	}
	return 0;
}

bool func_253(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_254()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0))
	{
		if (((((!unk_0x656CD02142B72C18() && !unk_0xF44A5E894FE76438(Global_2494149.f_743, 2)) && func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !Global_68127) && !Global_52999) && !unk_0x7E3640C27B17457C())
		{
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 1);
			func_256("AMEV_LBD_HELP", -1);
			func_255(1);
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 0);
		}
	}
}

void func_255(int iParam0)
{
	unk_0xCF2D12C5E6815CC3(3, 21, 200, 0, 0);
	if (iParam0 && !func_265())
	{
		unk_0xA93E75A5493862BD(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_256(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam1);
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_258()
{
	Global_2454003 = 1;
}

int func_259(int iParam0)
{
	if (iParam0 != func_83())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_260(Global_2421621[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

bool func_261(int iParam0)
{
	return func_262(iParam0, 19);
}

bool func_262(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_262(iParam0, 9);
	}
	return 0;
}

int func_264(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_265()
{
	return Global_2433082.f_2199[0 /*76*/].f_1 != 0;
}

void func_266()
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
	
	if (Local_643.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_288() && !func_81(unk_0xFB6B3EEFAB2DD12C()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_83();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_643.f_4[iVar16] > -1)
			{
				uVar30 = unk_0x1C2C3C236D3FE99A(Local_643.f_4[iVar16]);
				if (unk_0x28E01BEA13B73DF2(uVar30))
				{
					iVar4 = unk_0x28B48C55342F6368(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2827[Local_643.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_245(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2827[Local_643.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_221(1))
								{
									if (func_73(iVar4, 1))
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
		iVar17 = unk_0x1E7FB1CA38C403F6();
		if (func_81(unk_0xFB6B3EEFAB2DD12C()))
		{
			uVar31 = func_286();
			iVar32 = unk_0x61263E0F7C8C9996(uVar31);
			if (unk_0x1E0256D6F1052B31(iVar32))
			{
				iVar33 = unk_0xCA5CB25B27CC9477(iVar32);
				if (unk_0x28E01BEA13B73DF2(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_245(&iVar13, &fVar18, iLocal_336, 1);
		func_245(&iVar14, &fVar19, Local_2827[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_429(&(Local_643.f_39), 0, 0);
		iVar15 = func_427(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_285(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xF44A5E894FE76438(iLocal_334, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_288() || Local_643.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_643.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_281(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_244(Local_643.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_282(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_242())
		{
			func_280(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_282(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_271(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_244(Local_643.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_282(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_267();
	}
}

void func_267()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_270();
	if (fVar0 >= 0f)
	{
		if (Local_643.f_37 == 3)
		{
			if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					iVar1 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
					if (unk_0xA4DB44DF73EF4FE5(iVar1, 0))
					{
						func_269(iVar1, &fLocal_340);
						fVar2 = (fVar0 + fLocal_340);
						unk_0x90F98B1B4CB48453(fVar2, 1);
						func_268(fVar0);
						return;
					}
				}
			}
		}
		if (func_253("AMCH_FLYLOW"))
		{
			unk_0x04890EB0282525A5(1);
		}
		if (unk_0xF44A5E894FE76438(iLocal_334, 4))
		{
			unk_0x91A6DE61891987F6(iLocal_342);
			unk_0x4EA098C870B73AB7(&iLocal_334, 4);
		}
		unk_0x90F98B1B4CB48453(0f, 0);
	}
}

void func_268(float fParam0)
{
	float fVar0;
	
	if (unk_0xC6EE3DD7C06BEE78(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_430(6);
			if (!unk_0xF44A5E894FE76438(iLocal_334, 4))
			{
				unk_0xA93E75A5493862BD(iLocal_342, "Altitude_Warning", "EXILE_1", 1);
				unk_0xB8A73E7DA87B2968(&iLocal_334, 4);
			}
		}
		else
		{
			if (func_253("AMCH_FLYLOW"))
			{
				unk_0x04890EB0282525A5(1);
			}
			if (unk_0xF44A5E894FE76438(iLocal_334, 4))
			{
				unk_0x91A6DE61891987F6(iLocal_342);
				unk_0x4EA098C870B73AB7(&iLocal_334, 4);
			}
		}
	}
}

float func_269(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	unk_0x87AA1B4BA52B1360(Var1, uParam1, 1);
	unk_0x87AA1B4BA52B1360(Var1, &uVar4, 0);
	if (unk_0x07C11889E34BD0A0())
	{
		func_430(3);
		unk_0xB8A73E7DA87B2968(&iLocal_334, 10);
		func_27(&uLocal_330, 0, 0);
	}
	else if (unk_0xF44A5E894FE76438(iLocal_334, 10))
	{
		if (func_1(&uLocal_330, 2000, 0))
		{
			unk_0x4EA098C870B73AB7(&iLocal_334, 10);
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

float func_270()
{
	switch (Local_643.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_271(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_277(0) == 0)
	{
		return;
	}
	func_276();
	iVar1 = 0;
	if (((Global_2453539[0] != iParam0 || Global_2453539[1] != iParam1) || Global_2453539[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2453539[0] = iParam0;
	Global_2453539[1] = iParam1;
	Global_2453539[2] = iParam2;
	Global_2453539[3] = 0;
	Global_2453539[4] = 0;
	if (Global_2453539[0] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[0]);
			Global_2453545[0 /*16*/] = { func_275(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_272(iParam3, &(Global_2453545[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16);
		}
	}
	if (Global_2453539[1] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[1]);
			Global_2453545[1 /*16*/] = { func_275(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_272(iParam4, &(Global_2453545[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17);
		}
	}
	if (Global_2453539[2] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[2]);
			Global_2453545[2 /*16*/] = { func_275(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_272(iParam5, &(Global_2453545[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18);
		}
	}
	if (bParam12)
	{
		func_272(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xFB6B3EEFAB2DD12C() != func_83())
			{
				if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
				{
					func_272(iParam7, unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_272(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_272(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_186(sParam14))
	{
		sVar2 = sParam14;
	}
	func_113(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_112();
}

void func_272(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_115(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_114(6, iVar0);
		Global_1354290.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_3579.f_183[iVar0] = iParam3;
		Global_1354290.f_3579.f_172[iVar0] = iParam2;
		Global_1354290.f_3579.f_260[iVar0] = iParam4;
		Global_1354290.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1354290.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1354290.f_3579.f_443[iVar0] = iParam7;
		Global_1354290.f_3579.f_454[iVar0] = fParam8;
		Global_1354290.f_3579.f_497[iVar0] = iParam9;
		Global_1354290.f_3579.f_508[iVar0] = iParam10;
		Global_1354290.f_3579.f_205[iVar0] = iParam11;
		Global_1354290.f_3579.f_216[iVar0] = iParam12;
		Global_1354290.f_3579.f_227[iVar0] = iParam13;
		Global_1354290.f_3579.f_238[iVar0] = iParam14;
		Global_1354290.f_3579.f_249[iVar0] = iParam15;
		Global_1354290.f_3579.f_519[iVar0] = iParam16;
		Global_1354290.f_3579.f_530[iVar0] = iParam17;
		Global_1354290.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_274())
		{
			Global_1354290.f_941 = 1;
		}
		if (unk_0x2D337DD29A7ABD30())
		{
			iVar2 = 0;
			unk_0xBC8A4E0C71749580(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1354290.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1354290.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1354290.f_941 = 1;
			}
			if (func_273())
			{
				Global_1354290.f_945 = 1;
			}
		}
	}
}

int func_273()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0xBC8A4E0C71749580(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_274()
{
	if ((unk_0x37F0B37A9EF3F53B() == 8 || unk_0x37F0B37A9EF3F53B() == 9) || unk_0x37F0B37A9EF3F53B() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_275(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xBC2999B1C8F62EDD("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_276()
{
	unk_0x7FE30C99EA3439F7(8);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(7);
	Global_2454006 = 1;
}

int func_277(bool bParam0)
{
	if (func_279())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_278()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

bool func_279()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 12);
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_277(0) == 0)
	{
		return;
	}
	func_276();
	iVar1 = 0;
	if (((Global_2453539[0] != iParam0 || Global_2453539[1] != iParam1) || Global_2453539[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2453539[0] = iParam0;
	Global_2453539[1] = iParam1;
	Global_2453539[2] = iParam2;
	Global_2453539[3] = 0;
	Global_2453539[4] = 0;
	if (Global_2453539[0] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[0]);
			Global_2453545[0 /*16*/] = { func_275(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_113(iParam3, &(Global_2453545[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_2453539[1] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[1]);
			Global_2453545[1 /*16*/] = { func_275(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_113(iParam4, &(Global_2453545[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_2453539[2] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[2]);
			Global_2453545[2 /*16*/] = { func_275(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_113(iParam5, &(Global_2453545[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_113(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0xFB6B3EEFAB2DD12C() != func_83())
			{
				if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
				{
					func_113(iParam7, unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_113(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_113(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_186(sParam13))
	{
		sVar2 = sParam13;
	}
	func_113(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_112();
}

void func_281(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_277(0) == 0)
	{
		return;
	}
	func_276();
	iVar1 = 0;
	if (((Global_2453539[0] != iParam0 || Global_2453539[1] != iParam1) || Global_2453539[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2453539[0] = iParam0;
	Global_2453539[1] = iParam1;
	Global_2453539[2] = iParam2;
	Global_2453539[3] = 0;
	Global_2453539[4] = 0;
	if (Global_2453539[0] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[0]);
			Global_2453545[0 /*16*/] = { func_275(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_272(-1, &(Global_2453545[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16);
		}
	}
	if (Global_2453539[1] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[1]);
			Global_2453545[1 /*16*/] = { func_275(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_272(-1, &(Global_2453545[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17);
		}
	}
	if (Global_2453539[2] != func_83())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x7746E8ACE891BFA4(Global_2453539[2]);
			Global_2453545[2 /*16*/] = { func_275(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_272(-1, &(Global_2453545[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18);
		}
	}
	if (bParam12)
	{
		func_272(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xFB6B3EEFAB2DD12C() != func_83())
			{
				if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
				{
					func_272(-1, unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_272(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_132(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_272(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_186(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_113(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_112();
}

char* func_282()
{
	return "HUD_COUNTDOWN";
	switch (func_284(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_283())
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

int func_283()
{
	if (func_284(unk_0xFB6B3EEFAB2DD12C()) == 133)
	{
		return Global_2494149.f_4692;
	}
	return -1;
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/];
	}
	return -1;
}

void func_285(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x758A470BA92498EA())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
		{
			if (!unk_0xC55B9553B3EDADE9(&(Global_2494149.f_4610)))
			{
				unk_0x26BE9B51F0344E7F(&(Global_2494149.f_4610));
			}
			unk_0xE64FA07C00C340C6(1);
			unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_FIRA");
			unk_0xB3C38A4B84C152BF("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xFA320609400AECAE("DisableFlightMusic", 0);
			unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
			unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
			if (Global_2494149.f_4618 > -1)
			{
				unk_0xE723055FBC256C26(Global_2494149.f_4618);
				Global_2494149.f_4618 = -1;
			}
			Global_2494149.f_4608 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
		{
			if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 4))
			{
				if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 2))
				{
					if (unk_0xF404D7919ACA4D52())
					{
						if ((!unk_0xCC257DA11A122B5F(unk_0x609D1508B10D01AD(unk_0xFDD9C8C921B18ACC()), "OFF") && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && !unk_0xC55B9553B3EDADE9(&(Global_2494149.f_4610)))
						{
							StringCopy(&(Global_2494149.f_4610), "", 32);
							unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_FIRA");
							unk_0xB3C38A4B84C152BF("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xFA320609400AECAE("DisableFlightMusic", 0);
							unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
							unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
							unk_0xE64FA07C00C340C6(1);
							unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 2);
						}
					}
				}
				else if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0xF44A5E894FE76438(Global_2494149.f_4608, 5))
				{
					unk_0x26BE9B51F0344E7F("OFF");
				}
			}
			else if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S");
				}
				unk_0xE3E53903AE9B5BD5("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 1);
			}
			else if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x99F3E326DD5C12B2() != 0)
					{
						if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !unk_0xC254088DC917A529())
						{
							StringCopy(&(Global_2494149.f_4610), unk_0xB042A95A94F0D13B(), 32);
							unk_0x26BE9B51F0344E7F("OFF");
						}
						unk_0xE64FA07C00C340C6(1);
						unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 3))
				{
					Global_2494149.f_4618 = unk_0xA6EB3FD2D3CE76A2();
					unk_0xA93E75A5493862BD(Global_2494149.f_4618, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
			{
				Global_2494149.f_4608 = 0;
				Global_2494149.f_4618 = -1;
				unk_0xFB2A602DE19D1E98("FM_COUNTDOWN_30S_KILL");
				unk_0xE64FA07C00C340C6(0);
				unk_0xC86A1E7DAC7A9357("FM_PRE_COUNTDOWN_30S");
				unk_0xFA320609400AECAE("DisableFlightMusic", 1);
				unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
				unk_0xFA320609400AECAE("AllowScoreAndRadio", 1);
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 0);
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0xF44A5E894FE76438(Global_2494149.f_4608, 2))
				{
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 2);
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 5);
				}
				else
				{
					unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 5);
					unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 0))
		{
			Global_2494149.f_4608 = 0;
			Global_2494149.f_4618 = -1;
			unk_0xFB2A602DE19D1E98("FM_COUNTDOWN_30S_KILL");
			unk_0xE64FA07C00C340C6(0);
			unk_0xC86A1E7DAC7A9357("FM_PRE_COUNTDOWN_30S");
			unk_0xFA320609400AECAE("DisableFlightMusic", 1);
			unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
			unk_0xFA320609400AECAE("AllowScoreAndRadio", 1);
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 0);
			if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 2);
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 5);
			}
			else
			{
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 2);
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 5);
			}
		}
	}
}

var func_286()
{
	if (unk_0x7887B64A08364778(func_287()))
	{
		return func_287();
	}
	return func_78();
}

var func_287()
{
	return Global_2359301.f_3;
}

int func_288()
{
	switch (Local_643.f_3)
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

void func_289()
{
	int iVar0;
	struct<49> Var1;
	int iVar50;
	var uVar51;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_48 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		Local_731.f_527[iVar0 /*49*/] = { Var1 };
		Local_731.f_527[iVar0 /*49*/].f_1 = func_83();
		if (Local_643.f_4[iVar0] > -1)
		{
			uVar51 = unk_0x1C2C3C236D3FE99A(Local_643.f_4[iVar0]);
			if (unk_0x28E01BEA13B73DF2(uVar51))
			{
				iVar50 = unk_0x28B48C55342F6368(iVar51);
				if (!func_14(iVar50, 0))
				{
					Local_731.f_527[iVar0 /*49*/] = Local_643.f_4[iVar0];
					Local_731.f_527[iVar0 /*49*/].f_1 = iVar50;
					Local_731.f_527[iVar0 /*49*/].f_9 = Local_2827[Local_643.f_4[iVar0] /*12*/].f_4;
					Local_731.f_527[iVar0 /*49*/].f_31 = -1;
					Local_731.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_290()
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_1642), 19);
}

int func_291(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_643.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2827[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_292()
{
}

void func_293()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_245(&iVar1, &fVar2, iLocal_336, 1);
	switch (Local_643.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_295(sVar0, fVar2 >= 70f);
			if (unk_0x0FE8D1B72C1924FE(sVar0))
			{
				fVar2 = func_294(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xC2AC3CEE77C13BC5(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xEC09EDF1A2659B8D();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_295(sVar0, bVar3);
			if (unk_0x0FE8D1B72C1924FE(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_294(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_294(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xC2AC3CEE77C13BC5(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_341 != iLocal_336)
			{
				if (iLocal_336 > 0)
				{
					unk_0xA93E75A5493862BD(iLocal_343, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x6D49692FDF820BED(iLocal_343, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xA93E75A5493862BD(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_341 = iLocal_336;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_334, 3))
		{
			if (func_217(1))
			{
				unk_0xA93E75A5493862BD(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xA93E75A5493862BD(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xB8A73E7DA87B2968(&iLocal_334, 3);
		}
	}
	else if (unk_0xF44A5E894FE76438(iLocal_334, 3))
	{
		if (func_217(1))
		{
			unk_0xA93E75A5493862BD(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xA93E75A5493862BD(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x4EA098C870B73AB7(&iLocal_334, 3);
	}
}

float func_294(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_295(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0FE8D1B72C1924FE(sParam0))
		{
			unk_0xE3E53903AE9B5BD5(sParam0);
		}
	}
	else if (unk_0x0FE8D1B72C1924FE(sParam0))
	{
		unk_0xB3C38A4B84C152BF(sParam0);
	}
}

void func_296()
{
	int iVar0;
	
	if ((!func_132(unk_0xFB6B3EEFAB2DD12C()) && !func_14(unk_0xFB6B3EEFAB2DD12C(), 0)) && func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		iVar0 = func_314();
		if (iVar0 != Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_333) || func_313(iVar0, iLocal_333))
			{
				if (!func_312() || func_1(&uLocal_322, 1000, 0))
				{
					func_27(&uLocal_322, 0, 0);
					iLocal_333 = iVar0;
					Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4 = iVar0;
					func_299();
					if (iLocal_332 == 0)
					{
						iLocal_332 = unk_0x7414B386C0020BEC();
					}
					if (Local_3212.f_11 == 0)
					{
						Local_3212.f_11 = unk_0x632066A9E8CB2C4D();
					}
				}
			}
		}
		iLocal_336 = func_297();
	}
}

int func_297()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_643.f_3)
	{
		case 0:
			fVar1 = unk_0x44B3450C76E0E0BE();
			break;
		
		case 1:
			fVar1 = unk_0x141F210EB135D7A5();
			break;
		
		case 2:
			fVar1 = unk_0xEC09EDF1A2659B8D();
			break;
		
		case 3:
			fVar1 = unk_0x487082D3FF2B89F6();
			break;
		
		case 4:
			fVar1 = unk_0xB2ECF130E16A555E();
			break;
		
		case 5:
			fVar1 = unk_0xD4B040BEA22634EF();
			break;
		
		case 8:
			iVar0 = unk_0xAA2627E5F28FD2C1();
			break;
		
		case 9:
			fVar1 = unk_0x4518C355BFD5DC2F();
			break;
		
		case 11:
			fVar1 = unk_0xEF504E0C7B56EE98();
			break;
		
		case 12:
			fVar1 = unk_0xEF504E0C7B56EE98();
			break;
		
		case 13:
			fVar1 = unk_0x90B866D1140C17C7();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0xC6C425A326326DEF(iVar0);
	func_298(&iVar2);
	if (iVar2 == iLocal_335)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_334, 1))
			{
				func_27(&uLocal_324, 0, 0);
				Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4.f_2 = func_429(&uLocal_324, 0, 0);
				unk_0xB8A73E7DA87B2968(&iLocal_334, 1);
			}
			else if ((func_429(&uLocal_324, 0, 0) % 1000) == 0)
			{
				Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4.f_2 = func_429(&uLocal_324, 0, 0);
			}
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&iLocal_334, 1);
	}
	if ((func_21(iLocal_335, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_326, 2000, 0))
	{
		iVar2 = iLocal_335;
		unk_0xB8A73E7DA87B2968(&iLocal_334, 2);
	}
	else
	{
		iLocal_335 = iVar2;
		func_44(&uLocal_326);
		unk_0x4EA098C870B73AB7(&iLocal_334, 2);
	}
	return iVar2;
}

void func_298(int iParam0)
{
	switch (Local_643.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((((unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126())) || unk_0xD6E13289C5649502(unk_0xD5A676B97920D126())) || unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126())) || unk_0x687B7FD02B116DD0(unk_0xD5A676B97920D126()))
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

void func_299()
{
	if (!unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1, 2))
	{
		unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_1), 2);
		func_300(1);
	}
}

void func_300(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_135())
		{
			func_305(0);
			func_304();
		}
		if (func_303(0))
		{
			uVar0 = func_177(2462, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, 0);
			func_304();
		}
		if (func_303(func_302(func_284(unk_0xFB6B3EEFAB2DD12C()))))
		{
			uVar0 = func_177(2462, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, func_302(func_284(unk_0xFB6B3EEFAB2DD12C())));
			func_304();
		}
		if (func_301())
		{
			func_304();
		}
		if (func_284(unk_0xFB6B3EEFAB2DD12C()) > -1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 7);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 7);
	}
}

int func_301()
{
	if (Global_2433082.f_655.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
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
	return 12;
}

bool func_303(int iParam0)
{
	var uVar0;
	
	uVar0 = func_177(2462, -1, 0);
	return unk_0xF44A5E894FE76438(uVar0, iParam0);
}

void func_304()
{
	if (func_301())
	{
		Global_2433082.f_655.f_16 = 1;
	}
}

void func_305(int iParam0)
{
	if (func_135())
	{
		if (iParam0 == 1)
		{
			if (Global_2494149.f_4257 == -1)
			{
				Global_2494149.f_4257 = 60000;
			}
			func_27(&(Global_2494149.f_4255), 0, 0);
			if (Global_2494149.f_4260 == -1)
			{
				Global_2494149.f_4260 = 10000;
			}
			func_27(&(Global_2494149.f_4258), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_311(1);
		}
		if ((!unk_0x8676DE83D4396C39() && !func_310()) && !func_306(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_979731 = 0;
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_8 = 0;
	}
}

int func_306(int iParam0)
{
	if (func_307(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_308(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_308(int iParam0)
{
	return func_309(iParam0);
}

bool func_309(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

bool func_310()
{
	return Global_2443089.f_718;
}

void func_311(bool bParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (!func_135())
		{
			if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 0);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 0);
			}
			unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 1f);
			unk_0x78474BABFD9E36D2(0);
			unk_0x8F5ECEB25B6D76B3(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0xD06F9BE40EFDA8FC(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 0);
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 1);
				unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0xD06F9BE40EFDA8FC(1, 0);
				}
			}
			unk_0x78474BABFD9E36D2(1);
			unk_0x8F5ECEB25B6D76B3(0);
		}
	}
}

int func_312()
{
	switch (Local_643.f_3)
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

int func_313(int iParam0, int iParam1)
{
	if (Local_643.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_314()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_329())
	{
		if (Local_643.f_3 == 14)
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && func_328(unk_0xD5A676B97920D126(), 0) == -1)
			{
				iVar2 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
				if ((!func_327(&iVar2, 0) || unk_0xA0A4DA31DEDFAC4F(iVar2) != joaat("dodo")) && unk_0x7C4BC3264552091A(iVar2))
				{
					func_320(Local_643.f_3 != 14, 1, 0);
					if (func_319())
					{
						iVar3 = func_318();
						if (iVar3 >= 0)
						{
							if (!unk_0xF44A5E894FE76438(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_8[func_317(iVar3)], func_316(iVar3)))
							{
								iLocal_337++;
								unk_0xB8A73E7DA87B2968(&(Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_8[func_317(iVar3)]), func_316(iVar3));
							}
						}
					}
					iVar0 = iLocal_337;
				}
			}
		}
		else
		{
			iVar0 = func_315();
		}
	}
	else
	{
		unk_0xBB6394B4D0D36AEB(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0xC6C425A326326DEF(iVar0);
}

int func_315()
{
	switch (Local_643.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_316(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_317(iParam0) * 31);
}

int func_317(int iParam0)
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

int func_318()
{
	return iLocal_99;
}

int func_319()
{
	if (iLocal_106 == 1)
	{
		iLocal_106 = 0;
		return 1;
	}
	return 0;
}

void func_320(bool bParam0, bool bParam1, int iParam2)
{
	func_322(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_307.f_2 < Local_310.f_2)
		{
			Local_307.f_2 = 0f;
		}
		else
		{
			Local_310.f_2 = 0f;
		}
		if (Local_313.f_2 < Local_316.f_2)
		{
			Local_313.f_2 = 0f;
		}
		else
		{
			Local_316.f_2 = 0f;
		}
	}
	switch (iLocal_100)
	{
		case 0:
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Local_110[iLocal_99 /*3*/]) < fLocal_306)
				{
					if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()) || unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
					{
						if (unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0))
						{
							if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0))
							{
								bLocal_101 = true;
								iLocal_100 = 1;
							}
							if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
							{
								bLocal_102 = true;
								iLocal_100 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (!unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()) && !unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					func_321();
				}
				else if (!unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0))
				{
					func_321();
				}
				else if (!unk_0x7C4BC3264552091A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)) && !bParam1)
				{
					func_321();
				}
				if (bLocal_101)
				{
					if (iLocal_105)
					{
						if (iLocal_104)
						{
							if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
							{
								func_321();
								iLocal_106 = 1;
							}
						}
						else if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							iLocal_104 = 1;
						}
						else if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							func_321();
						}
					}
					else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						iLocal_105 = 1;
					}
					else if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						func_321();
					}
				}
				else if (bLocal_102)
				{
					if (iLocal_105)
					{
						if (iLocal_103)
						{
							if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
							{
								func_321();
								iLocal_106 = 1;
							}
						}
						else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							iLocal_103 = 1;
						}
						else if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							func_321();
						}
					}
					else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						iLocal_105 = 1;
					}
					else if (!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						func_321();
					}
				}
			}
			break;
	}
}

void func_321()
{
	bLocal_101 = false;
	bLocal_102 = false;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_105 = 0;
	iLocal_100 = 0;
}

void func_322(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_107 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_326(iVar0)) && (uParam1 || !func_325(iVar0)))
		{
			if (func_324(Local_107, Local_110[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_107, Local_110[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_99 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_323(iLocal_99);
}

void func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_307 = { 1103.014f, -233.0374f, 56.13004f };
			Local_310 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_319 = 30f;
			Local_313 = { 1093.589f, -248.5926f, 56.88639f };
			Local_316 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_307 = { 1044.182f, -324.5904f, 49.33408f };
			Local_310 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_319 = 30f;
			Local_313 = { 1007.983f, -320.6159f, 48.4543f };
			Local_316 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_307 = { 916.599f, -419.8782f, 35.62748f };
			Local_310 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_319 = 7f;
			Local_313 = { 912.1362f, -420.5161f, 35.38034f };
			Local_316 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_307 = { 757.7189f, -472.924f, 19.2535f };
			Local_310 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_319 = 20.75f;
			Local_313 = { 744.9114f, -480.7373f, 19.06514f };
			Local_316 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_307 = { 680.3677f, -581.1792f, 14.2145f };
			Local_310 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_319 = 45f;
			Local_313 = { 667.3692f, -610.5356f, 13.85401f };
			Local_316 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_307 = { 644.2497f, -844.7504f, 12.36707f };
			Local_310 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_319 = 25f;
			Local_313 = { 644.3659f, -859.3878f, 12.59677f };
			Local_316 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_307 = { 634.972f, -1011.64f, 10.92594f };
			Local_310 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_319 = 25f;
			Local_313 = { 634.9612f, -1029.123f, 10.61846f };
			Local_316 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_307 = { 645.7223f, -1191.215f, 10.45198f };
			Local_310 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_319 = 50f;
			Local_313 = { 645.7223f, -1228.966f, 10.98015f };
			Local_316 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_307 = { 642.1216f, -1295.73f, 9.005976f };
			Local_310 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_319 = 7f;
			Local_313 = { 644.7772f, -1298.168f, 9.128529f };
			Local_316 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_307 = { 686.5675f, -1444.71f, 9.065001f };
			Local_310 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_319 = 25f;
			Local_313 = { 682.3027f, -1429.872f, 9.890836f };
			Local_316 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_307 = { 718.7617f, -1734.313f, 9.082874f };
			Local_310 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_319 = 30f;
			Local_313 = { 717.5355f, -1748.646f, 9.363478f };
			Local_316 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_307 = { 694.3165f, -2049.806f, 0.009695f };
			Local_310 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_319 = 30f;
			Local_313 = { 693.1836f, -2063.225f, 0.429037f };
			Local_316 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_307 = { 642.6671f, -2494.551f, 0.468485f };
			Local_310 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_319 = 20f;
			Local_313 = { 647.0339f, -2506.202f, 0.583701f };
			Local_316 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_307 = { 691.8235f, -2558.219f, 0.363352f };
			Local_310 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_319 = 10.25f;
			Local_313 = { 695.7928f, -2561.034f, 0.346731f };
			Local_316 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_307 = { 723.6254f, -2562.171f, 0.255647f };
			Local_310 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_319 = 15f;
			Local_313 = { 735.765f, -2561.935f, 0.311182f };
			Local_316 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_307 = { 891.4387f, -2603.12f, 0f };
			Local_310 = { 704.4932f, -2634.793f, 45f };
			fLocal_319 = 20f;
			Local_313 = { 893.2578f, -2616.235f, 0f };
			Local_316 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_307 = { -2669.587f, 2491.96f, 2.043799f };
			Local_310 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_319 = 26.5f;
			Local_313 = { -2687.606f, 2494.868f, 2.608733f };
			Local_316 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_307 = { -1986.173f, 4521.799f, 0f };
			Local_310 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_319 = 17f;
			Local_313 = { -1995.668f, 4531.259f, 0f };
			Local_316 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_307 = { -526.0265f, 4472.442f, 0f };
			Local_310 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_319 = 10f;
			Local_313 = { -519.9281f, 4476.346f, 0f };
			Local_316 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_307 = { 98.1615f, 3384.489f, 45.45169f };
			Local_310 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_319 = 8f;
			Local_313 = { 152.6802f, 3346.793f, 45.02156f };
			Local_316 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_307 = { 147.8606f, 3406.796f, 38.03672f };
			Local_310 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_319 = 14.5f;
			Local_313 = { 130.0916f, 3425.417f, 38.05672f };
			Local_316 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_307 = { 2830.972f, 4967.14f, 34.56013f };
			Local_310 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_319 = 10f;
			Local_313 = { 2826.767f, 4964.185f, 34.10636f };
			Local_316 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_307 = { -151.5764f, 4264.417f, 31.04735f };
			Local_310 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_319 = 10f;
			Local_313 = { -148.3842f, 4261.071f, 31.57409f };
			Local_316 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_307 = { -426.6919f, 2964.272f, 14.848f };
			Local_310 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_319 = 7f;
			Local_313 = { -425.0283f, 2967.861f, 15.22699f };
			Local_316 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_307 = { -192.3414f, 2864.916f, 30.72595f };
			Local_310 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_319 = 10f;
			Local_313 = { -192.0129f, 2871.603f, 29.99943f };
			Local_316 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_307 = { 2539.185f, 2228.772f, 18.6102f };
			Local_310 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_319 = 10f;
			Local_313 = { 2543.708f, 2231.402f, 18.331f };
			Local_316 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_307 = { 2954.087f, 815.7209f, 0.037901f };
			Local_310 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_319 = 35f;
			Local_313 = { 2966.123f, 806.8889f, 0.544056f };
			Local_316 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_307 = { 2329.673f, -459.6648f, 70.24277f };
			Local_310 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_319 = 12f;
			Local_313 = { 2324.752f, -455.5238f, 70.25145f };
			Local_316 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_307 = { 1943.428f, -753.251f, 80.17905f };
			Local_310 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_319 = 7f;
			Local_313 = { 1943.366f, -758.287f, 80.32291f };
			Local_316 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_307 = { -271.2849f, -2414.993f, -10f };
			Local_310 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_319 = 30f;
			Local_313 = { -279.8399f, -2427.212f, -10f };
			Local_316 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_307 = { -1483f, 2691.428f, -10f };
			Local_310 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_319 = 12f;
			Local_313 = { -1478.152f, 2696.688f, -10f };
			Local_316 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_307 = { 222.1519f, -2343.487f, 0.039199f };
			Local_310 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_319 = 12f;
			Local_313 = { 216.959f, -2343.487f, 0.207734f };
			Local_316 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_307 = { 346.4622f, -2244.374f, 0.159779f };
			Local_310 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_319 = 20f;
			Local_313 = { 359.609f, -2244.468f, 0.129684f };
			Local_316 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_307 = { -1859.68f, -322.6357f, 56.16368f };
			Local_310 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_319 = 7.5f;
			Local_313 = { -1860.27f, -327.8634f, 57.543f };
			Local_316 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_307 = { -680.2632f, -600.818f, 69.11289f };
			Local_310 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_319 = 31.5f;
			Local_313 = { -680.6077f, -618.3658f, 69.27496f };
			Local_316 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_307 = { -1468.096f, -591.7158f, 67.05518f };
			Local_310 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_319 = 11.75f;
			Local_313 = { -1474.903f, -591.1215f, 67.08091f };
			Local_316 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_307 = { -1544.958f, -537.1475f, 72.44347f };
			Local_310 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_319 = 11.75f;
			Local_313 = { -1541.008f, -541.5494f, 71.61972f };
			Local_316 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_307 = { 333.2108f, -2727.274f, 20.71663f };
			Local_310 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_319 = 20f;
			Local_313 = { 343.1127f, -2727.236f, 20.23613f };
			Local_316 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_307 = { 1928.071f, 6228.355f, 43.49398f };
			Local_310 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_319 = 13f;
			Local_313 = { 1931.82f, 6235.634f, 43.37382f };
			Local_316 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_307 = { -736.4309f, -1590.921f, 10.80892f };
			Local_310 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_319 = 15f;
			Local_313 = { -727.2307f, -1585.221f, 11.78027f };
			Local_316 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_307 = { -676.3775f, -1548.553f, 12.33747f };
			Local_310 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_319 = 25f;
			Local_313 = { -654.203f, -1536.146f, 9.191055f };
			Local_316 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_307 = { -624.2344f, -1537.045f, 12.60193f };
			Local_310 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_319 = 8f;
			Local_313 = { -615.4003f, -1536.65f, 12.40271f };
			Local_316 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_307 = { -492.5057f, -1632.457f, 24.3307f };
			Local_310 = { -418.2088f, -1487.452f, 0f };
			fLocal_319 = 25f;
			Local_313 = { -486.2016f, -1636.095f, 24.20805f };
			Local_316 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_307 = { -359.3541f, -1639.693f, 13.13455f };
			Local_310 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_319 = 25f;
			Local_313 = { -378.1518f, -1705.66f, 12.47196f };
			Local_316 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_307 = { -243.4436f, -1814.623f, 25.69465f };
			Local_310 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_319 = 25f;
			Local_313 = { -235.1319f, -1822.094f, 25.86542f };
			Local_316 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_307 = { 84.55537f, -2046.159f, 13.30767f };
			Local_310 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_319 = 25f;
			Local_313 = { 17.90788f, -2035.773f, 12.62706f };
			Local_316 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_307 = { 221.5029f, -2232.766f, 9.88676f };
			Local_310 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_319 = 8f;
			Local_313 = { 218.583f, -2232.766f, 9.886198f };
			Local_316 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_307 = { 221.6518f, -2184.635f, 11.66457f };
			Local_310 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_319 = 8f;
			Local_313 = { 217.8995f, -2184.635f, 11.5405f };
			Local_316 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_307 = { 2326.57f, 1096.031f, 76.31458f };
			Local_310 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_319 = 21f;
			Local_313 = { 2334.453f, 1103.067f, 76.26603f };
			Local_316 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_307 = { 2379.442f, 1150.776f, 58.79632f };
			Local_310 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_319 = 12f;
			Local_313 = { 2374.064f, 1146.282f, 58.83331f };
			Local_316 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_307 = { -1179.405f, -355.2554f, 56.53003f };
			Local_310 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_319 = 12.5f;
			Local_313 = { -1178.385f, -361.8784f, 56.15081f };
			Local_316 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_307 = { -921.3846f, -384.94f, 137.0181f };
			Local_310 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_319 = 16f;
			Local_313 = { -914.1658f, -387.9444f, 137.0794f };
			Local_316 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_307 = { -740.2564f, 246.4529f, 132.2922f };
			Local_310 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_319 = 16f;
			Local_313 = { -726.6429f, 253.0676f, 132.3319f };
			Local_316 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_307 = { -771.2068f, 268.2729f, 132.1689f };
			Local_310 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_319 = 16f;
			Local_313 = { -770.8035f, 310.8625f, 137.4161f };
			Local_316 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_307 = { 259.2205f, 135.4146f, 136.7083f };
			Local_310 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_319 = 16f;
			Local_313 = { 261.9694f, 142.9676f, 136.6889f };
			Local_316 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_307 = { 393.548f, -30.87166f, 152.6635f };
			Local_310 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_319 = 8f;
			Local_313 = { 390.5358f, -36.08882f, 152.7813f };
			Local_316 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_307 = { 114.3139f, -648.4297f, 261.8488f };
			Local_310 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_319 = 20f;
			Local_313 = { 124.8467f, -646.6575f, 261.8488f };
			Local_316 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_307 = { -215.919f, -823.8436f, 126.0224f };
			Local_310 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_319 = 20f;
			Local_313 = { -225.397f, -820.3937f, 126.0812f };
			Local_316 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_307 = { -296.4725f, -802.0815f, 95.40108f };
			Local_310 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_319 = 20f;
			Local_313 = { -305.4602f, -798.8369f, 95.48194f };
			Local_316 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_307 = { -292.3034f, -823.3569f, 95.37621f };
			Local_310 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_319 = 20f;
			Local_313 = { -288.9206f, -814.022f, 95.37556f };
			Local_316 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_307 = { -256.3589f, -714.7838f, 110.1617f };
			Local_310 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_319 = 20f;
			Local_313 = { -253.7723f, -705.6632f, 110.1736f };
			Local_316 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_307 = { 1808.214f, 1949.246f, 71.73707f };
			Local_310 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_319 = 9.75f;
			Local_313 = { 1802.786f, 1950.262f, 71.74002f };
			Local_316 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_307 = { 2388.733f, 2931.941f, 46.62681f };
			Local_310 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_319 = 10f;
			Local_313 = { 2392.547f, 2934.867f, 46.6268f };
			Local_316 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_307 = { 2700.056f, 4836.381f, 42.07854f };
			Local_310 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_319 = 20.75f;
			Local_313 = { 2685.672f, 4821.653f, 42.18471f };
			Local_316 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_307 = { -1053.446f, 4766.245f, 234.3251f };
			Local_310 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_319 = 5f;
			Local_313 = { -1051.414f, 4767.193f, 234.4293f };
			Local_316 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_324(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_325(int iParam0)
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

int func_326(int iParam0)
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

int func_327(var uParam0, int iParam1)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(*uParam0, 0) || iParam1)
		{
			if (unk_0x3ACA21A90E0A949C(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x6A0583ECFCCECC9B(iParam0, iParam1))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(iParam0, iParam1);
			if (unk_0x7887B64A08364778(iVar0))
			{
				if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
				{
					iVar1 = unk_0xB84CC33D90EA2EDD(unk_0xA0A4DA31DEDFAC4F(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x06F2E112EBC0C4FB(iVar0, iVar3, 0))
						{
							if (unk_0x98BE504E8B389665(iVar0, iVar3, 0) == iParam0)
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

int func_329()
{
	switch (Local_643.f_3)
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

int func_330(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_345() < 10)
	{
		iVar0 = func_344();
		func_331(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_331(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_332(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_332(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_341(unk_0xFB6B3EEFAB2DD12C()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_340(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_335(Var0))
		{
			Global_2404994.f_43.f_64 = func_334(unk_0xFB6B3EEFAB2DD12C());
			func_333(Var0, iParam8);
		}
	}
}

void func_333(struct<12> Param0, int iParam12)
{
	Global_2404994.f_355[iParam12 /*12*/] = { Param0 };
	Global_2404994.f_355[iParam12 /*12*/].f_9 = 1;
}

int func_334(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_335(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404994.f_43[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_336(Global_2404994.f_43[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_336(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_339(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_337(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_339(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_337(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_337(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_338(Param0, Param3, Var0, Var3);
}

int func_338(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_339(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_340(var uParam0, var uParam1)
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

int func_341(int iParam0)
{
	if ((func_343(iParam0, 1) || func_342(iParam0)) || func_264(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

bool func_343(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_334(iParam0) != 0;
	}
	return func_307(iParam0, bParam1);
}

int func_344()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404994.f_355[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_345()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_346(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	unk_0xB1953EBEF4D6BD85(sParam1);
	unk_0xB1953EBEF4D6BD85(sParam2);
	return unk_0x39EEBD00DF395566(0);
}

char* func_347(int iParam0)
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

char* func_348(int iParam0)
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

char* func_349(int iParam0)
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

void func_350()
{
	if (!func_125())
	{
		return;
	}
	if (!unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == Global_1312571.f_9)
	{
		return;
	}
	func_121();
}

void func_351(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_326(iVar0) && !func_325(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_110[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_352()
{
	if (!func_329())
	{
		if (Local_643.f_3 == 14)
		{
			func_355();
		}
		Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4.f_1 = func_315();
	}
	else if ((!unk_0xF44A5E894FE76438(Global_1574332.f_1, 4) && !unk_0xF44A5E894FE76438(Global_1574332.f_1, 5)) && !func_354(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_353();
	}
}

void func_353()
{
	switch (Local_643.f_3)
	{
		case 0:
			unk_0x36C3C7E0C62ACDB9(8, 2);
			break;
		
		case 1:
			unk_0x36C3C7E0C62ACDB9(13, 2);
			break;
		
		case 2:
			unk_0x36C3C7E0C62ACDB9(4, 2);
			break;
		
		case 4:
			unk_0x36C3C7E0C62ACDB9(1, 2);
			break;
		
		case 3:
			unk_0x36C3C7E0C62ACDB9(2, 2);
			break;
		
		case 5:
			unk_0x36C3C7E0C62ACDB9(3, 2);
			break;
		
		case 6:
			unk_0x36C3C7E0C62ACDB9(11, 3);
			break;
		
		case 7:
			unk_0x36C3C7E0C62ACDB9(14, 1);
			break;
		
		case 8:
			unk_0x36C3C7E0C62ACDB9(29, 2);
			break;
		
		case 9:
			unk_0x36C3C7E0C62ACDB9(12, 2);
			break;
		
		case 10:
			unk_0x36C3C7E0C62ACDB9(10, 2);
			break;
		
		case 11:
			unk_0x36C3C7E0C62ACDB9(18, 2);
			break;
		
		case 12:
			unk_0x36C3C7E0C62ACDB9(20, 2);
			break;
		
		case 13:
			unk_0x36C3C7E0C62ACDB9(27, 2);
			break;
		
		case 15:
			unk_0x36C3C7E0C62ACDB9(26, 1);
			break;
		
		case 16:
			unk_0x36C3C7E0C62ACDB9(25, 1);
			break;
		
		case 17:
			unk_0x36C3C7E0C62ACDB9(22, 1);
			break;
		
		case 18:
			unk_0x36C3C7E0C62ACDB9(24, 1);
			break;
	}
	unk_0xB8A73E7DA87B2968(&iLocal_334, 8);
}

bool func_354(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_355()
{
	Local_110[0 /*3*/] = { 1083f, -231f, 60f };
	Local_110[1 /*3*/] = { 1024f, -325f, 60f };
	Local_110[2 /*3*/] = { 910f, -401f, 43f };
	Local_110[3 /*3*/] = { 721f, -457f, 26f };
	Local_110[4 /*3*/] = { 643f, -579f, 26f };
	Local_110[5 /*3*/] = { 590f, -851f, 26f };
	Local_110[6 /*3*/] = { 590f, -1023f, 16f };
	Local_110[7 /*3*/] = { 582f, -1205f, 24f };
	Local_110[8 /*3*/] = { 608f, -1335f, 16f };
	Local_110[9 /*3*/] = { 640f, -1434f, 16f };
	Local_110[10 /*3*/] = { 671f, -1742f, 20f };
	Local_110[11 /*3*/] = { 651f, -2046f, 16f };
	Local_110[12 /*3*/] = { 603f, -2505f, 9f };
	Local_110[13 /*3*/] = { 673f, -2582f, 4f };
	Local_110[14 /*3*/] = { 728f, -2594f, 10f };
	Local_110[15 /*3*/] = { 794f, -2624f, 27f };
	Local_110[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_110[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_110[18 /*3*/] = { -513f, 4427f, 40f };
	Local_110[19 /*3*/] = { 126f, 3366f, 40f };
	Local_110[20 /*3*/] = { 143f, 3418f, 36f };
	Local_110[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_110[22 /*3*/] = { -162f, 4249f, 40f };
	Local_110[23 /*3*/] = { -408f, 2964f, 20f };
	Local_110[24 /*3*/] = { -181f, 2862f, 38f };
	Local_110[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_110[26 /*3*/] = { 2950f, 803f, 8f };
	Local_110[27 /*3*/] = { 2369f, -409f, 80f };
	Local_110[28 /*3*/] = { 1906f, -755f, 84f };
	Local_110[29 /*3*/] = { -403f, -2333f, 40f };
	Local_110[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_110[31 /*3*/] = { 219f, -2315f, 5f };
	Local_110[32 /*3*/] = { 350f, -2315f, 5f };
	Local_110[33 /*3*/] = { -1848f, -333f, 75f };
	Local_110[34 /*3*/] = { -693f, -608f, 69f };
	Local_110[35 /*3*/] = { -1461f, -582f, 53f };
	Local_110[36 /*3*/] = { -1553f, -546f, 59f };
	Local_110[37 /*3*/] = { 338f, -2758f, 23f };
	Local_110[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_110[39 /*3*/] = { -713f, -1538f, 13f };
	Local_110[40 /*3*/] = { -659f, -1518f, 13f };
	Local_110[41 /*3*/] = { -620f, -1502f, 16f };
	Local_110[42 /*3*/] = { -445f, -1575f, 26f };
	Local_110[43 /*3*/] = { -373f, -1680f, 19f };
	Local_110[44 /*3*/] = { -212f, -1805f, 29f };
	Local_110[45 /*3*/] = { 47f, -2040f, 18f };
	Local_110[46 /*3*/] = { 223f, -2240f, 6f };
	Local_110[47 /*3*/] = { 218f, -2189f, 6f };
	Local_110[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_110[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_110[50 /*3*/] = { -1186f, -365f, 46f };
	Local_110[51 /*3*/] = { -916f, -407f, 93f };
	Local_110[52 /*3*/] = { -726f, 235f, 105f };
	Local_110[53 /*3*/] = { -774f, 286f, 112f };
	Local_110[54 /*3*/] = { 271f, 134f, 125f };
	Local_110[55 /*3*/] = { 377f, -28f, 125f };
	Local_110[56 /*3*/] = { 121f, -703f, 150f };
	Local_110[57 /*3*/] = { -204f, -784f, 74f };
	Local_110[58 /*3*/] = { -287f, -774f, 72f };
	Local_110[59 /*3*/] = { -272f, -824f, 71f };
	Local_110[60 /*3*/] = { -230f, -723f, 80f };
	Local_110[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_110[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_110[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_110[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
	{
		unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
	}
}

void func_357(var uParam0, int iParam1)
{
	if (func_284(unk_0xFB6B3EEFAB2DD12C()) == 133 && iParam1)
	{
		Global_2494149.f_4692 = uParam0;
	}
	else
	{
		Global_2494149.f_4692 = -1;
	}
}

void func_358(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xFA320609400AECAE("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
	}
	Global_2494149.f_4618 = -1;
	bVar0 = (func_264(unk_0xFB6B3EEFAB2DD12C(), 0) && func_263(unk_0xFB6B3EEFAB2DD12C()));
	if (bParam6)
	{
		func_356(21, 1);
	}
	else
	{
		func_374(iParam0, -1);
		if (func_8(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1574332.f_3 = iParam0;
		}
		else
		{
			func_373(iParam0);
		}
		Global_1574332.f_4 = -1;
		if (func_8(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 5);
		}
		if ((func_135() && !func_134()) || func_133(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 4);
		}
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 17);
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 20);
		if (func_372(iParam0))
		{
			func_371();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_368(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xFA5E84DCAE200259(fParam2);
			if (iParam0 == 146)
			{
				unk_0x028AA922F2B17B2A(0);
				unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
				unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
			}
		}
		if (func_366(iParam0))
		{
			unk_0x028AA922F2B17B2A(0);
			unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
			unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391043)
			{
				func_364(1);
				if (func_224(0))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 9);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_362(1);
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 12);
		}
		if (bParam5)
		{
			func_361();
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_359(iParam0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 21);
			}
		}
	}
	Global_2481896 = 1;
}

int func_359(int iParam0)
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
	if (func_360())
	{
		return 1;
	}
	return 0;
}

int func_360()
{
	switch (func_283())
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

void func_361()
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4609), 0);
}

void func_362(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91538.f_8 = 1;
	}
	else
	{
		Global_91538.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_363(iVar0);
		iVar0++;
	}
}

void func_363(int iParam0)
{
	Global_91538.f_160[iParam0] = 1;
	Global_91538.f_159 = 1;
}

void func_364(int iParam0)
{
	if (func_365() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_365()
{
	if ((((Global_979732 != -1 && Global_979732 != 33) && Global_979732 != 35) && Global_979732 != 37) && Global_979732 != 21)
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_367(unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_367(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

void func_368(float fParam0)
{
	float fVar0;
	
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_369())
	{
		return;
	}
	fVar0 = (Global_2494149.f_4705 - fParam0);
	if (unk_0x597C1E51157E5516(Global_2494149.f_4706))
	{
		if (!Global_2494149.f_4706 == unk_0x3ED6DDB11A7AD67F() && unk_0xC3D3EC28F0EB3C6D(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2494149.f_4705 = fParam0;
	Global_2494149.f_4706 = unk_0x3ED6DDB11A7AD67F();
}

int func_369()
{
	switch (func_370())
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

int func_370()
{
	return Global_25185;
}

void func_371()
{
	Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_203 = 0;
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4424), 1);
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_373(int iParam0)
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/] = iParam0;
}

void func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_303(0) || func_303(func_302(iVar0)))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 2);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 2);
		}
	}
}

int func_375()
{
	switch (Local_643.f_3)
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

void func_376()
{
	Global_1756720 = 1;
	if (!unk_0xF44A5E894FE76438(Global_2501502, 0))
	{
		unk_0xB8A73E7DA87B2968(&Global_2501502, 0);
		unk_0xB8A73E7DA87B2968(&Global_1756721, 0);
	}
	if (!unk_0xF44A5E894FE76438(Global_2501502, 1))
	{
		unk_0xB8A73E7DA87B2968(&Global_2501502, 1);
		unk_0xB8A73E7DA87B2968(&Global_1756721, 1);
	}
	if (!unk_0xF44A5E894FE76438(Global_2501502, 5))
	{
		unk_0xB8A73E7DA87B2968(&Global_2501502, 5);
		unk_0xB8A73E7DA87B2968(&Global_1756721, 5);
	}
	if (unk_0xA9F93059DE95F096(-355737150))
	{
		unk_0x7E12E87285DA0A0B(-355737150, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-580979506))
	{
		unk_0x7E12E87285DA0A0B(-580979506, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-1426452475))
	{
		unk_0x7E12E87285DA0A0B(-1426452475, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(745417724))
	{
		unk_0x7E12E87285DA0A0B(745417724, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-1305304906))
	{
		unk_0x7E12E87285DA0A0B(-1305304906, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-1543175077))
	{
		unk_0x7E12E87285DA0A0B(-1543175077, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-811770997))
	{
		unk_0x7E12E87285DA0A0B(-811770997, 0, 0, 0);
	}
}

int func_377()
{
	switch (Local_643.f_3)
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

void func_378()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_643.f_3))
	{
		if (Local_643.f_3 == 1 || Local_643.f_3 == 6)
		{
			iVar0 = func_397(unk_0xFB6B3EEFAB2DD12C(), 1);
			iVar1 = func_170(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x51D836BF46000450(unk_0xD5A676B97920D126()))
				{
					unk_0x4408969E7EC5C720(unk_0xD5A676B97920D126(), joaat("gadget_parachute"), 1, 0, 0);
					func_379(1);
				}
			}
			else
			{
				unk_0x104B4F00B6E3B645(unk_0xFB6B3EEFAB2DD12C(), 1);
			}
		}
	}
}

void func_379(bool bParam0)
{
	int iVar0;
	
	if (unk_0x0DF5DCF0FB12F865(unk_0xD5A676B97920D126(), 5) != 0)
	{
		unk_0x12A60388636C9B1C(unk_0xD5A676B97920D126(), 177, 1);
		unk_0xCDB410D37D2C68E8(unk_0xFB6B3EEFAB2DD12C(), func_177(580, -1, 0));
		if (func_396())
		{
			unk_0xAE33F1085C476207(unk_0xFB6B3EEFAB2DD12C(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_395())
		{
			unk_0xAE33F1085C476207(unk_0xFB6B3EEFAB2DD12C(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_392(3610, -1, -1))
		{
		}
		iVar0 = func_177(2034, -1, 0);
		unk_0xE5B005FCCF6C5BC4(unk_0xFB6B3EEFAB2DD12C(), func_391(unk_0x4572B13EE70C8F52(unk_0xFB6B3EEFAB2DD12C()), iVar0));
		if (func_221(0))
		{
			unk_0xCDB410D37D2C68E8(unk_0xFB6B3EEFAB2DD12C(), func_177(580, -1, 0));
		}
		else
		{
			unk_0xCDB410D37D2C68E8(unk_0xFB6B3EEFAB2DD12C(), func_390(Global_2501786));
		}
		func_389(unk_0xFB6B3EEFAB2DD12C(), iVar0);
		unk_0xE9E427F922387CBF(unk_0xFB6B3EEFAB2DD12C(), 5, func_384(unk_0xD5A676B97920D126(), iVar0), func_383(unk_0xD5A676B97920D126(), iVar0), 0);
		func_382(func_177(2034, -1, 0), 1);
		Global_2494149.f_273 = 1;
		func_380(unk_0xFB6B3EEFAB2DD12C(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_380(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1995B52453EF6537())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_177(2034, -1, 0);
		}
		unk_0xE9E427F922387CBF(iParam0, 5, func_384(unk_0x4572B13EE70C8F52(iParam0), iParam2), func_383(unk_0x4572B13EE70C8F52(iParam0), iParam2), 0);
		func_389(iParam0, iParam2);
		unk_0xE5B005FCCF6C5BC4(iParam0, func_391(unk_0x4572B13EE70C8F52(iParam0), iParam2));
		unk_0x5BD2F51088536150(unk_0x4572B13EE70C8F52(iParam0), 5, func_384(unk_0x4572B13EE70C8F52(iParam0), iParam2), func_383(unk_0x4572B13EE70C8F52(iParam0), iParam2), func_391(unk_0x4572B13EE70C8F52(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_177(580, -1, 0);
		}
		if (func_221(1) && func_381(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xCDB410D37D2C68E8(unk_0xFB6B3EEFAB2DD12C(), func_390(Global_2501786));
		}
		else
		{
			unk_0xCDB410D37D2C68E8(iParam0, iParam1);
		}
		if (func_396())
		{
			unk_0xAE33F1085C476207(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_395())
		{
			unk_0xAE33F1085C476207(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x12A60388636C9B1C(unk_0x4572B13EE70C8F52(iParam0), 177, 1);
	}
}

bool func_381(int iParam0)
{
	return func_262(iParam0, 10);
}

void func_382(int iParam0, int iParam1)
{
	if (unk_0x1995B52453EF6537())
	{
		func_168(2034, iParam0, -1, 1, 0);
		unk_0xE9E427F922387CBF(unk_0xFB6B3EEFAB2DD12C(), 5, func_384(unk_0xD5A676B97920D126(), iParam0), func_383(unk_0xD5A676B97920D126(), iParam0), 0);
		func_389(unk_0xFB6B3EEFAB2DD12C(), iParam0);
		unk_0xE5B005FCCF6C5BC4(unk_0xFB6B3EEFAB2DD12C(), func_391(unk_0xD5A676B97920D126(), iParam0));
		if ((iParam1 && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126())) && unk_0x0DF5DCF0FB12F865(unk_0xD5A676B97920D126(), 5) != 0)
		{
			func_380(unk_0xFB6B3EEFAB2DD12C(), -1, -1);
		}
	}
}

int func_383(var uParam0, int iParam1)
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
	}
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

int func_384(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x0DF5DCF0FB12F865(uParam0, 11);
	if (unk_0x0DF5DCF0FB12F865(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	uVar3 = unk_0xD8929EE0B3130B33(iParam0, 8, unk_0x0DF5DCF0FB12F865(iParam0, 8), unk_0xF48FEED29B821958(iParam0, 8));
	if (unk_0xF4D25C5406BEFFD4(uVar3, joaat("OVER_JACKET"), 8))
	{
		return func_388(iParam0, iParam1);
	}
	iVar4 = 0;
	if (iParam1 > 61)
	{
		iVar4 = 50;
	}
	else if (iParam1 > 51)
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
		uVar5 = unk_0xD8929EE0B3130B33(iParam0, 11, iVar0, unk_0xF48FEED29B821958(iParam0, 11));
		if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_387(uVar5, 0);
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
						iVar0 = func_386(uVar5);
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
						iVar0 = func_386(uVar5);
						break;
					}
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_385(uVar5, 0);
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
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar4);
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
					iVar0 = func_386(uVar5);
					break;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0xF4D25C5406BEFFD4(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0xF4D25C5406BEFFD4(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0xF4D25C5406BEFFD4(uVar5, -1086258388, 0) || unk_0xF4D25C5406BEFFD4(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_0"), 0))
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
			else if (bVar1)
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_1"), 0))
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
				return (2 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_4"), 0))
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
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_388(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_3"), 0))
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
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_5"), 0))
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
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, -872449705, 0))
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
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_10"), 0))
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
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_15"), 0))
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
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, -102825006, 0))
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
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_19"), 0))
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
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_21"), 0))
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
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_22"), 0))
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
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return func_388(iParam0, iParam1);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return func_388(iParam0, iParam1);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, 970679185, 0))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_388(iParam0, iParam1);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1) + 15;
			}
			else
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1) + 15;
			}
			else
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_388(iParam0, iParam1) + 15;
			}
			else
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar4);
			}
			else
			{
				return func_388(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar4);
			}
			else
			{
				return (48 + iVar4);
			}
		}
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xF4D25C5406BEFFD4(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xF4D25C5406BEFFD4(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xF4D25C5406BEFFD4(uVar5, joaat("SILK_ROBE"), 0)) || unk_0xF4D25C5406BEFFD4(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_386(uVar5);
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

int func_385(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_386(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_387(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xF4D25C5406BEFFD4(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_388(var uParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_389(int iParam0, int iParam1)
{
	if (func_396())
	{
		if (iParam1 > 46)
		{
			unk_0x5B3DC7D0E735E70E(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x5B3DC7D0E735E70E(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x5B3DC7D0E735E70E(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x3DDA14BEE3AEA81B(iParam0);
		}
	}
	else if (func_395())
	{
		if (iParam1 > 0)
		{
			unk_0x5B3DC7D0E735E70E(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x3DDA14BEE3AEA81B(iParam0);
		}
	}
}

int func_390(var uParam0)
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

int func_391(var uParam0, int iParam1)
{
	return 0;
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_394(iParam0, iParam1);
	uVar2 = func_393(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x37F2E15EA03CDFFC(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_393(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_394(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

bool func_395()
{
	return unk_0xF14C5BAFFF8F4CB7(joaat("mppilot"));
}

bool func_396()
{
	return unk_0xF14C5BAFFF8F4CB7(joaat("mplts"));
}

int func_397(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_174(iParam0);
}

void func_398()
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
	
	if ((((!func_7(unk_0xFB6B3EEFAB2DD12C()) && !func_132(unk_0xFB6B3EEFAB2DD12C())) && !func_278()) && !func_406(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0)) && !func_405(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			bVar11 = func_5(Local_643.f_3);
			bVar12 = unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0);
			bVar13 = func_403();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_643.f_67[iVar4 /*2*/].f_1;
				if (unk_0x1B982A8B37108B3C(uVar14) && unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0) == unk_0xE95C934718B1A4FF(uVar14))
						{
							func_300(1);
						}
					}
					unk_0xB8A73E7DA87B2968(&uVar5, iVar4);
					if (bVar11 && func_38(Local_643.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(uVar14), 1) };
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
			if (func_39(Local_643.f_3))
			{
				unk_0xB8A73E7DA87B2968(&uVar5, 31);
			}
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_7 = uVar5;
			if (func_5(Local_643.f_3))
			{
				if ((unk_0x51D836BF46000450(unk_0xD5A676B97920D126()) || (unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126()) && !unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_643.f_3, iVar7, &Var0, &uVar3))
						{
							func_402(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
							func_401(Var0, 1, 0);
							func_400(10, 0, 0);
							unk_0xB8A73E7DA87B2968(&iLocal_334, 5);
						}
					}
				}
				else
				{
					func_399();
				}
			}
		}
	}
	else
	{
		func_399();
	}
}

void func_399()
{
	if (unk_0xF44A5E894FE76438(iLocal_334, 5))
	{
		func_140();
		func_138();
		unk_0x4EA098C870B73AB7(&iLocal_334, 5);
		func_137();
	}
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411314 = 0;
	}
	Global_2404994.f_477 = iParam0;
	Global_2404994.f_477.f_1 = unk_0x3ED6DDB11A7AD67F();
	Global_2404994.f_477.f_2 = iParam1;
	Global_2404994.f_477.f_3 = iParam2;
}

void func_401(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404994.f_43.f_49 = { Param0 };
	Global_2404994.f_43.f_52 = iParam3;
	Global_2404994.f_43.f_53 = iParam4;
}

void func_402(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x597C1E51157E5516(Global_2412527.f_6))
	{
		if (!Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
		{
			return;
		}
	}
	else
	{
		Global_2412527.f_6 = unk_0x3ED6DDB11A7AD67F();
	}
	Var0.f_6 = Global_2412527.f_6;
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
	if (func_341(unk_0xFB6B3EEFAB2DD12C()))
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
	Global_2412527 = { Var0 };
}

int func_403()
{
	if (((((func_404(unk_0xFB6B3EEFAB2DD12C()) || func_135()) || func_134()) || func_133(unk_0xFB6B3EEFAB2DD12C(), 21)) || func_8(unk_0xFB6B3EEFAB2DD12C())) || func_7(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 7);
	}
	return 0;
}

int func_405(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 14))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1589933[iParam0 /*601*/].f_257.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_408(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_259(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_407(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0)
{
	if (iParam0 != func_83())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_260(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_83())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_260(Global_2421621[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_409(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_423())
	{
		if (bParam1)
		{
			iVar0 = unk_0x1E7FB1CA38C403F6();
			if (func_81(unk_0xFB6B3EEFAB2DD12C()))
			{
				uVar1 = func_286();
				iVar2 = unk_0x61263E0F7C8C9996(uVar1);
				if (unk_0x1E0256D6F1052B31(iVar2))
				{
					iVar3 = unk_0xCA5CB25B27CC9477(iVar2);
					if (unk_0x28E01BEA13B73DF2(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_422())
				{
					switch (Local_643.f_3)
					{
						case 14:
							if (!func_326(iVar4) && !func_325(iVar4))
							{
								func_414("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_41())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x1B982A8B37108B3C(Local_643.f_67[iVar5 /*2*/].f_1)) && unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(Local_643.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x06F2E112EBC0C4FB(unk_0xE95C934718B1A4FF(Local_643.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x6901135DDCC4904D(uLocal_616[iVar5]))
				{
					uLocal_616[iVar5] = unk_0x890C68C377CE0CA4(unk_0x0DE80E23B2BD02BD(Local_643.f_67[iVar5 /*2*/].f_1));
					unk_0xD6507DB77BCBD904(uLocal_616[iVar5], func_413(iVar5));
					unk_0x0D792BA553E57B27(uLocal_616[iVar5], 9);
					unk_0x2EDAF851B28036F0(uLocal_616[iVar5], func_412(iVar5));
					func_410(&(uLocal_616[iVar5]), 9);
				}
				else if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					Var6 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_643.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x576211BDE434AC9A(uLocal_616[iVar5], 1);
					}
					else
					{
						unk_0x576211BDE434AC9A(uLocal_616[iVar5], 0);
					}
				}
			}
			else if (unk_0x6901135DDCC4904D(uLocal_616[iVar5]))
			{
				unk_0x8A3D7569826A325D(&(uLocal_616[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_410(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		uVar0 = func_411(iParam1);
		unk_0x4F095059F1C175D5(*uParam0, uVar0);
	}
}

int func_411(int iParam0)
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
	unk_0xC163336F8C5EA891(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_412(int iParam0)
{
	if (unk_0x4B09D3321F53E524(Local_643.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x825416FB822BF706(Local_643.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x7F132EC931B9581A(Local_643.f_67[iParam0 /*2*/]) && !unk_0xC6013041793781C6(Local_643.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_413(int iParam0)
{
	if (unk_0x4B09D3321F53E524(Local_643.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x825416FB822BF706(Local_643.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x7F132EC931B9581A(Local_643.f_67[iParam0 /*2*/]) && !unk_0xC6013041793781C6(Local_643.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_414(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xF44A5E894FE76438(Local_2827[iParam2 /*12*/].f_8[func_317(iParam3)], func_316(iParam3)) && !bParam1)
	{
		Var0 = { func_421(iParam3) };
		if (!unk_0x6901135DDCC4904D(uLocal_550[iParam3]))
		{
			if (!func_420(Var0, 0f, 0f, 0f, 0) && !func_420(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_550[iParam3] = unk_0x6678F4628618607C(Var0);
				unk_0x0D792BA553E57B27(uLocal_550[iParam3], 9);
				unk_0x2EDAF851B28036F0(uLocal_550[iParam3], sParam0);
				func_415(uLocal_550[iParam3], 25);
				func_410(&(uLocal_550[iParam3]), 12);
				unk_0x576211BDE434AC9A(uLocal_550[iParam3], 1);
			}
		}
		else if (unk_0x6AAF285DC78E0304())
		{
			unk_0x97C445677A852D45(uLocal_550[iParam3], 255);
		}
		else
		{
			func_415(uLocal_550[iParam3], 25);
		}
	}
	else if (unk_0x6901135DDCC4904D(uLocal_550[iParam3]))
	{
		unk_0x8A3D7569826A325D(&(uLocal_550[iParam3]));
		if (!bParam1)
		{
			unk_0xA93E75A5493862BD(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_415(var uParam0, int iParam1)
{
	unk_0x97C445677A852D45(uParam0, func_416(uParam0, iParam1));
}

int func_416(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_419(Global_2433082))
	{
		fVar0 = func_418(uParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_417();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_417()
{
	if (func_343(Global_2433082, 1))
	{
		return 50;
	}
	return 0;
}

float func_418(var uParam0, float fParam1, float fParam2)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	uVar0 = Global_2433082;
	Var2 = { unk_0xAEB3F4D3AF0E0C0B(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(uVar0), 0) };
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

int func_419(int iParam0)
{
	if ((unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_69.f_2, 15) && !(unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_69.f_2, 6) && unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_69.f_2, 7))) || ((unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_69.f_2, 6) && !unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_69.f_2, 7)) && !unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_69.f_2, 15)))
	{
		return 1;
	}
	return 0;
}

bool func_420(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_421(int iParam0)
{
	switch (Local_643.f_3)
	{
		case 14:
			return Local_354[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_422()
{
	switch (Local_643.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_423()
{
	switch (Local_643.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_424()
{
	switch (Local_643.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_425(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_277(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_186(sParam1))
	{
		sVar0 = sParam1;
	}
	func_113(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_426(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x0FBCE11007AF301F();
	return "HUD_STARTING";
	if (unk_0xCC257DA11A122B5F(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_challenges"))
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
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_427(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_428(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x758A470BA92498EA())
	{
		Global_2494149.f_4608 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xF44A5E894FE76438(Global_2494149.f_4608, 1))
		{
			unk_0xA93E75A5493862BD(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2494149.f_4608 = 0;
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4608), 1);
		}
	}
}

int func_429(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0);
		}
		else
		{
			return unk_0x05E1706E4465DAA5(unk_0x8D8F7D01F0EB4218(), *uParam0);
		}
	}
	return unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0);
}

void func_430(int iParam0)
{
	if (!unk_0x656CD02142B72C18() && !unk_0x7E3640C27B17457C())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if (!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67())
					{
						if (func_5(Local_643.f_3))
						{
							if (Local_643.f_3 == 12)
							{
								func_256("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_256("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_643.f_3))
						{
							func_256("AMCH_BIKEAV", 30000);
						}
						func_255(1);
						unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if (!unk_0x6AAF285DC78E0304())
					{
						func_256("AMCH_BLOW", 30000);
						func_255(1);
						unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if (!unk_0x6AAF285DC78E0304() && !func_435(62))
					{
						switch (Local_643.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									if (unk_0x51D836BF46000450(unk_0xD5A676B97920D126()))
									{
										func_256("AMCH_ALTI", 30000);
										func_255(1);
										unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_NMIS", 30000);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_FRFALL", -1);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_PVPO1", -1);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_PVPO2", -1);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_WHEELIE", 30000);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_STOPPIE", 30000);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_LFALL", 30000);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_LPARA", 30000);
									func_255(1);
									unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if ((!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67()) && !func_435(62))
					{
						switch (Local_643.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									if (unk_0x51D836BF46000450(unk_0xD5A676B97920D126()))
									{
										if (func_1(&uLocal_328, 1000, 0))
										{
											func_256("AMCH_OCEAN", 30000);
											func_255(1);
											func_44(&uLocal_328);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if (!unk_0x6AAF285DC78E0304() && !func_435(62))
					{
						switch (Local_643.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									if (unk_0x51D836BF46000450(unk_0xD5A676B97920D126()))
									{
										if (func_419(unk_0xFB6B3EEFAB2DD12C()) && !func_432(unk_0xFB6B3EEFAB2DD12C()))
										{
											func_256("AMCH_ALTIEXP", 30000);
											func_255(1);
											unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if ((!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67()) && !func_435(62))
					{
						if (func_1(&uLocal_328, 1000, 0))
						{
							func_256("AMCH_FLYLOW", 30000);
							func_255(1);
							func_44(&uLocal_328);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if (Local_643.f_3 == 7)
					{
						if (iLocal_628 == 0)
						{
							if ((!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67()) && !func_435(62))
							{
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_MVS1", 30000);
									func_255(1);
									iLocal_628 = 1;
								}
							}
						}
						else if ((!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67()) && !func_435(62))
						{
							if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
							{
								func_256("AMCH_MVS2", 30000);
								func_255(1);
								unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
							}
						}
					}
					if (Local_643.f_3 == 14)
					{
						if (iLocal_628 == 0)
						{
							if ((!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67()) && !func_435(62))
							{
								if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
								{
									func_256("AMCH_BRBL", 30000);
									func_255(1);
									iLocal_628 = 1;
								}
							}
						}
						else if ((!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67()) && !func_435(62))
						{
							if (func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
							{
								func_256("AMCH_BRBL2", 30000);
								func_255(1);
								unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xF44A5E894FE76438(iLocal_627, iParam0))
				{
					if (!unk_0x6AAF285DC78E0304() && !unk_0xA14FC57CB26C2B67())
					{
						func_431("AMCH_WARN", func_348(Local_643.f_3), func_347(Local_643.f_3), 30000);
						func_255(0);
						Local_3212.f_8 = unk_0x632066A9E8CB2C4D();
						unk_0xA93E75A5493862BD(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xB8A73E7DA87B2968(&iLocal_627, iParam0);
					}
				}
				break;
			}
	}
}

void func_431(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0xB1953EBEF4D6BD85(sParam1);
	unk_0xB1953EBEF4D6BD85(sParam2);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam3);
}

bool func_432(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1352862.f_241.f_136[func_434(9) /*33*/][iParam0], func_433(9));
}

int func_433(int iParam0)
{
	return (iParam0 % 32);
}

int func_434(int iParam0)
{
	return (iParam0 / 32);
}

bool func_435(int iParam0)
{
	return Global_2433082.f_2199[0 /*76*/].f_1 == iParam0;
}

void func_436(int iParam0)
{
	Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_3 = iParam0;
}

void func_437(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 4);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 4);
	}
}

int func_438()
{
	if (func_133(unk_0xFB6B3EEFAB2DD12C(), 21))
	{
		return 0;
	}
	if (unk_0xF5C5C10402E12CCB())
	{
		return 0;
	}
	if (unk_0xA488C8C46BFD5A39())
	{
		return 0;
	}
	if (func_306(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_459())
	{
		return 0;
	}
	if (func_458(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_457())
	{
		return 0;
	}
	if (func_449(unk_0xFB6B3EEFAB2DD12C()) == 3)
	{
		return 0;
	}
	if (func_448(func_250()))
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (unk_0x8676DE83D4396C39())
	{
		return 0;
	}
	if (func_308(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!func_445())
	{
		return 0;
	}
	if (func_133(unk_0xFB6B3EEFAB2DD12C(), 0) || func_133(unk_0xFB6B3EEFAB2DD12C(), 3))
	{
		return 0;
	}
	if ((func_133(unk_0xFB6B3EEFAB2DD12C(), 12) || func_133(unk_0xFB6B3EEFAB2DD12C(), 14)) || func_133(unk_0xFB6B3EEFAB2DD12C(), 13))
	{
		return 0;
	}
	if (func_406(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_444(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_443())
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (func_442(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_441())
	{
		return 0;
	}
	if (func_439(unk_0xFB6B3EEFAB2DD12C()) && Global_1589609.f_170)
	{
		return 0;
	}
	return 1;
}

int func_439(int iParam0)
{
	if (func_440(Global_1589933[iParam0 /*601*/].f_257.f_15))
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_441()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_442(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_35;
}

bool func_443()
{
	return Global_91538.f_304 > 0;
}

bool func_444(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11);
}

int func_445()
{
	if (func_446() == 0)
	{
		return 1;
	}
	return 0;
}

int func_446()
{
	return Global_1312462.f_18;
}

bool func_447()
{
	return Global_1315229;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 99:
		case 100:
		case 101:
		case 102:
		case 89:
			return 1;
		
		default:
	}
	return 0;
}

int func_449(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_342(iParam0) && !func_8(iParam0)) && !unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8));
	bVar2 = func_456(iParam0);
	uVar3 = func_135();
	uVar4 = func_450();
	if ((bVar1 && (func_404(iParam0) || func_367(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_263(iParam0)) && !func_261(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2494149.f_4710.f_29 != iVar0)
	{
		Global_2494149.f_4710.f_29 = iVar0;
	}
	return iVar0;
}

int func_450()
{
	if ((func_262(unk_0xFB6B3EEFAB2DD12C(), 21) || func_262(unk_0xFB6B3EEFAB2DD12C(), 22)) || func_454())
	{
		return 1;
	}
	if (func_452())
	{
		func_451(22);
		return 1;
	}
	return 0;
}

void func_451(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

int func_452()
{
	if (func_264(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if ((func_135() && !func_134()) || func_133(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			return 1;
		}
		else
		{
			func_453(27);
		}
	}
	return 0;
}

void func_453(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

int func_454()
{
	return func_455(286, -1);
}

int func_455(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_173(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_456(int iParam0)
{
	return func_262(iParam0, 20);
}

bool func_457()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 5;
}

int func_458(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_264.f_4 != 0 || Global_2421621[iParam0 /*358*/].f_264.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_459()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
}

void func_460()
{
	func_461(&(Local_731.f_527), &Local_731, 23, &(Local_731.f_1), &(Local_731.f_110), Local_643.f_3, 0);
}

void func_461(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_572(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_570() || iParam2 == 24)
	{
		if (func_527(uParam1, iParam2, uParam3, Global_1574103, 0, func_573()))
		{
			func_526(1);
			if ((!func_525() && !func_524()) || unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
			{
				if (func_523())
				{
					func_522();
				}
				else
				{
					unk_0x8C8A1913314B5A90(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_521(1);
						Global_1574103 = 0;
						iVar54 = -1;
						if (Global_1574251 != 1)
						{
							func_520(uParam1);
							if (unk_0xF44A5E894FE76438(uParam3->f_33, 7))
							{
								unk_0x4EA098C870B73AB7(&(uParam3->f_33), 7);
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
								if (func_12(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((unk_0x1E8AEE4F02F8E526(iVar35, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar35 /*358*/].f_239 != -1) || func_519(iVar35))
										{
											iVar44 = iVar35;
											if (func_74(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_516(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_513(unk_0xFB6B3EEFAB2DD12C(), 0) && func_512(unk_0xFB6B3EEFAB2DD12C()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_511())
							{
								if (func_12(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
								}
								else
								{
									iVar35 = func_83();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_510(iVar35) && func_506(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
								Var38 = { func_501(iVar35) };
								if (iVar35 == unk_0xFB6B3EEFAB2DD12C())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x7746E8ACE891BFA4(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_107(iVar35) };
								iVar37 = func_495(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
								}
								Global_1574103++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_511())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_493(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_244(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_492(iVar35, 0);
								if (bVar34)
								{
									if (func_73(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_491(iParam5))
								{
									func_490(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_490(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xB8A73E7DA87B2968(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xF44A5E894FE76438(iVar49, iVar35))
							{
								iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							}
							else
							{
								iVar35 = func_83();
							}
							if (func_510(iVar35))
							{
								if (func_12(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
									Var38 = { func_501(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_107(iVar35) };
									iVar37 = func_495(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
									}
									Global_1574103++;
									iVar51 = func_492(iVar35, 1);
									if (bVar34)
									{
										if (func_73(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_474(iVar35, unk_0x7746E8ACE891BFA4(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							func_471(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_470();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 7))
						{
							func_469(uParam3, uParam1);
							func_468(uParam1, 0, 1);
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 7);
						}
						func_469(uParam3, uParam1);
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 11);
						}
						if (func_464(uParam3))
						{
							Global_1574251 = 1;
						}
						func_462(uParam3);
						if (Global_1574251 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574251 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x52622CA85B1C304B(*uParam1))
					{
						unk_0xCF1B9EC03D5AB61E(7);
						unk_0x733D2C5CCB2A212B(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xCF1B9EC03D5AB61E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_470();
			func_521(0);
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 7))
			{
				unk_0x4EA098C870B73AB7(&(uParam3->f_33), 7);
			}
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 10))
			{
				unk_0x4EA098C870B73AB7(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_462(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_463(0);
	}
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574251 != 2)
		{
			Global_1574251 = 2;
		}
	}
	else
	{
		switch (Global_1574251)
		{
			case 0:
				Global_1574251 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_464(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7A4693BB354F3CD3(uParam0->f_37);
	if (iVar15 != func_83() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_107(iVar15) };
		iVar1 = func_467(uParam0, uParam0->f_37);
		if (func_466(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_465(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_465(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_465(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_465(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x0661F477B16B2070(&Var2))
						{
							iVar16 = 1;
							func_465(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_465(uParam0, iVar0, 0);
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

void func_465(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_466(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5A7D76211B9373CD(&uParam0, 13);
}

var func_467(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_468(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3B6EF6403E3F1CAC(*uParam0, "COLLAPSE"))
	{
		unk_0x2C310F11D2096992(iParam1);
		unk_0xBBAAC5B2437ACF2A();
	}
	if (iParam2 == 1)
	{
		if (unk_0x3B6EF6403E3F1CAC(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

void func_469(var uParam0, var uParam1)
{
	if (!unk_0xF44A5E894FE76438(uParam0->f_33, 10))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam1, "SET_HIGHLIGHT");
		unk_0x1B215CC37BF52E79(uParam0->f_35);
		unk_0xBBAAC5B2437ACF2A();
		unk_0xB8A73E7DA87B2968(&(uParam0->f_33), 10);
	}
}

void func_470()
{
	if (Global_1574251 != 0)
	{
		Global_1574251 = 0;
	}
}

void func_471(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
		if (iVar2 != func_83())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_473(uParam0->f_38[iVar0 /*2*/], 0);
					func_472(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589933[iVar0 /*601*/].f_202.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_472(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		if (unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_ICON"))
		{
			unk_0x1B215CC37BF52E79(iParam1);
			unk_0x1B215CC37BF52E79(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1B215CC37BF52E79(iParam3);
			}
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

int func_473(int iParam0, bool bParam1)
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

void func_474(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_489() && iParam4 < func_488())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574251 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x3B6EF6403E3F1CAC(*uParam2, sVar1))
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_487("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(iParam10);
			}
			func_487(sParam1);
			unk_0x1B215CC37BF52E79(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_487("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(65);
			}
			unk_0x1B215CC37BF52E79(-1);
			func_487("");
			if (uParam3->f_108 == 6)
			{
				func_487("");
			}
			else
			{
				func_487(&sParam5);
			}
			func_479(uParam3, iParam0);
			unk_0x36BBBC81A4DEE44C(sParam9);
			unk_0x36BBBC81A4DEE44C(sParam9);
			if (func_478(uParam3))
			{
				func_477("DPAD_FRIEND");
			}
			else if (func_476(uParam3))
			{
				func_477("DPAD_FRIEND");
			}
			else if (func_475(uParam3))
			{
				func_477("DPAD_CREW");
			}
			else
			{
				func_477("");
			}
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

bool func_475(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 6);
}

bool func_476(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 5);
}

void func_477(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

int func_478(var uParam0)
{
	if (func_476(uParam0) && func_475(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_479(var uParam0, int iParam1)
{
	if (func_486(iParam1))
	{
		unk_0x1B215CC37BF52E79(121);
	}
	else if (func_483(iParam1))
	{
		unk_0x1B215CC37BF52E79(122);
	}
	else
	{
		if (func_480())
		{
			uParam0->f_36 = 0;
		}
		unk_0x2C310F11D2096992(uParam0->f_36);
	}
}

int func_480()
{
	if (unk_0x8676DE83D4396C39())
	{
		if (func_481() || func_75())
		{
			return 1;
		}
	}
	return 0;
}

bool func_481()
{
	if (unk_0x8676DE83D4396C39())
	{
		return func_75();
	}
	return func_482(Global_1632166.f_86360);
}

int func_482(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5054[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_483(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_484()) && func_218(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_484()
{
	if (func_342(unk_0xFB6B3EEFAB2DD12C()) || func_485())
	{
		return 0;
	}
	return 1;
}

int func_485()
{
	switch (func_512(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_486(int iParam0)
{
	if (func_480())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_74(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_484()) && func_220(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_487(char* sParam0)
{
	unk_0xDC0269D08B29626C(sParam0);
}

int func_488()
{
	int iVar0;
	
	if (Global_1574105)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_489()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574105)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_490(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_489() && iParam3 < func_488())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574251 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x52622CA85B1C304B(*uParam1))
		{
			if (unk_0x3B6EF6403E3F1CAC(*uParam1, sVar1))
			{
				unk_0x1B215CC37BF52E79(iParam3);
				if (unk_0xF44A5E894FE76438(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_487("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					func_477(sParam16);
				}
				else
				{
					func_487(&(uParam2->f_1));
				}
				unk_0x1B215CC37BF52E79(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_487("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1B215CC37BF52E79(iVar0);
				}
				else
				{
					unk_0x1B215CC37BF52E79(-1);
				}
				if (func_511())
				{
					func_487("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_ONE_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 5 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_ONE_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if ((uParam2->f_108 == 7 && !unk_0xC55B9553B3EDADE9(sParam16)) && !unk_0xC55B9553B3EDADE9(sParam17))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_TWO_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xB1953EBEF4D6BD85(sParam17);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 8 && !unk_0xC55B9553B3EDADE9(&(uParam2->f_104)))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x67B2488BFC4BE526(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xF99222307D7150A9(iParam10);
					}
					unk_0xB1953EBEF4D6BD85(&(uParam2->f_104));
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_CASH");
					unk_0x4A1042FFF3429779(iParam10, 1);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x0BBDB952BE56A9DF("FM_AE_CASH");
						unk_0x4A1042FFF3429779(iParam10, 1);
						unk_0xCB329F559FA7DCD0();
					}
					else
					{
						unk_0x0BBDB952BE56A9DF("FM_NG_CASH");
						unk_0x4A1042FFF3429779(iParam10, 1);
						unk_0xCB329F559FA7DCD0();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xC55B9553B3EDADE9(&(uParam2->f_104)))
					{
						func_477(&(uParam2->f_104));
					}
					else
					{
						func_487("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam14, 6);
					unk_0xCB329F559FA7DCD0();
				}
				else if (fParam13 != -1f)
				{
					unk_0x0BBDB952BE56A9DF("NUMBER");
					unk_0x67B2488BFC4BE526(fParam13, 1);
					unk_0xCB329F559FA7DCD0();
				}
				else if (iParam10 != -1)
				{
					unk_0x1B215CC37BF52E79(iParam10);
				}
				else
				{
					func_487("");
				}
				if (uParam2->f_108 == 6)
				{
					func_487("");
				}
				else
				{
					func_487(&sParam4);
				}
				func_479(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xC55B9553B3EDADE9(sParam8))
				{
					func_487("");
					func_487("");
				}
				else
				{
					unk_0x36BBBC81A4DEE44C(sParam8);
					unk_0x36BBBC81A4DEE44C(sParam8);
				}
				if (func_478(uParam2))
				{
					func_477("DPAD_FRIEND");
				}
				else if (func_476(uParam2))
				{
					func_477("DPAD_FRIEND");
				}
				else if (func_475(uParam2))
				{
					func_477("DPAD_CREW");
				}
				else
				{
					func_477("");
				}
				unk_0xBBAAC5B2437ACF2A();
			}
		}
	}
}

int func_491(int iParam0)
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

int func_492(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_342(iParam0)) && !func_456(iParam0))
	{
		iVar0 = func_55();
	}
	iVar1 = func_71(iParam0);
	if (!iVar1 == -1)
	{
		return func_69(iVar1);
	}
	return iVar0;
}

int func_493(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_494(iParam3))
	{
		*fParam1 = (func_246(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_491(iParam3))
	{
		*fParam1 = (func_246(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_494(int iParam0)
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

int func_495(int iParam0)
{
	int iVar0;
	
	iVar0 = func_498(iParam0);
	if (iVar0 == -1)
	{
		func_496(iParam0, 1);
		return 0;
	}
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_496(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_498(iParam0) != -1)
	{
		return;
	}
	if (Global_1363410)
	{
		if (iParam0 == Global_1363410.f_1)
		{
			return;
		}
	}
	if (func_497(iParam0))
	{
		return;
	}
	if (Global_1363448 >= 32)
	{
		return;
	}
	Global_1363415[Global_1363448] = iParam0;
	Global_1363448++;
	if (bParam1)
	{
	}
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363448)
	{
		if (Global_1363415[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1363408 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363408)
	{
		if (Global_1363247[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x23723A703C39388B(Global_1363247[iVar0 /*5*/].f_2) && unk_0x4636FE7BA67FB26C(Global_1363247[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_499(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_499(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1363408)
	{
		return;
	}
	if (unk_0x23723A703C39388B(Global_1363247[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1363247[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x48C5A96AE7C462A4(Global_1363247[iParam0 /*5*/].f_2), 64);
			unk_0x776A0FA6BC6101E2(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB8129A62F0984659(Global_1363247[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1363408)
	{
		Global_1363247[iVar32 /*5*/] = { Global_1363247[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_500(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_500(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_83();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

struct<4> func_501(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2482005 = { func_107(iParam0) };
		if (unk_0xF1A016B51831B87B())
		{
			if (func_466(Global_2482005))
			{
				if (!unk_0xD59699C2E1196EDA(&Global_2482005))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xDE49089F060E6818(0))
		{
			return Var0;
		}
		if (func_505(&Global_2482005))
		{
			Global_2481935 = { func_503(iParam0) };
			func_502(&Global_2481935, &Var0);
		}
	}
	return Var0;
}

void func_502(var uParam0, var uParam1)
{
	unk_0x80BC8B50E2E17138(uParam0, 35, uParam1);
}

struct<35> func_503(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_504(iParam0))
	{
		return Global_1315261[unk_0xFB6B3EEFAB2DD12C() /*35*/];
	}
	Var0 = { func_107(iParam0) };
	unk_0xF6955213DB8BD7D3(&Var13, 35, &Var0);
	return Var13;
}

int func_504(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	return 0;
}

int func_505(var uParam0)
{
	if (unk_0xC3BB749150EAA702())
	{
		if (unk_0x527DE7DC62A1D335() && unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_506(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_8(iParam0) || func_509(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_508(iParam0))
	{
		return 0;
	}
	if ((!func_507(iParam0) && Global_2421621[iParam0 /*358*/].f_239 == -1) && !func_519(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_507(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
		{
			if (unk_0x1E8AEE4F02F8E526(iParam0, unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_508(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 22);
}

int func_509(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10) || unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 9));
	}
	return 0;
}

int func_510(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_83())
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
		if (unk_0xF44A5E894FE76438(Global_1589933[iVar0 /*601*/].f_138, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_511()
{
	switch (func_512(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_284(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_456(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_512(unk_0xFB6B3EEFAB2DD12C()))
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

int func_512(int iParam0)
{
	if (func_264(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_513(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 && func_514(Global_1618089[iParam0 /*390*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1)
	{
		if (func_514(Global_1618089[iParam0 /*390*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_515(iParam0, 0);
	return 0;
}

int func_515(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_516(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((unk_0x1E8AEE4F02F8E526(iVar1, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar1 /*358*/].f_239 != -1) || func_519(iVar1))
				{
					if (func_517(iVar1, iParam1, 0))
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

int func_517(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_83())
	{
		if (!bParam2)
		{
			if (func_518(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1618089[iParam0 /*390*/].f_11 != func_83())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_518(int iParam0, int iParam1)
{
	if (iParam1 != func_83())
	{
		if (iParam0 != func_83())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 != func_83())
			{
				if (Global_1618089[iParam0 /*390*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_519(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187 != 0;
}

void func_520(var uParam0)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1B215CC37BF52E79(0);
		unk_0xBBAAC5B2437ACF2A();
	}
}

void func_521(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1352859.f_2 == 0)
		{
			Global_1352859.f_2 = 1;
		}
	}
	else if (Global_1352859.f_2 == 1)
	{
		Global_1352859.f_2 = 0;
	}
}

void func_522()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
	{
		if (func_265())
		{
			func_249();
		}
	}
}

int func_523()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0) && func_265())
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1) && func_265())
	{
		return 1;
	}
	return 0;
}

int func_524()
{
	if (func_265())
	{
		if (func_52(Global_2433082.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_525()
{
	if (func_265())
	{
		if (func_56(Global_2433082.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_526(int iParam0)
{
	Global_1352859.f_1 = Global_1352859;
	Global_1352859 = iParam0;
}

int func_527(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_569(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_568();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_567())
		{
			if (func_566() > 0 && Global_1574105)
			{
				unk_0xA770EE27D9D0EB36();
				unk_0x2B153364D0958759(fVar7);
				unk_0x7FE30C99EA3439F7(18);
				if (unk_0xA14FC57CB26C2B67())
				{
					unk_0xA295ADD103FF4641();
				}
				unk_0x7FE30C99EA3439F7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_557())
		{
			func_556(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
	{
		func_556(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_566() == 1)
		{
			func_555(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_556(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xA14FC57CB26C2B67())
		{
			unk_0xA295ADD103FF4641();
		}
		unk_0x7FE30C99EA3439F7(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_566() == 0 && !bParam5))
		{
			func_556(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_554();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0xA770EE27D9D0EB36();
				}
				unk_0x7FE30C99EA3439F7(18);
			}
			if (unk_0xF44A5E894FE76438(uParam2->f_33, 0))
			{
				Global_1574103 = uParam3;
				Global_1574102 = 1;
				unk_0x2B153364D0958759(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574104)
					{
						unk_0x4EA098C870B73AB7(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_554();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xA770EE27D9D0EB36();
					}
					unk_0x7FE30C99EA3439F7(18);
				}
				unk_0x2B153364D0958759(fVar7);
				if (func_555(bVar6, uParam0, 0))
				{
					func_520(uParam0);
					uVar4 = func_552(iParam1, &(Global_1632166.f_86367), bParam4);
					Var0 = { func_550(iParam1) };
					if (bParam4)
					{
						func_547(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_541(uParam0, func_544(uParam2), func_542(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_533(uParam0, func_535(), func_534(), -1);
					}
					else if (func_480())
					{
						uParam2->f_34 = Global_1574104;
						func_547(uParam0, uVar4, &Var0, 1, -1, Global_1574104, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574104;
						func_547(uParam0, uVar4, "", 0, -1, Global_1574104, 1);
					}
					else
					{
						iVar8 = func_528(iParam1);
						func_547(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xB8A73E7DA87B2968(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_532())
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
			if (func_531(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 20;
			}
			if (func_530(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_529(unk_0xFB6B3EEFAB2DD12C()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_529(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 4;
}

bool func_530(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

bool func_531(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_532()
{
	return Global_1632166.f_1 == 0;
}

void func_533(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(sParam2))
		{
			func_477(sParam1);
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_477("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_534()
{
	switch (func_512(unk_0xFB6B3EEFAB2DD12C()))
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

char* func_535()
{
	switch (func_512(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
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
			if (func_537())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_217(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_217(1))
			{
				return "PI_BIK_3_2";
			}
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
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_536(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_537()
{
	return (func_540() && func_538(func_539()));
}

int func_538(int iParam0)
{
	return func_220(iParam0, 1);
}

int func_539()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_34;
}

bool func_540()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148;
}

void func_541(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(uParam2))
		{
			func_477(uParam1);
		}
		else if (func_284(unk_0xFB6B3EEFAB2DD12C()) == 133)
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT_C");
			unk_0xB1953EBEF4D6BD85(uParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_477("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_542(var uParam0)
{
	int iVar0;
	
	iVar0 = func_284(unk_0xFB6B3EEFAB2DD12C());
	if (func_543())
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
			switch (func_283())
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

bool func_543()
{
	return Global_1589821;
}

char* func_544(var uParam0)
{
	int iVar0;
	
	iVar0 = func_284(unk_0xFB6B3EEFAB2DD12C());
	if (func_543())
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
			if (func_546() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_546() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_283())
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
			if (func_545() == 1)
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

int func_545()
{
	return Global_2494149.f_4695;
}

int func_546()
{
	if (func_284(unk_0xFB6B3EEFAB2DD12C()) == 132)
	{
		return Global_2494149.f_4690;
	}
	return -1;
}

void func_547(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_487(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0BBDB952BE56A9DF(uParam1);
			unk_0xF99222307D7150A9(iParam5);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_477(sParam1);
		}
		if (func_567() && iParam6)
		{
			if (func_549())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x0BBDB952BE56A9DF("LBD_DPD_CNT");
			unk_0xF99222307D7150A9(iVar0);
			unk_0xF99222307D7150A9(iVar1);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_477(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (func_548(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x1B215CC37BF52E79(166);
			}
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

int func_548(int iParam0)
{
	if (func_531(iParam0) || func_530(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_549()
{
	return Global_1574105;
}

struct<4> func_550(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_551(unk_0xFB6B3EEFAB2DD12C()) || func_529(unk_0xFB6B3EEFAB2DD12C()))
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
			StringIntConCat(&Var0, Global_1632166.f_27, 16);
			break;
	}
	if (func_480() && unk_0x8676DE83D4396C39())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1632166.f_27, 16);
	}
	return Var0;
}

bool func_551(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 5;
}

char* func_552(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17 && (!func_480() || unk_0xC55B9553B3EDADE9(uParam1)))
	{
		uVar0 = func_553();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1574269 == 0)
		{
			Global_1574269 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xC55B9553B3EDADE9(sParam1))
	{
		if (Global_1574269 == 1)
		{
			Global_1574269 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574269 == 0)
		{
			Global_1574269 = 1;
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
			case 22:
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

char* func_553()
{
	if (unk_0xBD65C65A1BA11C39())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x44CAB1624B5512D4())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9BA5A29B377A2B38())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x9E88D602288A3F67())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_554()
{
	Global_36680 = 1;
}

bool func_555(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x542F16A736FAC9A6("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x542F16A736FAC9A6("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x542F16A736FAC9A6("mp_matchmaking_card");
	}
	return unk_0x52622CA85B1C304B(*uParam1);
}

void func_556(var uParam0, var uParam1, bool bParam2)
{
	unk_0x4EA098C870B73AB7(&(uParam1->f_33), 7);
	Global_1574103 = 0;
	func_470();
	Global_1574102 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
		}
	}
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x4292FC2ED4EC4212(uParam0);
	}
	if (unk_0xF44A5E894FE76438(uParam1->f_33, 0))
	{
		unk_0x4EA098C870B73AB7(&(uParam1->f_33), 0);
	}
	unk_0x2B153364D0958759(0f);
}

int func_557()
{
	if (func_565())
	{
		return 0;
	}
	if (func_457())
	{
		return 0;
	}
	if (!func_563())
	{
		return 0;
	}
	if (!func_445())
	{
		return 0;
	}
	if (func_562(8, -1))
	{
		return 0;
	}
	if (func_566() == 2)
	{
		return 0;
	}
	if (Global_2494149.f_4407)
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	else if (!func_307(unk_0xFB6B3EEFAB2DD12C(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_561(1) || func_559(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (func_81(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (Global_1747156)
	{
		return 0;
	}
	if (func_558(0))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 4))
	{
		return 0;
	}
	return 1;
}

bool func_558(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_25, iParam0);
}

int func_559(bool bParam0)
{
	if (unk_0x9912A7A9E14E5DE4())
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (func_560(unk_0xD5A676B97920D126()))
			{
				if (unk_0xF334707DE9C8DE80(0, 25) || unk_0xF334707DE9C8DE80(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0xF334707DE9C8DE80(0, 19) || (!bParam0 && unk_0xD464BA52FA359903(0, 19)))
	{
		return 1;
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (((unk_0xF334707DE9C8DE80(0, 166) || unk_0xF334707DE9C8DE80(0, 167)) || unk_0xF334707DE9C8DE80(0, 168)) || unk_0xF334707DE9C8DE80(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD464BA52FA359903(0, 166) || unk_0xD464BA52FA359903(0, 167)) || unk_0xD464BA52FA359903(0, 168)) || unk_0xD464BA52FA359903(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	int iVar0;
	
	if (unk_0xC7E79C4D1964F968())
	{
		if (!unk_0x00B5B0B68211D89B(uParam0))
		{
			unk_0x2F29BEC857E6C0AC(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_561(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_562(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

int func_563()
{
	if (func_564())
	{
		return 1;
	}
	if (unk_0x7E3640C27B17457C())
	{
		return 0;
	}
	if (unk_0x83D6BCB493FCFCBA() || unk_0xF9B8AB338DC56ADD())
	{
		return 0;
	}
	if (unk_0xB518A6F4BD89B244())
	{
		return 0;
	}
	return 1;
}

bool func_564()
{
	return Global_1312434;
}

bool func_565()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_566()
{
	return Global_1352862.f_68;
}

int func_567()
{
	if (Global_1574104 > 16)
	{
		return 1;
	}
	return 0;
}

float func_568()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x67BF72803FFBF57D()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_569(int iParam0)
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

int func_570()
{
	if (func_573())
	{
		return 1;
	}
	if (func_7(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_543())
	{
		return 1;
	}
	if (func_342(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_284(unk_0xFB6B3EEFAB2DD12C()))
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
				if (!func_571(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_571(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_571(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_571(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 4);
}

int func_572(int iParam0)
{
	if ((iParam0 == 24 && func_342(unk_0xFB6B3EEFAB2DD12C())) && !func_456(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_264(unk_0xFB6B3EEFAB2DD12C(), 0) && func_456(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
		if (func_449(unk_0xFB6B3EEFAB2DD12C()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_573()
{
	if (func_574(unk_0xFB6B3EEFAB2DD12C()))
	{
		return Global_1318164;
	}
	return 0;
}

int func_574(int iParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x19239326F582A90C(iParam0);
		}
	}
	return 0;
}

void func_575()
{
	if (Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_3 == 3)
	{
		if (!unk_0xF44A5E894FE76438(iLocal_334, 8))
		{
			if ((!func_7(unk_0xFB6B3EEFAB2DD12C()) && !func_132(unk_0xFB6B3EEFAB2DD12C())) && !func_354(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_353();
			}
		}
		else if (!unk_0xF44A5E894FE76438(iLocal_334, 9))
		{
			if ((func_7(unk_0xFB6B3EEFAB2DD12C()) || func_132(unk_0xFB6B3EEFAB2DD12C())) || func_354(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0xC26D05E549C2EB21();
				Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4 = 0;
				unk_0xB8A73E7DA87B2968(&iLocal_334, 9);
			}
		}
	}
}

void func_576()
{
	int iVar0;
	
	if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iLocal_338)))
	{
		iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iLocal_338));
		if (unk_0x1E0256D6F1052B31(iVar0))
		{
			func_577(iVar0, 2);
		}
	}
	iLocal_338++;
	if (iLocal_338 >= unk_0x11B9E7FF50B2F4CC())
	{
		iLocal_338 = 0;
	}
}

void func_577(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1574332.f_18)))
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(Global_1574332.f_2, iParam0))
	{
		if (Global_1574332 < iParam1 && unk_0xF44A5E894FE76438(Global_1574332.f_1, 1))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 0);
			return;
		}
		if (Global_1574332 != 0)
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 1);
		}
		Global_1574332 = 0;
		Global_1574332.f_2 = 0;
	}
	unk_0xB8A73E7DA87B2968(&(Global_1574332.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_578(iParam0))
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
		Global_1574332++;
	}
}

bool func_578(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10);
}

void func_579(int iParam0, int iParam1)
{
	Local_2827[iParam0 /*12*/] = iParam1;
}

int func_580()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_731.f_527[iVar0 /*49*/].f_1 = func_83();
		iVar0++;
	}
	return 1;
}

int func_581()
{
	return Local_643.f_0;
}

int func_582(int iParam0)
{
	return Local_2827[iParam0 /*12*/];
}

void func_583()
{
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 6))
	{
		func_606();
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 6);
	}
	if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 7))
	{
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 4) || unk_0xF44A5E894FE76438(Global_1574332.f_1, 16))
		{
			if (((!unk_0x656CD02142B72C18() && !unk_0xA14FC57CB26C2B67()) && !func_265()) && func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 7);
				func_256("FME_PASINT", 30000);
				func_255(1);
			}
		}
		else if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 17))
		{
			if (func_135() && !func_134())
			{
				unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 17);
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 16);
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 23))
	{
		if (((((!unk_0x656CD02142B72C18() && !unk_0xF44A5E894FE76438(Global_2494149.f_743, 2)) && func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !Global_68127) && !Global_52999) && !unk_0xA14FC57CB26C2B67())
		{
			if (func_604())
			{
				func_256("AMEV_GA_RP", -1);
				if (func_512(unk_0xFB6B3EEFAB2DD12C()) != 200)
				{
					func_255(1);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 23);
			}
		}
	}
	if (unk_0x6AAF285DC78E0304() && unk_0xDEC2120B859399ED() == 15)
	{
		if (func_367(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!unk_0xF4B39D641249E260(1344549371))
			{
				unk_0x6BD2B140FA4718C1(1344549371);
			}
		}
		else if (unk_0xF4B39D641249E260(1344549371))
		{
			unk_0xE099CDF9EBC165A5(1344549371);
		}
	}
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 9))
	{
		if ((((!unk_0x656CD02142B72C18() && !unk_0xA14FC57CB26C2B67()) && !func_265()) && func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !func_133(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 9);
			func_603(0);
			func_256("FME_TBL00", -1);
			func_255(1);
		}
	}
	if (func_342(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 18))
		{
			if ((func_133(unk_0xFB6B3EEFAB2DD12C(), 21) && unk_0xF44A5E894FE76438(Global_1574332.f_1, 20)) && !unk_0xF44A5E894FE76438(Global_1574332.f_1, 19))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 18);
			}
		}
		else if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 18))
		{
			if (((((!unk_0x656CD02142B72C18() && !unk_0xA14FC57CB26C2B67()) && !func_265()) && func_12(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && unk_0x8AFBC859AA63D3D7()) && !Global_2494149.f_4704)
			{
				unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 18);
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 19);
				func_256("AMTT_RPAS", -1);
				func_255(1);
			}
		}
	}
	if (((((func_342(unk_0xFB6B3EEFAB2DD12C()) && !func_8(unk_0xFB6B3EEFAB2DD12C())) && func_284(unk_0xFB6B3EEFAB2DD12C()) != 146) && !func_7(unk_0xFB6B3EEFAB2DD12C())) && !func_132(unk_0xFB6B3EEFAB2DD12C())) && !func_593())
	{
		if (func_366(func_284(unk_0xFB6B3EEFAB2DD12C())))
		{
			unk_0x9915665260A3283D(unk_0xFB6B3EEFAB2DD12C());
		}
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 22))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 22);
		}
		if (func_404(unk_0xFB6B3EEFAB2DD12C()) || func_360())
		{
			if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 10))
			{
				if (func_592(func_284(unk_0xFB6B3EEFAB2DD12C())))
				{
					if (func_224(0) && !Global_2391043)
					{
						unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_364(1);
						unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 14);
					}
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 10);
			}
		}
		if (func_367(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 11))
			{
				if (!Global_91538.f_8)
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 12);
					func_362(1);
				}
				if (!func_591())
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 13);
					func_361();
				}
				if (!Global_2391043)
				{
					unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 14);
					if (func_224(0) && !Global_2391043)
					{
						unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 9);
					}
					func_364(1);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 11);
			}
		}
		else
		{
			func_589(0);
		}
	}
	else
	{
		func_589(1);
	}
	func_584();
	if (func_359(func_284(unk_0xFB6B3EEFAB2DD12C())) && !unk_0xF44A5E894FE76438(Global_1574332.f_1, 21))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 21);
	}
	if ((func_135() && !func_134()) || func_133(unk_0xFB6B3EEFAB2DD12C(), 21))
	{
		if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 10))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 10);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 10))
	{
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 10);
	}
}

void func_584()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_265())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_435(iVar2))
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
				if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 26))
				{
					unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 26);
				}
				func_585(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 26))
	{
		func_44(&(Global_1574332.f_22));
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 26);
	}
}

void func_585(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1574332.f_22)))
	{
		func_2(&(Global_1574332.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574332.f_22), iParam1, 0))
	{
		if (func_566() > 0)
		{
			func_588(iParam0);
			if (func_253("AMEV_LBD_HELP"))
			{
				unk_0x04890EB0282525A5(1);
			}
			func_44(&(Global_1574332.f_22));
		}
	}
	else
	{
		func_587(0);
		func_586();
	}
}

void func_586()
{
	Global_2494149.f_4394 = 0;
}

void func_587(int iParam0)
{
	Global_1352862.f_68 = iParam0;
}

void func_588(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_1 == iParam0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

void func_589(int iParam0)
{
	if ((unk_0xF44A5E894FE76438(Global_1574332.f_1, 11) || (unk_0xF44A5E894FE76438(Global_1574332.f_1, 10) && iParam0)) || (unk_0xF44A5E894FE76438(Global_1574332.f_1, 22) && iParam0))
	{
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 12))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 12);
			func_362(0);
		}
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 13))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 13);
			func_590();
		}
		if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 14) && !func_264(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 14);
			func_364(0);
		}
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 11);
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 10);
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 22);
	}
}

void func_590()
{
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4609), 0);
}

bool func_591()
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4609, 0);
}

int func_592(int iParam0)
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
			return func_367(unk_0xFB6B3EEFAB2DD12C());
		
		case 133:
			return (func_360() || func_5(func_283()));
		
		default:
	}
	return 0;
}

int func_593()
{
	if (((((((((func_602() || func_601()) || func_600()) || func_278()) || (func_599() && !unk_0x8676DE83D4396C39())) || (func_596() && !func_595())) || Global_2394682) || Global_2394682.f_1 != 0) || Global_2394755 != 0) || (func_594() == 2 && !unk_0x8676DE83D4396C39()))
	{
		return 1;
	}
	return 0;
}

int func_594()
{
	return Global_979732;
}

bool func_595()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 27);
}

int func_596()
{
	if (func_598() || func_597())
	{
		return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 == 8;
	}
	return 0;
}

var func_597()
{
	return Global_2443089.f_613;
}

bool func_598()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 11);
}

bool func_599()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 5);
}

bool func_600()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 2);
}

bool func_601()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 20);
}

bool func_602()
{
	return Global_2443089.f_577;
}

void func_603(int iParam0)
{
	int iVar0;
	
	iVar0 = func_177(2516, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 0))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 0);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 1))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 1);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 2))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 3))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 3);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 4))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 4);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 5))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 6))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 6);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 7))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 7);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 8))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xF44A5E894FE76438(iVar0, 9))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 9);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 10))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 10);
		}
		else if (!unk_0xF44A5E894FE76438(iVar0, 11))
		{
			unk_0xB8A73E7DA87B2968(&iVar0, 11);
		}
	}
	func_168(2516, iVar0, -1, 1, 0);
}

int func_604()
{
	int iVar0;
	
	if (!func_45(&(Global_1574332.f_15)))
	{
		func_2(&(Global_1574332.f_15), 0, 0);
		Global_1574332.f_17 = 0;
	}
	else if (func_1(&(Global_1574332.f_15), 1000, 0))
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(Global_1574332.f_17)))
		{
			iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Global_1574332.f_17));
			if (unk_0x1E0256D6F1052B31(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_605(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0xFB6B3EEFAB2DD12C()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574332.f_17++;
		if (Global_1574332.f_17 >= 32)
		{
			Global_1574332.f_17 = 0;
			func_44(&(Global_1574332.f_15));
		}
	}
	return 0;
}

int func_605(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312443 != 0)
	{
		return 0;
	}
	if (!func_172(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589933[iVar0 /*601*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_606()
{
	unk_0x028AA922F2B17B2A(5);
	func_608();
	unk_0xFA5E84DCAE200259(1f);
	unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 8);
	func_607();
}

void func_607()
{
	if (Global_1756720)
	{
		if (unk_0xF44A5E894FE76438(Global_1756721, 0))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 0);
		}
		if (unk_0xF44A5E894FE76438(Global_1756721, 1))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 1);
		}
		if (unk_0xF44A5E894FE76438(Global_1756721, 5))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 5);
		}
		if (unk_0xA9F93059DE95F096(-355737150))
		{
			unk_0x7E12E87285DA0A0B(-355737150, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-580979506))
		{
			unk_0x7E12E87285DA0A0B(-580979506, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1426452475))
		{
			unk_0x7E12E87285DA0A0B(-1426452475, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(745417724))
		{
			unk_0x7E12E87285DA0A0B(745417724, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1305304906))
		{
			unk_0x7E12E87285DA0A0B(-1305304906, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1543175077))
		{
			unk_0x7E12E87285DA0A0B(-1543175077, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-811770997))
		{
			unk_0x7E12E87285DA0A0B(-811770997, 1, 0, 0);
		}
		Global_1756721 = 0;
	}
	Global_1756720 = 0;
}

void func_608()
{
	if (unk_0x597C1E51157E5516(Global_2494149.f_4706))
	{
		if (!Global_2494149.f_4706 == unk_0x3ED6DDB11A7AD67F() && Global_2494149.f_4705 < 1f)
		{
			return;
		}
	}
	Global_2494149.f_4706 = -1;
	Global_2494149.f_4705 = 1f;
}

int func_609()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2494149.f_4607)
	{
		return 0;
	}
	if ((!func_45(&(Local_643.f_39)) && !func_45(&(Local_643.f_41))) && !func_45(&(Local_643.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x7414B386C0020BEC();
	if (func_45(&(Local_643.f_41)))
	{
		iVar0 = func_610(&uVar2, &(Local_643.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_643.f_39)))
	{
		iVar0 = func_610(&uVar2, &(Local_643.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_643.f_43)))
	{
		iVar0 = func_610(&uVar2, &(Local_643.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_610(var uParam0, var uParam1)
{
	return unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(*uParam0, *uParam1));
}

int func_611()
{
	if (func_612())
	{
		return 1;
	}
	return 0;
}

bool func_612()
{
	return Global_1574332.f_24;
}

int func_613()
{
	bool bVar0;
	var uVar1;
	
	func_617(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_616())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_615())
	{
		return 1;
	}
	if (func_614(157))
	{
		if (!func_602())
		{
			return 1;
		}
	}
	if (func_614(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_369() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_369()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_614(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_615()
{
	return Global_2452479;
}

bool func_616()
{
	return Global_2443089.f_572;
}

void func_617(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_618(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_618(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_619(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_619(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_620()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_621()
{
	int iVar0;
	
	if (func_613())
	{
		Local_3212.f_5 = 5;
	}
	else if (unk_0xF44A5E894FE76438(Local_643.f_2, 0))
	{
		Local_3212.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3212.f_5 = 1;
	}
	else
	{
		Local_3212.f_5 = 2;
	}
	Local_3212.f_0 = Local_643.f_52;
	Local_3212.f_1 = Local_643.f_53;
	Local_3212.f_4 = Local_643.f_66;
	Local_3212.f_3 = Local_643.f_51;
	Local_3212.f_10 = (unk_0x632066A9E8CB2C4D() - Local_3212.f_9);
	if (!Global_262145.f_10006)
	{
		if (Local_3212.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x1E7FB1CA38C403F6() != -1)
	{
		func_656(Local_3212, Local_643.f_3, Local_2827[unk_0x1E7FB1CA38C403F6() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xF44A5E894FE76438(iLocal_334, 4))
	{
		unk_0x91A6DE61891987F6(iLocal_342);
		unk_0x4EA098C870B73AB7(&iLocal_334, 4);
	}
	unk_0xE723055FBC256C26(iLocal_342);
	unk_0xE723055FBC256C26(iLocal_343);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xF44A5E894FE76438(iLocal_629, iVar0) && !unk_0xDE27719822608DA7(uLocal_630[iVar0]))
		{
			unk_0x91A6DE61891987F6(uLocal_630[iVar0]);
			unk_0xE723055FBC256C26(uLocal_630[iVar0]);
		}
		iVar0++;
	}
	func_350();
	func_409(1, 1);
	unk_0x47A28EEE8F051A15(0);
	func_437(0);
	func_357(Local_643.f_3, 0);
	func_622(133, 0, Local_643.f_37 == 6);
	func_356(23, 0);
	if (func_270() >= 0f)
	{
		unk_0x90F98B1B4CB48453(0f, 0);
	}
	if (!unk_0xF44A5E894FE76438(iLocal_334, 9))
	{
		unk_0xC26D05E549C2EB21();
	}
	unk_0x01DFCA3621B68C4A();
}

void func_622(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xFB6B3EEFAB2DD12C() != -1)
	{
		if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 13))
		{
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 13);
		}
		if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 14))
		{
			unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 14);
		}
	}
	if (unk_0xF44A5E894FE76438(Global_1574332.f_1, 21))
	{
		unk_0x4EA098C870B73AB7(&(Global_1574332.f_1), 21);
	}
	func_652();
	unk_0xFA320609400AECAE("DisableFlightMusic", 0);
	unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_651(func_284(unk_0xFB6B3EEFAB2DD12C()));
		func_356(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xFB6B3EEFAB2DD12C() != -1) && func_650(unk_0xFB6B3EEFAB2DD12C()) >= 12)
		{
			func_649(2528, -1);
			iVar1 = func_177(2528, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xB8A73E7DA87B2968(&Global_1574358, 5);
			}
		}
		func_648();
		func_647();
		func_646();
		if ((!func_263(unk_0xFB6B3EEFAB2DD12C()) && !func_261(unk_0xFB6B3EEFAB2DD12C())) && !func_645())
		{
			func_629();
		}
		func_628();
		if (!unk_0xF44A5E894FE76438(Global_1759239.f_3, 0) && !unk_0xF44A5E894FE76438(Global_1759239.f_3, 1))
		{
			func_606();
		}
		func_627();
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1647), 2);
		func_626();
		func_137();
	}
	if (unk_0xF4B39D641249E260(1344549371))
	{
		unk_0xE099CDF9EBC165A5(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xFB6B3EEFAB2DD12C() != -1 && !func_133(unk_0xFB6B3EEFAB2DD12C(), 21)) && !func_264(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			func_364(0);
			func_362(0);
			func_625();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2454635 = -1;
			func_46(26, -1);
		}
	}
	if (!func_623())
	{
		Global_2481896 = 1;
	}
}

int func_623()
{
	if (((!func_548(unk_0xFB6B3EEFAB2DD12C()) && !func_529(unk_0xFB6B3EEFAB2DD12C())) && func_284(unk_0xFB6B3EEFAB2DD12C()) != 146) && !func_624())
	{
		return 0;
	}
	return 1;
}

int func_624()
{
	if ((Global_1632166 == 0 && unk_0x8676DE83D4396C39()) && (((((((Global_1632166.f_5 != 0 || Global_1632166.f_105262 > 0) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 15)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 18)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 19)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 29)) || unk_0xF44A5E894FE76438(Global_1632166.f_4, 28)) || unk_0xF44A5E894FE76438(Global_1632166.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_625()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xF44A5E894FE76438(Global_2359719[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xF44A5E894FE76438(Global_2359719[iVar0 /*26*/].f_13, 26))
			{
				unk_0x4EA098C870B73AB7(&(Global_2359719[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_626()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4608, 1))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_4608), 1);
	}
	if (Global_2494149.f_4608 > 0)
	{
		unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_KILL");
		unk_0xC86A1E7DAC7A9357("FM_COUNTDOWN_30S_FIRA");
		unk_0xB3C38A4B84C152BF("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xE64FA07C00C340C6(1);
		Global_2494149.f_4608 = 0;
		unk_0xFA320609400AECAE("DisableFlightMusic", 0);
		unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
		unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
		if (!unk_0xCC257DA11A122B5F(unk_0x0FBCE11007AF301F(), "am_pi_menu"))
		{
			if (Global_2494149.f_4618 > -1)
			{
				unk_0xE723055FBC256C26(Global_2494149.f_4618);
				Global_2494149.f_4618 = -1;
			}
		}
	}
}

void func_627()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574332 = { Var0 };
}

void func_628()
{
	var uVar0;
	
	Global_1318164 = uVar0;
}

void func_629()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_24), &Global_2408525, 2);
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_26), &Global_2408527, 17);
	func_643();
	func_632(1, 1);
	func_630();
}

void func_630()
{
	func_631(0, 0);
}

void func_631(int iParam0, int iParam1)
{
	Global_2404994.f_22 = iParam0;
	Global_2404994.f_23 = iParam1;
}

void func_632(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_43), &Global_2408544, 312);
	}
	else
	{
		Global_2404994.f_43 = { Global_2408544 };
		Global_2404994.f_43.f_49 = { Global_2408544.f_49 };
		Global_2404994.f_43.f_52 = Global_2408544.f_52;
		Global_2404994.f_43.f_53 = Global_2408544.f_53;
	}
	if (bParam0)
	{
		func_642();
	}
	func_634(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_633(0);
	func_140();
}

void func_633(bool bParam0)
{
	if (bParam0)
	{
		Global_2404994.f_650 = 0;
	}
	else
	{
		Global_2404994.f_650 = 1;
	}
}

void func_634(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_641())
		{
			func_640();
		}
		Global_2404994.f_651.f_504 = iParam1;
		Global_2404994.f_651.f_505 = iParam2;
		Global_2404994.f_651.f_506 = iParam10;
		func_638();
		func_400(8, 0, 0);
		Global_2404994.f_651.f_507 = iParam11;
		Global_2404994.f_651.f_510 = iParam3;
		Global_2404994.f_651.f_511 = iParam4;
		Global_2404994.f_651.f_508 = iParam5;
		Global_2404994.f_651.f_509 = iParam6;
		Global_2404994.f_651.f_512 = iParam7;
		Global_2404994.f_651.f_513 = iParam8;
		Global_2404994.f_651.f_514 = iParam9;
		Global_2404994.f_1684 = 1;
	}
	else
	{
		func_635();
	}
}

void func_635()
{
	if (func_641() && !func_637())
	{
		func_640();
	}
	if (func_637())
	{
		func_636();
	}
	else
	{
		func_638();
		func_400(0, 0, 0);
		Global_2404994.f_1684 = 0;
		Global_2404994.f_1683 = 0;
	}
}

void func_636()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_651), &(Global_2404994.f_1167), 516);
	Global_2404994.f_477 = { Global_2404994.f_481 };
	if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		Global_2404994.f_1683 = 0;
	}
}

int func_637()
{
	if ((Global_2404994.f_1683 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_1167.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_1167.f_515))
	{
		return 1;
	}
	return 0;
}

void func_638()
{
	if (func_641() && !func_637())
	{
		func_640();
	}
	func_639();
	Global_2404994.f_651 = 0;
}

void func_639()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404994.f_651.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_640()
{
	if (func_637())
	{
		if (Global_2404994.f_651.f_515 == Global_2404994.f_1167.f_515)
		{
			return;
		}
	}
	if (!unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_1167), &(Global_2404994.f_651), 516);
		Global_2404994.f_481 = { Global_2404994.f_477 };
		Global_2404994.f_1683 = 1;
	}
}

int func_641()
{
	if ((Global_2404994.f_1684 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_651.f_515))
	{
		return 1;
	}
	return 0;
}

void func_642()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_355), &Global_2408856, 121);
}

void func_643()
{
	func_644();
	Global_2404994.f_1815 = 0;
}

void func_644()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404994.f_1816[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_645()
{
	return Global_1574250;
}

void func_646()
{
	Global_2494149.f_4609 = 0;
}

void func_647()
{
	if (unk_0xFB6B3EEFAB2DD12C() != -1)
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1 = 0;
	}
}

void func_648()
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	if (iVar0 != -1)
	{
		Global_1618089[iVar0 /*390*/] = -1;
	}
}

void func_649(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_177(iParam0, func_173(iParam1), 0);
	iVar0++;
	if (!func_176(iParam0))
	{
		func_168(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_169(iParam0, iVar0, iParam1, 1);
	}
}

int func_650(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_202.f_6;
}

int func_651(int iParam0)
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
			if (func_367(unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_652()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 3) || unk_0xF44A5E894FE76438(Global_2494149.f_1643, 4))
	{
		if (unk_0x7E3640C27B17457C() || unk_0x83D6BCB493FCFCBA())
		{
			unk_0xFF11D473E95357D3(800);
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 5))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1643), 5);
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 3))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1643), 3);
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_1643, 4))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_1643), 4);
	}
	func_655(0);
	func_654(0);
	func_653(0);
}

void func_653(int iParam0)
{
	if (Global_2494149.f_4382 != iParam0)
	{
		Global_2494149.f_4382 = iParam0;
	}
}

void func_654(bool bParam0)
{
	if (Global_2494149.f_4381 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2494149.f_4381 = bParam0;
	}
}

void func_655(int iParam0)
{
	if (Global_2494149.f_4379 != iParam0)
	{
		Global_2494149.f_4379 = iParam0;
	}
}

void func_656(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x0FBCE11007AF301F();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69697)
	{
		if (unk_0xCC257DA11A122B5F(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x55D673F2C6389CA9(&Var1);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x063620CE0DF0ACDE(&Var14);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xCD1C5170EB922466(&Var28);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x104294BE353DBC04(&Var52);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_penned_in"))
		{
			unk_0x5B6AA95767D66E0B(&Param0);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x2C5F4CE11C863CCC(&Var66);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x7AF2F3F8B0835B66(&Var79);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x1E2261C4792E9680(&Var93);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0xF1DE1E2C5E796822(&Var107);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x38A472D765D29912(&Var123);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x45255132548BC2AD(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x17DCA4E56B363B6D(&Var150);
			}
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x1E189F922BCD9849(&Var164);
		}
	}
}

int func_657(struct<20> Param0)
{
	func_666(func_667(Param0.f_0), Param0);
	unk_0x57BE47356663D94E(func_665(9));
	unk_0xF5116E26EBA83CA9(func_664(9));
	func_661(0, -1, 0);
	func_659(133);
	unk_0x1CB2FF4BC0AF8B2C(&Local_643, 88);
	unk_0x47DDB3A546F48091(&Local_2827, 385);
	if (!func_658())
	{
		func_621();
	}
	if (unk_0x04DE35D10A718EEF())
	{
		unk_0x87B63DFBDD3C9326(&(Local_643.f_52), &(Local_643.f_53));
	}
	Local_3212.f_2 = unk_0x38550DD9BFA5B08B();
	unk_0x7E85CEE862B85A74(0);
	return 1;
}

int func_658()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_616())
		{
			return 0;
		}
		if (func_614(155))
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

void func_659(int iParam0)
{
	func_627();
	func_660();
	func_646();
	Global_1574332.f_4 = iParam0;
	Global_1574332.f_5 = iParam0;
	func_374(iParam0, -1);
	func_27(&(Global_1574332.f_18), 0, 0);
	Global_2494149.f_4446 = 0;
	Global_2453539[0] = func_83();
	Global_2453539[1] = func_83();
	Global_2453539[2] = func_83();
	Global_2453539[3] = func_83();
	Global_2453539[4] = func_83();
	func_137();
	func_249();
	if (func_135() && !func_134())
	{
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 16);
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_1574332.f_1), 17);
	}
}

void func_660()
{
	var uVar0;
	
	Global_1574357 = uVar0;
}

int func_661(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_663();
			}
			else
			{
				return 0;
			}
		}
		if (!func_662())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_663();
					}
					else
					{
						return 0;
					}
				}
				if (func_616())
				{
					if (!bParam2)
					{
						func_663();
					}
					else
					{
						return 0;
					}
				}
				if (func_614(155))
				{
					if (!bParam2)
					{
						func_663();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_663();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_663();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_663();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_662()
{
	return Global_1315206;
}

void func_663()
{
	unk_0x01DFCA3621B68C4A();
}

int func_664(int iParam0)
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
		
		case 19:
			return 10;
		
		case 20:
			return 2;
		
		case 21:
			return 10;
		
		case 22:
			return 3;
		
		default:
	}
	return 0;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 1;
		
		case 20:
			return 26;
		
		case 21:
			return 0;
		
		case 22:
			return 8;
		
		default:
	}
	return 0;
}

void func_666(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_663();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_667(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}


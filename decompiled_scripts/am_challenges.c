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
	iLocal_342 = unk_0x2657E29E0DD8087E();
	iLocal_343 = unk_0x2657E29E0DD8087E();
	iLocal_344 = -1;
	iLocal_345 = -1;
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_651(ScriptParam_0))
		{
			func_615();
		}
	}
	while (true)
	{
		func_614();
		if (func_607() || func_605())
		{
			func_615();
		}
		if (func_603())
		{
			func_615();
		}
		func_577();
		switch (func_576(unk_0x1A9CF4D5D4E2F266()))
		{
			case 0:
				if (func_575() == 1)
				{
					if (func_574())
					{
						func_573(unk_0x1A9CF4D5D4E2F266(), 1);
					}
				}
				break;
			
			case 1:
				if (func_575() == 1)
				{
					func_107();
					func_97();
				}
				else if (func_575() == 3)
				{
					func_573(unk_0x1A9CF4D5D4E2F266(), 3);
				}
				break;
			
			case 3:
				func_615();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_575())
			{
				case 0:
					if (func_84())
					{
						func_83(1);
					}
					break;
				
				case 1:
					if (Local_643.f_37 == 6)
					{
						func_83(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_320, 1000, 0))
					{
						func_83(3);
					}
					break;
				
				case 3:
					func_615();
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
		{
			unk_0x88B0F0DC270164B7(&(Local_643.f_2), 0);
			Local_643.f_1 = unk_0x4B50AAB32FBE0483();
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
			if (func_1(&(Local_643.f_43), func_29(), 0) || unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_643.f_38 = unk_0x4B50AAB32FBE0483();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_643.f_39), func_28(0), 0) || unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
			{
				if (!unk_0x08BA6DD398CA197C(Local_643.f_2, 1))
				{
					Local_643.f_1 = unk_0x4B50AAB32FBE0483();
					unk_0x88B0F0DC270164B7(&(Local_643.f_2), 1);
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
		if (unk_0x3CF373660FCFAFCE(Local_643.f_67[iVar0 /*2*/].f_1) && !unk_0x912AD5A10E7633F0(unk_0x63CE7A3848B84093(Local_643.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0x08BA6DD398CA197C(Local_2827[iVar1 /*12*/].f_1, 1) || Local_2827[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0x08BA6DD398CA197C(Local_2827[iVar1 /*12*/].f_1, 0))
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(*iParam0));
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
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar2);
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
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
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
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			unk_0x88B0F0DC270164B7(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x08BA6DD398CA197C(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x88B0F0DC270164B7(&(Local_643.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
				if (unk_0xCB129F9A01D14082(iVar4) && !func_14(iVar4, 0))
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
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
		fVar0 = unk_0xBBDA792448DB5A89(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4);
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
			if (fVar0 >= Global_262145.f_9382)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_9383)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_9384)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_9385)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_9386)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_9387)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_9388 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_9389)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_9390)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_9391)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_9392)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_9393))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_9394))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_9506)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_9507)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_9397))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_9399))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_9400))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_9401))
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
		if (Local_643.f_4[iParam0] == unk_0x848AF823A8EA3C62() && func_21(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4, 0))
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
	if (!unk_0x08BA6DD398CA197C(Local_643.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_643.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_643.f_49++;
			unk_0x88B0F0DC270164B7(&(Local_643.f_48), iParam0);
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
	
	if (unk_0x08BA6DD398CA197C(Local_643.f_47, iParam0))
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
		unk_0x09C86C0C5CA26B1E(&(Local_643.f_48), iParam0);
		unk_0x09C86C0C5CA26B1E(&(Local_643.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0x08BA6DD398CA197C(Local_643.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_643.f_3)
	{
		case 0:
			return Global_262145.f_8705;
		
		case 8:
			return Global_262145.f_8706;
		
		case 3:
			return Global_262145.f_8707;
		
		case 1:
			return Global_262145.f_9492;
		
		case 6:
			return Global_262145.f_9493;
		
		case 10:
			return Global_262145.f_9495;
		
		case 11:
			return Global_262145.f_9497;
		
		case 12:
			return Global_262145.f_9498;
		
		case 15:
			return Global_262145.f_9502;
		
		case 16:
			return Global_262145.f_9503;
		
		case 17:
			return Global_262145.f_9504;
		
		case 18:
			return Global_262145.f_9505;
		
		case 13:
			return Global_262145.f_9496;
		
		case 14:
			return Global_262145.f_9499;
		
		case 2:
			return Global_262145.f_8709;
		
		case 7:
			return Global_262145.f_9494;
		
		case 9:
			return Global_262145.f_9500;
		
		case 5:
			return Global_262145.f_8710;
		
		case 4:
			return Global_262145.f_8708;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_9462;
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
			if (!unk_0x0E091C9F3918F674(Var0.f_1))
			{
				if (func_38(Local_643.f_3, iLocal_339, &Var2, &uVar5))
				{
					Local_643.f_55[iLocal_339] = func_34(iLocal_339);
					if (unk_0x08BA6DD398CA197C(Local_2827[Local_643.f_55[iLocal_339] /*12*/].f_2, iLocal_339))
					{
						if (func_33(&(Local_643.f_67[iLocal_339 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0))
						{
							unk_0x93399EEBD0090AD6(unk_0x63CE7A3848B84093(Local_643.f_67[iLocal_339 /*2*/].f_1), 1, 1);
							unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), 1);
							unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), 1);
							unk_0xCF3E72E81E9E1684(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), 0);
							func_32(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), 1);
							if (unk_0x71F81D3603710A43("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x71F81D3603710A43("MPBitset", 3))
							{
								if (unk_0x4184E6D274FCBFF1(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x96FB4818617F93B9(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), "MPBitset");
								}
								unk_0x88B0F0DC270164B7(&iVar6, 10);
								unk_0x88B0F0DC270164B7(&iVar6, 11);
								unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_339 /*2*/].f_1), "MPBitset", iVar6);
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
	
	if (unk_0x71F81D3603710A43("MPBitset", 3))
	{
		if (unk_0x4184E6D274FCBFF1(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x96FB4818617F93B9(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x88B0F0DC270164B7(&uVar0, 13);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&uVar0, 13);
		}
		unk_0xB6E7BA5C3025C547(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
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
		while (iVar0 <= (unk_0xE5697AB254094B0D() - 1))
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
			{
				iVar8 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
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
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

bool func_41()
{
	return (func_5(Local_643.f_3) || func_39(Local_643.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x6AC3C3A7CD358D90() < iParam0)
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
	if (func_45(&(Global_1573924.f_18)))
	{
		if (!func_1(&(Global_1573924.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1573924.f_18));
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
	if (iParam1 && unk_0x8BCACDC751B3961A() < iParam0)
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
	return unk_0x08BA6DD398CA197C(Global_1573924.f_1, 0);
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
			unk_0x9460FEB503073236(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x680A5FBB1F20F775(uVar1);
			if (unk_0x08BA6DD398CA197C(iVar0, iParam0))
			{
				unk_0x09C86C0C5CA26B1E(&iVar0, iParam0);
				unk_0x9460FEB503073236(iVar0, iParam1);
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
	uVar1 = unk_0x680A5FBB1F20F775(uVar0);
	return unk_0x08BA6DD398CA197C(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 2) && !func_8(unk_0x0C1D3C552325765B())) && !func_7(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x509383441597090D(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x509383441597090D(sParam1))
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
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
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
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_16);
	func_54(uParam0);
	if (func_53(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_52(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
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
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
		case 99:
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
	int iVar0;
	var uVar1;
	
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
	if (iParam1 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_79(unk_0x0C1D3C552325765B()) || (func_78() && func_77()))
	{
		uVar1 = func_76();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_12(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_75(iParam1, iParam0, 0);
							}
							else
							{
								return func_66(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_66(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_75(iParam1, iParam0, 0);
		}
		else
		{
			return func_66(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_66(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)
{
	return func_60(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_65(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
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
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
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
	if (func_62(Global_1626500.f_83867))
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
		if (iParam0 == Global_262145.f_7751[iVar0])
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_74(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_65(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_64(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_73(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
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
	
	if (iParam0 > -1)
	{
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
			}
		
		default:
	}
	return 1;
}

var func_68(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_69(int iParam0)
{
	if (!iParam0 == func_81())
	{
		if (func_71(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_70(int iParam0)
{
	if (iParam0 != func_81())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
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
	return Global_1614576[iParam0 /*324*/].f_10 != func_81();
}

int func_72(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_81())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
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
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
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
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_78()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_79(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_80())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
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
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

void func_83(int iParam0)
{
	Local_643.f_0 = iParam0;
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_643.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_643.f_39));
	func_89();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_643.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_85();
	}
	return 1;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_643.f_3))
		{
			Local_643.f_67[iVar0 /*2*/] = func_88();
		}
		else
		{
			Local_643.f_67[iVar0 /*2*/] = func_86();
		}
		iVar0++;
	}
}

int func_86()
{
	int iVar0;
	
	switch (Local_643.f_3)
	{
		case 12:
			return func_87();
			break;
	}
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 2);
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
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 2);
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
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 2);
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
	Local_643.f_3 = iVar0;
	func_90(func_92(133, iVar0, 0, 0));
}

void func_90(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 427;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam0;
	iVar3 = func_91(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
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
	
	iVar0[0] = Global_262145.f_9791;
	iVar0[1] = Global_262145.f_9464;
	iVar0[2] = Global_262145.f_9795;
	iVar0[3] = Global_262145.f_9793;
	iVar0[4] = Global_262145.f_9794;
	iVar0[5] = Global_262145.f_9796;
	iVar0[6] = Global_262145.f_9465;
	iVar0[7] = Global_262145.f_9466;
	iVar0[8] = Global_262145.f_9792;
	iVar0[9] = Global_262145.f_9472;
	iVar0[10] = Global_262145.f_9467;
	iVar0[11] = Global_262145.f_9469;
	iVar0[12] = Global_262145.f_9470;
	iVar0[13] = Global_262145.f_9468;
	iVar0[14] = Global_262145.f_9471;
	iVar0[15] = Global_262145.f_9474;
	iVar0[16] = Global_262145.f_9475;
	iVar0[17] = Global_262145.f_9476;
	iVar0[18] = Global_262145.f_9477;
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
	fVar22 = unk_0xF25F352E34274C58(0f, fVar20);
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
	while (iVar0 < 23)
	{
		if (iVar0 < Global_262145.f_6893)
		{
			if (Global_2466504.f_148[iVar0 /*2*/] == iVar1 && Global_2466504.f_148[iVar0 /*2*/].f_1 == func_92(iParam0, iParam1, iParam2, iParam3))
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
			return Global_262145.f_8699;
		
		case 1:
			return Global_262145.f_9478;
		
		case 6:
			return Global_262145.f_9479;
		
		case 7:
			return Global_262145.f_9480;
		
		case 8:
			return Global_262145.f_8700;
		
		case 3:
			return Global_262145.f_8701;
		
		case 4:
			return Global_262145.f_8702;
		
		case 2:
			return Global_262145.f_8703;
		
		case 5:
			return Global_262145.f_8704;
		
		case 9:
			return Global_262145.f_9486;
		
		case 10:
			return Global_262145.f_9481;
		
		case 11:
			return Global_262145.f_9483;
		
		case 12:
			return Global_262145.f_9484;
		
		case 15:
			return Global_262145.f_9488;
		
		case 16:
			return Global_262145.f_9489;
		
		case 17:
			return Global_262145.f_9490;
		
		case 18:
			return Global_262145.f_9491;
		
		case 13:
			return Global_262145.f_9482;
		
		case 14:
			return Global_262145.f_9485;
		
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
			if (Local_643.f_55[iVar0] == unk_0x848AF823A8EA3C62())
			{
				if (func_98(iVar0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_2, iVar0))
					{
						unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_2, iVar0))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_2, iVar0))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_2), iVar0);
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
		if (func_99(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_102(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
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
	Global_2404993.f_2++;
	return 1;
}

int func_100(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_36(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_101(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
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
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_101(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_103(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_36(iVar1), Param0, 1) < fParam3)
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
	if (func_106(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_105(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_104(unk_0x0C1D3C552325765B(), iParam0))
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
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_105(iParam0) };
		Global_2471207 = { func_105(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
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
	
	func_570();
	func_569();
	if (func_567())
	{
		func_457();
	}
	if (!func_7(unk_0x0C1D3C552325765B()))
	{
		if (func_435())
		{
			if (unk_0x08BA6DD398CA197C(iLocal_334, 6))
			{
				unk_0x09C86C0C5CA26B1E(&iLocal_334, 6);
			}
			switch (Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_3)
			{
				case 0:
					if (Local_643.f_37 < 2)
					{
						if (Local_643.f_37 > 0)
						{
							if (Local_643.f_3 != -1)
							{
								func_434(1);
								func_433(1);
							}
						}
					}
					else
					{
						func_433(2);
					}
					break;
				
				case 1:
					func_427(9);
					if (Local_3212.f_8 == 0)
					{
						Local_3212.f_8 = unk_0x39E54E7BC7452169();
					}
					if (Local_643.f_37 >= 2)
					{
						func_433(2);
						Local_3212.f_9 = unk_0x39E54E7BC7452169();
					}
					if (func_41())
					{
						func_427(0);
					}
					func_425((func_29() - func_426(&(Local_643.f_43), 0, 0)));
					func_422(func_424((func_29() - func_426(&(Local_643.f_43), 0, 0)), 0), func_423(Local_643.f_3));
					func_406(0, func_421());
					func_396();
					func_376();
					if (func_375())
					{
						func_374();
					}
					break;
				
				case 2:
					if (Local_643.f_37 > 2)
					{
						func_434(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_373())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_356(133, fVar0, fVar1, 0, 0, 0, 0);
						func_355(Local_643.f_3, 1);
						func_354(23, 1);
						if (Local_3212.f_8 == 0)
						{
							Local_3212.f_8 = unk_0x39E54E7BC7452169();
						}
						if (Local_3212.f_9 == 0)
						{
							Local_3212.f_9 = unk_0x39E54E7BC7452169();
						}
						func_350();
						unk_0xE050CF22CA4ED644(1);
						if (func_373())
						{
							unk_0xACD6D334FD769B0C(0f);
							unk_0xCF03D9C8A7F1577C(0);
						}
						if (Local_643.f_3 == 14)
						{
							func_349(&Local_354);
						}
						func_348();
						if (!func_7(unk_0x0C1D3C552325765B()))
						{
							func_50(62, "AMCH_STARTED", func_347(Local_643.f_3), func_55(), -1, func_55());
							if (func_344("AMCH_WARN", func_346(Local_643.f_3), func_345(Local_643.f_3)))
							{
								unk_0x94724F7C938EBE34(1);
							}
						}
						if (func_41())
						{
							func_328(678f, 794f, 206f, 8f, 0);
							func_328(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_328(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_433(3);
					}
					break;
				
				case 3:
					if (Local_643.f_37 > 3)
					{
						iLocal_336 = 0;
						func_433(4);
					}
					else
					{
						if (!unk_0x08BA6DD398CA197C(Local_643.f_2, 1))
						{
							func_294();
							func_291();
							func_290();
						}
						if (func_289(0) && !func_20(0))
						{
							func_288();
						}
					}
					if (func_373())
					{
						unk_0xFE110F7E7B5A77FB(unk_0x0C1D3C552325765B());
					}
					func_287();
					func_264();
					func_457();
					func_406(0, 1);
					func_396();
					func_376();
					func_427(2);
					func_427(5);
					func_427(7);
					break;
				
				case 4:
					if (func_250(&uLocal_346, !unk_0x08BA6DD398CA197C(Local_643.f_2, 0)) || unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
					{
						if (func_5(Local_643.f_3))
						{
							if (Local_643.f_37 == 5)
							{
								func_433(5);
							}
						}
						else
						{
							func_433(6);
						}
					}
					func_237();
					func_139();
					func_264();
					func_457();
					func_406(1, 1);
					func_348();
					break;
				
				case 5:
					if (Local_643.f_37 > 5)
					{
						func_433(6);
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
		Var0 = { Local_643.f_67[iLocal_353 /*2*/] };
		if (unk_0x0E091C9F3918F674(Var0.f_1))
		{
			iVar2 = unk_0x15F0E6D5AC2852F1(Var0.f_1);
			if (unk_0x775F8FFC8E29F525(iVar2))
			{
				if (!unk_0x1F1B2B6E500380C5(iVar2, 0))
				{
					unk_0x615DE34FC732CF11(&iVar2);
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

void func_109()
{
	if (Local_643.f_37 == 5)
	{
		if (unk_0x0E091C9F3918F674(Local_643.f_67[iLocal_353 /*2*/].f_1))
		{
			if (!unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_353 /*2*/].f_1), 0))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_629, iLocal_353))
				{
					unk_0x88B0F0DC270164B7(&iLocal_629, iLocal_353);
					uLocal_630[iLocal_353] = unk_0x2657E29E0DD8087E();
					unk_0x7DEFCA77DEA2C174(uLocal_630[iLocal_353], "Explosion_Countdown", unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_353 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x86F350F5CCA04497(uLocal_630[iLocal_353], "Time", 30f);
				}
				if ((30000 - func_426(&(Local_643.f_45), 0, 0)) >= 0)
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_353 /*2*/].f_1), 0))
					{
						func_427(1);
						iLocal_641 = 1;
					}
				}
				else if (unk_0xB480350E4250D92A(Local_643.f_67[iLocal_353 /*2*/].f_1))
				{
					unk_0x79EC9CA36480CB01(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_353 /*2*/].f_1));
					unk_0x8286505D1FF300DC(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iLocal_353 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0x08BA6DD398CA197C(iLocal_629, iLocal_353) && !unk_0x7DFD3CAC2CF49957(uLocal_630[iLocal_353]))
			{
				unk_0x15761381A3072BFA(uLocal_630[iLocal_353]);
			}
		}
		if (iLocal_642)
		{
			if (!func_79(unk_0x0C1D3C552325765B()))
			{
				func_111(func_424((30000 - func_426(&(Local_643.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_110();
			}
		}
	}
}

void func_110()
{
	Global_1344178.f_941 = 1;
}

void func_111(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
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
		Global_1344178.f_1 = 1;
		func_112(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_112(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_114()
{
	if (((func_12(unk_0x0C1D3C552325765B(), 1, 1) && !func_7(unk_0x0C1D3C552325765B())) && !func_130(unk_0x0C1D3C552325765B())) && func_435())
	{
		if (Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_3 == 1)
		{
			func_127(func_129(Local_643.f_3), func_346(Local_643.f_3), 0, 0);
		}
		else if (Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_3 == 3)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_334, 10))
			{
				func_115(func_345(Local_643.f_3), 0);
			}
			else
			{
				func_115("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_348();
		}
	}
	else
	{
		func_348();
	}
}

void func_115(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_125(sParam0))
	{
		return;
	}
	func_119();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_118();
	func_117(bParam1);
	func_116();
}

void func_116()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_118()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

void func_119()
{
	func_121();
	func_120(0);
}

void func_120(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
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

void func_121()
{
	if (!func_124())
	{
	}
	if (func_123())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_122();
		unk_0x953FDEB57BB0D276();
	}
}

void func_122()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_123()
{
	if (Global_1312571 == 20)
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
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_122();
	return unk_0x7A2AFC1B08BD3742();
}

bool func_125(char* sParam0)
{
	if (!func_123())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_126(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_126(char* sParam0)
{
	if (!func_123())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_127(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (func_128(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_119();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_118();
	func_117(bParam2);
	func_116();
	return 1;
}

bool func_128(char* sParam0, char* sParam1)
{
	if (!func_123())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

char* func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5())) || unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5())) || unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5())) || unk_0xA8023042566B2548(unk_0xA0081090911D13E5())) || unk_0x18BDDD7BAAC039DA(unk_0xA0081090911D13E5()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5())) || unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5())) || unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5())) || unk_0xA8023042566B2548(unk_0xA0081090911D13E5())) || unk_0x18BDDD7BAAC039DA(unk_0xA0081090911D13E5())) || unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
					iVar1 = unk_0x705BC1BB91F530B5(iVar0);
					if (unk_0xBFD32C1D4D54E09B(iVar1) && unk_0xC388189407833D70(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x39E8013F81E80F72(unk_0xA0081090911D13E5()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_sniperrifle"), 0) && !unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_heavysniper"), 0)) && !unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5())) || unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5())) || unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5())) || unk_0xA8023042566B2548(unk_0xA0081090911D13E5())) || unk_0x18BDDD7BAAC039DA(unk_0xA0081090911D13E5()))
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
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		if ((func_133() && !func_132()) || func_131(unk_0x0C1D3C552325765B(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1573924.f_13)))
		{
			if (!func_1(&(Global_1573924.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1573924.f_13));
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9);
}

bool func_131(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

bool func_132()
{
	return Global_1312412.f_1;
}

bool func_133()
{
	return Global_1312412;
}

void func_134()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_334, 6))
	{
		unk_0xED3BAEA4520667CF();
		func_406(1, 1);
		unk_0x15761381A3072BFA(iLocal_342);
		unk_0x09C86C0C5CA26B1E(&iLocal_334, 4);
		func_138();
		func_136();
		unk_0x92510317AEA86B4D(0f, 0);
		unk_0x88B0F0DC270164B7(&iLocal_334, 6);
		func_135();
	}
}

void func_135()
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_7 = 0;
}

void func_136()
{
	if (Global_2412480.f_6 == unk_0xEAE20F1125B83888())
	{
		func_137();
	}
}

void func_137()
{
	struct<25> Var0;
	
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412480 = { Var0 };
	Global_2412480.f_6 = -1;
}

void func_138()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_139()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1), 0);
			return;
		}
		if (func_130(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1), 0);
			return;
		}
		func_199(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3212.f_6 = (Local_3212.f_6 + iVar0);
			if (!Global_262145.f_9942)
			{
				func_198(10, Local_3212.f_6);
			}
			Global_2453923 = iVar0;
			if (func_197())
			{
				func_188(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x62EA9E19007EE5C6(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3212.f_7 = (Local_3212.f_7 + iVar1);
			func_187();
			func_140(0, unk_0xA0081090911D13E5(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1), 0);
	}
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_141(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_141(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_151(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_147(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_142(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_145(iParam0, 1) };
	if (iParam0 == func_144(unk_0xA0081090911D13E5()))
	{
		func_143(1);
	}
	func_147(Var0, iParam1, 0, sParam2, uParam3);
}

void func_143(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_144(int iParam0)
{
	return iParam0;
}

Vector3 func_145(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_146(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_146(int iParam0)
{
	return iParam0;
}

void func_147(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_150(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_149();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_148();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), uParam6);
		}
	}
}

int func_148()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_149()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_150(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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
	
	if (func_186(unk_0x0C1D3C552325765B()) || func_185(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
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
			func_173(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_162((func_172(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_173(1158, iVar1, -1);
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
				func_153((func_155(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_153((func_155(unk_0x0C1D3C552325765B()) + iParam6));
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
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_154(joaat("mpply_globalxp"), iParam0);
	}
}

void func_154(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_155(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_156(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
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
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_157(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_105(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_160(func_161(&Var0));
			if (iVar13 == 0)
			{
				func_159(&Global_1352222, iParam0);
				func_158(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_159(&Global_1352223, iParam0);
				func_158(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_159(&Global_1352224, iParam0);
				func_158(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_159(&Global_1352225, iParam0);
				func_158(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_159(&Global_1352226, iParam0);
				func_158(joaat("mpply_crew_local_xp_4"), Global_1352226);
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
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = uParam1;
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
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
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
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	if (func_183())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_171(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_171(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_170(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_168(iParam0, 1);
		}
		func_167(632, iParam0, -1, 1);
		func_166(633, func_168(iParam0, 1), -1, 1, 0);
		Global_1352337[func_171(-1)] = iParam0;
		func_163(7, 0);
	}
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_165(iParam0, iParam1))
	{
		iVar0 = func_164();
		Global_2451682[iVar0] = iParam0;
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
		if (Global_2451682[iVar1] == 0)
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

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_171(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_171(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_171(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_171(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_171(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_171(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_171(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_171(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_171(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_171(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_171(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_171(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_171(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_171(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_171(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_171(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_171(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_171(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_171(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_171(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_171(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_171(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_171(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_171(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_171(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_171(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_171(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_171(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_171(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_171(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_171(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_171(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_171(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_171(iParam2)] = iParam1;
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_172(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_171(-1)];
			}
			else if (func_170(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_171(-1)];
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
		func_166(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_167(iParam0, iVar0, iParam2, 1);
	}
}

int func_174(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
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
	uVar0 = Global_2491469[iParam0 /*3*/][func_171(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_65(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_106(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * (20f * Global_262145.f_4208)));
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_106(unk_0x0C1D3C552325765B(), iVar4))
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
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_179(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_106(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_177(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_177(*iParam1, 100) * (20f * Global_262145.f_4208)));
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
	
	if (unk_0x666918BF44D91346() != 3)
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
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_172(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_172(unk_0x0C1D3C552325765B());
		}
	}
	if (func_182(8000, 0, 0) > 0)
	{
		if (func_182(8000, 0, 0) < (iParam0 + func_172(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_182(8000, 0, 0) - func_172(unk_0x0C1D3C552325765B()));
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
	return Global_278713[iParam0];
}

int func_183()
{
	return 1;
}

int func_184(var uParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_185(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_186(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_187()
{
	Global_2453272 = 1;
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
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
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
		case 848090538:
		case -47546905:
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
		if (!unk_0xFCE85827D6C3F47A(func_16()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_196(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_195(1, iParam4);
			Global_2573371 = 0;
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
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
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
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_192(&(Global_2572880[iParam0 /*73*/]));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
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
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_196(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_197())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_197()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

void func_199(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x848AF823A8EA3C62(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_643.f_1 - iLocal_332)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_9877)
		{
			iVar1 = Global_262145.f_9877;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_236() * iVar1);
		*uParam1 = (func_235() * iVar1);
		fVar2 = func_234();
		if (fVar2 > 0f && !unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_233())
			{
				iVar3 = func_233();
			}
			iVar4 = Local_643.f_51;
			if (iVar4 > func_232())
			{
				iVar4 = func_232();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_225(func_231(), func_230(), iVar3, fVar2, func_229(), func_228(), func_227(), iVar4)) * Global_262145.f_9890)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_225(func_224(), func_223(), iVar3, fVar2, func_229(), func_228(), func_227(), iVar4)) * Global_262145.f_9891)));
		}
		else
		{
			func_221(1);
		}
	}
	else
	{
		func_221(0);
	}
	func_200(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_220())
		{
			if (func_219(0))
			{
				if (!func_215(0))
				{
					if (unk_0xCB129F9A01D14082(func_214()))
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
						func_211(&iVar0, 0);
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
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_202(iParam0));
	}
}

var func_202(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_58(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_209(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_205(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_205(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_208() || !unk_0x1504F110F2576375()) || !func_14(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_206(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_207(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_208()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
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

void func_211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_212(1);
	}
	else
	{
		iVar1 = func_212(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_212(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_213()
{
	return Global_262145.f_10821;
}

int func_214()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_215(bool bParam0)
{
	return func_216(unk_0x0C1D3C552325765B(), bParam0);
}

int func_216(int iParam0, bool bParam1)
{
	return func_217(iParam0, bParam1, 1);
}

int func_217(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_218(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_81() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	if (iParam0 != func_81())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_81())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_219(bool bParam0)
{
	return func_71(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_220()
{
	return func_72(unk_0x0C1D3C552325765B());
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		if (func_222(1))
		{
			unk_0x88B0F0DC270164B7(&Global_1573949, 1);
		}
	}
	else if (func_222(2))
	{
		unk_0x88B0F0DC270164B7(&Global_1573949, 2);
	}
}

int func_222(int iParam0)
{
	var uVar0;
	
	uVar0 = func_175(2514, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x08BA6DD398CA197C(uVar0, 0) && unk_0x08BA6DD398CA197C(iVar0, 1)) && unk_0x08BA6DD398CA197C(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x08BA6DD398CA197C(iVar0, 3) && unk_0x08BA6DD398CA197C(iVar0, 4)) && unk_0x08BA6DD398CA197C(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x08BA6DD398CA197C(iVar0, 6) && unk_0x08BA6DD398CA197C(iVar0, 7)) && unk_0x08BA6DD398CA197C(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x08BA6DD398CA197C(iVar0, 9) && unk_0x08BA6DD398CA197C(iVar0, 10)) && unk_0x08BA6DD398CA197C(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_223()
{
	return Global_262145.f_9378;
}

int func_224()
{
	return Global_262145.f_9376;
}

int func_225(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_226(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_226(int iParam0, int iParam1, int iParam2)
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

float func_227()
{
	return Global_262145.f_9381;
}

float func_228()
{
	return Global_262145.f_9380;
}

float func_229()
{
	return Global_262145.f_9379;
}

int func_230()
{
	return Global_262145.f_9377;
}

int func_231()
{
	return Global_262145.f_9375;
}

int func_232()
{
	return Global_262145.f_9783;
}

int func_233()
{
	return Global_262145.f_9782;
}

var func_234()
{
	if (func_20(0))
	{
		return Global_262145.f_9402;
	}
	if (func_20(1))
	{
		return Global_262145.f_9403;
	}
	if (func_20(2))
	{
		return Global_262145.f_9404;
	}
	return Global_262145.f_9405;
}

int func_235()
{
	return Global_262145.f_9374;
}

int func_236()
{
	return Global_262145.f_9373;
}

void func_237()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1, 1) && (func_249() || unk_0x08BA6DD398CA197C(Local_643.f_2, 0)))
	{
		if (func_56(func_248()))
		{
			func_247();
		}
		if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
			{
				if (func_289(0))
				{
					iVar2 = Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4;
					func_243(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_241(63, func_242(Local_643.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_346(Local_643.f_3), 1, 2);
						}
						else if (func_240())
						{
							func_241(68, func_242(Local_643.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_346(Local_643.f_3), 1, 2);
						}
						else
						{
							func_241(63, func_242(Local_643.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_346(Local_643.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_241(66, func_242(Local_643.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_346(Local_643.f_3), 1, 2);
						}
						else if (func_240())
						{
							func_241(74, func_242(Local_643.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_346(Local_643.f_3), 1, 2);
						}
						else
						{
							func_241(66, func_242(Local_643.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_346(Local_643.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_241(66, func_242(Local_643.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_346(Local_643.f_3), 1, 2);
						}
						else if (func_240())
						{
							func_241(74, func_242(Local_643.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_346(Local_643.f_3), 1, 2);
						}
						else
						{
							func_241(66, func_242(Local_643.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_346(Local_643.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0x81C7A2950EF11C8A(Local_643.f_4[0]);
						if (unk_0x1489FFC2CBA39486(uVar3))
						{
							iVar4 = unk_0xF3B8A064D228878B(iVar3);
							if (Local_2827[Local_643.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2827[Local_643.f_4[0] /*12*/].f_4;
							func_243(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_239(75, func_81(), func_242(Local_643.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_346(Local_643.f_3), -1, fVar1, 1, 2, unk_0xCF66111B26743875(iVar4));
							}
							else if (func_240())
							{
								func_239(76, func_81(), func_242(Local_643.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_346(Local_643.f_3), iVar0, -1082130432, 1, 2, unk_0xCF66111B26743875(iVar4));
							}
							else
							{
								func_239(75, func_81(), func_242(Local_643.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_346(Local_643.f_3), iVar0, -1082130432, 1, 2, unk_0xCF66111B26743875(iVar4));
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
			unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1), 1);
			func_238(133);
		}
	}
}

void func_238(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_239(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
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

int func_240()
{
	return 0;
}

int func_241(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_82(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_51(&Var0);
}

char* func_242(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xAE52C62FC0BBB14E())
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
			if (unk_0xAE52C62FC0BBB14E())
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

int func_243(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_244(Local_643.f_3, iParam2) / 10f);
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

float func_244(int iParam0, int iParam1)
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
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_246(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_245(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_245(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_246(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_247()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_248()
{
	return Global_2432628.f_2198[0 /*72*/].f_1;
}

bool func_249()
{
	return unk_0x08BA6DD398CA197C(Global_1573924.f_1, 25);
}

int func_250(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_263()) && !(func_262(unk_0x0C1D3C552325765B(), 0) && (func_261(unk_0x0C1D3C552325765B()) || func_259(unk_0x0C1D3C552325765B())))) && !func_257(unk_0x0C1D3C552325765B()))
	{
		func_256();
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
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 25);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_255(uParam0, 1);
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
				func_252();
				func_255(uParam0, 2);
			}
			break;
		
		case 2:
			func_252();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_251("AMEV_LBD_HELP"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_255(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				func_255(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			return 1;
	}
	return 0;
}

bool func_251(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_252()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_12(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF())
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_254("AMEV_LBD_HELP", -1);
			func_253(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_253(int iParam0)
{
	unk_0x65F5CA804AAEE6C3(3, 21, 200, 0, 0);
	if (iParam0 && !func_263())
	{
		unk_0xAB16AADE80707D47(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_254(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

void func_255(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_256()
{
	Global_2453273 = 1;
}

int func_257(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_258(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_258(int iParam0)
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

bool func_259(int iParam0)
{
	return func_260(iParam0, 19);
}

bool func_260(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

int func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_260(iParam0, 9);
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_263()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

void func_264()
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
		bVar21 = (func_286() && !func_79(unk_0x0C1D3C552325765B()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_81();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_643.f_4[iVar16] > -1)
			{
				uVar30 = unk_0x81C7A2950EF11C8A(Local_643.f_4[iVar16]);
				if (unk_0x1489FFC2CBA39486(uVar30))
				{
					iVar4 = unk_0xF3B8A064D228878B(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2827[Local_643.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_243(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2827[Local_643.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_219(1))
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
		iVar17 = unk_0x848AF823A8EA3C62();
		if (func_79(unk_0x0C1D3C552325765B()))
		{
			uVar31 = func_284();
			iVar32 = unk_0xA43666ACD375E339(uVar31);
			if (unk_0xCB129F9A01D14082(iVar32))
			{
				iVar33 = unk_0x9259DE19D910276C(iVar32);
				if (unk_0x1489FFC2CBA39486(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_243(&iVar13, &fVar18, iLocal_336, 1);
		func_243(&iVar14, &fVar19, Local_2827[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_426(&(Local_643.f_39), 0, 0);
		iVar15 = func_424(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_283(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0x08BA6DD398CA197C(iLocal_334, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_286() || Local_643.f_3 == 6)
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
			func_279(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_242(Local_643.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_280(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_240())
		{
			func_278(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_280(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_269(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_242(Local_643.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_280(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_265();
	}
}

void func_265()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_268();
	if (fVar0 >= 0f)
	{
		if (Local_643.f_37 == 3)
		{
			if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
			{
				if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()) || unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
				{
					iVar1 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0x1F1B2B6E500380C5(iVar1, 0))
					{
						func_267(iVar1, &fLocal_340);
						fVar2 = (fVar0 + fLocal_340);
						unk_0x92510317AEA86B4D(fVar2, 1);
						func_266(fVar0);
						return;
					}
				}
			}
		}
		if (func_251("AMCH_FLYLOW"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (unk_0x08BA6DD398CA197C(iLocal_334, 4))
		{
			unk_0x15761381A3072BFA(iLocal_342);
			unk_0x09C86C0C5CA26B1E(&iLocal_334, 4);
		}
		unk_0x92510317AEA86B4D(0f, 0);
	}
}

void func_266(float fParam0)
{
	float fVar0;
	
	if (unk_0xBD634181BAD4640A(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_427(6);
			if (!unk_0x08BA6DD398CA197C(iLocal_334, 4))
			{
				unk_0xAB16AADE80707D47(iLocal_342, "Altitude_Warning", "EXILE_1", 1);
				unk_0x88B0F0DC270164B7(&iLocal_334, 4);
			}
		}
		else
		{
			if (func_251("AMCH_FLYLOW"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			if (unk_0x08BA6DD398CA197C(iLocal_334, 4))
			{
				unk_0x15761381A3072BFA(iLocal_342);
				unk_0x09C86C0C5CA26B1E(&iLocal_334, 4);
			}
		}
	}
}

float func_267(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	unk_0x776447CD667051CD(Var1, uParam1, 1);
	unk_0x776447CD667051CD(Var1, &uVar4, 0);
	if (unk_0x7880C5588C743083())
	{
		func_427(3);
		unk_0x88B0F0DC270164B7(&iLocal_334, 10);
		func_27(&uLocal_330, 0, 0);
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_334, 10))
	{
		if (func_1(&uLocal_330, 2000, 0))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_334, 10);
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

float func_268()
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

void func_269(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_275(0) == 0)
	{
		return;
	}
	func_274();
	iVar1 = 0;
	if (((Global_2452809[0] != iParam0 || Global_2452809[1] != iParam1) || Global_2452809[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2452809[0] = iParam0;
	Global_2452809[1] = iParam1;
	Global_2452809[2] = iParam2;
	Global_2452809[3] = 0;
	Global_2452809[4] = 0;
	if (Global_2452809[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[0]);
			Global_2452815[0 /*16*/] = { func_273(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_270(iParam3, &(Global_2452815[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16);
		}
	}
	if (Global_2452809[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[1]);
			Global_2452815[1 /*16*/] = { func_273(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_270(iParam4, &(Global_2452815[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17);
		}
	}
	if (Global_2452809[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[2]);
			Global_2452815[2 /*16*/] = { func_273(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_270(iParam5, &(Global_2452815[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18);
		}
	}
	if (bParam12)
	{
		func_270(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x0C1D3C552325765B() != func_81())
			{
				if (func_130(unk_0x0C1D3C552325765B()) == 0)
				{
					func_270(iParam7, unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0x0C1D3C552325765B()) == 0)
			{
				func_270(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0x0C1D3C552325765B()) == 0)
			{
				func_270(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_110();
}

void func_270(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
		Global_1344178.f_1 = 1;
		func_112(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = fParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = iParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_272())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_271())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_271()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_272()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_273(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xFFC9DE7E93AEAE21("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_274()
{
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	Global_2453276 = 1;
}

int func_275(bool bParam0)
{
	if (func_277())
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x0C1D3C552325765B(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_276()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_277()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 12);
}

void func_278(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_275(0) == 0)
	{
		return;
	}
	func_274();
	iVar1 = 0;
	if (((Global_2452809[0] != iParam0 || Global_2452809[1] != iParam1) || Global_2452809[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2452809[0] = iParam0;
	Global_2452809[1] = iParam1;
	Global_2452809[2] = iParam2;
	Global_2452809[3] = 0;
	Global_2452809[4] = 0;
	if (Global_2452809[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[0]);
			Global_2452815[0 /*16*/] = { func_273(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_111(iParam3, &(Global_2452815[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_2452809[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[1]);
			Global_2452815[1 /*16*/] = { func_273(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_111(iParam4, &(Global_2452815[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_2452809[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[2]);
			Global_2452815[2 /*16*/] = { func_273(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_111(iParam5, &(Global_2452815[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_111(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x0C1D3C552325765B() != func_81())
			{
				if (func_130(unk_0x0C1D3C552325765B()) == 0)
				{
					func_111(iParam7, unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0x0C1D3C552325765B()) == 0)
			{
				func_111(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0x0C1D3C552325765B()) == 0)
			{
				func_111(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
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
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_110();
}

void func_279(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_275(0) == 0)
	{
		return;
	}
	func_274();
	iVar1 = 0;
	if (((Global_2452809[0] != iParam0 || Global_2452809[1] != iParam1) || Global_2452809[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2452809[0] = iParam0;
	Global_2452809[1] = iParam1;
	Global_2452809[2] = iParam2;
	Global_2452809[3] = 0;
	Global_2452809[4] = 0;
	if (Global_2452809[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[0]);
			Global_2452815[0 /*16*/] = { func_273(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_270(-1, &(Global_2452815[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16);
		}
	}
	if (Global_2452809[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[1]);
			Global_2452815[1 /*16*/] = { func_273(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_270(-1, &(Global_2452815[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17);
		}
	}
	if (Global_2452809[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xCF66111B26743875(Global_2452809[2]);
			Global_2452815[2 /*16*/] = { func_273(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_270(-1, &(Global_2452815[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18);
		}
	}
	if (bParam12)
	{
		func_270(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x0C1D3C552325765B() != func_81())
			{
				if (func_130(unk_0x0C1D3C552325765B()) == 0)
				{
					func_270(-1, unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0x0C1D3C552325765B()) == 0)
			{
				func_270(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0x0C1D3C552325765B()) == 0)
			{
				func_270(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
	if (iParam8 != -10)
	{
		func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_110();
}

char* func_280()
{
	return "HUD_COUNTDOWN";
	switch (func_282(unk_0x0C1D3C552325765B()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_281())
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

int func_281()
{
	if (func_282(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

void func_283(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x62E2FDDFDA7A731D())
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
		{
			if (!unk_0x509383441597090D(&(Global_2482149.f_4603)))
			{
				unk_0x59CA83A35E3F2FD3(&(Global_2482149.f_4603));
			}
			unk_0x5A6B86444D23FCA8(1);
			unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA");
			unk_0x7C1793252FA472B6("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x0756AF366187C194("DisableFlightMusic", 0);
			unk_0x0756AF366187C194("WantedMusicDisabled", 0);
			unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
			if (Global_2482149.f_4611 > -1)
			{
				unk_0xC8656944A36C8E78(Global_2482149.f_4611);
				Global_2482149.f_4611 = -1;
			}
			Global_2482149.f_4601 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
		{
			if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 4))
			{
				if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 2))
				{
					if (unk_0x9FB4AB85AEBEC9F4())
					{
						if ((!unk_0x28C1B9853548BD8E(unk_0x91715E28C0CEA779(unk_0x6327B643497275A6()), "OFF") && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)) && !unk_0x509383441597090D(&(Global_2482149.f_4603)))
						{
							StringCopy(&(Global_2482149.f_4603), "", 32);
							unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA");
							unk_0x7C1793252FA472B6("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x0756AF366187C194("DisableFlightMusic", 0);
							unk_0x0756AF366187C194("WantedMusicDisabled", 0);
							unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
							unk_0x5A6B86444D23FCA8(1);
							unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 2);
						}
					}
				}
				else if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 5))
				{
					unk_0x59CA83A35E3F2FD3("OFF");
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0xB49DAD10DC051295("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0xB49DAD10DC051295("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S");
				}
				unk_0xC94C39C53546E775("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 1);
			}
			else if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x77188BBB27D82F39() != 0)
					{
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && !unk_0xEE7660EB94DECD0D())
						{
							StringCopy(&(Global_2482149.f_4603), unk_0xC5291E6D40B33FC3(), 32);
							unk_0x59CA83A35E3F2FD3("OFF");
						}
						unk_0x5A6B86444D23FCA8(1);
						unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 3))
				{
					Global_2482149.f_4611 = unk_0x2657E29E0DD8087E();
					unk_0xAB16AADE80707D47(Global_2482149.f_4611, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
			{
				Global_2482149.f_4601 = 0;
				Global_2482149.f_4611 = -1;
				unk_0x27971883A8701E73("FM_COUNTDOWN_30S_KILL");
				unk_0x5A6B86444D23FCA8(0);
				unk_0xB49DAD10DC051295("FM_PRE_COUNTDOWN_30S");
				unk_0x0756AF366187C194("DisableFlightMusic", 1);
				unk_0x0756AF366187C194("WantedMusicDisabled", 1);
				unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 0);
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 2))
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 2);
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 5);
				}
				else
				{
					unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 5);
					unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 0))
		{
			Global_2482149.f_4601 = 0;
			Global_2482149.f_4611 = -1;
			unk_0x27971883A8701E73("FM_COUNTDOWN_30S_KILL");
			unk_0x5A6B86444D23FCA8(0);
			unk_0xB49DAD10DC051295("FM_PRE_COUNTDOWN_30S");
			unk_0x0756AF366187C194("DisableFlightMusic", 1);
			unk_0x0756AF366187C194("WantedMusicDisabled", 1);
			unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 0);
			if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 2);
				unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 5);
			}
			else
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 2);
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 5);
			}
		}
	}
}

var func_284()
{
	if (unk_0xD3FACCDA4D66AEAD(func_285()))
	{
		return func_285();
	}
	return func_76();
}

var func_285()
{
	return Global_2359301.f_3;
}

int func_286()
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

void func_287()
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
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		Local_731.f_527[iVar0 /*49*/] = { Var1 };
		Local_731.f_527[iVar0 /*49*/].f_1 = func_81();
		if (Local_643.f_4[iVar0] > -1)
		{
			uVar51 = unk_0x81C7A2950EF11C8A(Local_643.f_4[iVar0]);
			if (unk_0x1489FFC2CBA39486(uVar51))
			{
				iVar50 = unk_0xF3B8A064D228878B(iVar51);
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

void func_288()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 19);
}

int func_289(int iParam0)
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

void func_290()
{
}

void func_291()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_243(&iVar1, &fVar2, iLocal_336, 1);
	switch (Local_643.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_293(sVar0, fVar2 >= 70f);
			if (unk_0x6DEB8F88FFE09057(sVar0))
			{
				fVar2 = func_292(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xBBC594424F4175F1(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x375B71F83BFA7E89();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_293(sVar0, bVar3);
			if (unk_0x6DEB8F88FFE09057(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_292(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_292(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xBBC594424F4175F1(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_341 != iLocal_336)
			{
				if (iLocal_336 > 0)
				{
					unk_0xAB16AADE80707D47(iLocal_343, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x86F350F5CCA04497(iLocal_343, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xAB16AADE80707D47(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_341 = iLocal_336;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_334, 3))
		{
			if (func_215(1))
			{
				unk_0xAB16AADE80707D47(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xAB16AADE80707D47(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x88B0F0DC270164B7(&iLocal_334, 3);
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_334, 3))
	{
		if (func_215(1))
		{
			unk_0xAB16AADE80707D47(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xAB16AADE80707D47(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x09C86C0C5CA26B1E(&iLocal_334, 3);
	}
}

float func_292(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_293(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x6DEB8F88FFE09057(sParam0))
		{
			unk_0xC94C39C53546E775(sParam0);
		}
	}
	else if (unk_0x6DEB8F88FFE09057(sParam0))
	{
		unk_0x7C1793252FA472B6(sParam0);
	}
}

void func_294()
{
	int iVar0;
	
	if ((!func_130(unk_0x0C1D3C552325765B()) && !func_14(unk_0x0C1D3C552325765B(), 0)) && func_12(unk_0x0C1D3C552325765B(), 1, 1))
	{
		iVar0 = func_312();
		if (iVar0 != Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_333) || func_311(iVar0, iLocal_333))
			{
				if (!func_310() || func_1(&uLocal_322, 1000, 0))
				{
					func_27(&uLocal_322, 0, 0);
					iLocal_333 = iVar0;
					Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4 = iVar0;
					func_297();
					if (iLocal_332 == 0)
					{
						iLocal_332 = unk_0x4B50AAB32FBE0483();
					}
					if (Local_3212.f_11 == 0)
					{
						Local_3212.f_11 = unk_0x39E54E7BC7452169();
					}
				}
			}
		}
		iLocal_336 = func_295();
	}
}

int func_295()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_643.f_3)
	{
		case 0:
			fVar1 = unk_0x8E392E10131FB6AB();
			break;
		
		case 1:
			fVar1 = unk_0xD090C92DA1514408();
			break;
		
		case 2:
			fVar1 = unk_0x375B71F83BFA7E89();
			break;
		
		case 3:
			fVar1 = unk_0x4E0142C09A3C0D71();
			break;
		
		case 4:
			fVar1 = unk_0x12BD89E75D388B49();
			break;
		
		case 5:
			fVar1 = unk_0x4123C562B864DD78();
			break;
		
		case 8:
			iVar0 = unk_0xC961040E37091384();
			break;
		
		case 9:
			fVar1 = unk_0xEF2D80938703D0C6();
			break;
		
		case 11:
			fVar1 = unk_0xB318187878A43043();
			break;
		
		case 12:
			fVar1 = unk_0xB318187878A43043();
			break;
		
		case 13:
			fVar1 = unk_0xE310AE037B03DF82();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x9ABCEFB6E400C9FB(iVar0);
	func_296(&iVar2);
	if (iVar2 == iLocal_335)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_334, 1))
			{
				func_27(&uLocal_324, 0, 0);
				Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4.f_2 = func_426(&uLocal_324, 0, 0);
				unk_0x88B0F0DC270164B7(&iLocal_334, 1);
			}
			else if ((func_426(&uLocal_324, 0, 0) % 1000) == 0)
			{
				Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4.f_2 = func_426(&uLocal_324, 0, 0);
			}
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&iLocal_334, 1);
	}
	if ((func_21(iLocal_335, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_326, 2000, 0))
	{
		iVar2 = iLocal_335;
		unk_0x88B0F0DC270164B7(&iLocal_334, 2);
	}
	else
	{
		iLocal_335 = iVar2;
		func_44(&uLocal_326);
		unk_0x09C86C0C5CA26B1E(&iLocal_334, 2);
	}
	return iVar2;
}

void func_296(int iParam0)
{
	switch (Local_643.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if ((((unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()) || unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5())) || unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5())) || unk_0xA8023042566B2548(unk_0xA0081090911D13E5())) || unk_0x18BDDD7BAAC039DA(unk_0xA0081090911D13E5()))
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

void func_297()
{
	if (!unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1, 2))
	{
		unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_1), 2);
		func_298(1);
	}
}

void func_298(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_133())
		{
			func_303(0);
			func_302();
		}
		if (func_301(0))
		{
			uVar0 = func_175(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, 0);
			func_302();
		}
		if (func_301(func_300(func_282(unk_0x0C1D3C552325765B()))))
		{
			uVar0 = func_175(2460, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, func_300(func_282(unk_0x0C1D3C552325765B())));
			func_302();
		}
		if (func_299())
		{
			func_302();
		}
		if (func_282(unk_0x0C1D3C552325765B()) > -1)
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 7);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 7);
	}
}

int func_299()
{
	if (Global_2432628.f_654.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0)
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

bool func_301(int iParam0)
{
	var uVar0;
	
	uVar0 = func_175(2460, -1, 0);
	return unk_0x08BA6DD398CA197C(uVar0, iParam0);
}

void func_302()
{
	if (func_299())
	{
		Global_2432628.f_654.f_16 = 1;
	}
}

void func_303(int iParam0)
{
	if (func_133())
	{
		if (iParam0 == 1)
		{
			if (Global_2482149.f_4255 == -1)
			{
				Global_2482149.f_4255 = 60000;
			}
			func_27(&(Global_2482149.f_4253), 0, 0);
			if (Global_2482149.f_4258 == -1)
			{
				Global_2482149.f_4258 = 10000;
			}
			func_27(&(Global_2482149.f_4256), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_309(1);
		}
		if ((!unk_0x1504F110F2576375() && !func_308()) && !func_304(unk_0x0C1D3C552325765B()))
		{
			Global_978174 = 0;
		}
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_8 = 0;
	}
}

int func_304(int iParam0)
{
	if (func_305(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_306(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_306(int iParam0)
{
	return func_307(iParam0);
}

bool func_307(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_308()
{
	return Global_2442442.f_717;
}

void func_309(bool bParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_133())
		{
			if (func_12(unk_0x0C1D3C552325765B(), 1, 0))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 0);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 0);
			}
			unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 1f);
			unk_0x57FA95501E37763C(0);
			unk_0x83CDA1F1ADCD9582(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0x9066E5B82BC6B02C(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 0);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 1);
				unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0x9066E5B82BC6B02C(1, 0);
				}
			}
			unk_0x57FA95501E37763C(1);
			unk_0x83CDA1F1ADCD9582(0);
		}
	}
}

int func_310()
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

int func_311(int iParam0, int iParam1)
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

int func_312()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_327())
	{
		if (Local_643.f_3 == 14)
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && func_326(unk_0xA0081090911D13E5(), 0) == -1)
			{
				iVar2 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
				if ((!func_325(&iVar2, 0) || unk_0x705BC1BB91F530B5(iVar2) != joaat("dodo")) && unk_0x630BD2AFB0686BBA(iVar2))
				{
					func_318(Local_643.f_3 != 14, 1, 0);
					if (func_317())
					{
						iVar3 = func_316();
						if (iVar3 >= 0)
						{
							if (!unk_0x08BA6DD398CA197C(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_8[func_315(iVar3)], func_314(iVar3)))
							{
								iLocal_337++;
								unk_0x88B0F0DC270164B7(&(Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_8[func_315(iVar3)]), func_314(iVar3));
							}
						}
					}
					iVar0 = iLocal_337;
				}
			}
		}
		else
		{
			iVar0 = func_313();
		}
	}
	else
	{
		unk_0x964B2D00124A1A9F(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x9ABCEFB6E400C9FB(iVar0);
}

int func_313()
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

int func_314(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_315(iParam0) * 31);
}

int func_315(int iParam0)
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

int func_316()
{
	return iLocal_99;
}

int func_317()
{
	if (iLocal_106 == 1)
	{
		iLocal_106 = 0;
		return 1;
	}
	return 0;
}

void func_318(bool bParam0, bool bParam1, int iParam2)
{
	func_320(bParam0, iParam2);
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
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Local_110[iLocal_99 /*3*/]) < fLocal_306)
				{
					if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()) || unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
					{
						if (unk_0x1F1B2B6E500380C5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
						{
							if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0))
							{
								bLocal_101 = true;
								iLocal_100 = 1;
							}
							if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
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
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (!unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()) && !unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
				{
					func_319();
				}
				else if (!unk_0x1F1B2B6E500380C5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
				{
					func_319();
				}
				else if (!unk_0x630BD2AFB0686BBA(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)) && !bParam1)
				{
					func_319();
				}
				if (bLocal_101)
				{
					if (iLocal_105)
					{
						if (iLocal_104)
						{
							if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
							{
								func_319();
								iLocal_106 = 1;
							}
						}
						else if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							iLocal_104 = 1;
						}
						else if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							func_319();
						}
					}
					else if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						iLocal_105 = 1;
					}
					else if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						func_319();
					}
				}
				else if (bLocal_102)
				{
					if (iLocal_105)
					{
						if (iLocal_103)
						{
							if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
							{
								func_319();
								iLocal_106 = 1;
							}
						}
						else if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							iLocal_103 = 1;
						}
						else if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
						{
							func_319();
						}
					}
					else if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						iLocal_105 = 1;
					}
					else if (!unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_307, Local_310, fLocal_319, 0, 1, 0) && !unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Local_313, Local_316, fLocal_319, 0, 1, 0))
					{
						func_319();
					}
				}
			}
			break;
	}
}

void func_319()
{
	bLocal_101 = false;
	bLocal_102 = false;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_105 = 0;
	iLocal_100 = 0;
}

void func_320(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_107 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_324(iVar0)) && (uParam1 || !func_323(iVar0)))
		{
			if (func_322(Local_107, Local_110[iVar0 /*3*/], 100f, 0))
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
	func_321(iLocal_99);
}

void func_321(int iParam0)
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

int func_322(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7466327978A6A24C((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_323(int iParam0)
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

int func_324(int iParam0)
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

int func_325(var uParam0, int iParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(*uParam0, 0) || iParam1)
		{
			if (unk_0xB46E03E529421E99(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0x39FEE545B315414E(iParam0, iParam1))
		{
			iVar0 = unk_0xF8DB47D339B8B953(iParam0, iParam1);
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					iVar1 = unk_0xAF3D6F27CC1E594E(unk_0x705BC1BB91F530B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x6315EBE95A97CADF(iVar0, iVar3, 0))
						{
							if (unk_0x8FD32443A080784B(iVar0, iVar3, 0) == iParam0)
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

int func_327()
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

int func_328(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_343() < 10)
	{
		iVar0 = func_342();
		func_329(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_329(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_330(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_330(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_339(unk_0x0C1D3C552325765B()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_338(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_333(Var0))
		{
			Global_2404993.f_43.f_64 = func_332(unk_0x0C1D3C552325765B());
			func_331(Var0, iParam8);
		}
	}
}

void func_331(struct<12> Param0, int iParam12)
{
	Global_2404993.f_353[iParam12 /*12*/] = { Param0 };
	Global_2404993.f_353[iParam12 /*12*/].f_9 = 1;
}

int func_332(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

int func_333(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404993.f_43[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_334(Global_2404993.f_43[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_334(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_337(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_335(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_337(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_335(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_335(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_336(Param0, Param3, Var0, Var3);
}

int func_336(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_337(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_338(var uParam0, var uParam1)
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

int func_339(int iParam0)
{
	if ((func_341(iParam0, 1) || func_340(iParam0)) || func_262(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

bool func_341(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_332(iParam0) != 0;
	}
	return func_305(iParam0, bParam1);
}

int func_342()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404993.f_353[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_343()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404993.f_353[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_344(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xA277242E6FB38513(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0xBDE6EEC5F6BDC060(sParam2);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_345(int iParam0)
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

char* func_346(int iParam0)
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

char* func_347(int iParam0)
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

void func_348()
{
	if (!func_123())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_119();
}

void func_349(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_324(iVar0) && !func_323(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_110[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_350()
{
	if (!func_327())
	{
		if (Local_643.f_3 == 14)
		{
			func_353();
		}
		Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4.f_1 = func_313();
	}
	else if ((!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 4) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 5)) && !func_352(unk_0x0C1D3C552325765B()))
	{
		func_351();
	}
}

void func_351()
{
	switch (Local_643.f_3)
	{
		case 0:
			unk_0x97CDB26DF9BD6DF2(8, 2);
			break;
		
		case 1:
			unk_0x97CDB26DF9BD6DF2(13, 2);
			break;
		
		case 2:
			unk_0x97CDB26DF9BD6DF2(4, 2);
			break;
		
		case 4:
			unk_0x97CDB26DF9BD6DF2(1, 2);
			break;
		
		case 3:
			unk_0x97CDB26DF9BD6DF2(2, 2);
			break;
		
		case 5:
			unk_0x97CDB26DF9BD6DF2(3, 2);
			break;
		
		case 6:
			unk_0x97CDB26DF9BD6DF2(11, 3);
			break;
		
		case 7:
			unk_0x97CDB26DF9BD6DF2(14, 1);
			break;
		
		case 8:
			unk_0x97CDB26DF9BD6DF2(29, 2);
			break;
		
		case 9:
			unk_0x97CDB26DF9BD6DF2(12, 2);
			break;
		
		case 10:
			unk_0x97CDB26DF9BD6DF2(10, 2);
			break;
		
		case 11:
			unk_0x97CDB26DF9BD6DF2(18, 2);
			break;
		
		case 12:
			unk_0x97CDB26DF9BD6DF2(20, 2);
			break;
		
		case 13:
			unk_0x97CDB26DF9BD6DF2(27, 2);
			break;
		
		case 15:
			unk_0x97CDB26DF9BD6DF2(26, 1);
			break;
		
		case 16:
			unk_0x97CDB26DF9BD6DF2(25, 1);
			break;
		
		case 17:
			unk_0x97CDB26DF9BD6DF2(22, 1);
			break;
		
		case 18:
			unk_0x97CDB26DF9BD6DF2(24, 1);
			break;
	}
	unk_0x88B0F0DC270164B7(&iLocal_334, 8);
}

bool func_352(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_353()
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

void func_354(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
	}
}

void func_355(var uParam0, int iParam1)
{
	if (func_282(unk_0x0C1D3C552325765B()) == 133 && iParam1)
	{
		Global_2482149.f_4685 = uParam0;
	}
	else
	{
		Global_2482149.f_4685 = -1;
	}
}

void func_356(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0756AF366187C194("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0756AF366187C194("WantedMusicDisabled", 1);
	}
	Global_2482149.f_4611 = -1;
	bVar0 = (func_262(unk_0x0C1D3C552325765B(), 0) && func_261(unk_0x0C1D3C552325765B()));
	if (bParam6)
	{
		func_354(21, 1);
	}
	else
	{
		func_372(iParam0, -1);
		if (func_8(unk_0x0C1D3C552325765B()))
		{
			Global_1573924.f_3 = iParam0;
		}
		else
		{
			func_371(iParam0);
		}
		Global_1573924.f_4 = -1;
		if (func_8(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 5);
		}
		if ((func_133() && !func_132()) || func_131(unk_0x0C1D3C552325765B(), 21))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 4);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 17);
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 20);
		if (func_370(iParam0))
		{
			func_369();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_366(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xACD6D334FD769B0C(fParam2);
			if (iParam0 == 146)
			{
				unk_0xCF03D9C8A7F1577C(0);
				unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
				unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			}
		}
		if (func_364(iParam0))
		{
			unk_0xCF03D9C8A7F1577C(0);
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391043)
			{
				func_362(1);
				if (func_222(0))
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_360(1);
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
		}
		if (bParam5)
		{
			func_359();
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_357(iParam0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 21);
			}
		}
	}
	Global_2471085 = 1;
}

int func_357(int iParam0)
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
	if (func_358())
	{
		return 1;
	}
	return 0;
}

int func_358()
{
	switch (func_281())
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

void func_359()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4602), 0);
}

void func_360(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91458.f_8 = 1;
	}
	else
	{
		Global_91458.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_361(iVar0);
		iVar0++;
	}
}

void func_361(int iParam0)
{
	Global_91458.f_160[iParam0] = 1;
	Global_91458.f_159 = 1;
}

void func_362(int iParam0)
{
	if (func_363() && iParam0)
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

int func_363()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_365(unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

void func_366(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_367())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

int func_367()
{
	switch (func_368())
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

int func_368()
{
	return Global_25185;
}

void func_369()
{
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_200 = 0;
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4422), 1);
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_371(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/] = iParam0;
}

void func_372(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_301(0) || func_301(func_300(iVar0)))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 2);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 2);
		}
	}
}

int func_373()
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

void func_374()
{
	Global_1748041 = 1;
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 0))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 0);
		unk_0x88B0F0DC270164B7(&Global_1748042, 0);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 1))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 1);
		unk_0x88B0F0DC270164B7(&Global_1748042, 1);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 5))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 5);
		unk_0x88B0F0DC270164B7(&Global_1748042, 5);
	}
	if (unk_0x7B0208FFAEF67EF9(-355737150))
	{
		unk_0x6A7EBBBF8B647A25(-355737150, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-580979506))
	{
		unk_0x6A7EBBBF8B647A25(-580979506, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1426452475))
	{
		unk_0x6A7EBBBF8B647A25(-1426452475, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(745417724))
	{
		unk_0x6A7EBBBF8B647A25(745417724, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1305304906))
	{
		unk_0x6A7EBBBF8B647A25(-1305304906, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1543175077))
	{
		unk_0x6A7EBBBF8B647A25(-1543175077, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-811770997))
	{
		unk_0x6A7EBBBF8B647A25(-811770997, 0, 0, 0);
	}
}

int func_375()
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

void func_376()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_643.f_3))
	{
		if (Local_643.f_3 == 1 || Local_643.f_3 == 6)
		{
			iVar0 = func_395(unk_0x0C1D3C552325765B(), 1);
			iVar1 = func_168(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x39E8013F81E80F72(unk_0xA0081090911D13E5()))
				{
					unk_0x8942ADC0DB9F81E4(unk_0xA0081090911D13E5(), joaat("gadget_parachute"), 1, 0, 0);
					func_377(1);
				}
			}
			else
			{
				unk_0x05BEAAE73212CA04(unk_0x0C1D3C552325765B(), 1);
			}
		}
	}
}

void func_377(bool bParam0)
{
	int iVar0;
	
	if (unk_0x0604A0F4F09283DF(unk_0xA0081090911D13E5(), 5) != 0)
	{
		unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 177, 1);
		unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_175(578, -1, 0));
		if (func_394())
		{
			unk_0x68E8E6E200A00B62(unk_0x0C1D3C552325765B(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_393())
		{
			unk_0x68E8E6E200A00B62(unk_0x0C1D3C552325765B(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_390(3610, -1, -1))
		{
		}
		iVar0 = func_175(2032, -1, 0);
		unk_0x9F207F50E0FBF3A7(unk_0x0C1D3C552325765B(), func_389(unk_0x21F191D9AFF98B5E(unk_0x0C1D3C552325765B()), iVar0));
		if (func_219(0))
		{
			unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_175(578, -1, 0));
		}
		else
		{
			unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_388(Global_2489588));
		}
		func_387(unk_0x0C1D3C552325765B(), iVar0);
		unk_0xB684B99E13D983C3(unk_0x0C1D3C552325765B(), 5, func_382(unk_0xA0081090911D13E5(), iVar0), func_381(unk_0xA0081090911D13E5(), iVar0), 0);
		func_380(func_175(2032, -1, 0), 1);
		Global_2482149.f_273 = 1;
		func_378(unk_0x0C1D3C552325765B(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_378(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_175(2032, -1, 0);
		}
		unk_0xB684B99E13D983C3(iParam0, 5, func_382(unk_0x21F191D9AFF98B5E(iParam0), iParam2), func_381(unk_0x21F191D9AFF98B5E(iParam0), iParam2), 0);
		func_387(iParam0, iParam2);
		unk_0x9F207F50E0FBF3A7(iParam0, func_389(unk_0x21F191D9AFF98B5E(iParam0), iParam2));
		unk_0xA27FDFE5C0EBB875(unk_0x21F191D9AFF98B5E(iParam0), 5, func_382(unk_0x21F191D9AFF98B5E(iParam0), iParam2), func_381(unk_0x21F191D9AFF98B5E(iParam0), iParam2), func_389(unk_0x21F191D9AFF98B5E(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_175(578, -1, 0);
		}
		if (func_219(1) && func_379(unk_0x0C1D3C552325765B()))
		{
			unk_0x77F98D6F2BAFD419(unk_0x0C1D3C552325765B(), func_388(Global_2489588));
		}
		else
		{
			unk_0x77F98D6F2BAFD419(iParam0, iParam1);
		}
		if (func_394())
		{
			unk_0x68E8E6E200A00B62(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_393())
		{
			unk_0x68E8E6E200A00B62(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0xF674E664795C8CB3(unk_0x21F191D9AFF98B5E(iParam0), 177, 1);
	}
}

bool func_379(int iParam0)
{
	return func_260(iParam0, 10);
}

void func_380(int iParam0, int iParam1)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		func_166(2032, iParam0, -1, 1, 0);
		unk_0xB684B99E13D983C3(unk_0x0C1D3C552325765B(), 5, func_382(unk_0xA0081090911D13E5(), iParam0), func_381(unk_0xA0081090911D13E5(), iParam0), 0);
		func_387(unk_0x0C1D3C552325765B(), iParam0);
		unk_0x9F207F50E0FBF3A7(unk_0x0C1D3C552325765B(), func_389(unk_0xA0081090911D13E5(), iParam0));
		if ((iParam1 && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) && unk_0x0604A0F4F09283DF(unk_0xA0081090911D13E5(), 5) != 0)
		{
			func_378(unk_0x0C1D3C552325765B(), -1, -1);
		}
	}
}

int func_381(var uParam0, int iParam1)
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

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x0604A0F4F09283DF(uParam0, 11);
	if (unk_0x0604A0F4F09283DF(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x705BC1BB91F530B5(iParam0);
	uVar3 = unk_0x1CB19F5BE62B1507(iParam0, 8, unk_0x0604A0F4F09283DF(iParam0, 8), unk_0xE2E31A57FC3F8410(iParam0, 8));
	if (unk_0xE2ADF4B06E90B1E2(uVar3, joaat("OVER_JACKET"), 8))
	{
		return func_386(iParam0, iParam1);
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
		uVar5 = unk_0x1CB19F5BE62B1507(iParam0, 11, iVar0, unk_0xE2E31A57FC3F8410(iParam0, 11));
		if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_385(uVar5, 0);
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
						iVar0 = func_384(uVar5);
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
						iVar0 = func_384(uVar5);
						break;
					}
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_383(uVar5, 0);
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
					iVar0 = func_384(uVar5);
					break;
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0xE2ADF4B06E90B1E2(uVar5, -1086258388, 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_386(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, -872449705, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 144417099, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, -102825006, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_21"), 0))
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
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else if (bVar1)
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (59 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
			else
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 970679185, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 83294665, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, 382246252, 0))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (59 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_386(iParam0, iParam1);
			}
		}
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xE2ADF4B06E90B1E2(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xE2ADF4B06E90B1E2(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xE2ADF4B06E90B1E2(uVar5, joaat("SILK_ROBE"), 0)) || unk_0xE2ADF4B06E90B1E2(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_384(uVar5);
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

int func_383(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_384(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_385(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xE2ADF4B06E90B1E2(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_386(var uParam0, int iParam1)
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

void func_387(int iParam0, int iParam1)
{
	if (func_394())
	{
		if (iParam1 > 46)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xEA088391B09C3682(iParam0);
		}
	}
	else if (func_393())
	{
		if (iParam1 > 0)
		{
			unk_0x0A519F044FB9FF4F(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xEA088391B09C3682(iParam0);
		}
	}
}

int func_388(var uParam0)
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

int func_389(var uParam0, int iParam1)
{
	return 0;
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_392(iParam0, iParam1);
	uVar2 = func_391(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_391(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

bool func_393()
{
	return unk_0x6E373DDF41F95D44(joaat("mppilot"));
}

bool func_394()
{
	return unk_0x6E373DDF41F95D44(joaat("mplts"));
}

int func_395(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_172(iParam0);
}

void func_396()
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
	
	if ((((!func_7(unk_0x0C1D3C552325765B()) && !func_130(unk_0x0C1D3C552325765B())) && !func_276()) && !func_404(unk_0x0C1D3C552325765B(), 0, 0, 0)) && !func_403(unk_0x0C1D3C552325765B()))
	{
		if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			bVar11 = func_5(Local_643.f_3);
			bVar12 = unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0);
			bVar13 = func_401();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_643.f_67[iVar4 /*2*/].f_1;
				if (unk_0x3CF373660FCFAFCE(uVar14) && unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0) == unk_0x15F0E6D5AC2852F1(uVar14))
						{
							func_298(1);
						}
					}
					unk_0x88B0F0DC270164B7(&uVar5, iVar4);
					if (bVar11 && func_38(Local_643.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(uVar14), 1) };
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
				unk_0x88B0F0DC270164B7(&uVar5, 31);
			}
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_7 = uVar5;
			if (func_5(Local_643.f_3))
			{
				if ((unk_0x39E8013F81E80F72(unk_0xA0081090911D13E5()) || (unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5()) && !unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_643.f_3, iVar7, &Var0, &uVar3))
						{
							func_400(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
							func_399(Var0, 1, 0);
							func_398(10, 0, 0);
							unk_0x88B0F0DC270164B7(&iLocal_334, 5);
						}
					}
				}
				else
				{
					func_397();
				}
			}
		}
	}
	else
	{
		func_397();
	}
}

void func_397()
{
	if (unk_0x08BA6DD398CA197C(iLocal_334, 5))
	{
		func_138();
		func_136();
		unk_0x09C86C0C5CA26B1E(&iLocal_334, 5);
		func_135();
	}
}

void func_398(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

void func_399(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

void func_400(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	else
	{
		Global_2412480.f_6 = unk_0xEAE20F1125B83888();
	}
	Var0.f_6 = Global_2412480.f_6;
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
	if (func_339(unk_0x0C1D3C552325765B()))
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
	Global_2412480 = { Var0 };
}

int func_401()
{
	if (((((func_402(unk_0x0C1D3C552325765B()) || func_133()) || func_132()) || func_131(unk_0x0C1D3C552325765B(), 21)) || func_8(unk_0x0C1D3C552325765B())) || func_7(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_402(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

int func_403(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_405(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_257(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_258(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_406(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_420())
	{
		if (bParam1)
		{
			iVar0 = unk_0x848AF823A8EA3C62();
			if (func_79(unk_0x0C1D3C552325765B()))
			{
				uVar1 = func_284();
				iVar2 = unk_0xA43666ACD375E339(uVar1);
				if (unk_0xCB129F9A01D14082(iVar2))
				{
					iVar3 = unk_0x9259DE19D910276C(iVar2);
					if (unk_0x1489FFC2CBA39486(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_419())
				{
					switch (Local_643.f_3)
					{
						case 14:
							if (!func_324(iVar4) && !func_323(iVar4))
							{
								func_411("AMCH_BRIDGE", bParam0, iVar0, iVar4);
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
			if (((!bParam0 && unk_0x3CF373660FCFAFCE(Local_643.f_67[iVar5 /*2*/].f_1)) && unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x6315EBE95A97CADF(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x16833EFAA58E63DB(uLocal_616[iVar5]))
				{
					uLocal_616[iVar5] = unk_0x91B4D18C6AFDC14C(unk_0x63CE7A3848B84093(Local_643.f_67[iVar5 /*2*/].f_1));
					unk_0x32479C670EB9962F(uLocal_616[iVar5], func_410(iVar5));
					unk_0x420759DE4A6A9555(uLocal_616[iVar5], 9);
					unk_0x6F18BFEFE84565FF(uLocal_616[iVar5], func_409(iVar5));
					func_407(&(uLocal_616[iVar5]), 9);
				}
				else if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
				{
					Var6 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_643.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x2FE9515E72A14285(uLocal_616[iVar5], 1);
					}
					else
					{
						unk_0x2FE9515E72A14285(uLocal_616[iVar5], 0);
					}
				}
			}
			else if (unk_0x16833EFAA58E63DB(uLocal_616[iVar5]))
			{
				unk_0x0B57C567D698C373(&(uLocal_616[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_407(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_408(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
	}
}

int func_408(int iParam0)
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_409(int iParam0)
{
	if (unk_0xFC4346F9DE2AB4AE(Local_643.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x1E3C80E7C4B8041B(Local_643.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xBFD32C1D4D54E09B(Local_643.f_67[iParam0 /*2*/]) && !unk_0xA727EEDD175A1189(Local_643.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_410(int iParam0)
{
	if (unk_0xFC4346F9DE2AB4AE(Local_643.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x1E3C80E7C4B8041B(Local_643.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0xBFD32C1D4D54E09B(Local_643.f_67[iParam0 /*2*/]) && !unk_0xA727EEDD175A1189(Local_643.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_411(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x08BA6DD398CA197C(Local_2827[iParam2 /*12*/].f_8[func_315(iParam3)], func_314(iParam3)) && !bParam1)
	{
		Var0 = { func_418(iParam3) };
		if (!unk_0x16833EFAA58E63DB(uLocal_550[iParam3]))
		{
			if (!func_417(Var0, 0f, 0f, 0f, 0) && !func_417(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_550[iParam3] = unk_0x52CE8C31DD5898E7(Var0);
				unk_0x420759DE4A6A9555(uLocal_550[iParam3], 9);
				unk_0x6F18BFEFE84565FF(uLocal_550[iParam3], sParam0);
				func_412(uLocal_550[iParam3], 25);
				func_407(&(uLocal_550[iParam3]), 12);
				unk_0x2FE9515E72A14285(uLocal_550[iParam3], 1);
			}
		}
		else if (unk_0x84C71F36E7D97756())
		{
			unk_0x9F80CD84AD2B3DA4(uLocal_550[iParam3], 255);
		}
		else
		{
			func_412(uLocal_550[iParam3], 25);
		}
	}
	else if (unk_0x16833EFAA58E63DB(uLocal_550[iParam3]))
	{
		unk_0x0B57C567D698C373(&(uLocal_550[iParam3]));
		if (!bParam1)
		{
			unk_0xAB16AADE80707D47(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_412(var uParam0, int iParam1)
{
	unk_0x9F80CD84AD2B3DA4(uParam0, func_413(uParam0, iParam1));
}

int func_413(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_416(Global_2432628))
	{
		fVar0 = func_415(uParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_414();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_414()
{
	if (func_341(Global_2432628, 1))
	{
		return 50;
	}
	return 0;
}

float func_415(var uParam0, float fParam1, float fParam2)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	uVar0 = Global_2432628;
	Var2 = { unk_0xA4C471C6C99EDD6B(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(uVar0), 0) };
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

int func_416(int iParam0)
{
	if ((unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_69.f_2, 15) && !(unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_69.f_2, 6) && unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_69.f_2, 7))) || ((unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_69.f_2, 6) && !unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_69.f_2, 7)) && !unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_69.f_2, 15)))
	{
		return 1;
	}
	return 0;
}

bool func_417(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_418(int iParam0)
{
	switch (Local_643.f_3)
	{
		case 14:
			return Local_354[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_419()
{
	switch (Local_643.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_420()
{
	switch (Local_643.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_421()
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

void func_422(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_275(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_184(sParam1))
	{
		sVar0 = sParam1;
	}
	func_111(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_423(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	return "HUD_STARTING";
	if (unk_0x28C1B9853548BD8E(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_challenges"))
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
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_424(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_425(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x62E2FDDFDA7A731D())
	{
		Global_2482149.f_4601 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
		{
			unk_0xAB16AADE80707D47(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2482149.f_4601 = 0;
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 1);
		}
	}
}

int func_426(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

void func_427(int iParam0)
{
	if (!unk_0x0893ED56F523F729() && !unk_0x2C22E7D1C80A53EF())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if (!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C())
					{
						if (func_5(Local_643.f_3))
						{
							if (Local_643.f_3 == 12)
							{
								func_254("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_254("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_643.f_3))
						{
							func_254("AMCH_BIKEAV", 30000);
						}
						func_253(1);
						unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if (!unk_0x84C71F36E7D97756())
					{
						func_254("AMCH_BLOW", 30000);
						func_253(1);
						unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if (!unk_0x84C71F36E7D97756() && !func_432(62))
					{
						switch (Local_643.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									if (unk_0x39E8013F81E80F72(unk_0xA0081090911D13E5()))
									{
										func_254("AMCH_ALTI", 30000);
										func_253(1);
										unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_NMIS", 30000);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_FRFALL", -1);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_PVPO1", -1);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_PVPO2", -1);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_WHEELIE", 30000);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_STOPPIE", 30000);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_LFALL", 30000);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_LPARA", 30000);
									func_253(1);
									unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if ((!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C()) && !func_432(62))
					{
						switch (Local_643.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									if (unk_0x39E8013F81E80F72(unk_0xA0081090911D13E5()))
									{
										if (func_1(&uLocal_328, 1000, 0))
										{
											func_254("AMCH_OCEAN", 30000);
											func_253(1);
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
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if (!unk_0x84C71F36E7D97756() && !func_432(62))
					{
						switch (Local_643.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									if (unk_0x39E8013F81E80F72(unk_0xA0081090911D13E5()))
									{
										if (func_416(unk_0x0C1D3C552325765B()) && !func_429(unk_0x0C1D3C552325765B()))
										{
											func_254("AMCH_ALTIEXP", 30000);
											func_253(1);
											unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if ((!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C()) && !func_432(62))
					{
						if (func_1(&uLocal_328, 1000, 0))
						{
							func_254("AMCH_FLYLOW", 30000);
							func_253(1);
							func_44(&uLocal_328);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if (Local_643.f_3 == 7)
					{
						if (iLocal_628 == 0)
						{
							if ((!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C()) && !func_432(62))
							{
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_MVS1", 30000);
									func_253(1);
									iLocal_628 = 1;
								}
							}
						}
						else if ((!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C()) && !func_432(62))
						{
							if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
							{
								func_254("AMCH_MVS2", 30000);
								func_253(1);
								unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
							}
						}
					}
					if (Local_643.f_3 == 14)
					{
						if (iLocal_628 == 0)
						{
							if ((!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C()) && !func_432(62))
							{
								if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
								{
									func_254("AMCH_BRBL", 30000);
									func_253(1);
									iLocal_628 = 1;
								}
							}
						}
						else if ((!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C()) && !func_432(62))
						{
							if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
							{
								func_254("AMCH_BRBL2", 30000);
								func_253(1);
								unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0x08BA6DD398CA197C(iLocal_627, iParam0))
				{
					if (!unk_0x84C71F36E7D97756() && !unk_0x598A9E990F05F82C())
					{
						func_428("AMCH_WARN", func_346(Local_643.f_3), func_345(Local_643.f_3), 30000);
						func_253(0);
						Local_3212.f_8 = unk_0x39E54E7BC7452169();
						unk_0xAB16AADE80707D47(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x88B0F0DC270164B7(&iLocal_627, iParam0);
					}
				}
				break;
			}
	}
}

void func_428(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0xBDE6EEC5F6BDC060(sParam2);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

bool func_429(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1342783.f_241.f_136[func_431(9) /*33*/][iParam0], func_430(9));
}

int func_430(int iParam0)
{
	return (iParam0 % 32);
}

int func_431(int iParam0)
{
	return (iParam0 / 32);
}

bool func_432(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

void func_433(int iParam0)
{
	Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_3 = iParam0;
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 4);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 4);
	}
}

int func_435()
{
	if (func_131(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (unk_0xA012E3A84A2B2F1A())
	{
		return 0;
	}
	if (func_304(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_456())
	{
		return 0;
	}
	if (func_455(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_454())
	{
		return 0;
	}
	if (func_446(unk_0x0C1D3C552325765B()) == 3)
	{
		return 0;
	}
	if (func_445(func_248()))
	{
		return 0;
	}
	if (func_444())
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_306(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_442())
	{
		return 0;
	}
	if (func_131(unk_0x0C1D3C552325765B(), 0) || func_131(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_131(unk_0x0C1D3C552325765B(), 12) || func_131(unk_0x0C1D3C552325765B(), 14)) || func_131(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_404(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		return 0;
	}
	if (func_441(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_440())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_439(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (func_436(unk_0x0C1D3C552325765B()) && Global_1588450.f_168)
	{
		return 0;
	}
	return 1;
}

int func_436(int iParam0)
{
	if (func_437(Global_1588660[iParam0 /*532*/].f_256.f_11))
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0)
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

int func_438()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_439(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_440()
{
	return Global_91458.f_304 > 0;
}

bool func_441(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11);
}

int func_442()
{
	if (func_443() == 0)
	{
		return 1;
	}
	return 0;
}

int func_443()
{
	return Global_1312462.f_18;
}

bool func_444()
{
	return Global_1315229;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_446(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_340(iParam0) && !func_8(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_453(iParam0);
	uVar3 = func_133();
	uVar4 = func_447();
	if ((bVar1 && (func_402(iParam0) || func_365(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_261(iParam0)) && !func_259(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

int func_447()
{
	if ((func_260(unk_0x0C1D3C552325765B(), 21) || func_260(unk_0x0C1D3C552325765B(), 22)) || func_451())
	{
		return 1;
	}
	if (func_449())
	{
		func_448(22);
		return 1;
	}
	return 0;
}

void func_448(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_449()
{
	if (func_262(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_133() && !func_132()) || func_131(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_260(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_450(27);
		}
	}
	return 0;
}

void func_450(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_451()
{
	return func_452(286, -1);
}

int func_452(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_171(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_453(int iParam0)
{
	return func_260(iParam0, 20);
}

bool func_454()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

int func_455(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_456()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

void func_457()
{
	func_458(&(Local_731.f_527), &Local_731, 23, &(Local_731.f_1), &(Local_731.f_110), Local_643.f_3, 0);
}

void func_458(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_566(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_564() || iParam2 == 24)
	{
		if (func_521(uParam1, iParam2, uParam3, Global_1573696, 0, func_567()))
		{
			func_520(1);
			if ((!func_519() && !func_518()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_517())
				{
					func_516();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_515(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_514(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
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
								if (func_12(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_513(iVar35))
										{
											iVar44 = iVar35;
											if (func_72(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_510(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_507(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_506())
							{
								if (func_12(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
								}
								else
								{
									iVar35 = func_81();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_505(iVar35) && func_501(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_496(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_105(iVar35) };
								iVar37 = func_490(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
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
									if (!func_506())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_488(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_242(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_487(iVar35, 0);
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
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_486(iParam5))
								{
									func_485(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_485(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_81();
							}
							if (func_505(iVar35))
							{
								if (func_12(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_496(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_105(iVar35) };
									iVar37 = func_490(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_487(iVar35, 1);
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
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_471(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_468(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_467();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_466(uParam3, uParam1);
							func_465(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_466(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_461(uParam3))
						{
							Global_1573844 = 1;
						}
						func_459(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_467();
			func_515(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_459(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_460(0);
	}
}

void func_460(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_461(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_81() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_105(iVar15) };
		iVar1 = func_464(uParam0, uParam0->f_37);
		if (func_463(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_462(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_462(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_462(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_462(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_462(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_462(uParam0, iVar0, 0);
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

void func_462(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_463(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_464(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_465(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_466(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_467()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_468(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_81())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_470(uParam0->f_38[iVar0 /*2*/], 0);
					func_469(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_469(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_470(int iParam0, bool bParam1)
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

void func_471(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_484() && iParam4 < func_483())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_482("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_482(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_482("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_482("");
			if (uParam3->f_108 == 6)
			{
				func_482("");
			}
			else
			{
				func_482(&sParam5);
			}
			func_476(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_475(uParam3))
			{
				func_474("DPAD_FRIEND");
			}
			else if (func_473(uParam3))
			{
				func_474("DPAD_FRIEND");
			}
			else if (func_472(uParam3))
			{
				func_474("DPAD_CREW");
			}
			else
			{
				func_474("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_472(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_473(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_474(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_475(var uParam0)
{
	if (func_473(uParam0) && func_472(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_476(var uParam0, int iParam1)
{
	if (func_481(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_477(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_477(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_478()) && func_216(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_478()
{
	if (func_340(unk_0x0C1D3C552325765B()) || func_479())
	{
		return 0;
	}
	return 1;
}

int func_479()
{
	switch (func_480(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_480(int iParam0)
{
	if (func_262(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_481(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_478()) && func_218(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_482(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_483()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_484()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_485(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_484() && iParam3 < func_483())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
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
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_482("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_474(sParam16);
				}
				else
				{
					func_482(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_482("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_506())
				{
					func_482("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_474(&(uParam2->f_104));
					}
					else
					{
						func_482("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_482("");
				}
				if (uParam2->f_108 == 6)
				{
					func_482("");
				}
				else
				{
					func_482(&sParam4);
				}
				func_476(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_482("");
					func_482("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_475(uParam2))
				{
					func_474("DPAD_FRIEND");
				}
				else if (func_473(uParam2))
				{
					func_474("DPAD_FRIEND");
				}
				else if (func_472(uParam2))
				{
					func_474("DPAD_CREW");
				}
				else
				{
					func_474("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_486(int iParam0)
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

int func_487(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_340(iParam0)) && !func_453(iParam0))
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

int func_488(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_489(iParam3))
	{
		*fParam1 = (func_244(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_486(iParam3))
	{
		*fParam1 = (func_244(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_489(int iParam0)
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

int func_490(int iParam0)
{
	int iVar0;
	
	iVar0 = func_493(iParam0);
	if (iVar0 == -1)
	{
		func_491(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_491(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_493(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_492(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_492(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_494(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_494(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_495(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_495(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_81();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_496(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2471194 = { func_105(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_463(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_500(&Global_2471194))
		{
			Global_2471124 = { func_498(iParam0) };
			func_497(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_497(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_498(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_499(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_105(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_499(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_500(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_501(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_8(iParam0) || func_504(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_503(iParam0))
	{
		return 0;
	}
	if ((!func_502(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_513(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_502(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_503(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

int func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_505(int iParam0)
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
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_506()
{
	switch (func_480(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
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
	switch (func_282(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_453(unk_0x0C1D3C552325765B()))
	{
		switch (func_480(unk_0x0C1D3C552325765B()))
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

int func_507(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_508(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_508(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_508(int iParam0)
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
	return func_509(iParam0, 0);
	return 0;
}

int func_509(int iParam0, int iParam1)
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

void func_510(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_513(iVar1))
				{
					if (func_511(iVar1, iParam1, 0))
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

int func_511(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_81())
	{
		if (!bParam2)
		{
			if (func_512(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_81())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_512(int iParam0, int iParam1)
{
	if (iParam1 != func_81())
	{
		if (iParam0 != func_81())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_81())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_513(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

void func_514(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_515(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_516()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_263())
		{
			func_247();
		}
	}
}

int func_517()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_263())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_263())
	{
		return 1;
	}
	return 0;
}

int func_518()
{
	if (func_263())
	{
		if (func_52(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_519()
{
	if (func_263())
	{
		if (func_56(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_520(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_521(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_563(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_562();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_561())
		{
			if (func_560() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_551())
		{
			func_550(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_550(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_560() == 1)
		{
			func_549(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_550(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_560() == 0 && !bParam5))
		{
			func_550(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_548();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_548();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_549(bVar6, uParam0, 0))
				{
					func_514(uParam0);
					uVar4 = func_546(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_543(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_537(uParam0, func_540(uParam2), func_538(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_529(uParam0, func_531(), func_530(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_543(uParam0, uVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_527(iParam1) };
						iVar8 = func_522(iParam1);
						func_543(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_522(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_526())
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
			if (func_525(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_524(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_523(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_523(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_524(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_525(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_526()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_527(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_528(unk_0x0C1D3C552325765B()) || func_523(unk_0x0C1D3C552325765B()))
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
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_528(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_529(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_474(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_474("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_530()
{
	switch (func_480(unk_0x0C1D3C552325765B()))
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

char* func_531()
{
	switch (func_480(unk_0x0C1D3C552325765B()))
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
			if (func_533())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_215(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_215(1))
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
			if (func_532(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_532(int iParam0)
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

bool func_533()
{
	return (func_536() && func_534(func_535()));
}

int func_534(int iParam0)
{
	return func_218(iParam0, 1);
}

int func_535()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_536()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_537(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(uParam2))
		{
			func_474(uParam1);
		}
		else if (func_282(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(uParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_474("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_538(var uParam0)
{
	int iVar0;
	
	iVar0 = func_282(unk_0x0C1D3C552325765B());
	if (func_539())
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
			switch (func_281())
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

bool func_539()
{
	return Global_1588659;
}

char* func_540(var uParam0)
{
	int iVar0;
	
	iVar0 = func_282(unk_0x0C1D3C552325765B());
	if (func_539())
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
			if (func_542() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_542() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_281())
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
			if (func_541() == 1)
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

int func_541()
{
	return Global_2482149.f_4688;
}

int func_542()
{
	if (func_282(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_543(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_482(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(uParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_474(sParam1);
		}
		if (func_561() && iParam6)
		{
			if (func_545())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_474(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_544(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_544(int iParam0)
{
	if (func_525(iParam0) || func_524(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_545()
{
	return Global_1573698;
}

char* func_546(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_547();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(uParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
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

char* func_547()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_548()
{
	Global_36678 = 1;
}

bool func_549(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_550(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_467();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_551()
{
	if (func_559())
	{
		return 0;
	}
	if (func_454())
	{
		return 0;
	}
	if (!func_557())
	{
		return 0;
	}
	if (!func_442())
	{
		return 0;
	}
	if (func_556(8, -1))
	{
		return 0;
	}
	if (func_560() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	else if (!func_305(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_555(1) || func_553(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_79(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_552(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

bool func_552(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

int func_553(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_554(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
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
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_554(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_555(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_556(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_557()
{
	if (func_558())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_558()
{
	return Global_1312434;
}

bool func_559()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_560()
{
	return Global_1342783.f_68;
}

int func_561()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_562()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_563(int iParam0)
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

int func_564()
{
	if (func_567())
	{
		return 1;
	}
	if (func_7(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_539())
	{
		return 1;
	}
	if (func_340(unk_0x0C1D3C552325765B()))
	{
		switch (func_282(unk_0x0C1D3C552325765B()))
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
				if (!func_565(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_565(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_565(unk_0x0C1D3C552325765B()))
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

bool func_565(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_566(int iParam0)
{
	if ((iParam0 == 24 && func_340(unk_0x0C1D3C552325765B())) && !func_453(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_262(unk_0x0C1D3C552325765B(), 0) && func_453(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_446(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_567()
{
	if (func_568(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_568(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

void func_569()
{
	if (Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_3 == 3)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_334, 8))
		{
			if ((!func_7(unk_0x0C1D3C552325765B()) && !func_130(unk_0x0C1D3C552325765B())) && !func_352(unk_0x0C1D3C552325765B()))
			{
				func_351();
			}
		}
		else if (!unk_0x08BA6DD398CA197C(iLocal_334, 9))
		{
			if ((func_7(unk_0x0C1D3C552325765B()) || func_130(unk_0x0C1D3C552325765B())) || func_352(unk_0x0C1D3C552325765B()))
			{
				unk_0x7EB9CFEB1DDE2605();
				Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4 = 0;
				unk_0x88B0F0DC270164B7(&iLocal_334, 9);
			}
		}
	}
}

void func_570()
{
	int iVar0;
	
	if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iLocal_338)))
	{
		iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iLocal_338));
		if (unk_0xCB129F9A01D14082(iVar0))
		{
			func_571(iVar0, 2);
		}
	}
	iLocal_338++;
	if (iLocal_338 >= unk_0xE5697AB254094B0D())
	{
		iLocal_338 = 0;
	}
}

void func_571(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1573924.f_18)))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_2, iParam0))
	{
		if (Global_1573924 < iParam1 && unk_0x08BA6DD398CA197C(Global_1573924.f_1, 1))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 0);
			return;
		}
		if (Global_1573924 != 0)
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 1);
		}
		Global_1573924 = 0;
		Global_1573924.f_2 = 0;
	}
	unk_0x88B0F0DC270164B7(&(Global_1573924.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_572(iParam0))
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
		Global_1573924++;
	}
}

bool func_572(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10);
}

void func_573(int iParam0, int iParam1)
{
	Local_2827[iParam0 /*12*/] = iParam1;
}

int func_574()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_731.f_527[iVar0 /*49*/].f_1 = func_81();
		iVar0++;
	}
	return 1;
}

int func_575()
{
	return Local_643.f_0;
}

int func_576(int iParam0)
{
	return Local_2827[iParam0 /*12*/];
}

void func_577()
{
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 6))
	{
		func_600();
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 6);
	}
	if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 7))
	{
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 4) || unk_0x08BA6DD398CA197C(Global_1573924.f_1, 16))
		{
			if (((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_263()) && func_12(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 7);
				func_254("FME_PASINT", 30000);
				func_253(1);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 17))
		{
			if (func_133() && !func_132())
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 17);
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 16);
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 23))
	{
		if (((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_12(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x598A9E990F05F82C())
		{
			if (func_598())
			{
				func_254("AMEV_GA_RP", -1);
				if (func_480(unk_0x0C1D3C552325765B()) != 200)
				{
					func_253(1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 23);
			}
		}
	}
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_365(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 9))
	{
		if ((((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_263()) && func_12(unk_0x0C1D3C552325765B(), 1, 1)) && !func_131(unk_0x0C1D3C552325765B(), 21))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 9);
			func_597(0);
			func_254("FME_TBL00", -1);
			func_253(1);
		}
	}
	if (func_340(unk_0x0C1D3C552325765B()))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 18))
		{
			if ((func_131(unk_0x0C1D3C552325765B(), 21) && unk_0x08BA6DD398CA197C(Global_1573924.f_1, 20)) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 19))
			{
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 18);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 18))
		{
			if (((((!unk_0x0893ED56F523F729() && !unk_0x598A9E990F05F82C()) && !func_263()) && func_12(unk_0x0C1D3C552325765B(), 1, 1)) && unk_0xB20CA7A3EE29687A()) && !Global_2482149.f_4692)
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 18);
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 19);
				func_254("AMTT_RPAS", -1);
				func_253(1);
			}
		}
	}
	if (((((func_340(unk_0x0C1D3C552325765B()) && !func_8(unk_0x0C1D3C552325765B())) && func_282(unk_0x0C1D3C552325765B()) != 146) && !func_7(unk_0x0C1D3C552325765B())) && !func_130(unk_0x0C1D3C552325765B())) && !func_587())
	{
		if (func_364(func_282(unk_0x0C1D3C552325765B())))
		{
			unk_0xFE110F7E7B5A77FB(unk_0x0C1D3C552325765B());
		}
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 22))
		{
			unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 22);
		}
		if (func_402(unk_0x0C1D3C552325765B()) || func_358())
		{
			if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 10))
			{
				if (func_586(func_282(unk_0x0C1D3C552325765B())))
				{
					if (func_222(0) && !Global_2391043)
					{
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
					}
					if (!Global_2391043)
					{
						func_362(1);
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
					}
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 10);
			}
		}
		if (func_365(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 11))
			{
				if (!Global_91458.f_8)
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 12);
					func_360(1);
				}
				if (!func_585())
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 13);
					func_359();
				}
				if (!Global_2391043)
				{
					unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 14);
					if (func_222(0) && !Global_2391043)
					{
						unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 9);
					}
					func_362(1);
				}
				unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 11);
			}
		}
		else
		{
			func_583(0);
		}
	}
	else
	{
		func_583(1);
	}
	func_578();
	if (func_357(func_282(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1573924.f_1, 21))
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 21);
	}
	if ((func_133() && !func_132()) || func_131(unk_0x0C1D3C552325765B(), 21))
	{
		if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 10))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 10);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 10))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 10);
	}
}

void func_578()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_263())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_432(iVar2))
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
				if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 26))
				{
					unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 26);
				}
				func_579(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 26))
	{
		func_44(&(Global_1573924.f_22));
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 26);
	}
}

void func_579(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1573924.f_22)))
	{
		func_2(&(Global_1573924.f_22), 0, 0);
	}
	else if (func_1(&(Global_1573924.f_22), iParam1, 0))
	{
		if (func_560() > 0)
		{
			func_582(iParam0);
			if (func_251("AMEV_LBD_HELP"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			func_44(&(Global_1573924.f_22));
		}
	}
	else
	{
		func_581(0);
		func_580();
	}
}

void func_580()
{
	Global_2482149.f_4392 = 0;
}

void func_581(int iParam0)
{
	Global_1342783.f_68 = iParam0;
}

void func_582(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_583(int iParam0)
{
	if ((unk_0x08BA6DD398CA197C(Global_1573924.f_1, 11) || (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 10) && iParam0)) || (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 22) && iParam0))
	{
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 12))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 12);
			func_360(0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 13))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 13);
			func_584();
		}
		if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_262(unk_0x0C1D3C552325765B(), 0))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 14);
			func_362(0);
		}
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 11);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 10);
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 22);
	}
}

void func_584()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4602), 0);
}

bool func_585()
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4602, 0);
}

int func_586(int iParam0)
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
			return func_365(unk_0x0C1D3C552325765B());
		
		case 133:
			return (func_358() || func_5(func_281()));
		
		default:
	}
	return 0;
}

int func_587()
{
	if (((((((((func_596() || func_595()) || func_594()) || func_276()) || (func_593() && !unk_0x1504F110F2576375())) || (func_590() && !func_589())) || Global_2394682) || Global_2394682.f_1 != 0) || Global_2394755 != 0) || (func_588() == 2 && !unk_0x1504F110F2576375()))
	{
		return 1;
	}
	return 0;
}

int func_588()
{
	return Global_978175;
}

bool func_589()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 27);
}

int func_590()
{
	if (func_592() || func_591())
	{
		return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 == 8;
	}
	return 0;
}

var func_591()
{
	return Global_2442442.f_612;
}

bool func_592()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

bool func_593()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 5);
}

bool func_594()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

bool func_595()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

bool func_596()
{
	return Global_2442442.f_576;
}

void func_597(int iParam0)
{
	int iVar0;
	
	iVar0 = func_175(2514, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 0))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 0);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 1))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 1);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 2))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 3))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 3);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 4))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 4);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 5))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 6))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 6);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 7))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 7);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 8))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x08BA6DD398CA197C(iVar0, 9))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 9);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 10))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 10);
		}
		else if (!unk_0x08BA6DD398CA197C(iVar0, 11))
		{
			unk_0x88B0F0DC270164B7(&iVar0, 11);
		}
	}
	func_166(2514, iVar0, -1, 1, 0);
}

int func_598()
{
	int iVar0;
	
	if (!func_45(&(Global_1573924.f_15)))
	{
		func_2(&(Global_1573924.f_15), 0, 0);
		Global_1573924.f_17 = 0;
	}
	else if (func_1(&(Global_1573924.f_15), 1000, 0))
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(Global_1573924.f_17)))
		{
			iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Global_1573924.f_17));
			if (unk_0xCB129F9A01D14082(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_599(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0x0C1D3C552325765B()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573924.f_17++;
		if (Global_1573924.f_17 >= 32)
		{
			Global_1573924.f_17 = 0;
			func_44(&(Global_1573924.f_15));
		}
	}
	return 0;
}

int func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312443 != 0)
	{
		return 0;
	}
	if (!func_170(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1588660[iVar0 /*532*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_600()
{
	unk_0xCF03D9C8A7F1577C(5);
	func_602();
	unk_0xACD6D334FD769B0C(1f);
	unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 8);
	func_601();
}

void func_601()
{
	if (Global_1748041)
	{
		if (unk_0x08BA6DD398CA197C(Global_1748042, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 1))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 1);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 5))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 5);
		}
		if (unk_0x7B0208FFAEF67EF9(-355737150))
		{
			unk_0x6A7EBBBF8B647A25(-355737150, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-580979506))
		{
			unk_0x6A7EBBBF8B647A25(-580979506, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1426452475))
		{
			unk_0x6A7EBBBF8B647A25(-1426452475, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(745417724))
		{
			unk_0x6A7EBBBF8B647A25(745417724, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1305304906))
		{
			unk_0x6A7EBBBF8B647A25(-1305304906, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1543175077))
		{
			unk_0x6A7EBBBF8B647A25(-1543175077, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-811770997))
		{
			unk_0x6A7EBBBF8B647A25(-811770997, 1, 0, 0);
		}
		Global_1748042 = 0;
	}
	Global_1748041 = 0;
}

void func_602()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

int func_603()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2482149.f_4600)
	{
		return 0;
	}
	if ((!func_45(&(Local_643.f_39)) && !func_45(&(Local_643.f_41))) && !func_45(&(Local_643.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x4B50AAB32FBE0483();
	if (func_45(&(Local_643.f_41)))
	{
		iVar0 = func_604(&uVar2, &(Local_643.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_643.f_39)))
	{
		iVar0 = func_604(&uVar2, &(Local_643.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_643.f_43)))
	{
		iVar0 = func_604(&uVar2, &(Local_643.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_604(var uParam0, var uParam1)
{
	return unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(*uParam0, *uParam1));
}

int func_605()
{
	if (func_606())
	{
		return 1;
	}
	return 0;
}

bool func_606()
{
	return Global_1573924.f_24;
}

int func_607()
{
	bool bVar0;
	var uVar1;
	
	func_611(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_610())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_609())
	{
		return 1;
	}
	if (func_608(157))
	{
		if (!func_596())
		{
			return 1;
		}
	}
	if (func_608(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_367() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_367()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_608(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_609()
{
	return Global_2451777;
}

bool func_610()
{
	return Global_2442442.f_571;
}

void func_611(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_612(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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

void func_612(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_613(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_613(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_614()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_615()
{
	int iVar0;
	
	if (func_607())
	{
		Local_3212.f_5 = 5;
	}
	else if (unk_0x08BA6DD398CA197C(Local_643.f_2, 0))
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
	Local_3212.f_10 = (unk_0x39E54E7BC7452169() - Local_3212.f_9);
	if (!Global_262145.f_9942)
	{
		if (Local_3212.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x848AF823A8EA3C62() != -1)
	{
		func_650(Local_3212, Local_643.f_3, Local_2827[unk_0x848AF823A8EA3C62() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_334, 4))
	{
		unk_0x15761381A3072BFA(iLocal_342);
		unk_0x09C86C0C5CA26B1E(&iLocal_334, 4);
	}
	unk_0xC8656944A36C8E78(iLocal_342);
	unk_0xC8656944A36C8E78(iLocal_343);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_629, iVar0) && !unk_0x7DFD3CAC2CF49957(uLocal_630[iVar0]))
		{
			unk_0x15761381A3072BFA(uLocal_630[iVar0]);
			unk_0xC8656944A36C8E78(uLocal_630[iVar0]);
		}
		iVar0++;
	}
	func_348();
	func_406(1, 1);
	unk_0xE050CF22CA4ED644(0);
	func_434(0);
	func_355(Local_643.f_3, 0);
	func_616(133, 0, Local_643.f_37 == 6);
	func_354(23, 0);
	if (func_268() >= 0f)
	{
		unk_0x92510317AEA86B4D(0f, 0);
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_334, 9))
	{
		unk_0x7EB9CFEB1DDE2605();
	}
	unk_0x78C587487CD40B92();
}

void func_616(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x0C1D3C552325765B() != -1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 13))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 13);
		}
		if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 14))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 14);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1573924.f_1, 21))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1573924.f_1), 21);
	}
	func_646();
	unk_0x0756AF366187C194("DisableFlightMusic", 0);
	unk_0x0756AF366187C194("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_645(func_282(unk_0x0C1D3C552325765B()));
		func_354(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x0C1D3C552325765B() != -1) && func_644(unk_0x0C1D3C552325765B()) >= 12)
		{
			func_643(2526, -1);
			iVar1 = func_175(2526, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x88B0F0DC270164B7(&Global_1573950, 5);
			}
		}
		func_642();
		func_641();
		func_640();
		if ((!func_261(unk_0x0C1D3C552325765B()) && !func_259(unk_0x0C1D3C552325765B())) && !func_639())
		{
			func_623();
		}
		func_622();
		if (!unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0) && !unk_0x08BA6DD398CA197C(Global_1750560.f_3, 1))
		{
			func_600();
		}
		func_621();
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1646), 2);
		func_620();
		func_135();
	}
	if (unk_0x7645014AAA2B6DDF(1344549371))
	{
		unk_0x2099DD912801B1F4(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x0C1D3C552325765B() != -1 && !func_131(unk_0x0C1D3C552325765B(), 21)) && !func_262(unk_0x0C1D3C552325765B(), 0))
		{
			func_362(0);
			func_360(0);
			func_619();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2453905 = -1;
			func_46(26, -1);
		}
	}
	if (!func_617())
	{
		Global_2471085 = 1;
	}
}

int func_617()
{
	if (((!func_544(unk_0x0C1D3C552325765B()) && !func_523(unk_0x0C1D3C552325765B())) && func_282(unk_0x0C1D3C552325765B()) != 146) && !func_618())
	{
		return 0;
	}
	return 1;
}

int func_618()
{
	if ((Global_1626500 == 0 && unk_0x1504F110F2576375()) && (((((((Global_1626500.f_5 != 0 || Global_1626500.f_102390 > 0) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 15)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 18)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 19)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 29)) || unk_0x08BA6DD398CA197C(Global_1626500.f_4, 28)) || unk_0x08BA6DD398CA197C(Global_1626500.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_619()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x08BA6DD398CA197C(Global_2359719[iVar0 /*26*/].f_13, 26))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2359719[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_620()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4601), 1);
	}
	if (Global_2482149.f_4601 > 0)
	{
		unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_KILL");
		unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA");
		unk_0x7C1793252FA472B6("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x5A6B86444D23FCA8(1);
		Global_2482149.f_4601 = 0;
		unk_0x0756AF366187C194("DisableFlightMusic", 0);
		unk_0x0756AF366187C194("WantedMusicDisabled", 0);
		unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
		if (!unk_0x28C1B9853548BD8E(unk_0x367152330DB70D69(), "am_pi_menu"))
		{
			if (Global_2482149.f_4611 > -1)
			{
				unk_0xC8656944A36C8E78(Global_2482149.f_4611);
				Global_2482149.f_4611 = -1;
			}
		}
	}
}

void func_621()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1573924 = { Var0 };
}

void func_622()
{
	var uVar0;
	
	Global_1318162 = uVar0;
}

void func_623()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_637();
	func_626(1, 1);
	func_624();
}

void func_624()
{
	func_625(0, 0);
}

void func_625(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_626(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_636();
	}
	func_628(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_627(0);
	func_138();
}

void func_627(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_628(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_635())
		{
			func_634();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_632();
		func_398(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
	}
	else
	{
		func_629();
	}
}

void func_629()
{
	if (func_635() && !func_631())
	{
		func_634();
	}
	if (func_631())
	{
		func_630();
	}
	else
	{
		func_632();
		func_398(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_630()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_631()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_632()
{
	if (func_635() && !func_631())
	{
		func_634();
	}
	func_633();
	Global_2404993.f_649 = 0;
}

void func_633()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_634()
{
	if (func_631())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_635()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_636()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_637()
{
	func_638();
	Global_2404993.f_1813 = 0;
}

void func_638()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_639()
{
	return Global_1573843;
}

void func_640()
{
	Global_2482149.f_4602 = 0;
}

void func_641()
{
	if (unk_0x0C1D3C552325765B() != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1 = 0;
	}
}

void func_642()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (iVar0 != -1)
	{
		Global_1614576[iVar0 /*324*/] = -1;
	}
}

void func_643(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_175(iParam0, func_171(iParam1), 0);
	iVar0++;
	if (!func_174(iParam0))
	{
		func_166(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_167(iParam0, iVar0, iParam1, 1);
	}
}

int func_644(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_201.f_6;
}

int func_645(int iParam0)
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
			if (func_365(unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_646()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 3) || unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 4))
	{
		if (unk_0x2C22E7D1C80A53EF() || unk_0x44F90FBF2C1E8021())
		{
			unk_0xA0303A6B8C99DD6A(800);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1642), 5);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 3))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1642), 3);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1642, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1642), 4);
	}
	func_649(0);
	func_648(0);
	func_647(0);
}

void func_647(int iParam0)
{
	if (Global_2482149.f_4380 != iParam0)
	{
		Global_2482149.f_4380 = iParam0;
	}
}

void func_648(bool bParam0)
{
	if (Global_2482149.f_4379 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2482149.f_4379 = bParam0;
	}
}

void func_649(int iParam0)
{
	if (Global_2482149.f_4377 != iParam0)
	{
		Global_2482149.f_4377 = iParam0;
	}
}

void func_650(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x367152330DB70D69();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69617)
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x0286E1026327707E(&Var1);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x5DCAD2F659FD51F3(&Var14);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xD660C18DC0B0416A(&Var28);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x69F19B986E64A802(&Var52);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_penned_in"))
		{
			unk_0x2B9499F823AD9D4D(&Param0);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xE710F68D7F7F6DBC(&Var66);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x04BADAC1C9C10BEF(&Var79);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xAD6691D2B297C152(&Var93);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x5DAC2993B423DE6A(&Var107);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x04F66D0DA94C82FA(&Var123);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xE8B1B7294780FBB4(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xD7EEAF15B6F4D72C(&Var150);
			}
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xD6666F4B2CA7FC7F(&Var164);
		}
	}
}

int func_651(struct<20> Param0)
{
	func_660(func_661(Param0.f_0), Param0);
	unk_0x861EA6260F5D252A(func_659(9));
	unk_0x23DFD22869618226(func_658(9));
	func_655(0, -1, 0);
	func_653(133);
	unk_0x4331DF6C42BE352E(&Local_643, 88);
	unk_0xCCA45C9E00D2BC01(&Local_2827, 385);
	if (!func_652())
	{
		func_615();
	}
	if (unk_0xD9E8CA806A80203D())
	{
		unk_0xB21EB307350F5CA1(&(Local_643.f_52), &(Local_643.f_53));
	}
	Local_3212.f_2 = unk_0x6AC3C3A7CD358D90();
	unk_0x401559486BCA4D9B(0);
	return 1;
}

int func_652()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_610())
		{
			return 0;
		}
		if (func_608(155))
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

void func_653(int iParam0)
{
	func_621();
	func_654();
	func_640();
	Global_1573924.f_4 = iParam0;
	Global_1573924.f_5 = iParam0;
	func_372(iParam0, -1);
	func_27(&(Global_1573924.f_18), 0, 0);
	Global_2482149.f_4439 = 0;
	Global_2452809[0] = func_81();
	Global_2452809[1] = func_81();
	Global_2452809[2] = func_81();
	Global_2452809[3] = func_81();
	Global_2452809[4] = func_81();
	func_135();
	func_247();
	if (func_133() && !func_132())
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 16);
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_1573924.f_1), 17);
	}
}

void func_654()
{
	var uVar0;
	
	Global_1573949 = uVar0;
}

int func_655(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_657();
			}
			else
			{
				return 0;
			}
		}
		if (!func_656())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_657();
					}
					else
					{
						return 0;
					}
				}
				if (func_610())
				{
					if (!bParam2)
					{
						func_657();
					}
					else
					{
						return 0;
					}
				}
				if (func_608(155))
				{
					if (!bParam2)
					{
						func_657();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_657();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_657();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_657();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_656()
{
	return Global_1315206;
}

void func_657()
{
	unk_0x78C587487CD40B92();
}

int func_658(int iParam0)
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

int func_659(int iParam0)
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

void func_660(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_657();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_661(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}


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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123[65];
	float fLocal_319 = 0f;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	struct<3> Local_326 = { 0, 0, 0 } ;
	struct<3> Local_329 = { 0, 0, 0 } ;
	float fLocal_332 = 0f;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	float fLocal_353 = 0f;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	int iLocal_366 = 0;
	struct<3> Local_367[65];
	var uLocal_563[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_629[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	var uLocal_643[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	struct<68> Local_656 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	struct<535> Local_744 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1279 = -1;
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
	var uLocal_1301 = -1082130432;
	var uLocal_1302 = 3;
	var uLocal_1303 = 0;
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
	var uLocal_1318 = -1;
	var uLocal_1319 = 0;
	var uLocal_1320 = -1;
	var uLocal_1321 = -1;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
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
	var uLocal_1343 = -1082130432;
	var uLocal_1344 = 3;
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
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = -1;
	var uLocal_1361 = 0;
	var uLocal_1362 = -1;
	var uLocal_1363 = -1;
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
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = -1082130432;
	var uLocal_1386 = 3;
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
	var uLocal_1402 = -1;
	var uLocal_1403 = 0;
	var uLocal_1404 = -1;
	var uLocal_1405 = -1;
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
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = -1082130432;
	var uLocal_1428 = 3;
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
	var uLocal_1443 = 0;
	var uLocal_1444 = -1;
	var uLocal_1445 = 0;
	var uLocal_1446 = -1;
	var uLocal_1447 = -1;
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
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = -1082130432;
	var uLocal_1470 = 3;
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
	var uLocal_1486 = -1;
	var uLocal_1487 = 0;
	var uLocal_1488 = -1;
	var uLocal_1489 = -1;
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
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = -1082130432;
	var uLocal_1512 = 3;
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
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = -1;
	var uLocal_1529 = 0;
	var uLocal_1530 = -1;
	var uLocal_1531 = -1;
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
	var uLocal_1552 = 0;
	var uLocal_1553 = -1082130432;
	var uLocal_1554 = 3;
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
	var uLocal_1570 = -1;
	var uLocal_1571 = 0;
	var uLocal_1572 = -1;
	var uLocal_1573 = -1;
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
	var uLocal_1595 = -1082130432;
	var uLocal_1596 = 3;
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
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = -1;
	var uLocal_1613 = 0;
	var uLocal_1614 = -1;
	var uLocal_1615 = -1;
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
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = -1082130432;
	var uLocal_1638 = 3;
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
	var uLocal_1654 = -1;
	var uLocal_1655 = 0;
	var uLocal_1656 = -1;
	var uLocal_1657 = -1;
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
	var uLocal_1678 = 0;
	var uLocal_1679 = -1082130432;
	var uLocal_1680 = 3;
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
	var uLocal_1696 = -1;
	var uLocal_1697 = 0;
	var uLocal_1698 = -1;
	var uLocal_1699 = -1;
	var uLocal_1700 = 0;
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
	var uLocal_1721 = -1082130432;
	var uLocal_1722 = 3;
	var uLocal_1723 = 0;
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
	var uLocal_1738 = -1;
	var uLocal_1739 = 0;
	var uLocal_1740 = -1;
	var uLocal_1741 = -1;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
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
	var uLocal_1763 = -1082130432;
	var uLocal_1764 = 3;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = -1;
	var uLocal_1781 = 0;
	var uLocal_1782 = -1;
	var uLocal_1783 = -1;
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
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = -1082130432;
	var uLocal_1806 = 3;
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
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = -1;
	var uLocal_1823 = 0;
	var uLocal_1824 = -1;
	var uLocal_1825 = -1;
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
	var uLocal_1846 = 0;
	var uLocal_1847 = -1082130432;
	var uLocal_1848 = 3;
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
	var uLocal_1864 = -1;
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
	var uLocal_1906 = -1;
	var uLocal_1907 = 0;
	var uLocal_1908 = -1;
	var uLocal_1909 = -1;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
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
	var uLocal_1931 = -1082130432;
	var uLocal_1932 = 3;
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
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = -1;
	var uLocal_1949 = 0;
	var uLocal_1950 = -1;
	var uLocal_1951 = -1;
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
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = -1082130432;
	var uLocal_1974 = 3;
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
	var uLocal_1990 = -1;
	var uLocal_1991 = 0;
	var uLocal_1992 = -1;
	var uLocal_1993 = -1;
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
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = -1082130432;
	var uLocal_2016 = 3;
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
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = -1;
	var uLocal_2033 = 0;
	var uLocal_2034 = -1;
	var uLocal_2035 = -1;
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
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = -1082130432;
	var uLocal_2058 = 3;
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
	var uLocal_2074 = -1;
	var uLocal_2075 = 0;
	var uLocal_2076 = -1;
	var uLocal_2077 = -1;
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
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = -1082130432;
	var uLocal_2100 = 3;
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
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = -1;
	var uLocal_2117 = 0;
	var uLocal_2118 = -1;
	var uLocal_2119 = -1;
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
	var uLocal_2140 = 0;
	var uLocal_2141 = -1082130432;
	var uLocal_2142 = 3;
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
	var uLocal_2158 = -1;
	var uLocal_2159 = 0;
	var uLocal_2160 = -1;
	var uLocal_2161 = -1;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
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
	var uLocal_2183 = -1082130432;
	var uLocal_2184 = 3;
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
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = -1;
	var uLocal_2201 = 0;
	var uLocal_2202 = -1;
	var uLocal_2203 = -1;
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
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = -1082130432;
	var uLocal_2226 = 3;
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
	var uLocal_2243 = 0;
	var uLocal_2244 = -1;
	var uLocal_2245 = -1;
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
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = -1082130432;
	var uLocal_2268 = 3;
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
	var uLocal_2284 = -1;
	var uLocal_2285 = 0;
	var uLocal_2286 = -1;
	var uLocal_2287 = -1;
	var uLocal_2288 = 0;
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
	var uLocal_2309 = -1082130432;
	var uLocal_2310 = 3;
	var uLocal_2311 = 0;
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
	var uLocal_2326 = -1;
	var uLocal_2327 = 0;
	var uLocal_2328 = -1;
	var uLocal_2329 = -1;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
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
	var uLocal_2351 = -1082130432;
	var uLocal_2352 = 3;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = -1;
	var uLocal_2369 = 0;
	var uLocal_2370 = -1;
	var uLocal_2371 = -1;
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
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = -1082130432;
	var uLocal_2394 = 3;
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
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = -1;
	var uLocal_2411 = 0;
	var uLocal_2412 = -1;
	var uLocal_2413 = -1;
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
	var uLocal_2434 = 0;
	var uLocal_2435 = -1082130432;
	var uLocal_2436 = 3;
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
	var uLocal_2452 = -1;
	var uLocal_2453 = 0;
	var uLocal_2454 = -1;
	var uLocal_2455 = -1;
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
	var uLocal_2477 = -1082130432;
	var uLocal_2478 = 3;
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
	var uLocal_2494 = -1;
	var uLocal_2495 = 0;
	var uLocal_2496 = -1;
	var uLocal_2497 = -1;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
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
	var uLocal_2519 = -1082130432;
	var uLocal_2520 = 3;
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
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = -1;
	var uLocal_2537 = 0;
	var uLocal_2538 = -1;
	var uLocal_2539 = -1;
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
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = -1082130432;
	var uLocal_2562 = 3;
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
	var uLocal_2578 = -1;
	var uLocal_2579 = 0;
	var uLocal_2580 = -1;
	var uLocal_2581 = -1;
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
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = -1082130432;
	var uLocal_2604 = 3;
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
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = -1;
	var uLocal_2621 = 0;
	var uLocal_2622 = -1;
	struct<12> Local_2623[32];
	struct<12> Local_3008 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	fLocal_319 = 40000f;
	iLocal_355 = unk_0x8CCC0A0504C52531();
	iLocal_356 = unk_0x8CCC0A0504C52531();
	iLocal_357 = -1;
	iLocal_358 = -1;
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_765(ScriptParam_0))
		{
			func_727();
		}
	}
	while (true)
	{
		func_726();
		if (func_719() || func_717())
		{
			func_727();
		}
		if (func_715())
		{
			func_727();
		}
		func_689();
		switch (func_688(unk_0x6B7EE7681161BCAB()))
		{
			case 0:
				if (func_687() == 1)
				{
					if (func_686())
					{
						func_685(unk_0x6B7EE7681161BCAB(), 1);
					}
				}
				break;
			
			case 1:
				if (func_687() == 1)
				{
					func_138();
					func_126();
				}
				else if (func_687() == 3)
				{
					func_685(unk_0x6B7EE7681161BCAB(), 3);
				}
				break;
			
			case 3:
				func_727();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_687())
			{
				case 0:
					if (func_113())
					{
						func_112(1);
					}
					break;
				
				case 1:
					if (Local_656.f_37 == 6)
					{
						func_112(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_333, 1000, 0))
					{
						func_112(3);
					}
					break;
				
				case 3:
					func_727();
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
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xB331FCEB94EB05C8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				*uParam0 = unk_0x765FF3592EC81689();
			}
		}
		else
		{
			*uParam0 = unk_0xE3903F59E2F22150();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!unk_0x0E4018692D92041D(Local_656.f_2, 0))
		{
			unk_0x8950ED5730F62EE8(&(Local_656.f_2), 0);
			Local_656.f_1 = unk_0x78DCC5D0CB43DEBA();
		}
	}
	switch (Local_656.f_37)
	{
		case 0:
			if (func_43())
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
			if (func_1(&(Local_656.f_43), func_29(), 0) || unk_0x0E4018692D92041D(Local_656.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_656.f_38 = unk_0x78DCC5D0CB43DEBA();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_656.f_39), func_28(0), 0) || unk_0x0E4018692D92041D(Local_656.f_2, 0))
			{
				if (!unk_0x0E4018692D92041D(Local_656.f_2, 1))
				{
					Local_656.f_1 = unk_0x78DCC5D0CB43DEBA();
					unk_0x8950ED5730F62EE8(&(Local_656.f_2), 1);
					func_27(&(Local_656.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_358, &iLocal_357);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_656.f_41), 20000, 0) || Local_656.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_656.f_3))
				{
					func_27(&(Local_656.f_45), 0, 0);
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
		if (unk_0x4F94F07DAD382CDA(Local_656.f_67[iVar0 /*2*/].f_1) && !unk_0xD62C4419A41F106A(unk_0xF2D53AA87148ACED(Local_656.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			iVar2 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0x0E4018692D92041D(Local_2623[iVar1 /*12*/].f_1, 1) || Local_2623[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0x0E4018692D92041D(Local_2623[iVar1 /*12*/].f_1, 0))
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
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 275801163;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 111286607;
	Param0.f_1 = unk_0x95B959F18401C09A();
	if (!iParam14 == 0)
	{
		unk_0x09269A9CFC145847(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			iVar2 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar2);
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
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
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
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			unk_0x8950ED5730F62EE8(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x0E4018692D92041D(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x8950ED5730F62EE8(&(Local_656.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
				if (unk_0xC4DEA49C5B465481(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_656.f_50)
	{
		Local_656.f_50 = iVar1;
	}
	else
	{
		Local_656.f_66 = (Local_656.f_50 - iVar1);
	}
	if (iVar2 > Local_656.f_51)
	{
		Local_656.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
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
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312745;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2623[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4);
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
	switch (Local_656.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10830)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10831)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10832)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10833)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10834)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10835)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10836 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10837)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10838)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10839)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10840)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10841))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10842))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_10954)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_10955)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10845))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10847))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10848))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10849))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_656.f_3)
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
		if (Local_656.f_4[iParam0] == unk_0x72B85B341ADBE9DE() && func_21(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4, 0))
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
	switch (Local_656.f_3)
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
	
	iVar0 = Local_2623[iParam0 /*12*/].f_4;
	iVar1 = Local_2623[iParam0 /*12*/].f_4.f_2;
	if (!unk_0x0E4018692D92041D(Local_656.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_656.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_656.f_49++;
			unk_0x8950ED5730F62EE8(&(Local_656.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_656.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_656.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_656.f_4[iVar3] < 0 || func_21(iVar0, Local_2623[Local_656.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2623[Local_656.f_4[iVar3] /*12*/].f_4, iVar1, Local_2623[Local_656.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_656.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_357 = iVar3;
				iLocal_358 = iParam0;
			}
			Local_656.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_656.f_4[iVar5] == iParam0)
				{
					Local_656.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_656.f_3 == 2)
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
	
	if (unk_0x0E4018692D92041D(Local_656.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_656.f_4[iVar0] == iParam0)
			{
				Local_656.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xCE689A8E8C42ED78(&(Local_656.f_48), iParam0);
		unk_0xCE689A8E8C42ED78(&(Local_656.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x78DCC5D0CB43DEBA();
		}
		else
		{
			*uParam0 = unk_0x765FF3592EC81689();
		}
	}
	else
	{
		*uParam0 = unk_0xE3903F59E2F22150();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0x0E4018692D92041D(Local_656.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_656.f_3)
	{
		case 0:
			return Global_262145.f_10147;
		
		case 8:
			return Global_262145.f_10149;
		
		case 3:
			return Global_262145.f_10150;
		
		case 1:
			return Global_262145.f_10940;
		
		case 6:
			return Global_262145.f_10941;
		
		case 10:
			return Global_262145.f_10943;
		
		case 11:
			return Global_262145.f_10945;
		
		case 12:
			return Global_262145.f_10946;
		
		case 15:
			return Global_262145.f_10950;
		
		case 16:
			return Global_262145.f_10951;
		
		case 17:
			return Global_262145.f_10952;
		
		case 18:
			return Global_262145.f_10953;
		
		case 13:
			return Global_262145.f_10944;
		
		case 14:
			return Global_262145.f_10947;
		
		case 2:
			return Global_262145.f_10152;
		
		case 7:
			return Global_262145.f_10942;
		
		case 9:
			return Global_262145.f_10948;
		
		case 5:
			return Global_262145.f_10153;
		
		case 4:
			return Global_262145.f_10151;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_10910;
}

void func_30(int iParam0)
{
	Local_656.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_43() && ((Local_656.f_37 == 0 || func_5(Local_656.f_3)) || Local_656.f_54 < 10))
	{
		Var0 = { Local_656.f_67[iLocal_352 /*2*/] };
		if (func_42(Var0.f_0))
		{
			if (!unk_0x22C3124A898FB82A(Var0.f_1))
			{
				if (func_40(Local_656.f_3, iLocal_352, &Var2, &uVar5))
				{
					Local_656.f_55[iLocal_352] = func_36(iLocal_352);
					if (unk_0x0E4018692D92041D(Local_2623[Local_656.f_55[iLocal_352] /*12*/].f_2, iLocal_352))
					{
						if (func_33(&(Local_656.f_67[iLocal_352 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x9EA78777174DE734(unk_0xF2D53AA87148ACED(Local_656.f_67[iLocal_352 /*2*/].f_1), 1, 1);
							unk_0xD303E20CB0AE4AD0(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), 1);
							unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), 1);
							unk_0xD47EB38F463B3441(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), 0);
							func_32(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), 1);
							if (unk_0x854E8B95CE1C5D29("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
							{
								if (unk_0xA0EDFFB6CF5B314A(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0xE48FAA8A938257C9(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), "MPBitset");
								}
								unk_0x8950ED5730F62EE8(&iVar6, 10);
								unk_0x8950ED5730F62EE8(&iVar6, 11);
								unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_352 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_656.f_55[iLocal_352] = -1;
							Local_656.f_54++;
						}
					}
				}
			}
		}
		iLocal_352++;
		if (iLocal_352 >= 10)
		{
			iLocal_352 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
	{
		if (unk_0xA0EDFFB6CF5B314A(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xE48FAA8A938257C9(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x8950ED5730F62EE8(&uVar0, 13);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&uVar0, 13);
		}
		unk_0x2EBF31F210B945F6(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xE96A50F1DE6657CB(iParam1))
	{
		return 0;
	}
	if (!unk_0x9907FB1F75C1A914(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0xB7350047030F7672(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x765F6FEEFF39224F(iVar1))
	{
		*uParam0 = unk_0x0C9AA119B878DDB0(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (unk_0x22C3124A898FB82A(*uParam0))
		{
			if (bParam15)
			{
				unk_0xA6C43DE7267202AC(iVar1, 1);
			}
			unk_0xFE8201EFB515D77B(iVar1, iParam10);
			if (unk_0x0371ECBEC27AF4BE(iVar1))
			{
				if (bParam8)
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 1);
				}
				else
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x5A48E05E63034C1F(*uParam0, unk_0x95B959F18401C09A(), 1);
				}
			}
			unk_0x2D5A67427544788C(iVar1, iParam9);
			unk_0x720715BA9E55E55A(iVar1, 1);
			if (bParam12)
			{
				unk_0xCBE9DB870BCC6085(iVar1);
				unk_0xF49FF7B4A27C1B94(iVar1, 5, 5, 1f);
			}
			func_34(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_34(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_35(unk_0x95B959F18401C09A(), Param0, iParam4) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405071.f_2908[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { Param0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam5;
	}
}

int func_35(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x7EECA16E87982278((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xF839A4FC3E76D324() - 1))
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
			{
				iVar8 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
				if (func_12(iVar8, 1, 1))
				{
					fVar3 = func_37(func_38(iVar8), Var4);
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

float func_37(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return unk_0x2A488C176D52CCA5(Param0, Param3);
}

Vector3 func_38(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

int func_39(int iParam0, var uParam1, var uParam2)
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

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)
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
	else if (func_41(iParam0))
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

int func_41(int iParam0)
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

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

bool func_43()
{
	return (func_5(Local_656.f_3) || func_41(Local_656.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_111(unk_0x95B959F18401C09A(), 0) || func_108(unk_0x95B959F18401C09A(), 0))
	{
		if (func_107(unk_0x95B959F18401C09A()) || func_105(unk_0x95B959F18401C09A()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x81457629DB148F89() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (func_47(&(Global_1574637.f_18)))
	{
		if (!func_1(&(Global_1574637.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1574637.f_18));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x396A8511217F9C1A() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_45()
{
	return unk_0x0E4018692D92041D(Global_1574637.f_1, 0);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)
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
			unk_0xF155B9F8CDEA94F5(0, iParam1);
			break;
		
		default:
			uVar1 = func_49(iParam1);
			iVar0 = unk_0x37FBC14B2F5D54DB(uVar1);
			if (unk_0x0E4018692D92041D(iVar0, iParam0))
			{
				unk_0xCE689A8E8C42ED78(&iVar0, iParam0);
				unk_0xF155B9F8CDEA94F5(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)
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

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_49(iParam1);
	uVar1 = unk_0x37FBC14B2F5D54DB(uVar0);
	return unk_0x0E4018692D92041D(uVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x0E4018692D92041D(Global_1574637.f_1, 2) && !func_8(unk_0x95B959F18401C09A())) && !func_7(unk_0x95B959F18401C09A()))
	{
		if (unk_0x786AF4A44E1B5B4B(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x786AF4A44E1B5B4B(sParam1))
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
		func_52(66, sParam0, sParam1, 1, -1, 2, 1);
		unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_104(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437364.f_3030)
		{
			return 0;
		}
	}
	func_70(uParam0, uParam0->f_17);
	func_67(uParam0);
	if (func_66())
	{
		func_67(uParam0);
	}
	if (func_65(uParam0->f_1))
	{
		func_58();
		if (Global_2437364.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437364.f_2708[0 /*80*/].f_1 == 13 || Global_2437364.f_2708[0 /*80*/].f_1 == 53) || Global_2437364.f_2708[0 /*80*/].f_1 == 54) || Global_2437364.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437364.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437364.f_2708[iVar0 + 1 /*80*/] = { Global_2437364.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437364.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_58();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_56(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2437364.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
					func_56(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56(var uParam0, int iParam1)
{
	func_57(uParam0, iParam1);
}

void func_57(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_58()
{
	bool bVar0;
	
	if (Global_2437364.f_3031)
	{
		return;
	}
	if (!Global_71858)
	{
		Global_71858 = 1;
		bVar0 = true;
	}
	func_59();
	if (bVar0)
	{
		Global_71858 = 0;
	}
}

void func_59()
{
	Global_2437364.f_3032 = 0;
	Global_2437364.f_3032.f_578 = 0;
	func_63(&(Global_2437364.f_3032.f_1));
	Global_2437364.f_3032.f_1.f_1 = 0;
	func_60(&(Global_2437364.f_3032.f_1));
}

void func_60(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x295B86DE57A0721D(0);
			unk_0x818901B332D5541D();
		}
		unk_0x83A1D480DB0B52CC(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x05CFB4D665C2A88D(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!unk_0xB59A1CE271CEA093(unk_0x3EE1295CEFBEFED4()))
		{
			if (!Global_71859)
			{
				if (unk_0xBB5E373390A5F824() && !func_62(0))
				{
					unk_0xACCDA78123DB57B0(800);
				}
			}
		}
	}
	func_61(0);
}

void func_61(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

bool func_62(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_63(var uParam0)
{
	func_64(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_64(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_65(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_66()
{
	return Global_2448756.f_16;
}

void func_67(var uParam0)
{
	if (func_69(uParam0->f_1))
	{
		uParam0->f_72 = func_68();
	}
}

int func_68()
{
	return 21;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
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
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_70(var uParam0, int iParam1)
{
	if (func_69(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_103() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_71(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_71(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_101(iParam0) && !bParam4)
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
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_133551[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_101(unk_0x95B959F18401C09A()) || (func_100() && func_99())) && !unk_0x0E4018692D92041D(Global_2528542.f_4582, 31)) && !bParam4)
	{
		uVar1 = func_98();
		if (unk_0x765F6FEEFF39224F(uVar1))
		{
			if (unk_0xE09156665EC2D83B(iVar1))
			{
				if (unk_0x5C7617A25D50AAE9(iVar1) != -1)
				{
					if (func_12(unk_0x5C7617A25D50AAE9(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_96(iParam1, iParam0, 0);
							}
							else
							{
								return func_84(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_84(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_96(iParam1, iParam0, 0);
				}
				else
				{
					return func_72(0, -1, 0);
				}
			}
			else
			{
				return func_72(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_96(iParam1, iParam0, 0);
		}
		else
		{
			return func_84(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
		}
	}
	return func_84(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
}

int func_72(bool bParam0, int iParam1, bool bParam2)
{
	return func_73(unk_0x95B959F18401C09A(), bParam0, iParam1, bParam2);
}

int func_73(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC4DEA49C5B465481(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	if ((func_83() || (func_82() && func_80())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_79(iParam2, iVar0);
		}
		else
		{
			return func_79(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_78(iVar0, iParam2, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_77(1);
				}
				else
				{
					return func_77(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_4, 20))
			{
				return func_74(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_74(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_77(1);
	}
	return func_77(0);
}

int func_74(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_76(iParam0, iParam1, iParam3);
	if (func_75(Global_4456448.f_138474, 1))
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
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
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

int func_75(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_161209 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_78(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_77(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_78(int iParam0, int iParam1, int iParam2)
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
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 0);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 1);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 2);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 4);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 5);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 6);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 8);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 9);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 10);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 12);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 13);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 14);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_76(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_80()
{
	if (func_81())
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_4456448.f_165254, 4);
}

bool func_81()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_82()
{
	if (unk_0x289064CB38B560AA())
	{
		return unk_0x0E4018692D92041D(Global_4456448.f_165254, 0);
	}
	return ((unk_0x0E4018692D92041D(Global_4456448.f_165254, 0) || Global_1648547) && unk_0x1BCDA92AD0A7835B(joaat("fm_deathmatch_creator")) > 0);
}

int func_83()
{
	if (func_81() && unk_0x289064CB38B560AA())
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589819[iVar2 /*818*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_93(1))
			{
				iVar3 = func_89(iParam0);
				if (!iVar3 == -1)
				{
					return func_87(iVar3);
				}
			}
			if ((func_86(iParam1, iParam0, iVar0, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)) || ((func_78(unk_0x12D3B4C76D4AAB00(iParam1), unk_0x12D3B4C76D4AAB00(iParam0), 0) && unk_0x0E4018692D92041D(Global_4456448.f_15, 23)) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)))
			{
				return func_77(1);
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26))
			{
				return func_85(1);
			}
			else
			{
				return func_73(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_77(1);
			}
			else
			{
				return func_73(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_89(iParam0);
	if (!iVar4 == -1)
	{
		return func_87(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_85(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && unk_0x12D3B4C76D4AAB00(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == unk_0x12D3B4C76D4AAB00(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
	}
	return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_88(iParam0);
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

var func_88(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_89(int iParam0)
{
	if (!iParam0 == func_103())
	{
		if (func_91(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_90(iParam0)];
		}
	}
	return -1;
}

int func_90(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_103();
}

bool func_91(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_92(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_103();
}

int func_92(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_103())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if ((func_95() || func_94()) || (func_66() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_94()
{
	return Global_2448756.f_15;
}

var func_95()
{
	return Global_2448756.f_14;
}

int func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_93(1))
	{
		iVar2 = func_89(iParam1);
		if (!iVar2 == -1)
		{
			return func_87(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x0E4018692D92041D(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_103())
	{
		if (Global_4456448.f_133551[iParam0] != -1 && Global_4456448.f_133551[iParam0] <= 4)
		{
			if (Global_4456448.f_133551[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_133551[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_133551[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_133551[iParam0] == 4)
			{
				if (unk_0x0E4018692D92041D(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_133551[iParam0];
			}
		}
		else
		{
			iVar0 = func_73(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_21, 13))
		{
			iVar0 = func_97(iParam0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26) && !func_78(iParam0, unk_0x12D3B4C76D4AAB00(iParam1), 0))
		{
			iVar0 = func_85(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_161253;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_161254;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_161255;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_161256;
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

var func_98()
{
	return Global_2359302.f_2;
}

bool func_99()
{
	return unk_0x0E4018692D92041D(Global_2359302, 4);
}

bool func_100()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

int func_101(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_103()
{
	return -1;
}

void func_104(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_103();
	uParam1->f_18 = func_103();
	uParam1->f_19 = func_103();
	uParam1->f_20 = func_103();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_105(int iParam0)
{
	return func_106(iParam0, 20);
}

bool func_106(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_106(iParam0, 9);
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 && func_109(Global_1626536[iParam0 /*603*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1)
	{
		if (func_109(Global_1626536[iParam0 /*603*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0)
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
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_110(iParam0, 0);
	return 0;
}

int func_110(int iParam0, int iParam1)
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

int func_111(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0)
{
	Local_656.f_0 = iParam0;
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_656.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_656.f_39));
	func_118();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_656.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_114();
	}
	return 1;
}

void func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_656.f_3))
		{
			Local_656.f_67[iVar0 /*2*/] = func_117();
		}
		else
		{
			Local_656.f_67[iVar0 /*2*/] = func_115();
		}
		iVar0++;
	}
}

int func_115()
{
	int iVar0;
	
	switch (Local_656.f_3)
	{
		case 12:
			return func_116();
			break;
	}
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 2);
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

int func_116()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 2);
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

int func_117()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 2);
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

void func_118()
{
	int iVar0;
	
	iVar0 = func_122();
	Local_656.f_3 = iVar0;
	func_119(func_121(133, iVar0, 0, 0));
}

void func_119(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 603268417;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = iParam0;
	iVar3 = func_120(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 3, iVar3);
	}
}

var func_120(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
			{
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_121(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
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

int func_122()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_11239;
	iVar0[1] = Global_262145.f_10912;
	iVar0[2] = Global_262145.f_11243;
	iVar0[3] = Global_262145.f_11241;
	iVar0[4] = Global_262145.f_11242;
	iVar0[5] = Global_262145.f_11244;
	iVar0[6] = Global_262145.f_10913;
	iVar0[7] = Global_262145.f_10914;
	iVar0[8] = Global_262145.f_11240;
	iVar0[9] = Global_262145.f_10920;
	iVar0[10] = Global_262145.f_10915;
	iVar0[11] = Global_262145.f_10917;
	iVar0[12] = Global_262145.f_10918;
	iVar0[13] = Global_262145.f_10916;
	iVar0[14] = Global_262145.f_10919;
	iVar0[15] = Global_262145.f_10922;
	iVar0[16] = Global_262145.f_10923;
	iVar0[17] = Global_262145.f_10924;
	iVar0[18] = Global_262145.f_10925;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_125(iVar21) || func_123(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x9562E33C057F7589(0f, fVar20);
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
	return func_122();
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_124(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_8003)
		{
			if (Global_2499472.f_130[iVar0 /*2*/] == iVar1 && Global_2499472.f_130[iVar0 /*2*/].f_1 == func_121(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(int iParam0)
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
		
		case 236:
			return 19;
		
		default:
	}
	return -1;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10141;
		
		case 1:
			return Global_262145.f_10926;
		
		case 6:
			return Global_262145.f_10927;
		
		case 7:
			return Global_262145.f_10928;
		
		case 8:
			return Global_262145.f_10142;
		
		case 3:
			return Global_262145.f_10143;
		
		case 4:
			return Global_262145.f_10144;
		
		case 2:
			return Global_262145.f_10145;
		
		case 5:
			return Global_262145.f_10146;
		
		case 9:
			return Global_262145.f_10934;
		
		case 10:
			return Global_262145.f_10929;
		
		case 11:
			return Global_262145.f_10931;
		
		case 12:
			return Global_262145.f_10932;
		
		case 15:
			return Global_262145.f_10936;
		
		case 16:
			return Global_262145.f_10937;
		
		case 17:
			return Global_262145.f_10938;
		
		case 18:
			return Global_262145.f_10939;
		
		case 13:
			return Global_262145.f_10930;
		
		case 14:
			return Global_262145.f_10933;
		
		default:
	}
	return 1;
}

void func_126()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_656.f_55[iVar0] == unk_0x72B85B341ADBE9DE())
			{
				if (func_127(iVar0))
				{
					if (!unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_2, iVar0))
					{
						unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_2, iVar0))
				{
					unk_0xCE689A8E8C42ED78(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_2, iVar0))
			{
				unk_0xCE689A8E8C42ED78(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_127(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_39(iParam0, &Var0, &uVar3))
	{
		if (func_128(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7E0147E36EF8D6AC(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBEEA641EE4F42DBD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBEEA641EE4F42DBD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC106293D8BB9B710(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (unk_0x1D05F456626EB273(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_133(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_129(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_129(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x16E00F066AFFEA0D(func_131(unk_0x95B959F18401C09A()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x73E7A21FD53144AB(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_130(iVar1) || !bParam10) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))) || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x16E00F066AFFEA0D(func_131(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0E3238518B355643(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x12D3B4C76D4AAB00(iVar1) != iParam8 || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x16E00F066AFFEA0D(func_131(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0E3238518B355643(iVar1, Param0, fParam3))
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

int func_130(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_66() && Global_1589819[iVar0 /*818*/].f_789) && !func_132(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_38(iParam0);
}

int func_132(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam7 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_130(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && uParam9) && bParam6) && func_134(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								if (unk_0x16E00F066AFFEA0D(func_38(iVar1), Param0, 1) < fParam3)
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

int func_134(int iParam0)
{
	if (func_137(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_136(iParam0) };
	if (unk_0xFC40DD2526841632(&Global_2505680))
	{
		return 1;
	}
	if (func_135(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_90(iParam0);
	if (!iVar0 == func_103())
	{
		if (iVar0 == func_90(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_136(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_137(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_136(iParam0) };
		Global_2505693 = { func_136(iParam1) };
		if (unk_0x4A5CDD2BE8070A7F(&Global_2505680))
		{
			if (unk_0x4A5CDD2BE8070A7F(&Global_2505693))
			{
				unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680);
				unk_0xDD530AC51A578470(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_138()
{
	float fVar0;
	float fVar1;
	
	func_682();
	func_681();
	if (func_679())
	{
		func_567();
	}
	if (!func_7(unk_0x95B959F18401C09A()))
	{
		if (func_543(0, 1, 1))
		{
			if (unk_0x0E4018692D92041D(iLocal_347, 6))
			{
				unk_0xCE689A8E8C42ED78(&iLocal_347, 6);
			}
			switch (Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_3)
			{
				case 0:
					if (Local_656.f_37 < 2)
					{
						if (Local_656.f_37 > 0)
						{
							if (Local_656.f_3 != -1)
							{
								func_542(1);
								func_541(1);
							}
						}
					}
					else
					{
						func_541(2);
					}
					break;
				
				case 1:
					func_535(9);
					if (Local_3008.f_8 == 0)
					{
						Local_3008.f_8 = unk_0xEF4753434B24594D();
					}
					if (Local_656.f_37 >= 2)
					{
						func_541(2);
						Local_3008.f_9 = unk_0xEF4753434B24594D();
					}
					if (func_43())
					{
						func_535(0);
					}
					func_533((func_29() - func_534(&(Local_656.f_43), 0, 0)));
					func_530(func_532((func_29() - func_534(&(Local_656.f_43), 0, 0)), 0), func_531(Local_656.f_3));
					func_470(0, func_529());
					func_444();
					func_421();
					if (func_420())
					{
						func_419();
					}
					break;
				
				case 2:
					if (Local_656.f_37 > 2)
					{
						func_542(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_418())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_399(133, fVar0, fVar1, 0, 0, 0, 0);
						func_398(Local_656.f_3, 1);
						func_397(23, 1);
						if (Local_3008.f_8 == 0)
						{
							Local_3008.f_8 = unk_0xEF4753434B24594D();
						}
						if (Local_3008.f_9 == 0)
						{
							Local_3008.f_9 = unk_0xEF4753434B24594D();
						}
						func_393();
						unk_0xE5C8B4ABE1F29F25(1);
						if (func_418())
						{
							unk_0x4B06B5746CBEC99F(0f);
							unk_0xD875615F72CD34A6(0);
						}
						if (Local_656.f_3 == 14)
						{
							func_392(&Local_367);
						}
						func_391();
						if (!func_7(unk_0x95B959F18401C09A()))
						{
							func_52(63, "AMCH_STARTED", func_390(Local_656.f_3), func_68(), -1, func_68(), 1);
							if (func_387("AMCH_WARN", func_389(Local_656.f_3), func_388(Local_656.f_3)))
							{
								unk_0xEDF90B96BED57BCE(1);
							}
						}
						if (func_43())
						{
							func_370(678f, 794f, 206f, 8f, 0);
							func_370(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_370(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_541(3);
					}
					break;
				
				case 3:
					if (Local_656.f_37 > 3)
					{
						iLocal_349 = 0;
						func_541(4);
					}
					else
					{
						if (!unk_0x0E4018692D92041D(Local_656.f_2, 1))
						{
							func_331();
							func_328();
							func_327();
						}
						if (func_326(0) && !func_20(0))
						{
							func_325();
						}
					}
					if (func_418())
					{
						unk_0x1544DC31C28E93A4(unk_0x95B959F18401C09A());
					}
					func_324();
					func_301();
					func_567();
					func_470(0, 1);
					func_444();
					func_421();
					func_535(2);
					func_535(5);
					func_535(7);
					break;
				
				case 4:
					if (func_290(&uLocal_359, !unk_0x0E4018692D92041D(Local_656.f_2, 0)) || unk_0x0E4018692D92041D(Local_656.f_2, 0))
					{
						if (func_5(Local_656.f_3))
						{
							if (Local_656.f_37 == 5)
							{
								func_541(5);
							}
						}
						else
						{
							func_541(6);
						}
					}
					func_277();
					func_170();
					func_301();
					func_567();
					func_470(1, 1);
					func_391();
					break;
				
				case 5:
					if (Local_656.f_37 > 5)
					{
						func_541(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_165();
		}
	}
	else
	{
		func_165();
	}
	func_145();
	func_140();
	func_139();
}

void func_139()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_43())
	{
		Var0 = { Local_656.f_67[iLocal_366 /*2*/] };
		if (unk_0x22C3124A898FB82A(Var0.f_1))
		{
			iVar2 = unk_0xFC00F22E930BFD55(Var0.f_1);
			if (unk_0x0A81FE3D92AE2AC9(iVar2))
			{
				if (!unk_0x91D5C8283D19AF49(iVar2, 0))
				{
					unk_0x65F544B458249682(&iVar2);
				}
			}
		}
		iLocal_366++;
		if (iLocal_366 >= 10)
		{
			iLocal_366 = 0;
			iLocal_655 = iLocal_654;
			iLocal_654 = 0;
		}
	}
}

void func_140()
{
	if (Local_656.f_37 == 5)
	{
		if (unk_0x22C3124A898FB82A(Local_656.f_67[iLocal_366 /*2*/].f_1))
		{
			if (!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_366 /*2*/].f_1), 0))
			{
				if (!unk_0x0E4018692D92041D(iLocal_642, iLocal_366))
				{
					unk_0x8950ED5730F62EE8(&iLocal_642, iLocal_366);
					uLocal_643[iLocal_366] = unk_0x8CCC0A0504C52531();
					unk_0xE9739440E5BF08EE(uLocal_643[iLocal_366], "Explosion_Countdown", unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_366 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x1819081E2D6040CB(uLocal_643[iLocal_366], "Time", 30f);
				}
				if ((30000 - func_534(&(Local_656.f_45), 0, 0)) >= 0)
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_366 /*2*/].f_1), 0))
					{
						func_535(1);
						iLocal_654 = 1;
					}
				}
				else if (unk_0x6F3D61B58C7B4025(Local_656.f_67[iLocal_366 /*2*/].f_1))
				{
					unk_0x0D847D71D9E6142E(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_366 /*2*/].f_1));
					unk_0xF5E08ABEC1D02B0C(unk_0xFC00F22E930BFD55(Local_656.f_67[iLocal_366 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0x0E4018692D92041D(iLocal_642, iLocal_366) && !unk_0x66DE54BD13B1BD88(uLocal_643[iLocal_366]))
			{
				unk_0xCBE6AF58552C63B2(uLocal_643[iLocal_366]);
			}
		}
		if (iLocal_655)
		{
			if (!func_101(unk_0x95B959F18401C09A()))
			{
				func_142(func_532((30000 - func_534(&(Local_656.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_141();
			}
		}
	}
}

void func_141()
{
	Global_1373453.f_1109 = 1;
}

void func_142(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_144(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_143(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_143(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_144(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

void func_145()
{
	if (((func_12(unk_0x95B959F18401C09A(), 1, 1) && !func_7(unk_0x95B959F18401C09A())) && !func_161(unk_0x95B959F18401C09A())) && func_543(0, 1, 1))
	{
		if (Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_3 == 1)
		{
			func_158(func_160(Local_656.f_3), func_389(Local_656.f_3), 0, 0);
		}
		else if (Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_3 == 3)
		{
			if (!unk_0x0E4018692D92041D(iLocal_347, 10))
			{
				func_146(func_388(Local_656.f_3), 0);
			}
			else
			{
				func_146("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_391();
		}
	}
	else
	{
		func_391();
	}
}

void func_146(char* sParam0, bool bParam1)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return;
	}
	if (func_156(sParam0))
	{
		return;
	}
	func_150();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_149();
	func_148(bParam1);
	func_147();
}

void func_147()
{
	unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 1);
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_1312585.f_59), 0);
}

void func_149()
{
	Global_1312585.f_10 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 86400000);
	Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
}

void func_150()
{
	func_152();
	func_151(0);
}

void func_151(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xB331FCEB94EB05C8();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x78DCC5D0CB43DEBA();
		Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_152()
{
	if (!func_155())
	{
	}
	if (func_154())
	{
		unk_0xA6DAC1F822246DE2(&(Global_1312585.f_12));
		func_153();
		unk_0xFFC12DB0DD7F299E();
	}
}

void func_153()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			unk_0xE800DC85FDF60F85(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_154()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_155()
{
	if (!func_154())
	{
		return 0;
	}
	unk_0x1B3E16C485B8DD94(&(Global_1312585.f_12));
	func_153();
	return unk_0xC8F93D36F11F7BE8();
}

bool func_156(char* sParam0)
{
	if (!func_154())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_157(sParam0);
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12));
}

bool func_157(char* sParam0)
{
	if (!func_154())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

int func_158(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (func_159(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_150();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_149();
	func_148(bParam2);
	func_147();
	return 1;
}

bool func_159(char* sParam0, char* sParam1)
{
	if (!func_154())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (!unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam1) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

char* func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E())) || unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E())) || unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E())) || unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E())) || unk_0xD5AE919ED8631502(unk_0x33CD235DF1E6A94E()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E())) || unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E())) || unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E())) || unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E())) || unk_0xD5AE919ED8631502(unk_0x33CD235DF1E6A94E())) || unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
					iVar1 = unk_0x541D5C57194E73C4(iVar0);
					if (unk_0x9E374B5F44A76AE2(iVar1) && unk_0xC3622EC0E0215A79(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_sniperrifle"), 0) && !unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_heavysniper"), 0)) && !unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E())) || unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E())) || unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E())) || unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E())) || unk_0xD5AE919ED8631502(unk_0x33CD235DF1E6A94E()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_161(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		if (((func_164() && !func_163()) || func_162(unk_0x95B959F18401C09A(), 21)) || func_162(unk_0x95B959F18401C09A(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1574637.f_13)))
		{
			if (!func_1(&(Global_1574637.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1574637.f_13));
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 9);
}

bool func_162(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

bool func_163()
{
	return Global_1312417.f_1;
}

bool func_164()
{
	return Global_1312417;
}

void func_165()
{
	if (!unk_0x0E4018692D92041D(iLocal_347, 6))
	{
		unk_0x37ADE0EC220ACF87();
		func_470(1, 1);
		unk_0xCBE6AF58552C63B2(iLocal_355);
		unk_0xCE689A8E8C42ED78(&iLocal_347, 4);
		func_169();
		func_167();
		unk_0x42EB66BEBE5B2242(0f, 0, 21);
		unk_0x8950ED5730F62EE8(&iLocal_347, 6);
		func_166();
	}
}

void func_166()
{
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_7 = 0;
}

void func_167()
{
	if (Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
	{
		func_168();
	}
}

void func_168()
{
	struct<28> Var0;
	
	if (unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413883 = { Var0 };
	Global_2413883.f_6 = -1;
}

void func_169()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x8C40DC84EDF05997())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_170()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x95B959F18401C09A()))
		{
			unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1), 0);
			return;
		}
		if (func_161(unk_0x95B959F18401C09A()))
		{
			unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1), 0);
			return;
		}
		func_238(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3008.f_6 = (Local_3008.f_6 + iVar0);
			if (!Global_262145.f_11391)
			{
				func_237(10, Local_3008.f_6);
			}
			Global_2460813 = iVar0;
			if (func_236())
			{
				func_224(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0xDE1422FA669581FD(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3008.f_7 = (Local_3008.f_7 + iVar1);
			func_223();
			func_171(0, unk_0x33CD235DF1E6A94E(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1), 0);
	}
}

int func_171(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_172(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_172(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_182(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (unk_0x068481DAF84B9654(iParam1))
			{
				uVar1 = unk_0x22B02EC53152632C(iParam1);
				func_178(unk_0x61B226C460A8FCC2(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_173(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_173(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_176(iParam0, 1) };
	if (iParam0 == func_175(unk_0x33CD235DF1E6A94E()))
	{
		func_174(1);
	}
	func_178(Var0, iParam1, 0, sParam2, uParam3);
}

void func_174(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_175(int iParam0)
{
	return iParam0;
}

Vector3 func_176(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x51EBF893ED085755())
	{
		Var3 = { unk_0x4AE56AB92160A4AB(2) };
	}
	if (iParam0 == func_177(unk_0x33CD235DF1E6A94E()) && unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
	{
		Var0 = { unk_0x2CA911E7569D12EA(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		fVar6 = unk_0xC472E34C8FBEC678(iParam0);
		if (unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xCD1EDCB38767B47C(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_177(int iParam0)
{
	return iParam0;
}

void func_178(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437364.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437364.f_1289[iVar1 /*30*/] = { Param0 };
			Global_2437364.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_181(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_180();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_179();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), uParam6);
		}
	}
}

int func_179()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_180()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_181(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x16E00F066AFFEA0D(unk_0x69E12C716D4FB8BB(), Param0, 1);
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

var func_182(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_183(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_183(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_222(unk_0x95B959F18401C09A()) || func_221(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_219() || func_216(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_215(uParam2))
	{
	}
	if (func_214())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_212(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_211(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_209(0, &iVar1);
					break;
				
				case 3:
					func_209(1, &iVar1);
					break;
				
				case 1:
					func_207(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
		{
			return 0;
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
			func_204(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_193((func_203(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_204(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_188(iVar1);
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
				func_184((func_186(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_184((func_186(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_184(int iParam0)
{
	if (func_214())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_185(joaat("mpply_globalxp"), iParam0);
	}
}

void func_185(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, uParam1, 1);
	}
}

int func_186(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_187(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_187(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x75D54ED6C1AD1642(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_188(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_136(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar13 = func_191(func_192(&Var0));
			if (iVar13 == 0)
			{
				func_190(&Global_1382581, iParam0);
				func_189(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar13 == 1)
			{
				func_190(&Global_1382582, iParam0);
				func_189(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar13 == 2)
			{
				func_190(&Global_1382583, iParam0);
				func_189(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar13 == 3)
			{
				func_190(&Global_1382584, iParam0);
				func_189(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar13 == 4)
			{
				func_190(&Global_1382585, iParam0);
				func_189(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_189(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1382576 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_191(int iParam0)
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_192(var uParam0)
{
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	if (func_214())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_202(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_202(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_201(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_199(iParam0, 1);
		}
		func_198(639, iParam0, -1, 1);
		func_197(640, func_199(iParam0, 1), -1, 1, 0);
		Global_1382702[func_202(-1)] = iParam0;
		func_194(7, 0);
	}
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_196(iParam0, iParam1))
	{
		iVar0 = func_195();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_195()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_196(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_202(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_202(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_202(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_202(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_202(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_202(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_202(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_202(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_202(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_202(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_202(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_202(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_202(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_202(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_202(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_202(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_202(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_202(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_202(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_202(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_202(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_202(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_202(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_202(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_202(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_202(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_202(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_202(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_202(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_202(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_202(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_202(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_202(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_202(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_202(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_202(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_202(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_202(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_202(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_202(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_202(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_202(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_202(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_202(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_202(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_202(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_202(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_202(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_199(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_200(iParam0, 0);
}

int func_200(int iParam0, int iParam1)
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
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
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

int func_201(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_2437364.f_1, iParam0);
	}
	return 1;
}

int func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_203(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_202(-1)];
			}
			else if (func_201(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_202(-1)];
	}
	return 0;
}

void func_204(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, func_202(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_205(iParam0))
	{
		func_197(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_198(iParam0, iVar0, iParam2, 1);
	}
}

int func_205(int iParam0)
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
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
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

int func_206(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_202(iParam1)];
	if (unk_0x75D54ED6C1AD1642(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		iVar4 = unk_0xDD4FFAA17341D382(iVar0);
		if (unk_0x1B094AC15936B3DB(iVar4))
		{
			iVar5 = unk_0xEB9DC13235C0B345(iVar4);
			if (unk_0x12D3B4C76D4AAB00(iVar5) != -1)
			{
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_78(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_137(unk_0x95B959F18401C09A(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_208(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_208(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_208(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_209(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xF839A4FC3E76D324())
		{
			iVar3 = iVar0;
			if (unk_0x1B094AC15936B3DB(iVar3))
			{
				iVar4 = unk_0xEB9DC13235C0B345(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_137(unk_0x95B959F18401C09A(), iVar4))
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
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_210(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_137(unk_0x95B959F18401C09A(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_208(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_208(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_210(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_208(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_212(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_203(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_203(unk_0x95B959F18401C09A());
		}
	}
	if (func_213(8000, 0, 0) > 0)
	{
		if (func_213(8000, 0, 0) < (iParam0 + func_203(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_213(8000, 0, 0) - func_203(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_213(int iParam0, bool bParam1, int iParam2)
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
	return Global_289559[iParam0];
}

int func_214()
{
	return 1;
}

int func_215(var uParam0)
{
	if (unk_0x6D2E2622CA149402(uParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04(uParam0, "") || unk_0xCE3CFF625BEBAA04(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	return func_217(func_218(iParam0));
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_218(int iParam0)
{
	if (func_111(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

bool func_219()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_66();
	}
	return func_220(Global_4456448.f_138474);
}

int func_220(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5003[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_221(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_222(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_223()
{
	Global_2460154 = 1;
}

void func_224(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_236())
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
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_225(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_225(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_225(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_225(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case 1727256317:
		case -2017925037:
			func_225(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_236())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_16()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x5787B31B4578002B(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(iVar4))
		{
			*uParam0 = func_232(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_231(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_226(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_226(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_227(iParam0);
	}
}

void func_227(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_236())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_230(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9CB3557CC6EF3B3E();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ADF905D8AC780D1(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_228(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_228(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_229(&(uParam0->f_13));
	func_229(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_229(var uParam0)
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

int func_230(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_231(int iParam0, var uParam1)
{
	Global_2460949 = uParam1;
	Global_2460948 = iParam0;
}

int func_232(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_236())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = uParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = uParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_233(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_233(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1803946278;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = { Param0.f_65 };
	Var0.f_2.f_32 = iParam84;
	iVar35 = func_235(Var0.f_1);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_234();
		unk_0x09269A9CFC145847(1, &Var0, 35, iVar35);
	}
}

void func_234()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_235(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_236()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

void func_237(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23355 == 0 || Global_262145.f_23355 == 1)
		{
			if (!unk_0x4CE1DD5CFC1F941E() || Global_262145.f_23355 == 1)
			{
				Global_2528542.f_274 = iParam0;
				if (iParam1 > Global_262145.f_6475)
				{
					iParam1 = Global_262145.f_6475;
				}
				Global_2528542.f_275 = iParam1;
				Global_2528542.f_276 = 0;
			}
		}
	}
}

void func_238(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x72B85B341ADBE9DE(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_656.f_1 - iLocal_345)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11326)
		{
			iVar1 = Global_262145.f_11326;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_276() * iVar1);
		*uParam1 = (func_275() * iVar1);
		fVar2 = func_274();
		if (fVar2 > 0f && !unk_0x0E4018692D92041D(Local_656.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_273())
			{
				iVar3 = func_273();
			}
			iVar4 = Local_656.f_51;
			if (iVar4 > func_272())
			{
				iVar4 = func_272();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_265(func_271(), func_270(), iVar3, fVar2, func_269(), func_268(), func_267(), iVar4)) * Global_262145.f_11339)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_265(func_264(), func_263(), iVar3, fVar2, func_269(), func_268(), func_267(), iVar4)) * Global_262145.f_11340)));
		}
		else
		{
			func_261(1);
		}
	}
	else
	{
		func_261(0);
	}
	func_239(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_239(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_260())
		{
			if (func_259(0))
			{
				if (!func_255(0))
				{
					if (unk_0xC4DEA49C5B465481(func_254()))
					{
						if (func_253() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_253());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_251(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_244("GB_BCUT_TICK1", func_254(), iVar0, 0, 0, 1, 1);
						}
						func_243(20);
						func_240(func_254(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 614714962;
		Var0.f_1 = unk_0x95B959F18401C09A();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_242(iParam0);
		func_241(&(Var0.f_6), &(Var0.f_7));
		unk_0x09269A9CFC145847(1, &Var0, 8, func_235(iParam0));
	}
}

void func_241(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_242(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_244(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		if (unk_0x786AF4A44E1B5B4B(&Var1))
		{
		}
		unk_0x1F85AD4B26B92795(sParam0);
		unk_0x75D3F9044123D4F9(func_71(iParam1, -2, 1, 0, 0));
		unk_0xD61E5ED1D4E687A5(func_249(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x75D3F9044123D4F9(iParam3);
		}
		unk_0xE800DC85FDF60F85(iParam2);
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		func_245(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_245(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_248() || !unk_0x289064CB38B560AA()) || !func_14(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = func_246(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_247(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_248()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

var func_249(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_250(&cVar0);
}

var func_250(char[4] cParam0)
{
	return cParam0;
}

void func_251(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_252(1);
	}
	else
	{
		iVar1 = func_252(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_252(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_253()
{
	return Global_262145.f_12280;
}

int func_254()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_255(bool bParam0)
{
	return func_256(unk_0x95B959F18401C09A(), bParam0);
}

int func_256(int iParam0, bool bParam1)
{
	return func_257(iParam0, bParam1, 1);
}

int func_257(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_258(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_103() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	if (iParam0 != func_103())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_103())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_259(bool bParam0)
{
	return func_91(unk_0x95B959F18401C09A(), bParam0);
}

bool func_260()
{
	return func_92(unk_0x95B959F18401C09A());
}

void func_261(bool bParam0)
{
	if (bParam0)
	{
		if (func_262(1))
		{
			unk_0x8950ED5730F62EE8(&Global_1574662, 1);
		}
	}
	else if (func_262(2))
	{
		unk_0x8950ED5730F62EE8(&Global_1574662, 2);
	}
}

int func_262(int iParam0)
{
	var uVar0;
	
	uVar0 = func_206(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x0E4018692D92041D(uVar0, 0) && unk_0x0E4018692D92041D(iVar0, 1)) && unk_0x0E4018692D92041D(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x0E4018692D92041D(iVar0, 3) && unk_0x0E4018692D92041D(iVar0, 4)) && unk_0x0E4018692D92041D(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x0E4018692D92041D(iVar0, 6) && unk_0x0E4018692D92041D(iVar0, 7)) && unk_0x0E4018692D92041D(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x0E4018692D92041D(iVar0, 9) && unk_0x0E4018692D92041D(iVar0, 10)) && unk_0x0E4018692D92041D(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_263()
{
	return Global_262145.f_10826;
}

int func_264()
{
	return Global_262145.f_10824;
}

int func_265(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_266(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_266(int iParam0, int iParam1, int iParam2)
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

float func_267()
{
	return Global_262145.f_10829;
}

float func_268()
{
	return Global_262145.f_10828;
}

float func_269()
{
	return Global_262145.f_10827;
}

int func_270()
{
	return Global_262145.f_10825;
}

int func_271()
{
	return Global_262145.f_10823;
}

int func_272()
{
	return Global_262145.f_11231;
}

int func_273()
{
	return Global_262145.f_11230;
}

var func_274()
{
	if (func_20(0))
	{
		return Global_262145.f_10850;
	}
	if (func_20(1))
	{
		return Global_262145.f_10851;
	}
	if (func_20(2))
	{
		return Global_262145.f_10852;
	}
	return Global_262145.f_10853;
}

int func_275()
{
	return Global_262145.f_10822;
}

int func_276()
{
	return Global_262145.f_10821;
}

void func_277()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1, 1) && (func_289() || unk_0x0E4018692D92041D(Local_656.f_2, 0)))
	{
		if (func_69(func_288()))
		{
			func_287();
		}
		if (func_12(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0x0E4018692D92041D(Local_656.f_2, 0))
			{
				if (func_326(0))
				{
					iVar2 = Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4;
					func_283(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_281(64, func_282(Local_656.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_389(Local_656.f_3), 1, 2, 0);
						}
						else if (func_280())
						{
							func_281(69, func_282(Local_656.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_389(Local_656.f_3), 1, 2, 0);
						}
						else
						{
							func_281(64, func_282(Local_656.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_389(Local_656.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_281(67, func_282(Local_656.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_389(Local_656.f_3), 1, 2, 0);
						}
						else if (func_280())
						{
							func_281(75, func_282(Local_656.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_389(Local_656.f_3), 1, 2, 0);
						}
						else
						{
							func_281(67, func_282(Local_656.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_389(Local_656.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_281(67, func_282(Local_656.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_389(Local_656.f_3), 1, 2, 0);
						}
						else if (func_280())
						{
							func_281(75, func_282(Local_656.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_389(Local_656.f_3), 1, 2, 0);
						}
						else
						{
							func_281(67, func_282(Local_656.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_389(Local_656.f_3), 1, 2, 0);
						}
					}
					else
					{
						uVar3 = unk_0xDD4FFAA17341D382(Local_656.f_4[0]);
						if (unk_0x1B094AC15936B3DB(uVar3))
						{
							iVar4 = unk_0xEB9DC13235C0B345(iVar3);
							if (Local_2623[Local_656.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2623[Local_656.f_4[0] /*12*/].f_4;
							func_283(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_279(76, func_103(), func_282(Local_656.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_389(Local_656.f_3), -1, fVar1, 1, 2, unk_0xEEF8394DB3D3DFA1(iVar4));
							}
							else if (func_280())
							{
								func_279(77, func_103(), func_282(Local_656.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_389(Local_656.f_3), iVar0, -1082130432, 1, 2, unk_0xEEF8394DB3D3DFA1(iVar4));
							}
							else
							{
								func_279(76, func_103(), func_282(Local_656.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_389(Local_656.f_3), iVar0, -1082130432, 1, 2, unk_0xEEF8394DB3D3DFA1(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1), 1);
			func_278(133);
		}
	}
}

void func_278(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_279(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_104(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_280()
{
	return 0;
}

int func_281(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_104(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_56(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_282(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x65CD0D9BE7EAB2FD())
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
			if (unk_0x65CD0D9BE7EAB2FD())
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

int func_283(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_284(Local_656.f_3, iParam2) / 10f);
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

float func_284(int iParam0, int iParam1)
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
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_286(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_285(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_285(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_286(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			func_56(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_288()
{
	return Global_2437364.f_2708[0 /*80*/].f_1;
}

bool func_289()
{
	return unk_0x0E4018692D92041D(Global_1574637.f_1, 25);
}

int func_290(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_300()) && !(func_111(unk_0x95B959F18401C09A(), 0) && (func_107(unk_0x95B959F18401C09A()) || func_299(unk_0x95B959F18401C09A())))) && !func_297(unk_0x95B959F18401C09A()))
	{
		func_296();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 25);
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_295(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_47(&(uParam0->f_5)))
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
				func_292();
				func_295(uParam0, 2);
			}
			break;
		
		case 2:
			func_292();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_291("AMEV_LBD_HELP"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				func_295(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
				func_295(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
			return 1;
	}
	return 0;
}

bool func_291(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_292()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0))
	{
		if (((((!unk_0xE35413546DC97620() && !unk_0x0E4018692D92041D(Global_2528542.f_786, 2)) && func_12(unk_0x95B959F18401C09A(), 1, 1)) && !Global_68807) && !Global_53675) && !unk_0xBB5E373390A5F824())
		{
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 1);
			func_294("AMEV_LBD_HELP", -1);
			func_293(1);
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 0);
		}
	}
}

void func_293(int iParam0)
{
	unk_0x19200462D21D0B7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_300())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_294(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 0, iParam1);
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_296()
{
	Global_2460155 = 1;
}

int func_297(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_298(int iParam0)
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
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

bool func_299(int iParam0)
{
	return func_106(iParam0, 19);
}

bool func_300()
{
	return Global_2437364.f_2708[0 /*80*/].f_1 != 0;
}

void func_301()
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
	
	if (Local_656.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_323() && !func_101(unk_0x95B959F18401C09A()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_103();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_656.f_4[iVar16] > -1)
			{
				uVar30 = unk_0xDD4FFAA17341D382(Local_656.f_4[iVar16]);
				if (unk_0x1B094AC15936B3DB(uVar30))
				{
					iVar4 = unk_0xEB9DC13235C0B345(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2623[Local_656.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_283(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2623[Local_656.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_259(1))
								{
									if (func_91(iVar4, 1))
									{
										uVar26[iVar16] = func_71(iVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x72B85B341ADBE9DE();
		if (func_101(unk_0x95B959F18401C09A()))
		{
			uVar31 = func_321();
			iVar32 = unk_0x5C7617A25D50AAE9(uVar31);
			if (unk_0xC4DEA49C5B465481(iVar32))
			{
				iVar33 = unk_0xF8E1DE22DEB7E100(iVar32);
				if (unk_0x1B094AC15936B3DB(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_283(&iVar13, &fVar18, iLocal_349, 1);
		func_283(&iVar14, &fVar19, Local_2623[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_534(&(Local_656.f_39), 0, 0);
		iVar15 = func_532(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_320(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0x0E4018692D92041D(iLocal_347, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_323() || Local_656.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_656.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_316(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_282(Local_656.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_317(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_280())
		{
			func_315(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_317(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_306(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_282(Local_656.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_317(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_302();
	}
}

void func_302()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_305();
	if (fVar0 >= 0f)
	{
		if (Local_656.f_37 == 3)
		{
			if (func_12(unk_0x95B959F18401C09A(), 1, 1))
			{
				if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
				{
					iVar1 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x91D5C8283D19AF49(iVar1, 0))
					{
						func_304(iVar1, &fLocal_353);
						fVar2 = (fVar0 + fLocal_353);
						unk_0x42EB66BEBE5B2242(fVar2, 1, 21);
						func_303(fVar0);
						return;
					}
				}
			}
		}
		if (func_291("AMCH_FLYLOW"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		if (unk_0x0E4018692D92041D(iLocal_347, 4))
		{
			unk_0xCBE6AF58552C63B2(iLocal_355);
			unk_0xCE689A8E8C42ED78(&iLocal_347, 4);
		}
		unk_0x42EB66BEBE5B2242(0f, 0, 21);
	}
}

void func_303(float fParam0)
{
	float fVar0;
	
	if (unk_0x042284CA4DDD6C92(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_535(6);
			if (!unk_0x0E4018692D92041D(iLocal_347, 4))
			{
				unk_0x0F8EAEEC97DDBCB3(iLocal_355, "Altitude_Warning", "EXILE_1", 1);
				unk_0x8950ED5730F62EE8(&iLocal_347, 4);
			}
		}
		else
		{
			if (func_291("AMCH_FLYLOW"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			if (unk_0x0E4018692D92041D(iLocal_347, 4))
			{
				unk_0xCBE6AF58552C63B2(iLocal_355);
				unk_0xCE689A8E8C42ED78(&iLocal_347, 4);
			}
		}
	}
}

float func_304(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
	unk_0x8C1596BAD35D957A(Var1, uParam1, 1, 0);
	unk_0x8C1596BAD35D957A(Var1, &uVar4, 0, 0);
	if (unk_0x371FB1BDFC7B95DB())
	{
		func_535(3);
		unk_0x8950ED5730F62EE8(&iLocal_347, 10);
		func_27(&uLocal_343, 0, 0);
	}
	else if (unk_0x0E4018692D92041D(iLocal_347, 10))
	{
		if (func_1(&uLocal_343, 2000, 0))
		{
			unk_0xCE689A8E8C42ED78(&iLocal_347, 10);
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

float func_305()
{
	switch (Local_656.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_312(0) == 0)
	{
		return;
	}
	func_311();
	iVar1 = 0;
	if (((Global_2459680[0] != iParam0 || Global_2459680[1] != iParam1) || Global_2459680[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2459680[0] = iParam0;
	Global_2459680[1] = iParam1;
	Global_2459680[2] = iParam2;
	Global_2459680[3] = 0;
	Global_2459680[4] = 0;
	if (Global_2459680[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[0]);
			Global_2459686[0 /*16*/] = { func_310(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_307(iParam3, &(Global_2459686[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2459680[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[1]);
			Global_2459686[1 /*16*/] = { func_310(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_307(iParam4, &(Global_2459686[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2459680[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[2]);
			Global_2459686[2 /*16*/] = { func_310(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_307(iParam5, &(Global_2459686[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_307(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x95B959F18401C09A() != func_103())
			{
				if (func_161(unk_0x95B959F18401C09A()) == 0)
				{
					func_307(iParam7, unk_0xEEF8394DB3D3DFA1(unk_0x95B959F18401C09A()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_161(unk_0x95B959F18401C09A()) == 0)
			{
				func_307(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_161(unk_0x95B959F18401C09A()) == 0)
			{
				func_307(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_215(sParam14))
	{
		sVar2 = sParam14;
	}
	func_142(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_141();
}

void func_307(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_144(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_143(6, iVar0);
		Global_1373453.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_3835.f_183[iVar0] = iParam3;
		Global_1373453.f_3835.f_172[iVar0] = iParam2;
		Global_1373453.f_3835.f_260[iVar0] = iParam4;
		Global_1373453.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_3835.f_443[iVar0] = iParam7;
		Global_1373453.f_3835.f_454[iVar0] = fParam8;
		Global_1373453.f_3835.f_497[iVar0] = iParam9;
		Global_1373453.f_3835.f_508[iVar0] = iParam10;
		Global_1373453.f_3835.f_205[iVar0] = iParam11;
		Global_1373453.f_3835.f_216[iVar0] = iParam12;
		Global_1373453.f_3835.f_227[iVar0] = iParam13;
		Global_1373453.f_3835.f_238[iVar0] = iParam14;
		Global_1373453.f_3835.f_249[iVar0] = iParam15;
		Global_1373453.f_3835.f_519[iVar0] = iParam16;
		Global_1373453.f_3835.f_530[iVar0] = iParam17;
		Global_1373453.f_3835.f_541[iVar0] = iParam18;
		Global_1373453.f_3835.f_552[iVar0] = iParam19;
		Global_1373453.f_3835.f_563[iVar0] = iParam20;
		Global_1373453.f_3835.f_574[iVar0] = iParam21;
		Global_1373453.f_3835.f_585[iVar0] = iParam22;
		Global_1373453.f_3835.f_596[iVar0] = iParam23;
		Global_1373453.f_3835.f_607[iVar0] = iParam24;
		Global_1373453.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_309())
		{
			Global_1373453.f_1109 = 1;
		}
		if (unk_0x4CE1DD5CFC1F941E())
		{
			iVar2 = 0;
			unk_0x3A5E614EC752B188(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1373453.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1373453.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1373453.f_1109 = 1;
			}
			if (func_308())
			{
				Global_1373453.f_1113 = 1;
			}
		}
	}
}

int func_308()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0x3A5E614EC752B188(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_309()
{
	if (((unk_0x97B6A6696D936191() == 8 || unk_0x97B6A6696D936191() == 9) || unk_0x97B6A6696D936191() == 10) || unk_0x97B6A6696D936191() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_310(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x434854E9CAE13C4A("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x434854E9CAE13C4A("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x434854E9CAE13C4A("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x434854E9CAE13C4A("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x434854E9CAE13C4A("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_311()
{
	unk_0x581AE7724ACAD410(8);
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(6);
	unk_0x581AE7724ACAD410(7);
	Global_2460158 = 1;
}

int func_312(bool bParam0)
{
	if (func_314())
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x95B959F18401C09A(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_313()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

bool func_314()
{
	return unk_0x0E4018692D92041D(Global_2359302, 12);
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_312(0) == 0)
	{
		return;
	}
	func_311();
	iVar1 = 0;
	if (((Global_2459680[0] != iParam0 || Global_2459680[1] != iParam1) || Global_2459680[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2459680[0] = iParam0;
	Global_2459680[1] = iParam1;
	Global_2459680[2] = iParam2;
	Global_2459680[3] = 0;
	Global_2459680[4] = 0;
	if (Global_2459680[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[0]);
			Global_2459686[0 /*16*/] = { func_310(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_142(iParam3, &(Global_2459686[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2459680[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[1]);
			Global_2459686[1 /*16*/] = { func_310(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_142(iParam4, &(Global_2459686[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2459680[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[2]);
			Global_2459686[2 /*16*/] = { func_310(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_142(iParam5, &(Global_2459686[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_142(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x95B959F18401C09A() != func_103())
			{
				if (func_161(unk_0x95B959F18401C09A()) == 0)
				{
					func_142(iParam7, unk_0xEEF8394DB3D3DFA1(unk_0x95B959F18401C09A()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_161(unk_0x95B959F18401C09A()) == 0)
			{
				func_142(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_161(unk_0x95B959F18401C09A()) == 0)
			{
				func_142(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_215(sParam13))
	{
		sVar2 = sParam13;
	}
	func_142(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_141();
}

void func_316(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_312(0) == 0)
	{
		return;
	}
	func_311();
	iVar1 = 0;
	if (((Global_2459680[0] != iParam0 || Global_2459680[1] != iParam1) || Global_2459680[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2459680[0] = iParam0;
	Global_2459680[1] = iParam1;
	Global_2459680[2] = iParam2;
	Global_2459680[3] = 0;
	Global_2459680[4] = 0;
	if (Global_2459680[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[0]);
			Global_2459686[0 /*16*/] = { func_310(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_307(-1, &(Global_2459686[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2459680[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[1]);
			Global_2459686[1 /*16*/] = { func_310(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_307(-1, &(Global_2459686[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2459680[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xEEF8394DB3D3DFA1(Global_2459680[2]);
			Global_2459686[2 /*16*/] = { func_310(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_307(-1, &(Global_2459686[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_307(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x95B959F18401C09A() != func_103())
			{
				if (func_161(unk_0x95B959F18401C09A()) == 0)
				{
					func_307(-1, unk_0xEEF8394DB3D3DFA1(unk_0x95B959F18401C09A()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_161(unk_0x95B959F18401C09A()) == 0)
			{
				func_307(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_161(unk_0x95B959F18401C09A()) == 0)
			{
				func_307(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_215(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_142(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_141();
}

char* func_317()
{
	return "HUD_COUNTDOWN";
	switch (func_319(unk_0x95B959F18401C09A()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_318())
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

int func_318()
{
	if (func_319(unk_0x95B959F18401C09A()) == 133)
	{
		return Global_2528542.f_4810;
	}
	return -1;
}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

void func_320(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x7C475FA8D877007F())
	{
		if (unk_0x0E4018692D92041D(Global_2528542.f_4726, 0))
		{
			if (!unk_0x786AF4A44E1B5B4B(&(Global_2528542.f_4728)))
			{
				unk_0x9D8C631256FC1C8F(&(Global_2528542.f_4728));
			}
			unk_0x1FEA416E00837AFC(1);
			unk_0x65BA35D6D61F1574("FM_COUNTDOWN_30S_FIRA");
			unk_0x7CED302277C0F3D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
			unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
			unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
			if (Global_2528542.f_4736 > -1)
			{
				unk_0x44D426446FAF55FB(Global_2528542.f_4736);
				Global_2528542.f_4736 = -1;
			}
			Global_2528542.f_4726 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x0E4018692D92041D(Global_2528542.f_4726, 0))
		{
			if (unk_0x0E4018692D92041D(Global_2528542.f_4726, 4))
			{
				if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 2))
				{
					if (unk_0x79613679EEF99C5C())
					{
						if ((!unk_0xCE3CFF625BEBAA04(unk_0xF0895A7452078524(unk_0xDDB55BEB9D76717D()), "OFF") && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) && !unk_0x786AF4A44E1B5B4B(&(Global_2528542.f_4728)))
						{
							StringCopy(&(Global_2528542.f_4728), "", 32);
							unk_0x65BA35D6D61F1574("FM_COUNTDOWN_30S_FIRA");
							unk_0x7CED302277C0F3D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
							unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
							unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
							unk_0x1FEA416E00837AFC(1);
							unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 2);
						}
					}
				}
				else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x0E4018692D92041D(Global_2528542.f_4726, 5))
				{
					unk_0x9D8C631256FC1C8F("OFF");
				}
			}
			else if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x65BA35D6D61F1574("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x65BA35D6D61F1574("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x65BA35D6D61F1574("FM_COUNTDOWN_30S");
				}
				unk_0xDEFB5E2E5CBD460A("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 1);
			}
			else if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x69DA4FCCB5511BA4() != 0)
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0x01C1CF30CFBF4006())
						{
							StringCopy(&(Global_2528542.f_4728), unk_0x09B775396C505643(), 32);
							unk_0x9D8C631256FC1C8F("OFF");
						}
						unk_0x1FEA416E00837AFC(1);
						unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 3))
				{
					Global_2528542.f_4736 = unk_0x8CCC0A0504C52531();
					unk_0x0F8EAEEC97DDBCB3(Global_2528542.f_4736, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 0))
			{
				Global_2528542.f_4726 = 0;
				Global_2528542.f_4736 = -1;
				unk_0x7E2EAC500C9B54E3("FM_COUNTDOWN_30S_KILL");
				unk_0x1FEA416E00837AFC(0);
				unk_0x65BA35D6D61F1574("FM_PRE_COUNTDOWN_30S");
				unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
				unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 1);
				unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 1);
				unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 0);
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0x0E4018692D92041D(Global_2528542.f_4726, 2))
				{
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 2);
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 5);
				}
				else
				{
					unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4726), 5);
					unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4726), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 0))
		{
			Global_2528542.f_4726 = 0;
			Global_2528542.f_4736 = -1;
			unk_0x7E2EAC500C9B54E3("FM_COUNTDOWN_30S_KILL");
			unk_0x1FEA416E00837AFC(0);
			unk_0x65BA35D6D61F1574("FM_PRE_COUNTDOWN_30S");
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
			unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 1);
			unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 1);
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 0);
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 2);
				unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 5);
			}
			else
			{
				unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4726), 2);
				unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4726), 5);
			}
		}
	}
}

var func_321()
{
	if (unk_0x765F6FEEFF39224F(func_322()))
	{
		return func_322();
	}
	return func_98();
}

var func_322()
{
	return Global_2359302.f_3;
}

int func_323()
{
	switch (Local_656.f_3)
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

void func_324()
{
	int iVar0;
	struct<42> Var1;
	int iVar43;
	var uVar44;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		Local_744.f_534[iVar0 /*42*/] = { Var1 };
		Local_744.f_534[iVar0 /*42*/].f_1 = func_103();
		if (Local_656.f_4[iVar0] > -1)
		{
			uVar44 = unk_0xDD4FFAA17341D382(Local_656.f_4[iVar0]);
			if (unk_0x1B094AC15936B3DB(uVar44))
			{
				iVar43 = unk_0xEB9DC13235C0B345(iVar44);
				if (!func_14(iVar43, 0))
				{
					Local_744.f_534[iVar0 /*42*/] = Local_656.f_4[iVar0];
					Local_744.f_534[iVar0 /*42*/].f_1 = iVar43;
					Local_744.f_534[iVar0 /*42*/].f_9 = Local_2623[Local_656.f_4[iVar0] /*12*/].f_4;
					Local_744.f_534[iVar0 /*42*/].f_31 = -1;
					Local_744.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_325()
{
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_1725), 19);
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_656.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2623[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_327()
{
}

void func_328()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_283(&iVar1, &fVar2, iLocal_349, 1);
	switch (Local_656.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_330(sVar0, fVar2 >= 70f);
			if (unk_0x7C71681384076318(sVar0))
			{
				fVar2 = func_329(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xE6882F1E16916952(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xE534A599B28FE898();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_330(sVar0, bVar3);
			if (unk_0x7C71681384076318(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_329(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_329(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xE6882F1E16916952(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_354 != iLocal_349)
			{
				if (iLocal_349 > 0)
				{
					unk_0x0F8EAEEC97DDBCB3(iLocal_356, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x1819081E2D6040CB(iLocal_356, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_354 = iLocal_349;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0x0E4018692D92041D(iLocal_347, 3))
		{
			if (func_255(1))
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x8950ED5730F62EE8(&iLocal_347, 3);
		}
	}
	else if (unk_0x0E4018692D92041D(iLocal_347, 3))
	{
		if (func_255(1))
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0xCE689A8E8C42ED78(&iLocal_347, 3);
	}
}

float func_329(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_330(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x7C71681384076318(sParam0))
		{
			unk_0xDEFB5E2E5CBD460A(sParam0);
		}
	}
	else if (unk_0x7C71681384076318(sParam0))
	{
		unk_0x7CED302277C0F3D3(sParam0);
	}
}

void func_331()
{
	int iVar0;
	
	if ((!func_161(unk_0x95B959F18401C09A()) && !func_14(unk_0x95B959F18401C09A(), 0)) && func_12(unk_0x95B959F18401C09A(), 1, 1))
	{
		iVar0 = func_354();
		if (iVar0 != Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_346) || func_353(iVar0, iLocal_346))
			{
				if (!func_352() || func_1(&uLocal_335, 1000, 0))
				{
					func_27(&uLocal_335, 0, 0);
					iLocal_346 = iVar0;
					Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4 = iVar0;
					func_334();
					if (iLocal_345 == 0)
					{
						iLocal_345 = unk_0x78DCC5D0CB43DEBA();
					}
					if (Local_3008.f_11 == 0)
					{
						Local_3008.f_11 = unk_0xEF4753434B24594D();
					}
				}
			}
		}
		iLocal_349 = func_332();
	}
}

int func_332()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_656.f_3)
	{
		case 0:
			fVar1 = unk_0xEE6D400B03BA7F0B();
			break;
		
		case 1:
			fVar1 = unk_0xFADBDAE24FD2462D();
			break;
		
		case 2:
			fVar1 = unk_0xE534A599B28FE898();
			break;
		
		case 3:
			fVar1 = unk_0xB7AADFC2A97BFDD2();
			break;
		
		case 4:
			fVar1 = unk_0xE59C47393C61837B();
			break;
		
		case 5:
			fVar1 = unk_0x808CD9A8FA027937();
			break;
		
		case 8:
			iVar0 = unk_0x8579DB9B108971C2();
			break;
		
		case 9:
			fVar1 = unk_0xC549BDBEDE978311();
			break;
		
		case 11:
			fVar1 = unk_0x6198465F972B5ACE();
			break;
		
		case 12:
			fVar1 = unk_0x6198465F972B5ACE();
			break;
		
		case 13:
			fVar1 = unk_0xF751C93B5BEB9B4F();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0xEE14D9A9F531ADDC(iVar0);
	func_333(&iVar2);
	if (iVar2 == iLocal_348)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0x0E4018692D92041D(iLocal_347, 1))
			{
				func_27(&uLocal_337, 0, 0);
				Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4.f_2 = func_534(&uLocal_337, 0, 0);
				unk_0x8950ED5730F62EE8(&iLocal_347, 1);
			}
			else if ((func_534(&uLocal_337, 0, 0) % 1000) == 0)
			{
				Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4.f_2 = func_534(&uLocal_337, 0, 0);
			}
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&iLocal_347, 1);
	}
	if ((func_21(iLocal_348, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_339, 2000, 0))
	{
		iVar2 = iLocal_348;
		unk_0x8950ED5730F62EE8(&iLocal_347, 2);
	}
	else
	{
		iLocal_348 = iVar2;
		func_46(&uLocal_339);
		unk_0xCE689A8E8C42ED78(&iLocal_347, 2);
	}
	return iVar2;
}

void func_333(int iParam0)
{
	switch (Local_656.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x95B959F18401C09A(), 1, 1))
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if ((((unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()) || unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E())) || unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E())) || unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E())) || unk_0xD5AE919ED8631502(unk_0x33CD235DF1E6A94E()))
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

void func_334()
{
	if (!unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1, 2))
	{
		unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_1), 2);
		func_335(1);
	}
}

void func_335(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 7))
		{
			if ((!func_105(unk_0x95B959F18401C09A()) && !func_7(unk_0x95B959F18401C09A())) && !func_161(unk_0x95B959F18401C09A()))
			{
				if (func_164())
				{
					func_345(2, 0, 1);
					func_344();
				}
				if (func_343(0))
				{
					uVar0 = func_206(2480, -1, 0);
					unk_0xCE689A8E8C42ED78(&uVar0, 0);
					func_344();
				}
				if (func_343(func_342(func_319(unk_0x95B959F18401C09A()))))
				{
					uVar0 = func_206(2480, -1, 0);
					unk_0xCE689A8E8C42ED78(&uVar0, func_342(func_319(unk_0x95B959F18401C09A())));
					func_344();
				}
				if (func_341())
				{
					func_344();
				}
				if (func_319(unk_0x95B959F18401C09A()) > -1)
				{
					unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 7);
					if (func_319(unk_0x95B959F18401C09A()) == 236)
					{
						func_340();
					}
					func_338(func_339(func_319(unk_0x95B959F18401C09A())));
				}
			}
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 7))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 7);
		func_336();
	}
}

void func_336()
{
	if (func_337())
	{
		unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 17);
	}
}

bool func_337()
{
	return unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 17);
}

void func_338(var uParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = uParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_340()
{
	if (!func_337())
	{
		Global_2528542.f_6268 = unk_0x78DCC5D0CB43DEBA();
		unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 17);
	}
}

int func_341()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_342(int iParam0)
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
		
		case 236:
			return 12;
		
		default:
	}
	return Global_262145.f_23500;
}

bool func_343(int iParam0)
{
	var uVar0;
	
	uVar0 = func_206(2480, -1, 0);
	return unk_0x0E4018692D92041D(uVar0, iParam0);
}

void func_344()
{
	if (func_341())
	{
		Global_2437364.f_1155.f_16 = 1;
	}
}

void func_345(int iParam0, int iParam1, bool bParam2)
{
	if (func_164())
	{
		if (iParam1 == 1)
		{
			if (Global_2528542.f_4386 == -1)
			{
				Global_2528542.f_4386 = Global_262145.f_26155;
			}
			func_27(&(Global_2528542.f_4384), 0, 0);
			if (bParam2)
			{
				if (Global_2528542.f_4389 == -1)
				{
					Global_2528542.f_4389 = Global_262145.f_26156;
				}
				func_27(&(Global_2528542.f_4387), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_8 = 0;
				func_351(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_8 = 0;
			func_351(1);
		}
		if ((!unk_0x289064CB38B560AA() && !func_350()) && !func_346(unk_0x95B959F18401C09A()))
		{
			Global_968392 = 0;
		}
		unk_0x35EEC6C2BC821A71(false, -1, -1, iParam0);
	}
}

int func_346(int iParam0)
{
	if (func_347(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_348(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_348(int iParam0)
{
	return func_349(iParam0);
}

bool func_349(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

bool func_350()
{
	return Global_2448756.f_728;
}

void func_351(bool bParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_164())
		{
			if (func_12(unk_0x95B959F18401C09A(), 1, 0))
			{
				unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 1);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 342, 0);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 122, 0);
			}
			unk_0xC9CEFB3A060444AF(unk_0x95B959F18401C09A(), 1f);
			unk_0x1BFE3E4BBCCE8B31(0);
			unk_0x3E281A3DADCB2E6B(1);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					unk_0xB7B36B6BE857B203(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x95B959F18401C09A(), 1, 1))
			{
				unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 0);
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), 1);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 342, 1);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 122, 1);
				unk_0xC9CEFB3A060444AF(unk_0x95B959F18401C09A(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					unk_0xB7B36B6BE857B203(1, 0);
				}
			}
			unk_0x1BFE3E4BBCCE8B31(1);
			unk_0x3E281A3DADCB2E6B(0);
		}
	}
}

int func_352()
{
	switch (Local_656.f_3)
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

int func_353(int iParam0, int iParam1)
{
	if (Local_656.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_354()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_369())
	{
		if (Local_656.f_3 == 14)
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && func_368(unk_0x33CD235DF1E6A94E(), 0) == -1)
			{
				iVar2 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
				if ((!func_367(&iVar2, 0) || unk_0x541D5C57194E73C4(iVar2) != joaat("dodo")) && unk_0x7DD221C91135596A(iVar2))
				{
					func_360(Local_656.f_3 != 14, 1, 0);
					if (func_359())
					{
						iVar3 = func_358();
						if (iVar3 >= 0)
						{
							if (!unk_0x0E4018692D92041D(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_8[func_357(iVar3)], func_356(iVar3)))
							{
								iLocal_350++;
								unk_0x8950ED5730F62EE8(&(Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_8[func_357(iVar3)]), func_356(iVar3));
							}
						}
					}
					iVar0 = iLocal_350;
				}
			}
		}
		else
		{
			iVar0 = func_355();
		}
	}
	else
	{
		unk_0xB3B961C26A3B0548(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0xEE14D9A9F531ADDC(iVar0);
}

int func_355()
{
	switch (Local_656.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_356(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_357(iParam0) * 31);
}

int func_357(int iParam0)
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

int func_358()
{
	return iLocal_112;
}

int func_359()
{
	if (iLocal_119 == 1)
	{
		iLocal_119 = 0;
		return 1;
	}
	return 0;
}

void func_360(bool bParam0, bool bParam1, int iParam2)
{
	func_362(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_320.f_2 < Local_323.f_2)
		{
			Local_320.f_2 = 0f;
		}
		else
		{
			Local_323.f_2 = 0f;
		}
		if (Local_326.f_2 < Local_329.f_2)
		{
			Local_326.f_2 = 0f;
		}
		else
		{
			Local_329.f_2 = 0f;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), Local_123[iLocal_112 /*3*/]) < fLocal_319)
				{
					if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()) || unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
						{
							if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0))
							{
								bLocal_114 = true;
								iLocal_113 = 1;
							}
							if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
							{
								bLocal_115 = true;
								iLocal_113 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()) && !unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
				{
					func_361();
				}
				else if (!unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
				{
					func_361();
				}
				else if (!unk_0x7DD221C91135596A(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) && !bParam1)
				{
					func_361();
				}
				if (bLocal_114)
				{
					if (iLocal_118)
					{
						if (iLocal_117)
						{
							if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
							{
								func_361();
								iLocal_119 = 1;
							}
						}
						else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							iLocal_117 = 1;
						}
						else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							func_361();
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						iLocal_118 = 1;
					}
					else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						func_361();
					}
				}
				else if (bLocal_115)
				{
					if (iLocal_118)
					{
						if (iLocal_116)
						{
							if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
							{
								func_361();
								iLocal_119 = 1;
							}
						}
						else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							iLocal_116 = 1;
						}
						else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							func_361();
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						iLocal_118 = 1;
					}
					else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						func_361();
					}
				}
			}
			break;
	}
}

void func_361()
{
	bLocal_114 = false;
	bLocal_115 = false;
	iLocal_116 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
	iLocal_113 = 0;
}

void func_362(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_120 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_366(iVar0)) && (uParam1 || !func_365(iVar0)))
		{
			if (func_364(Local_120, Local_123[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_120, Local_123[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_112 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_363(iLocal_112);
}

void func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_320 = { 1103.014f, -233.0374f, 56.13004f };
			Local_323 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_332 = 30f;
			Local_326 = { 1093.589f, -248.5926f, 56.88639f };
			Local_329 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_320 = { 1044.182f, -324.5904f, 49.33408f };
			Local_323 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_332 = 30f;
			Local_326 = { 1007.983f, -320.6159f, 48.4543f };
			Local_329 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_320 = { 916.599f, -419.8782f, 35.62748f };
			Local_323 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_332 = 7f;
			Local_326 = { 912.1362f, -420.5161f, 35.38034f };
			Local_329 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_320 = { 757.7189f, -472.924f, 19.2535f };
			Local_323 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_332 = 20.75f;
			Local_326 = { 744.9114f, -480.7373f, 19.06514f };
			Local_329 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_320 = { 680.3677f, -581.1792f, 14.2145f };
			Local_323 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_332 = 45f;
			Local_326 = { 667.3692f, -610.5356f, 13.85401f };
			Local_329 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_320 = { 644.2497f, -844.7504f, 12.36707f };
			Local_323 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_332 = 25f;
			Local_326 = { 644.3659f, -859.3878f, 12.59677f };
			Local_329 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_320 = { 634.972f, -1011.64f, 10.92594f };
			Local_323 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_332 = 25f;
			Local_326 = { 634.9612f, -1029.123f, 10.61846f };
			Local_329 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_320 = { 645.7223f, -1191.215f, 10.45198f };
			Local_323 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_332 = 50f;
			Local_326 = { 645.7223f, -1228.966f, 10.98015f };
			Local_329 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_320 = { 642.1216f, -1295.73f, 9.005976f };
			Local_323 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_332 = 7f;
			Local_326 = { 644.7772f, -1298.168f, 9.128529f };
			Local_329 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_320 = { 686.5675f, -1444.71f, 9.065001f };
			Local_323 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_332 = 25f;
			Local_326 = { 682.3027f, -1429.872f, 9.890836f };
			Local_329 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_320 = { 718.7617f, -1734.313f, 9.082874f };
			Local_323 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_332 = 30f;
			Local_326 = { 717.5355f, -1748.646f, 9.363478f };
			Local_329 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_320 = { 694.3165f, -2049.806f, 0.009695f };
			Local_323 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_332 = 30f;
			Local_326 = { 693.1836f, -2063.225f, 0.429037f };
			Local_329 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_320 = { 642.6671f, -2494.551f, 0.468485f };
			Local_323 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_332 = 20f;
			Local_326 = { 647.0339f, -2506.202f, 0.583701f };
			Local_329 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_320 = { 691.8235f, -2558.219f, 0.363352f };
			Local_323 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_332 = 10.25f;
			Local_326 = { 695.7928f, -2561.034f, 0.346731f };
			Local_329 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_320 = { 723.6254f, -2562.171f, 0.255647f };
			Local_323 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_332 = 15f;
			Local_326 = { 735.765f, -2561.935f, 0.311182f };
			Local_329 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_320 = { 891.4387f, -2603.12f, 0f };
			Local_323 = { 704.4932f, -2634.793f, 45f };
			fLocal_332 = 20f;
			Local_326 = { 893.2578f, -2616.235f, 0f };
			Local_329 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_320 = { -2669.587f, 2491.96f, 2.043799f };
			Local_323 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_332 = 26.5f;
			Local_326 = { -2687.606f, 2494.868f, 2.608733f };
			Local_329 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_320 = { -1986.173f, 4521.799f, 0f };
			Local_323 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_332 = 17f;
			Local_326 = { -1995.668f, 4531.259f, 0f };
			Local_329 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_320 = { -526.0265f, 4472.442f, 0f };
			Local_323 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_332 = 10f;
			Local_326 = { -519.9281f, 4476.346f, 0f };
			Local_329 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_320 = { 98.1615f, 3384.489f, 45.45169f };
			Local_323 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_332 = 8f;
			Local_326 = { 152.6802f, 3346.793f, 45.02156f };
			Local_329 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_320 = { 147.8606f, 3406.796f, 38.03672f };
			Local_323 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_332 = 14.5f;
			Local_326 = { 130.0916f, 3425.417f, 38.05672f };
			Local_329 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_320 = { 2830.972f, 4967.14f, 34.56013f };
			Local_323 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_332 = 10f;
			Local_326 = { 2826.767f, 4964.185f, 34.10636f };
			Local_329 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_320 = { -151.5764f, 4264.417f, 31.04735f };
			Local_323 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_332 = 10f;
			Local_326 = { -148.3842f, 4261.071f, 31.57409f };
			Local_329 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_320 = { -426.6919f, 2964.272f, 14.848f };
			Local_323 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_332 = 7f;
			Local_326 = { -425.0283f, 2967.861f, 15.22699f };
			Local_329 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_320 = { -192.3414f, 2864.916f, 30.72595f };
			Local_323 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_332 = 10f;
			Local_326 = { -192.0129f, 2871.603f, 29.99943f };
			Local_329 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_320 = { 2539.185f, 2228.772f, 18.6102f };
			Local_323 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_332 = 10f;
			Local_326 = { 2543.708f, 2231.402f, 18.331f };
			Local_329 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_320 = { 2954.087f, 815.7209f, 0.037901f };
			Local_323 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_332 = 35f;
			Local_326 = { 2966.123f, 806.8889f, 0.544056f };
			Local_329 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_320 = { 2329.673f, -459.6648f, 70.24277f };
			Local_323 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_332 = 12f;
			Local_326 = { 2324.752f, -455.5238f, 70.25145f };
			Local_329 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_320 = { 1943.428f, -753.251f, 80.17905f };
			Local_323 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_332 = 7f;
			Local_326 = { 1943.366f, -758.287f, 80.32291f };
			Local_329 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_320 = { -271.2849f, -2414.993f, -10f };
			Local_323 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_332 = 30f;
			Local_326 = { -279.8399f, -2427.212f, -10f };
			Local_329 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_320 = { -1483f, 2691.428f, -10f };
			Local_323 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_332 = 12f;
			Local_326 = { -1478.152f, 2696.688f, -10f };
			Local_329 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_320 = { 222.1519f, -2343.487f, 0.039199f };
			Local_323 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_332 = 12f;
			Local_326 = { 216.959f, -2343.487f, 0.207734f };
			Local_329 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_320 = { 346.4622f, -2244.374f, 0.159779f };
			Local_323 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_332 = 20f;
			Local_326 = { 359.609f, -2244.468f, 0.129684f };
			Local_329 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_320 = { -1859.68f, -322.6357f, 56.16368f };
			Local_323 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_332 = 7.5f;
			Local_326 = { -1860.27f, -327.8634f, 57.543f };
			Local_329 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_320 = { -680.2632f, -600.818f, 69.11289f };
			Local_323 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_332 = 31.5f;
			Local_326 = { -680.6077f, -618.3658f, 69.27496f };
			Local_329 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_320 = { -1468.096f, -591.7158f, 67.05518f };
			Local_323 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_332 = 11.75f;
			Local_326 = { -1474.903f, -591.1215f, 67.08091f };
			Local_329 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_320 = { -1544.958f, -537.1475f, 72.44347f };
			Local_323 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_332 = 11.75f;
			Local_326 = { -1541.008f, -541.5494f, 71.61972f };
			Local_329 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_320 = { 333.2108f, -2727.274f, 20.71663f };
			Local_323 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_332 = 20f;
			Local_326 = { 343.1127f, -2727.236f, 20.23613f };
			Local_329 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_320 = { 1928.071f, 6228.355f, 43.49398f };
			Local_323 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_332 = 13f;
			Local_326 = { 1931.82f, 6235.634f, 43.37382f };
			Local_329 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_320 = { -736.4309f, -1590.921f, 10.80892f };
			Local_323 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_332 = 15f;
			Local_326 = { -727.2307f, -1585.221f, 11.78027f };
			Local_329 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_320 = { -676.3775f, -1548.553f, 12.33747f };
			Local_323 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_332 = 25f;
			Local_326 = { -654.203f, -1536.146f, 9.191055f };
			Local_329 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_320 = { -624.2344f, -1537.045f, 12.60193f };
			Local_323 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_332 = 8f;
			Local_326 = { -615.4003f, -1536.65f, 12.40271f };
			Local_329 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_320 = { -492.5057f, -1632.457f, 24.3307f };
			Local_323 = { -418.2088f, -1487.452f, 0f };
			fLocal_332 = 25f;
			Local_326 = { -486.2016f, -1636.095f, 24.20805f };
			Local_329 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_320 = { -359.3541f, -1639.693f, 13.13455f };
			Local_323 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_332 = 25f;
			Local_326 = { -378.1518f, -1705.66f, 12.47196f };
			Local_329 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_320 = { -243.4436f, -1814.623f, 25.69465f };
			Local_323 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_332 = 25f;
			Local_326 = { -235.1319f, -1822.094f, 25.86542f };
			Local_329 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_320 = { 84.55537f, -2046.159f, 13.30767f };
			Local_323 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_332 = 25f;
			Local_326 = { 17.90788f, -2035.773f, 12.62706f };
			Local_329 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_320 = { 221.5029f, -2232.766f, 9.88676f };
			Local_323 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_332 = 8f;
			Local_326 = { 218.583f, -2232.766f, 9.886198f };
			Local_329 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_320 = { 221.6518f, -2184.635f, 11.66457f };
			Local_323 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_332 = 8f;
			Local_326 = { 217.8995f, -2184.635f, 11.5405f };
			Local_329 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_320 = { 2326.57f, 1096.031f, 76.31458f };
			Local_323 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_332 = 21f;
			Local_326 = { 2334.453f, 1103.067f, 76.26603f };
			Local_329 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_320 = { 2379.442f, 1150.776f, 58.79632f };
			Local_323 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_332 = 12f;
			Local_326 = { 2374.064f, 1146.282f, 58.83331f };
			Local_329 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_320 = { -1179.405f, -355.2554f, 56.53003f };
			Local_323 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_332 = 12.5f;
			Local_326 = { -1178.385f, -361.8784f, 56.15081f };
			Local_329 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_320 = { -921.3846f, -384.94f, 137.0181f };
			Local_323 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_332 = 16f;
			Local_326 = { -914.1658f, -387.9444f, 137.0794f };
			Local_329 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_320 = { -740.2564f, 246.4529f, 132.2922f };
			Local_323 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_332 = 22f;
			Local_326 = { -726.6429f, 253.0676f, 132.3319f };
			Local_329 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_320 = { -771.2068f, 268.2729f, 132.1689f };
			Local_323 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_332 = 16f;
			Local_326 = { -770.8035f, 310.8625f, 137.4161f };
			Local_329 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_320 = { 259.2205f, 135.4146f, 136.7083f };
			Local_323 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_332 = 16f;
			Local_326 = { 261.9694f, 142.9676f, 136.6889f };
			Local_329 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_320 = { 393.548f, -30.87166f, 152.6635f };
			Local_323 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_332 = 8f;
			Local_326 = { 390.5358f, -36.08882f, 152.7813f };
			Local_329 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_320 = { 114.3139f, -648.4297f, 261.8488f };
			Local_323 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_332 = 20f;
			Local_326 = { 124.8467f, -646.6575f, 261.8488f };
			Local_329 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_320 = { -215.919f, -823.8436f, 126.0224f };
			Local_323 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_332 = 20f;
			Local_326 = { -225.397f, -820.3937f, 126.0812f };
			Local_329 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_320 = { -296.4725f, -802.0815f, 95.40108f };
			Local_323 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_332 = 20f;
			Local_326 = { -305.4602f, -798.8369f, 95.48194f };
			Local_329 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_320 = { -292.3034f, -823.3569f, 95.37621f };
			Local_323 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_332 = 20f;
			Local_326 = { -288.9206f, -814.022f, 95.37556f };
			Local_329 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_320 = { -256.3589f, -714.7838f, 110.1617f };
			Local_323 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_332 = 20f;
			Local_326 = { -253.7723f, -705.6632f, 110.1736f };
			Local_329 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_320 = { 1808.214f, 1949.246f, 71.73707f };
			Local_323 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_332 = 9.75f;
			Local_326 = { 1802.786f, 1950.262f, 71.74002f };
			Local_329 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_320 = { 2388.733f, 2931.941f, 46.62681f };
			Local_323 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_332 = 10f;
			Local_326 = { 2392.547f, 2934.867f, 46.6268f };
			Local_329 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_320 = { 2700.056f, 4836.381f, 42.07854f };
			Local_323 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_332 = 20.75f;
			Local_326 = { 2685.672f, 4821.653f, 42.18471f };
			Local_329 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_320 = { -1053.446f, 4766.245f, 234.3251f };
			Local_323 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_332 = 5f;
			Local_326 = { -1051.414f, 4767.193f, 234.4293f };
			Local_329 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_364(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7EECA16E87982278((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7EECA16E87982278((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7EECA16E87982278((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7EECA16E87982278((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7EECA16E87982278((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0)
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

int func_366(int iParam0)
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

int func_367(var uParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(*uParam0))
	{
		if (!unk_0xD62C4419A41F106A(*uParam0, 0) || iParam1)
		{
			if (unk_0x8AE34E8B10270D31(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0xF0D230FB550CD6EB(iParam0, iParam1))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam0, iParam1);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				iVar1 = unk_0xA2AD91D40FCCF9D2(unk_0x541D5C57194E73C4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x67FFBB75D2430704(iVar0, iVar3, 0))
					{
						if (unk_0x7BDC41A7CA0C77A2(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_369()
{
	switch (Local_656.f_3)
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

int func_370(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_386() < 10)
	{
		iVar0 = func_385();
		func_371(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_371(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_372(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_372(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_381(unk_0x95B959F18401C09A()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_380(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_375(Var0))
		{
			Global_2405071.f_45.f_64 = func_374(unk_0x95B959F18401C09A());
			func_373(Var0, iParam8);
		}
	}
}

void func_373(struct<12> Param0, int iParam12)
{
	Global_2405071.f_363[iParam12 /*12*/] = { Param0 };
	Global_2405071.f_363[iParam12 /*12*/].f_9 = 1;
}

int func_374(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_375(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405071.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_376(Global_2405071.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_376(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_379(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_377(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_379(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_377(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_377(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_378(Param0, Param3, Var0, Var3);
}

int func_378(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_379(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_380(var uParam0, var uParam1)
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

int func_381(int iParam0)
{
	if (((func_384(iParam0, 1) || func_383(iParam0)) || func_111(iParam0, 0)) || func_382(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_382(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

int func_383(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

bool func_384(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_374(iParam0) != 0;
	}
	return func_347(iParam0, bParam1);
}

int func_385()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_386()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_387(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x6D39881CA5436178(sParam0);
	unk_0xFA6BEE2B1507FF1E(sParam1);
	unk_0xFA6BEE2B1507FF1E(sParam2);
	return unk_0xA32C2C4DF096C08A(0);
}

char* func_388(int iParam0)
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

char* func_389(int iParam0)
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

char* func_390(int iParam0)
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

void func_391()
{
	if (!func_154())
	{
		return;
	}
	if (!unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_1312585.f_9)
	{
		return;
	}
	func_150();
}

void func_392(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_366(iVar0) && !func_365(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_123[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_393()
{
	if (!func_369())
	{
		if (Local_656.f_3 == 14)
		{
			func_396();
		}
		Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4.f_1 = func_355();
	}
	else if ((!unk_0x0E4018692D92041D(Global_1574637.f_1, 4) && !unk_0x0E4018692D92041D(Global_1574637.f_1, 5)) && !func_395(unk_0x95B959F18401C09A()))
	{
		func_394();
	}
}

void func_394()
{
	switch (Local_656.f_3)
	{
		case 0:
			unk_0x8092401F55B45241(8, 2);
			break;
		
		case 1:
			unk_0x8092401F55B45241(13, 2);
			break;
		
		case 2:
			unk_0x8092401F55B45241(4, 2);
			break;
		
		case 4:
			unk_0x8092401F55B45241(1, 2);
			break;
		
		case 3:
			unk_0x8092401F55B45241(2, 2);
			break;
		
		case 5:
			unk_0x8092401F55B45241(3, 2);
			break;
		
		case 6:
			unk_0x8092401F55B45241(11, 3);
			break;
		
		case 7:
			unk_0x8092401F55B45241(14, 1);
			break;
		
		case 8:
			unk_0x8092401F55B45241(29, 2);
			break;
		
		case 9:
			unk_0x8092401F55B45241(12, 2);
			break;
		
		case 10:
			unk_0x8092401F55B45241(10, 2);
			break;
		
		case 11:
			unk_0x8092401F55B45241(18, 2);
			break;
		
		case 12:
			unk_0x8092401F55B45241(20, 2);
			break;
		
		case 13:
			unk_0x8092401F55B45241(27, 2);
			break;
		
		case 15:
			unk_0x8092401F55B45241(26, 1);
			break;
		
		case 16:
			unk_0x8092401F55B45241(25, 1);
			break;
		
		case 17:
			unk_0x8092401F55B45241(22, 1);
			break;
		
		case 18:
			unk_0x8092401F55B45241(24, 1);
			break;
	}
	unk_0x8950ED5730F62EE8(&iLocal_347, 8);
}

bool func_395(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_396()
{
	Local_123[0 /*3*/] = { 1083f, -231f, 60f };
	Local_123[1 /*3*/] = { 1024f, -325f, 60f };
	Local_123[2 /*3*/] = { 910f, -401f, 43f };
	Local_123[3 /*3*/] = { 721f, -457f, 26f };
	Local_123[4 /*3*/] = { 643f, -579f, 26f };
	Local_123[5 /*3*/] = { 590f, -851f, 26f };
	Local_123[6 /*3*/] = { 590f, -1023f, 16f };
	Local_123[7 /*3*/] = { 582f, -1205f, 24f };
	Local_123[8 /*3*/] = { 608f, -1335f, 16f };
	Local_123[9 /*3*/] = { 640f, -1434f, 16f };
	Local_123[10 /*3*/] = { 671f, -1742f, 20f };
	Local_123[11 /*3*/] = { 651f, -2046f, 16f };
	Local_123[12 /*3*/] = { 603f, -2505f, 9f };
	Local_123[13 /*3*/] = { 673f, -2582f, 4f };
	Local_123[14 /*3*/] = { 728f, -2594f, 10f };
	Local_123[15 /*3*/] = { 794f, -2624f, 27f };
	Local_123[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_123[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_123[18 /*3*/] = { -513f, 4427f, 40f };
	Local_123[19 /*3*/] = { 126f, 3366f, 40f };
	Local_123[20 /*3*/] = { 143f, 3418f, 36f };
	Local_123[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_123[22 /*3*/] = { -162f, 4249f, 40f };
	Local_123[23 /*3*/] = { -408f, 2964f, 20f };
	Local_123[24 /*3*/] = { -181f, 2862f, 38f };
	Local_123[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_123[26 /*3*/] = { 2950f, 803f, 8f };
	Local_123[27 /*3*/] = { 2369f, -409f, 80f };
	Local_123[28 /*3*/] = { 1906f, -755f, 84f };
	Local_123[29 /*3*/] = { -403f, -2333f, 40f };
	Local_123[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_123[31 /*3*/] = { 219f, -2315f, 5f };
	Local_123[32 /*3*/] = { 350f, -2315f, 5f };
	Local_123[33 /*3*/] = { -1848f, -333f, 75f };
	Local_123[34 /*3*/] = { -693f, -608f, 69f };
	Local_123[35 /*3*/] = { -1461f, -582f, 53f };
	Local_123[36 /*3*/] = { -1553f, -546f, 59f };
	Local_123[37 /*3*/] = { 338f, -2758f, 23f };
	Local_123[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_123[39 /*3*/] = { -713f, -1538f, 13f };
	Local_123[40 /*3*/] = { -659f, -1518f, 13f };
	Local_123[41 /*3*/] = { -620f, -1502f, 16f };
	Local_123[42 /*3*/] = { -445f, -1575f, 26f };
	Local_123[43 /*3*/] = { -373f, -1680f, 19f };
	Local_123[44 /*3*/] = { -212f, -1805f, 29f };
	Local_123[45 /*3*/] = { 47f, -2040f, 18f };
	Local_123[46 /*3*/] = { 223f, -2240f, 6f };
	Local_123[47 /*3*/] = { 218f, -2189f, 6f };
	Local_123[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_123[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_123[50 /*3*/] = { -1186f, -365f, 46f };
	Local_123[51 /*3*/] = { -916f, -407f, 93f };
	Local_123[52 /*3*/] = { -726f, 235f, 105f };
	Local_123[53 /*3*/] = { -774f, 286f, 112f };
	Local_123[54 /*3*/] = { 271f, 134f, 125f };
	Local_123[55 /*3*/] = { 377f, -28f, 125f };
	Local_123[56 /*3*/] = { 121f, -703f, 150f };
	Local_123[57 /*3*/] = { -204f, -784f, 74f };
	Local_123[58 /*3*/] = { -287f, -774f, 72f };
	Local_123[59 /*3*/] = { -272f, -824f, 71f };
	Local_123[60 /*3*/] = { -230f, -723f, 80f };
	Local_123[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_123[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_123[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_123[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_397(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208, iParam0))
		{
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208, iParam0))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208), iParam0);
	}
}

void func_398(var uParam0, int iParam1)
{
	if (func_319(unk_0x95B959F18401C09A()) == 133 && iParam1)
	{
		Global_2528542.f_4810 = uParam0;
	}
	else
	{
		Global_2528542.f_4810 = -1;
	}
}

void func_399(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 1);
	}
	Global_2528542.f_4736 = -1;
	bVar0 = (func_111(unk_0x95B959F18401C09A(), 0) && func_107(unk_0x95B959F18401C09A()));
	if (bParam6)
	{
		func_397(func_417(iParam0), 1);
	}
	else
	{
		func_416(iParam0, -1);
		if (func_8(unk_0x95B959F18401C09A()))
		{
			Global_1574637.f_3 = iParam0;
		}
		else
		{
			func_415(iParam0);
		}
		Global_1574637.f_4 = -1;
		if (func_8(unk_0x95B959F18401C09A()))
		{
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 5);
		}
		if (((func_164() && !func_163()) || func_162(unk_0x95B959F18401C09A(), 21)) || func_162(unk_0x95B959F18401C09A(), 25))
		{
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 4);
		}
		unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 17);
		unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 20);
		if (func_414(iParam0))
		{
			func_413();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_409(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x4B06B5746CBEC99F(fParam2);
			if (iParam0 == 146)
			{
				unk_0xD875615F72CD34A6(0);
				unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
				unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			}
		}
		if (func_407(iParam0))
		{
			unk_0xD875615F72CD34A6(0);
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_405(1);
				if (func_262(0))
				{
					unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_403(1);
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 12);
		}
		if (bParam5)
		{
			func_402();
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_400(iParam0))
			{
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 21);
			}
		}
	}
	Global_2505571 = 1;
}

int func_400(int iParam0)
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
		case 236:
			return 1;
		
		default:
	}
	if (func_401())
	{
		return 1;
	}
	return 0;
}

int func_401()
{
	switch (func_318())
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

void func_402()
{
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4727), 0);
}

void func_403(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_93734.f_8 = 1;
	}
	else
	{
		Global_93734.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_404(iVar0);
		iVar0++;
	}
}

void func_404(int iParam0)
{
	Global_93734.f_178[iParam0] = 1;
	Global_93734.f_177 = 1;
}

void func_405(int iParam0)
{
	if (func_406() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_406()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_408(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_408(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

void func_409(float fParam0)
{
	float fVar0;
	
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_410())
	{
		return;
	}
	fVar0 = (Global_2528542.f_4884 - fParam0);
	if (unk_0x8ED4328770BEE4A1(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == unk_0x8C40DC84EDF05997() && unk_0x7EECA16E87982278(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2528542.f_4884 = fParam0;
	Global_2528542.f_4885 = unk_0x8C40DC84EDF05997();
}

int func_410()
{
	switch (func_412())
	{
		case 0:
			return func_411();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_411()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_412()
{
	return Global_25765;
}

void func_413()
{
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_200 = 0;
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4552), 1);
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_415(int iParam0)
{
	Global_1626536[unk_0x95B959F18401C09A() /*603*/] = iParam0;
}

void func_416(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_343(0) || func_343(func_342(iVar0)))
		{
			unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 2);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 2);
		}
	}
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_418()
{
	switch (Local_656.f_3)
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

void func_419()
{
	Global_1666782 = 1;
	if (!unk_0x0E4018692D92041D(Global_2537168, 0))
	{
		unk_0x8950ED5730F62EE8(&Global_2537168, 0);
		unk_0x8950ED5730F62EE8(&Global_1666783, 0);
	}
	if (!unk_0x0E4018692D92041D(Global_2537168, 1))
	{
		unk_0x8950ED5730F62EE8(&Global_2537168, 1);
		unk_0x8950ED5730F62EE8(&Global_1666783, 1);
	}
	if (!unk_0x0E4018692D92041D(Global_2537168, 5))
	{
		unk_0x8950ED5730F62EE8(&Global_2537168, 5);
		unk_0x8950ED5730F62EE8(&Global_1666783, 5);
	}
	if (unk_0x36CDBD83DF514AC4(-355737150))
	{
		unk_0x046ED2CF120C8949(-355737150, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-580979506))
	{
		unk_0x046ED2CF120C8949(-580979506, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-1426452475))
	{
		unk_0x046ED2CF120C8949(-1426452475, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(745417724))
	{
		unk_0x046ED2CF120C8949(745417724, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-1305304906))
	{
		unk_0x046ED2CF120C8949(-1305304906, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-1543175077))
	{
		unk_0x046ED2CF120C8949(-1543175077, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-811770997))
	{
		unk_0x046ED2CF120C8949(-811770997, 0, 0, 0);
	}
}

int func_420()
{
	switch (Local_656.f_3)
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

void func_421()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_656.f_3))
	{
		if (Local_656.f_3 == 1 || Local_656.f_3 == 6)
		{
			iVar0 = func_443(unk_0x95B959F18401C09A(), 1);
			iVar1 = func_199(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
				{
					unk_0x697EBA5CF1A6AB57(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute"), 1, 0, 0);
					func_422(1);
				}
			}
			else
			{
				unk_0x0775925F8B8D6987(unk_0x95B959F18401C09A(), 1);
			}
		}
	}
}

void func_422(bool bParam0)
{
	int iVar0;
	
	if (unk_0xA603FBA9F3C17D3A(unk_0x33CD235DF1E6A94E(), 5) != 0)
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, 1);
		unk_0x0999972871F1F387(unk_0x95B959F18401C09A(), func_206(585, -1, 0));
		if (func_442())
		{
			unk_0xDB2F38469A693F8E(unk_0x95B959F18401C09A(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_441())
		{
			unk_0xDB2F38469A693F8E(unk_0x95B959F18401C09A(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_438(3610, -1, -1))
		{
		}
		iVar0 = func_206(2040, -1, 0);
		unk_0xB3739B780DF92EED(unk_0x95B959F18401C09A(), func_437(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A()), iVar0));
		if (func_259(0))
		{
			unk_0x0999972871F1F387(unk_0x95B959F18401C09A(), func_206(585, -1, 0));
		}
		else
		{
			unk_0x0999972871F1F387(unk_0x95B959F18401C09A(), func_436(Global_2537452));
		}
		func_435(unk_0x95B959F18401C09A(), iVar0);
		unk_0xF17C5B01DECA3F49(unk_0x95B959F18401C09A(), 5, func_428(unk_0x33CD235DF1E6A94E(), iVar0), func_427(unk_0x33CD235DF1E6A94E(), iVar0), 0);
		func_426(func_206(2040, -1, 0), 1);
		Global_2528542.f_278 = 1;
		func_423(unk_0x95B959F18401C09A(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_423(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		func_425();
		if (iParam2 == -1)
		{
			iParam2 = func_206(2040, -1, 0);
		}
		unk_0xF17C5B01DECA3F49(iParam0, 5, func_428(unk_0x378BD4B3881338C2(iParam0), iParam2), func_427(unk_0x378BD4B3881338C2(iParam0), iParam2), 0);
		unk_0xB3739B780DF92EED(iParam0, func_437(unk_0x378BD4B3881338C2(iParam0), iParam2));
		unk_0x93AA93DA1B137032(unk_0x378BD4B3881338C2(iParam0), 5, func_428(unk_0x378BD4B3881338C2(iParam0), iParam2), func_427(unk_0x378BD4B3881338C2(iParam0), iParam2), func_437(unk_0x378BD4B3881338C2(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_206(585, -1, 0);
		}
		if (func_259(1) && func_424(iParam0))
		{
			unk_0x0999972871F1F387(iParam0, func_436(Global_2537452));
		}
		else
		{
			unk_0x0999972871F1F387(iParam0, iParam1);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_28, 4))
		{
			unk_0x0999972871F1F387(iParam0, Global_1574428);
			unk_0xDB2F38469A693F8E(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_435(iParam0, iParam2);
		unk_0x41E36A540F8F323F(unk_0x378BD4B3881338C2(iParam0), 177, 1);
	}
}

bool func_424(int iParam0)
{
	return func_106(iParam0, 10);
}

void func_425()
{
	Global_71563 = 0;
	Global_71564 = -1;
	Global_71565 = -1;
	Global_71566 = -1;
	Global_71567 = -1;
	Global_71568 = -1;
}

void func_426(int iParam0, int iParam1)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		func_425();
		func_197(2040, iParam0, -1, 1, 0);
		unk_0xF17C5B01DECA3F49(unk_0x95B959F18401C09A(), 5, func_428(unk_0x33CD235DF1E6A94E(), iParam0), func_427(unk_0x33CD235DF1E6A94E(), iParam0), 0);
		func_435(unk_0x95B959F18401C09A(), iParam0);
		unk_0xB3739B780DF92EED(unk_0x95B959F18401C09A(), func_437(unk_0x33CD235DF1E6A94E(), iParam0));
		if ((iParam1 && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && unk_0xA603FBA9F3C17D3A(unk_0x33CD235DF1E6A94E(), 5) != 0)
		{
			func_423(unk_0x95B959F18401C09A(), -1, -1);
		}
	}
}

int func_427(var uParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
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

var func_428(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0xA603FBA9F3C17D3A(uParam0, 9) != false;
	iVar1 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
	iVar2 = unk_0x25AE733B26BE25A7(iParam0, 11, unk_0xA603FBA9F3C17D3A(iParam0, 11), unk_0xCEB55689C694866C(iParam0, 11));
	iVar3 = unk_0x25AE733B26BE25A7(iParam0, 4, unk_0xA603FBA9F3C17D3A(iParam0, 4), unk_0xCEB55689C694866C(iParam0, 4));
	if ((((!bVar0 == Global_71563 || !iParam1 == Global_71564) || !iVar1 == Global_71565) || !iVar2 == Global_71566) || !iVar3 == Global_71567)
	{
		Global_71563 = bVar0;
		Global_71564 = iParam1;
		Global_71565 = iVar1;
		Global_71566 = iVar2;
		Global_71567 = iVar3;
		Global_71568 = func_429(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A())) == joaat("mp_f_freemode_01"))
			{
				if (Global_71568 == 61)
				{
					Global_71568 = 79;
				}
				else if (Global_71568 == 39)
				{
					Global_71568 = 79;
				}
				else if (Global_71568 == 76)
				{
					Global_71568 = 80;
				}
			}
			else if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A())) == joaat("mp_m_freemode_01"))
			{
				if (Global_71568 == 61)
				{
					Global_71568 = 78;
				}
				else if (Global_71568 == 39)
				{
					Global_71568 = 78;
				}
			}
		}
	}
	return Global_71568;
}

int func_429(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0xA603FBA9F3C17D3A(uParam0, 11);
	if (unk_0xA603FBA9F3C17D3A(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x541D5C57194E73C4(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	uVar4 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
	if (unk_0xEA26831785699C09(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		return func_434(iParam0, iParam1);
	}
	if (func_433(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x25AE733B26BE25A7(iParam0, 11, iVar0, unk_0xCEB55689C694866C(iParam0, 11));
		if (unk_0xEA26831785699C09(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
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
		else if (unk_0xEA26831785699C09(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LUXE_COAT"), 0) && !unk_0xEA26831785699C09(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_432(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
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
						iVar0 = func_431(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_431(iVar5);
						break;
					}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xEA26831785699C09(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_430(iVar5, 0);
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
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
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
					iVar0 = func_431(iVar5);
					break;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_6"), 0))
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
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0xEA26831785699C09(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0xEA26831785699C09(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xEA26831785699C09(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_434(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0xEA26831785699C09(iVar5, -1086258388, 0) || unk_0xEA26831785699C09(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xEA26831785699C09(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_0"), 0))
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
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_434(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0xEA26831785699C09(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0xEA26831785699C09(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_434(iParam0, iParam1) + 15;
				}
				else
				{
					return func_434(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1);
			}
			else
			{
				return func_434(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_434(iParam0, iParam1) + 15;
			}
			else
			{
				return func_434(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0xEA26831785699C09(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xEA26831785699C09(iVar5, joaat("SILK_ROBE"), 0)) || unk_0xEA26831785699C09(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_431(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
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
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_430(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_432(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xEA26831785699C09(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xEA26831785699C09(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xEA26831785699C09(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xEA26831785699C09(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_433(int iParam0)
{
	if (unk_0xEA26831785699C09(unk_0x25AE733B26BE25A7(uParam0, 4, unk_0xA603FBA9F3C17D3A(uParam0, 4), unk_0xCEB55689C694866C(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_434(var uParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
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

void func_435(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x86BA755E9519EC72(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x86BA755E9519EC72(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x86BA755E9519EC72(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x86BA755E9519EC72(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x86BA755E9519EC72(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x0F686074D2145120(iParam0);
	}
}

int func_436(var uParam0)
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

int func_437(var uParam0, int iParam1)
{
	return 0;
}

int func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_440(iParam0, iParam1);
	uVar2 = func_439(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

bool func_441()
{
	return unk_0xE9D7B652961D4AA3(joaat("mppilot"));
}

bool func_442()
{
	return unk_0xE9D7B652961D4AA3(joaat("mplts"));
}

int func_443(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_203(iParam0);
}

void func_444()
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
	
	if ((((!func_7(unk_0x95B959F18401C09A()) && !func_161(unk_0x95B959F18401C09A())) && !func_313()) && !func_456(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_455(unk_0x95B959F18401C09A()))
	{
		if (func_12(unk_0x95B959F18401C09A(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
			bVar11 = func_5(Local_656.f_3);
			bVar12 = unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0);
			bVar13 = func_453();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_656.f_67[iVar4 /*2*/].f_1;
				if (unk_0x4F94F07DAD382CDA(uVar14) && unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0) == unk_0xFC00F22E930BFD55(uVar14))
						{
							func_335(1);
						}
					}
					unk_0x8950ED5730F62EE8(&uVar5, iVar4);
					if (bVar11 && func_40(Local_656.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(uVar14), 1) };
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
			if (func_41(Local_656.f_3))
			{
				unk_0x8950ED5730F62EE8(&uVar5, 31);
			}
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_7 = uVar5;
			if (func_5(Local_656.f_3))
			{
				if ((unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()) || (unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E()) && !unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_40(Local_656.f_3, iVar7, &Var0, &uVar3))
						{
							func_452(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_451(Var0, 1, 0);
							func_446(10, 0, 0, 0, 0);
							unk_0x8950ED5730F62EE8(&iLocal_347, 5);
						}
					}
				}
				else
				{
					func_445();
				}
			}
		}
	}
	else
	{
		func_445();
	}
}

void func_445()
{
	if (unk_0x0E4018692D92041D(iLocal_347, 5))
	{
		func_169();
		func_167();
		unk_0xCE689A8E8C42ED78(&iLocal_347, 5);
		func_166();
	}
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437364.f_1893.f_690.f_16 != func_103())
	{
		if (unk_0x0E4018692D92041D(Global_2424047[Global_2437364.f_1893.f_690.f_16 /*416*/].f_402, 0) && func_447())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412626 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = unk_0x8C40DC84EDF05997();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_447()
{
	if (((((func_218(unk_0x95B959F18401C09A()) == 229 || func_218(unk_0x95B959F18401C09A()) == 191) || func_450()) || func_449()) || func_448(unk_0x95B959F18401C09A())) || Global_2506344.f_173 == 1)
	{
		return 0;
	}
	return 1;
}

int func_448(int iParam0)
{
	int iVar0;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_449()
{
	return Global_1574395;
}

int func_450()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_451(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405071.f_45.f_49 = { Param0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

void func_452(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
		{
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		Global_2413883.f_6 = unk_0x8C40DC84EDF05997();
	}
	Var0.f_6 = Global_2413883.f_6;
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
	if (func_381(unk_0x95B959F18401C09A()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
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
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413883 = { Var0 };
}

int func_453()
{
	if ((((((func_454(unk_0x95B959F18401C09A()) || func_164()) || func_163()) || func_162(unk_0x95B959F18401C09A(), 21)) || func_162(unk_0x95B959F18401C09A(), 25)) || func_8(unk_0x95B959F18401C09A())) || func_7(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

int func_454(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

int func_455(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_456(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (Global_1589819[iParam0 /*818*/].f_273.f_25 > 0)
	{
		if (bParam1)
		{
			if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
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
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_297(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_468(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_467(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_466(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_465(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_464(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_461(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_457(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_457(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_458(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_461(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			uVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x541D5C57194E73C4(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_103())
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_103())
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_470(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_528())
	{
		if (bParam1)
		{
			iVar0 = unk_0x72B85B341ADBE9DE();
			if (func_101(unk_0x95B959F18401C09A()))
			{
				uVar1 = func_321();
				iVar2 = unk_0x5C7617A25D50AAE9(uVar1);
				if (unk_0xC4DEA49C5B465481(iVar2))
				{
					iVar3 = unk_0xF8E1DE22DEB7E100(iVar2);
					if (unk_0x1B094AC15936B3DB(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_527())
				{
					switch (Local_656.f_3)
					{
						case 14:
							if (!func_366(iVar4) && !func_365(iVar4))
							{
								func_475("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x4F94F07DAD382CDA(Local_656.f_67[iVar5 /*2*/].f_1)) && unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(Local_656.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x67FFBB75D2430704(unk_0xFC00F22E930BFD55(Local_656.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0xE38E3CF1625A4145(uLocal_629[iVar5]))
				{
					uLocal_629[iVar5] = unk_0x8848A15CBDADDC60(unk_0xF2D53AA87148ACED(Local_656.f_67[iVar5 /*2*/].f_1));
					unk_0xA20C1DE21F2F071C(uLocal_629[iVar5], func_474(iVar5));
					unk_0xC51C58C963968740(uLocal_629[iVar5], 9);
					unk_0x1C95CD840303FC37(uLocal_629[iVar5], func_473(iVar5));
					func_471(&(uLocal_629[iVar5]), 9);
				}
				else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					Var6 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_656.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x983D75D9630FD905(uLocal_629[iVar5], 1);
					}
					else
					{
						unk_0x983D75D9630FD905(uLocal_629[iVar5], 0);
					}
				}
			}
			else if (unk_0xE38E3CF1625A4145(uLocal_629[iVar5]))
			{
				unk_0x1ABDB383C83A336A(&(uLocal_629[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_471(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xE38E3CF1625A4145(*uParam0))
	{
		uVar0 = func_472(iParam1);
		unk_0xB9E84A421C105943(*uParam0, uVar0);
	}
}

int func_472(int iParam0)
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
	unk_0x1256E5EA03020804(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_473(int iParam0)
{
	if (unk_0x097E7778E3E162E8(Local_656.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x57D74362A8BD1490(Local_656.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x9E374B5F44A76AE2(Local_656.f_67[iParam0 /*2*/]) && !unk_0x86A90EB179092418(Local_656.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_474(int iParam0)
{
	if (unk_0x097E7778E3E162E8(Local_656.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x57D74362A8BD1490(Local_656.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x9E374B5F44A76AE2(Local_656.f_67[iParam0 /*2*/]) && !unk_0x86A90EB179092418(Local_656.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_475(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x0E4018692D92041D(Local_2623[iParam2 /*12*/].f_8[func_357(iParam3)], func_356(iParam3)) && !bParam1)
	{
		Var0 = { func_526(iParam3) };
		if (!unk_0xE38E3CF1625A4145(uLocal_563[iParam3]))
		{
			if (!func_525(Var0, 0f, 0f, 0f, 0) && !func_525(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_563[iParam3] = unk_0x2C0ED4741A007C6A(Var0);
				unk_0xC51C58C963968740(uLocal_563[iParam3], 9);
				unk_0x1C95CD840303FC37(uLocal_563[iParam3], sParam0);
				func_476(uLocal_563[iParam3], 25, 1152319488, 1137180672);
				func_471(&(uLocal_563[iParam3]), 12);
				unk_0x983D75D9630FD905(uLocal_563[iParam3], 1);
			}
		}
		else if (unk_0xD9C92B0885A075F8())
		{
			unk_0xE447A1B9434714F3(uLocal_563[iParam3], 255);
		}
		else
		{
			func_476(uLocal_563[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0xE38E3CF1625A4145(uLocal_563[iParam3]))
	{
		unk_0x1ABDB383C83A336A(&(uLocal_563[iParam3]));
		if (!bParam1)
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_476(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xE447A1B9434714F3(uParam0, func_477(uParam0, iParam1, fParam2, fParam3));
}

int func_477(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_524(Global_2437364) && !func_83())
	{
		fVar0 = func_479(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_478();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_478()
{
	if (func_384(Global_2437364, 1))
	{
		return 50;
	}
	return 0;
}

float func_479(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2437364;
	Var2 = { func_523(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1319090 || func_519())
	{
		if (func_518(iVar0))
		{
			Var5 = { func_482(iVar0) };
		}
		else if (func_481(iVar0))
		{
			Var5 = { func_480(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iVar0), 0) };
	}
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

Vector3 func_480(int iParam0)
{
	var uVar0;
	
	if (func_481(iParam0))
	{
		uVar0 = unk_0x378BD4B3881338C2(iParam0);
		if (unk_0x765F6FEEFF39224F(uVar0))
		{
			return unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_481(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x378BD4B3881338C2(iParam0);
			if (unk_0x765F6FEEFF39224F(uVar0))
			{
				if (unk_0x18FB647D79B09657(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam0 == func_103())
	{
	}
	if (func_517(iParam0))
	{
		iVar0 = func_516(iParam0);
		if (iVar0 != func_103())
		{
			if (!func_515(iVar0))
			{
				if (unk_0x765F6FEEFF39224F(Global_2437364.f_660[iVar0 /*3*/][1]))
				{
					return unk_0xFBB1F99A825CAB09(Global_2437364.f_660[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2424047[func_516(iParam0) /*416*/].f_309.f_9;
				}
			}
			else
			{
				iVar1 = func_511(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1671295.f_177[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_510(iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_2528542.f_296))
		{
			return unk_0xFBB1F99A825CAB09(Global_2528542.f_296, 0);
		}
	}
	else if (func_467(iParam0) && !func_509(iParam0))
	{
		iVar2 = Global_2424047[iParam0 /*416*/].f_309.f_8;
		if (iVar2 != func_103())
		{
			iVar3 = func_511(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1671295.f_177[iVar3 /*3*/];
			}
		}
	}
	else if (func_465(iParam0) && !func_508(iParam0))
	{
		if (func_518(iParam0) && func_507())
		{
			return Global_1671295.f_177[Global_2424047[iParam0 /*416*/].f_309.f_5 /*3*/];
		}
		iVar4 = Global_2424047[iParam0 /*416*/].f_309.f_8;
		if (iVar4 != func_103())
		{
			if (func_506(iVar4))
			{
				iVar5 = func_502(iVar4);
				if (iVar5 != -1)
				{
					return Global_1671295.f_177[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_464(iParam0))
	{
		iVar6 = func_501(iParam0);
		if (iVar6 != func_103())
		{
			if (!func_500(iVar6))
			{
				if (unk_0x765F6FEEFF39224F(Global_2437364.f_757[iVar6]))
				{
					return unk_0xFBB1F99A825CAB09(Global_2437364.f_757[iVar6], 0);
				}
				else
				{
					return Global_2424047[func_501(iParam0) /*416*/].f_309.f_16;
				}
			}
			else
			{
				iVar7 = func_502(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1671295.f_177[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_499(iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_2528542.f_298))
		{
			return unk_0xFBB1F99A825CAB09(Global_2528542.f_298, 0);
		}
	}
	else if (func_463(iParam0) && !func_498(iParam0))
	{
		iVar8 = Global_2424047[iParam0 /*416*/].f_309.f_8;
		if (iVar8 != func_103())
		{
			if (func_497(iVar8))
			{
				iVar9 = func_493(iVar8);
				if (iVar9 != -1)
				{
					return func_492(iVar9);
				}
			}
		}
	}
	else if (func_462(iParam0) && !func_491(iParam0))
	{
		iVar10 = Global_2424047[iParam0 /*416*/].f_309.f_8;
		if (iVar10 != func_103())
		{
			if (func_490(iVar10))
			{
				iVar11 = func_486(iVar10);
				if (iVar11 != -1)
				{
					return Global_1671295.f_177[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_461(iParam0, 0))
	{
		iVar12 = func_485(iParam0);
		if (iVar12 != func_103())
		{
			if (!func_484(iVar12))
			{
				if (unk_0x765F6FEEFF39224F(Global_2437364.f_790[iVar12]))
				{
					return unk_0xFBB1F99A825CAB09(Global_2437364.f_790[iVar12], 0);
				}
				else
				{
					return Global_1626536[func_485(iParam0) /*603*/].f_588;
				}
			}
			else
			{
				iVar13 = func_486(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1671295.f_177[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_460(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_463(iParam0))
	{
		return func_492(Global_2424047[iParam0 /*416*/].f_309.f_5);
	}
	if (func_483(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1671295.f_177[Global_2424047[iParam0 /*416*/].f_309.f_5 /*3*/];
}

int func_483(int iParam0)
{
	if ((func_459(iParam0) || func_457(iParam0)) || func_458(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)
{
	if (iParam0 != func_103())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_3, 4);
	}
	return 0;
}

int func_485(int iParam0)
{
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_486(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_103())
	{
		iVar0 = func_489(iParam0);
		if (iVar0 != 0)
		{
			return func_487(iVar0);
		}
	}
	return -1;
}

int func_487(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (func_298(iVar0) == 11)
		{
			if (func_488(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_489(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_275;
	}
	return 0;
}

int func_490(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_275 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_462(iParam0) && Global_2424047[iParam0 /*416*/].f_309.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_492(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1671295.f_177[iParam0 /*3*/];
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_103())
	{
		iVar0 = func_496(iParam0);
		if (iVar0 != 0)
		{
			return func_494(iVar0);
		}
	}
	return -1;
}

int func_494(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (func_298(iVar0) == 11)
		{
			if (func_495(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_496(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316;
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316 != 0;
	}
	return 0;
}

int func_498(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_463(iParam0) && Global_2424047[iParam0 /*416*/].f_309.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_103())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_2, 6);
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_502(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return -1;
	}
	iVar0 = func_505(iParam0);
	if (!iVar0 == 0)
	{
		return func_503(iVar0);
	}
	return -1;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (func_298(iVar0) == 9)
		{
			if (func_504(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_505(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_265;
}

int func_506(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_265 != 0;
	}
	return 0;
}

int func_507()
{
	if (unk_0x0E4018692D92041D(Global_1671295.f_2, 13) || Global_1671295.f_2398)
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (func_465(iParam0) && Global_2424047[iParam0 /*416*/].f_309.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (func_467(iParam0) && Global_2424047[iParam0 /*416*/].f_309.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return -1;
	}
	iVar0 = func_514(iParam0);
	if (!iVar0 == 0)
	{
		return func_512(iVar0);
	}
	return -1;
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (func_513(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_514(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_177[5 /*12*/];
}

int func_515(int iParam0)
{
	if (iParam0 != func_103())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 6);
	}
	return 0;
}

int func_516(int iParam0)
{
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_517(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_103())
			{
				return func_298(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_12(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_519()
{
	if ((func_522() || func_521()) || func_520(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

bool func_520(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1625319[iParam0 /*38*/].f_29, 20);
}

bool func_521()
{
	return unk_0x0E4018692D92041D(Global_1681627, 1);
}

bool func_522()
{
	return unk_0x0E4018692D92041D(Global_1681628, 5);
}

Vector3 func_523(var uParam0)
{
	var uVar0;
	
	switch (unk_0xC39B72329FE2F3E8(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0x50A5F05F60F8ED23(uParam0);
			if (unk_0x765F6FEEFF39224F(uVar0))
			{
				return unk_0xFBB1F99A825CAB09(iVar0, 0);
			}
			break;
	}
	return unk_0x7BC3899BF7085A7D(uParam0);
}

int func_524(int iParam0)
{
	if ((unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_68.f_2, 9) && !(unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_68.f_2, 6) && unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_68.f_2, 7))) || ((unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_68.f_2, 6) && !unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_68.f_2, 7)) && !unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_525(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_526(int iParam0)
{
	switch (Local_656.f_3)
	{
		case 14:
			return Local_367[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_527()
{
	switch (Local_656.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_528()
{
	switch (Local_656.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_529()
{
	switch (Local_656.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_530(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_312(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_215(sParam1))
	{
		sVar0 = sParam1;
	}
	func_142(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_531(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xD178EF744F20B712();
	return "HUD_STARTING";
	if (unk_0xCE3CFF625BEBAA04(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_challenges"))
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
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xCE3CFF625BEBAA04(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_532(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_533(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x7C475FA8D877007F())
	{
		Global_2528542.f_4726 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 1))
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2528542.f_4726 = 0;
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 1);
		}
	}
}

int func_534(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0);
		}
		else
		{
			return unk_0x5009A219B22D2352(unk_0x765FF3592EC81689(), *uParam0);
		}
	}
	return unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0);
}

void func_535(int iParam0)
{
	if (!unk_0xE35413546DC97620() && !unk_0xBB5E373390A5F824())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if (!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D())
					{
						if (func_5(Local_656.f_3))
						{
							if (Local_656.f_3 == 12)
							{
								func_294("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_294("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_656.f_3))
						{
							func_294("AMCH_BIKEAV", 30000);
						}
						func_293(1);
						unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if (!unk_0xD9C92B0885A075F8())
					{
						func_294("AMCH_BLOW", 30000);
						func_293(1);
						unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if (!unk_0xD9C92B0885A075F8() && !func_540(63))
					{
						switch (Local_656.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
									{
										func_294("AMCH_ALTI", 30000);
										func_293(1);
										unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_NMIS", 30000);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_FRFALL", -1);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_PVPO1", -1);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_PVPO2", -1);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_WHEELIE", 30000);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_STOPPIE", 30000);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_LFALL", 30000);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_LPARA", 30000);
									func_293(1);
									unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if ((!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D()) && !func_540(63))
					{
						switch (Local_656.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
									{
										if (func_1(&uLocal_341, 1000, 0))
										{
											func_294("AMCH_OCEAN", 30000);
											func_293(1);
											func_46(&uLocal_341);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if (!unk_0xD9C92B0885A075F8() && !func_540(63))
					{
						switch (Local_656.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
									{
										if (func_524(unk_0x95B959F18401C09A()) && !func_537(unk_0x95B959F18401C09A()))
										{
											func_294("AMCH_ALTIEXP", 30000);
											func_293(1);
											unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if ((!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D()) && !func_540(63))
					{
						if (func_1(&uLocal_341, 1000, 0))
						{
							func_294("AMCH_FLYLOW", 30000);
							func_293(1);
							func_46(&uLocal_341);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if (Local_656.f_3 == 7)
					{
						if (iLocal_641 == 0)
						{
							if ((!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D()) && !func_540(63))
							{
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_MVS1", 30000);
									func_293(1);
									iLocal_641 = 1;
								}
							}
						}
						else if ((!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D()) && !func_540(63))
						{
							if (func_12(unk_0x95B959F18401C09A(), 1, 1))
							{
								func_294("AMCH_MVS2", 30000);
								func_293(1);
								unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
							}
						}
					}
					if (Local_656.f_3 == 14)
					{
						if (iLocal_641 == 0)
						{
							if ((!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D()) && !func_540(63))
							{
								if (func_12(unk_0x95B959F18401C09A(), 1, 1))
								{
									func_294("AMCH_BRBL", 30000);
									func_293(1);
									iLocal_641 = 1;
								}
							}
						}
						else if ((!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D()) && !func_540(63))
						{
							if (func_12(unk_0x95B959F18401C09A(), 1, 1))
							{
								func_294("AMCH_BRBL2", 30000);
								func_293(1);
								unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0x0E4018692D92041D(iLocal_640, iParam0))
				{
					if (!unk_0xD9C92B0885A075F8() && !unk_0xFAC8F20FBC764F4D())
					{
						func_536("AMCH_WARN", func_389(Local_656.f_3), func_388(Local_656.f_3), 30000);
						func_293(0);
						Local_3008.f_8 = unk_0xEF4753434B24594D();
						unk_0x0F8EAEEC97DDBCB3(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x8950ED5730F62EE8(&iLocal_640, iParam0);
					}
				}
				break;
			}
	}
}

void func_536(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0xFA6BEE2B1507FF1E(sParam1);
	unk_0xFA6BEE2B1507FF1E(sParam2);
	unk_0x092150016C06C431(0, 0, 0, iParam3);
}

bool func_537(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1371947.f_241.f_136[func_539(9) /*33*/][iParam0], func_538(9));
}

int func_538(int iParam0)
{
	return (iParam0 % 32);
}

int func_539(int iParam0)
{
	return (iParam0 / 32);
}

bool func_540(int iParam0)
{
	return Global_2437364.f_2708[0 /*80*/].f_1 == iParam0;
}

void func_541(int iParam0)
{
	Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_3 = iParam0;
}

void func_542(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 4);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 4);
	}
}

int func_543(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_566(unk_0x95B959F18401C09A(), 29))
	{
		return 0;
	}
	if (func_162(unk_0x95B959F18401C09A(), 21))
	{
		return 0;
	}
	if (func_162(unk_0x95B959F18401C09A(), 25))
	{
		return 0;
	}
	if (unk_0x69E8EDFEA57E361D())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF29C37CB006AE9DD())
		{
			return 0;
		}
	}
	if (func_346(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_565())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_564(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (func_563())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_105(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	else if (func_556(unk_0x95B959F18401C09A()) == 3)
	{
		return 0;
	}
	if (func_555(unk_0x95B959F18401C09A()) != func_103() && func_555(unk_0x95B959F18401C09A()) == func_90(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_554(func_288()) && func_319(unk_0x95B959F18401C09A()) != 236)
	{
		return 0;
	}
	if (func_553())
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	if (unk_0x289064CB38B560AA())
	{
		return 0;
	}
	if (func_348(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!func_551())
	{
		return 0;
	}
	if (func_162(unk_0x95B959F18401C09A(), 0) || func_162(unk_0x95B959F18401C09A(), 3))
	{
		return 0;
	}
	if ((func_162(unk_0x95B959F18401C09A(), 12) || func_162(unk_0x95B959F18401C09A(), 14)) || func_162(unk_0x95B959F18401C09A(), 13))
	{
		return 0;
	}
	if (func_456(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_517(unk_0x95B959F18401C09A()))
	{
		if (!func_522() && !Global_2505944)
		{
			return 0;
		}
	}
	if (func_550(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_549())
	{
		return 0;
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (func_382(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_548())
	{
		return 0;
	}
	if (func_546(unk_0x95B959F18401C09A()) && Global_1589471.f_171)
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if ((func_459(unk_0x95B959F18401C09A()) || func_457(unk_0x95B959F18401C09A())) || func_458(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_544(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_448(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_544(int iParam0)
{
	if (iParam0 != func_103() && func_12(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

bool func_545()
{
	return Global_1671295.f_163;
}

int func_546(int iParam0)
{
	if (func_547(Global_1589819[iParam0 /*818*/].f_273.f_25))
	{
		return 1;
	}
	return 0;
}

int func_547(int iParam0)
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

int func_548()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_549()
{
	return Global_93734.f_340 > 0;
}

bool func_550(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 11);
}

int func_551()
{
	if (func_552() == 0)
	{
		return 1;
	}
	return 0;
}

int func_552()
{
	return Global_1312467.f_18;
}

bool func_553()
{
	return Global_1312867;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_555(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_556(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_383(iParam0) && !func_8(iParam0)) && !unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8));
	bVar2 = func_105(iParam0);
	uVar3 = func_164();
	uVar4 = func_557();
	if ((bVar1 && (func_454(iParam0) || func_408(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_107(iParam0)) && !func_299(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2528542.f_4889.f_212 != iVar0)
	{
		Global_2528542.f_4889.f_212 = iVar0;
	}
	return iVar0;
}

int func_557()
{
	if ((func_106(unk_0x95B959F18401C09A(), 21) || func_106(unk_0x95B959F18401C09A(), 22)) || func_561())
	{
		return 1;
	}
	if (func_559())
	{
		func_558(22);
		return 1;
	}
	return 0;
}

void func_558(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

int func_559()
{
	if (func_111(unk_0x95B959F18401C09A(), 0))
	{
		if (((func_164() && !func_163()) || func_162(unk_0x95B959F18401C09A(), 21)) || func_162(unk_0x95B959F18401C09A(), 25))
		{
			return 1;
		}
		else
		{
			func_560(27);
		}
	}
	return 0;
}

void func_560(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

int func_561()
{
	return func_562(338, -1);
}

int func_562(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_202(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_563()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 5;
}

int func_564(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_261.f_4 != 0 || Global_2424047[iParam0 /*416*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_565()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

bool func_566(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_5, iParam1);
}

void func_567()
{
	func_568(&(Local_744.f_534), &Local_744, 26, &(Local_744.f_1), &(Local_744.f_117), Local_656.f_3, 0, 0);
}

void func_568(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	struct<2> Var57;
	
	if (func_678(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_676() || iParam2 == 27)
	{
		if (func_631(uParam1, iParam2, uParam3, Global_1574175, 0, func_679(), iParam7))
		{
			func_630(1);
			if ((!func_629() && !func_628()) || unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
			{
				if (func_627())
				{
					func_626();
				}
				else
				{
					unk_0x1382AC429D0EA2BB(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_625(1);
						Global_1574175 = 0;
						iVar54 = -1;
						if (Global_1574396 != 1)
						{
							func_624(uParam1, 0, 0);
							if (unk_0x0E4018692D92041D(uParam3->f_33, 7))
							{
								unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
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
								if (func_12(unk_0x7C1C88877E8AAA50(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C1C88877E8AAA50(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_623(iVar35) || Global_2424047[iVar35 /*416*/].f_236 != -1) || func_622(iVar35))
										{
											iVar44 = iVar35;
											if (func_92(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_619(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_108(unk_0x95B959F18401C09A(), 0) && func_218(unk_0x95B959F18401C09A()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_618())
							{
								if (func_12(unk_0x7C1C88877E8AAA50(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C1C88877E8AAA50(iVar52);
								}
								else
								{
									iVar35 = func_103();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_617(iVar35) && func_614(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589819[iVar44 /*818*/].f_211.f_6;
								Var38 = { func_609(iVar35) };
								if (iVar35 == unk_0x95B959F18401C09A())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xEEF8394DB3D3DFA1(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_136(iVar35) };
								iVar37 = func_603(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xD9A84B163D46BD9B(iVar37);
								}
								Global_1574175++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_618())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_601(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_282(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_600(iVar35, 0);
								if (bVar34)
								{
									if (func_91(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_599(iParam5))
								{
									func_598(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_598(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0x8950ED5730F62EE8(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7C1C88877E8AAA50(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0x0E4018692D92041D(iVar49, iVar35))
							{
								iVar35 = unk_0x7C1C88877E8AAA50(iVar52);
							}
							else
							{
								iVar35 = func_103();
							}
							if (func_617(iVar35))
							{
								if (func_12(unk_0x7C1C88877E8AAA50(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589819[iVar44 /*818*/].f_211.f_6;
									Var38 = { func_609(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_136(iVar35) };
									iVar37 = func_603(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xD9A84B163D46BD9B(iVar37);
									}
									Global_1574175++;
									iVar51 = func_600(iVar35, 1);
									if (bVar34)
									{
										if (func_91(iVar35, 1))
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
									func_581(iVar35, unk_0xEEF8394DB3D3DFA1(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							func_578(uParam3, uParam1);
						}
						func_46(&(uParam3->f_21));
						func_577();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 7))
						{
							func_576(uParam3, uParam1);
							func_575(uParam1, 0, 1);
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 7);
						}
						func_576(uParam3, uParam1);
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 11);
						}
						if (func_571(uParam3))
						{
							Global_1574396 = 1;
						}
						func_569(uParam3);
						if (Global_1574396 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574396 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x11AE7F6A404414C9(*uParam1))
					{
						unk_0x5C58D0ADA22491FA(7);
						unk_0x5A2C46836B4DF5B3(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x5C58D0ADA22491FA(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_577();
			func_625(0);
			if (unk_0x0E4018692D92041D(uParam3->f_33, 7))
			{
				unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 7);
			}
			if (unk_0x0E4018692D92041D(uParam3->f_33, 10))
			{
				unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x94A8B1D385430451();
}

void func_569(var uParam0)
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_570(0);
	}
}

void func_570(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574396 != 2)
		{
			Global_1574396 = 2;
		}
	}
	else
	{
		switch (Global_1574396)
		{
			case 0:
				Global_1574396 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_571(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C1C88877E8AAA50(uParam0->f_37);
	if (iVar15 != func_103() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_136(iVar15) };
		iVar1 = func_574(uParam0, uParam0->f_37);
		if (func_573(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar16 = 1;
							func_572(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar16 = 1;
						func_572(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar16 = 1;
							func_572(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_572(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0x2B1E6E274DDA8154(&Var2))
						{
							iVar16 = 1;
							func_572(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar16 = 1;
						func_572(uParam0, iVar0, 0);
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

void func_572(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_573(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xEC566F0D860729D3(&uParam0, 13);
}

var func_574(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_575(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xBB698266C5FDF0A7(*uParam0, "COLLAPSE"))
	{
		unk_0x295B86DE57A0721D(iParam1);
		unk_0x818901B332D5541D();
	}
	if (iParam2 == 1)
	{
		if (unk_0xBB698266C5FDF0A7(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x818901B332D5541D();
		}
	}
}

void func_576(var uParam0, var uParam1)
{
	if (!unk_0x0E4018692D92041D(uParam0->f_33, 10))
	{
		unk_0xBB698266C5FDF0A7(*uParam1, "SET_HIGHLIGHT");
		unk_0x4D9DA18AB3C2A466(uParam0->f_35);
		unk_0x818901B332D5541D();
		unk_0x8950ED5730F62EE8(&(uParam0->f_33), 10);
	}
}

void func_577()
{
	if (Global_1574396 != 0)
	{
		Global_1574396 = 0;
	}
}

void func_578(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar0);
		if (iVar2 != func_103())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_580(uParam0->f_38[iVar0 /*2*/], 0);
					func_579(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589819[iVar0 /*818*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_579(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		if (unk_0xBB698266C5FDF0A7(*uParam0, "SET_ICON"))
		{
			unk_0x4D9DA18AB3C2A466(iParam1);
			unk_0x4D9DA18AB3C2A466(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4D9DA18AB3C2A466(iParam3);
			}
			unk_0x818901B332D5541D();
		}
	}
}

int func_580(int iParam0, bool bParam1)
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

void func_581(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_597() && iParam4 < func_596())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xBB698266C5FDF0A7(*uParam2, sVar1))
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (unk_0x0E4018692D92041D(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_595("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(iParam10);
			}
			func_595(sParam1);
			unk_0x4D9DA18AB3C2A466(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_595("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(65);
			}
			unk_0x4D9DA18AB3C2A466(-1);
			func_595("");
			if (uParam3->f_108 == 6)
			{
				func_595("");
			}
			else
			{
				func_595(&sParam5);
			}
			func_586(uParam3, iParam0);
			unk_0xE3F1DCC670198D2D(sParam9);
			unk_0xE3F1DCC670198D2D(sParam9);
			if (func_585(uParam3))
			{
				func_584("DPAD_FRIEND");
			}
			else if (func_583(uParam3))
			{
				func_584("DPAD_FRIEND");
			}
			else if (func_582(uParam3))
			{
				func_584("DPAD_CREW");
			}
			else
			{
				func_584("");
			}
			unk_0x818901B332D5541D();
		}
	}
}

bool func_582(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 6);
}

bool func_583(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 5);
}

void func_584(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

int func_585(var uParam0)
{
	if (func_583(uParam0) && func_582(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_586(var uParam0, int iParam1)
{
	if (func_594(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(121);
	}
	else if (func_590(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(122);
	}
	else if (((unk_0x0E4018692D92041D(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x0E4018692D92041D(Global_2424047[iParam1 /*416*/].f_411, 0))
	{
		unk_0x4D9DA18AB3C2A466(123);
	}
	else
	{
		if (func_587())
		{
			uParam0->f_36 = 0;
		}
		unk_0x295B86DE57A0721D(uParam0->f_36);
	}
}

int func_587()
{
	if (unk_0x289064CB38B560AA())
	{
		if (func_588() || func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_588()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_95();
	}
	return func_589(Global_4456448.f_138474);
}

int func_589(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4985[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_590(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_591()) && func_256(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_591()
{
	if (func_383(unk_0x95B959F18401C09A()) || func_593())
	{
		if (!func_592(unk_0x95B959F18401C09A(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_592(int iParam0, int iParam1)
{
	if (func_319(iParam0) == iParam1)
	{
		return func_454(iParam0);
	}
	return 0;
}

int func_593()
{
	switch (func_218(unk_0x95B959F18401C09A()))
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

int func_594(int iParam0)
{
	if (func_587())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_92(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_591()) && func_258(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_595(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

int func_596()
{
	int iVar0;
	
	if (Global_1574177)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_597()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574177)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_598(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_597() && iParam3 < func_596())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x11AE7F6A404414C9(*uParam1))
		{
			if (unk_0xBB698266C5FDF0A7(*uParam1, sVar1))
			{
				unk_0x4D9DA18AB3C2A466(iParam3);
				if (unk_0x0E4018692D92041D(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_595("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					func_584(sParam16);
				}
				else
				{
					func_595(&(uParam2->f_1));
				}
				unk_0x4D9DA18AB3C2A466(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_595("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4D9DA18AB3C2A466(iVar0);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(-1);
				}
				if (func_618())
				{
					func_595("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_ONE_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 5 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_ONE_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 7 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_TWO_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 8 && !unk_0x786AF4A44E1B5B4B(&(uParam2->f_104)))
				{
					unk_0x713FEBE56D2BD403("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x974BEF45D557B847(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xE800DC85FDF60F85(iParam10);
					}
					unk_0xFA6BEE2B1507FF1E(&(uParam2->f_104));
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x713FEBE56D2BD403("FM_AE_CASH");
					unk_0x9454B3D676754D96(iParam10, 1);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x713FEBE56D2BD403("FM_AE_CASH");
						unk_0x9454B3D676754D96(iParam10, 1);
						unk_0x36F3AA9FFAAF8606();
					}
					else
					{
						unk_0x713FEBE56D2BD403("FM_NG_CASH");
						unk_0x9454B3D676754D96(iParam10, 1);
						unk_0x36F3AA9FFAAF8606();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x786AF4A44E1B5B4B(&(uParam2->f_104)))
					{
						func_584(&(uParam2->f_104));
					}
					else
					{
						func_595("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x713FEBE56D2BD403("STRING");
					unk_0xDC97362660946DF9(iParam14, 6);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (fParam13 != -1f)
				{
					unk_0x713FEBE56D2BD403("NUMBER");
					unk_0x974BEF45D557B847(fParam13, 1);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (iParam10 != -1)
				{
					unk_0x4D9DA18AB3C2A466(iParam10);
				}
				else
				{
					func_595("");
				}
				if (uParam2->f_108 == 6)
				{
					func_595("");
				}
				else
				{
					func_595(&sParam4);
				}
				func_586(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x786AF4A44E1B5B4B(sParam8))
				{
					func_595("");
					func_595("");
				}
				else
				{
					unk_0xE3F1DCC670198D2D(sParam8);
					unk_0xE3F1DCC670198D2D(sParam8);
				}
				if (func_585(uParam2))
				{
					func_584("DPAD_FRIEND");
				}
				else if (func_583(uParam2))
				{
					func_584("DPAD_FRIEND");
				}
				else if (func_582(uParam2))
				{
					func_584("DPAD_CREW");
				}
				else
				{
					func_584("");
				}
				unk_0x818901B332D5541D();
			}
		}
	}
}

int func_599(int iParam0)
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

int func_600(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_383(iParam0)) && !func_105(iParam0))
	{
		iVar0 = func_68();
	}
	iVar1 = func_89(iParam0);
	if (!iVar1 == -1)
	{
		return func_87(iVar1);
	}
	return iVar0;
}

int func_601(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_602(iParam3))
	{
		*fParam1 = (func_284(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_599(iParam3))
	{
		*fParam1 = (func_284(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_602(int iParam0)
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

int func_603(int iParam0)
{
	int iVar0;
	
	iVar0 = func_606(iParam0);
	if (iVar0 == -1)
	{
		func_604(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_604(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_606(iParam0) != -1)
	{
		return;
	}
	if (Global_1383873)
	{
		if (iParam0 == Global_1383873.f_1)
		{
			return;
		}
	}
	if (func_605(iParam0))
	{
		return;
	}
	if (Global_1383911 >= 32)
	{
		return;
	}
	Global_1383878[Global_1383911] = iParam0;
	Global_1383911++;
	if (bParam1)
	{
	}
}

int func_605(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383911)
	{
		if (Global_1383878[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_606(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1383871 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383871)
	{
		if (Global_1383710[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x5E83461198335D9B(Global_1383710[iVar0 /*5*/].f_2) && unk_0x47CD6BA404AEE035(Global_1383710[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_607(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_607(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1383871)
	{
		return;
	}
	if (unk_0x5E83461198335D9B(Global_1383710[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1383710[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD9A84B163D46BD9B(Global_1383710[iParam0 /*5*/].f_2), 64);
			unk_0x4F9021F32A32F422(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x381D44C2F0113354(Global_1383710[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1383871)
	{
		Global_1383710[iVar32 /*5*/] = { Global_1383710[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_608(&(Global_1383710[iVar32 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_608(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_103();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		uParam0->f_3 = unk_0x78DCC5D0CB43DEBA();
	}
}

struct<4> func_609(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2505680 = { func_136(iParam0) };
		if (unk_0xDB36A8F522CBC12D())
		{
			if (func_573(Global_2505680))
			{
				if (!unk_0x8CB86A22FA87265D(&Global_2505680))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE9FD52A86479B22B(0))
		{
			return Var0;
		}
		if (func_613(&Global_2505680))
		{
			Global_2505610 = { func_611(iParam0) };
			func_610(&Global_2505610, &Var0);
		}
	}
	return Var0;
}

void func_610(var uParam0, var uParam1)
{
	unk_0x6BD9A45C73EA0684(uParam0, 35, uParam1);
}

struct<35> func_611(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_612(iParam0))
	{
		return Global_1312899[unk_0x95B959F18401C09A() /*35*/];
	}
	Var0 = { func_136(iParam0) };
	unk_0xDD530AC51A578470(&Var13, 35, &Var0);
	return Var13;
}

int func_612(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return 1;
	}
	return 0;
}

int func_613(var uParam0)
{
	if (unk_0x28D5F9AC3E7BC48B())
	{
		if (unk_0x062B7A5C795CB453() && unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_614(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_616(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_615(iParam0))
	{
		return 0;
	}
	if ((!func_623(iParam0) && Global_2424047[iParam0 /*416*/].f_236 == -1) && !func_622(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_615(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_142, 22);
}

int func_616(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 10) || unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 9));
	}
	return 0;
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
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
		if (unk_0x0E4018692D92041D(Global_1589819[iVar0 /*818*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_618()
{
	switch (func_218(unk_0x95B959F18401C09A()))
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
	switch (func_319(unk_0x95B959F18401C09A()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_105(unk_0x95B959F18401C09A()))
	{
		switch (func_218(unk_0x95B959F18401C09A()))
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
	if (func_592(unk_0x95B959F18401C09A(), 236))
	{
		return 1;
	}
	return 0;
}

void func_619(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x7C1C88877E8AAA50(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_623(iVar1) || Global_2424047[iVar1 /*416*/].f_236 != -1) || func_622(iVar1))
				{
					if (func_620(iVar1, iParam1, 0))
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

int func_620(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_103())
	{
		if (!bParam2)
		{
			if (func_621(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_103())
		{
			return iParam1 == Global_1626536[iParam0 /*603*/].f_11;
		}
	}
	return 0;
}

int func_621(int iParam0, int iParam1)
{
	if (iParam1 != func_103())
	{
		if (iParam0 != func_103())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_103())
			{
				if (Global_1626536[iParam0 /*603*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_622(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_623(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x95B959F18401C09A(), 0, 1))
		{
			if (unk_0xB4B29C6A8F481EEA(iParam0, unk_0x95B959F18401C09A()) || func_218(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_624(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x4D9DA18AB3C2A466(iParam2);
		unk_0x818901B332D5541D();
	}
}

void func_625(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1371944.f_2 == 0)
		{
			Global_1371944.f_2 = 1;
		}
	}
	else if (Global_1371944.f_2 == 1)
	{
		Global_1371944.f_2 = 0;
	}
}

void func_626()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
	{
		if (func_300())
		{
			func_287();
		}
	}
}

int func_627()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0) && func_300())
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1) && func_300())
	{
		return 1;
	}
	return 0;
}

int func_628()
{
	if (func_300())
	{
		if (func_54(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_629()
{
	if (func_300())
	{
		if (func_69(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_630(int iParam0)
{
	if (Global_1371944.f_1 != Global_1371944)
	{
		Global_1371944.f_1 = Global_1371944;
	}
	if (Global_1371944 != iParam0)
	{
		Global_1371944 = iParam0;
	}
}

int func_631(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_675(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_674();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_673())
		{
			if (func_672() > 0 && Global_1574177)
			{
				unk_0x03D404FD169632CA();
				unk_0x5E1FA2076D53C3F5(fVar7);
				unk_0x581AE7724ACAD410(18);
				if (unk_0xFAC8F20FBC764F4D())
				{
					unk_0x2E4F269906BF5F41();
				}
				unk_0x581AE7724ACAD410(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_661())
		{
			func_660(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
	{
		func_660(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_672() == 1)
		{
			func_659(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_660(uParam0, uParam2, 0);
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4583), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			unk_0x2E4F269906BF5F41();
		}
		unk_0x581AE7724ACAD410(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_672() == 0 && !bParam5))
		{
			func_660(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_658();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x03D404FD169632CA();
				}
				unk_0x581AE7724ACAD410(18);
			}
			if (!unk_0x0E4018692D92041D(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_658();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x03D404FD169632CA();
					}
					unk_0x581AE7724ACAD410(18);
				}
				unk_0x5E1FA2076D53C3F5(fVar7);
				if (func_659(bVar6, uParam0, 0))
				{
					func_624(uParam0, 0, 0);
					uVar4 = func_656(iParam1, &(Global_4456448.f_138481), bParam4);
					Var0 = { func_654(iParam1) };
					if (bParam4)
					{
						func_651(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_645(uParam0, func_648(uParam2), func_646(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_639(uParam2);
						if (!unk_0x786AF4A44E1B5B4B(uParam6))
						{
							sVar9 = sParam6;
						}
						func_637(uParam0, sVar9, func_638(), -1);
					}
					else if (func_587())
					{
						uParam2->f_34 = Global_1574176;
						func_651(uParam0, uVar4, &Var0, 1, -1, Global_1574176, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_632(iParam1);
						uParam2->f_34 = Global_1574176;
						func_651(uParam0, uVar4, "", 0, iVar8, Global_1574176, 1);
					}
					else
					{
						iVar8 = func_632(iParam1);
						func_651(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x8950ED5730F62EE8(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x0E4018692D92041D(uParam2->f_33, 0))
			{
				Global_1574175 = uParam3;
				Global_1574174 = 1;
				unk_0x5E1FA2076D53C3F5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574176)
					{
						unk_0xCE689A8E8C42ED78(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_632(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_636())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
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
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_635(unk_0x95B959F18401C09A()))
			{
				iVar0 = 20;
			}
			if (func_634(unk_0x95B959F18401C09A()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_633(unk_0x95B959F18401C09A()))
	{
		iVar0 = 2;
	}
	if (func_219())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_633(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 4;
}

bool func_634(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_635(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_636()
{
	return Global_4456448.f_1 == 0;
}

void func_637(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_584(sParam1);
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_584("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_638()
{
	switch (func_218(unk_0x95B959F18401C09A()))
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

char* func_639(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_218(unk_0x95B959F18401C09A()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
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
			if (func_641())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_255(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_255(1))
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
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
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
			if (func_640(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_640(int iParam0)
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

bool func_641()
{
	return (func_644() && func_642(func_643()));
}

int func_642(int iParam0)
{
	return func_258(iParam0, 1);
}

int func_643()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35;
}

bool func_644()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148;
}

void func_645(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(uParam2))
		{
			func_584(uParam1);
		}
		else if (func_319(unk_0x95B959F18401C09A()) == 133)
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT_C");
			unk_0xFA6BEE2B1507FF1E(uParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_584("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_646(var uParam0)
{
	int iVar0;
	
	iVar0 = func_319(unk_0x95B959F18401C09A());
	if (func_647())
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
			switch (func_318())
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

bool func_647()
{
	return Global_1589692;
}

char* func_648(var uParam0)
{
	int iVar0;
	
	iVar0 = func_319(unk_0x95B959F18401C09A());
	if (func_647())
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
			if (func_650() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_650() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_318())
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
			if (func_649() == 1)
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

int func_649()
{
	return Global_2528542.f_4813;
}

int func_650()
{
	if (func_319(unk_0x95B959F18401C09A()) == 132)
	{
		return Global_2528542.f_4808;
	}
	return -1;
}

void func_651(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_595(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x713FEBE56D2BD403(uParam1);
			unk_0xE800DC85FDF60F85(iParam5);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_584(sParam1);
		}
		if (func_673() && iParam6)
		{
			if (func_653())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x713FEBE56D2BD403("LBD_DPD_CNT");
			unk_0xE800DC85FDF60F85(iVar0);
			unk_0xE800DC85FDF60F85(iVar1);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_584(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (func_652(unk_0x95B959F18401C09A()))
			{
				unk_0x4D9DA18AB3C2A466(166);
			}
			else if (func_66())
			{
				unk_0x4D9DA18AB3C2A466(220);
			}
		}
		unk_0x818901B332D5541D();
	}
}

int func_652(int iParam0)
{
	if (func_635(iParam0) || func_634(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_653()
{
	return Global_1574177;
}

struct<4> func_654(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_655(unk_0x95B959F18401C09A()) || func_633(unk_0x95B959F18401C09A()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_39, 16);
			break;
	}
	if (func_587() && unk_0x289064CB38B560AA())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_39, 16);
	}
	return Var0;
}

bool func_655(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 5;
}

char* func_656(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_587() || unk_0x786AF4A44E1B5B4B(uParam1)))
	{
		uVar0 = func_657();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x786AF4A44E1B5B4B(sParam1))
	{
		if (Global_1574415 == 1)
		{
			Global_1574415 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_657()
{
	if (unk_0x3D766F5FD36E703E())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xC95AE863AB260A58())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x18D92F5299E07379())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xC8AE1B3BA3C8EDC9())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_658()
{
	Global_37339 = 1;
}

bool func_659(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x199B24FF79A52CCF("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x199B24FF79A52CCF("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x199B24FF79A52CCF("mp_matchmaking_card");
	}
	return unk_0x11AE7F6A404414C9(*uParam1);
}

void func_660(var uParam0, var uParam1, bool bParam2)
{
	unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 7);
	Global_1574175 = 0;
	func_577();
	Global_1574174 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4583), 5);
		}
	}
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		unk_0x83A1D480DB0B52CC(uParam0);
	}
	if (unk_0x0E4018692D92041D(uParam1->f_33, 0))
	{
		unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 0);
	}
	unk_0x5E1FA2076D53C3F5(0f);
}

int func_661()
{
	if (func_671())
	{
		return 0;
	}
	if (func_563())
	{
		return 0;
	}
	if (!func_669())
	{
		return 0;
	}
	if (!func_551())
	{
		return 0;
	}
	if (func_668(8, -1))
	{
		return 0;
	}
	if (func_672() == 2)
	{
		return 0;
	}
	if (Global_2528542.f_4534)
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	else if (!func_347(unk_0x95B959F18401C09A(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_667(1) || func_665(1)) || Global_17272.f_124) || Global_17272)
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (func_664() && Global_1689319 == 2)
	{
		return 0;
	}
	if (func_101(unk_0x95B959F18401C09A()) && !func_664())
	{
		return 0;
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (Global_1657080)
	{
		return 0;
	}
	if (func_663(0))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (Global_1365133)
	{
		return 0;
	}
	if ((Global_1682620.f_705.f_5 || Global_1685431.f_705.f_5) || Global_1681663.f_705.f_5)
	{
		return 0;
	}
	if (func_662(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

bool func_662(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_4, 6);
}

bool func_663(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_41, iParam0);
}

bool func_664()
{
	return (unk_0x0E4018692D92041D(Global_4456448.f_30, 12) && unk_0x0E4018692D92041D(Global_1689320, 0));
}

int func_665(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_666(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xF1CDE9FD207C4CD8(0, 25) || unk_0xF1CDE9FD207C4CD8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 19) || (!bParam0 && unk_0x1CAA347A3C84C225(0, 19)))
	{
		return 1;
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (((unk_0xF1CDE9FD207C4CD8(0, 166) || unk_0xF1CDE9FD207C4CD8(0, 167)) || unk_0xF1CDE9FD207C4CD8(0, 168)) || unk_0xF1CDE9FD207C4CD8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1CAA347A3C84C225(0, 166) || unk_0x1CAA347A3C84C225(0, 167)) || unk_0x1CAA347A3C84C225(0, 168)) || unk_0x1CAA347A3C84C225(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_666(int iParam0)
{
	int iVar0;
	
	if (unk_0xF9FB5255747DBE88())
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0))
		{
			unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_667(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

bool func_668(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

int func_669()
{
	if (func_670())
	{
		return 1;
	}
	if (unk_0xBB5E373390A5F824())
	{
		return 0;
	}
	if (unk_0x75A50A9E5219C397() || unk_0xD33DAC8D0D70A78C())
	{
		return 0;
	}
	if (unk_0x90346DACE0A79A81())
	{
		return 0;
	}
	return 1;
}

bool func_670()
{
	return Global_1312439;
}

bool func_671()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_672()
{
	return Global_1371947.f_68;
}

int func_673()
{
	if (Global_1574176 > 16)
	{
		return 1;
	}
	return 0;
}

float func_674()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5972EE9BF3C1BE95()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_676()
{
	if (func_679())
	{
		return 1;
	}
	if (func_7(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_647())
	{
		return 1;
	}
	if (func_383(unk_0x95B959F18401C09A()))
	{
		switch (func_319(unk_0x95B959F18401C09A()))
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
				if (!func_677(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_677(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_677(unk_0x95B959F18401C09A()))
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

bool func_677(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 4);
}

int func_678(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_383(unk_0x95B959F18401C09A()) && !func_105(unk_0x95B959F18401C09A())) && !func_592(unk_0x95B959F18401C09A(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_111(unk_0x95B959F18401C09A(), 0) && func_105(unk_0x95B959F18401C09A()))
		{
			return 1;
		}
		if (func_556(unk_0x95B959F18401C09A()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_679()
{
	if (func_680(unk_0x95B959F18401C09A()))
	{
		return Global_1319080;
	}
	return 0;
}

int func_680(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xCCD95118AB42E155(iParam0);
		}
	}
	return 0;
}

void func_681()
{
	if (Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_3 == 3)
	{
		if (!unk_0x0E4018692D92041D(iLocal_347, 8))
		{
			if ((!func_7(unk_0x95B959F18401C09A()) && !func_161(unk_0x95B959F18401C09A())) && !func_395(unk_0x95B959F18401C09A()))
			{
				func_394();
			}
		}
		else if (!unk_0x0E4018692D92041D(iLocal_347, 9))
		{
			if ((func_7(unk_0x95B959F18401C09A()) || func_161(unk_0x95B959F18401C09A())) || func_395(unk_0x95B959F18401C09A()))
			{
				unk_0xD1B5D0431188F774();
				Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4 = 0;
				unk_0x8950ED5730F62EE8(&iLocal_347, 9);
			}
		}
	}
}

void func_682()
{
	int iVar0;
	
	if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iLocal_351)))
	{
		iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iLocal_351));
		if (unk_0xC4DEA49C5B465481(iVar0))
		{
			func_683(iVar0, 2);
		}
	}
	iLocal_351++;
	if (iLocal_351 >= unk_0xF839A4FC3E76D324())
	{
		iLocal_351 = 0;
	}
}

void func_683(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x0E4018692D92041D(Global_1574637.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1574637.f_18)))
	{
		return;
	}
	if (unk_0x0E4018692D92041D(Global_1574637.f_2, iParam0))
	{
		if (Global_1574637 < iParam1 && unk_0x0E4018692D92041D(Global_1574637.f_1, 1))
		{
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 0);
			return;
		}
		if (Global_1574637 != 0)
		{
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 1);
		}
		Global_1574637 = 0;
		Global_1574637.f_2 = 0;
	}
	unk_0x8950ED5730F62EE8(&(Global_1574637.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_684(iParam0))
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
		Global_1574637++;
	}
}

bool func_684(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 10);
}

void func_685(int iParam0, int iParam1)
{
	Local_2623[iParam0 /*12*/] = iParam1;
}

int func_686()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_744.f_534[iVar0 /*42*/].f_1 = func_103();
		iVar0++;
	}
	return 1;
}

int func_687()
{
	return Local_656.f_0;
}

int func_688(int iParam0)
{
	return Local_2623[iParam0 /*12*/];
}

void func_689()
{
	if (unk_0x0E4018692D92041D(Global_1574637.f_1, 6))
	{
		func_712();
		unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 6);
	}
	if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 7))
	{
		if (unk_0x0E4018692D92041D(Global_1574637.f_1, 4) || unk_0x0E4018692D92041D(Global_1574637.f_1, 16))
		{
			if (((!unk_0xE35413546DC97620() && !unk_0xFAC8F20FBC764F4D()) && !func_300()) && func_12(unk_0x95B959F18401C09A(), 1, 1))
			{
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 7);
				func_294("FME_PASINT", 30000);
				func_293(1);
			}
		}
		else if (unk_0x0E4018692D92041D(Global_1574637.f_1, 17))
		{
			if (func_164() && !func_163())
			{
				unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 17);
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 16);
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 23))
	{
		if (((((!unk_0xE35413546DC97620() && !unk_0x0E4018692D92041D(Global_2528542.f_786, 2)) && func_12(unk_0x95B959F18401C09A(), 1, 1)) && !Global_68807) && !Global_53675) && !unk_0xFAC8F20FBC764F4D())
		{
			if (func_710())
			{
				func_294("AMEV_GA_RP", -1);
				if (func_218(unk_0x95B959F18401C09A()) != 200)
				{
					func_293(1);
				}
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 23);
			}
		}
	}
	if (unk_0xD9C92B0885A075F8() && unk_0x1B9A01A53920FD50() == 15)
	{
		if (func_408(unk_0x95B959F18401C09A()))
		{
			if (!unk_0x43AF959D59AC7162(1344549371))
			{
				unk_0xC3E18E4C4B2A7CEF(1344549371);
			}
		}
		else if (unk_0x43AF959D59AC7162(1344549371))
		{
			unk_0xDFCF2335B2854E41(1344549371);
		}
	}
	if (unk_0x0E4018692D92041D(Global_1574637.f_1, 9))
	{
		if (((((!unk_0xE35413546DC97620() && !unk_0xFAC8F20FBC764F4D()) && !func_300()) && func_12(unk_0x95B959F18401C09A(), 1, 1)) && !func_162(unk_0x95B959F18401C09A(), 21)) && !func_162(unk_0x95B959F18401C09A(), 25))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 9);
			func_709(0);
			func_294("FME_TBL00", -1);
			func_293(1);
		}
	}
	if (func_383(unk_0x95B959F18401C09A()))
	{
		if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 18))
		{
			if ((func_162(unk_0x95B959F18401C09A(), 21) && unk_0x0E4018692D92041D(Global_1574637.f_1, 20)) && !unk_0x0E4018692D92041D(Global_1574637.f_1, 19))
			{
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 18);
			}
		}
		else if (unk_0x0E4018692D92041D(Global_1574637.f_1, 18))
		{
			if (((((!unk_0xE35413546DC97620() && !unk_0xFAC8F20FBC764F4D()) && !func_300()) && func_12(unk_0x95B959F18401C09A(), 1, 1)) && unk_0x73DA1542B2F0C458()) && !Global_2528542.f_4822)
			{
				unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 18);
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 19);
				func_294("AMTT_RPAS", -1);
				func_293(1);
			}
		}
	}
	if (((((func_383(unk_0x95B959F18401C09A()) && !func_8(unk_0x95B959F18401C09A())) && func_319(unk_0x95B959F18401C09A()) != 146) && !func_7(unk_0x95B959F18401C09A())) && !func_161(unk_0x95B959F18401C09A())) && !func_699())
	{
		if (func_407(func_319(unk_0x95B959F18401C09A())))
		{
			unk_0x1544DC31C28E93A4(unk_0x95B959F18401C09A());
		}
		if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 22))
		{
			unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 22);
		}
		if (func_454(unk_0x95B959F18401C09A()) || func_401())
		{
			if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 10))
			{
				if (func_698(func_319(unk_0x95B959F18401C09A())))
				{
					if (func_262(0) && !Global_2391045)
					{
						unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_405(1);
						unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 14);
					}
				}
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 10);
			}
		}
		if (func_408(unk_0x95B959F18401C09A()))
		{
			if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 11))
			{
				if (!Global_93734.f_8)
				{
					unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 12);
					func_403(1);
				}
				if (!func_697())
				{
					unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 13);
					func_402();
				}
				if (!Global_2391045)
				{
					unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 14);
					if (func_262(0) && !Global_2391045)
					{
						unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 9);
					}
					func_405(1);
				}
				unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 11);
			}
		}
		else
		{
			func_695(0);
		}
	}
	else
	{
		func_695(1);
	}
	func_690();
	if (func_400(func_319(unk_0x95B959F18401C09A())) && !unk_0x0E4018692D92041D(Global_1574637.f_1, 21))
	{
		unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 21);
	}
	if (((func_164() && !func_163()) || func_162(unk_0x95B959F18401C09A(), 21)) || func_162(unk_0x95B959F18401C09A(), 25))
	{
		if (!unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 10))
		{
			unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 10);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 10))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 10);
	}
}

void func_690()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_300())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_540(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0x0E4018692D92041D(Global_1574637.f_1, 26))
				{
					unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 26);
				}
				func_691(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 26))
	{
		func_46(&(Global_1574637.f_22));
		unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 26);
	}
}

void func_691(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1574637.f_22)))
	{
		func_2(&(Global_1574637.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574637.f_22), iParam1, 0))
	{
		if (func_672() > 0)
		{
			func_694(iParam0);
			if (func_291("AMEV_LBD_HELP"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			func_46(&(Global_1574637.f_22));
		}
	}
	else
	{
		func_693(0);
		func_692();
	}
}

void func_692()
{
	Global_2528542.f_4523 = 0;
}

void func_693(int iParam0)
{
	Global_1371947.f_68 = iParam0;
}

void func_694(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			func_56(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_695(int iParam0)
{
	if ((unk_0x0E4018692D92041D(Global_1574637.f_1, 11) || (unk_0x0E4018692D92041D(Global_1574637.f_1, 10) && iParam0)) || (unk_0x0E4018692D92041D(Global_1574637.f_1, 22) && iParam0))
	{
		if (unk_0x0E4018692D92041D(Global_1574637.f_1, 12))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 12);
			func_403(0);
		}
		if (unk_0x0E4018692D92041D(Global_1574637.f_1, 13))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 13);
			func_696();
		}
		if (unk_0x0E4018692D92041D(Global_1574637.f_1, 14) && !func_111(unk_0x95B959F18401C09A(), 0))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 14);
			func_405(0);
		}
		unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 11);
		unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 10);
		unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 22);
	}
}

void func_696()
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4727), 0);
}

bool func_697()
{
	return unk_0x0E4018692D92041D(Global_2528542.f_4727, 0);
}

int func_698(int iParam0)
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
			return func_408(unk_0x95B959F18401C09A());
		
		case 133:
			return (func_401() || func_5(func_318()));
		
		default:
	}
	return 0;
}

int func_699()
{
	if (((((((((func_708() || func_707()) || func_706()) || func_313()) || (func_705() && !unk_0x289064CB38B560AA())) || (func_702() && !func_701())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_700() == 2 && !unk_0x289064CB38B560AA()))
	{
		return 1;
	}
	return 0;
}

int func_700()
{
	return Global_968393;
}

bool func_701()
{
	return unk_0x0E4018692D92041D(Global_2448756.f_2, 27);
}

int func_702()
{
	if (func_704() || func_703())
	{
		return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_98 == 8;
	}
	return 0;
}

var func_703()
{
	return Global_2448756.f_623;
}

bool func_704()
{
	return unk_0x0E4018692D92041D(Global_2448756.f_2, 11);
}

bool func_705()
{
	return unk_0x0E4018692D92041D(Global_2448756, 5);
}

bool func_706()
{
	return unk_0x0E4018692D92041D(Global_2448756, 2);
}

bool func_707()
{
	return unk_0x0E4018692D92041D(Global_2448756, 20);
}

bool func_708()
{
	return Global_2448756.f_586;
}

void func_709(int iParam0)
{
	int iVar0;
	
	iVar0 = func_206(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x0E4018692D92041D(iVar0, 0))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 0);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 1))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 1);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 2))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x0E4018692D92041D(iVar0, 3))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 3);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 4))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 4);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 5))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x0E4018692D92041D(iVar0, 6))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 6);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 7))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 7);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 8))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x0E4018692D92041D(iVar0, 9))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 9);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 10))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 10);
		}
		else if (!unk_0x0E4018692D92041D(iVar0, 11))
		{
			unk_0x8950ED5730F62EE8(&iVar0, 11);
		}
	}
	func_197(2534, iVar0, -1, 1, 0);
}

int func_710()
{
	int iVar0;
	
	if (!func_47(&(Global_1574637.f_15)))
	{
		func_2(&(Global_1574637.f_15), 0, 0);
		Global_1574637.f_17 = 0;
	}
	else if (func_1(&(Global_1574637.f_15), 1000, 0))
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(Global_1574637.f_17)))
		{
			iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(Global_1574637.f_17));
			if (unk_0xC4DEA49C5B465481(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_711(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_38(unk_0x95B959F18401C09A()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574637.f_17++;
		if (Global_1574637.f_17 >= 32)
		{
			Global_1574637.f_17 = 0;
			func_46(&(Global_1574637.f_15));
		}
	}
	return 0;
}

int func_711(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589819[iVar0 /*818*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_712()
{
	unk_0xD875615F72CD34A6(5);
	func_714();
	unk_0x4B06B5746CBEC99F(1f);
	unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 8);
	func_713();
}

void func_713()
{
	if (Global_1666782)
	{
		if (unk_0x0E4018692D92041D(Global_1666783, 0))
		{
			unk_0xCE689A8E8C42ED78(&Global_2537168, 0);
		}
		if (unk_0x0E4018692D92041D(Global_1666783, 1))
		{
			unk_0xCE689A8E8C42ED78(&Global_2537168, 1);
		}
		if (unk_0x0E4018692D92041D(Global_1666783, 5))
		{
			unk_0xCE689A8E8C42ED78(&Global_2537168, 5);
		}
		if (unk_0x36CDBD83DF514AC4(-355737150))
		{
			unk_0x046ED2CF120C8949(-355737150, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-580979506))
		{
			unk_0x046ED2CF120C8949(-580979506, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-1426452475))
		{
			unk_0x046ED2CF120C8949(-1426452475, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(745417724))
		{
			unk_0x046ED2CF120C8949(745417724, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-1305304906))
		{
			unk_0x046ED2CF120C8949(-1305304906, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-1543175077))
		{
			unk_0x046ED2CF120C8949(-1543175077, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-811770997))
		{
			unk_0x046ED2CF120C8949(-811770997, 1, 0, 0);
		}
		Global_1666783 = 0;
	}
	Global_1666782 = 0;
}

void func_714()
{
	if (unk_0x8ED4328770BEE4A1(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == unk_0x8C40DC84EDF05997() && Global_2528542.f_4884 < 1f)
		{
			return;
		}
	}
	Global_2528542.f_4885 = -1;
	Global_2528542.f_4884 = 1f;
}

int func_715()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2528542.f_4725)
	{
		return 0;
	}
	if ((!func_47(&(Local_656.f_39)) && !func_47(&(Local_656.f_41))) && !func_47(&(Local_656.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x78DCC5D0CB43DEBA();
	if (func_47(&(Local_656.f_41)))
	{
		iVar0 = func_716(&uVar2, &(Local_656.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_656.f_39)))
	{
		iVar0 = func_716(&uVar2, &(Local_656.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_656.f_43)))
	{
		iVar0 = func_716(&uVar2, &(Local_656.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_716(var uParam0, var uParam1)
{
	return unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(*uParam0, *uParam1));
}

int func_717()
{
	if (func_718())
	{
		return 1;
	}
	return 0;
}

bool func_718()
{
	return Global_1574637.f_24;
}

int func_719()
{
	var uVar0;
	
	func_723(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_722())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_721())
	{
		return 1;
	}
	if (func_720(157))
	{
		if (!func_708())
		{
			return 1;
		}
	}
	if (func_720(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_410() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_410()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_720(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_721()
{
	return Global_2458613;
}

bool func_722()
{
	return Global_2448756.f_581;
}

void func_723(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_724(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_724(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x378BD4B3881338C2(Var0.f_1);
			if (unk_0x765F6FEEFF39224F(uVar3))
			{
				if (unk_0xF0D230FB550CD6EB(iVar3, 0))
				{
					uVar4 = unk_0xF2C96862595654B4(iVar3, 0);
					if (unk_0x8F6C3DD0BB146CA3(uVar4, Var0.f_2) && unk_0xE36862B47CD70685())
					{
						if (func_725(uVar4, &bVar5))
						{
							unk_0xD4A76B5E6C175542(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x65F544B458249682(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_725(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(uParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_726()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_727()
{
	int iVar0;
	
	if (func_719())
	{
		Local_3008.f_5 = 5;
	}
	else if (unk_0x0E4018692D92041D(Local_656.f_2, 0))
	{
		Local_3008.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3008.f_5 = 1;
	}
	else
	{
		Local_3008.f_5 = 2;
	}
	Local_3008.f_0 = Local_656.f_52;
	Local_3008.f_1 = Local_656.f_53;
	Local_3008.f_4 = Local_656.f_66;
	Local_3008.f_3 = Local_656.f_51;
	Local_3008.f_10 = (unk_0xEF4753434B24594D() - Local_3008.f_9);
	if (!Global_262145.f_11391)
	{
		if (Local_3008.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x72B85B341ADBE9DE() != -1)
	{
		func_763(Local_3008, Local_656.f_3, Local_2623[unk_0x72B85B341ADBE9DE() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0x0E4018692D92041D(iLocal_347, 4))
	{
		unk_0xCBE6AF58552C63B2(iLocal_355);
		unk_0xCE689A8E8C42ED78(&iLocal_347, 4);
	}
	unk_0x44D426446FAF55FB(iLocal_355);
	unk_0x44D426446FAF55FB(iLocal_356);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x0E4018692D92041D(iLocal_642, iVar0) && !unk_0x66DE54BD13B1BD88(uLocal_643[iVar0]))
		{
			unk_0xCBE6AF58552C63B2(uLocal_643[iVar0]);
			unk_0x44D426446FAF55FB(uLocal_643[iVar0]);
		}
		iVar0++;
	}
	func_391();
	func_470(1, 1);
	unk_0xE5C8B4ABE1F29F25(0);
	func_542(0);
	func_398(Local_656.f_3, 0);
	func_728(133, 0, Local_656.f_37 == 6);
	func_397(23, 0);
	if (func_305() >= 0f)
	{
		unk_0x42EB66BEBE5B2242(0f, 0, 21);
	}
	if (!unk_0x0E4018692D92041D(iLocal_347, 9))
	{
		unk_0xD1B5D0431188F774();
	}
	unk_0x5894DC159447E10A();
}

void func_728(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x95B959F18401C09A() != -1)
	{
		if (unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 13))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 13);
		}
		if (unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 14))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 14);
		}
	}
	if (unk_0x0E4018692D92041D(Global_1574637.f_1, 21))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1574637.f_1), 21);
	}
	func_759();
	unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
	unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_758(func_319(unk_0x95B959F18401C09A()));
		func_397(func_417(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x95B959F18401C09A() != -1) && func_757(unk_0x95B959F18401C09A()) >= 12)
		{
			func_756(2546, -1);
			iVar1 = func_206(2546, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x8950ED5730F62EE8(&Global_1574663, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x8950ED5730F62EE8(&Global_1574663, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x8950ED5730F62EE8(&Global_1574663, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x8950ED5730F62EE8(&Global_1574663, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x8950ED5730F62EE8(&Global_1574663, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x8950ED5730F62EE8(&Global_1574663, 5);
			}
		}
		func_755();
		func_754();
		func_753();
		if ((!func_107(unk_0x95B959F18401C09A()) && !func_299(unk_0x95B959F18401C09A())) && !func_449())
		{
			func_737();
		}
		func_736();
		if (!unk_0x0E4018692D92041D(Global_1669357.f_3, 0) && !unk_0x0E4018692D92041D(Global_1669357.f_3, 1))
		{
			func_712();
		}
		func_735();
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1737), 2);
		func_734();
		func_166();
	}
	if (unk_0x43AF959D59AC7162(1344549371))
	{
		unk_0xDFCF2335B2854E41(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x95B959F18401C09A() != -1 && !func_162(unk_0x95B959F18401C09A(), 21)) && !func_162(unk_0x95B959F18401C09A(), 25)) && !func_111(unk_0x95B959F18401C09A(), 0))
		{
			func_405(0);
			func_403(0);
			if (!bParam1)
			{
				func_733();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2460787 = -1;
			func_48(26, -1);
		}
	}
	if (!func_729())
	{
		Global_2505571 = 1;
	}
}

int func_729()
{
	if (((((!func_652(unk_0x95B959F18401C09A()) && !func_633(unk_0x95B959F18401C09A())) && func_319(unk_0x95B959F18401C09A()) != 146) && !func_732()) && !func_731()) && !func_730(Global_4456448.f_161209))
	{
		return 0;
	}
	return 1;
}

bool func_730(int iParam0)
{
	return iParam0 == 57;
}

int func_731()
{
	if (Global_4456448.f_138474 == Global_262145.f_9487)
	{
		return 1;
	}
	return 0;
}

int func_732()
{
	if ((Global_4456448 == 0 && unk_0x289064CB38B560AA()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_161209 > 0) || unk_0x0E4018692D92041D(Global_4456448.f_4, 15)) || unk_0x0E4018692D92041D(Global_4456448.f_4, 18)) || unk_0x0E4018692D92041D(Global_4456448.f_4, 19)) || unk_0x0E4018692D92041D(Global_4456448.f_4, 29)) || unk_0x0E4018692D92041D(Global_4456448.f_4, 28)) || unk_0x0E4018692D92041D(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_733()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x0E4018692D92041D(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x0E4018692D92041D(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0xCE689A8E8C42ED78(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_734()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4726, 1))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4726), 1);
	}
	if (Global_2528542.f_4726 > 0)
	{
		unk_0x65BA35D6D61F1574("FM_COUNTDOWN_30S_KILL");
		unk_0x65BA35D6D61F1574("FM_COUNTDOWN_30S_FIRA");
		unk_0x7CED302277C0F3D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x1FEA416E00837AFC(1);
		Global_2528542.f_4726 = 0;
		unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
		unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
		unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
		if (!unk_0xCE3CFF625BEBAA04(unk_0xD178EF744F20B712(), "am_pi_menu"))
		{
			if (Global_2528542.f_4736 > -1)
			{
				unk_0x44D426446FAF55FB(Global_2528542.f_4736);
				Global_2528542.f_4736 = -1;
			}
		}
	}
}

void func_735()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574637 = { Var0 };
}

void func_736()
{
	var uVar0;
	
	Global_1319080 = uVar0;
}

void func_737()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_24), &Global_2409313, 2);
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_26), &Global_2409315, 19);
	func_751();
	func_740(1, 1, 0);
	func_738();
}

void func_738()
{
	func_739(0, 0);
}

void func_739(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_740(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_45), &Global_2409334, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409334 };
		Global_2405071.f_45.f_49 = { Global_2409334.f_49 };
		Global_2405071.f_45.f_52 = Global_2409334.f_52;
		Global_2405071.f_45.f_53 = Global_2409334.f_53;
	}
	if (bParam0)
	{
		func_750();
	}
	if (!bParam2)
	{
		func_742(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_741(0);
	func_169();
}

void func_741(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_742(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (bParam0)
	{
		if (func_749())
		{
			func_748();
		}
		Global_2405071.f_704.f_517 = unk_0x8C40DC84EDF05997();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_746();
		func_446(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1741 = 1;
	}
	else
	{
		func_743();
	}
}

void func_743()
{
	if (func_749() && !func_745())
	{
		func_748();
	}
	if (func_745())
	{
		func_744();
	}
	else
	{
		func_746();
		func_446(0, 0, 0, 0, 0);
		Global_2405071.f_1741 = 0;
		Global_2405071.f_1740 = 0;
	}
}

void func_744()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_704), &(Global_2405071.f_1222), 518);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		Global_2405071.f_1740 = 0;
	}
}

int func_745()
{
	if ((Global_2405071.f_1740 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_1222.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_1222.f_517))
	{
		return 1;
	}
	return 0;
}

void func_746()
{
	if (func_749() && !func_745())
	{
		func_748();
	}
	func_747();
	Global_2405071.f_704 = 0;
}

void func_747()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_748()
{
	if (func_745())
	{
		if (Global_2405071.f_704.f_517 == Global_2405071.f_1222.f_517)
		{
			return;
		}
	}
	if (!unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_1222), &(Global_2405071.f_704), 518);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1740 = 1;
	}
}

int func_749()
{
	if ((Global_2405071.f_1741 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_704.f_517))
	{
		return 1;
	}
	return 0;
}

void func_750()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_363), &Global_2409652, 121);
}

void func_751()
{
	func_752();
	Global_2405071.f_2250 = 0;
}

void func_752()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2251[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_753()
{
	Global_2528542.f_4727 = 0;
}

void func_754()
{
	if (unk_0x95B959F18401C09A() != -1)
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1 = 0;
	}
}

void func_755()
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	if (iVar0 != -1)
	{
		Global_1626536[iVar0 /*603*/] = -1;
	}
}

void func_756(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, func_202(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_197(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_198(iParam0, iVar0, iParam1, 1);
	}
}

int func_757(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

int func_758(int iParam0)
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
			if (func_408(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_759()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_1726, 3) || unk_0x0E4018692D92041D(Global_2528542.f_1726, 4))
	{
		if (unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397())
		{
			unk_0xACCDA78123DB57B0(800);
		}
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_1726, 5))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1726), 5);
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_1726, 3))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1726), 3);
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_1726, 4))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1726), 4);
	}
	func_762(0);
	func_761(0);
	func_760(0);
}

void func_760(int iParam0)
{
	if (Global_2528542.f_4511 != iParam0)
	{
		Global_2528542.f_4511 = iParam0;
	}
}

void func_761(bool bParam0)
{
	if (Global_2528542.f_4510 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2528542.f_4510 = bParam0;
	}
}

void func_762(int iParam0)
{
	if (Global_2528542.f_4508 != iParam0)
	{
		Global_2528542.f_4508 = iParam0;
	}
}

void func_763(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xD178EF744F20B712();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_71590)
	{
		if (unk_0xCE3CFF625BEBAA04(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x0B4FD3CFA47FFC6A(&Var1);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, func_764()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x3DA3FD6B26041EE3(&Var14);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xCE06A45F8D739487(&Var28);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xB680266F40334A7F(&Var52);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_penned_in"))
		{
			unk_0x8F65E416EC1D1B3F(&Param0);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x2A813E2E66E13D5E(&Var66);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x68E28BDB1EF35003(&Var79);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x118C1D4F1E2DDE3C(&Var93);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x76689EE9F24F074B(&Var107);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x240F6BDBD967E2F3(&Var123);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x3D455508C71D780A(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x4E35827C7D3B32EC(&Var150);
			}
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x423A9EE664543FEE(&Var164);
		}
	}
}

char* func_764()
{
	switch (Global_2460954)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_765(struct<21> Param0)
{
	func_774(func_775(Param0.f_0), Param0);
	unk_0x12F5DDEAB00B8213(func_773(9));
	unk_0x9D34F024713B3952(func_772(9));
	func_769(0, -1, 0);
	func_767(133);
	unk_0x7643BB59992A9E6E(&Local_656, 88);
	unk_0x568D314D73140729(&Local_2623, 385);
	if (!func_766())
	{
		func_727();
	}
	if (unk_0x06C1EBC003C18F1F())
	{
		unk_0xDFDE4DC8546F54CF(&(Local_656.f_52), &(Local_656.f_53));
	}
	Local_3008.f_2 = unk_0x81457629DB148F89();
	unk_0x9980AE643A60F372(0);
	return 1;
}

int func_766()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 0;
		}
		if (unk_0x4BA2474DB2034FF1())
		{
			return 1;
		}
		if (func_722())
		{
			return 0;
		}
		if (func_720(155))
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

void func_767(int iParam0)
{
	func_735();
	func_768();
	func_753();
	Global_1574637.f_4 = iParam0;
	Global_1574637.f_5 = iParam0;
	func_416(iParam0, -1);
	func_27(&(Global_1574637.f_18), 0, 0);
	Global_2528542.f_4579 = 0;
	Global_2459680[0] = func_103();
	Global_2459680[1] = func_103();
	Global_2459680[2] = func_103();
	Global_2459680[3] = func_103();
	Global_2459680[4] = func_103();
	func_166();
	if (!func_554(func_288()))
	{
		func_287();
	}
	if (func_164() && !func_163())
	{
		unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 16);
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(Global_1574637.f_1), 17);
	}
}

void func_768()
{
	var uVar0;
	
	Global_1574662 = uVar0;
}

int func_769(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_771();
			}
			else
			{
				return 0;
			}
		}
		if (!func_770())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_771();
					}
					else
					{
						return 0;
					}
				}
				if (func_722())
				{
					if (!bParam2)
					{
						func_771();
					}
					else
					{
						return 0;
					}
				}
				if (func_720(155))
				{
					if (!bParam2)
					{
						func_771();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x295BEA3FE13E5C3D())
			{
				if (!bParam2)
				{
					func_771();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x52119E312E15DB07();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (!bParam2)
			{
				func_771();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x295BEA3FE13E5C3D())
	{
		if (!bParam2)
		{
			func_771();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_770()
{
	return Global_1312844;
}

void func_771()
{
	unk_0x5894DC159447E10A();
}

int func_772(int iParam0)
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
			return 0;
		
		default:
	}
	return 0;
}

int func_773(int iParam0)
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
			return 0;
		
		default:
	}
	return 0;
}

void func_774(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_771();
	}
	unk_0x210E46A190FB3CB3(uParam0, 0, Param1.f_16);
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
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
		
		case 125:
			return 32;
		
		case 126:
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
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}


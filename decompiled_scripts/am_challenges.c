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
	int iLocal_643[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	iLocal_355 = unk_0x04B8CCFB93858A27();
	iLocal_356 = unk_0x04B8CCFB93858A27();
	iLocal_357 = -1;
	iLocal_358 = -1;
	if (unk_0x393E9918BC37548A())
	{
		if (!func_768(ScriptParam_0))
		{
			func_730();
		}
	}
	while (true)
	{
		func_729();
		if (func_722() || func_720())
		{
			func_730();
		}
		if (func_718())
		{
			func_730();
		}
		func_692();
		switch (func_691(unk_0x45F54089C0F6B392()))
		{
			case 0:
				if (func_690() == 1)
				{
					if (func_689())
					{
						func_688(unk_0x45F54089C0F6B392(), 1);
					}
				}
				break;
			
			case 1:
				if (func_690() == 1)
				{
					func_139();
					func_127();
				}
				else if (func_690() == 3)
				{
					func_688(unk_0x45F54089C0F6B392(), 3);
				}
				break;
			
			case 3:
				func_730();
				break;
		}
		if (unk_0x722688699565161D())
		{
			switch (func_690())
			{
				case 0:
					if (func_114())
					{
						func_113(1);
					}
					break;
				
				case 1:
					if (Local_656.f_37 == 6)
					{
						func_113(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_333, 1000, 0))
					{
						func_113(3);
					}
					break;
				
				case 3:
					func_730();
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
	if (unk_0x393E9918BC37548A() && !bParam2)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x393E9918BC37548A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				*uParam0 = unk_0x50D85685589EFCBD();
			}
		}
		else
		{
			*uParam0 = unk_0x9B35D07DCD0F0B43();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
		{
			unk_0xA1E7A40E1F56E511(&(Local_656.f_2), 0);
			Local_656.f_1 = unk_0x169A8AC9F93C2727();
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
			if (func_1(&(Local_656.f_43), func_29(), 0) || unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_656.f_38 = unk_0x169A8AC9F93C2727();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_656.f_39), func_28(0), 0) || unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_656.f_2, 1))
				{
					Local_656.f_1 = unk_0x169A8AC9F93C2727();
					unk_0xA1E7A40E1F56E511(&(Local_656.f_2), 1);
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
		if (unk_0x8A7BBB98FFB32893(Local_656.f_67[iVar0 /*2*/].f_1) && !unk_0xF4B969E0807E76C7(unk_0xAEA6D4EC961DFA03(Local_656.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
		{
			iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_2623[iVar1 /*12*/].f_1, 1) || Local_2623[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xA2BC31158C8CEFD2(Local_2623[iVar1 /*12*/].f_1, 0))
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
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -1057008853;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 564131320;
	Param0.f_1 = unk_0x7C7787D2D7139A85();
	if (!iParam14 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
		{
			iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar2);
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
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
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
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
		{
			unk_0xA1E7A40E1F56E511(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0xA2BC31158C8CEFD2(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xA1E7A40E1F56E511(&(Local_656.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
				if (unk_0xD56C8C2B75BF9665(iVar4) && !func_14(iVar4, 0))
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
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
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
	if (Global_1312853[iVar1] == 1)
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
		fVar0 = unk_0xBBDA792448DB5A89(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4);
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
			if (fVar0 >= Global_262145.f_10939)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10940)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10941)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10942)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10943)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10944)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10945 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10946)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10947)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10948)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10949)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10950))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10951))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11063)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11064)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10954))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10956))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10957))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10958))
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
		if (Local_656.f_4[iParam0] == unk_0x2E40EEA43EF34BD6() && func_21(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4, 0))
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
	if (!unk_0xA2BC31158C8CEFD2(Local_656.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_656.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_656.f_49++;
			unk_0xA1E7A40E1F56E511(&(Local_656.f_48), iParam0);
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
	
	if (unk_0xA2BC31158C8CEFD2(Local_656.f_47, iParam0))
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
		unk_0x3B76114EC84D5812(&(Local_656.f_48), iParam0);
		unk_0x3B76114EC84D5812(&(Local_656.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x169A8AC9F93C2727();
		}
		else
		{
			*uParam0 = unk_0x50D85685589EFCBD();
		}
	}
	else
	{
		*uParam0 = unk_0x9B35D07DCD0F0B43();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xA2BC31158C8CEFD2(Local_656.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_656.f_3)
	{
		case 0:
			return Global_262145.f_10256;
		
		case 8:
			return Global_262145.f_10258;
		
		case 3:
			return Global_262145.f_10259;
		
		case 1:
			return Global_262145.f_11049;
		
		case 6:
			return Global_262145.f_11050;
		
		case 10:
			return Global_262145.f_11052;
		
		case 11:
			return Global_262145.f_11054;
		
		case 12:
			return Global_262145.f_11055;
		
		case 15:
			return Global_262145.f_11059;
		
		case 16:
			return Global_262145.f_11060;
		
		case 17:
			return Global_262145.f_11061;
		
		case 18:
			return Global_262145.f_11062;
		
		case 13:
			return Global_262145.f_11053;
		
		case 14:
			return Global_262145.f_11056;
		
		case 2:
			return Global_262145.f_10261;
		
		case 7:
			return Global_262145.f_11051;
		
		case 9:
			return Global_262145.f_11057;
		
		case 5:
			return Global_262145.f_10262;
		
		case 4:
			return Global_262145.f_10260;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_11019;
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
			if (!unk_0x9C625F4590C97F13(Var0.f_1))
			{
				if (func_40(Local_656.f_3, iLocal_352, &Var2, &uVar5))
				{
					Local_656.f_55[iLocal_352] = func_36(iLocal_352);
					if (unk_0xA2BC31158C8CEFD2(Local_2623[Local_656.f_55[iLocal_352] /*12*/].f_2, iLocal_352))
					{
						if (func_33(&(Local_656.f_67[iLocal_352 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x7E32D3AD3CEAB498(unk_0xAEA6D4EC961DFA03(Local_656.f_67[iLocal_352 /*2*/].f_1), 1, 1);
							unk_0x54B5C3A13D3588F0(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), 1);
							unk_0x9D3FE4786B8925D2(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), 1);
							unk_0xA0D3A754AED6B70B(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), 0);
							func_32(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), 1);
							if (unk_0xE9FEBBC43DAFBBAC("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x6950A3804E46BC89(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
							{
								if (unk_0x145DAE1A4D0EA05D(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x7CE457B32235D9D1(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), "MPBitset");
								}
								unk_0xA1E7A40E1F56E511(&iVar6, 10);
								unk_0xA1E7A40E1F56E511(&iVar6, 11);
								unk_0x6950A3804E46BC89(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_352 /*2*/].f_1), "MPBitset", iVar6);
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
	
	if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
	{
		if (unk_0x145DAE1A4D0EA05D(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x7CE457B32235D9D1(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xA1E7A40E1F56E511(&uVar0, 13);
		}
		else
		{
			unk_0x3B76114EC84D5812(&uVar0, 13);
		}
		unk_0x6950A3804E46BC89(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xCBBFE6965951B21E(iParam1))
	{
		return 0;
	}
	if (!unk_0x987DF1B2025CC706(1))
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
		unk_0x7FB505C34A14BAAA(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x847817A65E16621A(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xD4B321D9096B01FC(iVar1))
	{
		*uParam0 = unk_0x7B82BDB8FBC5EEF9(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (unk_0x9C625F4590C97F13(*uParam0))
		{
			if (bParam15)
			{
				unk_0x18620062E6D68D6E(iVar1, 1);
			}
			unk_0x9D3FE4786B8925D2(iVar1, iParam10);
			if (unk_0x457EF27DC4F63820(iVar1))
			{
				if (bParam8)
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 1);
				}
				else
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xA986EE8F099052F4(*uParam0, unk_0x7C7787D2D7139A85(), 1);
				}
			}
			unk_0xEF5C4BC935BFF76E(iVar1, iParam9);
			unk_0x98E94863AB8F55F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x58DFD2EDF224315F(iVar1);
				unk_0x48AB9211DB740DB5(iVar1, 5, 5, 1f);
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
	
	if (func_35(unk_0x7C7787D2D7139A85(), Param0, iParam4) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405071.f_2910[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { Param0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam5;
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
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x01CBD71E072E9F33((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
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
		while (iVar0 <= (unk_0xACF7D965CEBE5714() - 1))
		{
			if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
			{
				iVar8 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
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
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
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
	unk_0x6BB2B1818CAE531E(iParam0);
	return unk_0x6DF9C43E3CC645BC(iParam0);
}

bool func_43()
{
	return (func_5(Local_656.f_3) || func_41(Local_656.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_112(unk_0x7C7787D2D7139A85(), 0) || func_109(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_108(unk_0x7C7787D2D7139A85()) || func_106(unk_0x7C7787D2D7139A85()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xABA4FE93FAF93E28() < iParam0)
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
	if (func_47(&(Global_1574647.f_18)))
	{
		if (!func_1(&(Global_1574647.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1574647.f_18));
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
	if (iParam1 && unk_0xAAAE7D3270284C4E() < iParam0)
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
	return unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 0);
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
			unk_0x9380AC5E82FA214E(0, iParam1);
			break;
		
		default:
			uVar1 = func_49(iParam1);
			iVar0 = unk_0xFD4B2AAE20AA1CBB(uVar1);
			if (unk_0xA2BC31158C8CEFD2(iVar0, iParam0))
			{
				unk_0x3B76114EC84D5812(&iVar0, iParam0);
				unk_0x9380AC5E82FA214E(iVar0, iParam1);
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
	uVar1 = unk_0xFD4B2AAE20AA1CBB(uVar0);
	return unk_0xA2BC31158C8CEFD2(uVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 2) && !func_8(unk_0x7C7787D2D7139A85())) && !func_7(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x9591DE0F00127F2A(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x9591DE0F00127F2A(sParam1))
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
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_105(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_103(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
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
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56()
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_57()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_61(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_58(&(Global_2437549.f_3032.f_1));
}

void func_58(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x749CA887CB0AFEC9(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xE434AB6E3DE89861())
		{
			unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x282C78036676E0C2(0);
			unk_0xAC7C2DE2DDC7AF03();
		}
		unk_0x749CA887CB0AFEC9(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x81394B4515AF31C3(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
		{
			if (!Global_76846)
			{
				if (unk_0x260395BA7F0C83CB() && !func_60(0))
				{
					unk_0xCF33E56642B34516(800);
				}
			}
		}
	}
	func_59(0);
}

void func_59(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_60(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_61(var uParam0)
{
	func_62(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_62(var uParam0)
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

int func_63(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	return Global_2448961.f_17;
}

void func_65(var uParam0)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_72 = func_66();
	}
}

int func_66()
{
	return 21;
}

int func_67(int iParam0)
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

void func_68(var uParam0, int iParam1)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_102() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_100(iParam0) && !bParam4)
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
		iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_100(unk_0x7C7787D2D7139A85()) || (func_99() && func_98())) && !unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_97();
		if (unk_0xD4B321D9096B01FC(uVar1))
		{
			if (unk_0x7FA2061748BA645E(iVar1))
			{
				if (unk_0x74D4E16E179B8F53(iVar1) != -1)
				{
					if (func_12(unk_0x74D4E16E179B8F53(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_95(iParam1, iParam0, 0);
							}
							else
							{
								return func_82(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_95(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_95(iParam1, iParam0, 0);
		}
		else
		{
			return func_82(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0x7C7787D2D7139A85(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xD56C8C2B75BF9665(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
	if ((func_81() || (func_80() && func_78())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_72(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4456448.f_154360, 1))
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
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
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
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
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
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
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 0);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 1);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 2);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 4);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 5);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 6);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 8);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 9);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 10);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 12);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 13);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 14);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74(iParam1, iParam0, 4);
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

bool func_78()
{
	if (func_79())
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 4);
}

bool func_79()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

bool func_80()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0);
	}
	return ((unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0) || Global_1654024) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()
{
	if (func_79() && unk_0xA51CBC95AC3A4B14())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_91())
			{
				iVar3 = func_87(iParam0);
				if (!iVar3 == -1)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(iParam1, iParam0, iVar0, 0) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18)) || ((func_76(unk_0xC69A85EEB9CA3B95(iParam1), unk_0xC69A85EEB9CA3B95(iParam0), 0) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 23)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 26))
			{
				return func_83(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_87(iParam0);
	if (!iVar4 == -1)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_83(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && unk_0xC69A85EEB9CA3B95(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
	}
	return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_86(iParam0);
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

var func_86(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)
{
	if (!iParam0 == func_102())
	{
		if (func_89(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_88(iParam0)];
		}
	}
	return -1;
}

int func_88(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_102();
}

bool func_89(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_90(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_102();
}

int func_90(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_91()
{
	if (((func_94() || func_93()) || func_64()) || func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2448961.f_19;
}

var func_93()
{
	return Global_2448961.f_16;
}

var func_94()
{
	return Global_2448961.f_15;
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_91())
	{
		iVar2 = func_87(iParam1);
		if (!iVar2 == -1)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_102())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_21, 13))
		{
			iVar0 = func_96(iParam0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 26) && !func_76(iParam0, unk_0xC69A85EEB9CA3B95(iParam1), 0))
		{
			iVar0 = func_83(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
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

var func_97()
{
	return Global_2359302.f_2;
}

bool func_98()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 4);
}

bool func_99()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

int func_100(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_102()
{
	return -1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_105(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_102();
	uParam1->f_18 = func_102();
	uParam1->f_19 = func_102();
	uParam1->f_20 = func_102();
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

bool func_106(int iParam0)
{
	return func_107(iParam0, 20);
}

bool func_107(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_107(iParam0, 9);
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_110(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_110(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0)
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
	return func_111(iParam0, 0);
	return 0;
}

int func_111(int iParam0, int iParam1)
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

int func_112(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	Local_656.f_0 = iParam0;
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_656.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_656.f_39));
	func_119();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_656.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_115();
	}
	return 1;
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_656.f_3))
		{
			Local_656.f_67[iVar0 /*2*/] = func_118();
		}
		else
		{
			Local_656.f_67[iVar0 /*2*/] = func_116();
		}
		iVar0++;
	}
}

int func_116()
{
	int iVar0;
	
	switch (Local_656.f_3)
	{
		case 12:
			return func_117();
			break;
	}
	iVar0 = unk_0xBAC643F143880136(0, 2);
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

int func_117()
{
	int iVar0;
	
	iVar0 = unk_0xBAC643F143880136(0, 2);
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

int func_118()
{
	int iVar0;
	
	iVar0 = unk_0xBAC643F143880136(0, 2);
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

void func_119()
{
	int iVar0;
	
	iVar0 = func_123();
	Local_656.f_3 = iVar0;
	func_120(func_122(133, iVar0, 0, 0));
}

void func_120(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 226654995;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = iParam0;
	iVar3 = func_121(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Var0, 3, iVar3);
	}
}

var func_121(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
			{
				if (bParam1)
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_123()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_11348;
	iVar0[1] = Global_262145.f_11021;
	iVar0[2] = Global_262145.f_11352;
	iVar0[3] = Global_262145.f_11350;
	iVar0[4] = Global_262145.f_11351;
	iVar0[5] = Global_262145.f_11353;
	iVar0[6] = Global_262145.f_11022;
	iVar0[7] = Global_262145.f_11023;
	iVar0[8] = Global_262145.f_11349;
	iVar0[9] = Global_262145.f_11029;
	iVar0[10] = Global_262145.f_11024;
	iVar0[11] = Global_262145.f_11026;
	iVar0[12] = Global_262145.f_11027;
	iVar0[13] = Global_262145.f_11025;
	iVar0[14] = Global_262145.f_11028;
	iVar0[15] = Global_262145.f_11031;
	iVar0[16] = Global_262145.f_11032;
	iVar0[17] = Global_262145.f_11033;
	iVar0[18] = Global_262145.f_11034;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_126(iVar21) || func_124(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x64A3FFD9D62755C5(0f, fVar20);
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
	return func_123();
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_125(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2501271.f_130[iVar0 /*2*/] == iVar1 && Global_2501271.f_130[iVar0 /*2*/].f_1 == func_122(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
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

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10250;
		
		case 1:
			return Global_262145.f_11035;
		
		case 6:
			return Global_262145.f_11036;
		
		case 7:
			return Global_262145.f_11037;
		
		case 8:
			return Global_262145.f_10251;
		
		case 3:
			return Global_262145.f_10252;
		
		case 4:
			return Global_262145.f_10253;
		
		case 2:
			return Global_262145.f_10254;
		
		case 5:
			return Global_262145.f_10255;
		
		case 9:
			return Global_262145.f_11043;
		
		case 10:
			return Global_262145.f_11038;
		
		case 11:
			return Global_262145.f_11040;
		
		case 12:
			return Global_262145.f_11041;
		
		case 15:
			return Global_262145.f_11045;
		
		case 16:
			return Global_262145.f_11046;
		
		case 17:
			return Global_262145.f_11047;
		
		case 18:
			return Global_262145.f_11048;
		
		case 13:
			return Global_262145.f_11039;
		
		case 14:
			return Global_262145.f_11042;
		
		default:
	}
	return 1;
}

void func_127()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_656.f_55[iVar0] == unk_0x2E40EEA43EF34BD6())
			{
				if (func_128(iVar0))
				{
					if (!unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_2, iVar0))
					{
						unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_2, iVar0))
				{
					unk_0x3B76114EC84D5812(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_2, iVar0))
			{
				unk_0x3B76114EC84D5812(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_128(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_39(iParam0, &Var0, &uVar3))
	{
		if (func_129(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xF57CE8FF35DF4458(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x20DAA923606B772E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x20DAA923606B772E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x20E117647697470E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (unk_0x44C423C5FBCB538D(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_134(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_130(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_130(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (!unk_0x260395BA7F0C83CB())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xD34AF93E9BCF12F0(func_132(unk_0x7C7787D2D7139A85()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x93086679C0E859D8(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
				{
					if ((func_131(iVar1) || !bParam10) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xC69A85EEB9CA3B95(iVar1) == -1)
							{
								if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xC69A85EEB9CA3B95(iVar1) != unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))) || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
							{
								if (unk_0xD34AF93E9BCF12F0(func_132(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x08E2E9366FE03102(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xC69A85EEB9CA3B95(iVar1) != iParam8 || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
						{
							if (unk_0xD34AF93E9BCF12F0(func_132(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x08E2E9366FE03102(iVar1, Param0, fParam3))
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

int func_131(int iParam0)
{
	if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_64() && Global_1590446[iVar0 /*871*/].f_842) && !func_133(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_38(iParam0);
}

int func_133(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
				{
					if (!bParam7 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
						{
							if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam9) && bParam6) && func_135(iVar1))
							{
							}
							else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
							{
								if (unk_0xD34AF93E9BCF12F0(func_38(iVar1), Param0, 1) < fParam3)
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

int func_135(int iParam0)
{
	if (func_138(unk_0x7C7787D2D7139A85(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_137(iParam0) };
	if (unk_0xB8A6A83E8C303720(&Global_2507671))
	{
		return 1;
	}
	if (func_136(unk_0x7C7787D2D7139A85(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_102())
	{
		if (iVar0 == func_88(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_137(int iParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
	return Var0;
}

int func_138(int iParam0, int iParam1)
{
	if (unk_0xFF6895C150414C31())
	{
		Global_2507671 = { func_137(iParam0) };
		Global_2507684 = { func_137(iParam1) };
		if (unk_0xF10E9BDC0C546560(&Global_2507671))
		{
			if (unk_0xF10E9BDC0C546560(&Global_2507684))
			{
				unk_0x4065D3D900AB253F(&Global_2507601, 35, &Global_2507671);
				unk_0x4065D3D900AB253F(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_139()
{
	float fVar0;
	float fVar1;
	
	func_685();
	func_684();
	if (func_682())
	{
		func_570();
	}
	if (!func_7(unk_0x7C7787D2D7139A85()))
	{
		if (func_546(0, 1, 1))
		{
			if (unk_0xA2BC31158C8CEFD2(iLocal_347, 6))
			{
				unk_0x3B76114EC84D5812(&iLocal_347, 6);
			}
			switch (Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_3)
			{
				case 0:
					if (Local_656.f_37 < 2)
					{
						if (Local_656.f_37 > 0)
						{
							if (Local_656.f_3 != -1)
							{
								func_545(1);
								func_544(1);
							}
						}
					}
					else
					{
						func_544(2);
					}
					break;
				
				case 1:
					func_538(9);
					if (Local_3008.f_8 == 0)
					{
						Local_3008.f_8 = unk_0x71EC776E812C6A0A();
					}
					if (Local_656.f_37 >= 2)
					{
						func_544(2);
						Local_3008.f_9 = unk_0x71EC776E812C6A0A();
					}
					if (func_43())
					{
						func_538(0);
					}
					func_536((func_29() - func_537(&(Local_656.f_43), 0, 0)));
					func_533(func_535((func_29() - func_537(&(Local_656.f_43), 0, 0)), 0), func_534(Local_656.f_3));
					func_473(0, func_532());
					func_447();
					func_425();
					if (func_424())
					{
						func_423();
					}
					break;
				
				case 2:
					if (Local_656.f_37 > 2)
					{
						func_545(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_422())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_403(133, fVar0, fVar1, 0, 0, 0, 0);
						func_402(Local_656.f_3, 1);
						func_401(23, 1);
						if (Local_3008.f_8 == 0)
						{
							Local_3008.f_8 = unk_0x71EC776E812C6A0A();
						}
						if (Local_3008.f_9 == 0)
						{
							Local_3008.f_9 = unk_0x71EC776E812C6A0A();
						}
						func_397();
						unk_0x53B69E4722206E0C(1);
						if (func_422())
						{
							unk_0xB7F4DA52DE3AAF24(0f);
							unk_0x60F310C72311BCA8(0);
						}
						if (Local_656.f_3 == 14)
						{
							func_396(&Local_367);
						}
						func_395();
						if (!func_7(unk_0x7C7787D2D7139A85()))
						{
							func_52(63, "AMCH_STARTED", func_394(Local_656.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_391("AMCH_WARN", func_393(Local_656.f_3), func_392(Local_656.f_3)))
							{
								unk_0x0D23E3918F7AF11B(1);
							}
						}
						if (func_43())
						{
							func_374(678f, 794f, 206f, 8f, 0);
							func_374(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_374(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_544(3);
					}
					break;
				
				case 3:
					if (Local_656.f_37 > 3)
					{
						iLocal_349 = 0;
						func_544(4);
					}
					else
					{
						if (!unk_0xA2BC31158C8CEFD2(Local_656.f_2, 1))
						{
							func_333();
							func_330();
							func_329();
						}
						if (func_328(0) && !func_20(0))
						{
							func_327();
						}
					}
					if (func_422())
					{
						unk_0xDA1C9614D8C6EE61(unk_0x7C7787D2D7139A85());
					}
					func_326();
					func_303();
					func_570();
					func_473(0, 1);
					func_447();
					func_425();
					func_538(2);
					func_538(5);
					func_538(7);
					break;
				
				case 4:
					if (func_292(&uLocal_359, !unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0)) || unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
					{
						if (func_5(Local_656.f_3))
						{
							if (Local_656.f_37 == 5)
							{
								func_544(5);
							}
						}
						else
						{
							func_544(6);
						}
					}
					func_279();
					func_171();
					func_303();
					func_570();
					func_473(1, 1);
					func_395();
					break;
				
				case 5:
					if (Local_656.f_37 > 5)
					{
						func_544(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_166();
		}
	}
	else
	{
		func_166();
	}
	func_146();
	func_141();
	func_140();
}

void func_140()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_43())
	{
		Var0 = { Local_656.f_67[iLocal_366 /*2*/] };
		if (unk_0x9C625F4590C97F13(Var0.f_1))
		{
			iVar2 = unk_0x40237B62400B4BCC(Var0.f_1);
			if (unk_0x77FF1FAF6F41CA71(iVar2))
			{
				if (!unk_0xD960230552BC4165(iVar2, 0))
				{
					unk_0xF25956700ADFD77F(&iVar2);
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

void func_141()
{
	if (Local_656.f_37 == 5)
	{
		if (unk_0x9C625F4590C97F13(Local_656.f_67[iLocal_366 /*2*/].f_1))
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_366 /*2*/].f_1), 0))
			{
				if (!unk_0xA2BC31158C8CEFD2(iLocal_642, iLocal_366))
				{
					unk_0xA1E7A40E1F56E511(&iLocal_642, iLocal_366);
					iLocal_643[iLocal_366] = unk_0x04B8CCFB93858A27();
					unk_0x5F5C6A264C2CA8B1(iLocal_643[iLocal_366], "Explosion_Countdown", unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_366 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xEC93A4D791E42F8E(iLocal_643[iLocal_366], "Time", 30f);
				}
				if ((30000 - func_537(&(Local_656.f_45), 0, 0)) >= 0)
				{
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_366 /*2*/].f_1), 0))
					{
						func_538(1);
						iLocal_654 = 1;
					}
				}
				else if (unk_0xF42AC9E0924DC59B(Local_656.f_67[iLocal_366 /*2*/].f_1))
				{
					unk_0x7FF38BFB318C1A86(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_366 /*2*/].f_1));
					unk_0x47918C34E2805B9C(unk_0x40237B62400B4BCC(Local_656.f_67[iLocal_366 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(iLocal_642, iLocal_366) && !unk_0xDE3C2FB26058823A(iLocal_643[iLocal_366]))
			{
				unk_0xCFF6AB47B7B014FF(iLocal_643[iLocal_366]);
			}
		}
		if (iLocal_655)
		{
			if (!func_100(unk_0x7C7787D2D7139A85()))
			{
				func_143(func_535((30000 - func_537(&(Local_656.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_142();
			}
		}
	}
}

void func_142()
{
	Global_1375006.f_1109 = 1;
}

void func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_145(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_144(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_144(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_145(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

void func_146()
{
	if (((func_12(unk_0x7C7787D2D7139A85(), 1, 1) && !func_7(unk_0x7C7787D2D7139A85())) && !func_162(unk_0x7C7787D2D7139A85())) && func_546(0, 1, 1))
	{
		if (Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 == 1)
		{
			func_159(func_161(Local_656.f_3), func_393(Local_656.f_3), 0, 0);
		}
		else if (Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 == 3)
		{
			if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 10))
			{
				func_147(func_392(Local_656.f_3), 0);
			}
			else
			{
				func_147("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_395();
		}
	}
	else
	{
		func_395();
	}
}

void func_147(char* sParam0, bool bParam1)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return;
	}
	if (func_157(sParam0))
	{
		return;
	}
	func_151();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312585.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_150();
	func_149(bParam1);
	func_148();
}

void func_148()
{
	unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 1);
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_1312585.f_59), 0);
}

void func_150()
{
	Global_1312585.f_10 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 86400000);
	Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
}

void func_151()
{
	func_153();
	func_152(0);
}

void func_152(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x393E9918BC37548A();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x169A8AC9F93C2727();
		Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
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

void func_153()
{
	if (!func_156())
	{
	}
	if (func_155())
	{
		unk_0x8C952E99D90780F7(&(Global_1312585.f_12));
		func_154();
		unk_0xCC56AD222DA9A8C1();
	}
}

void func_154()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			unk_0x6A8B3CC08A759F44(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_155()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_156()
{
	if (!func_155())
	{
		return 0;
	}
	unk_0xC1A9801A23F32F8F(&(Global_1312585.f_12));
	func_154();
	return unk_0xCDD0AB887E3F6532();
}

bool func_157(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_158(sParam0);
	}
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12));
}

bool func_158(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

int func_159(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam1))
	{
		return 0;
	}
	if (func_160(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_151();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312585.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_150();
	func_149(bParam2);
	func_148();
	return 1;
}

bool func_160(char* sParam0, char* sParam1)
{
	if (!func_155())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam1))
	{
		return 0;
	}
	if (!unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam1) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

char* func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203())) || unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
					iVar1 = unk_0x7F375072508F738F(iVar0);
					if (unk_0xF39FF829579D1A21(iVar1) && unk_0xA03B0E2641CE8F87(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_sniperrifle"), 0) && !unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_heavysniper"), 0)) && !unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_162(int iParam0)
{
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1574647.f_13)))
		{
			if (!func_1(&(Global_1574647.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1574647.f_13));
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 9);
}

bool func_163(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_164()
{
	return Global_1312417.f_1;
}

bool func_165()
{
	return Global_1312417;
}

void func_166()
{
	if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 6))
	{
		unk_0x002BEFCA6CC9B4F5();
		func_473(1, 1);
		unk_0xCFF6AB47B7B014FF(iLocal_355);
		unk_0x3B76114EC84D5812(&iLocal_347, 4);
		func_170();
		func_168();
		unk_0xD488560A9EFC8231(0f, 0, 21);
		unk_0xA1E7A40E1F56E511(&iLocal_347, 6);
		func_167();
	}
}

void func_167()
{
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_7 = 0;
}

void func_168()
{
	if (Global_2413894.f_6 == unk_0x429EE9FF15BB9033())
	{
		func_169();
	}
}

void func_169()
{
	struct<28> Var0;
	
	if (unk_0xAB2A82A2838B61B7(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == unk_0x429EE9FF15BB9033())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413894 = { Var0 };
	Global_2413894.f_6 = -1;
}

void func_170()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x429EE9FF15BB9033())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x7C7787D2D7139A85()))
		{
			unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 0);
			return;
		}
		if (func_162(unk_0x7C7787D2D7139A85()))
		{
			unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 0);
			return;
		}
		func_240(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3008.f_6 = (Local_3008.f_6 + iVar0);
			if (!Global_262145.f_11500)
			{
				func_239(10, Local_3008.f_6);
			}
			Global_2461199 = iVar0;
			if (func_238())
			{
				func_226(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0xD9E4BA7E1787178D(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3008.f_7 = (Local_3008.f_7 + iVar1);
			func_225();
			func_172(0, unk_0x0FA8183DAD2B3203(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 0);
	}
}

int func_172(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_173(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_173(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_183(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0x4625051E51BA911B(iParam1))
			{
				uVar1 = unk_0x3D464779B732760F(iParam1);
				func_179(unk_0x0E516C24C87F5D0C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_174(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_174(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_177(iParam0, 1) };
	if (iParam0 == func_176(unk_0x0FA8183DAD2B3203()))
	{
		func_175(1);
	}
	func_179(Var0, iParam1, 0, sParam2, uParam3);
}

void func_175(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_176(int iParam0)
{
	return iParam0;
}

Vector3 func_177(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x80022561D13932C8())
	{
		Var3 = { unk_0x521C180E8FDEB978(2) };
	}
	if (iParam0 == func_178(unk_0x0FA8183DAD2B3203()) && unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
	{
		Var0 = { unk_0xC12F91346EA13947(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		fVar6 = unk_0xD2809C7F7FD79247(iParam0);
		if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x16DECC52D9360F1E(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_178(int iParam0)
{
	return iParam0;
}

void func_179(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { Param0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_182(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = unk_0x169A8AC9F93C2727();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_181();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_180();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), uParam6);
		}
	}
}

int func_180()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_181()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_182(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xD34AF93E9BCF12F0(unk_0xEB9451CD6AC51B04(), Param0, 1);
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

var func_183(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_184(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_224(unk_0x7C7787D2D7139A85()) || func_223(unk_0x7C7787D2D7139A85()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_221() || func_218(unk_0x7C7787D2D7139A85()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_92())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_217(uParam2))
	{
	}
	if (func_216())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_214(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_213(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_211(0, &iVar1);
					break;
				
				case 3:
					func_211(1, &iVar1);
					break;
				
				case 1:
					func_209(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
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
			func_206(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_194((func_204(unk_0x7C7787D2D7139A85(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x9DF8487FF4AABAFE(iVar1, iParam8, iParam9);
				if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_2 != -1)
				{
					func_206(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_189(iVar1);
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
				func_185((func_187(unk_0x7C7787D2D7139A85()) + iVar1));
			}
			else
			{
				func_185((func_187(unk_0x7C7787D2D7139A85()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_185(int iParam0)
{
	if (func_216())
	{
		Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_5 = iParam0;
		func_186(joaat("mpply_globalxp"), iParam0);
	}
}

void func_186(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, 1);
	}
}

int func_187(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return func_188(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_188(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_189(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_137(unk_0x7C7787D2D7139A85()) };
	if (unk_0xFF6895C150414C31())
	{
		if (unk_0xF10E9BDC0C546560(&Var0))
		{
			iVar13 = func_192(func_193(&Var0));
			if (iVar13 == 0)
			{
				func_191(&Global_1384134, iParam0);
				func_190(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_191(&Global_1384135, iParam0);
				func_190(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_191(&Global_1384136, iParam0);
				func_190(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_191(&Global_1384137, iParam0);
				func_190(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_191(&Global_1384138, iParam0);
				func_190(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_192(int iParam0)
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_193(var uParam0)
{
	if (unk_0xFF6895C150414C31())
	{
		if (unk_0xF10E9BDC0C546560(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (func_216())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_203(-1)])
				{
					unk_0x9DF8487FF4AABAFE(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_203(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x9DF8487FF4AABAFE(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x9DF8487FF4AABAFE(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_202(unk_0x7C7787D2D7139A85()))
		{
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_6 = func_200(iParam0, 1);
		}
		func_199(639, iParam0, -1, 1);
		func_198(640, func_200(iParam0, 1), -1, 1, 0);
		Global_1384279[func_203(-1)] = iParam0;
		func_195(-1109644434, 7, 0);
	}
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_197(iParam1, iParam2))
	{
		iVar0 = func_196();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_196()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_197(int iParam0, var uParam1)
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_203(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_203(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_203(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_203(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_203(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_203(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_203(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_203(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_203(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_203(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_203(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_203(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_203(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_203(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_203(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_203(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_203(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_203(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_203(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_203(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_203(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_203(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_203(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_203(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_203(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_203(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_203(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_203(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_203(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_203(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_203(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_203(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_203(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_203(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_203(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_203(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_203(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_203(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_203(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_203(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_203(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_203(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_203(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_203(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_203(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_203(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_201(iParam0, 0);
}

int func_201(int iParam0, int iParam1)
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
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
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

int func_202(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_204(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_205(iParam0);
}

int func_205(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return Global_1384279[func_203(-1)];
			}
			else if (func_202(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_203(-1)];
	}
	return 0;
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_208(iParam0, func_203(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_207(iParam0))
	{
		func_198(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_199(iParam0, iVar0, iParam2, 1);
	}
}

int func_207(int iParam0)
{
	if (Global_1384128)
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
			case 9509:
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
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_203(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
	iVar0 = 0;
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		iVar4 = unk_0x9DBE48BD26DE1888(iVar0);
		if (unk_0x2700CB8907086DF3(iVar4))
		{
			iVar5 = unk_0xD7EB9DC48246DA95(iVar4);
			if (unk_0xC69A85EEB9CA3B95(iVar5) != -1)
			{
				if (unk_0xC69A85EEB9CA3B95(iVar5) == iVar1 || func_76(unk_0xC69A85EEB9CA3B95(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x7C7787D2D7139A85())
					{
						if (func_138(unk_0x7C7787D2D7139A85(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_210(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_210(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_210(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_211(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xACF7D965CEBE5714())
		{
			iVar3 = iVar0;
			if (unk_0x2700CB8907086DF3(iVar3))
			{
				iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x7C7787D2D7139A85())
					{
						iVar1++;
						if (func_138(unk_0x7C7787D2D7139A85(), iVar4))
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
				if (iVar4 != unk_0x7C7787D2D7139A85())
				{
					if (func_212(unk_0x7C7787D2D7139A85(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_138(unk_0x7C7787D2D7139A85(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_210(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_210(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_212(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (unk_0x2909109C6CD2EDDA() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_210(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_214(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x25A1A0BF87F74E56(iParam0) > func_204(unk_0x7C7787D2D7139A85(), 1))
		{
			iParam0 = -func_204(unk_0x7C7787D2D7139A85(), 1);
		}
	}
	if (func_215(8000, 0, 0) > 0)
	{
		if (func_215(8000, 0, 0) < (iParam0 + func_204(unk_0x7C7787D2D7139A85(), 1)))
		{
			iParam0 = (func_215(8000, 0, 0) - func_204(unk_0x7C7787D2D7139A85(), 1));
		}
	}
	return iParam0;
}

int func_215(int iParam0, bool bParam1, int iParam2)
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
	return Global_290594[iParam0];
}

int func_216()
{
	return 1;
}

int func_217(var uParam0)
{
	if (unk_0x79FCE4565761C974(uParam0))
	{
		return 1;
	}
	else if (unk_0x2553916E420E8EF0(uParam0, "") || unk_0x2553916E420E8EF0(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	return func_219(func_220(iParam0));
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_220(int iParam0)
{
	if (func_112(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

bool func_221()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_64();
	}
	return func_222(Global_4456448.f_154360);
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_223(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_224(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_225()
{
	Global_2460540 = 1;
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_238())
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
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x10312E24AC503B38(func_16()) || unk_0x9F3230C03E32BA3F())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x45E39245DFF8B94A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar4))
		{
			*uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_233(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xA1E7A40E1F56E511(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
		{
			if (!bVar0)
			{
				unk_0x35669F69F99705F6();
			}
		}
		else if (!bVar0)
		{
			unk_0x7724338620CF87D3(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_230(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_230(var uParam0)
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
	func_231(&(uParam0->f_13));
	func_231(&(uParam0->f_13.f_13));
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

void func_231(var uParam0)
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

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2461338 = uParam1;
	Global_2461337 = iParam0;
}

int func_234(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_238())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = uParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = uParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = unk_0xB3EE417AD9F0CAA2();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_235(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_235(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1969967074;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = { Param0.f_65 };
	Var0.f_2.f_32 = iParam84;
	iVar35 = func_237(Var0.f_1);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_236();
		unk_0x990C4E4B3665A4D6(1, &Var0, 35, iVar35);
	}
}

void func_236()
{
	unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

var func_237(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
	}
	return uVar0;
}

int func_238()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!unk_0xE434AB6E3DE89861() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

void func_240(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x2E40EEA43EF34BD6(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_656.f_1 - iLocal_345)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11435)
		{
			iVar1 = Global_262145.f_11435;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_278() * iVar1);
		*uParam1 = (func_277() * iVar1);
		fVar2 = func_276();
		if (fVar2 > 0f && !unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_275())
			{
				iVar3 = func_275();
			}
			iVar4 = Local_656.f_51;
			if (iVar4 > func_274())
			{
				iVar4 = func_274();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_267(func_273(), func_272(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_262145.f_11448)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_267(func_266(), func_265(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_262145.f_11449)));
		}
		else
		{
			func_263(1);
		}
	}
	else
	{
		func_263(0);
	}
	func_241(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_241(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_262())
		{
			if (func_261(0))
			{
				if (!func_257(0))
				{
					if (unk_0xD56C8C2B75BF9665(func_256()))
					{
						if (func_255() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_255());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_253(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_246("GB_BCUT_TICK1", func_256(), iVar0, 0, 0, 1, 1);
						}
						func_245(20);
						func_242(func_256(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = -1590759069;
		Var0.f_1 = unk_0x7C7787D2D7139A85();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_244(iParam0);
		func_243(&(Var0.f_6), &(Var0.f_7));
		unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_237(iParam0));
	}
}

void func_243(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_244(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_246(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
		}
		if (unk_0x9591DE0F00127F2A(&Var1))
		{
		}
		unk_0x6C607B5286DEE8D9(sParam0);
		unk_0xEB6F6B8EBD6B6648(func_69(iParam1, -2, 1, 0, 0));
		unk_0xA89C789CC9FEF523(func_251(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xEB6F6B8EBD6B6648(iParam3);
		}
		unk_0x6A8B3CC08A759F44(iParam2);
		iVar0 = unk_0x6E617E0C74B3189D(0, 1);
		func_247(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_250() || !unk_0xA51CBC95AC3A4B14()) || !func_14(unk_0x7C7787D2D7139A85(), 0))
	{
		return;
	}
	iVar0 = func_248(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_249(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_250()
{
	return unk_0x9742C47C6EA02281(-1762644250);
}

var func_251(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_252(&cVar0);
}

var func_252(char[4] cParam0)
{
	return cParam0;
}

void func_253(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_254(1);
	}
	else
	{
		iVar1 = func_254(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_254(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_255()
{
	return Global_262145.f_12389;
}

int func_256()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11;
}

bool func_257(bool bParam0)
{
	return func_258(unk_0x7C7787D2D7139A85(), bParam0);
}

int func_258(int iParam0, bool bParam1)
{
	return func_259(iParam0, bParam1, 1);
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_260(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_102() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 != func_102())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_261(bool bParam0)
{
	return func_89(unk_0x7C7787D2D7139A85(), bParam0);
}

bool func_262()
{
	return func_90(unk_0x7C7787D2D7139A85());
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
		if (func_264(1))
		{
			unk_0xA1E7A40E1F56E511(&Global_1574672, 1);
		}
	}
	else if (func_264(2))
	{
		unk_0xA1E7A40E1F56E511(&Global_1574672, 2);
	}
}

int func_264(int iParam0)
{
	var uVar0;
	
	uVar0 = func_208(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xA2BC31158C8CEFD2(uVar0, 0) && unk_0xA2BC31158C8CEFD2(iVar0, 1)) && unk_0xA2BC31158C8CEFD2(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xA2BC31158C8CEFD2(iVar0, 3) && unk_0xA2BC31158C8CEFD2(iVar0, 4)) && unk_0xA2BC31158C8CEFD2(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xA2BC31158C8CEFD2(iVar0, 6) && unk_0xA2BC31158C8CEFD2(iVar0, 7)) && unk_0xA2BC31158C8CEFD2(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xA2BC31158C8CEFD2(iVar0, 9) && unk_0xA2BC31158C8CEFD2(iVar0, 10)) && unk_0xA2BC31158C8CEFD2(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_265()
{
	return Global_262145.f_10935;
}

int func_266()
{
	return Global_262145.f_10933;
}

int func_267(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_268(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_268(int iParam0, int iParam1, int iParam2)
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

float func_269()
{
	return Global_262145.f_10938;
}

float func_270()
{
	return Global_262145.f_10937;
}

float func_271()
{
	return Global_262145.f_10936;
}

int func_272()
{
	return Global_262145.f_10934;
}

int func_273()
{
	return Global_262145.f_10932;
}

int func_274()
{
	return Global_262145.f_11340;
}

int func_275()
{
	return Global_262145.f_11339;
}

var func_276()
{
	if (func_20(0))
	{
		return Global_262145.f_10959;
	}
	if (func_20(1))
	{
		return Global_262145.f_10960;
	}
	if (func_20(2))
	{
		return Global_262145.f_10961;
	}
	return Global_262145.f_10962;
}

int func_277()
{
	return Global_262145.f_10931;
}

int func_278()
{
	return Global_262145.f_10930;
}

void func_279()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1, 1) && (func_291() || unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0)))
	{
		if (func_67(func_290()))
		{
			func_289();
		}
		if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
			{
				if (func_328(0))
				{
					iVar2 = Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4;
					func_285(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_283(64, func_284(Local_656.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_393(Local_656.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(69, func_284(Local_656.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_393(Local_656.f_3), 1, 2, 0);
						}
						else
						{
							func_283(64, func_284(Local_656.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_393(Local_656.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_283(67, func_284(Local_656.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_393(Local_656.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(75, func_284(Local_656.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_656.f_3), 1, 2, 0);
						}
						else
						{
							func_283(67, func_284(Local_656.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_656.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_283(67, func_284(Local_656.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_393(Local_656.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(75, func_284(Local_656.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_656.f_3), 1, 2, 0);
						}
						else
						{
							func_283(67, func_284(Local_656.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_656.f_3), 1, 2, 0);
						}
					}
					else
					{
						uVar3 = unk_0x9DBE48BD26DE1888(Local_656.f_4[0]);
						if (unk_0x2700CB8907086DF3(uVar3))
						{
							iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
							if (Local_2623[Local_656.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2623[Local_656.f_4[0] /*12*/].f_4;
							func_285(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_281(76, func_102(), func_284(Local_656.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_393(Local_656.f_3), -1, fVar1, 1, 2, unk_0xA09A99AC02B24954(iVar4));
							}
							else if (func_282())
							{
								func_281(77, func_102(), func_284(Local_656.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_393(Local_656.f_3), iVar0, -1082130432, 1, 2, unk_0xA09A99AC02B24954(iVar4));
							}
							else
							{
								func_281(76, func_102(), func_284(Local_656.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_393(Local_656.f_3), iVar0, -1082130432, 1, 2, unk_0xA09A99AC02B24954(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 1);
			func_280(133);
		}
	}
}

void func_280(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_281(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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
	func_105(iParam0, &Var0, iParam7, sParam3, sParam4);
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

int func_282()
{
	return 0;
}

int func_283(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_105(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_103(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xB28FEB6F176CE84A())
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
			if (unk_0xB28FEB6F176CE84A())
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

int func_285(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_286(Local_656.f_3, iParam2) / 10f);
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

float func_286(int iParam0, int iParam1)
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
			if (unk_0xB28FEB6F176CE84A())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_288(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xB28FEB6F176CE84A())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_287(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_287(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_288(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_290()
{
	return Global_2437549.f_2708[0 /*80*/].f_1;
}

bool func_291()
{
	return unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 25);
}

int func_292(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_302()) && !(func_112(unk_0x7C7787D2D7139A85(), 0) && (func_108(unk_0x7C7787D2D7139A85()) || func_301(unk_0x7C7787D2D7139A85())))) && !func_299(unk_0x7C7787D2D7139A85()))
	{
		func_298();
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
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 25);
				if (bParam1)
				{
					unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4588), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_297(uParam0, 1);
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
				func_294();
				func_297(uParam0, 2);
			}
			break;
		
		case 2:
			func_294();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_293("AMEV_LBD_HELP"))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
				func_297(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x3B76114EC84D5812(&(Global_2531497.f_4588), 1);
				func_297(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4588), 1);
			return 1;
	}
	return 0;
}

bool func_293(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_294()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 0))
	{
		if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_2531497.f_795, 2)) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_73784) && !Global_58652) && !unk_0x260395BA7F0C83CB())
		{
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4588), 1);
			func_296("AMEV_LBD_HELP", -1);
			func_295(1);
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_295(int iParam0)
{
	unk_0x998551D4E6A8C263(3, 21, 200, 0, 0);
	if (iParam0 && !func_302())
	{
		unk_0x9964F5BBD9415AB7(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_296(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam1);
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_298()
{
	Global_2460541 = 1;
}

int func_299(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_300(int iParam0)
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
		case 134:
		case 135:
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
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

bool func_301(int iParam0)
{
	return func_107(iParam0, 19);
}

bool func_302()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

void func_303()
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
		bVar21 = (func_325() && !func_100(unk_0x7C7787D2D7139A85()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_102();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_656.f_4[iVar16] > -1)
			{
				uVar30 = unk_0x9DBE48BD26DE1888(Local_656.f_4[iVar16]);
				if (unk_0x2700CB8907086DF3(uVar30))
				{
					iVar4 = unk_0xD7EB9DC48246DA95(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2623[Local_656.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_285(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2623[Local_656.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_261(1))
								{
									if (func_89(iVar4, 1))
									{
										uVar26[iVar16] = func_69(iVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x2E40EEA43EF34BD6();
		if (func_100(unk_0x7C7787D2D7139A85()))
		{
			uVar31 = func_323();
			iVar32 = unk_0x74D4E16E179B8F53(uVar31);
			if (unk_0xD56C8C2B75BF9665(iVar32))
			{
				iVar33 = unk_0x932F91FB8ED4D272(iVar32);
				if (unk_0x2700CB8907086DF3(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_285(&iVar13, &fVar18, iLocal_349, 1);
		func_285(&iVar14, &fVar19, Local_2623[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_537(&(Local_656.f_39), 0, 0);
		iVar15 = func_535(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_322(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xA2BC31158C8CEFD2(iLocal_347, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_325() || Local_656.f_3 == 6)
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
			func_318(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_284(Local_656.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_319(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_282())
		{
			func_317(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_319(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_308(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_284(Local_656.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_319(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_304();
	}
}

void func_304()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_307();
	if (fVar0 >= 0f)
	{
		if (Local_656.f_37 == 3)
		{
			if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
			{
				if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
				{
					iVar1 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
					if (unk_0xD960230552BC4165(iVar1, 0))
					{
						func_306(iVar1, &fLocal_353);
						fVar2 = (fVar0 + fLocal_353);
						unk_0xD488560A9EFC8231(fVar2, 1, 21);
						func_305(fVar0);
						return;
					}
				}
			}
		}
		if (func_293("AMCH_FLYLOW"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		if (unk_0xA2BC31158C8CEFD2(iLocal_347, 4))
		{
			unk_0xCFF6AB47B7B014FF(iLocal_355);
			unk_0x3B76114EC84D5812(&iLocal_347, 4);
		}
		unk_0xD488560A9EFC8231(0f, 0, 21);
	}
}

void func_305(float fParam0)
{
	float fVar0;
	
	if (unk_0xBF8C5F3C553FF575(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_538(6);
			if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 4))
			{
				unk_0x9964F5BBD9415AB7(iLocal_355, "Altitude_Warning", "EXILE_1", 1);
				unk_0xA1E7A40E1F56E511(&iLocal_347, 4);
			}
		}
		else
		{
			if (func_293("AMCH_FLYLOW"))
			{
				unk_0x0D23E3918F7AF11B(1);
			}
			if (unk_0xA2BC31158C8CEFD2(iLocal_347, 4))
			{
				unk_0xCFF6AB47B7B014FF(iLocal_355);
				unk_0x3B76114EC84D5812(&iLocal_347, 4);
			}
		}
	}
}

float func_306(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	unk_0xDF956C4106F1E9C5(Var1, uParam1, 1, 0);
	unk_0xDF956C4106F1E9C5(Var1, &uVar4, 0, 0);
	if (unk_0x39F26E3000BBB1F0())
	{
		func_538(3);
		unk_0xA1E7A40E1F56E511(&iLocal_347, 10);
		func_27(&uLocal_343, 0, 0);
	}
	else if (unk_0xA2BC31158C8CEFD2(iLocal_347, 10))
	{
		if (func_1(&uLocal_343, 2000, 0))
		{
			unk_0x3B76114EC84D5812(&iLocal_347, 10);
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

float func_307()
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

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_309(iParam3, &(Global_2460072[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_309(iParam4, &(Global_2460072[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_309(iParam5, &(Global_2460072[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_309(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x7C7787D2D7139A85() != func_102())
			{
				if (func_162(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_309(iParam7, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(unk_0x7C7787D2D7139A85()) == 0)
			{
				func_309(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_162(unk_0x7C7787D2D7139A85()) == 0)
			{
				func_309(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam14))
	{
		sVar2 = sParam14;
	}
	func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_142();
}

void func_309(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_145(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_144(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = fParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_311())
		{
			Global_1375006.f_1109 = 1;
		}
		if (unk_0xE434AB6E3DE89861())
		{
			iVar2 = 0;
			unk_0x419479F67BC2C70F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_310())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_310()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xE434AB6E3DE89861())
	{
		unk_0x419479F67BC2C70F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_311()
{
	if (((unk_0xB859EDA9E476E45A() == 8 || unk_0xB859EDA9E476E45A() == 9) || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_312(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_313()
{
	unk_0x0AF55029F939BA65(8);
	unk_0x0AF55029F939BA65(9);
	unk_0x0AF55029F939BA65(6);
	unk_0x0AF55029F939BA65(7);
	Global_2460544 = 1;
}

int func_314(bool bParam0)
{
	if (func_316())
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x7C7787D2D7139A85(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_315()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196 != 0;
}

bool func_316()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 12);
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_143(iParam3, &(Global_2460072[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2460066[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_143(iParam4, &(Global_2460072[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2460066[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_143(iParam5, &(Global_2460072[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_143(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x7C7787D2D7139A85() != func_102())
			{
				if (func_162(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_143(iParam7, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(unk_0x7C7787D2D7139A85()) == 0)
			{
				func_143(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_162(unk_0x7C7787D2D7139A85()) == 0)
			{
				func_143(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam13))
	{
		sVar2 = sParam13;
	}
	func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_142();
}

void func_318(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_309(-1, &(Global_2460072[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_309(-1, &(Global_2460072[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xA09A99AC02B24954(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_309(-1, &(Global_2460072[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_309(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x7C7787D2D7139A85() != func_102())
			{
				if (func_162(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_309(-1, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(unk_0x7C7787D2D7139A85()) == 0)
			{
				func_309(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_162(unk_0x7C7787D2D7139A85()) == 0)
			{
				func_309(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_142();
}

char* func_319()
{
	return "HUD_COUNTDOWN";
	switch (func_321(unk_0x7C7787D2D7139A85()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_320())
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

int func_320()
{
	if (func_321(unk_0x7C7787D2D7139A85()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

int func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

void func_322(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x9927BD5F023FA79D())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 0))
		{
			if (!unk_0x9591DE0F00127F2A(&(Global_2531497.f_4737)))
			{
				unk_0x530EC874503CCE08(&(Global_2531497.f_4737));
			}
			unk_0x597D844D285B9272(1);
			unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
			unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x70431C02FF392D24("DisableFlightMusic", 0);
			unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
			unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
			if (Global_2531497.f_4745 > -1)
			{
				unk_0x0972EA9E8102C153(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
			Global_2531497.f_4735 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 0))
		{
			if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 4))
			{
				if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 2))
				{
					if (unk_0xA033123384B9C948())
					{
						if ((!unk_0x2553916E420E8EF0(unk_0x3F8B5B092A20BEB5(unk_0x3C40E7561F9217C8()), "OFF") && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && !unk_0x9591DE0F00127F2A(&(Global_2531497.f_4737)))
						{
							StringCopy(&(Global_2531497.f_4737), "", 32);
							unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
							unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x70431C02FF392D24("DisableFlightMusic", 0);
							unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
							unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
							unk_0x597D844D285B9272(1);
							unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 2);
						}
					}
				}
				else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 5))
				{
					unk_0x530EC874503CCE08("OFF");
				}
			}
			else if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x81995F6F93D8C987("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x81995F6F93D8C987("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S");
				}
				unk_0x7D17F1A2E0EEDBB9("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 1);
			}
			else if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xF4A14417C01DEC46() != 0)
					{
						if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xC9AC836B1D10CB0F())
						{
							StringCopy(&(Global_2531497.f_4737), unk_0xF3539EA77B126430(), 32);
							unk_0x530EC874503CCE08("OFF");
						}
						unk_0x597D844D285B9272(1);
						unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 3))
				{
					Global_2531497.f_4745 = unk_0x04B8CCFB93858A27();
					unk_0x9964F5BBD9415AB7(Global_2531497.f_4745, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 0))
			{
				Global_2531497.f_4735 = 0;
				Global_2531497.f_4745 = -1;
				unk_0xF45B7CAEA9F06737("FM_COUNTDOWN_30S_KILL");
				unk_0x597D844D285B9272(0);
				unk_0x81995F6F93D8C987("FM_PRE_COUNTDOWN_30S");
				unk_0x70431C02FF392D24("DisableFlightMusic", 1);
				unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
				unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
				unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 0);
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 2))
				{
					unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 2);
					unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 5);
				}
				else
				{
					unk_0x3B76114EC84D5812(&(Global_2531497.f_4735), 5);
					unk_0x3B76114EC84D5812(&(Global_2531497.f_4735), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 0))
		{
			Global_2531497.f_4735 = 0;
			Global_2531497.f_4745 = -1;
			unk_0xF45B7CAEA9F06737("FM_COUNTDOWN_30S_KILL");
			unk_0x597D844D285B9272(0);
			unk_0x81995F6F93D8C987("FM_PRE_COUNTDOWN_30S");
			unk_0x70431C02FF392D24("DisableFlightMusic", 1);
			unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
			unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 0);
			if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 2);
				unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 5);
			}
			else
			{
				unk_0x3B76114EC84D5812(&(Global_2531497.f_4735), 2);
				unk_0x3B76114EC84D5812(&(Global_2531497.f_4735), 5);
			}
		}
	}
}

var func_323()
{
	if (unk_0xD4B321D9096B01FC(func_324()))
	{
		return func_324();
	}
	return func_97();
}

var func_324()
{
	return Global_2359302.f_3;
}

int func_325()
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

void func_326()
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
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		Local_744.f_534[iVar0 /*42*/] = { Var1 };
		Local_744.f_534[iVar0 /*42*/].f_1 = func_102();
		if (Local_656.f_4[iVar0] > -1)
		{
			uVar44 = unk_0x9DBE48BD26DE1888(Local_656.f_4[iVar0]);
			if (unk_0x2700CB8907086DF3(uVar44))
			{
				iVar43 = unk_0xD7EB9DC48246DA95(iVar44);
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

void func_327()
{
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_1734), 19);
}

int func_328(int iParam0)
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

void func_329()
{
}

void func_330()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_285(&iVar1, &fVar2, iLocal_349, 1);
	switch (Local_656.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_332(sVar0, fVar2 >= 70f);
			if (unk_0x6FE3A7E505FEC20C(sVar0))
			{
				fVar2 = func_331(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x3764734EE021E6E2(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xA549FF6E70CC4566();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_332(sVar0, bVar3);
			if (unk_0x6FE3A7E505FEC20C(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_331(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_331(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x3764734EE021E6E2(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_354 != iLocal_349)
			{
				if (iLocal_349 > 0)
				{
					unk_0x9964F5BBD9415AB7(iLocal_356, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0xEC93A4D791E42F8E(iLocal_356, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0x9964F5BBD9415AB7(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_354 = iLocal_349;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 3))
		{
			if (func_257(1))
			{
				unk_0x9964F5BBD9415AB7(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x9964F5BBD9415AB7(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xA1E7A40E1F56E511(&iLocal_347, 3);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(iLocal_347, 3))
	{
		if (func_257(1))
		{
			unk_0x9964F5BBD9415AB7(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x9964F5BBD9415AB7(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x3B76114EC84D5812(&iLocal_347, 3);
	}
}

float func_331(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_332(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x6FE3A7E505FEC20C(sParam0))
		{
			unk_0x7D17F1A2E0EEDBB9(sParam0);
		}
	}
	else if (unk_0x6FE3A7E505FEC20C(sParam0))
	{
		unk_0x8E3496DF5BF7F24D(sParam0);
	}
}

void func_333()
{
	int iVar0;
	
	if ((!func_162(unk_0x7C7787D2D7139A85()) && !func_14(unk_0x7C7787D2D7139A85(), 0)) && func_12(unk_0x7C7787D2D7139A85(), 1, 1))
	{
		iVar0 = func_358();
		if (iVar0 != Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_346) || func_357(iVar0, iLocal_346))
			{
				if (!func_356() || func_1(&uLocal_335, 1000, 0))
				{
					func_27(&uLocal_335, 0, 0);
					iLocal_346 = iVar0;
					Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4 = iVar0;
					func_336();
					if (iLocal_345 == 0)
					{
						iLocal_345 = unk_0x169A8AC9F93C2727();
					}
					if (Local_3008.f_11 == 0)
					{
						Local_3008.f_11 = unk_0x71EC776E812C6A0A();
					}
				}
			}
		}
		iLocal_349 = func_334();
	}
}

int func_334()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_656.f_3)
	{
		case 0:
			fVar1 = unk_0xCD3F041762952386();
			break;
		
		case 1:
			fVar1 = unk_0xB09A2F5F0867A581();
			break;
		
		case 2:
			fVar1 = unk_0xA549FF6E70CC4566();
			break;
		
		case 3:
			fVar1 = unk_0x5B2352CA5B7F1883();
			break;
		
		case 4:
			fVar1 = unk_0x2D8B985B4794287B();
			break;
		
		case 5:
			fVar1 = unk_0xC6E61C78F0B50CFA();
			break;
		
		case 8:
			iVar0 = unk_0x2C89EAB6B9AB9200();
			break;
		
		case 9:
			fVar1 = unk_0xBC0D3C5539BBB73D();
			break;
		
		case 11:
			fVar1 = unk_0x786522B2FC09095D();
			break;
		
		case 12:
			fVar1 = unk_0x786522B2FC09095D();
			break;
		
		case 13:
			fVar1 = unk_0xD9848100CA27474C();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x25A1A0BF87F74E56(iVar0);
	func_335(&iVar2);
	if (iVar2 == iLocal_348)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 1))
			{
				func_27(&uLocal_337, 0, 0);
				Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4.f_2 = func_537(&uLocal_337, 0, 0);
				unk_0xA1E7A40E1F56E511(&iLocal_347, 1);
			}
			else if ((func_537(&uLocal_337, 0, 0) % 1000) == 0)
			{
				Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4.f_2 = func_537(&uLocal_337, 0, 0);
			}
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&iLocal_347, 1);
	}
	if ((func_21(iLocal_348, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_339, 2000, 0))
	{
		iVar2 = iLocal_348;
		unk_0xA1E7A40E1F56E511(&iLocal_347, 2);
	}
	else
	{
		iLocal_348 = iVar2;
		func_46(&uLocal_339);
		unk_0x3B76114EC84D5812(&iLocal_347, 2);
	}
	return iVar2;
}

void func_335(int iParam0)
{
	switch (Local_656.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if ((((unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
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

void func_336()
{
	if (!unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1, 2))
	{
		unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 2);
		func_337(1);
	}
}

void func_337(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
		{
			if (((!func_106(unk_0x7C7787D2D7139A85()) && !func_7(unk_0x7C7787D2D7139A85())) && !func_162(unk_0x7C7787D2D7139A85())) && !func_355(unk_0x7C7787D2D7139A85()))
			{
				if (func_165())
				{
					func_348(2, 0, 1);
					func_347();
				}
				if (func_346(0))
				{
					uVar0 = func_208(2480, -1, 0);
					unk_0x3B76114EC84D5812(&uVar0, 0);
					func_347();
				}
				if (func_346(func_345(func_321(unk_0x7C7787D2D7139A85()))))
				{
					uVar0 = func_208(2480, -1, 0);
					unk_0x3B76114EC84D5812(&uVar0, func_345(func_321(unk_0x7C7787D2D7139A85())));
					func_347();
				}
				if (func_344())
				{
					func_347();
				}
				if (func_321(unk_0x7C7787D2D7139A85()) > -1)
				{
					unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 7);
					if (func_321(unk_0x7C7787D2D7139A85()) == 236)
					{
						func_343();
					}
					func_340(func_342(func_321(unk_0x7C7787D2D7139A85())));
				}
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 7);
		func_338();
	}
}

void func_338()
{
	if (func_339())
	{
		unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 17);
	}
}

bool func_339()
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 17);
}

void func_340(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_341() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_341()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_342(int iParam0)
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

void func_343()
{
	if (!func_339())
	{
		Global_2531497.f_6305 = unk_0x169A8AC9F93C2727();
		unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 17);
	}
}

int func_344()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
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
	return Global_262145.f_23622;
}

bool func_346(int iParam0)
{
	var uVar0;
	
	uVar0 = func_208(2480, -1, 0);
	return unk_0xA2BC31158C8CEFD2(uVar0, iParam0);
}

void func_347()
{
	if (func_344())
	{
		Global_2437549.f_1155.f_16 = 1;
	}
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	if (func_165())
	{
		if (iParam1 == 1)
		{
			if (Global_2531497.f_4395 == -1)
			{
				Global_2531497.f_4395 = Global_262145.f_26329;
			}
			func_27(&(Global_2531497.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2531497.f_4398 == -1)
				{
					Global_2531497.f_4398 = Global_262145.f_26330;
				}
				func_27(&(Global_2531497.f_4396), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_8 = 0;
				func_354(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_8 = 0;
			func_354(1);
		}
		if ((!unk_0xA51CBC95AC3A4B14() && !func_353()) && !func_349(unk_0x7C7787D2D7139A85()))
		{
			Global_968396 = 0;
		}
		unk_0xD1BC874F2613DFA7(0, -1, -1, iParam0);
	}
}

int func_349(int iParam0)
{
	if (func_350(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_351(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_351(int iParam0)
{
	return func_352(iParam0);
}

bool func_352(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_353()
{
	return Global_2448961.f_740;
}

void func_354(bool bParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		if (!func_165())
		{
			if (func_12(unk_0x7C7787D2D7139A85(), 1, 0))
			{
				unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 1);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, 0);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, 0);
			}
			unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 1f);
			unk_0x62644D7A979A06C2(0);
			unk_0x426221D97FBAC579(1);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					unk_0xD00A04276B590461(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
			{
				unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 0);
				unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), 1);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, 1);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, 1);
				unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					unk_0xD00A04276B590461(1, 0);
				}
			}
			unk_0x62644D7A979A06C2(1);
			unk_0x426221D97FBAC579(0);
		}
	}
}

int func_355(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x393E9918BC37548A())
	{
		return 0;
	}
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return Global_2508348;
	}
	else
	{
		uVar0 = unk_0x23625FE58BACEBFD(iParam0);
		if (unk_0xD4B321D9096B01FC(uVar0))
		{
			iVar1 = unk_0x7F375072508F738F(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_356()
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

int func_357(int iParam0, int iParam1)
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

int func_358()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_373())
	{
		if (Local_656.f_3 == 14)
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && func_372(unk_0x0FA8183DAD2B3203(), 0) == -1)
			{
				iVar2 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
				if ((!func_371(&iVar2, 0) || unk_0x7F375072508F738F(iVar2) != joaat("dodo")) && unk_0x916AF183F71F17C1(iVar2))
				{
					func_364(Local_656.f_3 != 14, 1, 0);
					if (func_363())
					{
						iVar3 = func_362();
						if (iVar3 >= 0)
						{
							if (!unk_0xA2BC31158C8CEFD2(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_8[func_361(iVar3)], func_360(iVar3)))
							{
								iLocal_350++;
								unk_0xA1E7A40E1F56E511(&(Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_8[func_361(iVar3)]), func_360(iVar3));
							}
						}
					}
					iVar0 = iLocal_350;
				}
			}
		}
		else
		{
			iVar0 = func_359();
		}
	}
	else
	{
		unk_0xAC2D5F3124769C68(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x25A1A0BF87F74E56(iVar0);
}

int func_359()
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

int func_360(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_361(iParam0) * 31);
}

int func_361(int iParam0)
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

int func_362()
{
	return iLocal_112;
}

int func_363()
{
	if (iLocal_119 == 1)
	{
		iLocal_119 = 0;
		return 1;
	}
	return 0;
}

void func_364(bool bParam0, bool bParam1, int iParam2)
{
	func_366(bParam0, iParam2);
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
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Local_123[iLocal_112 /*3*/]) < fLocal_319)
				{
					if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
					{
						if (unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
						{
							if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0))
							{
								bLocal_114 = true;
								iLocal_113 = 1;
							}
							if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
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
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (!unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) && !unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					func_365();
				}
				else if (!unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
				{
					func_365();
				}
				else if (!unk_0x916AF183F71F17C1(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)) && !bParam1)
				{
					func_365();
				}
				if (bLocal_114)
				{
					if (iLocal_118)
					{
						if (iLocal_117)
						{
							if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
							{
								func_365();
								iLocal_119 = 1;
							}
						}
						else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							iLocal_117 = 1;
						}
						else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							func_365();
						}
					}
					else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						iLocal_118 = 1;
					}
					else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						func_365();
					}
				}
				else if (bLocal_115)
				{
					if (iLocal_118)
					{
						if (iLocal_116)
						{
							if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
							{
								func_365();
								iLocal_119 = 1;
							}
						}
						else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							iLocal_116 = 1;
						}
						else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
						{
							func_365();
						}
					}
					else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						iLocal_118 = 1;
					}
					else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_320, Local_323, fLocal_332, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_326, Local_329, fLocal_332, 0, 1, 0))
					{
						func_365();
					}
				}
			}
			break;
	}
}

void func_365()
{
	bLocal_114 = false;
	bLocal_115 = false;
	iLocal_116 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
	iLocal_113 = 0;
}

void func_366(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_120 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_370(iVar0)) && (uParam1 || !func_369(iVar0)))
		{
			if (func_368(Local_120, Local_123[iVar0 /*3*/], 100f, 0))
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
	func_367(iLocal_112);
}

void func_367(int iParam0)
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

int func_368(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
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

int func_370(int iParam0)
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

int func_371(var uParam0, int iParam1)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0xF4B969E0807E76C7(*uParam0, 0) || iParam1)
		{
			if (unk_0xE294A1321110B3E9(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
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

int func_373()
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

int func_374(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_390() < 10)
	{
		iVar0 = func_389();
		func_375(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_375(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_376(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_376(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_385(unk_0x7C7787D2D7139A85()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_384(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_379(Var0))
		{
			Global_2405071.f_45.f_64 = func_378(unk_0x7C7787D2D7139A85());
			func_377(Var0, iParam8);
		}
	}
}

void func_377(struct<12> Param0, int iParam12)
{
	Global_2405071.f_363[iParam12 /*12*/] = { Param0 };
	Global_2405071.f_363[iParam12 /*12*/].f_9 = 1;
}

int func_378(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_379(struct<12> Param0)
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
			if (!func_380(Global_2405071.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_380(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_383(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_381(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_383(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_381(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_381(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_382(Param0, Param3, Var0, Var3);
}

int func_382(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_383(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0, var uParam1)
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

int func_385(int iParam0)
{
	if (((func_388(iParam0, 1) || func_387(iParam0)) || func_112(iParam0, 0)) || func_386(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

bool func_388(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_378(iParam0) != 0;
	}
	return func_350(iParam0, bParam1, 0);
}

int func_389()
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

int func_390()
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

bool func_391(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x1EF54B101C71E009(sParam0);
	unk_0x0AC9F8E1AFCEC860(sParam1);
	unk_0x0AC9F8E1AFCEC860(sParam2);
	return unk_0xFA637652FFB4E2E5(0);
}

char* func_392(int iParam0)
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

char* func_393(int iParam0)
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

char* func_394(int iParam0)
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

void func_395()
{
	if (!func_155())
	{
		return;
	}
	if (!unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == Global_1312585.f_9)
	{
		return;
	}
	func_151();
}

void func_396(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_370(iVar0) && !func_369(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_123[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_397()
{
	if (!func_373())
	{
		if (Local_656.f_3 == 14)
		{
			func_400();
		}
		Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4.f_1 = func_359();
	}
	else if ((!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 4) && !unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 5)) && !func_399(unk_0x7C7787D2D7139A85()))
	{
		func_398();
	}
}

void func_398()
{
	switch (Local_656.f_3)
	{
		case 0:
			unk_0x6BF8A729E3734BC2(8, 2);
			break;
		
		case 1:
			unk_0x6BF8A729E3734BC2(13, 2);
			break;
		
		case 2:
			unk_0x6BF8A729E3734BC2(4, 2);
			break;
		
		case 4:
			unk_0x6BF8A729E3734BC2(1, 2);
			break;
		
		case 3:
			unk_0x6BF8A729E3734BC2(2, 2);
			break;
		
		case 5:
			unk_0x6BF8A729E3734BC2(3, 2);
			break;
		
		case 6:
			unk_0x6BF8A729E3734BC2(11, 3);
			break;
		
		case 7:
			unk_0x6BF8A729E3734BC2(14, 1);
			break;
		
		case 8:
			unk_0x6BF8A729E3734BC2(29, 2);
			break;
		
		case 9:
			unk_0x6BF8A729E3734BC2(12, 2);
			break;
		
		case 10:
			unk_0x6BF8A729E3734BC2(10, 2);
			break;
		
		case 11:
			unk_0x6BF8A729E3734BC2(18, 2);
			break;
		
		case 12:
			unk_0x6BF8A729E3734BC2(20, 2);
			break;
		
		case 13:
			unk_0x6BF8A729E3734BC2(27, 2);
			break;
		
		case 15:
			unk_0x6BF8A729E3734BC2(26, 1);
			break;
		
		case 16:
			unk_0x6BF8A729E3734BC2(25, 1);
			break;
		
		case 17:
			unk_0x6BF8A729E3734BC2(22, 1);
			break;
		
		case 18:
			unk_0x6BF8A729E3734BC2(24, 1);
			break;
	}
	unk_0xA1E7A40E1F56E511(&iLocal_347, 8);
}

bool func_399(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_400()
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

void func_401(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_208, iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_208), iParam0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_208, iParam0))
	{
		unk_0x3B76114EC84D5812(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_208), iParam0);
	}
}

void func_402(var uParam0, int iParam1)
{
	if (func_321(unk_0x7C7787D2D7139A85()) == 133 && iParam1)
	{
		Global_2531497.f_4819 = uParam0;
	}
	else
	{
		Global_2531497.f_4819 = -1;
	}
}

void func_403(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x70431C02FF392D24("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
	}
	Global_2531497.f_4745 = -1;
	bVar0 = (func_112(unk_0x7C7787D2D7139A85(), 0) && func_108(unk_0x7C7787D2D7139A85()));
	if (bParam6)
	{
		func_401(func_421(iParam0), 1);
	}
	else
	{
		func_420(iParam0, -1);
		if (func_8(unk_0x7C7787D2D7139A85()))
		{
			Global_1574647.f_3 = iParam0;
		}
		else
		{
			func_419(iParam0);
		}
		Global_1574647.f_4 = -1;
		if (func_8(unk_0x7C7787D2D7139A85()))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 5);
		}
		if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 4);
		}
		unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 17);
		unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 20);
		if (func_418(iParam0))
		{
			func_417();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_413(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xB7F4DA52DE3AAF24(fParam2);
			if (iParam0 == 146)
			{
				unk_0x60F310C72311BCA8(0);
				unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
				unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
			}
		}
		if (func_411(iParam0))
		{
			unk_0x60F310C72311BCA8(0);
			unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
			unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_409(1);
				if (func_264(0))
				{
					unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_407(1);
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 12);
		}
		if (bParam5)
		{
			func_406();
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_404(iParam0))
			{
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 21);
			}
		}
	}
	Global_2507562 = 1;
}

int func_404(int iParam0)
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
	if (func_405())
	{
		return 1;
	}
	return 0;
}

int func_405()
{
	switch (func_320())
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

void func_406()
{
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4736), 0);
}

void func_407(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_408(iVar0);
		iVar0++;
	}
}

void func_408(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_409(int iParam0)
{
	if (func_410() && iParam0)
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

int func_410()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_412(unk_0x7C7787D2D7139A85()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

void func_413(float fParam0)
{
	float fVar0;
	
	if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_414())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (unk_0xAB2A82A2838B61B7(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == unk_0x429EE9FF15BB9033() && unk_0x01CBD71E072E9F33(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = unk_0x429EE9FF15BB9033();
}

int func_414()
{
	switch (func_416())
	{
		case 0:
			return func_415();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_415()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_416()
{
	return Global_30736;
}

void func_417()
{
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_200 = 0;
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4561), 1);
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_419(int iParam0)
{
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/] = iParam0;
}

void func_420(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_346(0) || func_346(func_345(iVar0)))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 2);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 2);
		}
	}
}

int func_421(int iParam0)
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

int func_422()
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

void func_423()
{
	Global_1672277 = 1;
	if (!unk_0xA2BC31158C8CEFD2(Global_2540191, 0))
	{
		unk_0xA1E7A40E1F56E511(&Global_2540191, 0);
		unk_0xA1E7A40E1F56E511(&Global_1672278, 0);
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_2540191, 1))
	{
		unk_0xA1E7A40E1F56E511(&Global_2540191, 1);
		unk_0xA1E7A40E1F56E511(&Global_1672278, 1);
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_2540191, 5))
	{
		unk_0xA1E7A40E1F56E511(&Global_2540191, 5);
		unk_0xA1E7A40E1F56E511(&Global_1672278, 5);
	}
	if (unk_0xF6C55F777DC175F4(-355737150))
	{
		unk_0xF58083E4652F7505(-355737150, 0, 0, 0);
	}
	if (unk_0xF6C55F777DC175F4(-580979506))
	{
		unk_0xF58083E4652F7505(-580979506, 0, 0, 0);
	}
	if (unk_0xF6C55F777DC175F4(-1426452475))
	{
		unk_0xF58083E4652F7505(-1426452475, 0, 0, 0);
	}
	if (unk_0xF6C55F777DC175F4(745417724))
	{
		unk_0xF58083E4652F7505(745417724, 0, 0, 0);
	}
	if (unk_0xF6C55F777DC175F4(-1305304906))
	{
		unk_0xF58083E4652F7505(-1305304906, 0, 0, 0);
	}
	if (unk_0xF6C55F777DC175F4(-1543175077))
	{
		unk_0xF58083E4652F7505(-1543175077, 0, 0, 0);
	}
	if (unk_0xF6C55F777DC175F4(-811770997))
	{
		unk_0xF58083E4652F7505(-811770997, 0, 0, 0);
	}
}

int func_424()
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

void func_425()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_656.f_3))
	{
		if (Local_656.f_3 == 1 || Local_656.f_3 == 6)
		{
			iVar0 = func_204(unk_0x7C7787D2D7139A85(), 1);
			iVar1 = func_200(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
				{
					unk_0xC167C31F20B1FD61(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute"), 1, 0, 0);
					func_426(1);
				}
			}
			else
			{
				unk_0x3BA09A2095A925C0(unk_0x7C7787D2D7139A85(), 1);
			}
		}
	}
}

void func_426(bool bParam0)
{
	int iVar0;
	
	if (unk_0xF7BAF104A598DD7E(unk_0x0FA8183DAD2B3203(), 5) != 0)
	{
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 177, 1);
		unk_0x32974B898A8F4659(unk_0x7C7787D2D7139A85(), func_208(585, -1, 0));
		if (func_446())
		{
			unk_0x245F2184A78C3C16(unk_0x7C7787D2D7139A85(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_445())
		{
			unk_0x245F2184A78C3C16(unk_0x7C7787D2D7139A85(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_442(3610, -1, -1))
		{
		}
		iVar0 = func_208(2040, -1, 0);
		unk_0x73EE75EBF6ACA42D(unk_0x7C7787D2D7139A85(), func_441(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85()), iVar0));
		if (func_261(0))
		{
			unk_0x32974B898A8F4659(unk_0x7C7787D2D7139A85(), func_208(585, -1, 0));
		}
		else
		{
			unk_0x32974B898A8F4659(unk_0x7C7787D2D7139A85(), func_440(Global_2540475));
		}
		func_439(unk_0x7C7787D2D7139A85(), iVar0);
		unk_0xDBD9ADBEEF25EDA7(unk_0x7C7787D2D7139A85(), 5, func_432(unk_0x0FA8183DAD2B3203(), iVar0), func_431(unk_0x0FA8183DAD2B3203(), iVar0), 0);
		func_430(func_208(2040, -1, 0), 1);
		Global_2531497.f_287 = 1;
		func_427(unk_0x7C7787D2D7139A85(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x393E9918BC37548A())
	{
		func_429();
		if (iParam2 == -1)
		{
			iParam2 = func_208(2040, -1, 0);
		}
		unk_0xDBD9ADBEEF25EDA7(iParam0, 5, func_432(unk_0x23625FE58BACEBFD(iParam0), iParam2), func_431(unk_0x23625FE58BACEBFD(iParam0), iParam2), 0);
		unk_0x73EE75EBF6ACA42D(iParam0, func_441(unk_0x23625FE58BACEBFD(iParam0), iParam2));
		unk_0x0453EBC0FB8D8A80(unk_0x23625FE58BACEBFD(iParam0), 5, func_432(unk_0x23625FE58BACEBFD(iParam0), iParam2), func_431(unk_0x23625FE58BACEBFD(iParam0), iParam2), func_441(unk_0x23625FE58BACEBFD(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_208(585, -1, 0);
		}
		if (func_261(1) && func_428(iParam0))
		{
			unk_0x32974B898A8F4659(iParam0, func_440(Global_2540475));
		}
		else
		{
			unk_0x32974B898A8F4659(iParam0, iParam1);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_28, 4))
		{
			unk_0x32974B898A8F4659(iParam0, Global_1574435);
			unk_0x245F2184A78C3C16(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_439(iParam0, iParam2);
		unk_0x70CBCB37A00F34A2(unk_0x23625FE58BACEBFD(iParam0), 177, 1);
	}
}

bool func_428(int iParam0)
{
	return func_107(iParam0, 10);
}

void func_429()
{
	Global_76550 = 0;
	Global_76551 = -1;
	Global_76552 = -1;
	Global_76553 = -1;
	Global_76554 = -1;
	Global_76555 = -1;
}

void func_430(int iParam0, int iParam1)
{
	if (unk_0x393E9918BC37548A())
	{
		func_429();
		func_198(2040, iParam0, -1, 1, 0);
		unk_0xDBD9ADBEEF25EDA7(unk_0x7C7787D2D7139A85(), 5, func_432(unk_0x0FA8183DAD2B3203(), iParam0), func_431(unk_0x0FA8183DAD2B3203(), iParam0), 0);
		func_439(unk_0x7C7787D2D7139A85(), iParam0);
		unk_0x73EE75EBF6ACA42D(unk_0x7C7787D2D7139A85(), func_441(unk_0x0FA8183DAD2B3203(), iParam0));
		if ((iParam1 && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203())) && unk_0xF7BAF104A598DD7E(unk_0x0FA8183DAD2B3203(), 5) != 0)
		{
			func_427(unk_0x7C7787D2D7139A85(), -1, -1);
		}
	}
}

int func_431(var uParam0, int iParam1)
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

var func_432(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0xF7BAF104A598DD7E(uParam0, 9) != false;
	iVar1 = unk_0x0247E28AC199A99A(iParam0, 8, unk_0xF7BAF104A598DD7E(iParam0, 8), unk_0xFFE2C28AD044C475(iParam0, 8));
	iVar2 = unk_0x0247E28AC199A99A(iParam0, 11, unk_0xF7BAF104A598DD7E(iParam0, 11), unk_0xFFE2C28AD044C475(iParam0, 11));
	iVar3 = unk_0x0247E28AC199A99A(iParam0, 4, unk_0xF7BAF104A598DD7E(iParam0, 4), unk_0xFFE2C28AD044C475(iParam0, 4));
	if ((((!bVar0 == Global_76550 || !iParam1 == Global_76551) || !iVar1 == Global_76552) || !iVar2 == Global_76553) || !iVar3 == Global_76554)
	{
		Global_76550 = bVar0;
		Global_76551 = iParam1;
		Global_76552 = iVar1;
		Global_76553 = iVar2;
		Global_76554 = iVar3;
		Global_76555 = func_433(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76555 == 61)
				{
					Global_76555 = 79;
				}
				else if (Global_76555 == 39)
				{
					Global_76555 = 79;
				}
				else if (Global_76555 == 76)
				{
					Global_76555 = 80;
				}
			}
			else if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76555 == 61)
				{
					Global_76555 = 78;
				}
				else if (Global_76555 == 39)
				{
					Global_76555 = 78;
				}
			}
		}
	}
	return Global_76555;
}

int func_433(int iParam0, int iParam1)
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
	
	iVar0 = unk_0xF7BAF104A598DD7E(uParam0, 11);
	if (unk_0xF7BAF104A598DD7E(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x7F375072508F738F(iParam0);
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
	uVar4 = unk_0x0247E28AC199A99A(iParam0, 8, unk_0xF7BAF104A598DD7E(iParam0, 8), unk_0xFFE2C28AD044C475(iParam0, 8));
	if (unk_0xC8A729A94EDD3FC9(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0xC8A729A94EDD3FC9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		return func_438(iParam0, iParam1);
	}
	if (func_437(iParam0))
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
		iVar5 = unk_0x0247E28AC199A99A(iParam0, 11, iVar0, unk_0xFFE2C28AD044C475(iParam0, 11));
		if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("DRESS"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("HOODED_JACKET"), 0))
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
			else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_438(iParam0, iParam1) + 15;
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE_COAT"), 0) && !unk_0xC8A729A94EDD3FC9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_436(iVar5, 0);
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
						iVar0 = func_435(iVar5);
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
						iVar0 = func_435(iVar5);
						break;
					}
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_434(iVar5, 0);
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
					iVar0 = func_435(iVar5);
					break;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0xC8A729A94EDD3FC9(iVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0xC8A729A94EDD3FC9(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_438(iParam0, iParam1) + 15;
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0xC8A729A94EDD3FC9(iVar5, -1086258388, 0) || unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_438(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, -872449705, 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, 144417099, 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, -102825006, 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_21"), 0))
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
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0xC8A729A94EDD3FC9(iVar5, joaat("AIR_DRAW_0"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, 970679185, 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, 83294665, 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, 382246252, 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_5"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("ASSAULT_DRAW_0"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE_DRAW_4"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_438(iParam0, iParam1) + 15;
				}
				else
				{
					return func_438(iParam0, iParam1) + 15;
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("ARENA_DRAW_12"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xC8A729A94EDD3FC9(iVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xC8A729A94EDD3FC9(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xC8A729A94EDD3FC9(iVar5, joaat("SILK_ROBE"), 0)) || unk_0xC8A729A94EDD3FC9(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_435(iVar5);
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

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_435(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xC8A729A94EDD3FC9(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xC8A729A94EDD3FC9(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_437(int iParam0)
{
	if (unk_0xC8A729A94EDD3FC9(unk_0x0247E28AC199A99A(uParam0, 4, unk_0xF7BAF104A598DD7E(uParam0, 4), unk_0xFFE2C28AD044C475(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_438(var uParam0, int iParam1)
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

void func_439(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x0C9406A686228FD1(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x0C9406A686228FD1(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x0C9406A686228FD1(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x0C9406A686228FD1(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x0C9406A686228FD1(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x90D72BF2438A9631(iParam0);
	}
}

int func_440(var uParam0)
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

int func_441(var uParam0, int iParam1)
{
	return 0;
}

int func_442(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_444(iParam0, iParam1);
	uVar2 = func_443(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_444(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

bool func_445()
{
	return unk_0x9742C47C6EA02281(joaat("mppilot"));
}

bool func_446()
{
	return unk_0x9742C47C6EA02281(joaat("mplts"));
}

void func_447()
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
	
	if ((((!func_7(unk_0x7C7787D2D7139A85()) && !func_162(unk_0x7C7787D2D7139A85())) && !func_315()) && !func_458(unk_0x7C7787D2D7139A85(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_457(unk_0x7C7787D2D7139A85()))
	{
		if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			bVar11 = func_5(Local_656.f_3);
			bVar12 = unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0);
			bVar13 = func_455();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_656.f_67[iVar4 /*2*/].f_1;
				if (unk_0x8A7BBB98FFB32893(uVar14) && unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0) == unk_0x40237B62400B4BCC(uVar14))
						{
							func_337(1);
						}
					}
					unk_0xA1E7A40E1F56E511(&uVar5, iVar4);
					if (bVar11 && func_40(Local_656.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(uVar14), 1) };
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
				unk_0xA1E7A40E1F56E511(&uVar5, 31);
			}
			Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_7 = uVar5;
			if (func_5(Local_656.f_3))
			{
				if ((unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()) || (unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203()) && !unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_40(Local_656.f_3, iVar7, &Var0, &uVar3))
						{
							func_454(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_453(Var0, 1, 0);
							func_449(10, 0, 0, 0, 0);
							unk_0xA1E7A40E1F56E511(&iLocal_347, 5);
						}
					}
				}
				else
				{
					func_448();
				}
			}
		}
	}
	else
	{
		func_448();
	}
}

void func_448()
{
	if (unk_0xA2BC31158C8CEFD2(iLocal_347, 5))
	{
		func_170();
		func_168();
		unk_0x3B76114EC84D5812(&iLocal_347, 5);
		func_167();
	}
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_102())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_450())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = unk_0x429EE9FF15BB9033();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_450()
{
	if (((((func_220(unk_0x7C7787D2D7139A85()) == 229 || func_220(unk_0x7C7787D2D7139A85()) == 191) || func_452()) || func_451()) || func_355(unk_0x7C7787D2D7139A85())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_451()
{
	return Global_1574402;
}

int func_452()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_453(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405071.f_45.f_49 = { Param0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

void func_454(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0xAB2A82A2838B61B7(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == unk_0x429EE9FF15BB9033())
		{
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return;
	}
	if (!unk_0xAB2A82A2838B61B7(Global_2413894.f_6))
	{
		Global_2413894.f_6 = unk_0x429EE9FF15BB9033();
	}
	Var0.f_6 = Global_2413894.f_6;
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
	if (func_385(unk_0x7C7787D2D7139A85()))
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
	Global_2413894 = { Var0 };
}

int func_455()
{
	if ((((((func_456(unk_0x7C7787D2D7139A85()) || func_165()) || func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25)) || func_8(unk_0x7C7787D2D7139A85())) || func_7(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

int func_456(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_457(int iParam0)
{
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

int func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
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
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_299(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_471(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_470(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_468(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_467(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_466(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_465(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_464(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_461(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_464(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0x7F375072508F738F(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_102())
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_102())
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_470(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_473(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_531())
	{
		if (bParam1)
		{
			iVar0 = unk_0x2E40EEA43EF34BD6();
			if (func_100(unk_0x7C7787D2D7139A85()))
			{
				uVar1 = func_323();
				iVar2 = unk_0x74D4E16E179B8F53(uVar1);
				if (unk_0xD56C8C2B75BF9665(iVar2))
				{
					iVar3 = unk_0x932F91FB8ED4D272(iVar2);
					if (unk_0x2700CB8907086DF3(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_530())
				{
					switch (Local_656.f_3)
					{
						case 14:
							if (!func_370(iVar4) && !func_369(iVar4))
							{
								func_478("AMCH_BRIDGE", bParam0, iVar0, iVar4);
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
			if (((!bParam0 && unk_0x8A7BBB98FFB32893(Local_656.f_67[iVar5 /*2*/].f_1)) && unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(Local_656.f_67[iVar5 /*2*/].f_1), 0)) && unk_0xBAA38708D7439CA7(unk_0x40237B62400B4BCC(Local_656.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_629[iVar5]))
				{
					uLocal_629[iVar5] = unk_0xADA89D4F1A58FCBA(unk_0xAEA6D4EC961DFA03(Local_656.f_67[iVar5 /*2*/].f_1));
					unk_0xD1773DD05FE2AB54(uLocal_629[iVar5], func_477(iVar5));
					unk_0x6089156CDC87FE4B(uLocal_629[iVar5], 9);
					unk_0x058B6969CEED705F(uLocal_629[iVar5], func_476(iVar5));
					func_474(&(uLocal_629[iVar5]), 9);
				}
				else if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
				{
					Var6 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_656.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x73DF1B751952DA65(uLocal_629[iVar5], 1);
					}
					else
					{
						unk_0x73DF1B751952DA65(uLocal_629[iVar5], 0);
					}
				}
			}
			else if (unk_0x39A01A052D9B5FF0(uLocal_629[iVar5]))
			{
				unk_0xAA2276003B2ADF1B(&(uLocal_629[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_474(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		uVar0 = func_475(iParam1);
		unk_0x088577CF98F96D05(*uParam0, uVar0);
	}
}

int func_475(int iParam0)
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
	unk_0xE0A2E1F5E75D9DF8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_476(int iParam0)
{
	if (unk_0xDC118E11A4081E9A(Local_656.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x31337ABC07783F10(Local_656.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xF39FF829579D1A21(Local_656.f_67[iParam0 /*2*/]) && !unk_0x79676C1B659A9398(Local_656.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_477(int iParam0)
{
	if (unk_0xDC118E11A4081E9A(Local_656.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x31337ABC07783F10(Local_656.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0xF39FF829579D1A21(Local_656.f_67[iParam0 /*2*/]) && !unk_0x79676C1B659A9398(Local_656.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_478(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xA2BC31158C8CEFD2(Local_2623[iParam2 /*12*/].f_8[func_361(iParam3)], func_360(iParam3)) && !bParam1)
	{
		Var0 = { func_529(iParam3) };
		if (!unk_0x39A01A052D9B5FF0(uLocal_563[iParam3]))
		{
			if (!func_528(Var0, 0f, 0f, 0f, 0) && !func_528(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_563[iParam3] = unk_0xACAD99314B51277E(Var0);
				unk_0x6089156CDC87FE4B(uLocal_563[iParam3], 9);
				unk_0x058B6969CEED705F(uLocal_563[iParam3], sParam0);
				func_479(uLocal_563[iParam3], 25, 1152319488, 1137180672);
				func_474(&(uLocal_563[iParam3]), 12);
				unk_0x73DF1B751952DA65(uLocal_563[iParam3], 1);
			}
		}
		else if (unk_0xCD97B9861557C025())
		{
			unk_0x9C47809EE2CC69F5(uLocal_563[iParam3], 255);
		}
		else
		{
			func_479(uLocal_563[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0x39A01A052D9B5FF0(uLocal_563[iParam3]))
	{
		unk_0xAA2276003B2ADF1B(&(uLocal_563[iParam3]));
		if (!bParam1)
		{
			unk_0x9964F5BBD9415AB7(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_479(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0x9C47809EE2CC69F5(uParam0, func_480(uParam0, iParam1, fParam2, fParam3));
}

int func_480(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_527(Global_2437549) && !func_81())
	{
		fVar0 = func_482(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_481();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_481()
{
	if (func_388(Global_2437549, 1))
	{
		return 50;
	}
	return 0;
}

float func_482(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2437549;
	Var2 = { func_526(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1319107 || func_522())
	{
		if (func_521(iVar0))
		{
			Var5 = { func_485(iVar0) };
		}
		else if (func_484(iVar0))
		{
			Var5 = { func_483(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iVar0), 0) };
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

Vector3 func_483(int iParam0)
{
	var uVar0;
	
	if (func_484(iParam0))
	{
		uVar0 = unk_0x23625FE58BACEBFD(iParam0);
		if (unk_0xD4B321D9096B01FC(uVar0))
		{
			return unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_484(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x23625FE58BACEBFD(iParam0);
			if (unk_0xD4B321D9096B01FC(uVar0))
			{
				if (unk_0xC49563EAE7AACA6C(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_485(int iParam0)
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
	
	if (iParam0 == func_102())
	{
	}
	if (func_520(iParam0))
	{
		iVar0 = func_519(iParam0);
		if (iVar0 != func_102())
		{
			if (!func_518(iVar0))
			{
				if (unk_0xD4B321D9096B01FC(Global_2437549.f_660[iVar0 /*3*/][1]))
				{
					return unk_0xACE5E491FC1B0D37(Global_2437549.f_660[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2424073[func_519(iParam0) /*421*/].f_309.f_9;
				}
			}
			else
			{
				iVar1 = func_514(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676879.f_457[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_513(iParam0))
	{
		if (unk_0xD4B321D9096B01FC(Global_2531497.f_305))
		{
			return unk_0xACE5E491FC1B0D37(Global_2531497.f_305, 0);
		}
	}
	else if (func_470(iParam0) && !func_512(iParam0))
	{
		iVar2 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar2 != func_102())
		{
			iVar3 = func_514(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676879.f_457[iVar3 /*3*/];
			}
		}
	}
	else if (func_468(iParam0) && !func_511(iParam0))
	{
		if (func_521(iParam0) && func_510())
		{
			return Global_1676879.f_457[Global_2424073[iParam0 /*421*/].f_309.f_5 /*3*/];
		}
		iVar4 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar4 != func_102())
		{
			if (func_509(iVar4))
			{
				iVar5 = func_505(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676879.f_457[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_467(iParam0))
	{
		iVar6 = func_504(iParam0);
		if (iVar6 != func_102())
		{
			if (!func_503(iVar6))
			{
				if (unk_0xD4B321D9096B01FC(Global_2437549.f_757[iVar6]))
				{
					return unk_0xACE5E491FC1B0D37(Global_2437549.f_757[iVar6], 0);
				}
				else
				{
					return Global_2424073[func_504(iParam0) /*421*/].f_309.f_16;
				}
			}
			else
			{
				iVar7 = func_505(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676879.f_457[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_502(iParam0))
	{
		if (unk_0xD4B321D9096B01FC(Global_2531497.f_307))
		{
			return unk_0xACE5E491FC1B0D37(Global_2531497.f_307, 0);
		}
	}
	else if (func_466(iParam0) && !func_501(iParam0))
	{
		iVar8 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar8 != func_102())
		{
			if (func_500(iVar8))
			{
				iVar9 = func_496(iVar8);
				if (iVar9 != -1)
				{
					return func_495(iVar9);
				}
			}
		}
	}
	else if (func_465(iParam0) && !func_494(iParam0))
	{
		iVar10 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar10 != func_102())
		{
			if (func_493(iVar10))
			{
				iVar11 = func_489(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676879.f_457[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_464(iParam0, 0))
	{
		iVar12 = func_488(iParam0);
		if (iVar12 != func_102())
		{
			if (!func_487(iVar12))
			{
				if (unk_0xD4B321D9096B01FC(Global_2437549.f_790[iVar12]))
				{
					return unk_0xACE5E491FC1B0D37(Global_2437549.f_790[iVar12], 0);
				}
				else
				{
					return Global_1628955[func_488(iParam0) /*614*/].f_599;
				}
			}
			else
			{
				iVar13 = func_489(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676879.f_457[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_463(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_466(iParam0))
	{
		return func_495(Global_2424073[iParam0 /*421*/].f_309.f_5);
	}
	if (func_486(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676879.f_457[Global_2424073[iParam0 /*421*/].f_309.f_5 /*3*/];
}

int func_486(int iParam0)
{
	if ((func_462(iParam0) || func_460(iParam0)) || func_461(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_488(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_489(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_492(iParam0);
		if (iVar0 != 0)
		{
			return func_490(iVar0);
		}
	}
	return -1;
}

int func_490(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_300(iVar0) == 11)
		{
			if (func_491(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_491(int iParam0)
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

int func_492(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_277;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_277 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_465(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_495(int iParam0)
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
	return Global_1676879.f_457[iParam0 /*3*/];
}

int func_496(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_499(iParam0);
		if (iVar0 != 0)
		{
			return func_497(iVar0);
		}
	}
	return -1;
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_300(iVar0) == 11)
		{
			if (func_498(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_498(int iParam0)
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

int func_499(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318;
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_466(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_502(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_503(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_504(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_505(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return -1;
	}
	iVar0 = func_508(iParam0);
	if (!iVar0 == 0)
	{
		return func_506(iVar0);
	}
	return -1;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_300(iVar0) == 9)
		{
			if (func_507(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_507(int iParam0)
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

int func_508(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_267;
}

int func_509(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

int func_510()
{
	if (unk_0xA2BC31158C8CEFD2(Global_1676879.f_2, 13) || Global_1676879.f_2814)
	{
		return 1;
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_468(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_512(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_470(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_514(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return -1;
	}
	iVar0 = func_517(iParam0);
	if (!iVar0 == 0)
	{
		return func_515(iVar0);
	}
	return -1;
}

int func_515(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_516(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_516(int iParam0)
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

int func_517(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

int func_518(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

int func_519(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_520(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_102())
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_521(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == unk_0x7C7787D2D7139A85()) && func_12(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_522()
{
	if ((func_525() || func_524()) || func_523(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

bool func_523(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1627738[iParam0 /*38*/].f_29, 20);
}

bool func_524()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687879, 1);
}

bool func_525()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

Vector3 func_526(var uParam0)
{
	var uVar0;
	
	switch (unk_0x76E52B9D61EA86DC(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0x38FCF58E261BE1CC(uParam0);
			if (unk_0xD4B321D9096B01FC(uVar0))
			{
				return unk_0xACE5E491FC1B0D37(iVar0, 0);
			}
			break;
	}
	return unk_0xE3063EF8E0D6C8AD(uParam0);
}

int func_527(int iParam0)
{
	if ((unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_68.f_2, 9) && !(unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_68.f_2, 6) && unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_68.f_2, 7))) || ((unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_68.f_2, 6) && !unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_68.f_2, 7)) && !unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_528(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_529(int iParam0)
{
	switch (Local_656.f_3)
	{
		case 14:
			return Local_367[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_530()
{
	switch (Local_656.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_531()
{
	switch (Local_656.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_532()
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

void func_533(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_314(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_217(sParam1))
	{
		sVar0 = sParam1;
	}
	func_143(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_534(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x0037AFCBDC61F351();
	return "HUD_STARTING";
	if (unk_0x2553916E420E8EF0(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "am_challenges"))
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
	else if (unk_0x2553916E420E8EF0(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_535(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_536(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x9927BD5F023FA79D())
	{
		Global_2531497.f_4735 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 1))
		{
			unk_0x9964F5BBD9415AB7(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2531497.f_4735 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4735), 1);
		}
	}
}

int func_537(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0);
		}
		else
		{
			return unk_0x675EE3FED67AA436(unk_0x50D85685589EFCBD(), *uParam0);
		}
	}
	return unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0);
}

void func_538(int iParam0)
{
	if (!unk_0xBCFD7D14E63DFD63() && !unk_0x260395BA7F0C83CB())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if (!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025())
					{
						if (func_5(Local_656.f_3))
						{
							if (Local_656.f_3 == 12)
							{
								func_296("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_296("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_656.f_3))
						{
							func_296("AMCH_BIKEAV", 30000);
						}
						func_295(1);
						unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if (!unk_0xCD97B9861557C025())
					{
						func_296("AMCH_BLOW", 30000);
						func_295(1);
						unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if (!unk_0xCD97B9861557C025() && !func_543(63))
					{
						switch (Local_656.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
									{
										func_296("AMCH_ALTI", 30000);
										func_295(1);
										unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_NMIS", 30000);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_FRFALL", -1);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_PVPO1", -1);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_PVPO2", -1);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_WHEELIE", 30000);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_STOPPIE", 30000);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_LFALL", 30000);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_LPARA", 30000);
									func_295(1);
									unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
					{
						switch (Local_656.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
									{
										if (func_1(&uLocal_341, 1000, 0))
										{
											func_296("AMCH_OCEAN", 30000);
											func_295(1);
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
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if (!unk_0xCD97B9861557C025() && !func_543(63))
					{
						switch (Local_656.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
									{
										if (func_527(unk_0x7C7787D2D7139A85()) && !func_540(unk_0x7C7787D2D7139A85()))
										{
											func_296("AMCH_ALTIEXP", 30000);
											func_295(1);
											unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
					{
						if (func_1(&uLocal_341, 1000, 0))
						{
							func_296("AMCH_FLYLOW", 30000);
							func_295(1);
							func_46(&uLocal_341);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if (Local_656.f_3 == 7)
					{
						if (iLocal_641 == 0)
						{
							if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
							{
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_MVS1", 30000);
									func_295(1);
									iLocal_641 = 1;
								}
							}
						}
						else if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
						{
							if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
							{
								func_296("AMCH_MVS2", 30000);
								func_295(1);
								unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
							}
						}
					}
					if (Local_656.f_3 == 14)
					{
						if (iLocal_641 == 0)
						{
							if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
							{
								if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
								{
									func_296("AMCH_BRBL", 30000);
									func_295(1);
									iLocal_641 = 1;
								}
							}
						}
						else if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
						{
							if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
							{
								func_296("AMCH_BRBL2", 30000);
								func_295(1);
								unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xA2BC31158C8CEFD2(iLocal_640, iParam0))
				{
					if (!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025())
					{
						func_539("AMCH_WARN", func_393(Local_656.f_3), func_392(Local_656.f_3), 30000);
						func_295(0);
						Local_3008.f_8 = unk_0x71EC776E812C6A0A();
						unk_0x9964F5BBD9415AB7(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xA1E7A40E1F56E511(&iLocal_640, iParam0);
					}
				}
				break;
			}
	}
}

void func_539(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x0AC9F8E1AFCEC860(sParam1);
	unk_0x0AC9F8E1AFCEC860(sParam2);
	unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam3);
}

bool func_540(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_241.f_136[func_542(9) /*33*/][iParam0], func_541(9));
}

int func_541(int iParam0)
{
	return (iParam0 % 32);
}

int func_542(int iParam0)
{
	return (iParam0 / 32);
}

bool func_543(int iParam0)
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

void func_544(int iParam0)
{
	Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 = iParam0;
}

void func_545(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 4);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 4);
	}
}

int func_546(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_569(unk_0x7C7787D2D7139A85(), 29))
	{
		return 0;
	}
	if (func_163(unk_0x7C7787D2D7139A85(), 21))
	{
		return 0;
	}
	if (func_163(unk_0x7C7787D2D7139A85(), 25))
	{
		return 0;
	}
	if (unk_0xEDC68E498B715C56())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xED4D72D338501085())
		{
			return 0;
		}
	}
	if (func_349(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_568())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_567(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (func_566())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_106(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	else if (func_559(unk_0x7C7787D2D7139A85()) == 3)
	{
		return 0;
	}
	if (func_558(unk_0x7C7787D2D7139A85()) != func_102() && func_558(unk_0x7C7787D2D7139A85()) == func_88(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_557(func_290()) && func_321(unk_0x7C7787D2D7139A85()) != 236)
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	if (func_351(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!func_554())
	{
		return 0;
	}
	if (func_163(unk_0x7C7787D2D7139A85(), 0) || func_163(unk_0x7C7787D2D7139A85(), 3))
	{
		return 0;
	}
	if ((func_163(unk_0x7C7787D2D7139A85(), 12) || func_163(unk_0x7C7787D2D7139A85(), 14)) || func_163(unk_0x7C7787D2D7139A85(), 13))
	{
		return 0;
	}
	if (func_553(unk_0x7C7787D2D7139A85(), 1, 1))
	{
		if (!func_525() && !Global_2507941)
		{
			return 0;
		}
	}
	if (func_552(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_386(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_550())
	{
		return 0;
	}
	if (func_548(unk_0x7C7787D2D7139A85()) && Global_1590095.f_171)
	{
		return 0;
	}
	if (func_547())
	{
		return 0;
	}
	if (func_355(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (Global_2530556)
	{
		return 0;
	}
	if (Global_1694287)
	{
		return 0;
	}
	return 1;
}

bool func_547()
{
	return Global_1676879.f_443;
}

int func_548(int iParam0)
{
	if (func_549(Global_1590446[iParam0 /*871*/].f_273.f_26))
	{
		return 1;
	}
	return 0;
}

int func_549(int iParam0)
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

int func_550()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_551()
{
	return Global_98721.f_346 > 0;
}

bool func_552(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 11);
}

int func_553(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_554()
{
	if (func_555() == 0)
	{
		return 1;
	}
	return 0;
}

int func_555()
{
	return Global_1312467.f_18;
}

bool func_556()
{
	return Global_1312873;
}

int func_557(int iParam0)
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
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_558(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_559(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_387(iParam0) && !func_8(iParam0)) && !unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_106(iParam0);
	uVar3 = func_165();
	uVar4 = func_560();
	if ((bVar1 && (func_456(iParam0) || func_412(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_108(iParam0)) && !func_301(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

int func_560()
{
	if ((func_107(unk_0x7C7787D2D7139A85(), 21) || func_107(unk_0x7C7787D2D7139A85(), 22)) || func_564())
	{
		return 1;
	}
	if (func_562())
	{
		func_561(22);
		return 1;
	}
	return 0;
}

void func_561(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_4), iParam0);
}

int func_562()
{
	if (func_112(unk_0x7C7787D2D7139A85(), 0))
	{
		if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
		{
			return 1;
		}
		else
		{
			func_563(27);
		}
	}
	return 0;
}

void func_563(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_4), iParam0);
}

int func_564()
{
	return func_565(356, -1);
}

int func_565(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_203(iParam1)];
	if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_566()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 5;
}

int func_567(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_568()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 0);
}

bool func_569(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

void func_570()
{
	func_571(&(Local_744.f_534), &Local_744, 26, &(Local_744.f_1), &(Local_744.f_117), Local_656.f_3, 0, 0);
}

void func_571(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_681(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_679() || iParam2 == 27)
	{
		if (func_634(uParam1, iParam2, uParam3, Global_1574182, 0, func_682(), iParam7))
		{
			func_633(1);
			if ((!func_632() && !func_631()) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1))
			{
				if (func_630())
				{
					func_629();
				}
				else
				{
					unk_0xE0EE6551C6D522E7(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_628(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_627(uParam1, 0, 0);
							if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
							{
								unk_0x3B76114EC84D5812(&(uParam3->f_33), 7);
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
								if (func_12(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_626(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_625(iVar35))
										{
											iVar44 = iVar35;
											if (func_90(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_622(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_109(unk_0x7C7787D2D7139A85(), 0) && func_220(unk_0x7C7787D2D7139A85()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_621())
							{
								if (func_12(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
								}
								else
								{
									iVar35 = func_102();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_620(iVar35) && func_617(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_612(iVar35) };
								if (iVar35 == unk_0x7C7787D2D7139A85())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xA09A99AC02B24954(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_137(iVar35) };
								iVar37 = func_606(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x5C3CC258CDC18660(iVar37);
								}
								Global_1574182++;
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
									if (!func_621())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_604(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_284(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_603(iVar35, 0);
								if (bVar34)
								{
									if (func_89(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_602(iParam5))
								{
									func_601(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_601(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xA1E7A40E1F56E511(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xA2BC31158C8CEFD2(iVar49, iVar35))
							{
								iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
							}
							else
							{
								iVar35 = func_102();
							}
							if (func_620(iVar35))
							{
								if (func_12(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_612(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_137(iVar35) };
									iVar37 = func_606(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x5C3CC258CDC18660(iVar37);
									}
									Global_1574182++;
									iVar51 = func_603(iVar35, 1);
									if (bVar34)
									{
										if (func_89(iVar35, 1))
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
									func_584(iVar35, unk_0xA09A99AC02B24954(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 11))
						{
							func_581(uParam3, uParam1);
						}
						func_46(&(uParam3->f_21));
						func_580();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
						{
							func_579(uParam3, uParam1);
							func_578(uParam1, 0, 1);
							unk_0xA1E7A40E1F56E511(&(uParam3->f_33), 7);
						}
						func_579(uParam3, uParam1);
						if (!unk_0xA2BC31158C8CEFD2(uParam3->f_33, 11))
						{
							unk_0xA1E7A40E1F56E511(&(uParam3->f_33), 11);
						}
						if (func_574(uParam3))
						{
							Global_1574403 = 1;
						}
						func_572(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x08EA887200715AD9(*uParam1))
					{
						unk_0xF314976CA3E17AC7(7);
						unk_0x1C65AC18AFC2CA39(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xF314976CA3E17AC7(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_580();
			func_628(0);
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
			{
				unk_0x3B76114EC84D5812(&(uParam3->f_33), 7);
			}
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 10))
			{
				unk_0x3B76114EC84D5812(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x01C11ACADC5D0A74();
}

void func_572(var uParam0)
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_573(0);
	}
}

void func_573(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_574(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0C98179F08C6DA4F(uParam0->f_37);
	if (iVar15 != func_102() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_137(iVar15) };
		iVar1 = func_577(uParam0, uParam0->f_37);
		if (func_576(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (unk_0x4E0A7769ED6F98FD(&Var2))
						{
							iVar16 = 1;
							func_575(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE08CBA13236EC65(&Var2))
					{
						iVar16 = 1;
						func_575(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (!unk_0x4E0A7769ED6F98FD(&Var2))
						{
							iVar16 = 1;
							func_575(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_575(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (!unk_0xCE08CBA13236EC65(&Var2))
						{
							iVar16 = 1;
							func_575(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE08CBA13236EC65(&Var2))
					{
						iVar16 = 1;
						func_575(uParam0, iVar0, 0);
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

void func_575(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_576(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5D17AB84230A234B(&uParam0, 13);
}

var func_577(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_578(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xF1BC72CEC2746995(*uParam0, "COLLAPSE"))
	{
		unk_0x282C78036676E0C2(iParam1);
		unk_0xAC7C2DE2DDC7AF03();
	}
	if (iParam2 == 1)
	{
		if (unk_0xF1BC72CEC2746995(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

void func_579(var uParam0, var uParam1)
{
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_33, 10))
	{
		unk_0xF1BC72CEC2746995(*uParam1, "SET_HIGHLIGHT");
		unk_0xD02F24F3E2DB263A(uParam0->f_35);
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xA1E7A40E1F56E511(&(uParam0->f_33), 10);
	}
}

void func_580()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_581(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
		if (iVar2 != func_102())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_583(uParam0->f_38[iVar0 /*2*/], 0);
					func_582(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_582(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		if (unk_0xF1BC72CEC2746995(*uParam0, "SET_ICON"))
		{
			unk_0xD02F24F3E2DB263A(iParam1);
			unk_0xD02F24F3E2DB263A(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD02F24F3E2DB263A(iParam3);
			}
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

int func_583(int iParam0, bool bParam1)
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

void func_584(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_600() && iParam4 < func_599())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF1BC72CEC2746995(*uParam2, sVar1))
		{
			unk_0xD02F24F3E2DB263A(iParam4);
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_598("");
			}
			else
			{
				unk_0xD02F24F3E2DB263A(iParam10);
			}
			func_598(sParam1);
			unk_0xD02F24F3E2DB263A(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_598("");
			}
			else
			{
				unk_0xD02F24F3E2DB263A(65);
			}
			unk_0xD02F24F3E2DB263A(-1);
			func_598("");
			if (uParam3->f_108 == 6)
			{
				func_598("");
			}
			else
			{
				func_598(&sParam5);
			}
			func_589(uParam3, iParam0);
			unk_0xE2603C088682FC07(sParam9);
			unk_0xE2603C088682FC07(sParam9);
			if (func_588(uParam3))
			{
				func_587("DPAD_FRIEND");
			}
			else if (func_586(uParam3))
			{
				func_587("DPAD_FRIEND");
			}
			else if (func_585(uParam3))
			{
				func_587("DPAD_CREW");
			}
			else
			{
				func_587("");
			}
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

bool func_585(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(uParam0->f_33, 6);
}

bool func_586(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(uParam0->f_33, 5);
}

void func_587(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

int func_588(var uParam0)
{
	if (func_586(uParam0) && func_585(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_589(var uParam0, int iParam1)
{
	if (func_597(iParam1))
	{
		unk_0xD02F24F3E2DB263A(121);
	}
	else if (func_593(iParam1))
	{
		unk_0xD02F24F3E2DB263A(122);
	}
	else if (((unk_0xA2BC31158C8CEFD2(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xA2BC31158C8CEFD2(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		unk_0xD02F24F3E2DB263A(123);
	}
	else
	{
		if (func_590())
		{
			uParam0->f_36 = 0;
		}
		unk_0x282C78036676E0C2(uParam0->f_36);
	}
}

int func_590()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		if (func_591() || func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_591()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_94();
	}
	return func_592(Global_4456448.f_154360);
}

int func_592(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_593(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_594()) && func_258(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_594()
{
	if (func_387(unk_0x7C7787D2D7139A85()) || func_596())
	{
		if (!func_595(unk_0x7C7787D2D7139A85(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_595(int iParam0, int iParam1)
{
	if (func_321(iParam0) == iParam1)
	{
		return func_456(iParam0);
	}
	return 0;
}

int func_596()
{
	switch (func_220(unk_0x7C7787D2D7139A85()))
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

int func_597(int iParam0)
{
	if (func_590())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_90(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_594()) && func_260(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_598(char* sParam0)
{
	unk_0x7151302E2AA285DC(sParam0);
}

int func_599()
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_600()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_601(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_600() && iParam3 < func_599())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
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
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x08EA887200715AD9(*uParam1))
		{
			if (unk_0xF1BC72CEC2746995(*uParam1, sVar1))
			{
				unk_0xD02F24F3E2DB263A(iParam3);
				if (unk_0xA2BC31158C8CEFD2(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_598("");
				}
				else
				{
					unk_0xD02F24F3E2DB263A(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					func_587(sParam16);
				}
				else
				{
					func_598(&(uParam2->f_1));
				}
				unk_0xD02F24F3E2DB263A(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_598("");
				}
				else
				{
					unk_0xD02F24F3E2DB263A(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD02F24F3E2DB263A(iVar0);
				}
				else
				{
					unk_0xD02F24F3E2DB263A(-1);
				}
				if (func_621())
				{
					func_598("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 5 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 7 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_TWO_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 8 && !unk_0x9591DE0F00127F2A(&(uParam2->f_104)))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x10D1E89D0C3D279B(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6A8B3CC08A759F44(iParam10);
					}
					unk_0x0AC9F8E1AFCEC860(&(uParam2->f_104));
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
					unk_0x4BDF2F68AA4EAA77(iParam10, 1);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
						unk_0x4BDF2F68AA4EAA77(iParam10, 1);
						unk_0x81019766FF500CCA();
					}
					else
					{
						unk_0x759AC38FBC6CCA9E("FM_NG_CASH");
						unk_0x4BDF2F68AA4EAA77(iParam10, 1);
						unk_0x81019766FF500CCA();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x9591DE0F00127F2A(&(uParam2->f_104)))
					{
						func_587(&(uParam2->f_104));
					}
					else
					{
						func_598("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x759AC38FBC6CCA9E("STRING");
					unk_0xC5B1209EEC9E6603(iParam14, 6);
					unk_0x81019766FF500CCA();
				}
				else if (fParam13 != -1f)
				{
					unk_0x759AC38FBC6CCA9E("NUMBER");
					unk_0x10D1E89D0C3D279B(fParam13, 1);
					unk_0x81019766FF500CCA();
				}
				else if (iParam10 != -1)
				{
					unk_0xD02F24F3E2DB263A(iParam10);
				}
				else
				{
					func_598("");
				}
				if (uParam2->f_108 == 6)
				{
					func_598("");
				}
				else
				{
					func_598(&sParam4);
				}
				func_589(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x9591DE0F00127F2A(sParam8))
				{
					func_598("");
					func_598("");
				}
				else
				{
					unk_0xE2603C088682FC07(sParam8);
					unk_0xE2603C088682FC07(sParam8);
				}
				if (func_588(uParam2))
				{
					func_587("DPAD_FRIEND");
				}
				else if (func_586(uParam2))
				{
					func_587("DPAD_FRIEND");
				}
				else if (func_585(uParam2))
				{
					func_587("DPAD_CREW");
				}
				else
				{
					func_587("");
				}
				unk_0xAC7C2DE2DDC7AF03();
			}
		}
	}
}

int func_602(int iParam0)
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

int func_603(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_387(iParam0)) && !func_106(iParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(iParam0);
	if (!iVar1 == -1)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_604(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_605(iParam3))
	{
		*fParam1 = (func_286(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_602(iParam3))
	{
		*fParam1 = (func_286(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_605(int iParam0)
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

int func_606(int iParam0)
{
	int iVar0;
	
	iVar0 = func_609(iParam0);
	if (iVar0 == -1)
	{
		func_607(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_607(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_609(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_608(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_608(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iVar0 /*5*/].f_2) && unk_0x7E9D01EC258BE530(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_610(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_610(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5C3CC258CDC18660(Global_1385294[iParam0 /*5*/].f_2), 64);
			unk_0x41E6991C564E55CD(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xF0502EB385D5B3C4(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1385455)
	{
		Global_1385294[iVar32 /*5*/] = { Global_1385294[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_611(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_611(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_102();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x393E9918BC37548A())
	{
		uParam0->f_3 = unk_0x169A8AC9F93C2727();
	}
}

struct<4> func_612(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2507671 = { func_137(iParam0) };
		if (unk_0x77BA37DB22C66465())
		{
			if (func_576(Global_2507671))
			{
				if (!unk_0xCA3736B46FE270BB(&Global_2507671))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x7B3E18C7DAC336C3(0))
		{
			return Var0;
		}
		if (func_616(&Global_2507671))
		{
			Global_2507601 = { func_614(iParam0) };
			func_613(&Global_2507601, &Var0);
		}
	}
	return Var0;
}

void func_613(var uParam0, var uParam1)
{
	unk_0x1E527CF40C25B139(uParam0, 35, uParam1);
}

struct<35> func_614(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_615(iParam0))
	{
		return Global_1312905[unk_0x7C7787D2D7139A85() /*35*/];
	}
	Var0 = { func_137(iParam0) };
	unk_0x4065D3D900AB253F(&Var13, 35, &Var0);
	return Var13;
}

int func_615(int iParam0)
{
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return 1;
	}
	return 0;
}

int func_616(var uParam0)
{
	if (unk_0xE7017554E7BCFB0E())
	{
		if (unk_0xFF6895C150414C31() && unk_0xF10E9BDC0C546560(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_617(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_619(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_618(iParam0))
	{
		return 0;
	}
	if ((!func_626(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_625(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_618(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_142, 22);
}

int func_619(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 10) || unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_620(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
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
		if (unk_0xA2BC31158C8CEFD2(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_621()
{
	switch (func_220(unk_0x7C7787D2D7139A85()))
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
	switch (func_321(unk_0x7C7787D2D7139A85()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_106(unk_0x7C7787D2D7139A85()))
	{
		switch (func_220(unk_0x7C7787D2D7139A85()))
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
	if (func_595(unk_0x7C7787D2D7139A85(), 236))
	{
		return 1;
	}
	return 0;
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x0C98179F08C6DA4F(iVar0), 0, 1))
		{
			iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_626(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_625(iVar1))
				{
					if (func_623(iVar1, iParam1, 0))
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

int func_623(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_102())
	{
		if (!bParam2)
		{
			if (func_624(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	if (iParam1 != func_102())
	{
		if (iParam0 != func_102())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_625(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_626(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x7C7787D2D7139A85(), 0, 1))
		{
			if (unk_0x645A04F62406C561(iParam0, unk_0x7C7787D2D7139A85()) || func_220(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_627(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD02F24F3E2DB263A(iParam1);
		unk_0xD02F24F3E2DB263A(iParam2);
		unk_0xAC7C2DE2DDC7AF03();
	}
}

void func_628(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_629()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1))
	{
		if (func_302())
		{
			func_289();
		}
	}
}

int func_630()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 0) && func_302())
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1) && func_302())
	{
		return 1;
	}
	return 0;
}

int func_631()
{
	if (func_302())
	{
		if (func_54(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_632()
{
	if (func_302())
	{
		if (func_67(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_633(int iParam0)
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_634(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_678(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_677();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_676())
		{
			if (func_675() > 0 && Global_1574184)
			{
				unk_0x1C0FEAA5C83F343B();
				unk_0xF3F61F23853206CB(fVar7);
				unk_0x0AF55029F939BA65(18);
				if (unk_0x0945988C02AF3025())
				{
					unk_0x3D0BC3CE4D5E1DD0();
				}
				unk_0x0AF55029F939BA65(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_664())
		{
			func_663(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
	{
		func_663(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_675() == 1)
		{
			func_662(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_663(uParam0, uParam2, 0);
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x0945988C02AF3025())
		{
			unk_0x3D0BC3CE4D5E1DD0();
		}
		unk_0x0AF55029F939BA65(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_675() == 0 && !bParam5))
		{
			func_663(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_661();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x1C0FEAA5C83F343B();
				}
				unk_0x0AF55029F939BA65(18);
			}
			if (!unk_0xA2BC31158C8CEFD2(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_661();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x1C0FEAA5C83F343B();
					}
					unk_0x0AF55029F939BA65(18);
				}
				unk_0xF3F61F23853206CB(fVar7);
				if (func_662(bVar6, uParam0, 0))
				{
					func_627(uParam0, 0, 0);
					uVar4 = func_659(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_657(iParam1) };
					if (bParam4)
					{
						func_654(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_648(uParam0, func_651(uParam2), func_649(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_642(uParam2);
						if (!unk_0x9591DE0F00127F2A(uParam6))
						{
							sVar9 = sParam6;
						}
						func_640(uParam0, sVar9, func_641(), -1);
					}
					else if (func_590())
					{
						uParam2->f_34 = Global_1574183;
						func_654(uParam0, uVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_635(iParam1);
						uParam2->f_34 = Global_1574183;
						func_654(uParam0, uVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_635(iParam1);
						func_654(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xA1E7A40E1F56E511(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xA2BC31158C8CEFD2(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				unk_0xF3F61F23853206CB(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						unk_0x3B76114EC84D5812(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_635(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_639())
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
			if (func_638(unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 20;
			}
			if (func_637(unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_636(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = 2;
	}
	if (func_221())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_636(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_637(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_638(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_639()
{
	return Global_4456448.f_1 == 0;
}

void func_640(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (unk_0x9591DE0F00127F2A(sParam2))
		{
			func_587(sParam1);
		}
		else
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
			unk_0x0AC9F8E1AFCEC860(sParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		func_587("");
		if (iParam3 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam3);
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

char* func_641()
{
	switch (func_220(unk_0x7C7787D2D7139A85()))
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

char* func_642(var uParam0)
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
	switch (func_220(unk_0x7C7787D2D7139A85()))
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
			if (func_644())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_257(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_257(1))
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
			if (func_643(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_643(int iParam0)
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

bool func_644()
{
	return (func_647() && func_645(func_646()));
}

int func_645(int iParam0)
{
	return func_260(iParam0, 1);
}

int func_646()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_35;
}

bool func_647()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148;
}

void func_648(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (unk_0x9591DE0F00127F2A(uParam2))
		{
			func_587(uParam1);
		}
		else if (func_321(unk_0x7C7787D2D7139A85()) == 133)
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT_C");
			unk_0x0AC9F8E1AFCEC860(uParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		else
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
			unk_0x0AC9F8E1AFCEC860(sParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		func_587("");
		if (iParam3 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam3);
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

char* func_649(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(unk_0x7C7787D2D7139A85());
	if (func_650())
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
			switch (func_320())
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

bool func_650()
{
	return Global_1590319;
}

char* func_651(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(unk_0x7C7787D2D7139A85());
	if (func_650())
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
			if (func_653() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_653() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_320())
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
			if (func_652() == 1)
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

int func_652()
{
	return Global_2531497.f_4822;
}

int func_653()
{
	if (func_321(unk_0x7C7787D2D7139A85()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_654(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_598(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x759AC38FBC6CCA9E(uParam1);
			unk_0x6A8B3CC08A759F44(iParam5);
			unk_0x81019766FF500CCA();
		}
		else
		{
			func_587(sParam1);
		}
		if (func_676() && iParam6)
		{
			if (func_656())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x759AC38FBC6CCA9E("LBD_DPD_CNT");
			unk_0x6A8B3CC08A759F44(iVar0);
			unk_0x6A8B3CC08A759F44(iVar1);
			unk_0x81019766FF500CCA();
		}
		else
		{
			func_587(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam4);
			if (func_655(unk_0x7C7787D2D7139A85()))
			{
				unk_0xD02F24F3E2DB263A(166);
			}
			else if (func_64())
			{
				unk_0xD02F24F3E2DB263A(220);
			}
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

int func_655(int iParam0)
{
	if (func_638(iParam0) || func_637(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_656()
{
	return Global_1574184;
}

struct<4> func_657(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_658(unk_0x7C7787D2D7139A85()) || func_636(unk_0x7C7787D2D7139A85()))
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
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_590() && unk_0xA51CBC95AC3A4B14())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_658(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_659(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_590() || unk_0x9591DE0F00127F2A(uParam1)))
	{
		uVar0 = func_660();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x9591DE0F00127F2A(sParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
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

char* func_660()
{
	if (unk_0xB60C981253946EC0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x28B56AB7204D753B())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x2D635A9E46DA733C())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xF74FDCB441C8F4C2())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_661()
{
	Global_42316 = 1;
}

bool func_662(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("mp_matchmaking_card");
	}
	return unk_0x08EA887200715AD9(*uParam1);
}

void func_663(var uParam0, var uParam1, bool bParam2)
{
	unk_0x3B76114EC84D5812(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_580();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4592), 5);
		}
	}
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0x749CA887CB0AFEC9(uParam0);
	}
	if (unk_0xA2BC31158C8CEFD2(uParam1->f_33, 0))
	{
		unk_0x3B76114EC84D5812(&(uParam1->f_33), 0);
	}
	unk_0xF3F61F23853206CB(0f);
}

int func_664()
{
	if (func_674())
	{
		return 0;
	}
	if (func_566())
	{
		return 0;
	}
	if (!func_672())
	{
		return 0;
	}
	if (!func_554())
	{
		return 0;
	}
	if (func_671(8, -1))
	{
		return 0;
	}
	if (func_675() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	else if (!func_350(unk_0x7C7787D2D7139A85(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_670(1) || func_668(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if (func_667() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_100(unk_0x7C7787D2D7139A85()) && !func_667())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_666(0))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_665(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_665(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_666(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_43, iParam0);
}

bool func_667()
{
	return (unk_0xA2BC31158C8CEFD2(Global_4456448.f_30, 12) && unk_0xA2BC31158C8CEFD2(Global_1695602, 0));
}

int func_668(bool bParam0)
{
	if (unk_0x8F0856319BE615A3())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (func_669(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x3772881BFFE6C3F8(0, 25) || unk_0x3772881BFFE6C3F8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (unk_0x3772881BFFE6C3F8(0, 19) || (!bParam0 && unk_0x0B6782DED1C4B3B1(0, 19)))
	{
		return 1;
	}
	if (unk_0xE434AB6E3DE89861())
	{
		if (((unk_0x3772881BFFE6C3F8(0, 166) || unk_0x3772881BFFE6C3F8(0, 167)) || unk_0x3772881BFFE6C3F8(0, 168)) || unk_0x3772881BFFE6C3F8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0B6782DED1C4B3B1(0, 166) || unk_0x0B6782DED1C4B3B1(0, 167)) || unk_0x0B6782DED1C4B3B1(0, 168)) || unk_0x0B6782DED1C4B3B1(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_669(int iParam0)
{
	int iVar0;
	
	if (unk_0xC6649C48084573DA())
	{
		if (!unk_0x2BF5E63466422C38(uParam0))
		{
			unk_0x63EA4FAF7CDEFEC7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_670(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_671(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

int func_672()
{
	if (func_673())
	{
		return 1;
	}
	if (unk_0x260395BA7F0C83CB())
	{
		return 0;
	}
	if (unk_0xA710300CD13D2877() || unk_0xC862E94A8ABC89B8())
	{
		return 0;
	}
	if (unk_0x75EBF5007DD359C9())
	{
		return 0;
	}
	return 1;
}

bool func_673()
{
	return Global_1312439;
}

bool func_674()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

int func_675()
{
	return Global_1373500.f_68;
}

int func_676()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_677()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x7BC897FD6110BBB4()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_678(int iParam0)
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

int func_679()
{
	if (func_682())
	{
		return 1;
	}
	if (func_7(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_650())
	{
		return 1;
	}
	if (func_387(unk_0x7C7787D2D7139A85()))
	{
		switch (func_321(unk_0x7C7787D2D7139A85()))
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
				if (!func_680(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_680(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_680(unk_0x7C7787D2D7139A85()))
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

bool func_680(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_681(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_387(unk_0x7C7787D2D7139A85()) && !func_106(unk_0x7C7787D2D7139A85())) && !func_595(unk_0x7C7787D2D7139A85(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_112(unk_0x7C7787D2D7139A85(), 0) && func_106(unk_0x7C7787D2D7139A85()))
		{
			return 1;
		}
		if (func_559(unk_0x7C7787D2D7139A85()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_682()
{
	if (func_683(unk_0x7C7787D2D7139A85()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_683(int iParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xC0E0C265EFDEC931(iParam0);
		}
	}
	return 0;
}

void func_684()
{
	if (Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 == 3)
	{
		if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 8))
		{
			if ((!func_7(unk_0x7C7787D2D7139A85()) && !func_162(unk_0x7C7787D2D7139A85())) && !func_399(unk_0x7C7787D2D7139A85()))
			{
				func_398();
			}
		}
		else if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 9))
		{
			if ((func_7(unk_0x7C7787D2D7139A85()) || func_162(unk_0x7C7787D2D7139A85())) || func_399(unk_0x7C7787D2D7139A85()))
			{
				unk_0x76C7A02129221DEC();
				Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4 = 0;
				unk_0xA1E7A40E1F56E511(&iLocal_347, 9);
			}
		}
	}
}

void func_685()
{
	int iVar0;
	
	if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iLocal_351)))
	{
		iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iLocal_351));
		if (unk_0xD56C8C2B75BF9665(iVar0))
		{
			func_686(iVar0, 2);
		}
	}
	iLocal_351++;
	if (iLocal_351 >= unk_0xACF7D965CEBE5714())
	{
		iLocal_351 = 0;
	}
}

void func_686(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1574647.f_18)))
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_2, iParam0))
	{
		if (Global_1574647 < iParam1 && unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 1))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 0);
			return;
		}
		if (Global_1574647 != 0)
		{
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 1);
		}
		Global_1574647 = 0;
		Global_1574647.f_2 = 0;
	}
	unk_0xA1E7A40E1F56E511(&(Global_1574647.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_687(iParam0))
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
		Global_1574647++;
	}
}

bool func_687(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 10);
}

void func_688(int iParam0, int iParam1)
{
	Local_2623[iParam0 /*12*/] = iParam1;
}

int func_689()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_744.f_534[iVar0 /*42*/].f_1 = func_102();
		iVar0++;
	}
	return 1;
}

int func_690()
{
	return Local_656.f_0;
}

int func_691(int iParam0)
{
	return Local_2623[iParam0 /*12*/];
}

void func_692()
{
	if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 6))
	{
		func_715();
		unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 6);
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 7))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 4) || unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 16))
		{
			if (((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_302()) && func_12(unk_0x7C7787D2D7139A85(), 1, 1))
			{
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 7);
				func_296("FME_PASINT", 30000);
				func_295(1);
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 17))
		{
			if (func_165() && !func_164())
			{
				unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 17);
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 16);
			}
		}
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 23))
	{
		if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_2531497.f_795, 2)) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_73784) && !Global_58652) && !unk_0x0945988C02AF3025())
		{
			if (func_713())
			{
				func_296("AMEV_GA_RP", -1);
				if (func_220(unk_0x7C7787D2D7139A85()) != 200)
				{
					func_295(1);
				}
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 23);
			}
		}
	}
	if (unk_0xCD97B9861557C025() && unk_0x097FC2B62E383500() == 15)
	{
		if (func_412(unk_0x7C7787D2D7139A85()))
		{
			if (!unk_0xCE5F730CE5D2B3B2(1344549371))
			{
				unk_0x339AECE514362B5F(1344549371);
			}
		}
		else if (unk_0xCE5F730CE5D2B3B2(1344549371))
		{
			unk_0x545AD6392BF558B6(1344549371);
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 9))
	{
		if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_302()) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && !func_163(unk_0x7C7787D2D7139A85(), 21)) && !func_163(unk_0x7C7787D2D7139A85(), 25))
		{
			unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 9);
			func_712(0);
			func_296("FME_TBL00", -1);
			func_295(1);
		}
	}
	if (func_387(unk_0x7C7787D2D7139A85()))
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 18))
		{
			if ((func_163(unk_0x7C7787D2D7139A85(), 21) && unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 20)) && !unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 19))
			{
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 18);
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 18))
		{
			if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_302()) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && unk_0xBF28CCACDDFF5346()) && !Global_2531497.f_4831)
			{
				unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 18);
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 19);
				func_296("AMTT_RPAS", -1);
				func_295(1);
			}
		}
	}
	if (((((func_387(unk_0x7C7787D2D7139A85()) && !func_8(unk_0x7C7787D2D7139A85())) && func_321(unk_0x7C7787D2D7139A85()) != 146) && !func_7(unk_0x7C7787D2D7139A85())) && !func_162(unk_0x7C7787D2D7139A85())) && !func_702())
	{
		if (func_411(func_321(unk_0x7C7787D2D7139A85())))
		{
			unk_0xDA1C9614D8C6EE61(unk_0x7C7787D2D7139A85());
		}
		if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 22))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 22);
		}
		if (func_456(unk_0x7C7787D2D7139A85()) || func_405())
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 10))
			{
				if (func_701(func_321(unk_0x7C7787D2D7139A85())))
				{
					if (func_264(0) && !Global_2391045)
					{
						unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_409(1);
						unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 14);
					}
				}
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 10);
			}
		}
		if (func_412(unk_0x7C7787D2D7139A85()))
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 11))
			{
				if (!Global_98721.f_8)
				{
					unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 12);
					func_407(1);
				}
				if (!func_700())
				{
					unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 13);
					func_406();
				}
				if (!Global_2391045)
				{
					unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 14);
					if (func_264(0) && !Global_2391045)
					{
						unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 9);
					}
					func_409(1);
				}
				unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 11);
			}
		}
		else
		{
			func_698(0);
		}
	}
	else
	{
		func_698(1);
	}
	func_693();
	if (func_404(func_321(unk_0x7C7787D2D7139A85())) && !unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 21))
	{
		unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 21);
	}
	if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 10))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 10);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 10))
	{
		unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 10);
	}
}

void func_693()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_302())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_543(iVar2))
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
				if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 26))
				{
					unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 26);
				}
				func_694(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 26))
	{
		func_46(&(Global_1574647.f_22));
		unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 26);
	}
}

void func_694(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1574647.f_22)))
	{
		func_2(&(Global_1574647.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574647.f_22), iParam1, 0))
	{
		if (func_675() > 0)
		{
			func_697(iParam0);
			if (func_293("AMEV_LBD_HELP"))
			{
				unk_0x0D23E3918F7AF11B(1);
			}
			func_46(&(Global_1574647.f_22));
		}
	}
	else
	{
		func_696(0);
		func_695();
	}
}

void func_695()
{
	Global_2531497.f_4532 = 0;
}

void func_696(int iParam0)
{
	Global_1373500.f_68 = iParam0;
}

void func_697(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_698(int iParam0)
{
	if ((unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 11) || (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 10) && iParam0)) || (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 22) && iParam0))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 12))
		{
			unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 12);
			func_407(0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 13))
		{
			unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 13);
			func_699();
		}
		if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 14) && !func_112(unk_0x7C7787D2D7139A85(), 0))
		{
			unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 14);
			func_409(0);
		}
		unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 11);
		unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 10);
		unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 22);
	}
}

void func_699()
{
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4736), 0);
}

bool func_700()
{
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4736, 0);
}

int func_701(int iParam0)
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
			return func_412(unk_0x7C7787D2D7139A85());
		
		case 133:
			return (func_405() || func_5(func_320()));
		
		default:
	}
	return 0;
}

int func_702()
{
	if (((((((((func_711() || func_710()) || func_709()) || func_315()) || (func_708() && !unk_0xA51CBC95AC3A4B14())) || (func_705() && !func_704())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_703() == 2 && !unk_0xA51CBC95AC3A4B14()))
	{
		return 1;
	}
	return 0;
}

int func_703()
{
	return Global_968397;
}

bool func_704()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 27);
}

int func_705()
{
	if (func_707() || func_706())
	{
		return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_98 == 8;
	}
	return 0;
}

var func_706()
{
	return Global_2448961.f_635;
}

bool func_707()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 11);
}

bool func_708()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 5);
}

bool func_709()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 2);
}

bool func_710()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 20);
}

bool func_711()
{
	return Global_2448961.f_598;
}

void func_712(int iParam0)
{
	int iVar0;
	
	iVar0 = func_208(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xA2BC31158C8CEFD2(iVar0, 0))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 0);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 1))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 1);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 2))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xA2BC31158C8CEFD2(iVar0, 3))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 3);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 4))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 4);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 5))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xA2BC31158C8CEFD2(iVar0, 6))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 6);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 7))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 7);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 8))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xA2BC31158C8CEFD2(iVar0, 9))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 9);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 10))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 10);
		}
		else if (!unk_0xA2BC31158C8CEFD2(iVar0, 11))
		{
			unk_0xA1E7A40E1F56E511(&iVar0, 11);
		}
	}
	func_198(2534, iVar0, -1, 1, 0);
}

int func_713()
{
	int iVar0;
	
	if (!func_47(&(Global_1574647.f_15)))
	{
		func_2(&(Global_1574647.f_15), 0, 0);
		Global_1574647.f_17 = 0;
	}
	else if (func_1(&(Global_1574647.f_15), 1000, 0))
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(Global_1574647.f_17)))
		{
			iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Global_1574647.f_17));
			if (unk_0xD56C8C2B75BF9665(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_714(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_38(unk_0x7C7787D2D7139A85()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574647.f_17++;
		if (Global_1574647.f_17 >= 32)
		{
			Global_1574647.f_17 = 0;
			func_46(&(Global_1574647.f_15));
		}
	}
	return 0;
}

int func_714(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_202(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590446[iVar0 /*871*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_715()
{
	unk_0x60F310C72311BCA8(5);
	func_717();
	unk_0xB7F4DA52DE3AAF24(1f);
	unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 8);
	func_716();
}

void func_716()
{
	if (Global_1672277)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1672278, 0))
		{
			unk_0x3B76114EC84D5812(&Global_2540191, 0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_1672278, 1))
		{
			unk_0x3B76114EC84D5812(&Global_2540191, 1);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_1672278, 5))
		{
			unk_0x3B76114EC84D5812(&Global_2540191, 5);
		}
		if (unk_0xF6C55F777DC175F4(-355737150))
		{
			unk_0xF58083E4652F7505(-355737150, 1, 0, 0);
		}
		if (unk_0xF6C55F777DC175F4(-580979506))
		{
			unk_0xF58083E4652F7505(-580979506, 1, 0, 0);
		}
		if (unk_0xF6C55F777DC175F4(-1426452475))
		{
			unk_0xF58083E4652F7505(-1426452475, 1, 0, 0);
		}
		if (unk_0xF6C55F777DC175F4(745417724))
		{
			unk_0xF58083E4652F7505(745417724, 1, 0, 0);
		}
		if (unk_0xF6C55F777DC175F4(-1305304906))
		{
			unk_0xF58083E4652F7505(-1305304906, 1, 0, 0);
		}
		if (unk_0xF6C55F777DC175F4(-1543175077))
		{
			unk_0xF58083E4652F7505(-1543175077, 1, 0, 0);
		}
		if (unk_0xF6C55F777DC175F4(-811770997))
		{
			unk_0xF58083E4652F7505(-811770997, 1, 0, 0);
		}
		Global_1672278 = 0;
	}
	Global_1672277 = 0;
}

void func_717()
{
	if (unk_0xAB2A82A2838B61B7(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == unk_0x429EE9FF15BB9033() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

int func_718()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2531497.f_4734)
	{
		return 0;
	}
	if ((!func_47(&(Local_656.f_39)) && !func_47(&(Local_656.f_41))) && !func_47(&(Local_656.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x169A8AC9F93C2727();
	if (func_47(&(Local_656.f_41)))
	{
		iVar0 = func_719(&uVar2, &(Local_656.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_656.f_39)))
	{
		iVar0 = func_719(&uVar2, &(Local_656.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_656.f_43)))
	{
		iVar0 = func_719(&uVar2, &(Local_656.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_719(var uParam0, var uParam1)
{
	return unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(*uParam0, *uParam1));
}

int func_720()
{
	if (func_721())
	{
		return 1;
	}
	return 0;
}

bool func_721()
{
	return Global_1574647.f_24;
}

int func_722()
{
	var uVar0;
	
	func_726(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_725())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_724())
	{
		return 1;
	}
	if (func_723(159))
	{
		if (!func_711())
		{
			return 1;
		}
	}
	if (func_723(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_414() != 0)
	{
		if (unk_0x222F76006659B0EB(func_414()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_723(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_724()
{
	return Global_2458999;
}

bool func_725()
{
	return Global_2448961.f_593;
}

void func_726(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_727(iVar0);
					break;
				
				case -498955166:
					unk_0x3C1EC42A2CC175C5(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_727(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_728(uVar4, &bVar5))
						{
							unk_0x302E0AC3BB715211(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xF25956700ADFD77F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_728(int iParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(iParam0))
		{
			if (unk_0xDCDE4069CE0EA4A6(iParam0))
			{
				if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
				{
					unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x532AFD85DAA91F63(iParam0, 0))
		{
			if (unk_0x77FF1FAF6F41CA71(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_729()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_730()
{
	int iVar0;
	
	if (func_722())
	{
		Local_3008.f_5 = 5;
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_656.f_2, 0))
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
	Local_3008.f_10 = (unk_0x71EC776E812C6A0A() - Local_3008.f_9);
	if (!Global_262145.f_11500)
	{
		if (Local_3008.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0x2E40EEA43EF34BD6() != -1)
		{
			func_766(Local_3008, Local_656.f_3, Local_2623[unk_0x2E40EEA43EF34BD6() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (unk_0xA2BC31158C8CEFD2(iLocal_347, 4))
	{
		unk_0xCFF6AB47B7B014FF(iLocal_355);
		unk_0x3B76114EC84D5812(&iLocal_347, 4);
	}
	unk_0x0972EA9E8102C153(iLocal_355);
	unk_0x0972EA9E8102C153(iLocal_356);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((unk_0xA2BC31158C8CEFD2(iLocal_642, iVar0) && iLocal_643[iVar0] != -1) && !unk_0xDE3C2FB26058823A(iLocal_643[iVar0]))
		{
			unk_0xCFF6AB47B7B014FF(iLocal_643[iVar0]);
			unk_0x0972EA9E8102C153(iLocal_643[iVar0]);
		}
		iVar0++;
	}
	func_395();
	func_473(1, 1);
	unk_0x53B69E4722206E0C(0);
	func_545(0);
	func_402(Local_656.f_3, 0);
	func_731(133, 0, Local_656.f_37 == 6);
	func_401(23, 0);
	if (func_307() >= 0f)
	{
		unk_0xD488560A9EFC8231(0f, 0, 21);
	}
	if (!unk_0xA2BC31158C8CEFD2(iLocal_347, 9))
	{
		unk_0x76C7A02129221DEC();
	}
	unk_0x9C9E32388A7886A2();
}

void func_731(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x7C7787D2D7139A85() != -1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 13))
		{
			unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 13);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 14))
		{
			unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 14);
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 21))
	{
		unk_0x3B76114EC84D5812(&(Global_1574647.f_1), 21);
	}
	func_762();
	unk_0x70431C02FF392D24("DisableFlightMusic", 0);
	unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_761(func_321(unk_0x7C7787D2D7139A85()));
		func_401(func_421(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x7C7787D2D7139A85() != -1) && func_760(unk_0x7C7787D2D7139A85()) >= 12)
		{
			func_759(2546, -1);
			iVar1 = func_208(2546, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xA1E7A40E1F56E511(&Global_1574673, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xA1E7A40E1F56E511(&Global_1574673, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xA1E7A40E1F56E511(&Global_1574673, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xA1E7A40E1F56E511(&Global_1574673, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xA1E7A40E1F56E511(&Global_1574673, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xA1E7A40E1F56E511(&Global_1574673, 5);
			}
		}
		func_758();
		func_757();
		func_756();
		if ((!func_108(unk_0x7C7787D2D7139A85()) && !func_301(unk_0x7C7787D2D7139A85())) && !func_451())
		{
			func_740();
		}
		func_739();
		if (!unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 0) && !unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 1))
		{
			func_715();
		}
		func_738();
		unk_0x3B76114EC84D5812(&(Global_2531497.f_1746), 2);
		func_737();
		func_167();
	}
	if (unk_0xCE5F730CE5D2B3B2(1344549371))
	{
		unk_0x545AD6392BF558B6(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x7C7787D2D7139A85() != -1 && !func_163(unk_0x7C7787D2D7139A85(), 21)) && !func_163(unk_0x7C7787D2D7139A85(), 25)) && !func_112(unk_0x7C7787D2D7139A85(), 0))
		{
			func_409(0);
			func_407(0);
			if (!bParam1)
			{
				func_736();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2461173 = -1;
			func_48(26, -1);
		}
	}
	if (!func_732())
	{
		Global_2507562 = 1;
	}
}

int func_732()
{
	if ((((((!func_655(unk_0x7C7787D2D7139A85()) && !func_636(unk_0x7C7787D2D7139A85())) && func_321(unk_0x7C7787D2D7139A85()) != 146) && !func_735()) && !func_734()) && !func_733(Global_4456448.f_190930)) && !func_92())
	{
		return 0;
	}
	return 1;
}

bool func_733(int iParam0)
{
	return iParam0 == 57;
}

int func_734()
{
	if (Global_4456448.f_154360 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_735()
{
	if ((Global_4456448 == 0 && unk_0xA51CBC95AC3A4B14()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_190930 > 0) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 15)) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 18)) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 19)) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 29)) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 28)) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_736()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xA2BC31158C8CEFD2(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0x3B76114EC84D5812(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_737()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4735, 1))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4735), 1);
	}
	if (Global_2531497.f_4735 > 0)
	{
		unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_KILL");
		unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
		unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x597D844D285B9272(1);
		Global_2531497.f_4735 = 0;
		unk_0x70431C02FF392D24("DisableFlightMusic", 0);
		unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
		unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
		if (!unk_0x2553916E420E8EF0(unk_0x0037AFCBDC61F351(), "am_pi_menu"))
		{
			if (Global_2531497.f_4745 > -1)
			{
				unk_0x0972EA9E8102C153(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
		}
	}
}

void func_738()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574647 = { Var0 };
}

void func_739()
{
	var uVar0;
	
	Global_1319097 = uVar0;
}

void func_740()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_24), &Global_2409324, 2);
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_26), &Global_2409326, 19);
	func_754();
	func_743(1, 1, 0);
	func_741();
}

void func_741()
{
	func_742(0, 0);
}

void func_742(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_743(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xD3DFD1F239A937DB(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_753();
	}
	if (!bParam2)
	{
		func_745(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_744(0);
	func_170();
}

void func_744(bool bParam0)
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

void func_745(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_752())
		{
			func_751();
		}
		Global_2405071.f_704.f_518 = unk_0x429EE9FF15BB9033();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_749();
		func_449(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_746();
	}
}

void func_746()
{
	if (func_752() && !func_748())
	{
		func_751();
	}
	if (func_748())
	{
		func_747();
	}
	else
	{
		func_749();
		func_449(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_747()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_748()
{
	if ((Global_2405071.f_1742 && !unk_0x429EE9FF15BB9033() == Global_2405071.f_1223.f_518) && unk_0xAB2A82A2838B61B7(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_749()
{
	if (func_752() && !func_748())
	{
		func_751();
	}
	func_750();
	Global_2405071.f_704 = 0;
}

void func_750()
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

void func_751()
{
	if (func_748())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518)
	{
		unk_0xD3DFD1F239A937DB(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_752()
{
	if ((Global_2405071.f_1743 && !unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518) && unk_0xAB2A82A2838B61B7(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_753()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_754()
{
	func_755();
	Global_2405071.f_2252 = 0;
}

void func_755()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_756()
{
	Global_2531497.f_4736 = 0;
}

void func_757()
{
	if (unk_0x7C7787D2D7139A85() != -1)
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1 = 0;
	}
}

void func_758()
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	if (iVar0 != -1)
	{
		Global_1628955[iVar0 /*614*/] = -1;
	}
}

void func_759(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_208(iParam0, func_203(iParam1), 0);
	iVar0++;
	if (!func_207(iParam0))
	{
		func_198(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_199(iParam0, iVar0, iParam1, 1);
	}
}

int func_760(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

int func_761(int iParam0)
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
			if (func_412(unk_0x7C7787D2D7139A85()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_762()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_1735, 3) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_1735, 4))
	{
		if (unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877())
		{
			unk_0xCF33E56642B34516(800);
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_1735, 5))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_1735), 5);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_1735, 3))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_1735), 3);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_1735, 4))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_1735), 4);
	}
	func_765(0);
	func_764(0);
	func_763(0);
}

void func_763(int iParam0)
{
	if (Global_2531497.f_4520 != iParam0)
	{
		Global_2531497.f_4520 = iParam0;
	}
}

void func_764(bool bParam0)
{
	if (Global_2531497.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2531497.f_4519 = bParam0;
	}
}

void func_765(int iParam0)
{
	if (Global_2531497.f_4517 != iParam0)
	{
		Global_2531497.f_4517 = iParam0;
	}
}

void func_766(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x0037AFCBDC61F351();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76577)
	{
		if (unk_0x2553916E420E8EF0(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x810C484A087C3042(&Var1);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, func_767()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xFB33DABCFB43A8EF(&Var14);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x7F6382D827BD9C07(&Var28);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x06D386BCE22EF5BF(&Var52);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_penned_in"))
		{
			unk_0x0EF81B156D425380(&Param0);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x025486AF8C0DB17E(&Var66);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xF1C4981FBCAD9EA4(&Var79);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x03C7E03F649AA413(&Var93);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0xFE31CFF883023A7D(&Var107);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x8000E4289D8A77C5(&Var123);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x8B02E3FF6F2D8B3D(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xFC3F784B5E1FB53F(&Var150);
			}
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x7B89749159C363EC(&Var164);
		}
	}
}

char* func_767()
{
	switch (Global_2461343)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_768(struct<21> Param0)
{
	int iVar0;
	
	func_777(func_778(Param0.f_0), Param0);
	unk_0x58B4DE842733F8D9(func_776(9));
	unk_0xA019A9258930EC41(func_775(9));
	func_772(0, -1, 0);
	func_770(133);
	unk_0xCCD47D736BFD5DE3(&Local_656, 88);
	unk_0xFF584A1B7842F821(&Local_2623, 385);
	if (!func_769())
	{
		func_730();
	}
	if (unk_0x722688699565161D())
	{
		unk_0x3B462AFBC888A3F1(&(Local_656.f_52), &(Local_656.f_53));
	}
	Local_3008.f_2 = unk_0xABA4FE93FAF93E28();
	unk_0x50E03C7D74E352C4(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_643[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_769()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x393E9918BC37548A())
		{
			return 0;
		}
		if (unk_0x7A22E0DA3B8BAF4B())
		{
			return 1;
		}
		if (func_725())
		{
			return 0;
		}
		if (func_723(157))
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

void func_770(int iParam0)
{
	func_738();
	func_771();
	func_756();
	Global_1574647.f_4 = iParam0;
	Global_1574647.f_5 = iParam0;
	func_420(iParam0, -1);
	func_27(&(Global_1574647.f_18), 0, 0);
	Global_2531497.f_4588 = 0;
	Global_2460066[0] = func_102();
	Global_2460066[1] = func_102();
	Global_2460066[2] = func_102();
	Global_2460066[3] = func_102();
	Global_2460066[4] = func_102();
	func_167();
	if (!func_557(func_290()))
	{
		func_289();
	}
	if (func_165() && !func_164())
	{
		unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 16);
	}
	else
	{
		unk_0xA1E7A40E1F56E511(&(Global_1574647.f_1), 17);
	}
}

void func_771()
{
	var uVar0;
	
	Global_1574672 = uVar0;
}

int func_772(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_774();
			}
			else
			{
				return 0;
			}
		}
		if (!func_773())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_774();
					}
					else
					{
						return 0;
					}
				}
				if (func_725())
				{
					if (!bParam2)
					{
						func_774();
					}
					else
					{
						return 0;
					}
				}
				if (func_723(157))
				{
					if (!bParam2)
					{
						func_774();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xA2E986F74092E569())
			{
				if (!bParam2)
				{
					func_774();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x306B26A377F9A5BE();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			if (!bParam2)
			{
				func_774();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xA2E986F74092E569())
	{
		if (!bParam2)
		{
			func_774();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_773()
{
	return Global_1312850;
}

void func_774()
{
	unk_0x9C9E32388A7886A2();
}

int func_775(int iParam0)
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

int func_776(int iParam0)
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

void func_777(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x393E9918BC37548A())
	{
		func_774();
	}
	unk_0x4CF6FBF2580A447D(uParam0, 0, Param1.f_16);
}

int func_778(int iParam0)
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
		
		case 125:
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
		
		case 126:
			return 32;
		
		case 127:
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
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}


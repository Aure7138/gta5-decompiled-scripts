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
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121[65];
	float fLocal_317 = 0f;
	struct<3> Local_318 = { 0, 0, 0 } ;
	struct<3> Local_321 = { 0, 0, 0 } ;
	struct<3> Local_324 = { 0, 0, 0 } ;
	struct<3> Local_327 = { 0, 0, 0 } ;
	float fLocal_330 = 0f;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
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
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	float fLocal_351 = 0f;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	int iLocal_364 = 0;
	struct<3> Local_365[65];
	var uLocal_561[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_627[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	var uLocal_641[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	struct<68> Local_654 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
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
	struct<535> Local_742 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1277 = -1;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
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
	var uLocal_1299 = -1082130432;
	var uLocal_1300 = 3;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
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
	var uLocal_1316 = -1;
	var uLocal_1317 = 0;
	var uLocal_1318 = -1;
	var uLocal_1319 = -1;
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
	var uLocal_1341 = -1082130432;
	var uLocal_1342 = 3;
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
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = -1;
	var uLocal_1359 = 0;
	var uLocal_1360 = -1;
	var uLocal_1361 = -1;
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
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = -1082130432;
	var uLocal_1384 = 3;
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
	var uLocal_1400 = -1;
	var uLocal_1401 = 0;
	var uLocal_1402 = -1;
	var uLocal_1403 = -1;
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
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = -1082130432;
	var uLocal_1426 = 3;
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
	var uLocal_1442 = -1;
	var uLocal_1443 = 0;
	var uLocal_1444 = -1;
	var uLocal_1445 = -1;
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
	var uLocal_1466 = 0;
	var uLocal_1467 = -1082130432;
	var uLocal_1468 = 3;
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
	var uLocal_1484 = -1;
	var uLocal_1485 = 0;
	var uLocal_1486 = -1;
	var uLocal_1487 = -1;
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
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = -1082130432;
	var uLocal_1510 = 3;
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
	var uLocal_1526 = -1;
	var uLocal_1527 = 0;
	var uLocal_1528 = -1;
	var uLocal_1529 = -1;
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
	var uLocal_1551 = -1082130432;
	var uLocal_1552 = 3;
	var uLocal_1553 = 0;
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
	var uLocal_1568 = -1;
	var uLocal_1569 = 0;
	var uLocal_1570 = -1;
	var uLocal_1571 = -1;
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
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = -1082130432;
	var uLocal_1594 = 3;
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
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = -1;
	var uLocal_1611 = 0;
	var uLocal_1612 = -1;
	var uLocal_1613 = -1;
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
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = -1082130432;
	var uLocal_1636 = 3;
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
	var uLocal_1652 = -1;
	var uLocal_1653 = 0;
	var uLocal_1654 = -1;
	var uLocal_1655 = -1;
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
	var uLocal_1677 = -1082130432;
	var uLocal_1678 = 3;
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
	var uLocal_1694 = -1;
	var uLocal_1695 = 0;
	var uLocal_1696 = -1;
	var uLocal_1697 = -1;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
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
	var uLocal_1719 = -1082130432;
	var uLocal_1720 = 3;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
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
	var uLocal_1736 = -1;
	var uLocal_1737 = 0;
	var uLocal_1738 = -1;
	var uLocal_1739 = -1;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
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
	var uLocal_1761 = -1082130432;
	var uLocal_1762 = 3;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
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
	var uLocal_1778 = -1;
	var uLocal_1779 = 0;
	var uLocal_1780 = -1;
	var uLocal_1781 = -1;
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
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = -1082130432;
	var uLocal_1804 = 3;
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
	var uLocal_1820 = -1;
	var uLocal_1821 = 0;
	var uLocal_1822 = -1;
	var uLocal_1823 = -1;
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
	var uLocal_1845 = -1082130432;
	var uLocal_1846 = 3;
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
	var uLocal_1862 = -1;
	var uLocal_1863 = 0;
	var uLocal_1864 = -1;
	var uLocal_1865 = -1;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
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
	var uLocal_1887 = -1082130432;
	var uLocal_1888 = 3;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
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
	var uLocal_1904 = -1;
	var uLocal_1905 = 0;
	var uLocal_1906 = -1;
	var uLocal_1907 = -1;
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
	var uLocal_1929 = -1082130432;
	var uLocal_1930 = 3;
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
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = -1;
	var uLocal_1947 = 0;
	var uLocal_1948 = -1;
	var uLocal_1949 = -1;
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
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = -1082130432;
	var uLocal_1972 = 3;
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
	var uLocal_1988 = -1;
	var uLocal_1989 = 0;
	var uLocal_1990 = -1;
	var uLocal_1991 = -1;
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
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = -1082130432;
	var uLocal_2014 = 3;
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
	var uLocal_2030 = -1;
	var uLocal_2031 = 0;
	var uLocal_2032 = -1;
	var uLocal_2033 = -1;
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
	var uLocal_2054 = 0;
	var uLocal_2055 = -1082130432;
	var uLocal_2056 = 3;
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
	var uLocal_2072 = -1;
	var uLocal_2073 = 0;
	var uLocal_2074 = -1;
	var uLocal_2075 = -1;
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
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = -1082130432;
	var uLocal_2098 = 3;
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
	var uLocal_2114 = -1;
	var uLocal_2115 = 0;
	var uLocal_2116 = -1;
	var uLocal_2117 = -1;
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
	var uLocal_2139 = -1082130432;
	var uLocal_2140 = 3;
	var uLocal_2141 = 0;
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
	var uLocal_2156 = -1;
	var uLocal_2157 = 0;
	var uLocal_2158 = -1;
	var uLocal_2159 = -1;
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
	var uLocal_2181 = -1082130432;
	var uLocal_2182 = 3;
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
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = -1;
	var uLocal_2199 = 0;
	var uLocal_2200 = -1;
	var uLocal_2201 = -1;
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
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = -1082130432;
	var uLocal_2224 = 3;
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
	var uLocal_2240 = -1;
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
	var uLocal_2282 = -1;
	var uLocal_2283 = 0;
	var uLocal_2284 = -1;
	var uLocal_2285 = -1;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
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
	var uLocal_2307 = -1082130432;
	var uLocal_2308 = 3;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
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
	var uLocal_2324 = -1;
	var uLocal_2325 = 0;
	var uLocal_2326 = -1;
	var uLocal_2327 = -1;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
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
	var uLocal_2349 = -1082130432;
	var uLocal_2350 = 3;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
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
	var uLocal_2366 = -1;
	var uLocal_2367 = 0;
	var uLocal_2368 = -1;
	var uLocal_2369 = -1;
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
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = -1082130432;
	var uLocal_2392 = 3;
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
	var uLocal_2408 = -1;
	var uLocal_2409 = 0;
	var uLocal_2410 = -1;
	var uLocal_2411 = -1;
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
	var uLocal_2433 = -1082130432;
	var uLocal_2434 = 3;
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
	var uLocal_2450 = -1;
	var uLocal_2451 = 0;
	var uLocal_2452 = -1;
	var uLocal_2453 = -1;
	var uLocal_2454 = 0;
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
	var uLocal_2475 = -1082130432;
	var uLocal_2476 = 3;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
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
	var uLocal_2492 = -1;
	var uLocal_2493 = 0;
	var uLocal_2494 = -1;
	var uLocal_2495 = -1;
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
	var uLocal_2517 = -1082130432;
	var uLocal_2518 = 3;
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
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = -1;
	var uLocal_2535 = 0;
	var uLocal_2536 = -1;
	var uLocal_2537 = -1;
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
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = -1082130432;
	var uLocal_2560 = 3;
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
	var uLocal_2576 = -1;
	var uLocal_2577 = 0;
	var uLocal_2578 = -1;
	var uLocal_2579 = -1;
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
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = -1082130432;
	var uLocal_2602 = 3;
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
	var uLocal_2619 = 0;
	var uLocal_2620 = -1;
	struct<12> Local_2621[32];
	struct<12> Local_3006 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_317 = 40000f;
	iLocal_353 = unk_0x7A3ECD08D6D1D554();
	iLocal_354 = unk_0x7A3ECD08D6D1D554();
	iLocal_355 = -1;
	iLocal_356 = -1;
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_746(ScriptParam_0))
		{
			func_709();
		}
	}
	while (true)
	{
		func_708();
		if (func_701() || func_699())
		{
			func_709();
		}
		if (func_697())
		{
			func_709();
		}
		func_671();
		switch (func_670(unk_0x8D4ED2C97DFF2321()))
		{
			case 0:
				if (func_669() == 1)
				{
					if (func_668())
					{
						func_667(unk_0x8D4ED2C97DFF2321(), 1);
					}
				}
				break;
			
			case 1:
				if (func_669() == 1)
				{
					func_131();
					func_119();
				}
				else if (func_669() == 3)
				{
					func_667(unk_0x8D4ED2C97DFF2321(), 3);
				}
				break;
			
			case 3:
				func_709();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_669())
			{
				case 0:
					if (func_106())
					{
						func_105(1);
					}
					break;
				
				case 1:
					if (Local_654.f_37 == 6)
					{
						func_105(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_331, 1000, 0))
					{
						func_105(3);
					}
					break;
				
				case 3:
					func_709();
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
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
		{
			unk_0x2BCFB39E86340DAA(&(Local_654.f_2), 0);
			Local_654.f_1 = unk_0xFFCC7EBF88BDEE54();
		}
	}
	switch (Local_654.f_37)
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
			if (func_1(&(Local_654.f_43), func_29(), 0) || unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_654.f_38 = unk_0xFFCC7EBF88BDEE54();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_654.f_39), func_28(0), 0) || unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_654.f_2, 1))
				{
					Local_654.f_1 = unk_0xFFCC7EBF88BDEE54();
					unk_0x2BCFB39E86340DAA(&(Local_654.f_2), 1);
					func_27(&(Local_654.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_356, &iLocal_355);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_654.f_41), 20000, 0) || Local_654.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_654.f_3))
				{
					func_27(&(Local_654.f_45), 0, 0);
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
		if (unk_0xAABBF7FA3E338B30(Local_654.f_67[iVar0 /*2*/].f_1) && !unk_0x7112137033807390(unk_0x1C3E3FC5D339FC8C(Local_654.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			iVar2 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_2621[iVar1 /*12*/].f_1, 1) || Local_2621[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0x05EFB6A616B6FADE(Local_2621[iVar1 /*12*/].f_1, 0))
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
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 1826587727;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 713068249;
	Param0.f_1 = unk_0xD4E735F4B6A956AC();
	if (!iParam14 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			iVar2 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
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
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
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
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			unk_0x2BCFB39E86340DAA(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0x05EFB6A616B6FADE(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x2BCFB39E86340DAA(&(Local_654.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
				if (unk_0xC77FA683E9BB485B(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_654.f_50)
	{
		Local_654.f_50 = iVar1;
	}
	else
	{
		Local_654.f_66 = (Local_654.f_50 - iVar1);
	}
	if (iVar2 > Local_654.f_51)
	{
		Local_654.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
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
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312736;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2621[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4);
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
	switch (Local_654.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10826)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10827)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10828)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10829)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10830)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10831)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10832 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10833)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10834)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10835)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10836)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10837))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10838))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_10950)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_10951)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10841))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10843))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10844))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10845))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_654.f_3)
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
		if (Local_654.f_4[iParam0] == unk_0xD60943E3BE730BF0() && func_21(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4, 0))
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
	switch (Local_654.f_3)
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
	
	iVar0 = Local_2621[iParam0 /*12*/].f_4;
	iVar1 = Local_2621[iParam0 /*12*/].f_4.f_2;
	if (!unk_0x05EFB6A616B6FADE(Local_654.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_654.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_654.f_49++;
			unk_0x2BCFB39E86340DAA(&(Local_654.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_654.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_654.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_654.f_4[iVar3] < 0 || func_21(iVar0, Local_2621[Local_654.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2621[Local_654.f_4[iVar3] /*12*/].f_4, iVar1, Local_2621[Local_654.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_654.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_355 = iVar3;
				iLocal_356 = iParam0;
			}
			Local_654.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_654.f_4[iVar5] == iParam0)
				{
					Local_654.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_654.f_3 == 2)
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
	
	if (unk_0x05EFB6A616B6FADE(Local_654.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_654.f_4[iVar0] == iParam0)
			{
				Local_654.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xFA57C719261AA55D(&(Local_654.f_48), iParam0);
		unk_0xFA57C719261AA55D(&(Local_654.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C9BACA8D249CB13() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xFFCC7EBF88BDEE54();
		}
		else
		{
			*uParam0 = unk_0x7546CD2A62C6DBB6();
		}
	}
	else
	{
		*uParam0 = unk_0xFD34717937104F1C();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0x05EFB6A616B6FADE(Local_654.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_654.f_3)
	{
		case 0:
			return Global_262145.f_10143;
		
		case 8:
			return Global_262145.f_10145;
		
		case 3:
			return Global_262145.f_10146;
		
		case 1:
			return Global_262145.f_10936;
		
		case 6:
			return Global_262145.f_10937;
		
		case 10:
			return Global_262145.f_10939;
		
		case 11:
			return Global_262145.f_10941;
		
		case 12:
			return Global_262145.f_10942;
		
		case 15:
			return Global_262145.f_10946;
		
		case 16:
			return Global_262145.f_10947;
		
		case 17:
			return Global_262145.f_10948;
		
		case 18:
			return Global_262145.f_10949;
		
		case 13:
			return Global_262145.f_10940;
		
		case 14:
			return Global_262145.f_10943;
		
		case 2:
			return Global_262145.f_10148;
		
		case 7:
			return Global_262145.f_10938;
		
		case 9:
			return Global_262145.f_10944;
		
		case 5:
			return Global_262145.f_10149;
		
		case 4:
			return Global_262145.f_10147;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_10906;
}

void func_30(int iParam0)
{
	Local_654.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_654.f_37 == 0 || func_5(Local_654.f_3)) || Local_654.f_54 < 10))
	{
		Var0 = { Local_654.f_67[iLocal_350 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0x83A1DA4E6C55E952(Var0.f_1))
			{
				if (func_38(Local_654.f_3, iLocal_350, &Var2, &uVar5))
				{
					Local_654.f_55[iLocal_350] = func_34(iLocal_350);
					if (unk_0x05EFB6A616B6FADE(Local_2621[Local_654.f_55[iLocal_350] /*12*/].f_2, iLocal_350))
					{
						if (func_33(&(Local_654.f_67[iLocal_350 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0xA808C46485E7F35D(unk_0x1C3E3FC5D339FC8C(Local_654.f_67[iLocal_350 /*2*/].f_1), 1, 1);
							unk_0x14293208022014FA(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), 1);
							unk_0xEAF1F3E17588C851(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), 1);
							unk_0x1158FE16B33DAFF4(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), 0);
							func_32(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), 1);
							if (unk_0xDE26AC7E7C308E75("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x6D61CED849FB898E(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
							{
								if (unk_0xAEAF59799C2F26E4(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0xBB4F5216F3FCA8EA(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), "MPBitset");
								}
								unk_0x2BCFB39E86340DAA(&iVar6, 10);
								unk_0x2BCFB39E86340DAA(&iVar6, 11);
								unk_0x6D61CED849FB898E(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_350 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_654.f_55[iLocal_350] = -1;
							Local_654.f_54++;
						}
					}
				}
			}
		}
		iLocal_350++;
		if (iLocal_350 >= 10)
		{
			iLocal_350 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
	{
		if (unk_0xAEAF59799C2F26E4(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xBB4F5216F3FCA8EA(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x2BCFB39E86340DAA(&uVar0, 13);
		}
		else
		{
			unk_0xFA57C719261AA55D(&uVar0, 13);
		}
		unk_0x6D61CED849FB898E(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F0E621C9C312804(iParam1))
	{
		return 0;
	}
	if (!unk_0xA495A83E4287FE76(1))
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
		unk_0x01AF8CB960828C2B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x48CFBECB146FD1A1(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xDC5D81351D6A4DDB(iVar1))
	{
		*uParam0 = unk_0xC48DA15CF8CAF4F9(iVar1);
		Global_2524719.f_6178 = iVar1;
		if (unk_0x83A1DA4E6C55E952(*uParam0))
		{
			if (bParam15)
			{
				unk_0x3D126A1799B1C84D(iVar1, 1);
			}
			unk_0xEAF1F3E17588C851(iVar1, iParam10);
			if (unk_0xCC1BBE3267AB0DC9(iVar1))
			{
				if (bParam8)
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 1);
				}
				else
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x9F5CBEB0A0ADA5A7(*uParam0, unk_0xD4E735F4B6A956AC(), 1);
				}
			}
			unk_0x42B5518F103DB03E(iVar1, iParam9);
			unk_0x1E0A3C6D89CE975D(iVar1, 1);
			if (bParam12)
			{
				unk_0xAEE3221D0EC483AD(iVar1);
				unk_0xBA75315E0F357DD3(iVar1, 5, 5, 1f);
			}
			return 1;
		}
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
		while (iVar0 <= (unk_0x48908CAFF1B58FF8() - 1))
		{
			if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
			{
				iVar8 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
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
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
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
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

bool func_41()
{
	return (func_5(Local_654.f_3) || func_39(Local_654.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_104(unk_0xD4E735F4B6A956AC(), 0) || func_101(unk_0xD4E735F4B6A956AC(), 0))
	{
		if (func_100(unk_0xD4E735F4B6A956AC()) || func_98(unk_0xD4E735F4B6A956AC()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x34D754E2B6D6139D() < iParam0)
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
	if (func_45(&(Global_1574631.f_18)))
	{
		if (!func_1(&(Global_1574631.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1574631.f_18));
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
	if (iParam1 && unk_0x76C363FF38E9EA1F() < iParam0)
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
	return unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 0);
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
			unk_0x11256C770C65262F(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x3278E95F94254201(uVar1);
			if (unk_0x05EFB6A616B6FADE(iVar0, iParam0))
			{
				unk_0xFA57C719261AA55D(&iVar0, iParam0);
				unk_0x11256C770C65262F(iVar0, iParam1);
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
	uVar1 = unk_0x3278E95F94254201(uVar0);
	return unk_0x05EFB6A616B6FADE(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 2) && !func_8(unk_0xD4E735F4B6A956AC())) && !func_7(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x429D45A6C6520026(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x429D45A6C6520026(sParam1))
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
		func_50(66, sParam0, sParam1, 1, -1, 2, 1);
		unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_97(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_51(&Var0);
}

int func_51(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_65(uParam0, uParam0->f_17);
	func_62(uParam0);
	if (func_61())
	{
		func_62(uParam0);
	}
	if (func_60(uParam0->f_1))
	{
		func_53();
		if (Global_2437022.f_2704[0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437022.f_2704[0 /*80*/].f_1 == 13 || Global_2437022.f_2704[0 /*80*/].f_1 == 53) || Global_2437022.f_2704[0 /*80*/].f_1 == 54) || Global_2437022.f_2704[0 /*80*/].f_1 == 58)
		{
			Global_2437022.f_2704[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437022.f_2704[iVar0 + 1 /*80*/] = { Global_2437022.f_2704[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437022.f_2704[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_53();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 1);
				Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0x05EFB6A616B6FADE(uParam0->f_69, 7))
			{
				if (func_52(Global_2437022.f_2704[iVar0 /*80*/].f_1))
				{
					Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
					unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
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

void func_53()
{
	bool bVar0;
	
	if (Global_2437022.f_3027)
	{
		return;
	}
	if (!Global_71473)
	{
		Global_71473 = 1;
		bVar0 = true;
	}
	func_54();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_54()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_58(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_55(&(Global_2437022.f_3028.f_1));
}

void func_55(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x86795B44CE5FE021(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x233A5B4A35140C6B(0);
			unk_0x271C1332F482646C();
		}
		unk_0x86795B44CE5FE021(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x65227735B3827631(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71473)
	{
		if (!unk_0xD32647D293B05ADD(unk_0xA6580F898F4E801C()))
		{
			if (!Global_71474)
			{
				if (unk_0x71364F510A1CB69F() && !func_57(0))
				{
					unk_0x70C1F5AA59767FE6(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_58(var uParam0)
{
	func_59(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_59(var uParam0)
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

int func_60(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2448386.f_16;
}

void func_62(var uParam0)
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_72 = func_63();
	}
}

int func_63()
{
	return 21;
}

int func_64(int iParam0)
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

void func_65(var uParam0, int iParam1)
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_96() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_66(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_94(iParam0) && !bParam4)
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
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_125859[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_94(unk_0xD4E735F4B6A956AC()) || (func_93() && func_92())) && !unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 31)) && !bParam4)
	{
		uVar1 = func_91();
		if (unk_0xDC5D81351D6A4DDB(uVar1))
		{
			if (unk_0xC085874FDE5FE33A(iVar1))
			{
				if (unk_0x77065AD41B64E946(iVar1) != -1)
				{
					if (func_12(unk_0x77065AD41B64E946(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_89(iParam1, iParam0, 0);
							}
							else
							{
								return func_77(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_77(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_89(iParam1, iParam0, 0);
				}
				else
				{
					return func_67(0, -1, 0);
				}
			}
			else
			{
				return func_67(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_89(iParam1, iParam0, 0);
		}
		else
		{
			return func_77(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
		}
	}
	return func_77(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	return func_68(unk_0xD4E735F4B6A956AC(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC77FA683E9BB485B(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (func_75() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_74(iParam2, iVar0);
		}
		else
		{
			return func_74(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_4456448.f_130782, 1))
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

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_152990 == 65)
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
		if (iParam0 == Global_262145.f_8906[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
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
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)
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
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 0);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 1);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 2);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 4);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 5);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 6);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 8);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 9);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 10);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 12);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 13);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 14);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_71(iParam1, iParam0, 4);
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

int func_75()
{
	if (func_76() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

bool func_76()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589747[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_86(1))
			{
				iVar3 = func_82(iParam0);
				if (!iVar3 == -1)
				{
					return func_80(iVar3);
				}
			}
			if ((func_79(iParam1, iParam0, iVar0, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)) || ((func_73(unk_0xE46ECB9FD23D3264(iParam1), unk_0xE46ECB9FD23D3264(iParam0), 0) && unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 23)) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)))
			{
				return func_72(1);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26))
			{
				return func_78(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_82(iParam0);
	if (!iVar4 == -1)
	{
		return func_80(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_78(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && unk_0xE46ECB9FD23D3264(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
	}
	return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_81(iParam0);
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

var func_81(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_82(int iParam0)
{
	if (!iParam0 == func_96())
	{
		if (func_84(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_83(iParam0)];
		}
	}
	return -1;
}

int func_83(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_96();
}

bool func_84(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_85(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_96();
}

int func_85(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_96())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if ((func_88() || func_87()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_87()
{
	return Global_2448386.f_15;
}

var func_88()
{
	return Global_2448386.f_14;
}

int func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_86(1))
	{
		iVar2 = func_82(iParam1);
		if (!iVar2 == -1)
		{
			return func_80(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_96())
	{
		if (Global_4456448.f_125859[iParam0] != -1 && Global_4456448.f_125859[iParam0] <= 4)
		{
			if (Global_4456448.f_125859[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_125859[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_125859[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_125859[iParam0] == 4)
			{
				if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_125859[iParam0];
			}
		}
		else
		{
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_21, 13))
		{
			iVar0 = func_90(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26) && !func_73(iParam0, unk_0xE46ECB9FD23D3264(iParam1), 0))
		{
			iVar0 = func_78(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_153033;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_153034;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_153035;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_153036;
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

var func_91()
{
	return Global_2359302.f_2;
}

bool func_92()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 4);
}

bool func_93()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

int func_94(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_95())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_96()
{
	return -1;
}

void func_97(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_96();
	uParam1->f_18 = func_96();
	uParam1->f_19 = func_96();
	uParam1->f_20 = func_96();
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

bool func_98(int iParam0)
{
	return func_99(iParam0, 20);
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

int func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_99(iParam0, 9);
	}
	return 0;
}

int func_101(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_102(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_102(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0)
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
	return func_103(iParam0, 0);
	return 0;
}

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0)
{
	Local_654.f_0 = iParam0;
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_654.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_654.f_39));
	func_111();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_654.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_107();
	}
	return 1;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_654.f_3))
		{
			Local_654.f_67[iVar0 /*2*/] = func_110();
		}
		else
		{
			Local_654.f_67[iVar0 /*2*/] = func_108();
		}
		iVar0++;
	}
}

int func_108()
{
	int iVar0;
	
	switch (Local_654.f_3)
	{
		case 12:
			return func_109();
			break;
	}
	iVar0 = unk_0x22C775856F4633CA(0, 2);
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

int func_109()
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 2);
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

int func_110()
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 2);
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

void func_111()
{
	int iVar0;
	
	iVar0 = func_115();
	Local_654.f_3 = iVar0;
	func_112(func_114(133, iVar0, 0, 0));
}

void func_112(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = -1319724092;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = iParam0;
	iVar3 = func_113(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Var0, 3, iVar3);
	}
}

var func_113(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
			{
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_115()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_11235;
	iVar0[1] = Global_262145.f_10908;
	iVar0[2] = Global_262145.f_11239;
	iVar0[3] = Global_262145.f_11237;
	iVar0[4] = Global_262145.f_11238;
	iVar0[5] = Global_262145.f_11240;
	iVar0[6] = Global_262145.f_10909;
	iVar0[7] = Global_262145.f_10910;
	iVar0[8] = Global_262145.f_11236;
	iVar0[9] = Global_262145.f_10916;
	iVar0[10] = Global_262145.f_10911;
	iVar0[11] = Global_262145.f_10913;
	iVar0[12] = Global_262145.f_10914;
	iVar0[13] = Global_262145.f_10912;
	iVar0[14] = Global_262145.f_10915;
	iVar0[15] = Global_262145.f_10918;
	iVar0[16] = Global_262145.f_10919;
	iVar0[17] = Global_262145.f_10920;
	iVar0[18] = Global_262145.f_10921;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_118(iVar21) || func_116(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0xF59B9063EDAC7451(0f, fVar20);
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
	return func_115();
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_117(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_7999)
		{
			if (Global_2497633.f_130[iVar0 /*2*/] == iVar1 && Global_2497633.f_130[iVar0 /*2*/].f_1 == func_114(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(int iParam0)
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

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10137;
		
		case 1:
			return Global_262145.f_10922;
		
		case 6:
			return Global_262145.f_10923;
		
		case 7:
			return Global_262145.f_10924;
		
		case 8:
			return Global_262145.f_10138;
		
		case 3:
			return Global_262145.f_10139;
		
		case 4:
			return Global_262145.f_10140;
		
		case 2:
			return Global_262145.f_10141;
		
		case 5:
			return Global_262145.f_10142;
		
		case 9:
			return Global_262145.f_10930;
		
		case 10:
			return Global_262145.f_10925;
		
		case 11:
			return Global_262145.f_10927;
		
		case 12:
			return Global_262145.f_10928;
		
		case 15:
			return Global_262145.f_10932;
		
		case 16:
			return Global_262145.f_10933;
		
		case 17:
			return Global_262145.f_10934;
		
		case 18:
			return Global_262145.f_10935;
		
		case 13:
			return Global_262145.f_10926;
		
		case 14:
			return Global_262145.f_10929;
		
		default:
	}
	return 1;
}

void func_119()
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_654.f_55[iVar0] == unk_0xD60943E3BE730BF0())
			{
				if (func_120(iVar0))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_2, iVar0))
					{
						unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_2, iVar0))
				{
					unk_0xFA57C719261AA55D(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_2, iVar0))
			{
				unk_0xFA57C719261AA55D(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_120(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_37(iParam0, &Var0, &uVar3))
	{
		if (func_121(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405070.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x85A65397E2224648(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x5ACD8081B0AC1F22(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x5ACD8081B0AC1F22(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC980951B35C111AE(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (unk_0x06D718FC71673E5A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_126(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_122(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_122(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x499324B3EF19C288(func_124(unk_0xD4E735F4B6A956AC()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x317672E799676CA5(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_123(iVar1) || !bParam10) && !Global_2423801[iVar1 /*413*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0xE46ECB9FD23D3264(iVar1) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xE46ECB9FD23D3264(iVar1) != unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))) || unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0x499324B3EF19C288(func_124(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xAB4CCE25F269AC90(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE46ECB9FD23D3264(iVar1) != iParam8 || unk_0xE46ECB9FD23D3264(iVar1) == -1)
						{
							if (unk_0x499324B3EF19C288(func_124(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xAB4CCE25F269AC90(iVar1, Param0, fParam3))
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

int func_123(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1589747[iVar0 /*790*/].f_761) && !func_125(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_36(iParam0);
}

int func_125(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_126(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam7 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_123(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && uParam9) && bParam6) && func_127(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_36(iVar1), Param0, 1) < fParam3)
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

int func_127(int iParam0)
{
	if (func_130(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_129(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_128(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_96())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_129(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_130(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_129(iParam0) };
		Global_2503662 = { func_129(iParam1) };
		if (unk_0xE0B3F7A8017F6425(&Global_2503649))
		{
			if (unk_0xE0B3F7A8017F6425(&Global_2503662))
			{
				unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649);
				unk_0xE087FDE0E2FA8ADF(&Global_2503614, 35, &Global_2503662);
				if (Global_2503579 == Global_2503614)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_131()
{
	float fVar0;
	float fVar1;
	
	func_664();
	func_663();
	if (func_661())
	{
		func_550();
	}
	if (!func_7(unk_0xD4E735F4B6A956AC()))
	{
		if (func_527(0, 1, 1))
		{
			if (unk_0x05EFB6A616B6FADE(iLocal_345, 6))
			{
				unk_0xFA57C719261AA55D(&iLocal_345, 6);
			}
			switch (Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_3)
			{
				case 0:
					if (Local_654.f_37 < 2)
					{
						if (Local_654.f_37 > 0)
						{
							if (Local_654.f_3 != -1)
							{
								func_526(1);
								func_525(1);
							}
						}
					}
					else
					{
						func_525(2);
					}
					break;
				
				case 1:
					func_519(9);
					if (Local_3006.f_8 == 0)
					{
						Local_3006.f_8 = unk_0x5E0F2F352218B916();
					}
					if (Local_654.f_37 >= 2)
					{
						func_525(2);
						Local_3006.f_9 = unk_0x5E0F2F352218B916();
					}
					if (func_41())
					{
						func_519(0);
					}
					func_517((func_29() - func_518(&(Local_654.f_43), 0, 0)));
					func_514(func_516((func_29() - func_518(&(Local_654.f_43), 0, 0)), 0), func_515(Local_654.f_3));
					func_455(0, func_513());
					func_433();
					func_410();
					if (func_409())
					{
						func_408();
					}
					break;
				
				case 2:
					if (Local_654.f_37 > 2)
					{
						func_526(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_407())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_390(133, fVar0, fVar1, 0, 0, 0, 0);
						func_389(Local_654.f_3, 1);
						func_388(23, 1);
						if (Local_3006.f_8 == 0)
						{
							Local_3006.f_8 = unk_0x5E0F2F352218B916();
						}
						if (Local_3006.f_9 == 0)
						{
							Local_3006.f_9 = unk_0x5E0F2F352218B916();
						}
						func_384();
						unk_0xB09429BC3A2B9574(1);
						if (func_407())
						{
							unk_0xBF6EED5D6E0CD9BF(0f);
							unk_0x9BB7BCDF2AC2D6F9(0);
						}
						if (Local_654.f_3 == 14)
						{
							func_383(&Local_365);
						}
						func_382();
						if (!func_7(unk_0xD4E735F4B6A956AC()))
						{
							func_50(63, "AMCH_STARTED", func_381(Local_654.f_3), func_63(), -1, func_63(), 1);
							if (func_378("AMCH_WARN", func_380(Local_654.f_3), func_379(Local_654.f_3)))
							{
								unk_0x135C61E339DABBAC(1);
							}
						}
						if (func_41())
						{
							func_361(678f, 794f, 206f, 8f, 0);
							func_361(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_361(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_525(3);
					}
					break;
				
				case 3:
					if (Local_654.f_37 > 3)
					{
						iLocal_347 = 0;
						func_525(4);
					}
					else
					{
						if (!unk_0x05EFB6A616B6FADE(Local_654.f_2, 1))
						{
							func_324();
							func_321();
							func_320();
						}
						if (func_319(0) && !func_20(0))
						{
							func_318();
						}
					}
					if (func_407())
					{
						unk_0x5F51CC55425AAE14(unk_0xD4E735F4B6A956AC());
					}
					func_317();
					func_294();
					func_550();
					func_455(0, 1);
					func_433();
					func_410();
					func_519(2);
					func_519(5);
					func_519(7);
					break;
				
				case 4:
					if (func_283(&uLocal_357, !unk_0x05EFB6A616B6FADE(Local_654.f_2, 0)) || unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
					{
						if (func_5(Local_654.f_3))
						{
							if (Local_654.f_37 == 5)
							{
								func_525(5);
							}
						}
						else
						{
							func_525(6);
						}
					}
					func_270();
					func_163();
					func_294();
					func_550();
					func_455(1, 1);
					func_382();
					break;
				
				case 5:
					if (Local_654.f_37 > 5)
					{
						func_525(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_158();
		}
	}
	else
	{
		func_158();
	}
	func_138();
	func_133();
	func_132();
}

void func_132()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_41())
	{
		Var0 = { Local_654.f_67[iLocal_364 /*2*/] };
		if (unk_0x83A1DA4E6C55E952(Var0.f_1))
		{
			iVar2 = unk_0xBEA1D935EBAA95F3(Var0.f_1);
			if (unk_0xB540EEBB14C48518(iVar2))
			{
				if (!unk_0x1095F403F52B42E1(iVar2, 0))
				{
					unk_0x792676988A48387F(&iVar2);
				}
			}
		}
		iLocal_364++;
		if (iLocal_364 >= 10)
		{
			iLocal_364 = 0;
			iLocal_653 = iLocal_652;
			iLocal_652 = 0;
		}
	}
}

void func_133()
{
	if (Local_654.f_37 == 5)
	{
		if (unk_0x83A1DA4E6C55E952(Local_654.f_67[iLocal_364 /*2*/].f_1))
		{
			if (!unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_364 /*2*/].f_1), 0))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_640, iLocal_364))
				{
					unk_0x2BCFB39E86340DAA(&iLocal_640, iLocal_364);
					uLocal_641[iLocal_364] = unk_0x7A3ECD08D6D1D554();
					unk_0x6020229E34827A69(uLocal_641[iLocal_364], "Explosion_Countdown", unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_364 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x5D311B11B00F19D4(uLocal_641[iLocal_364], "Time", 30f);
				}
				if ((30000 - func_518(&(Local_654.f_45), 0, 0)) >= 0)
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_364 /*2*/].f_1), 0))
					{
						func_519(1);
						iLocal_652 = 1;
					}
				}
				else if (unk_0xABF0452BE64AD290(Local_654.f_67[iLocal_364 /*2*/].f_1))
				{
					unk_0xDCB46BFC2265476A(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_364 /*2*/].f_1));
					unk_0xC099EA2A4F22A1F3(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iLocal_364 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0x05EFB6A616B6FADE(iLocal_640, iLocal_364) && !unk_0x57269F5E44F5F616(uLocal_641[iLocal_364]))
			{
				unk_0x5DE59A67B5F326CF(uLocal_641[iLocal_364]);
			}
		}
		if (iLocal_653)
		{
			if (!func_94(unk_0xD4E735F4B6A956AC()))
			{
				func_135(func_516((30000 - func_518(&(Local_654.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_134();
			}
		}
	}
}

void func_134()
{
	Global_1369750.f_1088 = 1;
}

void func_135(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_137(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_136(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_136(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_137(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

void func_138()
{
	if (((func_12(unk_0xD4E735F4B6A956AC(), 1, 1) && !func_7(unk_0xD4E735F4B6A956AC())) && !func_154(unk_0xD4E735F4B6A956AC())) && func_527(0, 1, 1))
	{
		if (Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_3 == 1)
		{
			func_151(func_153(Local_654.f_3), func_380(Local_654.f_3), 0, 0);
		}
		else if (Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_3 == 3)
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_345, 10))
			{
				func_139(func_379(Local_654.f_3), 0);
			}
			else
			{
				func_139("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_382();
		}
	}
	else
	{
		func_382();
	}
}

void func_139(char* sParam0, bool bParam1)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return;
	}
	if (func_149(sParam0))
	{
		return;
	}
	func_143();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_142();
	func_141(bParam1);
	func_140();
}

void func_140()
{
	unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 1);
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0xFA57C719261AA55D(&(Global_1312576.f_59), 0);
}

void func_142()
{
	Global_1312576.f_10 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 86400000);
	Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
}

void func_143()
{
	func_145();
	func_144(0);
}

void func_144(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4C9BACA8D249CB13();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xFFCC7EBF88BDEE54();
		Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_145()
{
	if (!func_148())
	{
	}
	if (func_147())
	{
		unk_0xA9E97ADD9EE2DB2D(&(Global_1312576.f_12));
		func_146();
		unk_0xA3BC45E3C63A527C();
	}
}

void func_146()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_52);
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x42360C300250E797(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_57);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x42360C300250E797(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_57);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_48));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_147()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_148()
{
	if (!func_147())
	{
		return 0;
	}
	unk_0x783C05630CCAF363(&(Global_1312576.f_12));
	func_146();
	return unk_0x0818E99A91733016();
}

bool func_149(char* sParam0)
{
	if (!func_147())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_150(sParam0);
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12));
}

bool func_150(char* sParam0)
{
	if (!func_147())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16));
}

int func_151(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return 0;
	}
	if (func_152(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_143();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	func_142();
	func_141(bParam2);
	func_140();
	return 1;
}

bool func_152(char* sParam0, char* sParam1)
{
	if (!func_147())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return 0;
	}
	if (!unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam1) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16));
}

char* func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715())) || unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715())) || unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) || unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715())) || unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715())) || unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715())) || unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) || unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715())) || unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715())) || unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
					iVar1 = unk_0x8F474E419F56E48D(iVar0);
					if (unk_0x8CE5E4632E631B03(iVar1) && unk_0x1F41816F62350826(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_sniperrifle"), 0) && !unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_heavysniper"), 0)) && !unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715())) || unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715())) || unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) || unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715())) || unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_154(int iParam0)
{
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		if ((func_157() && !func_156()) || func_155(unk_0xD4E735F4B6A956AC(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1574631.f_13)))
		{
			if (!func_1(&(Global_1574631.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1574631.f_13));
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 9);
}

bool func_155(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

bool func_156()
{
	return Global_1312416.f_1;
}

bool func_157()
{
	return Global_1312416;
}

void func_158()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_345, 6))
	{
		unk_0xC2F50062F837BE20();
		func_455(1, 1);
		unk_0x5DE59A67B5F326CF(iLocal_353);
		unk_0xFA57C719261AA55D(&iLocal_345, 4);
		func_162();
		func_160();
		unk_0xC6B90106C92A44C9(0f, 0, 21);
		unk_0x2BCFB39E86340DAA(&iLocal_345, 6);
		func_159();
	}
}

void func_159()
{
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_7 = 0;
}

void func_160()
{
	if (Global_2413681.f_6 == unk_0xFCB3E4B16B4A9EC1())
	{
		func_161();
	}
}

void func_161()
{
	struct<28> Var0;
	
	if (unk_0x2BCD0524CDEE1FD2(Global_2413681.f_6))
	{
		if (!Global_2413681.f_6 == unk_0xFCB3E4B16B4A9EC1())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413681 = { Var0 };
	Global_2413681.f_6 = -1;
}

void func_162()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == unk_0xFCB3E4B16B4A9EC1())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_163()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1, 0))
	{
		if (func_7(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1), 0);
			return;
		}
		if (func_154(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1), 0);
			return;
		}
		func_231(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3006.f_6 = (Local_3006.f_6 + iVar0);
			if (!Global_262145.f_11387)
			{
				func_230(10, Local_3006.f_6);
			}
			Global_2460387 = iVar0;
			if (func_229())
			{
				func_217(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x976DC5C4130C36A6(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3006.f_7 = (Local_3006.f_7 + iVar1);
			func_216();
			func_164(0, unk_0xA19140A5C42D8715(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1), 0);
	}
}

int func_164(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_165(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_165(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_175(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam1))
		{
			if (unk_0x281590680327CDEA(iParam1))
			{
				uVar1 = unk_0xA2EA4BA455370F3C(iParam1);
				func_171(unk_0x505186370955851F(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_166(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_166(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_169(iParam0, 1) };
	if (iParam0 == func_168(unk_0xA19140A5C42D8715()))
	{
		func_167(1);
	}
	func_171(Var0, iParam1, 0, sParam2, uParam3);
}

void func_167(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_168(int iParam0)
{
	return iParam0;
}

Vector3 func_169(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x45AEA43E60C1F922())
	{
		Var3 = { unk_0x087F3F13CDC55984(2) };
	}
	if (iParam0 == func_170(unk_0xA19140A5C42D8715()) && unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		Var0 = { unk_0x3201284584C7CD83(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		fVar6 = unk_0x552C823E1D2A019C(iParam0);
		if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x2F230B37E9FFF23F(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_170(int iParam0)
{
	return iParam0;
}

void func_171(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437022.f_1285[iVar0 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437022.f_1285[iVar1 /*30*/] = { Param0 };
			Global_2437022.f_1285[iVar1 /*30*/].f_6 = 1;
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_174(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = unk_0xFFCC7EBF88BDEE54();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_173();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_172();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), uParam6);
		}
	}
}

int func_172()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_173()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_174(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x499324B3EF19C288(unk_0x1E8E507A99E298E6(), Param0, 1);
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

var func_175(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_176(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_176(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_215(unk_0xD4E735F4B6A956AC()) || func_214(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_262145.f_9522 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9522;
		}
	}
	else if (func_212() || func_209(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_262145.f_22640 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22640;
		}
	}
	else if (Global_262145.f_6524 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6524;
	}
	if (func_208(uParam2))
	{
	}
	if (func_207())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_205(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_204(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_202(0, &iVar1);
					break;
				
				case 3:
					func_202(1, &iVar1);
					break;
				
				case 1:
					func_200(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677623)
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
			func_197(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_186((func_196(unk_0xD4E735F4B6A956AC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x300F50ED36AA0A0C(iVar1, iParam8, iParam9);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_2 != -1)
				{
					func_197(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_181(iVar1);
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
				func_177((func_179(unk_0xD4E735F4B6A956AC()) + iVar1));
			}
			else
			{
				func_177((func_179(unk_0xD4E735F4B6A956AC()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_177(int iParam0)
{
	if (func_207())
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_5 = iParam0;
		func_178(joaat("mpply_globalxp"), iParam0);
	}
}

void func_178(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, uParam1, 1);
	}
}

int func_179(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return func_180(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_180(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x2AD48F3CEBA882E9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_181(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_129(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(&Var0))
		{
			iVar13 = func_184(func_185(&Var0));
			if (iVar13 == 0)
			{
				func_183(&Global_1378824, iParam0);
				func_182(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_183(&Global_1378825, iParam0);
				func_182(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_183(&Global_1378826, iParam0);
				func_182(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_183(&Global_1378827, iParam0);
				func_182(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_183(&Global_1378828, iParam0);
				func_182(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_182(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1378819 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1378821 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1378821 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1378822 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1378823 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1378824 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1378825 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1378826 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1378827 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1378828 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1378829 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1378830 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1378831 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1378832 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1378833 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1378834 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1378835 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_184(int iParam0)
{
	if (iParam0 == Global_1378819)
	{
		return 0;
	}
	else if (iParam0 == Global_1378820)
	{
		return 1;
	}
	else if (iParam0 == Global_1378821)
	{
		return 2;
	}
	else if (iParam0 == Global_1378822)
	{
		return 3;
	}
	else if (iParam0 == Global_1378823)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_185(var uParam0)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(uParam0))
		{
			return Global_2458119;
		}
	}
	return Global_2458119;
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	if (func_207())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_195(-1)])
				{
					unk_0x300F50ED36AA0A0C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_195(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x300F50ED36AA0A0C(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x300F50ED36AA0A0C(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_194(unk_0xD4E735F4B6A956AC()))
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_6 = func_192(iParam0, 1);
		}
		func_191(639, iParam0, -1, 1);
		func_190(640, func_192(iParam0, 1), -1, 1, 0);
		Global_1378945[func_195(-1)] = iParam0;
		func_187(7, 0);
	}
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_189(iParam0, iParam1))
	{
		iVar0 = func_188();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_188()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458086[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_189(int iParam0, var uParam1)
{
	if (Global_1312845)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312857) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_195(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_195(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_195(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_195(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_195(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_195(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_195(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_195(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_195(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_195(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_195(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_195(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_195(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_195(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_195(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_195(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_195(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_195(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_195(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_195(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_195(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_195(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_195(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_195(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_195(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_195(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_195(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_195(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_195(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_195(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_195(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_195(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_193(iParam0, 0);
}

int func_193(int iParam0, int iParam1)
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
		if (Global_287850[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_287850[iVar3] < iParam0)
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

int func_194(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_196(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_195(-1)];
			}
			else if (func_194(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_195(-1)];
	}
	return 0;
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_199(iParam0, func_195(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_198(iParam0))
	{
		func_190(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_191(iParam0, iVar0, iParam2, 1);
	}
}

int func_198(int iParam0)
{
	if (Global_1378818)
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
			case 8527:
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_195(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		iVar4 = unk_0xDF1881EF65347257(iVar0);
		if (unk_0xA08F374047C715E8(iVar4))
		{
			iVar5 = unk_0x9279C21787650C40(iVar4);
			if (unk_0xE46ECB9FD23D3264(iVar5) != -1)
			{
				if (unk_0xE46ECB9FD23D3264(iVar5) == iVar1 || func_73(unk_0xE46ECB9FD23D3264(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD4E735F4B6A956AC())
					{
						if (func_130(unk_0xD4E735F4B6A956AC(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_201(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_201(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_201(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_202(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x48908CAFF1B58FF8())
		{
			iVar3 = iVar0;
			if (unk_0xA08F374047C715E8(iVar3))
			{
				iVar4 = unk_0x9279C21787650C40(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD4E735F4B6A956AC())
					{
						iVar1++;
						if (func_130(unk_0xD4E735F4B6A956AC(), iVar4))
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
				if (iVar4 != unk_0xD4E735F4B6A956AC())
				{
					if (func_203(unk_0xD4E735F4B6A956AC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_130(unk_0xD4E735F4B6A956AC(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_201(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_201(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_203(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0x5140B71AC6379F52() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_201(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_205(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x69E48309C7AE810E(iParam0) > func_196(unk_0xD4E735F4B6A956AC()))
		{
			iParam0 = -func_196(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_206(8000, 0, 0) > 0)
	{
		if (func_206(8000, 0, 0) < (iParam0 + func_196(unk_0xD4E735F4B6A956AC())))
		{
			iParam0 = (func_206(8000, 0, 0) - func_196(unk_0xD4E735F4B6A956AC()));
		}
	}
	return iParam0;
}

int func_206(int iParam0, bool bParam1, int iParam2)
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
	return Global_287850[iParam0];
}

int func_207()
{
	return 1;
}

int func_208(var uParam0)
{
	if (unk_0x7032042E5696FFD7(uParam0))
	{
		return 1;
	}
	else if (unk_0x3CAC2741CC1A631F(uParam0, "") || unk_0x3CAC2741CC1A631F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	return func_210(func_211(iParam0));
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_211(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

bool func_212()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_61();
	}
	return func_213(Global_4456448.f_130782);
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5002[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_214(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_215(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_216()
{
	Global_2459729 = 1;
}

void func_217(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_229())
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
				func_218(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_218(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_218(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_218(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_218(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_229())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_16()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_225(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_224(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_219(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_220(iParam0);
	}
}

void func_220(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_229())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_223(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_221(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_221(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_222(&(uParam0->f_13));
	func_222(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_222(var uParam0)
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

int func_223(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_224(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_225(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_229())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = uParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = uParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = uParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = uParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_226(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_226(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam80 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -313275313;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = { Param0.f_61 };
	Var0.f_2.f_32 = iParam80;
	iVar35 = func_228(Var0.f_1);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_227();
		unk_0x04F37AFC39D93909(1, &Var0, 35, iVar35);
	}
}

void func_227()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_228(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_229()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_230(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23348 == 0 || Global_262145.f_23348 == 1)
		{
			if (!unk_0x47C01C0E6F4C1D06() || Global_262145.f_23348 == 1)
			{
				Global_2524719.f_272 = iParam0;
				if (iParam1 > Global_262145.f_6473)
				{
					iParam1 = Global_262145.f_6473;
				}
				Global_2524719.f_273 = iParam1;
				Global_2524719.f_274 = 0;
			}
		}
	}
}

void func_231(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0xD60943E3BE730BF0(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_654.f_1 - iLocal_343)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11322)
		{
			iVar1 = Global_262145.f_11322;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_269() * iVar1);
		*uParam1 = (func_268() * iVar1);
		fVar2 = func_267();
		if (fVar2 > 0f && !unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_266())
			{
				iVar3 = func_266();
			}
			iVar4 = Local_654.f_51;
			if (iVar4 > func_265())
			{
				iVar4 = func_265();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_258(func_264(), func_263(), iVar3, fVar2, func_262(), func_261(), func_260(), iVar4)) * Global_262145.f_11335)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_258(func_257(), func_256(), iVar3, fVar2, func_262(), func_261(), func_260(), iVar4)) * Global_262145.f_11336)));
		}
		else
		{
			func_254(1);
		}
	}
	else
	{
		func_254(0);
	}
	func_232(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_232(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_253())
		{
			if (func_252(0))
			{
				if (!func_248(0))
				{
					if (unk_0xC77FA683E9BB485B(func_247()))
					{
						if (func_246() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_246());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_244(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_237("GB_BCUT_TICK1", func_247(), iVar0, 0, 0, 1, 1);
						}
						func_236(20);
						func_233(func_247(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_233(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 2084031113;
		Var0.f_1 = unk_0xD4E735F4B6A956AC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_235(iParam0);
		func_234(&(Var0.f_6), &(Var0.f_7));
		unk_0x04F37AFC39D93909(1, &Var0, 8, func_228(iParam0));
	}
}

void func_234(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_235(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_237(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		if (unk_0x429D45A6C6520026(&Var1))
		{
		}
		unk_0x59FF6261546DDD52(sParam0);
		unk_0xBA9FB571BCB6C1BD(func_66(iParam1, -2, 1, 0, 0));
		unk_0xC327C023FDA37F2E(func_242(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xBA9FB571BCB6C1BD(iParam3);
		}
		unk_0xCDA87E1DA52C8C9D(iParam2);
		iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		func_238(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_238(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_241() || !unk_0xD8B89B387D170E27()) || !func_14(unk_0xD4E735F4B6A956AC(), 0))
	{
		return;
	}
	iVar0 = func_239(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1663381.f_5[iVar0 /*53*/] = iParam0;
		Global_1663381.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1663381.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1663381.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1663381.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1663381.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1663381.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_240(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1663381++;
	if (Global_1663381 > 5)
	{
		Global_1663381 = 5;
		return Global_1663381;
	}
	return (Global_1663381 - 1);
}

void func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_241()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

var func_242(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_243(&cVar0);
}

var func_243(char[4] cParam0)
{
	return cParam0;
}

void func_244(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_245(1);
	}
	else
	{
		iVar1 = func_245(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_245(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_246()
{
	return Global_262145.f_12276;
}

int func_247()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

bool func_248(bool bParam0)
{
	return func_249(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_249(int iParam0, bool bParam1)
{
	return func_250(iParam0, bParam1, 1);
}

int func_250(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_251(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_96() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, int iParam1)
{
	if (iParam0 != func_96())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_96())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(bool bParam0)
{
	return func_84(unk_0xD4E735F4B6A956AC(), bParam0);
}

bool func_253()
{
	return func_85(unk_0xD4E735F4B6A956AC());
}

void func_254(bool bParam0)
{
	if (bParam0)
	{
		if (func_255(1))
		{
			unk_0x2BCFB39E86340DAA(&Global_1574656, 1);
		}
	}
	else if (func_255(2))
	{
		unk_0x2BCFB39E86340DAA(&Global_1574656, 2);
	}
}

int func_255(int iParam0)
{
	var uVar0;
	
	uVar0 = func_199(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x05EFB6A616B6FADE(uVar0, 0) && unk_0x05EFB6A616B6FADE(iVar0, 1)) && unk_0x05EFB6A616B6FADE(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x05EFB6A616B6FADE(iVar0, 3) && unk_0x05EFB6A616B6FADE(iVar0, 4)) && unk_0x05EFB6A616B6FADE(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x05EFB6A616B6FADE(iVar0, 6) && unk_0x05EFB6A616B6FADE(iVar0, 7)) && unk_0x05EFB6A616B6FADE(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x05EFB6A616B6FADE(iVar0, 9) && unk_0x05EFB6A616B6FADE(iVar0, 10)) && unk_0x05EFB6A616B6FADE(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_256()
{
	return Global_262145.f_10822;
}

int func_257()
{
	return Global_262145.f_10820;
}

int func_258(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_259(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_259(int iParam0, int iParam1, int iParam2)
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

float func_260()
{
	return Global_262145.f_10825;
}

float func_261()
{
	return Global_262145.f_10824;
}

float func_262()
{
	return Global_262145.f_10823;
}

int func_263()
{
	return Global_262145.f_10821;
}

int func_264()
{
	return Global_262145.f_10819;
}

int func_265()
{
	return Global_262145.f_11227;
}

int func_266()
{
	return Global_262145.f_11226;
}

var func_267()
{
	if (func_20(0))
	{
		return Global_262145.f_10846;
	}
	if (func_20(1))
	{
		return Global_262145.f_10847;
	}
	if (func_20(2))
	{
		return Global_262145.f_10848;
	}
	return Global_262145.f_10849;
}

int func_268()
{
	return Global_262145.f_10818;
}

int func_269()
{
	return Global_262145.f_10817;
}

void func_270()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1, 1) && (func_282() || unk_0x05EFB6A616B6FADE(Local_654.f_2, 0)))
	{
		if (func_64(func_281()))
		{
			func_280();
		}
		if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
			{
				if (func_319(0))
				{
					iVar2 = Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4;
					func_276(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_274(64, func_275(Local_654.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_380(Local_654.f_3), 1, 2, -1);
						}
						else if (func_273())
						{
							func_274(69, func_275(Local_654.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_380(Local_654.f_3), 1, 2, -1);
						}
						else
						{
							func_274(64, func_275(Local_654.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_380(Local_654.f_3), 1, 2, -1);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_274(67, func_275(Local_654.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_380(Local_654.f_3), 1, 2, -1);
						}
						else if (func_273())
						{
							func_274(75, func_275(Local_654.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_654.f_3), 1, 2, -1);
						}
						else
						{
							func_274(67, func_275(Local_654.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_654.f_3), 1, 2, -1);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_274(67, func_275(Local_654.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_380(Local_654.f_3), 1, 2, -1);
						}
						else if (func_273())
						{
							func_274(75, func_275(Local_654.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_654.f_3), 1, 2, -1);
						}
						else
						{
							func_274(67, func_275(Local_654.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_654.f_3), 1, 2, -1);
						}
					}
					else
					{
						uVar3 = unk_0xDF1881EF65347257(Local_654.f_4[0]);
						if (unk_0xA08F374047C715E8(uVar3))
						{
							iVar4 = unk_0x9279C21787650C40(iVar3);
							if (Local_2621[Local_654.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2621[Local_654.f_4[0] /*12*/].f_4;
							func_276(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_272(76, func_96(), func_275(Local_654.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_380(Local_654.f_3), -1, fVar1, 1, 2, unk_0xB330C43B9B7B1724(iVar4));
							}
							else if (func_273())
							{
								func_272(77, func_96(), func_275(Local_654.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_380(Local_654.f_3), iVar0, -1082130432, 1, 2, unk_0xB330C43B9B7B1724(iVar4));
							}
							else
							{
								func_272(76, func_96(), func_275(Local_654.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_380(Local_654.f_3), iVar0, -1082130432, 1, 2, unk_0xB330C43B9B7B1724(iVar4));
							}
						}
					}
				}
				else
				{
					func_50(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1);
				}
			}
			else
			{
				func_49("", "", 1);
			}
			unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1), 1);
			func_271(133);
		}
	}
}

void func_271(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_272(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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
	func_97(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_51(&Var0);
}

int func_273()
{
	return 0;
}

int func_274(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_97(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != -1)
	{
		unk_0x2BCFB39E86340DAA(&(Var0.f_69), iParam10);
	}
	return func_51(&Var0);
}

char* func_275(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xED306E4067508929())
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
			if (unk_0xED306E4067508929())
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

int func_276(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_277(Local_654.f_3, iParam2) / 10f);
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

float func_277(int iParam0, int iParam1)
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
			if (unk_0xED306E4067508929())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_279(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xED306E4067508929())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_278(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_278(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_279(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_280()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

int func_281()
{
	return Global_2437022.f_2704[0 /*80*/].f_1;
}

bool func_282()
{
	return unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 25);
}

int func_283(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_293()) && !(func_104(unk_0xD4E735F4B6A956AC(), 0) && (func_100(unk_0xD4E735F4B6A956AC()) || func_292(unk_0xD4E735F4B6A956AC())))) && !func_290(unk_0xD4E735F4B6A956AC()))
	{
		func_289();
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
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 25);
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4574), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_288(uParam0, 1);
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
				func_285();
				func_288(uParam0, 2);
			}
			break;
		
		case 2:
			func_285();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_284("AMEV_LBD_HELP"))
				{
					unk_0x135C61E339DABBAC(1);
				}
				func_288(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xFA57C719261AA55D(&(Global_2524719.f_4574), 1);
				func_288(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xFA57C719261AA55D(&(Global_2524719.f_4574), 1);
			return 1;
	}
	return 0;
}

bool func_284(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_285()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 0))
	{
		if (((((!unk_0x49B680F5AF4359D0() && !unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 2)) && func_12(unk_0xD4E735F4B6A956AC(), 1, 1)) && !Global_68494) && !Global_53362) && !unk_0x71364F510A1CB69F())
		{
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4574), 1);
			func_287("AMEV_LBD_HELP", -1);
			func_286(1);
			unk_0xFA57C719261AA55D(&(Global_2524719.f_4574), 0);
		}
	}
}

void func_286(int iParam0)
{
	unk_0xC01188479296013C(3, 21, 200, 0, 0);
	if (iParam0 && !func_293())
	{
		unk_0xE11F00B4AC919F45(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_287(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 0, iParam1);
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_289()
{
	Global_2459730 = 1;
}

int func_290(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_291(int iParam0)
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
	}
	return -1;
}

bool func_292(int iParam0)
{
	return func_99(iParam0, 19);
}

bool func_293()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

void func_294()
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
	
	if (Local_654.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_316() && !func_94(unk_0xD4E735F4B6A956AC()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_96();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_654.f_4[iVar16] > -1)
			{
				uVar30 = unk_0xDF1881EF65347257(Local_654.f_4[iVar16]);
				if (unk_0xA08F374047C715E8(uVar30))
				{
					iVar4 = unk_0x9279C21787650C40(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2621[Local_654.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_276(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2621[Local_654.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_252(1))
								{
									if (func_84(iVar4, 1))
									{
										uVar26[iVar16] = func_66(iVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0xD60943E3BE730BF0();
		if (func_94(unk_0xD4E735F4B6A956AC()))
		{
			uVar31 = func_314();
			iVar32 = unk_0x77065AD41B64E946(uVar31);
			if (unk_0xC77FA683E9BB485B(iVar32))
			{
				iVar33 = unk_0x679C4D4E80CF78DB(iVar32);
				if (unk_0xA08F374047C715E8(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_276(&iVar13, &fVar18, iLocal_347, 1);
		func_276(&iVar14, &fVar19, Local_2621[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_518(&(Local_654.f_39), 0, 0);
		iVar15 = func_516(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_313(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0x05EFB6A616B6FADE(iLocal_345, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_316() || Local_654.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_654.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_309(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_275(Local_654.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_310(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_273())
		{
			func_308(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_310(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_299(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_275(Local_654.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_310(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_295();
	}
}

void func_295()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_298();
	if (fVar0 >= 0f)
	{
		if (Local_654.f_37 == 3)
		{
			if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
				{
					iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iVar1, 0))
					{
						func_297(iVar1, &fLocal_351);
						fVar2 = (fVar0 + fLocal_351);
						unk_0xC6B90106C92A44C9(fVar2, 1, 21);
						func_296(fVar0);
						return;
					}
				}
			}
		}
		if (func_284("AMCH_FLYLOW"))
		{
			unk_0x135C61E339DABBAC(1);
		}
		if (unk_0x05EFB6A616B6FADE(iLocal_345, 4))
		{
			unk_0x5DE59A67B5F326CF(iLocal_353);
			unk_0xFA57C719261AA55D(&iLocal_345, 4);
		}
		unk_0xC6B90106C92A44C9(0f, 0, 21);
	}
}

void func_296(float fParam0)
{
	float fVar0;
	
	if (unk_0x3A1E63ED28064865(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_519(6);
			if (!unk_0x05EFB6A616B6FADE(iLocal_345, 4))
			{
				unk_0xE11F00B4AC919F45(iLocal_353, "Altitude_Warning", "EXILE_1", 1);
				unk_0x2BCFB39E86340DAA(&iLocal_345, 4);
			}
		}
		else
		{
			if (func_284("AMCH_FLYLOW"))
			{
				unk_0x135C61E339DABBAC(1);
			}
			if (unk_0x05EFB6A616B6FADE(iLocal_345, 4))
			{
				unk_0x5DE59A67B5F326CF(iLocal_353);
				unk_0xFA57C719261AA55D(&iLocal_345, 4);
			}
		}
	}
}

float func_297(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	unk_0x8F7BA8E028ADF980(Var1, uParam1, 1, 0);
	unk_0x8F7BA8E028ADF980(Var1, &uVar4, 0, 0);
	if (unk_0x8A9A54005DB55C4F())
	{
		func_519(3);
		unk_0x2BCFB39E86340DAA(&iLocal_345, 10);
		func_27(&uLocal_341, 0, 0);
	}
	else if (unk_0x05EFB6A616B6FADE(iLocal_345, 10))
	{
		if (func_1(&uLocal_341, 2000, 0))
		{
			unk_0xFA57C719261AA55D(&iLocal_345, 10);
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

float func_298()
{
	switch (Local_654.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_305(0) == 0)
	{
		return;
	}
	func_304();
	iVar1 = 0;
	if (((Global_2459257[0] != iParam0 || Global_2459257[1] != iParam1) || Global_2459257[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2459257[0] = iParam0;
	Global_2459257[1] = iParam1;
	Global_2459257[2] = iParam2;
	Global_2459257[3] = 0;
	Global_2459257[4] = 0;
	if (Global_2459257[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[0]);
			Global_2459263[0 /*16*/] = { func_303(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_300(iParam3, &(Global_2459263[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2459257[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[1]);
			Global_2459263[1 /*16*/] = { func_303(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_300(iParam4, &(Global_2459263[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2459257[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[2]);
			Global_2459263[2 /*16*/] = { func_303(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_300(iParam5, &(Global_2459263[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_300(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xD4E735F4B6A956AC() != func_96())
			{
				if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
				{
					func_300(iParam7, unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_300(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_300(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_208(sParam14))
	{
		sVar2 = sParam14;
	}
	func_135(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_134();
}

void func_300(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
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
			if (func_137(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_136(6, iVar0);
		Global_1369750.f_3781[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_3781.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_3781.f_183[iVar0] = iParam3;
		Global_1369750.f_3781.f_172[iVar0] = iParam2;
		Global_1369750.f_3781.f_260[iVar0] = iParam4;
		Global_1369750.f_3781.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1369750.f_3781.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1369750.f_3781.f_443[iVar0] = iParam7;
		Global_1369750.f_3781.f_454[iVar0] = fParam8;
		Global_1369750.f_3781.f_497[iVar0] = iParam9;
		Global_1369750.f_3781.f_508[iVar0] = iParam10;
		Global_1369750.f_3781.f_205[iVar0] = iParam11;
		Global_1369750.f_3781.f_216[iVar0] = iParam12;
		Global_1369750.f_3781.f_227[iVar0] = iParam13;
		Global_1369750.f_3781.f_238[iVar0] = iParam14;
		Global_1369750.f_3781.f_249[iVar0] = iParam15;
		Global_1369750.f_3781.f_519[iVar0] = iParam16;
		Global_1369750.f_3781.f_530[iVar0] = iParam17;
		Global_1369750.f_3781.f_541[iVar0] = iParam18;
		Global_1369750.f_3781.f_552[iVar0] = iParam19;
		Global_1369750.f_3781.f_563[iVar0] = iParam20;
		Global_1369750.f_3781.f_574[iVar0] = iParam21;
		Global_1369750.f_3781.f_585[iVar0] = iParam22;
		Global_1369750.f_3781.f_596[iVar0] = iParam23;
		Global_1369750.f_3781.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_302())
		{
			Global_1369750.f_1088 = 1;
		}
		if (unk_0x47C01C0E6F4C1D06())
		{
			iVar2 = 0;
			unk_0x359669D87D0E343F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1369750.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1369750.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1369750.f_1088 = 1;
			}
			if (func_301())
			{
				Global_1369750.f_1092 = 1;
			}
		}
	}
}

int func_301()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x359669D87D0E343F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_302()
{
	if (((unk_0x346268472B5F4E43() == 8 || unk_0x346268472B5F4E43() == 9) || unk_0x346268472B5F4E43() == 10) || unk_0x346268472B5F4E43() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_303(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x08791BD93D5986C6("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x08791BD93D5986C6("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x08791BD93D5986C6("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x08791BD93D5986C6("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x08791BD93D5986C6("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_304()
{
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(7);
	Global_2459733 = 1;
}

int func_305(bool bParam0)
{
	if (func_307())
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_306()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

bool func_307()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 12);
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_305(0) == 0)
	{
		return;
	}
	func_304();
	iVar1 = 0;
	if (((Global_2459257[0] != iParam0 || Global_2459257[1] != iParam1) || Global_2459257[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2459257[0] = iParam0;
	Global_2459257[1] = iParam1;
	Global_2459257[2] = iParam2;
	Global_2459257[3] = 0;
	Global_2459257[4] = 0;
	if (Global_2459257[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[0]);
			Global_2459263[0 /*16*/] = { func_303(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_135(iParam3, &(Global_2459263[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_2459257[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[1]);
			Global_2459263[1 /*16*/] = { func_303(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_135(iParam4, &(Global_2459263[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_2459257[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[2]);
			Global_2459263[2 /*16*/] = { func_303(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_135(iParam5, &(Global_2459263[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_135(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0xD4E735F4B6A956AC() != func_96())
			{
				if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
				{
					func_135(iParam7, unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_135(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_135(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_208(sParam13))
	{
		sVar2 = sParam13;
	}
	func_135(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_134();
}

void func_309(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_305(0) == 0)
	{
		return;
	}
	func_304();
	iVar1 = 0;
	if (((Global_2459257[0] != iParam0 || Global_2459257[1] != iParam1) || Global_2459257[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2459257[0] = iParam0;
	Global_2459257[1] = iParam1;
	Global_2459257[2] = iParam2;
	Global_2459257[3] = 0;
	Global_2459257[4] = 0;
	if (Global_2459257[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[0]);
			Global_2459263[0 /*16*/] = { func_303(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_300(-1, &(Global_2459263[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2459257[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[1]);
			Global_2459263[1 /*16*/] = { func_303(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_300(-1, &(Global_2459263[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2459257[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB330C43B9B7B1724(Global_2459257[2]);
			Global_2459263[2 /*16*/] = { func_303(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_300(-1, &(Global_2459263[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_300(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xD4E735F4B6A956AC() != func_96())
			{
				if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
				{
					func_300(-1, unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_300(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_154(unk_0xD4E735F4B6A956AC()) == 0)
			{
				func_300(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_208(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_135(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_134();
}

char* func_310()
{
	return "HUD_COUNTDOWN";
	switch (func_312(unk_0xD4E735F4B6A956AC()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_311())
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

int func_311()
{
	if (func_312(unk_0xD4E735F4B6A956AC()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

int func_312(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

void func_313(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xDE089748C4C76C96())
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 0))
		{
			if (!unk_0x429D45A6C6520026(&(Global_2524719.f_4722)))
			{
				unk_0xBF77A2D4080265E9(&(Global_2524719.f_4722));
			}
			unk_0x2A22FF5D4ECD503A(1);
			unk_0x9444470D6D9ADB88("FM_COUNTDOWN_30S_FIRA");
			unk_0x5AD7D03C214BDA88("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
			unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 0);
			unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 0);
			if (Global_2524719.f_4730 > -1)
			{
				unk_0xB4442316D0B880FD(Global_2524719.f_4730);
				Global_2524719.f_4730 = -1;
			}
			Global_2524719.f_4720 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 0))
		{
			if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 4))
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 2))
				{
					if (unk_0x84316367370E4311())
					{
						if ((!unk_0x3CAC2741CC1A631F(unk_0x13B011674250FA98(unk_0x7D8590E7AD7006E8()), "OFF") && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) && !unk_0x429D45A6C6520026(&(Global_2524719.f_4722)))
						{
							StringCopy(&(Global_2524719.f_4722), "", 32);
							unk_0x9444470D6D9ADB88("FM_COUNTDOWN_30S_FIRA");
							unk_0x5AD7D03C214BDA88("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
							unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 0);
							unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 0);
							unk_0x2A22FF5D4ECD503A(1);
							unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 2);
						}
					}
				}
				else if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 5))
				{
					unk_0xBF77A2D4080265E9("OFF");
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x9444470D6D9ADB88("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x9444470D6D9ADB88("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x9444470D6D9ADB88("FM_COUNTDOWN_30S");
				}
				unk_0x8969D02DEDC106D2("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 1);
			}
			else if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xF4CB7412E80A8AD0() != 0)
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0x05B17F7C7765436A())
						{
							StringCopy(&(Global_2524719.f_4722), unk_0x17AC7CEAC627EA75(), 32);
							unk_0xBF77A2D4080265E9("OFF");
						}
						unk_0x2A22FF5D4ECD503A(1);
						unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 3))
				{
					Global_2524719.f_4730 = unk_0x7A3ECD08D6D1D554();
					unk_0xE11F00B4AC919F45(Global_2524719.f_4730, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 0))
			{
				Global_2524719.f_4720 = 0;
				Global_2524719.f_4730 = -1;
				unk_0x7B5129A25EE58E36("FM_COUNTDOWN_30S_KILL");
				unk_0x2A22FF5D4ECD503A(0);
				unk_0x9444470D6D9ADB88("FM_PRE_COUNTDOWN_30S");
				unk_0x0B756FF7161B9AB0("DisableFlightMusic", 1);
				unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 1);
				unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 1);
				unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 0);
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 2))
				{
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 2);
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 5);
				}
				else
				{
					unk_0xFA57C719261AA55D(&(Global_2524719.f_4720), 5);
					unk_0xFA57C719261AA55D(&(Global_2524719.f_4720), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 0))
		{
			Global_2524719.f_4720 = 0;
			Global_2524719.f_4730 = -1;
			unk_0x7B5129A25EE58E36("FM_COUNTDOWN_30S_KILL");
			unk_0x2A22FF5D4ECD503A(0);
			unk_0x9444470D6D9ADB88("FM_PRE_COUNTDOWN_30S");
			unk_0x0B756FF7161B9AB0("DisableFlightMusic", 1);
			unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 1);
			unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 1);
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 0);
			if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 2);
				unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 5);
			}
			else
			{
				unk_0xFA57C719261AA55D(&(Global_2524719.f_4720), 2);
				unk_0xFA57C719261AA55D(&(Global_2524719.f_4720), 5);
			}
		}
	}
}

var func_314()
{
	if (unk_0xDC5D81351D6A4DDB(func_315()))
	{
		return func_315();
	}
	return func_91();
}

var func_315()
{
	return Global_2359302.f_3;
}

int func_316()
{
	switch (Local_654.f_3)
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

void func_317()
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
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		Local_742.f_534[iVar0 /*42*/] = { Var1 };
		Local_742.f_534[iVar0 /*42*/].f_1 = func_96();
		if (Local_654.f_4[iVar0] > -1)
		{
			uVar44 = unk_0xDF1881EF65347257(Local_654.f_4[iVar0]);
			if (unk_0xA08F374047C715E8(uVar44))
			{
				iVar43 = unk_0x9279C21787650C40(iVar44);
				if (!func_14(iVar43, 0))
				{
					Local_742.f_534[iVar0 /*42*/] = Local_654.f_4[iVar0];
					Local_742.f_534[iVar0 /*42*/].f_1 = iVar43;
					Local_742.f_534[iVar0 /*42*/].f_9 = Local_2621[Local_654.f_4[iVar0] /*12*/].f_4;
					Local_742.f_534[iVar0 /*42*/].f_31 = -1;
					Local_742.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_318()
{
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1723), 19);
}

int func_319(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_654.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2621[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_320()
{
}

void func_321()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_276(&iVar1, &fVar2, iLocal_347, 1);
	switch (Local_654.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_323(sVar0, fVar2 >= 70f);
			if (unk_0x2F8EAF18929E1E59(sVar0))
			{
				fVar2 = func_322(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x60DA182D61035BA9(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x19F3A25F971B9641();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_323(sVar0, bVar3);
			if (unk_0x2F8EAF18929E1E59(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_322(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_322(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x60DA182D61035BA9(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_352 != iLocal_347)
			{
				if (iLocal_347 > 0)
				{
					unk_0xE11F00B4AC919F45(iLocal_354, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x5D311B11B00F19D4(iLocal_354, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xE11F00B4AC919F45(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_352 = iLocal_347;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_345, 3))
		{
			if (func_248(1))
			{
				unk_0xE11F00B4AC919F45(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xE11F00B4AC919F45(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x2BCFB39E86340DAA(&iLocal_345, 3);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(iLocal_345, 3))
	{
		if (func_248(1))
		{
			unk_0xE11F00B4AC919F45(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xE11F00B4AC919F45(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0xFA57C719261AA55D(&iLocal_345, 3);
	}
}

float func_322(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_323(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x2F8EAF18929E1E59(sParam0))
		{
			unk_0x8969D02DEDC106D2(sParam0);
		}
	}
	else if (unk_0x2F8EAF18929E1E59(sParam0))
	{
		unk_0x5AD7D03C214BDA88(sParam0);
	}
}

void func_324()
{
	int iVar0;
	
	if ((!func_154(unk_0xD4E735F4B6A956AC()) && !func_14(unk_0xD4E735F4B6A956AC(), 0)) && func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		iVar0 = func_345();
		if (iVar0 != Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_344) || func_344(iVar0, iLocal_344))
			{
				if (!func_343() || func_1(&uLocal_333, 1000, 0))
				{
					func_27(&uLocal_333, 0, 0);
					iLocal_344 = iVar0;
					Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4 = iVar0;
					func_327();
					if (iLocal_343 == 0)
					{
						iLocal_343 = unk_0xFFCC7EBF88BDEE54();
					}
					if (Local_3006.f_11 == 0)
					{
						Local_3006.f_11 = unk_0x5E0F2F352218B916();
					}
				}
			}
		}
		iLocal_347 = func_325();
	}
}

int func_325()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_654.f_3)
	{
		case 0:
			fVar1 = unk_0xAEE0C21B9FCD105B();
			break;
		
		case 1:
			fVar1 = unk_0x446571F0001497C5();
			break;
		
		case 2:
			fVar1 = unk_0x19F3A25F971B9641();
			break;
		
		case 3:
			fVar1 = unk_0xBB75944E0C26EED1();
			break;
		
		case 4:
			fVar1 = unk_0x96302E1532E6B9A6();
			break;
		
		case 5:
			fVar1 = unk_0xFA684C6133F8EFFB();
			break;
		
		case 8:
			iVar0 = unk_0xF8206DADE21A1462();
			break;
		
		case 9:
			fVar1 = unk_0x822071EE34344F78();
			break;
		
		case 11:
			fVar1 = unk_0x1D481EFB9175F67C();
			break;
		
		case 12:
			fVar1 = unk_0x1D481EFB9175F67C();
			break;
		
		case 13:
			fVar1 = unk_0x3944F499B2454892();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x69E48309C7AE810E(iVar0);
	func_326(&iVar2);
	if (iVar2 == iLocal_346)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_345, 1))
			{
				func_27(&uLocal_335, 0, 0);
				Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4.f_2 = func_518(&uLocal_335, 0, 0);
				unk_0x2BCFB39E86340DAA(&iLocal_345, 1);
			}
			else if ((func_518(&uLocal_335, 0, 0) % 1000) == 0)
			{
				Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4.f_2 = func_518(&uLocal_335, 0, 0);
			}
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&iLocal_345, 1);
	}
	if ((func_21(iLocal_346, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_337, 2000, 0))
	{
		iVar2 = iLocal_346;
		unk_0x2BCFB39E86340DAA(&iLocal_345, 2);
	}
	else
	{
		iLocal_346 = iVar2;
		func_44(&uLocal_337);
		unk_0xFA57C719261AA55D(&iLocal_345, 2);
	}
	return iVar2;
}

void func_326(int iParam0)
{
	switch (Local_654.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if ((((unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715()) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715())) || unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) || unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715())) || unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715()))
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

void func_327()
{
	if (!unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1, 2))
	{
		unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_1), 2);
		func_328(1);
	}
}

void func_328(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 7))
		{
			if ((!func_98(unk_0xD4E735F4B6A956AC()) && !func_7(unk_0xD4E735F4B6A956AC())) && !func_154(unk_0xD4E735F4B6A956AC()))
			{
				if (func_157())
				{
					func_336(0);
					func_335();
				}
				if (func_334(0))
				{
					uVar0 = func_199(2480, -1, 0);
					unk_0xFA57C719261AA55D(&uVar0, 0);
					func_335();
				}
				if (func_334(func_333(func_312(unk_0xD4E735F4B6A956AC()))))
				{
					uVar0 = func_199(2480, -1, 0);
					unk_0xFA57C719261AA55D(&uVar0, func_333(func_312(unk_0xD4E735F4B6A956AC())));
					func_335();
				}
				if (func_332())
				{
					func_335();
				}
				if (func_312(unk_0xD4E735F4B6A956AC()) > -1)
				{
					unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 7);
					if (func_312(unk_0xD4E735F4B6A956AC()) == 236)
					{
						func_331();
					}
				}
			}
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 7))
	{
		unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 7);
		func_329();
	}
}

void func_329()
{
	if (func_330())
	{
		unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 17);
	}
}

bool func_330()
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 17);
}

void func_331()
{
	if (!func_330())
	{
		Global_2524719.f_6234 = unk_0xFFCC7EBF88BDEE54();
		unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 17);
	}
}

int func_332()
{
	if (Global_2437022.f_1151.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_333(int iParam0)
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
	return Global_262145.f_23493;
}

bool func_334(int iParam0)
{
	var uVar0;
	
	uVar0 = func_199(2480, -1, 0);
	return unk_0x05EFB6A616B6FADE(uVar0, iParam0);
}

void func_335()
{
	if (func_332())
	{
		Global_2437022.f_1151.f_16 = 1;
	}
}

void func_336(int iParam0)
{
	if (func_157())
	{
		if (iParam0 == 1)
		{
			if (Global_2524719.f_4382 == -1)
			{
				Global_2524719.f_4382 = 60000;
			}
			func_27(&(Global_2524719.f_4380), 0, 0);
			if (Global_2524719.f_4385 == -1)
			{
				Global_2524719.f_4385 = 10000;
			}
			func_27(&(Global_2524719.f_4383), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_8 = 0;
			func_342(1);
		}
		if ((!unk_0xD8B89B387D170E27() && !func_341()) && !func_337(unk_0xD4E735F4B6A956AC()))
		{
			Global_968392 = 0;
		}
	}
}

int func_337(int iParam0)
{
	if (func_338(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_339(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_339(int iParam0)
{
	return func_340(iParam0);
}

bool func_340(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

bool func_341()
{
	return Global_2448386.f_729;
}

void func_342(bool bParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_157())
		{
			if (func_12(unk_0xD4E735F4B6A956AC(), 1, 0))
			{
				unk_0xC35C0EB12F3FFC86(unk_0xA19140A5C42D8715(), 1);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 342, 0);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 122, 0);
			}
			unk_0xF3C4177B039F638B(unk_0xD4E735F4B6A956AC(), 1f);
			unk_0xD550690FAE7D7C3E(0);
			unk_0x28CB770DF80421E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xFC5473B7F86C369D(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				unk_0xC35C0EB12F3FFC86(unk_0xA19140A5C42D8715(), 0);
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 342, 1);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 122, 1);
				unk_0xF3C4177B039F638B(unk_0xD4E735F4B6A956AC(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xFC5473B7F86C369D(1, 0);
				}
			}
			unk_0xD550690FAE7D7C3E(1);
			unk_0x28CB770DF80421E9(0);
		}
	}
}

int func_343()
{
	switch (Local_654.f_3)
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

int func_344(int iParam0, int iParam1)
{
	if (Local_654.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_345()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_360())
	{
		if (Local_654.f_3 == 14)
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_359(unk_0xA19140A5C42D8715(), 0) == -1)
			{
				iVar2 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
				if ((!func_358(&iVar2, 0) || unk_0x8F474E419F56E48D(iVar2) != joaat("dodo")) && unk_0x26D28D230F871E8D(iVar2))
				{
					func_351(Local_654.f_3 != 14, 1, 0);
					if (func_350())
					{
						iVar3 = func_349();
						if (iVar3 >= 0)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_8[func_348(iVar3)], func_347(iVar3)))
							{
								iLocal_348++;
								unk_0x2BCFB39E86340DAA(&(Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_8[func_348(iVar3)]), func_347(iVar3));
							}
						}
					}
					iVar0 = iLocal_348;
				}
			}
		}
		else
		{
			iVar0 = func_346();
		}
	}
	else
	{
		unk_0x7A07FA8154875FD1(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x69E48309C7AE810E(iVar0);
}

int func_346()
{
	switch (Local_654.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_347(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_348(iParam0) * 31);
}

int func_348(int iParam0)
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

int func_349()
{
	return iLocal_110;
}

int func_350()
{
	if (iLocal_117 == 1)
	{
		iLocal_117 = 0;
		return 1;
	}
	return 0;
}

void func_351(bool bParam0, bool bParam1, int iParam2)
{
	func_353(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_318.f_2 < Local_321.f_2)
		{
			Local_318.f_2 = 0f;
		}
		else
		{
			Local_321.f_2 = 0f;
		}
		if (Local_324.f_2 < Local_327.f_2)
		{
			Local_324.f_2 = 0f;
		}
		else
		{
			Local_327.f_2 = 0f;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), Local_121[iLocal_110 /*3*/]) < fLocal_317)
				{
					if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()) || unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
					{
						if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
						{
							if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0))
							{
								bLocal_112 = true;
								iLocal_111 = 1;
							}
							if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
							{
								bLocal_113 = true;
								iLocal_111 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()) && !unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
				{
					func_352();
				}
				else if (!unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
				{
					func_352();
				}
				else if (!unk_0x26D28D230F871E8D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) && !bParam1)
				{
					func_352();
				}
				if (bLocal_112)
				{
					if (iLocal_116)
					{
						if (iLocal_115)
						{
							if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
							{
								func_352();
								iLocal_117 = 1;
							}
						}
						else if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
						{
							iLocal_115 = 1;
						}
						else if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
						{
							func_352();
						}
					}
					else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
					{
						iLocal_116 = 1;
					}
					else if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
					{
						func_352();
					}
				}
				else if (bLocal_113)
				{
					if (iLocal_116)
					{
						if (iLocal_114)
						{
							if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
							{
								func_352();
								iLocal_117 = 1;
							}
						}
						else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
						{
							iLocal_114 = 1;
						}
						else if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
						{
							func_352();
						}
					}
					else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
					{
						iLocal_116 = 1;
					}
					else if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_318, Local_321, fLocal_330, 0, 1, 0) && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), Local_324, Local_327, fLocal_330, 0, 1, 0))
					{
						func_352();
					}
				}
			}
			break;
	}
}

void func_352()
{
	bLocal_112 = false;
	bLocal_113 = false;
	iLocal_114 = 0;
	iLocal_115 = 0;
	iLocal_116 = 0;
	iLocal_111 = 0;
}

void func_353(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_118 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_357(iVar0)) && (uParam1 || !func_356(iVar0)))
		{
			if (func_355(Local_118, Local_121[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_118, Local_121[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_110 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_354(iLocal_110);
}

void func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_318 = { 1103.014f, -233.0374f, 56.13004f };
			Local_321 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_330 = 30f;
			Local_324 = { 1093.589f, -248.5926f, 56.88639f };
			Local_327 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_318 = { 1044.182f, -324.5904f, 49.33408f };
			Local_321 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_330 = 30f;
			Local_324 = { 1007.983f, -320.6159f, 48.4543f };
			Local_327 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_318 = { 916.599f, -419.8782f, 35.62748f };
			Local_321 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_330 = 7f;
			Local_324 = { 912.1362f, -420.5161f, 35.38034f };
			Local_327 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_318 = { 757.7189f, -472.924f, 19.2535f };
			Local_321 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_330 = 20.75f;
			Local_324 = { 744.9114f, -480.7373f, 19.06514f };
			Local_327 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_318 = { 680.3677f, -581.1792f, 14.2145f };
			Local_321 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_330 = 45f;
			Local_324 = { 667.3692f, -610.5356f, 13.85401f };
			Local_327 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_318 = { 644.2497f, -844.7504f, 12.36707f };
			Local_321 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_330 = 25f;
			Local_324 = { 644.3659f, -859.3878f, 12.59677f };
			Local_327 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_318 = { 634.972f, -1011.64f, 10.92594f };
			Local_321 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_330 = 25f;
			Local_324 = { 634.9612f, -1029.123f, 10.61846f };
			Local_327 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_318 = { 645.7223f, -1191.215f, 10.45198f };
			Local_321 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_330 = 50f;
			Local_324 = { 645.7223f, -1228.966f, 10.98015f };
			Local_327 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_318 = { 642.1216f, -1295.73f, 9.005976f };
			Local_321 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_330 = 7f;
			Local_324 = { 644.7772f, -1298.168f, 9.128529f };
			Local_327 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_318 = { 686.5675f, -1444.71f, 9.065001f };
			Local_321 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_330 = 25f;
			Local_324 = { 682.3027f, -1429.872f, 9.890836f };
			Local_327 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_318 = { 718.7617f, -1734.313f, 9.082874f };
			Local_321 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_330 = 30f;
			Local_324 = { 717.5355f, -1748.646f, 9.363478f };
			Local_327 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_318 = { 694.3165f, -2049.806f, 0.009695f };
			Local_321 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_330 = 30f;
			Local_324 = { 693.1836f, -2063.225f, 0.429037f };
			Local_327 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_318 = { 642.6671f, -2494.551f, 0.468485f };
			Local_321 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_330 = 20f;
			Local_324 = { 647.0339f, -2506.202f, 0.583701f };
			Local_327 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_318 = { 691.8235f, -2558.219f, 0.363352f };
			Local_321 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_330 = 10.25f;
			Local_324 = { 695.7928f, -2561.034f, 0.346731f };
			Local_327 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_318 = { 723.6254f, -2562.171f, 0.255647f };
			Local_321 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_330 = 15f;
			Local_324 = { 735.765f, -2561.935f, 0.311182f };
			Local_327 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_318 = { 891.4387f, -2603.12f, 0f };
			Local_321 = { 704.4932f, -2634.793f, 45f };
			fLocal_330 = 20f;
			Local_324 = { 893.2578f, -2616.235f, 0f };
			Local_327 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_318 = { -2669.587f, 2491.96f, 2.043799f };
			Local_321 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_330 = 26.5f;
			Local_324 = { -2687.606f, 2494.868f, 2.608733f };
			Local_327 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_318 = { -1986.173f, 4521.799f, 0f };
			Local_321 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_330 = 17f;
			Local_324 = { -1995.668f, 4531.259f, 0f };
			Local_327 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_318 = { -526.0265f, 4472.442f, 0f };
			Local_321 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_330 = 10f;
			Local_324 = { -519.9281f, 4476.346f, 0f };
			Local_327 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_318 = { 98.1615f, 3384.489f, 45.45169f };
			Local_321 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_330 = 8f;
			Local_324 = { 152.6802f, 3346.793f, 45.02156f };
			Local_327 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_318 = { 147.8606f, 3406.796f, 38.03672f };
			Local_321 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_330 = 14.5f;
			Local_324 = { 130.0916f, 3425.417f, 38.05672f };
			Local_327 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_318 = { 2830.972f, 4967.14f, 34.56013f };
			Local_321 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_330 = 10f;
			Local_324 = { 2826.767f, 4964.185f, 34.10636f };
			Local_327 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_318 = { -151.5764f, 4264.417f, 31.04735f };
			Local_321 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_330 = 10f;
			Local_324 = { -148.3842f, 4261.071f, 31.57409f };
			Local_327 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_318 = { -426.6919f, 2964.272f, 14.848f };
			Local_321 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_330 = 7f;
			Local_324 = { -425.0283f, 2967.861f, 15.22699f };
			Local_327 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_318 = { -192.3414f, 2864.916f, 30.72595f };
			Local_321 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_330 = 10f;
			Local_324 = { -192.0129f, 2871.603f, 29.99943f };
			Local_327 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_318 = { 2539.185f, 2228.772f, 18.6102f };
			Local_321 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_330 = 10f;
			Local_324 = { 2543.708f, 2231.402f, 18.331f };
			Local_327 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_318 = { 2954.087f, 815.7209f, 0.037901f };
			Local_321 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_330 = 35f;
			Local_324 = { 2966.123f, 806.8889f, 0.544056f };
			Local_327 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_318 = { 2329.673f, -459.6648f, 70.24277f };
			Local_321 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_330 = 12f;
			Local_324 = { 2324.752f, -455.5238f, 70.25145f };
			Local_327 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_318 = { 1943.428f, -753.251f, 80.17905f };
			Local_321 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_330 = 7f;
			Local_324 = { 1943.366f, -758.287f, 80.32291f };
			Local_327 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_318 = { -271.2849f, -2414.993f, -10f };
			Local_321 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_330 = 30f;
			Local_324 = { -279.8399f, -2427.212f, -10f };
			Local_327 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_318 = { -1483f, 2691.428f, -10f };
			Local_321 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_330 = 12f;
			Local_324 = { -1478.152f, 2696.688f, -10f };
			Local_327 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_318 = { 222.1519f, -2343.487f, 0.039199f };
			Local_321 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_330 = 12f;
			Local_324 = { 216.959f, -2343.487f, 0.207734f };
			Local_327 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_318 = { 346.4622f, -2244.374f, 0.159779f };
			Local_321 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_330 = 20f;
			Local_324 = { 359.609f, -2244.468f, 0.129684f };
			Local_327 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_318 = { -1859.68f, -322.6357f, 56.16368f };
			Local_321 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_330 = 7.5f;
			Local_324 = { -1860.27f, -327.8634f, 57.543f };
			Local_327 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_318 = { -680.2632f, -600.818f, 69.11289f };
			Local_321 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_330 = 31.5f;
			Local_324 = { -680.6077f, -618.3658f, 69.27496f };
			Local_327 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_318 = { -1468.096f, -591.7158f, 67.05518f };
			Local_321 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_330 = 11.75f;
			Local_324 = { -1474.903f, -591.1215f, 67.08091f };
			Local_327 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_318 = { -1544.958f, -537.1475f, 72.44347f };
			Local_321 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_330 = 11.75f;
			Local_324 = { -1541.008f, -541.5494f, 71.61972f };
			Local_327 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_318 = { 333.2108f, -2727.274f, 20.71663f };
			Local_321 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_330 = 20f;
			Local_324 = { 343.1127f, -2727.236f, 20.23613f };
			Local_327 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_318 = { 1928.071f, 6228.355f, 43.49398f };
			Local_321 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_330 = 13f;
			Local_324 = { 1931.82f, 6235.634f, 43.37382f };
			Local_327 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_318 = { -736.4309f, -1590.921f, 10.80892f };
			Local_321 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_330 = 15f;
			Local_324 = { -727.2307f, -1585.221f, 11.78027f };
			Local_327 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_318 = { -676.3775f, -1548.553f, 12.33747f };
			Local_321 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_330 = 25f;
			Local_324 = { -654.203f, -1536.146f, 9.191055f };
			Local_327 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_318 = { -624.2344f, -1537.045f, 12.60193f };
			Local_321 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_330 = 8f;
			Local_324 = { -615.4003f, -1536.65f, 12.40271f };
			Local_327 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_318 = { -492.5057f, -1632.457f, 24.3307f };
			Local_321 = { -418.2088f, -1487.452f, 0f };
			fLocal_330 = 25f;
			Local_324 = { -486.2016f, -1636.095f, 24.20805f };
			Local_327 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_318 = { -359.3541f, -1639.693f, 13.13455f };
			Local_321 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_330 = 25f;
			Local_324 = { -378.1518f, -1705.66f, 12.47196f };
			Local_327 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_318 = { -243.4436f, -1814.623f, 25.69465f };
			Local_321 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_330 = 25f;
			Local_324 = { -235.1319f, -1822.094f, 25.86542f };
			Local_327 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_318 = { 84.55537f, -2046.159f, 13.30767f };
			Local_321 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_330 = 25f;
			Local_324 = { 17.90788f, -2035.773f, 12.62706f };
			Local_327 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_318 = { 221.5029f, -2232.766f, 9.88676f };
			Local_321 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_330 = 8f;
			Local_324 = { 218.583f, -2232.766f, 9.886198f };
			Local_327 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_318 = { 221.6518f, -2184.635f, 11.66457f };
			Local_321 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_330 = 8f;
			Local_324 = { 217.8995f, -2184.635f, 11.5405f };
			Local_327 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_318 = { 2326.57f, 1096.031f, 76.31458f };
			Local_321 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_330 = 21f;
			Local_324 = { 2334.453f, 1103.067f, 76.26603f };
			Local_327 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_318 = { 2379.442f, 1150.776f, 58.79632f };
			Local_321 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_330 = 12f;
			Local_324 = { 2374.064f, 1146.282f, 58.83331f };
			Local_327 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_318 = { -1179.405f, -355.2554f, 56.53003f };
			Local_321 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_330 = 12.5f;
			Local_324 = { -1178.385f, -361.8784f, 56.15081f };
			Local_327 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_318 = { -921.3846f, -384.94f, 137.0181f };
			Local_321 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_330 = 16f;
			Local_324 = { -914.1658f, -387.9444f, 137.0794f };
			Local_327 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_318 = { -740.2564f, 246.4529f, 132.2922f };
			Local_321 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_330 = 22f;
			Local_324 = { -726.6429f, 253.0676f, 132.3319f };
			Local_327 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_318 = { -771.2068f, 268.2729f, 132.1689f };
			Local_321 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_330 = 16f;
			Local_324 = { -770.8035f, 310.8625f, 137.4161f };
			Local_327 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_318 = { 259.2205f, 135.4146f, 136.7083f };
			Local_321 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_330 = 16f;
			Local_324 = { 261.9694f, 142.9676f, 136.6889f };
			Local_327 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_318 = { 393.548f, -30.87166f, 152.6635f };
			Local_321 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_330 = 8f;
			Local_324 = { 390.5358f, -36.08882f, 152.7813f };
			Local_327 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_318 = { 114.3139f, -648.4297f, 261.8488f };
			Local_321 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_330 = 20f;
			Local_324 = { 124.8467f, -646.6575f, 261.8488f };
			Local_327 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_318 = { -215.919f, -823.8436f, 126.0224f };
			Local_321 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_330 = 20f;
			Local_324 = { -225.397f, -820.3937f, 126.0812f };
			Local_327 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_318 = { -296.4725f, -802.0815f, 95.40108f };
			Local_321 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_330 = 20f;
			Local_324 = { -305.4602f, -798.8369f, 95.48194f };
			Local_327 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_318 = { -292.3034f, -823.3569f, 95.37621f };
			Local_321 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_330 = 20f;
			Local_324 = { -288.9206f, -814.022f, 95.37556f };
			Local_327 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_318 = { -256.3589f, -714.7838f, 110.1617f };
			Local_321 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_330 = 20f;
			Local_324 = { -253.7723f, -705.6632f, 110.1736f };
			Local_327 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_318 = { 1808.214f, 1949.246f, 71.73707f };
			Local_321 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_330 = 9.75f;
			Local_324 = { 1802.786f, 1950.262f, 71.74002f };
			Local_327 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_318 = { 2388.733f, 2931.941f, 46.62681f };
			Local_321 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_330 = 10f;
			Local_324 = { 2392.547f, 2934.867f, 46.6268f };
			Local_327 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_318 = { 2700.056f, 4836.381f, 42.07854f };
			Local_321 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_330 = 20.75f;
			Local_324 = { 2685.672f, 4821.653f, 42.18471f };
			Local_327 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_318 = { -1053.446f, 4766.245f, 234.3251f };
			Local_321 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_330 = 5f;
			Local_324 = { -1051.414f, 4767.193f, 234.4293f };
			Local_327 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_355(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x69C0BB7D03EE045D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x69C0BB7D03EE045D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x69C0BB7D03EE045D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0)
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

int func_357(int iParam0)
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

int func_358(var uParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(*uParam0))
	{
		if (!unk_0x7112137033807390(*uParam0, 0) || iParam1)
		{
			if (unk_0x4374EED90C523366(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_359(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x5D7DFE2058701942(iParam0, iParam1))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, iParam1);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				iVar1 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x588F5E48C78F1C73(iVar0, iVar3, 0))
					{
						if (unk_0xB0D49A1F9F054602(iVar0, iVar3, 0) == iParam0)
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

int func_360()
{
	switch (Local_654.f_3)
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

int func_361(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_377() < 10)
	{
		iVar0 = func_376();
		func_362(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_362(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_363(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_363(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_372(unk_0xD4E735F4B6A956AC()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_371(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_366(Var0))
		{
			Global_2405070.f_44.f_64 = func_365(unk_0xD4E735F4B6A956AC());
			func_364(Var0, iParam8);
		}
	}
}

void func_364(struct<12> Param0, int iParam12)
{
	Global_2405070.f_362[iParam12 /*12*/] = { Param0 };
	Global_2405070.f_362[iParam12 /*12*/].f_9 = 1;
}

int func_365(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_366(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405070.f_44[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_367(Global_2405070.f_44[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_367(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_370(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_368(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_370(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_368(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_368(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_369(Param0, Param3, Var0, Var3);
}

int func_369(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_370(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_371(var uParam0, var uParam1)
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

int func_372(int iParam0)
{
	if (((func_375(iParam0, 1) || func_374(iParam0)) || func_104(iParam0, 0)) || func_373(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

int func_374(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

bool func_375(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_365(iParam0) != 0;
	}
	return func_338(iParam0, bParam1);
}

int func_376()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405070.f_362[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_377()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_378(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	unk_0x4FDA9E6EF359F8A9(sParam1);
	unk_0x4FDA9E6EF359F8A9(sParam2);
	return unk_0x3D94488A86ABB03F(0);
}

char* func_379(int iParam0)
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

char* func_380(int iParam0)
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

char* func_381(int iParam0)
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

void func_382()
{
	if (!func_147())
	{
		return;
	}
	if (!unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_1312576.f_9)
	{
		return;
	}
	func_143();
}

void func_383(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_357(iVar0) && !func_356(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_121[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_384()
{
	if (!func_360())
	{
		if (Local_654.f_3 == 14)
		{
			func_387();
		}
		Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4.f_1 = func_346();
	}
	else if ((!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 4) && !unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 5)) && !func_386(unk_0xD4E735F4B6A956AC()))
	{
		func_385();
	}
}

void func_385()
{
	switch (Local_654.f_3)
	{
		case 0:
			unk_0xC1666FFE94C84B58(8, 2);
			break;
		
		case 1:
			unk_0xC1666FFE94C84B58(13, 2);
			break;
		
		case 2:
			unk_0xC1666FFE94C84B58(4, 2);
			break;
		
		case 4:
			unk_0xC1666FFE94C84B58(1, 2);
			break;
		
		case 3:
			unk_0xC1666FFE94C84B58(2, 2);
			break;
		
		case 5:
			unk_0xC1666FFE94C84B58(3, 2);
			break;
		
		case 6:
			unk_0xC1666FFE94C84B58(11, 3);
			break;
		
		case 7:
			unk_0xC1666FFE94C84B58(14, 1);
			break;
		
		case 8:
			unk_0xC1666FFE94C84B58(29, 2);
			break;
		
		case 9:
			unk_0xC1666FFE94C84B58(12, 2);
			break;
		
		case 10:
			unk_0xC1666FFE94C84B58(10, 2);
			break;
		
		case 11:
			unk_0xC1666FFE94C84B58(18, 2);
			break;
		
		case 12:
			unk_0xC1666FFE94C84B58(20, 2);
			break;
		
		case 13:
			unk_0xC1666FFE94C84B58(27, 2);
			break;
		
		case 15:
			unk_0xC1666FFE94C84B58(26, 1);
			break;
		
		case 16:
			unk_0xC1666FFE94C84B58(25, 1);
			break;
		
		case 17:
			unk_0xC1666FFE94C84B58(22, 1);
			break;
		
		case 18:
			unk_0xC1666FFE94C84B58(24, 1);
			break;
	}
	unk_0x2BCFB39E86340DAA(&iLocal_345, 8);
}

bool func_386(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_387()
{
	Local_121[0 /*3*/] = { 1083f, -231f, 60f };
	Local_121[1 /*3*/] = { 1024f, -325f, 60f };
	Local_121[2 /*3*/] = { 910f, -401f, 43f };
	Local_121[3 /*3*/] = { 721f, -457f, 26f };
	Local_121[4 /*3*/] = { 643f, -579f, 26f };
	Local_121[5 /*3*/] = { 590f, -851f, 26f };
	Local_121[6 /*3*/] = { 590f, -1023f, 16f };
	Local_121[7 /*3*/] = { 582f, -1205f, 24f };
	Local_121[8 /*3*/] = { 608f, -1335f, 16f };
	Local_121[9 /*3*/] = { 640f, -1434f, 16f };
	Local_121[10 /*3*/] = { 671f, -1742f, 20f };
	Local_121[11 /*3*/] = { 651f, -2046f, 16f };
	Local_121[12 /*3*/] = { 603f, -2505f, 9f };
	Local_121[13 /*3*/] = { 673f, -2582f, 4f };
	Local_121[14 /*3*/] = { 728f, -2594f, 10f };
	Local_121[15 /*3*/] = { 794f, -2624f, 27f };
	Local_121[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_121[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_121[18 /*3*/] = { -513f, 4427f, 40f };
	Local_121[19 /*3*/] = { 126f, 3366f, 40f };
	Local_121[20 /*3*/] = { 143f, 3418f, 36f };
	Local_121[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_121[22 /*3*/] = { -162f, 4249f, 40f };
	Local_121[23 /*3*/] = { -408f, 2964f, 20f };
	Local_121[24 /*3*/] = { -181f, 2862f, 38f };
	Local_121[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_121[26 /*3*/] = { 2950f, 803f, 8f };
	Local_121[27 /*3*/] = { 2369f, -409f, 80f };
	Local_121[28 /*3*/] = { 1906f, -755f, 84f };
	Local_121[29 /*3*/] = { -403f, -2333f, 40f };
	Local_121[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_121[31 /*3*/] = { 219f, -2315f, 5f };
	Local_121[32 /*3*/] = { 350f, -2315f, 5f };
	Local_121[33 /*3*/] = { -1848f, -333f, 75f };
	Local_121[34 /*3*/] = { -693f, -608f, 69f };
	Local_121[35 /*3*/] = { -1461f, -582f, 53f };
	Local_121[36 /*3*/] = { -1553f, -546f, 59f };
	Local_121[37 /*3*/] = { 338f, -2758f, 23f };
	Local_121[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_121[39 /*3*/] = { -713f, -1538f, 13f };
	Local_121[40 /*3*/] = { -659f, -1518f, 13f };
	Local_121[41 /*3*/] = { -620f, -1502f, 16f };
	Local_121[42 /*3*/] = { -445f, -1575f, 26f };
	Local_121[43 /*3*/] = { -373f, -1680f, 19f };
	Local_121[44 /*3*/] = { -212f, -1805f, 29f };
	Local_121[45 /*3*/] = { 47f, -2040f, 18f };
	Local_121[46 /*3*/] = { 223f, -2240f, 6f };
	Local_121[47 /*3*/] = { 218f, -2189f, 6f };
	Local_121[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_121[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_121[50 /*3*/] = { -1186f, -365f, 46f };
	Local_121[51 /*3*/] = { -916f, -407f, 93f };
	Local_121[52 /*3*/] = { -726f, 235f, 105f };
	Local_121[53 /*3*/] = { -774f, 286f, 112f };
	Local_121[54 /*3*/] = { 271f, 134f, 125f };
	Local_121[55 /*3*/] = { 377f, -28f, 125f };
	Local_121[56 /*3*/] = { 121f, -703f, 150f };
	Local_121[57 /*3*/] = { -204f, -784f, 74f };
	Local_121[58 /*3*/] = { -287f, -774f, 72f };
	Local_121[59 /*3*/] = { -272f, -824f, 71f };
	Local_121[60 /*3*/] = { -230f, -723f, 80f };
	Local_121[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_121[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_121[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_121[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_388(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208, iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208, iParam0))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208), iParam0);
	}
}

void func_389(var uParam0, int iParam1)
{
	if (func_312(unk_0xD4E735F4B6A956AC()) == 133 && iParam1)
	{
		Global_2524719.f_4804 = uParam0;
	}
	else
	{
		Global_2524719.f_4804 = -1;
	}
}

void func_390(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0B756FF7161B9AB0("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 1);
	}
	Global_2524719.f_4730 = -1;
	bVar0 = (func_104(unk_0xD4E735F4B6A956AC(), 0) && func_100(unk_0xD4E735F4B6A956AC()));
	if (bParam6)
	{
		func_388(21, 1);
	}
	else
	{
		func_406(iParam0, -1);
		if (func_8(unk_0xD4E735F4B6A956AC()))
		{
			Global_1574631.f_3 = iParam0;
		}
		else
		{
			func_405(iParam0);
		}
		Global_1574631.f_4 = -1;
		if (func_8(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 5);
		}
		if ((func_157() && !func_156()) || func_155(unk_0xD4E735F4B6A956AC(), 21))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 4);
		}
		unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 17);
		unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 20);
		if (func_404(iParam0))
		{
			func_403();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_400(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xBF6EED5D6E0CD9BF(fParam2);
			if (iParam0 == 146)
			{
				unk_0x9BB7BCDF2AC2D6F9(0);
				unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
				unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
			}
		}
		if (func_398(iParam0))
		{
			unk_0x9BB7BCDF2AC2D6F9(0);
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
			unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_396(1);
				if (func_255(0))
				{
					unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 9);
				}
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_394(1);
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 12);
		}
		if (bParam5)
		{
			func_393();
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_391(iParam0))
			{
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 21);
			}
		}
	}
	Global_2503540 = 1;
}

int func_391(int iParam0)
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
	if (func_392())
	{
		return 1;
	}
	return 0;
}

int func_392()
{
	switch (func_311())
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

void func_393()
{
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4721), 0);
}

void func_394(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_93284.f_8 = 1;
	}
	else
	{
		Global_93284.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_395(iVar0);
		iVar0++;
	}
}

void func_395(int iParam0)
{
	Global_93284.f_172[iParam0] = 1;
	Global_93284.f_171 = 1;
}

void func_396(int iParam0)
{
	if (func_397() && iParam0)
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

int func_397()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_399(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_400(float fParam0)
{
	float fVar0;
	
	if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == func_401())
	{
		return;
	}
	fVar0 = (Global_2524719.f_4878 - fParam0);
	if (unk_0x2BCD0524CDEE1FD2(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == unk_0xFCB3E4B16B4A9EC1() && unk_0x69C0BB7D03EE045D(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2524719.f_4878 = fParam0;
	Global_2524719.f_4879 = unk_0xFCB3E4B16B4A9EC1();
}

int func_401()
{
	switch (func_402())
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

int func_402()
{
	return Global_25459;
}

void func_403()
{
	Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_200 = 0;
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4548), 1);
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_405(int iParam0)
{
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/] = iParam0;
}

void func_406(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_334(0) || func_334(func_333(iVar0)))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 2);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 2);
		}
	}
}

int func_407()
{
	switch (Local_654.f_3)
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

void func_408()
{
	Global_1664222 = 1;
	if (!unk_0x05EFB6A616B6FADE(Global_2533185, 0))
	{
		unk_0x2BCFB39E86340DAA(&Global_2533185, 0);
		unk_0x2BCFB39E86340DAA(&Global_1664223, 0);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_2533185, 1))
	{
		unk_0x2BCFB39E86340DAA(&Global_2533185, 1);
		unk_0x2BCFB39E86340DAA(&Global_1664223, 1);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_2533185, 5))
	{
		unk_0x2BCFB39E86340DAA(&Global_2533185, 5);
		unk_0x2BCFB39E86340DAA(&Global_1664223, 5);
	}
	if (unk_0x3C43F06C8C621742(-355737150))
	{
		unk_0x6417FCFC98785F84(-355737150, 0, 0, 0);
	}
	if (unk_0x3C43F06C8C621742(-580979506))
	{
		unk_0x6417FCFC98785F84(-580979506, 0, 0, 0);
	}
	if (unk_0x3C43F06C8C621742(-1426452475))
	{
		unk_0x6417FCFC98785F84(-1426452475, 0, 0, 0);
	}
	if (unk_0x3C43F06C8C621742(745417724))
	{
		unk_0x6417FCFC98785F84(745417724, 0, 0, 0);
	}
	if (unk_0x3C43F06C8C621742(-1305304906))
	{
		unk_0x6417FCFC98785F84(-1305304906, 0, 0, 0);
	}
	if (unk_0x3C43F06C8C621742(-1543175077))
	{
		unk_0x6417FCFC98785F84(-1543175077, 0, 0, 0);
	}
	if (unk_0x3C43F06C8C621742(-811770997))
	{
		unk_0x6417FCFC98785F84(-811770997, 0, 0, 0);
	}
}

int func_409()
{
	switch (Local_654.f_3)
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

void func_410()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_654.f_3))
	{
		if (Local_654.f_3 == 1 || Local_654.f_3 == 6)
		{
			iVar0 = func_432(unk_0xD4E735F4B6A956AC(), 1);
			iVar1 = func_192(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
				{
					unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 1, 0, 0);
					func_411(1);
				}
			}
			else
			{
				unk_0x420D881EB77D2CA5(unk_0xD4E735F4B6A956AC(), 1);
			}
		}
	}
}

void func_411(bool bParam0)
{
	int iVar0;
	
	if (unk_0x774CB20D17C3FF03(unk_0xA19140A5C42D8715(), 5) != 0)
	{
		unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
		unk_0x5D1FDC25F177D465(unk_0xD4E735F4B6A956AC(), func_199(585, -1, 0));
		if (func_431())
		{
			unk_0xE6B050E77B276B8B(unk_0xD4E735F4B6A956AC(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_430())
		{
			unk_0xE6B050E77B276B8B(unk_0xD4E735F4B6A956AC(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_427(3610, -1, -1))
		{
		}
		iVar0 = func_199(2040, -1, 0);
		unk_0xD51625EE684BFF8A(unk_0xD4E735F4B6A956AC(), func_426(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), iVar0));
		if (func_252(0))
		{
			unk_0x5D1FDC25F177D465(unk_0xD4E735F4B6A956AC(), func_199(585, -1, 0));
		}
		else
		{
			unk_0x5D1FDC25F177D465(unk_0xD4E735F4B6A956AC(), func_425(Global_2533469));
		}
		func_424(unk_0xD4E735F4B6A956AC(), iVar0);
		unk_0xBC17DC7C428EC7F1(unk_0xD4E735F4B6A956AC(), 5, func_417(unk_0xA19140A5C42D8715(), iVar0), func_416(unk_0xA19140A5C42D8715(), iVar0), 0);
		func_415(func_199(2040, -1, 0), 1);
		Global_2524719.f_276 = 1;
		func_412(unk_0xD4E735F4B6A956AC(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_412(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		func_414();
		if (iParam2 == -1)
		{
			iParam2 = func_199(2040, -1, 0);
		}
		unk_0xBC17DC7C428EC7F1(iParam0, 5, func_417(unk_0xEE978C39384D834F(iParam0), iParam2), func_416(unk_0xEE978C39384D834F(iParam0), iParam2), 0);
		unk_0xD51625EE684BFF8A(iParam0, func_426(unk_0xEE978C39384D834F(iParam0), iParam2));
		unk_0x72A0FF8C49CFFC0D(unk_0xEE978C39384D834F(iParam0), 5, func_417(unk_0xEE978C39384D834F(iParam0), iParam2), func_416(unk_0xEE978C39384D834F(iParam0), iParam2), func_426(unk_0xEE978C39384D834F(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_199(585, -1, 0);
		}
		if (func_252(1) && func_413(iParam0))
		{
			unk_0x5D1FDC25F177D465(iParam0, func_425(Global_2533469));
		}
		else
		{
			unk_0x5D1FDC25F177D465(iParam0, iParam1);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_28, 4))
		{
			unk_0x5D1FDC25F177D465(iParam0, Global_1574420);
			unk_0xE6B050E77B276B8B(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_424(iParam0, iParam2);
		unk_0xB0D7019224A3A443(unk_0xEE978C39384D834F(iParam0), 177, 1);
	}
}

bool func_413(int iParam0)
{
	return func_99(iParam0, 10);
}

void func_414()
{
	Global_71178 = 0;
	Global_71179 = -1;
	Global_71180 = -1;
	Global_71181 = -1;
	Global_71182 = -1;
	Global_71183 = -1;
}

void func_415(int iParam0, int iParam1)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		func_414();
		func_190(2040, iParam0, -1, 1, 0);
		unk_0xBC17DC7C428EC7F1(unk_0xD4E735F4B6A956AC(), 5, func_417(unk_0xA19140A5C42D8715(), iParam0), func_416(unk_0xA19140A5C42D8715(), iParam0), 0);
		func_424(unk_0xD4E735F4B6A956AC(), iParam0);
		unk_0xD51625EE684BFF8A(unk_0xD4E735F4B6A956AC(), func_426(unk_0xA19140A5C42D8715(), iParam0));
		if ((iParam1 && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715())) && unk_0x774CB20D17C3FF03(unk_0xA19140A5C42D8715(), 5) != 0)
		{
			func_412(unk_0xD4E735F4B6A956AC(), -1, -1);
		}
	}
}

int func_416(var uParam0, int iParam1)
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

var func_417(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x774CB20D17C3FF03(uParam0, 9) != false;
	iVar1 = unk_0xBDB0A560F4FBB443(iParam0, 8, unk_0x774CB20D17C3FF03(iParam0, 8), unk_0x7710E77D1959B321(iParam0, 8));
	iVar2 = unk_0xBDB0A560F4FBB443(iParam0, 11, unk_0x774CB20D17C3FF03(iParam0, 11), unk_0x7710E77D1959B321(iParam0, 11));
	iVar3 = unk_0xBDB0A560F4FBB443(iParam0, 4, unk_0x774CB20D17C3FF03(iParam0, 4), unk_0x7710E77D1959B321(iParam0, 4));
	if ((((!bVar0 == Global_71178 || !iParam1 == Global_71179) || !iVar1 == Global_71180) || !iVar2 == Global_71181) || !iVar3 == Global_71182)
	{
		Global_71178 = bVar0;
		Global_71179 = iParam1;
		Global_71180 = iVar1;
		Global_71181 = iVar2;
		Global_71182 = iVar3;
		Global_71183 = func_418(iParam0, iParam1);
	}
	return Global_71183;
}

int func_418(int iParam0, int iParam1)
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
	
	iVar0 = unk_0x774CB20D17C3FF03(uParam0, 11);
	if (unk_0x774CB20D17C3FF03(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x8F474E419F56E48D(iParam0);
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
	uVar4 = unk_0xBDB0A560F4FBB443(iParam0, 8, unk_0x774CB20D17C3FF03(iParam0, 8), unk_0x7710E77D1959B321(iParam0, 8));
	if (unk_0x4BE6499482BEE1D8(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (unk_0x4BE6499482BEE1D8(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		return func_423(iParam0, iParam1);
	}
	if (func_422(iParam0))
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
		iVar5 = unk_0xBDB0A560F4FBB443(iParam0, 11, iVar0, unk_0x7710E77D1959B321(iParam0, 11));
		if (unk_0x4BE6499482BEE1D8(iVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("DRESS"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("HOODED_JACKET"), 0))
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
			else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_423(iParam0, iParam1) + 15;
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x4BE6499482BEE1D8(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_421(iVar5, 0);
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
						iVar0 = func_420(iVar5);
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
						iVar0 = func_420(iVar5);
						break;
					}
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_419(iVar5, 0);
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
					iVar0 = func_420(iVar5);
					break;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x4BE6499482BEE1D8(iVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x4BE6499482BEE1D8(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4BE6499482BEE1D8(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_423(iParam0, iParam1) + 15;
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x4BE6499482BEE1D8(iVar5, -1086258388, 0) || unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_423(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, -872449705, 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, 144417099, 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, -102825006, 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_21"), 0))
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
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x4BE6499482BEE1D8(iVar5, joaat("AIR_DRAW_0"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, 970679185, 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, 83294665, 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, 382246252, 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_5"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("ASSAULT_DRAW_0"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE_DRAW_4"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("ARENA_DRAW_12"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x4BE6499482BEE1D8(iVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0x4BE6499482BEE1D8(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x4BE6499482BEE1D8(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x4BE6499482BEE1D8(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_420(iVar5);
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

int func_419(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_420(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_421(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4BE6499482BEE1D8(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4BE6499482BEE1D8(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_422(int iParam0)
{
	if (unk_0x4BE6499482BEE1D8(unk_0xBDB0A560F4FBB443(uParam0, 4, unk_0x774CB20D17C3FF03(uParam0, 4), unk_0x7710E77D1959B321(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_423(var uParam0, int iParam1)
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

void func_424(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x97A219F934B3F083(iParam0, joaat("xs_p_para_bag_arena_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x97A219F934B3F083(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x97A219F934B3F083(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x97A219F934B3F083(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x97A219F934B3F083(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x519EC0448A77FA81(iParam0);
	}
}

int func_425(var uParam0)
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

int func_426(var uParam0, int iParam1)
{
	return 0;
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_429(iParam0, iParam1);
	uVar2 = func_428(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_428(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_429(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

bool func_430()
{
	return unk_0x05BEBC245254F6F2(joaat("mppilot"));
}

bool func_431()
{
	return unk_0x05BEBC245254F6F2(joaat("mplts"));
}

int func_432(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_196(iParam0);
}

void func_433()
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
	
	if ((((!func_7(unk_0xD4E735F4B6A956AC()) && !func_154(unk_0xD4E735F4B6A956AC())) && !func_306()) && !func_444(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_443(unk_0xD4E735F4B6A956AC()))
	{
		if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			bVar11 = func_5(Local_654.f_3);
			bVar12 = unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0);
			bVar13 = func_441();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_654.f_67[iVar4 /*2*/].f_1;
				if (unk_0xAABBF7FA3E338B30(uVar14) && unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0) == unk_0xBEA1D935EBAA95F3(uVar14))
						{
							func_328(1);
						}
					}
					unk_0x2BCFB39E86340DAA(&uVar5, iVar4);
					if (bVar11 && func_38(Local_654.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(uVar14), 1) };
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
			if (func_39(Local_654.f_3))
			{
				unk_0x2BCFB39E86340DAA(&uVar5, 31);
			}
			Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_7 = uVar5;
			if (func_5(Local_654.f_3))
			{
				if ((unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()) || (unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715()) && !unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_654.f_3, iVar7, &Var0, &uVar3))
						{
							func_440(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_439(Var0, 1, 0);
							func_435(10, 0, 0, 0, 0);
							unk_0x2BCFB39E86340DAA(&iLocal_345, 5);
						}
					}
				}
				else
				{
					func_434();
				}
			}
		}
	}
	else
	{
		func_434();
	}
}

void func_434()
{
	if (unk_0x05EFB6A616B6FADE(iLocal_345, 5))
	{
		func_162();
		func_160();
		unk_0xFA57C719261AA55D(&iLocal_345, 5);
		func_159();
	}
}

void func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_96())
	{
		if (unk_0x05EFB6A616B6FADE(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_436())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412440 = 0;
	}
	Global_2405070.f_484 = iParam0;
	Global_2405070.f_484.f_1 = unk_0xFCB3E4B16B4A9EC1();
	Global_2405070.f_484.f_2 = iParam1;
	Global_2405070.f_484.f_3 = iParam2;
	Global_2405070.f_484.f_4 = iParam3;
	Global_2405070.f_484.f_5 = iParam4;
}

int func_436()
{
	if (((func_211(unk_0xD4E735F4B6A956AC()) == 229 || func_211(unk_0xD4E735F4B6A956AC()) == 191) || func_438()) || func_437())
	{
		return 0;
	}
	return 1;
}

bool func_437()
{
	return Global_1574388;
}

int func_438()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_439(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { Param0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

void func_440(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x2BCD0524CDEE1FD2(Global_2413681.f_6))
	{
		if (!Global_2413681.f_6 == unk_0xFCB3E4B16B4A9EC1())
		{
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x2BCD0524CDEE1FD2(Global_2413681.f_6))
	{
		Global_2413681.f_6 = unk_0xFCB3E4B16B4A9EC1();
	}
	Var0.f_6 = Global_2413681.f_6;
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
	if (func_372(unk_0xD4E735F4B6A956AC()))
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
	Global_2413681 = { Var0 };
}

int func_441()
{
	if (((((func_442(unk_0xD4E735F4B6A956AC()) || func_157()) || func_156()) || func_155(unk_0xD4E735F4B6A956AC(), 21)) || func_8(unk_0xD4E735F4B6A956AC())) || func_7(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_443(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 14))
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 11))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (Global_1589747[iParam0 /*790*/].f_273.f_24 > 0)
	{
		if (bParam1)
		{
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
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
		if (func_454(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_290(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_453(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_452(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_451(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_450(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_449(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_447(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_446(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_445(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_445(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_446(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			uVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x8F474E419F56E48D(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_96())
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_448(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_96())
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_450(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_451(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_453(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_454(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

void func_455(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_512())
	{
		if (bParam1)
		{
			iVar0 = unk_0xD60943E3BE730BF0();
			if (func_94(unk_0xD4E735F4B6A956AC()))
			{
				uVar1 = func_314();
				iVar2 = unk_0x77065AD41B64E946(uVar1);
				if (unk_0xC77FA683E9BB485B(iVar2))
				{
					iVar3 = unk_0x679C4D4E80CF78DB(iVar2);
					if (unk_0xA08F374047C715E8(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_511())
				{
					switch (Local_654.f_3)
					{
						case 14:
							if (!func_357(iVar4) && !func_356(iVar4))
							{
								func_460("AMCH_BRIDGE", bParam0, iVar0, iVar4);
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
			if (((!bParam0 && unk_0xAABBF7FA3E338B30(Local_654.f_67[iVar5 /*2*/].f_1)) && unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x588F5E48C78F1C73(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0xCE3CB618AFE55EFB(uLocal_627[iVar5]))
				{
					uLocal_627[iVar5] = unk_0x6A15DD6A863D5E27(unk_0x1C3E3FC5D339FC8C(Local_654.f_67[iVar5 /*2*/].f_1));
					unk_0x7DB79A42AADE120F(uLocal_627[iVar5], func_459(iVar5));
					unk_0xAD8FB9E563A1FF80(uLocal_627[iVar5], 9);
					unk_0xC4F12E446CCE89F5(uLocal_627[iVar5], func_458(iVar5));
					func_456(&(uLocal_627[iVar5]), 9);
				}
				else if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					Var6 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_654.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x264E87C905AE790B(uLocal_627[iVar5], 1);
					}
					else
					{
						unk_0x264E87C905AE790B(uLocal_627[iVar5], 0);
					}
				}
			}
			else if (unk_0xCE3CB618AFE55EFB(uLocal_627[iVar5]))
			{
				unk_0xE1623437A3194332(&(uLocal_627[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_456(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xCE3CB618AFE55EFB(*uParam0))
	{
		uVar0 = func_457(iParam1);
		unk_0x570128B7829A8EAA(*uParam0, uVar0);
	}
}

int func_457(int iParam0)
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
	unk_0x1C828C4226A9FADF(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_458(int iParam0)
{
	if (unk_0x7C197233F79C2CB8(Local_654.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xCA8C103FCD316F89(Local_654.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x8CE5E4632E631B03(Local_654.f_67[iParam0 /*2*/]) && !unk_0x34F956CD0E52746F(Local_654.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_459(int iParam0)
{
	if (unk_0x7C197233F79C2CB8(Local_654.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0xCA8C103FCD316F89(Local_654.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x8CE5E4632E631B03(Local_654.f_67[iParam0 /*2*/]) && !unk_0x34F956CD0E52746F(Local_654.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_460(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x05EFB6A616B6FADE(Local_2621[iParam2 /*12*/].f_8[func_348(iParam3)], func_347(iParam3)) && !bParam1)
	{
		Var0 = { func_510(iParam3) };
		if (!unk_0xCE3CB618AFE55EFB(uLocal_561[iParam3]))
		{
			if (!func_509(Var0, 0f, 0f, 0f, 0) && !func_509(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_561[iParam3] = unk_0xA70969818F182A36(Var0);
				unk_0xAD8FB9E563A1FF80(uLocal_561[iParam3], 9);
				unk_0xC4F12E446CCE89F5(uLocal_561[iParam3], sParam0);
				func_461(uLocal_561[iParam3], 25, 1152319488, 1137180672);
				func_456(&(uLocal_561[iParam3]), 12);
				unk_0x264E87C905AE790B(uLocal_561[iParam3], 1);
			}
		}
		else if (unk_0xD1ABB20CFF127CCC())
		{
			unk_0xE8C2974337833D20(uLocal_561[iParam3], 255);
		}
		else
		{
			func_461(uLocal_561[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0xCE3CB618AFE55EFB(uLocal_561[iParam3]))
	{
		unk_0xE1623437A3194332(&(uLocal_561[iParam3]));
		if (!bParam1)
		{
			unk_0xE11F00B4AC919F45(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_461(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xE8C2974337833D20(uParam0, func_462(uParam0, iParam1, fParam2, fParam3));
}

int func_462(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_508(Global_2437022) && !func_75())
	{
		fVar0 = func_464(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_463();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_463()
{
	if (func_375(Global_2437022, 1))
	{
		return 50;
	}
	return 0;
}

float func_464(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2437022;
	Var2 = { func_507(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1316801 || func_503())
	{
		if (func_502(iVar0))
		{
			Var5 = { func_467(iVar0) };
		}
		else if (func_466(iVar0))
		{
			Var5 = { func_465(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iVar0), 0) };
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

Vector3 func_465(int iParam0)
{
	var uVar0;
	
	if (func_466(iParam0))
	{
		uVar0 = unk_0xEE978C39384D834F(iParam0);
		if (unk_0xDC5D81351D6A4DDB(uVar0))
		{
			return unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_466(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0xEE978C39384D834F(iParam0);
			if (unk_0xDC5D81351D6A4DDB(uVar0))
			{
				if (unk_0xA60C975CBAB69F34(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_467(int iParam0)
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
	
	if (iParam0 == func_96())
	{
	}
	if (func_501(iParam0))
	{
		iVar0 = func_500(iParam0);
		if (iVar0 != func_96())
		{
			if (!func_499(iVar0))
			{
				if (unk_0xDC5D81351D6A4DDB(Global_2437022.f_656[iVar0 /*3*/][1]))
				{
					return unk_0xE2BBD32891C18569(Global_2437022.f_656[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2423801[func_500(iParam0) /*413*/].f_309.f_8;
				}
			}
			else
			{
				iVar1 = func_495(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1668658.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_494(iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_2524719.f_294))
		{
			return unk_0xE2BBD32891C18569(Global_2524719.f_294, 0);
		}
	}
	else if (func_452(iParam0) && !func_493(iParam0))
	{
		iVar2 = Global_2423801[iParam0 /*413*/].f_309.f_7;
		if (iVar2 != func_96())
		{
			iVar3 = func_495(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1668658.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_450(iParam0) && !func_492(iParam0))
	{
		if (func_502(iParam0) && func_491())
		{
			return Global_1668658.f_42[Global_2423801[iParam0 /*413*/].f_309.f_4 /*3*/];
		}
		iVar4 = Global_2423801[iParam0 /*413*/].f_309.f_7;
		if (iVar4 != func_96())
		{
			if (func_490(iVar4))
			{
				iVar5 = func_486(iVar4);
				if (iVar5 != -1)
				{
					return Global_1668658.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_449(iParam0))
	{
		iVar6 = func_485(iParam0);
		if (iVar6 != func_96())
		{
			if (!func_484(iVar6))
			{
				if (unk_0xDC5D81351D6A4DDB(Global_2437022.f_753[iVar6]))
				{
					return unk_0xE2BBD32891C18569(Global_2437022.f_753[iVar6], 0);
				}
				else
				{
					return Global_2423801[func_485(iParam0) /*413*/].f_309.f_15;
				}
			}
			else
			{
				iVar7 = func_486(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1668658.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_483(iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_2524719.f_296))
		{
			return unk_0xE2BBD32891C18569(Global_2524719.f_296, 0);
		}
	}
	else if (func_448(iParam0) && !func_482(iParam0))
	{
		iVar8 = Global_2423801[iParam0 /*413*/].f_309.f_7;
		if (iVar8 != func_96())
		{
			if (func_481(iVar8))
			{
				iVar9 = func_477(iVar8);
				if (iVar9 != -1)
				{
					return func_476(iVar9);
				}
			}
		}
	}
	else if (func_447(iParam0) && !func_475(iParam0))
	{
		iVar10 = Global_2423801[iParam0 /*413*/].f_309.f_7;
		if (iVar10 != func_96())
		{
			if (func_474(iVar10))
			{
				iVar11 = func_470(iVar10);
				if (iVar11 != -1)
				{
					return Global_1668658.f_42[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_446(iParam0, 0))
	{
		iVar12 = func_469(iParam0);
		if (iVar12 != func_96())
		{
			if (!func_468(iVar12))
			{
				if (unk_0xDC5D81351D6A4DDB(Global_2437022.f_786[iVar12]))
				{
					return unk_0xE2BBD32891C18569(Global_2437022.f_786[iVar12], 0);
				}
				else
				{
					return Global_1625435[func_469(iParam0) /*560*/].f_549;
				}
			}
			else
			{
				iVar13 = func_470(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1668658.f_42[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_445(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_448(iParam0))
	{
		return func_476(Global_2423801[iParam0 /*413*/].f_309.f_4);
	}
	return Global_1668658.f_42[Global_2423801[iParam0 /*413*/].f_309.f_4 /*3*/];
}

int func_468(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309.f_3, 4);
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_2423801[iParam0 /*413*/].f_309.f_7;
}

int func_470(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		iVar0 = func_473(iParam0);
		if (iVar0 != 0)
		{
			return func_471(iVar0);
		}
	}
	return -1;
}

int func_471(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_291(iVar0) == 11)
		{
			if (func_472(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_472(int iParam0)
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

int func_473(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_272;
	}
	return 0;
}

int func_474(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_272 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_447(iParam0) && Global_2423801[iParam0 /*413*/].f_309.f_7 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_476(int iParam0)
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
	return Global_1668658.f_42[iParam0 /*3*/];
}

int func_477(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		iVar0 = func_480(iParam0);
		if (iVar0 != 0)
		{
			return func_478(iVar0);
		}
	}
	return -1;
}

int func_478(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_291(iVar0) == 11)
		{
			if (func_479(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_479(int iParam0)
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

int func_480(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_313;
	}
	return 0;
}

int func_481(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_313 != 0;
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_448(iParam0) && Global_2423801[iParam0 /*413*/].f_309.f_7 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_483(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 10;
			}
		}
	}
	return 0;
}

int func_484(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309.f_2, 6);
	}
	return 0;
}

int func_485(int iParam0)
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_2423801[iParam0 /*413*/].f_309.f_7;
}

int func_486(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return -1;
	}
	iVar0 = func_489(iParam0);
	if (!iVar0 == 0)
	{
		return func_487(iVar0);
	}
	return -1;
}

int func_487(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_291(iVar0) == 9)
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

int func_489(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_262;
}

int func_490(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_262 != 0;
	}
	return 0;
}

int func_491()
{
	if (unk_0x05EFB6A616B6FADE(Global_1668658.f_3309, 13) || Global_1668658.f_2178)
	{
		return 1;
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (func_450(iParam0) && Global_2423801[iParam0 /*413*/].f_309.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (func_452(iParam0) && Global_2423801[iParam0 /*413*/].f_309.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 6;
			}
		}
	}
	return 0;
}

int func_495(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return -1;
	}
	iVar0 = func_498(iParam0);
	if (!iVar0 == 0)
	{
		return func_496(iVar0);
	}
	return -1;
}

int func_496(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_497(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_497(int iParam0)
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

int func_498(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

int func_499(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 6);
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_2423801[iParam0 /*413*/].f_309.f_7;
}

int func_501(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_96())
			{
				return func_291(Global_2423801[iParam0 /*413*/].f_309.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_502(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == unk_0xD4E735F4B6A956AC()) && func_12(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_503()
{
	if ((func_506() || func_505()) || func_504(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

bool func_504(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1624218[iParam0 /*38*/].f_29, 20);
}

bool func_505()
{
	return unk_0x05EFB6A616B6FADE(Global_1678592, 1);
}

bool func_506()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 5);
}

Vector3 func_507(var uParam0)
{
	var uVar0;
	
	if (unk_0x7E568B4236F45F53(uParam0) == 4)
	{
		return unk_0x1C8DAFF0573242F7(uParam0);
	}
	else
	{
		uVar0 = unk_0x3E6A9ABACA8E5C3B(uParam0);
		if (unk_0xDC5D81351D6A4DDB(uVar0))
		{
			return unk_0xE2BBD32891C18569(iVar0, 0);
		}
	}
	return unk_0x1C8DAFF0573242F7(uParam0);
}

int func_508(int iParam0)
{
	if ((unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_68.f_2, 9) && !(unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_68.f_2, 6) && unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_68.f_2, 7))) || ((unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_68.f_2, 6) && !unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_68.f_2, 7)) && !unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_509(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_510(int iParam0)
{
	switch (Local_654.f_3)
	{
		case 14:
			return Local_365[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_511()
{
	switch (Local_654.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_512()
{
	switch (Local_654.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_513()
{
	switch (Local_654.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_514(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_305(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_208(sParam1))
	{
		sVar0 = sParam1;
	}
	func_135(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_515(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x61D2332983ACC05C();
	return "HUD_STARTING";
	if (unk_0x3CAC2741CC1A631F(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_challenges"))
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
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x3CAC2741CC1A631F(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_516(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_517(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xDE089748C4C76C96())
	{
		Global_2524719.f_4720 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 1))
		{
			unk_0xE11F00B4AC919F45(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2524719.f_4720 = 0;
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4720), 1);
		}
	}
}

int func_518(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C9BACA8D249CB13() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0);
		}
		else
		{
			return unk_0x1893BEC593409B02(unk_0x7546CD2A62C6DBB6(), *uParam0);
		}
	}
	return unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0);
}

void func_519(int iParam0)
{
	if (!unk_0x49B680F5AF4359D0() && !unk_0x71364F510A1CB69F())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if (!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03())
					{
						if (func_5(Local_654.f_3))
						{
							if (Local_654.f_3 == 12)
							{
								func_287("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_287("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_654.f_3))
						{
							func_287("AMCH_BIKEAV", 30000);
						}
						func_286(1);
						unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if (!unk_0xD1ABB20CFF127CCC())
					{
						func_287("AMCH_BLOW", 30000);
						func_286(1);
						unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if (!unk_0xD1ABB20CFF127CCC() && !func_524(63))
					{
						switch (Local_654.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									if (unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
									{
										func_287("AMCH_ALTI", 30000);
										func_286(1);
										unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_NMIS", 30000);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_FRFALL", -1);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_PVPO1", -1);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_PVPO2", -1);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_WHEELIE", 30000);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_STOPPIE", 30000);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_LFALL", 30000);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_LPARA", 30000);
									func_286(1);
									unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if ((!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03()) && !func_524(63))
					{
						switch (Local_654.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									if (unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
									{
										if (func_1(&uLocal_339, 1000, 0))
										{
											func_287("AMCH_OCEAN", 30000);
											func_286(1);
											func_44(&uLocal_339);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if (!unk_0xD1ABB20CFF127CCC() && !func_524(63))
					{
						switch (Local_654.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									if (unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
									{
										if (func_508(unk_0xD4E735F4B6A956AC()) && !func_521(unk_0xD4E735F4B6A956AC()))
										{
											func_287("AMCH_ALTIEXP", 30000);
											func_286(1);
											unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if ((!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03()) && !func_524(63))
					{
						if (func_1(&uLocal_339, 1000, 0))
						{
							func_287("AMCH_FLYLOW", 30000);
							func_286(1);
							func_44(&uLocal_339);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if (Local_654.f_3 == 7)
					{
						if (iLocal_639 == 0)
						{
							if ((!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03()) && !func_524(63))
							{
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_MVS1", 30000);
									func_286(1);
									iLocal_639 = 1;
								}
							}
						}
						else if ((!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03()) && !func_524(63))
						{
							if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
							{
								func_287("AMCH_MVS2", 30000);
								func_286(1);
								unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
							}
						}
					}
					if (Local_654.f_3 == 14)
					{
						if (iLocal_639 == 0)
						{
							if ((!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03()) && !func_524(63))
							{
								if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
								{
									func_287("AMCH_BRBL", 30000);
									func_286(1);
									iLocal_639 = 1;
								}
							}
						}
						else if ((!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03()) && !func_524(63))
						{
							if (func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
							{
								func_287("AMCH_BRBL2", 30000);
								func_286(1);
								unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0x05EFB6A616B6FADE(iLocal_638, iParam0))
				{
					if (!unk_0xD1ABB20CFF127CCC() && !unk_0xE06AA0996C4E4E03())
					{
						func_520("AMCH_WARN", func_380(Local_654.f_3), func_379(Local_654.f_3), 30000);
						func_286(0);
						Local_3006.f_8 = unk_0x5E0F2F352218B916();
						unk_0xE11F00B4AC919F45(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x2BCFB39E86340DAA(&iLocal_638, iParam0);
					}
				}
				break;
			}
	}
}

void func_520(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x4FDA9E6EF359F8A9(sParam1);
	unk_0x4FDA9E6EF359F8A9(sParam2);
	unk_0x9E55AC8543FF8836(0, 0, 0, iParam3);
}

bool func_521(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_241.f_136[func_523(9) /*33*/][iParam0], func_522(9));
}

int func_522(int iParam0)
{
	return (iParam0 % 32);
}

int func_523(int iParam0)
{
	return (iParam0 / 32);
}

bool func_524(int iParam0)
{
	return Global_2437022.f_2704[0 /*80*/].f_1 == iParam0;
}

void func_525(int iParam0)
{
	Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_3 = iParam0;
}

void func_526(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 4);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 4);
	}
}

int func_527(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_549(unk_0xD4E735F4B6A956AC(), 29))
	{
		return 0;
	}
	if (func_155(unk_0xD4E735F4B6A956AC(), 21))
	{
		return 0;
	}
	if (unk_0xEB97F9F181CDFD2C())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x3DF0D4C48D463CA8())
		{
			return 0;
		}
	}
	if (func_337(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_548())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_547(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
	}
	if (func_546())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_98(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
	}
	else if (func_539(unk_0xD4E735F4B6A956AC()) == 3)
	{
		return 0;
	}
	if (func_538(unk_0xD4E735F4B6A956AC()) != func_96() && func_538(unk_0xD4E735F4B6A956AC()) == func_83(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_537(func_281()) && func_312(unk_0xD4E735F4B6A956AC()) != 236)
	{
		return 0;
	}
	if (func_536())
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	if (unk_0xD8B89B387D170E27())
	{
		return 0;
	}
	if (func_339(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_155(unk_0xD4E735F4B6A956AC(), 0) || func_155(unk_0xD4E735F4B6A956AC(), 3))
	{
		return 0;
	}
	if ((func_155(unk_0xD4E735F4B6A956AC(), 12) || func_155(unk_0xD4E735F4B6A956AC(), 14)) || func_155(unk_0xD4E735F4B6A956AC(), 13))
	{
		return 0;
	}
	if (func_444(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_501(unk_0xD4E735F4B6A956AC()))
	{
		if (!func_506() && !Global_2503913)
		{
			return 0;
		}
	}
	if (func_533(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_532())
	{
		return 0;
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_373(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_531())
	{
		return 0;
	}
	if (func_529(unk_0xD4E735F4B6A956AC()) && Global_1589396.f_171)
	{
		return 0;
	}
	if (func_528())
	{
		return 0;
	}
	return 1;
}

bool func_528()
{
	return Global_1668658.f_28;
}

int func_529(int iParam0)
{
	if (func_530(Global_1589747[iParam0 /*790*/].f_273.f_24))
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)
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

int func_531()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_532()
{
	return Global_93284.f_328 > 0;
}

bool func_533(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 11);
}

int func_534()
{
	if (func_535() == 0)
	{
		return 1;
	}
	return 0;
}

int func_535()
{
	return Global_1312466.f_18;
}

bool func_536()
{
	return Global_1312857;
}

int func_537(int iParam0)
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

int func_538(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_539(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_374(iParam0) && !func_8(iParam0)) && !unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_98(iParam0);
	uVar3 = func_157();
	uVar4 = func_540();
	if ((bVar1 && (func_442(iParam0) || func_399(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_100(iParam0)) && !func_292(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2524719.f_4883.f_210 != iVar0)
	{
		Global_2524719.f_4883.f_210 = iVar0;
	}
	return iVar0;
}

int func_540()
{
	if ((func_99(unk_0xD4E735F4B6A956AC(), 21) || func_99(unk_0xD4E735F4B6A956AC(), 22)) || func_544())
	{
		return 1;
	}
	if (func_542())
	{
		func_541(22);
		return 1;
	}
	return 0;
}

void func_541(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_4), iParam0);
}

int func_542()
{
	if (func_104(unk_0xD4E735F4B6A956AC(), 0))
	{
		if ((func_157() && !func_156()) || func_155(unk_0xD4E735F4B6A956AC(), 21))
		{
			return 1;
		}
		else
		{
			func_543(27);
		}
	}
	return 0;
}

void func_543(int iParam0)
{
	unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_4), iParam0);
}

int func_544()
{
	return func_545(306, -1);
}

int func_545(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_195(iParam1)];
	if (unk_0x57AA4E7564A22FCD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_546()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 5;
}

int func_547(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_548()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

bool func_549(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

void func_550()
{
	func_551(&(Local_742.f_534), &Local_742, 26, &(Local_742.f_1), &(Local_742.f_117), Local_654.f_3, 0, 0);
}

void func_551(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_660(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_658() || iParam2 == 27)
	{
		if (func_614(uParam1, iParam2, uParam3, Global_1574168, 0, func_661(), iParam7))
		{
			func_613(1);
			if ((!func_612() && !func_611()) || unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 1))
			{
				if (func_610())
				{
					func_609();
				}
				else
				{
					unk_0xCD282E433560A509(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_608(1);
						Global_1574168 = 0;
						iVar54 = -1;
						if (Global_1574389 != 1)
						{
							func_607(uParam1, 0, 0);
							if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 7))
							{
								unk_0xFA57C719261AA55D(&(uParam3->f_33), 7);
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
								if (func_12(unk_0x1483A8AE554B8B2B(iVar52), 0, 1))
								{
									iVar35 = unk_0x1483A8AE554B8B2B(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_606(iVar35) || Global_2423801[iVar35 /*413*/].f_236 != -1) || func_605(iVar35))
										{
											iVar44 = iVar35;
											if (func_85(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_602(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_101(unk_0xD4E735F4B6A956AC(), 0) && func_211(unk_0xD4E735F4B6A956AC()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_601())
							{
								if (func_12(unk_0x1483A8AE554B8B2B(iVar52), 0, 1))
								{
									iVar35 = unk_0x1483A8AE554B8B2B(iVar52);
								}
								else
								{
									iVar35 = func_96();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_600(iVar35) && func_597(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
								Var38 = { func_592(iVar35) };
								if (iVar35 == unk_0xD4E735F4B6A956AC())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xB330C43B9B7B1724(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_129(iVar35) };
								iVar37 = func_586(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x18167C9C4C1E9195(iVar37);
								}
								Global_1574168++;
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
									if (!func_601())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_584(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_275(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_583(iVar35, 0);
								if (bVar34)
								{
									if (func_84(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_582(iParam5))
								{
									func_581(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_581(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0x2BCFB39E86340DAA(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x1483A8AE554B8B2B(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0x05EFB6A616B6FADE(iVar49, iVar35))
							{
								iVar35 = unk_0x1483A8AE554B8B2B(iVar52);
							}
							else
							{
								iVar35 = func_96();
							}
							if (func_600(iVar35))
							{
								if (func_12(unk_0x1483A8AE554B8B2B(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
									Var38 = { func_592(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_129(iVar35) };
									iVar37 = func_586(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x18167C9C4C1E9195(iVar37);
									}
									Global_1574168++;
									iVar51 = func_583(iVar35, 1);
									if (bVar34)
									{
										if (func_84(iVar35, 1))
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
									func_564(iVar35, unk_0xB330C43B9B7B1724(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 11))
						{
							func_561(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_560();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x05EFB6A616B6FADE(uParam3->f_33, 7))
						{
							func_559(uParam3, uParam1);
							func_558(uParam1, 0, 1);
							unk_0x2BCFB39E86340DAA(&(uParam3->f_33), 7);
						}
						func_559(uParam3, uParam1);
						if (!unk_0x05EFB6A616B6FADE(uParam3->f_33, 11))
						{
							unk_0x2BCFB39E86340DAA(&(uParam3->f_33), 11);
						}
						if (func_554(uParam3))
						{
							Global_1574389 = 1;
						}
						func_552(uParam3);
						if (Global_1574389 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574389 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x0FA486DE15EB3004(*uParam1))
					{
						unk_0x0A74F1E9CF777638(7);
						unk_0x84829313FB8AC81C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x0A74F1E9CF777638(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_560();
			func_608(0);
			if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 7))
			{
				unk_0xFA57C719261AA55D(&(uParam3->f_33), 7);
			}
			if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 10))
			{
				unk_0xFA57C719261AA55D(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x0DA2C67B1175034B();
}

void func_552(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_553(0);
	}
}

void func_553(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574389 != 2)
		{
			Global_1574389 = 2;
		}
	}
	else
	{
		switch (Global_1574389)
		{
			case 0:
				Global_1574389 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_554(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x1483A8AE554B8B2B(uParam0->f_37);
	if (iVar15 != func_96() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_129(iVar15) };
		iVar1 = func_557(uParam0, uParam0->f_37);
		if (func_556(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8BD51077CCC26171(&Var2))
					{
						if (unk_0x086B54395A0B9AE6(&Var2))
						{
							iVar16 = 1;
							func_555(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x91EBA8E99A43BD36(&Var2))
					{
						iVar16 = 1;
						func_555(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8BD51077CCC26171(&Var2))
					{
						if (!unk_0x086B54395A0B9AE6(&Var2))
						{
							iVar16 = 1;
							func_555(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_555(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8BD51077CCC26171(&Var2))
					{
						if (!unk_0x91EBA8E99A43BD36(&Var2))
						{
							iVar16 = 1;
							func_555(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x91EBA8E99A43BD36(&Var2))
					{
						iVar16 = 1;
						func_555(uParam0, iVar0, 0);
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

void func_555(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_556(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

var func_557(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_558(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x31A9E530D137684F(*uParam0, "COLLAPSE"))
	{
		unk_0x233A5B4A35140C6B(iParam1);
		unk_0x271C1332F482646C();
	}
	if (iParam2 == 1)
	{
		if (unk_0x31A9E530D137684F(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x271C1332F482646C();
		}
	}
}

void func_559(var uParam0, var uParam1)
{
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_33, 10))
	{
		unk_0x31A9E530D137684F(*uParam1, "SET_HIGHLIGHT");
		unk_0x380580A1A1667F69(uParam0->f_35);
		unk_0x271C1332F482646C();
		unk_0x2BCFB39E86340DAA(&(uParam0->f_33), 10);
	}
}

void func_560()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_561(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar0);
		if (iVar2 != func_96())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_563(uParam0->f_38[iVar0 /*2*/], 0);
					func_562(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_562(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		if (unk_0x31A9E530D137684F(*uParam0, "SET_ICON"))
		{
			unk_0x380580A1A1667F69(iParam1);
			unk_0x380580A1A1667F69(iParam2);
			if (iParam2 == 65)
			{
				unk_0x380580A1A1667F69(iParam3);
			}
			unk_0x271C1332F482646C();
		}
	}
}

int func_563(int iParam0, bool bParam1)
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

void func_564(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_580() && iParam4 < func_579())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x31A9E530D137684F(*uParam2, sVar1))
		{
			unk_0x380580A1A1667F69(iParam4);
			if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_578("");
			}
			else
			{
				unk_0x380580A1A1667F69(iParam10);
			}
			func_578(sParam1);
			unk_0x380580A1A1667F69(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_578("");
			}
			else
			{
				unk_0x380580A1A1667F69(65);
			}
			unk_0x380580A1A1667F69(-1);
			func_578("");
			if (uParam3->f_108 == 6)
			{
				func_578("");
			}
			else
			{
				func_578(&sParam5);
			}
			func_569(uParam3, iParam0);
			unk_0x528BE75B327CACFC(sParam9);
			unk_0x528BE75B327CACFC(sParam9);
			if (func_568(uParam3))
			{
				func_567("DPAD_FRIEND");
			}
			else if (func_566(uParam3))
			{
				func_567("DPAD_FRIEND");
			}
			else if (func_565(uParam3))
			{
				func_567("DPAD_CREW");
			}
			else
			{
				func_567("");
			}
			unk_0x271C1332F482646C();
		}
	}
}

bool func_565(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(uParam0->f_33, 6);
}

bool func_566(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(uParam0->f_33, 5);
}

void func_567(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

int func_568(var uParam0)
{
	if (func_566(uParam0) && func_565(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_569(var uParam0, int iParam1)
{
	if (func_577(iParam1))
	{
		unk_0x380580A1A1667F69(121);
	}
	else if (func_573(iParam1))
	{
		unk_0x380580A1A1667F69(122);
	}
	else if (((unk_0x05EFB6A616B6FADE(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x05EFB6A616B6FADE(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		unk_0x380580A1A1667F69(123);
	}
	else
	{
		if (func_570())
		{
			uParam0->f_36 = 0;
		}
		unk_0x233A5B4A35140C6B(uParam0->f_36);
	}
}

int func_570()
{
	if (unk_0xD8B89B387D170E27())
	{
		if (func_571() || func_88())
		{
			return 1;
		}
	}
	return 0;
}

int func_571()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_88();
	}
	return func_572(Global_4456448.f_130782);
}

int func_572(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4984[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_574()) && func_249(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_574()
{
	if (func_374(unk_0xD4E735F4B6A956AC()) || func_576())
	{
		if (!func_575(unk_0xD4E735F4B6A956AC(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_575(int iParam0, int iParam1)
{
	if (func_312(iParam0) == iParam1)
	{
		return func_442(iParam0);
	}
	return 0;
}

int func_576()
{
	switch (func_211(unk_0xD4E735F4B6A956AC()))
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

int func_577(int iParam0)
{
	if (func_570())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_85(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_574()) && func_251(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_578(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

int func_579()
{
	int iVar0;
	
	if (Global_1574170)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_580()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_581(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_580() && iParam3 < func_579())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574170)
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
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x0FA486DE15EB3004(*uParam1))
		{
			if (unk_0x31A9E530D137684F(*uParam1, sVar1))
			{
				unk_0x380580A1A1667F69(iParam3);
				if (unk_0x05EFB6A616B6FADE(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_578("");
				}
				else
				{
					unk_0x380580A1A1667F69(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x429D45A6C6520026(sParam16))
				{
					func_567(sParam16);
				}
				else
				{
					func_578(&(uParam2->f_1));
				}
				unk_0x380580A1A1667F69(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_578("");
				}
				else
				{
					unk_0x380580A1A1667F69(65);
				}
				if (iParam12 == 1)
				{
					unk_0x380580A1A1667F69(iVar0);
				}
				else
				{
					unk_0x380580A1A1667F69(-1);
				}
				if (func_601())
				{
					func_578("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x429D45A6C6520026(sParam16))
				{
					unk_0x390B339C943A8A54("FM_AE_ONE_INT");
					unk_0x4FDA9E6EF359F8A9(sParam16);
					unk_0xCDA87E1DA52C8C9D(iParam17);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 5 && !unk_0x429D45A6C6520026(sParam16))
				{
					unk_0x390B339C943A8A54("FM_AE_ONE_INT");
					unk_0x4FDA9E6EF359F8A9(sParam16);
					unk_0xCDA87E1DA52C8C9D(iParam17);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 7 && !unk_0x429D45A6C6520026(sParam16))
				{
					unk_0x390B339C943A8A54("FM_AE_TWO_INT");
					unk_0x4FDA9E6EF359F8A9(sParam16);
					unk_0xCDA87E1DA52C8C9D(iParam17);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 8 && !unk_0x429D45A6C6520026(&(uParam2->f_104)))
				{
					unk_0x390B339C943A8A54("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x1757EE80C206FA5E(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xCDA87E1DA52C8C9D(iParam10);
					}
					unk_0x4FDA9E6EF359F8A9(&(uParam2->f_104));
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x390B339C943A8A54("FM_AE_CASH");
					unk_0x976BD422410BF38A(iParam10, 1);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x390B339C943A8A54("FM_AE_CASH");
						unk_0x976BD422410BF38A(iParam10, 1);
						unk_0xD481829E3E36543B();
					}
					else
					{
						unk_0x390B339C943A8A54("FM_NG_CASH");
						unk_0x976BD422410BF38A(iParam10, 1);
						unk_0xD481829E3E36543B();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x429D45A6C6520026(&(uParam2->f_104)))
					{
						func_567(&(uParam2->f_104));
					}
					else
					{
						func_578("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam14, 6);
					unk_0xD481829E3E36543B();
				}
				else if (fParam13 != -1f)
				{
					unk_0x390B339C943A8A54("NUMBER");
					unk_0x1757EE80C206FA5E(fParam13, 1);
					unk_0xD481829E3E36543B();
				}
				else if (iParam10 != -1)
				{
					unk_0x380580A1A1667F69(iParam10);
				}
				else
				{
					func_578("");
				}
				if (uParam2->f_108 == 6)
				{
					func_578("");
				}
				else
				{
					func_578(&sParam4);
				}
				func_569(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x429D45A6C6520026(sParam8))
				{
					func_578("");
					func_578("");
				}
				else
				{
					unk_0x528BE75B327CACFC(sParam8);
					unk_0x528BE75B327CACFC(sParam8);
				}
				if (func_568(uParam2))
				{
					func_567("DPAD_FRIEND");
				}
				else if (func_566(uParam2))
				{
					func_567("DPAD_FRIEND");
				}
				else if (func_565(uParam2))
				{
					func_567("DPAD_CREW");
				}
				else
				{
					func_567("");
				}
				unk_0x271C1332F482646C();
			}
		}
	}
}

int func_582(int iParam0)
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

int func_583(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_374(iParam0)) && !func_98(iParam0))
	{
		iVar0 = func_63();
	}
	iVar1 = func_82(iParam0);
	if (!iVar1 == -1)
	{
		return func_80(iVar1);
	}
	return iVar0;
}

int func_584(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_585(iParam3))
	{
		*fParam1 = (func_277(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_582(iParam3))
	{
		*fParam1 = (func_277(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_585(int iParam0)
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

int func_586(int iParam0)
{
	int iVar0;
	
	iVar0 = func_589(iParam0);
	if (iVar0 == -1)
	{
		func_587(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_587(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_589(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_588(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_588(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_589(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x07D08EE9B44B4EE9(Global_1379953[iVar0 /*5*/].f_2) && unk_0x2C58CFA8E806E25E(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_590(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_590(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (unk_0x07D08EE9B44B4EE9(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18167C9C4C1E9195(Global_1379953[iParam0 /*5*/].f_2), 64);
			unk_0x422B7FAC2AC425AD(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xAAA14DE52F34B110(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1380114)
	{
		Global_1379953[iVar32 /*5*/] = { Global_1379953[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_591(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_591(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_96();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		uParam0->f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

struct<4> func_592(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2503649 = { func_129(iParam0) };
		if (unk_0x29A02C184A66D25E())
		{
			if (func_556(Global_2503649))
			{
				if (!unk_0xDD2275BE82C4DA3E(&Global_2503649))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x804C0CBA285C7A35(0))
		{
			return Var0;
		}
		if (func_596(&Global_2503649))
		{
			Global_2503579 = { func_594(iParam0) };
			func_593(&Global_2503579, &Var0);
		}
	}
	return Var0;
}

void func_593(var uParam0, var uParam1)
{
	unk_0x728192F7FED00EAE(uParam0, 35, uParam1);
}

struct<35> func_594(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_595(iParam0))
	{
		return Global_1312889[unk_0xD4E735F4B6A956AC() /*35*/];
	}
	Var0 = { func_129(iParam0) };
	unk_0xE087FDE0E2FA8ADF(&Var13, 35, &Var0);
	return Var13;
}

int func_595(int iParam0)
{
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		return 1;
	}
	return 0;
}

int func_596(var uParam0)
{
	if (unk_0x65A878D380D59179())
	{
		if (unk_0xD1832FEBE50B1AB1() && unk_0xE0B3F7A8017F6425(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_597(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_599(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_598(iParam0))
	{
		return 0;
	}
	if ((!func_606(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_605(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_598(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_142, 22);
}

int func_599(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 10) || unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_96())
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
		if (unk_0x05EFB6A616B6FADE(Global_1589747[iVar0 /*790*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_601()
{
	switch (func_211(unk_0xD4E735F4B6A956AC()))
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
	switch (func_312(unk_0xD4E735F4B6A956AC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_98(unk_0xD4E735F4B6A956AC()))
	{
		switch (func_211(unk_0xD4E735F4B6A956AC()))
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
	if (func_575(unk_0xD4E735F4B6A956AC(), 236))
	{
		return 1;
	}
	return 0;
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x1483A8AE554B8B2B(iVar0), 0, 1))
		{
			iVar1 = unk_0x1483A8AE554B8B2B(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_606(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_605(iVar1))
				{
					if (func_603(iVar1, iParam1, 0))
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

int func_603(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_96())
	{
		if (!bParam2)
		{
			if (func_604(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_96())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_604(int iParam0, int iParam1)
{
	if (iParam1 != func_96())
	{
		if (iParam0 != func_96())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_96())
			{
				if (Global_1625435[iParam0 /*560*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_605(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_606(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0xD4E735F4B6A956AC(), 0, 1))
		{
			if (unk_0xBC6A832F36065FDF(iParam0, unk_0xD4E735F4B6A956AC()) || func_211(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_607(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x380580A1A1667F69(iParam1);
		unk_0x380580A1A1667F69(iParam2);
		unk_0x271C1332F482646C();
	}
}

void func_608(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1368242.f_2 == 0)
		{
			Global_1368242.f_2 = 1;
		}
	}
	else if (Global_1368242.f_2 == 1)
	{
		Global_1368242.f_2 = 0;
	}
}

void func_609()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 1))
	{
		if (func_293())
		{
			func_280();
		}
	}
}

int func_610()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 0) && func_293())
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 1) && func_293())
	{
		return 1;
	}
	return 0;
}

int func_611()
{
	if (func_293())
	{
		if (func_52(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_612()
{
	if (func_293())
	{
		if (func_64(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_613(int iParam0)
{
	if (Global_1368242.f_1 != Global_1368242)
	{
		Global_1368242.f_1 = Global_1368242;
	}
	if (Global_1368242 != iParam0)
	{
		Global_1368242 = iParam0;
	}
}

int func_614(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_657(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_656();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_655())
		{
			if (func_654() > 0 && Global_1574170)
			{
				unk_0xACB14342D115775D();
				unk_0x332297B49C4256C3(fVar7);
				unk_0xD8C147DA332E7F06(18);
				if (unk_0xE06AA0996C4E4E03())
				{
					unk_0x657F3224D1A882F4();
				}
				unk_0xD8C147DA332E7F06(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_644())
		{
			func_643(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 26))
	{
		func_643(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_654() == 1)
		{
			func_642(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_643(uParam0, uParam2, 0);
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xE06AA0996C4E4E03())
		{
			unk_0x657F3224D1A882F4();
		}
		unk_0xD8C147DA332E7F06(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_654() == 0 && !bParam5))
		{
			func_643(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_641();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0xACB14342D115775D();
				}
				unk_0xD8C147DA332E7F06(18);
			}
			if (!unk_0x05EFB6A616B6FADE(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_641();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xACB14342D115775D();
					}
					unk_0xD8C147DA332E7F06(18);
				}
				unk_0x332297B49C4256C3(fVar7);
				if (func_642(bVar6, uParam0, 0))
				{
					func_607(uParam0, 0, 0);
					uVar4 = func_639(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_637(iParam1) };
					if (bParam4)
					{
						func_634(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_628(uParam0, func_631(uParam2), func_629(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_622(uParam2);
						if (!unk_0x429D45A6C6520026(uParam6))
						{
							sVar8 = sParam6;
						}
						func_620(uParam0, sVar8, func_621(), -1);
					}
					else if (func_570())
					{
						uParam2->f_34 = Global_1574169;
						func_634(uParam0, uVar4, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574169;
						func_634(uParam0, uVar4, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar9 = func_615(iParam1);
						func_634(uParam0, uVar4, &Var0, 1, iVar9, -1, 1);
					}
					unk_0x2BCFB39E86340DAA(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x05EFB6A616B6FADE(uParam2->f_33, 0))
			{
				Global_1574168 = uParam3;
				Global_1574167 = 1;
				unk_0x332297B49C4256C3(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574169)
					{
						unk_0xFA57C719261AA55D(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_615(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_619())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
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
			if (func_618(unk_0xD4E735F4B6A956AC()))
			{
				iVar0 = 20;
			}
			if (func_617(unk_0xD4E735F4B6A956AC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_616(unk_0xD4E735F4B6A956AC()))
	{
		iVar0 = 2;
	}
	if (func_212())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_616(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_617(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_618(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_619()
{
	return Global_4456448.f_1 == 0;
}

void func_620(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		unk_0x31A9E530D137684F(*uParam0, "SET_TITLE");
		if (unk_0x429D45A6C6520026(sParam2))
		{
			func_567(sParam1);
		}
		else
		{
			unk_0x390B339C943A8A54("FM_AE_BRACKT");
			unk_0x4FDA9E6EF359F8A9(sParam1);
			unk_0x4FDA9E6EF359F8A9(sParam2);
			unk_0xD481829E3E36543B();
		}
		func_567("");
		if (iParam3 != -1)
		{
			unk_0x380580A1A1667F69(iParam3);
		}
		unk_0x271C1332F482646C();
	}
}

char* func_621()
{
	switch (func_211(unk_0xD4E735F4B6A956AC()))
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

char* func_622(var uParam0)
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
	switch (func_211(unk_0xD4E735F4B6A956AC()))
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
			if (func_624())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_248(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_248(1))
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
			if (func_623(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_623(int iParam0)
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

bool func_624()
{
	return (func_627() && func_625(func_626()));
}

int func_625(int iParam0)
{
	return func_251(iParam0, 1);
}

int func_626()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_35;
}

bool func_627()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148;
}

void func_628(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		unk_0x31A9E530D137684F(*uParam0, "SET_TITLE");
		if (unk_0x429D45A6C6520026(uParam2))
		{
			func_567(uParam1);
		}
		else if (func_312(unk_0xD4E735F4B6A956AC()) == 133)
		{
			unk_0x390B339C943A8A54("FM_AE_BRACKT_C");
			unk_0x4FDA9E6EF359F8A9(uParam1);
			unk_0x4FDA9E6EF359F8A9(sParam2);
			unk_0xD481829E3E36543B();
		}
		else
		{
			unk_0x390B339C943A8A54("FM_AE_BRACKT");
			unk_0x4FDA9E6EF359F8A9(sParam1);
			unk_0x4FDA9E6EF359F8A9(sParam2);
			unk_0xD481829E3E36543B();
		}
		func_567("");
		if (iParam3 != -1)
		{
			unk_0x380580A1A1667F69(iParam3);
		}
		unk_0x271C1332F482646C();
	}
}

char* func_629(var uParam0)
{
	int iVar0;
	
	iVar0 = func_312(unk_0xD4E735F4B6A956AC());
	if (func_630())
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
			switch (func_311())
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

bool func_630()
{
	return Global_1589620;
}

char* func_631(var uParam0)
{
	int iVar0;
	
	iVar0 = func_312(unk_0xD4E735F4B6A956AC());
	if (func_630())
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
			if (func_633() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_633() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_311())
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
			if (func_632() == 1)
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

int func_632()
{
	return Global_2524719.f_4807;
}

int func_633()
{
	if (func_312(unk_0xD4E735F4B6A956AC()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_634(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		unk_0x31A9E530D137684F(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_578(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x390B339C943A8A54(uParam1);
			unk_0xCDA87E1DA52C8C9D(iParam5);
			unk_0xD481829E3E36543B();
		}
		else
		{
			func_567(sParam1);
		}
		if (func_655() && iParam6)
		{
			if (func_636())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x390B339C943A8A54("LBD_DPD_CNT");
			unk_0xCDA87E1DA52C8C9D(iVar0);
			unk_0xCDA87E1DA52C8C9D(iVar1);
			unk_0xD481829E3E36543B();
		}
		else
		{
			func_567(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x380580A1A1667F69(iParam4);
			if (func_635(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x380580A1A1667F69(166);
			}
			else if (func_61())
			{
				unk_0x380580A1A1667F69(220);
			}
		}
		unk_0x271C1332F482646C();
	}
}

int func_635(int iParam0)
{
	if (func_618(iParam0) || func_617(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_636()
{
	return Global_1574170;
}

struct<4> func_637(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_638(unk_0xD4E735F4B6A956AC()) || func_616(unk_0xD4E735F4B6A956AC()))
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
			StringIntConCat(&Var0, Global_4456448.f_38, 16);
			break;
	}
	if (func_570() && unk_0xD8B89B387D170E27())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_638(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

char* func_639(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_570() || unk_0x429D45A6C6520026(uParam1)))
	{
		uVar0 = func_640();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x429D45A6C6520026(sParam1))
	{
		if (Global_1574407 == 1)
		{
			Global_1574407 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
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

char* func_640()
{
	if (unk_0x1C551925B29CEB48())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xB823EE3B9045D1D9())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x141A6691F21DAFF6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x48B7FA68F0588F26())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_641()
{
	Global_37027 = 1;
}

bool func_642(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB00CD6895BDB01A0("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB00CD6895BDB01A0("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB00CD6895BDB01A0("mp_matchmaking_card");
	}
	return unk_0x0FA486DE15EB3004(*uParam1);
}

void func_643(var uParam0, var uParam1, bool bParam2)
{
	unk_0xFA57C719261AA55D(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_560();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
			unk_0xFA57C719261AA55D(&(Global_2524719.f_4578), 5);
		}
	}
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		unk_0x86795B44CE5FE021(uParam0);
	}
	if (unk_0x05EFB6A616B6FADE(uParam1->f_33, 0))
	{
		unk_0xFA57C719261AA55D(&(uParam1->f_33), 0);
	}
	unk_0x332297B49C4256C3(0f);
}

int func_644()
{
	if (func_653())
	{
		return 0;
	}
	if (func_546())
	{
		return 0;
	}
	if (!func_651())
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_650(8, -1))
	{
		return 0;
	}
	if (func_654() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	else if (!func_338(unk_0xD4E735F4B6A956AC(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_649(1) || func_647(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (func_646() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_94(unk_0xD4E735F4B6A956AC()) && !func_646())
	{
		return 0;
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (Global_1654549)
	{
		return 0;
	}
	if (func_645(0))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (Global_1361433)
	{
		return 0;
	}
	if ((Global_1679581.f_705.f_5 || Global_1682392.f_705.f_5) || Global_1678624.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_645(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_39, iParam0);
}

bool func_646()
{
	return (unk_0x05EFB6A616B6FADE(Global_4456448.f_30, 12) && unk_0x05EFB6A616B6FADE(Global_1686219, 0));
}

int func_647(bool bParam0)
{
	if (unk_0x1BA113A80E25DF34())
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (func_648(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xD73B1037F6BD4B90(0, 25) || unk_0xD73B1037F6BD4B90(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17228.f_130)
	{
		return 0;
	}
	if (unk_0xD73B1037F6BD4B90(0, 19) || (!bParam0 && unk_0x1190AB7024CBD8CB(0, 19)))
	{
		return 1;
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (((unk_0xD73B1037F6BD4B90(0, 166) || unk_0xD73B1037F6BD4B90(0, 167)) || unk_0xD73B1037F6BD4B90(0, 168)) || unk_0xD73B1037F6BD4B90(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1190AB7024CBD8CB(0, 166) || unk_0x1190AB7024CBD8CB(0, 167)) || unk_0x1190AB7024CBD8CB(0, 168)) || unk_0x1190AB7024CBD8CB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_648(int iParam0)
{
	int iVar0;
	
	if (unk_0x965BA0E75ABD2A72())
	{
		if (!unk_0x4915F4759304D5CF(uParam0))
		{
			unk_0xF990CFC0F1D94A39(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_649(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_650(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

int func_651()
{
	if (func_652())
	{
		return 1;
	}
	if (unk_0x71364F510A1CB69F())
	{
		return 0;
	}
	if (unk_0x607776744A243309() || unk_0x3BE8B7AEED1A3971())
	{
		return 0;
	}
	if (unk_0x35ADB0B156EC2F45())
	{
		return 0;
	}
	return 1;
}

bool func_652()
{
	return Global_1312438;
}

bool func_653()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_654()
{
	return Global_1368245.f_68;
}

int func_655()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_656()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x79A3348EEC2E5FE7()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_658()
{
	if (func_661())
	{
		return 1;
	}
	if (func_7(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_630())
	{
		return 1;
	}
	if (func_374(unk_0xD4E735F4B6A956AC()))
	{
		switch (func_312(unk_0xD4E735F4B6A956AC()))
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
				if (!func_659(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_659(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_659(unk_0xD4E735F4B6A956AC()))
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

bool func_659(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_660(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_374(unk_0xD4E735F4B6A956AC()) && !func_98(unk_0xD4E735F4B6A956AC())) && !func_575(unk_0xD4E735F4B6A956AC(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_104(unk_0xD4E735F4B6A956AC(), 0) && func_98(unk_0xD4E735F4B6A956AC()))
		{
			return 1;
		}
		if (func_539(unk_0xD4E735F4B6A956AC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_661()
{
	if (func_662(unk_0xD4E735F4B6A956AC()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_662(int iParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xC2E5A92865328A63(iParam0);
		}
	}
	return 0;
}

void func_663()
{
	if (Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_3 == 3)
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_345, 8))
		{
			if ((!func_7(unk_0xD4E735F4B6A956AC()) && !func_154(unk_0xD4E735F4B6A956AC())) && !func_386(unk_0xD4E735F4B6A956AC()))
			{
				func_385();
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(iLocal_345, 9))
		{
			if ((func_7(unk_0xD4E735F4B6A956AC()) || func_154(unk_0xD4E735F4B6A956AC())) || func_386(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x75E0422C82CFC0E5();
				Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4 = 0;
				unk_0x2BCFB39E86340DAA(&iLocal_345, 9);
			}
		}
	}
}

void func_664()
{
	int iVar0;
	
	if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iLocal_349)))
	{
		iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iLocal_349));
		if (unk_0xC77FA683E9BB485B(iVar0))
		{
			func_665(iVar0, 2);
		}
	}
	iLocal_349++;
	if (iLocal_349 >= unk_0x48908CAFF1B58FF8())
	{
		iLocal_349 = 0;
	}
}

void func_665(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1574631.f_18)))
	{
		return;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1574631.f_2, iParam0))
	{
		if (Global_1574631 < iParam1 && unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 1))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 0);
			return;
		}
		if (Global_1574631 != 0)
		{
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 1);
		}
		Global_1574631 = 0;
		Global_1574631.f_2 = 0;
	}
	unk_0x2BCFB39E86340DAA(&(Global_1574631.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_666(iParam0))
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
		Global_1574631++;
	}
}

bool func_666(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 10);
}

void func_667(int iParam0, int iParam1)
{
	Local_2621[iParam0 /*12*/] = iParam1;
}

int func_668()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_742.f_534[iVar0 /*42*/].f_1 = func_96();
		iVar0++;
	}
	return 1;
}

int func_669()
{
	return Local_654.f_0;
}

int func_670(int iParam0)
{
	return Local_2621[iParam0 /*12*/];
}

void func_671()
{
	if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 6))
	{
		func_694();
		unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 6);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 7))
	{
		if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 4) || unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 16))
		{
			if (((!unk_0x49B680F5AF4359D0() && !unk_0xE06AA0996C4E4E03()) && !func_293()) && func_12(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 7);
				func_287("FME_PASINT", 30000);
				func_286(1);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 17))
		{
			if (func_157() && !func_156())
			{
				unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 17);
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 16);
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 23))
	{
		if (((((!unk_0x49B680F5AF4359D0() && !unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 2)) && func_12(unk_0xD4E735F4B6A956AC(), 1, 1)) && !Global_68494) && !Global_53362) && !unk_0xE06AA0996C4E4E03())
		{
			if (func_692())
			{
				func_287("AMEV_GA_RP", -1);
				if (func_211(unk_0xD4E735F4B6A956AC()) != 200)
				{
					func_286(1);
				}
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 23);
			}
		}
	}
	if (unk_0xD1ABB20CFF127CCC() && unk_0x05724BB62A634BD8() == 15)
	{
		if (func_399(unk_0xD4E735F4B6A956AC()))
		{
			if (!unk_0x63EB1B015C63D30D(1344549371))
			{
				unk_0x63104F063F241EC1(1344549371);
			}
		}
		else if (unk_0x63EB1B015C63D30D(1344549371))
		{
			unk_0x6ED276A25E7CC2CC(1344549371);
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 9))
	{
		if ((((!unk_0x49B680F5AF4359D0() && !unk_0xE06AA0996C4E4E03()) && !func_293()) && func_12(unk_0xD4E735F4B6A956AC(), 1, 1)) && !func_155(unk_0xD4E735F4B6A956AC(), 21))
		{
			unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 9);
			func_691(0);
			func_287("FME_TBL00", -1);
			func_286(1);
		}
	}
	if (func_374(unk_0xD4E735F4B6A956AC()))
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 18))
		{
			if ((func_155(unk_0xD4E735F4B6A956AC(), 21) && unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 20)) && !unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 19))
			{
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 18);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 18))
		{
			if (((((!unk_0x49B680F5AF4359D0() && !unk_0xE06AA0996C4E4E03()) && !func_293()) && func_12(unk_0xD4E735F4B6A956AC(), 1, 1)) && unk_0x3A83743561B4F70C()) && !Global_2524719.f_4816)
			{
				unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 18);
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 19);
				func_287("AMTT_RPAS", -1);
				func_286(1);
			}
		}
	}
	if (((((func_374(unk_0xD4E735F4B6A956AC()) && !func_8(unk_0xD4E735F4B6A956AC())) && func_312(unk_0xD4E735F4B6A956AC()) != 146) && !func_7(unk_0xD4E735F4B6A956AC())) && !func_154(unk_0xD4E735F4B6A956AC())) && !func_681())
	{
		if (func_398(func_312(unk_0xD4E735F4B6A956AC())))
		{
			unk_0x5F51CC55425AAE14(unk_0xD4E735F4B6A956AC());
		}
		if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 22))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 22);
		}
		if (func_442(unk_0xD4E735F4B6A956AC()) || func_392())
		{
			if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 10))
			{
				if (func_680(func_312(unk_0xD4E735F4B6A956AC())))
				{
					if (func_255(0) && !Global_2391045)
					{
						unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_396(1);
						unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 14);
					}
				}
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 10);
			}
		}
		if (func_399(unk_0xD4E735F4B6A956AC()))
		{
			if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 11))
			{
				if (!Global_93284.f_8)
				{
					unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 12);
					func_394(1);
				}
				if (!func_679())
				{
					unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 13);
					func_393();
				}
				if (!Global_2391045)
				{
					unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 14);
					if (func_255(0) && !Global_2391045)
					{
						unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 9);
					}
					func_396(1);
				}
				unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 11);
			}
		}
		else
		{
			func_677(0);
		}
	}
	else
	{
		func_677(1);
	}
	func_672();
	if (func_391(func_312(unk_0xD4E735F4B6A956AC())) && !unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 21))
	{
		unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 21);
	}
	if ((func_157() && !func_156()) || func_155(unk_0xD4E735F4B6A956AC(), 21))
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 10))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 10);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 10))
	{
		unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 10);
	}
}

void func_672()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_293())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_524(iVar2))
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
				if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 26))
				{
					unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 26);
				}
				func_673(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 26))
	{
		func_44(&(Global_1574631.f_22));
		unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 26);
	}
}

void func_673(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1574631.f_22)))
	{
		func_2(&(Global_1574631.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574631.f_22), iParam1, 0))
	{
		if (func_654() > 0)
		{
			func_676(iParam0);
			if (func_284("AMEV_LBD_HELP"))
			{
				unk_0x135C61E339DABBAC(1);
			}
			func_44(&(Global_1574631.f_22));
		}
	}
	else
	{
		func_675(0);
		func_674();
	}
}

void func_674()
{
	Global_2524719.f_4519 = 0;
}

void func_675(int iParam0)
{
	Global_1368245.f_68 = iParam0;
}

void func_676(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

void func_677(int iParam0)
{
	if ((unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 11) || (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 10) && iParam0)) || (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 22) && iParam0))
	{
		if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 12))
		{
			unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 12);
			func_394(0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 13))
		{
			unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 13);
			func_678();
		}
		if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 14) && !func_104(unk_0xD4E735F4B6A956AC(), 0))
		{
			unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 14);
			func_396(0);
		}
		unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 11);
		unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 10);
		unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 22);
	}
}

void func_678()
{
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4721), 0);
}

bool func_679()
{
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4721, 0);
}

int func_680(int iParam0)
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
			return func_399(unk_0xD4E735F4B6A956AC());
		
		case 133:
			return (func_392() || func_5(func_311()));
		
		default:
	}
	return 0;
}

int func_681()
{
	if (((((((((func_690() || func_689()) || func_688()) || func_306()) || (func_687() && !unk_0xD8B89B387D170E27())) || (func_684() && !func_683())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_682() == 2 && !unk_0xD8B89B387D170E27()))
	{
		return 1;
	}
	return 0;
}

int func_682()
{
	return Global_968393;
}

bool func_683()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 27);
}

int func_684()
{
	if (func_686() || func_685())
	{
		return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_98 == 8;
	}
	return 0;
}

var func_685()
{
	return Global_2448386.f_624;
}

bool func_686()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 11);
}

bool func_687()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 5);
}

bool func_688()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 2);
}

bool func_689()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 20);
}

bool func_690()
{
	return Global_2448386.f_587;
}

void func_691(int iParam0)
{
	int iVar0;
	
	iVar0 = func_199(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x05EFB6A616B6FADE(iVar0, 0))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 0);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 1))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 1);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 2))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x05EFB6A616B6FADE(iVar0, 3))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 3);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 4))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 4);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 5))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x05EFB6A616B6FADE(iVar0, 6))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 6);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 7))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 7);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 8))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x05EFB6A616B6FADE(iVar0, 9))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 9);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 10))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 10);
		}
		else if (!unk_0x05EFB6A616B6FADE(iVar0, 11))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 11);
		}
	}
	func_190(2534, iVar0, -1, 1, 0);
}

int func_692()
{
	int iVar0;
	
	if (!func_45(&(Global_1574631.f_15)))
	{
		func_2(&(Global_1574631.f_15), 0, 0);
		Global_1574631.f_17 = 0;
	}
	else if (func_1(&(Global_1574631.f_15), 1000, 0))
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Global_1574631.f_17)))
		{
			iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Global_1574631.f_17));
			if (unk_0xC77FA683E9BB485B(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_693(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0xD4E735F4B6A956AC()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574631.f_17++;
		if (Global_1574631.f_17 >= 32)
		{
			Global_1574631.f_17 = 0;
			func_44(&(Global_1574631.f_15));
		}
	}
	return 0;
}

int func_693(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_194(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589747[iVar0 /*790*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_694()
{
	unk_0x9BB7BCDF2AC2D6F9(5);
	func_696();
	unk_0xBF6EED5D6E0CD9BF(1f);
	unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 8);
	func_695();
}

void func_695()
{
	if (Global_1664222)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1664223, 0))
		{
			unk_0xFA57C719261AA55D(&Global_2533185, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_1664223, 1))
		{
			unk_0xFA57C719261AA55D(&Global_2533185, 1);
		}
		if (unk_0x05EFB6A616B6FADE(Global_1664223, 5))
		{
			unk_0xFA57C719261AA55D(&Global_2533185, 5);
		}
		if (unk_0x3C43F06C8C621742(-355737150))
		{
			unk_0x6417FCFC98785F84(-355737150, 1, 0, 0);
		}
		if (unk_0x3C43F06C8C621742(-580979506))
		{
			unk_0x6417FCFC98785F84(-580979506, 1, 0, 0);
		}
		if (unk_0x3C43F06C8C621742(-1426452475))
		{
			unk_0x6417FCFC98785F84(-1426452475, 1, 0, 0);
		}
		if (unk_0x3C43F06C8C621742(745417724))
		{
			unk_0x6417FCFC98785F84(745417724, 1, 0, 0);
		}
		if (unk_0x3C43F06C8C621742(-1305304906))
		{
			unk_0x6417FCFC98785F84(-1305304906, 1, 0, 0);
		}
		if (unk_0x3C43F06C8C621742(-1543175077))
		{
			unk_0x6417FCFC98785F84(-1543175077, 1, 0, 0);
		}
		if (unk_0x3C43F06C8C621742(-811770997))
		{
			unk_0x6417FCFC98785F84(-811770997, 1, 0, 0);
		}
		Global_1664223 = 0;
	}
	Global_1664222 = 0;
}

void func_696()
{
	if (unk_0x2BCD0524CDEE1FD2(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == unk_0xFCB3E4B16B4A9EC1() && Global_2524719.f_4878 < 1f)
		{
			return;
		}
	}
	Global_2524719.f_4879 = -1;
	Global_2524719.f_4878 = 1f;
}

int func_697()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2524719.f_4719)
	{
		return 0;
	}
	if ((!func_45(&(Local_654.f_39)) && !func_45(&(Local_654.f_41))) && !func_45(&(Local_654.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0xFFCC7EBF88BDEE54();
	if (func_45(&(Local_654.f_41)))
	{
		iVar0 = func_698(&uVar2, &(Local_654.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_654.f_39)))
	{
		iVar0 = func_698(&uVar2, &(Local_654.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_654.f_43)))
	{
		iVar0 = func_698(&uVar2, &(Local_654.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_698(var uParam0, var uParam1)
{
	return unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(*uParam0, *uParam1));
}

int func_699()
{
	if (func_700())
	{
		return 1;
	}
	return 0;
}

bool func_700()
{
	return Global_1574631.f_24;
}

int func_701()
{
	var uVar0;
	
	func_705(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_704())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_703())
	{
		return 1;
	}
	if (func_702(157))
	{
		if (!func_690())
		{
			return 1;
		}
	}
	if (func_702(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_401() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_401()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_702(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_703()
{
	return Global_2458191;
}

bool func_704()
{
	return Global_2448386.f_582;
}

void func_705(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_706(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_706(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xEE978C39384D834F(Var0.f_1);
			if (unk_0xDC5D81351D6A4DDB(uVar3))
			{
				if (unk_0x5D7DFE2058701942(iVar3, 0))
				{
					uVar4 = unk_0xCAEB6CE71A2C7212(iVar3, 0);
					if (unk_0xEB1A41F6F719807C(uVar4, Var0.f_2) && unk_0xB592B7A61F21E7A5())
					{
						if (func_707(uVar4, &bVar5))
						{
							unk_0x3D2495030621765B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x792676988A48387F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_707(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(iParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_708()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_709()
{
	int iVar0;
	
	if (func_701())
	{
		Local_3006.f_5 = 5;
	}
	else if (unk_0x05EFB6A616B6FADE(Local_654.f_2, 0))
	{
		Local_3006.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3006.f_5 = 1;
	}
	else
	{
		Local_3006.f_5 = 2;
	}
	Local_3006.f_0 = Local_654.f_52;
	Local_3006.f_1 = Local_654.f_53;
	Local_3006.f_4 = Local_654.f_66;
	Local_3006.f_3 = Local_654.f_51;
	Local_3006.f_10 = (unk_0x5E0F2F352218B916() - Local_3006.f_9);
	if (!Global_262145.f_11387)
	{
		if (Local_3006.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0xD60943E3BE730BF0() != -1)
	{
		func_745(Local_3006, Local_654.f_3, Local_2621[unk_0xD60943E3BE730BF0() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0x05EFB6A616B6FADE(iLocal_345, 4))
	{
		unk_0x5DE59A67B5F326CF(iLocal_353);
		unk_0xFA57C719261AA55D(&iLocal_345, 4);
	}
	unk_0xB4442316D0B880FD(iLocal_353);
	unk_0xB4442316D0B880FD(iLocal_354);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x05EFB6A616B6FADE(iLocal_640, iVar0) && !unk_0x57269F5E44F5F616(uLocal_641[iVar0]))
		{
			unk_0x5DE59A67B5F326CF(uLocal_641[iVar0]);
			unk_0xB4442316D0B880FD(uLocal_641[iVar0]);
		}
		iVar0++;
	}
	func_382();
	func_455(1, 1);
	unk_0xB09429BC3A2B9574(0);
	func_526(0);
	func_389(Local_654.f_3, 0);
	func_710(133, 0, Local_654.f_37 == 6);
	func_388(23, 0);
	if (func_298() >= 0f)
	{
		unk_0xC6B90106C92A44C9(0f, 0, 21);
	}
	if (!unk_0x05EFB6A616B6FADE(iLocal_345, 9))
	{
		unk_0x75E0422C82CFC0E5();
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_710(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xD4E735F4B6A956AC() != -1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 13))
		{
			unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 13);
		}
		if (unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 14))
		{
			unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 14);
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 21))
	{
		unk_0xFA57C719261AA55D(&(Global_1574631.f_1), 21);
	}
	func_741();
	unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
	unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_740(func_312(unk_0xD4E735F4B6A956AC()));
		func_388(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xD4E735F4B6A956AC() != -1) && func_739(unk_0xD4E735F4B6A956AC()) >= 12)
		{
			func_738(2546, -1);
			iVar1 = func_199(2546, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x2BCFB39E86340DAA(&Global_1574657, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x2BCFB39E86340DAA(&Global_1574657, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x2BCFB39E86340DAA(&Global_1574657, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x2BCFB39E86340DAA(&Global_1574657, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x2BCFB39E86340DAA(&Global_1574657, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x2BCFB39E86340DAA(&Global_1574657, 5);
			}
		}
		func_737();
		func_736();
		func_735();
		if ((!func_100(unk_0xD4E735F4B6A956AC()) && !func_292(unk_0xD4E735F4B6A956AC())) && !func_437())
		{
			func_719();
		}
		func_718();
		if (!unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 0) && !unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 1))
		{
			func_694();
		}
		func_717();
		unk_0xFA57C719261AA55D(&(Global_2524719.f_1733), 2);
		func_716();
		func_159();
	}
	if (unk_0x63EB1B015C63D30D(1344549371))
	{
		unk_0x6ED276A25E7CC2CC(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xD4E735F4B6A956AC() != -1 && !func_155(unk_0xD4E735F4B6A956AC(), 21)) && !func_104(unk_0xD4E735F4B6A956AC(), 0))
		{
			func_396(0);
			func_394(0);
			func_715();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2460362 = -1;
			func_46(26, -1);
		}
	}
	if (!func_711())
	{
		Global_2503540 = 1;
	}
}

int func_711()
{
	if (((((!func_635(unk_0xD4E735F4B6A956AC()) && !func_616(unk_0xD4E735F4B6A956AC())) && func_312(unk_0xD4E735F4B6A956AC()) != 146) && !func_714()) && !func_713()) && !func_712(Global_4456448.f_152990))
	{
		return 0;
	}
	return 1;
}

bool func_712(int iParam0)
{
	return iParam0 == 57;
}

int func_713()
{
	if (Global_4456448.f_130782 == Global_262145.f_9483)
	{
		return 1;
	}
	return 0;
}

int func_714()
{
	if ((Global_4456448 == 0 && unk_0xD8B89B387D170E27()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_152990 > 0) || unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 15)) || unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 18)) || unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 19)) || unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 29)) || unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 28)) || unk_0x05EFB6A616B6FADE(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_715()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x05EFB6A616B6FADE(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0xFA57C719261AA55D(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_716()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4720, 1))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_4720), 1);
	}
	if (Global_2524719.f_4720 > 0)
	{
		unk_0x9444470D6D9ADB88("FM_COUNTDOWN_30S_KILL");
		unk_0x9444470D6D9ADB88("FM_COUNTDOWN_30S_FIRA");
		unk_0x5AD7D03C214BDA88("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x2A22FF5D4ECD503A(1);
		Global_2524719.f_4720 = 0;
		unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
		unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 0);
		unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 0);
		if (!unk_0x3CAC2741CC1A631F(unk_0x61D2332983ACC05C(), "am_pi_menu"))
		{
			if (Global_2524719.f_4730 > -1)
			{
				unk_0xB4442316D0B880FD(Global_2524719.f_4730);
				Global_2524719.f_4730 = -1;
			}
		}
	}
}

void func_717()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574631 = { Var0 };
}

void func_718()
{
	var uVar0;
	
	Global_1316740 = uVar0;
}

void func_719()
{
	unk_0x599F595830DD4367(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x599F595830DD4367(&(Global_2405070.f_26), &Global_2409290, 18);
	func_733();
	func_722(1, 1, 0);
	func_720();
}

void func_720()
{
	func_721(0, 0);
}

void func_721(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_722(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x599F595830DD4367(&(Global_2405070.f_44), &Global_2409308, 318);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409308 };
		Global_2405070.f_44.f_49 = { Global_2409308.f_49 };
		Global_2405070.f_44.f_52 = Global_2409308.f_52;
		Global_2405070.f_44.f_53 = Global_2409308.f_53;
	}
	if (bParam0)
	{
		func_732();
	}
	if (!bParam2)
	{
		func_724(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_723(0);
	func_162();
}

void func_723(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_702 = 0;
	}
	else
	{
		Global_2405070.f_702 = 1;
	}
}

void func_724(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_731())
		{
			func_730();
		}
		Global_2405070.f_703.f_515 = unk_0xFCB3E4B16B4A9EC1();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_728();
		func_435(8, 0, 0, 0, 0);
		Global_2405070.f_703.f_507 = iParam11;
		Global_2405070.f_703.f_510 = iParam3;
		Global_2405070.f_703.f_511 = iParam4;
		Global_2405070.f_703.f_508 = iParam5;
		Global_2405070.f_703.f_509 = iParam6;
		Global_2405070.f_703.f_512 = iParam7;
		Global_2405070.f_703.f_513 = iParam8;
		Global_2405070.f_703.f_514 = iParam9;
		Global_2405070.f_1736 = 1;
	}
	else
	{
		func_725();
	}
}

void func_725()
{
	if (func_731() && !func_727())
	{
		func_730();
	}
	if (func_727())
	{
		func_726();
	}
	else
	{
		func_728();
		func_435(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_726()
{
	unk_0x599F595830DD4367(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_727()
{
	if ((Global_2405070.f_1735 && !unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_1219.f_515) && unk_0x2BCD0524CDEE1FD2(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_728()
{
	if (func_731() && !func_727())
	{
		func_730();
	}
	func_729();
	Global_2405070.f_703 = 0;
}

void func_729()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_703.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_730()
{
	if (func_727())
	{
		if (Global_2405070.f_703.f_515 == Global_2405070.f_1219.f_515)
		{
			return;
		}
	}
	if (!unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_703.f_515)
	{
		unk_0x599F595830DD4367(&(Global_2405070.f_1219), &(Global_2405070.f_703), 516);
		Global_2405070.f_490 = { Global_2405070.f_484 };
		Global_2405070.f_1735 = 1;
	}
}

int func_731()
{
	if ((Global_2405070.f_1736 && !unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_703.f_515) && unk_0x2BCD0524CDEE1FD2(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_732()
{
	unk_0x599F595830DD4367(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_733()
{
	func_734();
	Global_2405070.f_2245 = 0;
}

void func_734()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2246[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_735()
{
	Global_2524719.f_4721 = 0;
}

void func_736()
{
	if (unk_0xD4E735F4B6A956AC() != -1)
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1 = 0;
	}
}

void func_737()
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	if (iVar0 != -1)
	{
		Global_1625435[iVar0 /*560*/] = -1;
	}
}

void func_738(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_199(iParam0, func_195(iParam1), 0);
	iVar0++;
	if (!func_198(iParam0))
	{
		func_190(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_191(iParam0, iVar0, iParam1, 1);
	}
}

int func_739(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

int func_740(int iParam0)
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
			if (func_399(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_741()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 3) || unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 4))
	{
		if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
		{
			unk_0x70C1F5AA59767FE6(800);
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 5))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_1724), 5);
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 3))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_1724), 3);
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1724, 4))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_1724), 4);
	}
	func_744(0);
	func_743(0);
	func_742(0);
}

void func_742(int iParam0)
{
	if (Global_2524719.f_4507 != iParam0)
	{
		Global_2524719.f_4507 = iParam0;
	}
}

void func_743(bool bParam0)
{
	if (Global_2524719.f_4506 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2524719.f_4506 = bParam0;
	}
}

void func_744(int iParam0)
{
	if (Global_2524719.f_4504 != iParam0)
	{
		Global_2524719.f_4504 = iParam0;
	}
}

void func_745(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x61D2332983ACC05C();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_71205)
	{
		if (unk_0x3CAC2741CC1A631F(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x30ADA0810FC12C64(&Var1);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x970951442174C78D(&Var14);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x79FFA8A248466141(&Var28);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xDBF7FAB89960BEFD(&Var52);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_penned_in"))
		{
			unk_0x6DCA86891C4D2E38(&Param0);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x3148DA89755EA52A(&Var66);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x48B0406CBFE7271E(&Var79);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x4712A36556402022(&Var93);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x06D1ECCFC8BEDC59(&Var107);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x2EA4C88690C914A3(&Var123);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x7A58F77009C40066(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xCFE572C994CF8A1F(&Var150);
			}
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xEE58CB9112FD403C(&Var164);
		}
	}
}

int func_746(struct<21> Param0)
{
	func_755(func_756(Param0.f_0), Param0);
	unk_0xC0E0EC37CC7BA185(func_754(9));
	unk_0xA721D9ED3827732A(func_753(9));
	func_750(0, -1, 0);
	func_748(133);
	unk_0xF82A3961787FA0A4(&Local_654, 88);
	unk_0x8BFA7A7AB1D02137(&Local_2621, 385);
	if (!func_747())
	{
		func_709();
	}
	if (unk_0x45F99485D7E1C29A())
	{
		unk_0xC493ACDF92E249C7(&(Local_654.f_52), &(Local_654.f_53));
	}
	Local_3006.f_2 = unk_0x34D754E2B6D6139D();
	unk_0x2F3193E06C2EFF44(0);
	return 1;
}

int func_747()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 0;
		}
		if (unk_0x9657A511FBAA9216())
		{
			return 1;
		}
		if (func_704())
		{
			return 0;
		}
		if (func_702(155))
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

void func_748(int iParam0)
{
	func_717();
	func_749();
	func_735();
	Global_1574631.f_4 = iParam0;
	Global_1574631.f_5 = iParam0;
	func_406(iParam0, -1);
	func_27(&(Global_1574631.f_18), 0, 0);
	Global_2524719.f_4574 = 0;
	Global_2459257[0] = func_96();
	Global_2459257[1] = func_96();
	Global_2459257[2] = func_96();
	Global_2459257[3] = func_96();
	Global_2459257[4] = func_96();
	func_159();
	if (!func_537(func_281()))
	{
		func_280();
	}
	if (func_157() && !func_156())
	{
		unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 16);
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_1574631.f_1), 17);
	}
}

void func_749()
{
	var uVar0;
	
	Global_1574656 = uVar0;
}

int func_750(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_752();
			}
			else
			{
				return 0;
			}
		}
		if (!func_751())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_704())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_702(155))
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_752();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_752();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_752();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_751()
{
	return Global_1312834;
}

void func_752()
{
	unk_0x8F1A9FE6D91AAFEB();
}

int func_753(int iParam0)
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

int func_754(int iParam0)
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

void func_755(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_752();
	}
	unk_0x1B0D16DC60698F88(uParam0, 0, Param1.f_16);
}

int func_756(int iParam0)
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
		
		case 124:
			return 32;
		
		case 125:
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
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}


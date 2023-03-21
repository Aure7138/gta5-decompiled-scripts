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
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116[65];
	float fLocal_312 = 0f;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	float fLocal_325 = 0f;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	float fLocal_346 = 0f;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	int iLocal_359 = 0;
	struct<3> Local_360[65];
	var uLocal_556[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_622[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	var uLocal_636[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	struct<68> Local_649 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	struct<534> Local_737 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1271 = -1;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
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
	var uLocal_1293 = -1082130432;
	var uLocal_1294 = 3;
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
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = -1;
	var uLocal_1311 = 0;
	var uLocal_1312 = -1;
	var uLocal_1313 = -1;
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
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = -1082130432;
	var uLocal_1336 = 3;
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
	var uLocal_1352 = -1;
	var uLocal_1353 = 0;
	var uLocal_1354 = -1;
	var uLocal_1355 = -1;
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
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = -1082130432;
	var uLocal_1378 = 3;
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
	var uLocal_1394 = -1;
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
	var uLocal_1436 = -1;
	var uLocal_1437 = 0;
	var uLocal_1438 = -1;
	var uLocal_1439 = -1;
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
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = -1082130432;
	var uLocal_1462 = 3;
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
	var uLocal_1477 = 0;
	var uLocal_1478 = -1;
	var uLocal_1479 = 0;
	var uLocal_1480 = -1;
	var uLocal_1481 = -1;
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
	var uLocal_1503 = -1082130432;
	var uLocal_1504 = 3;
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
	var uLocal_1520 = -1;
	var uLocal_1521 = 0;
	var uLocal_1522 = -1;
	var uLocal_1523 = -1;
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
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = -1082130432;
	var uLocal_1546 = 3;
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
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = -1;
	var uLocal_1563 = 0;
	var uLocal_1564 = -1;
	var uLocal_1565 = -1;
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
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = -1082130432;
	var uLocal_1588 = 3;
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
	var uLocal_1604 = -1;
	var uLocal_1605 = 0;
	var uLocal_1606 = -1;
	var uLocal_1607 = -1;
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
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = -1082130432;
	var uLocal_1630 = 3;
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
	var uLocal_1646 = -1;
	var uLocal_1647 = 0;
	var uLocal_1648 = -1;
	var uLocal_1649 = -1;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
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
	var uLocal_1671 = -1082130432;
	var uLocal_1672 = 3;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
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
	var uLocal_1688 = -1;
	var uLocal_1689 = 0;
	var uLocal_1690 = -1;
	var uLocal_1691 = -1;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
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
	var uLocal_1713 = -1082130432;
	var uLocal_1714 = 3;
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
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = -1;
	var uLocal_1731 = 0;
	var uLocal_1732 = -1;
	var uLocal_1733 = -1;
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
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1082130432;
	var uLocal_1756 = 3;
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
	var uLocal_1773 = 0;
	var uLocal_1774 = -1;
	var uLocal_1775 = -1;
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
	var uLocal_1797 = -1082130432;
	var uLocal_1798 = 3;
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
	var uLocal_1814 = -1;
	var uLocal_1815 = 0;
	var uLocal_1816 = -1;
	var uLocal_1817 = -1;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
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
	var uLocal_1839 = -1082130432;
	var uLocal_1840 = 3;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
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
	var uLocal_1856 = -1;
	var uLocal_1857 = 0;
	var uLocal_1858 = -1;
	var uLocal_1859 = -1;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
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
	var uLocal_1881 = -1082130432;
	var uLocal_1882 = 3;
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
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = -1;
	var uLocal_1899 = 0;
	var uLocal_1900 = -1;
	var uLocal_1901 = -1;
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
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = -1082130432;
	var uLocal_1924 = 3;
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
	var uLocal_1940 = -1;
	var uLocal_1941 = 0;
	var uLocal_1942 = -1;
	var uLocal_1943 = -1;
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
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = -1082130432;
	var uLocal_1966 = 3;
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
	var uLocal_1982 = -1;
	var uLocal_1983 = 0;
	var uLocal_1984 = -1;
	var uLocal_1985 = -1;
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
	var uLocal_2007 = -1082130432;
	var uLocal_2008 = 3;
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
	var uLocal_2024 = -1;
	var uLocal_2025 = 0;
	var uLocal_2026 = -1;
	var uLocal_2027 = -1;
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
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = -1082130432;
	var uLocal_2050 = 3;
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
	var uLocal_2065 = 0;
	var uLocal_2066 = -1;
	var uLocal_2067 = 0;
	var uLocal_2068 = -1;
	var uLocal_2069 = -1;
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
	var uLocal_2091 = -1082130432;
	var uLocal_2092 = 3;
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
	var uLocal_2108 = -1;
	var uLocal_2109 = 0;
	var uLocal_2110 = -1;
	var uLocal_2111 = -1;
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
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = -1082130432;
	var uLocal_2134 = 3;
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
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = -1;
	var uLocal_2151 = 0;
	var uLocal_2152 = -1;
	var uLocal_2153 = -1;
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
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = -1082130432;
	var uLocal_2176 = 3;
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
	var uLocal_2192 = -1;
	var uLocal_2193 = 0;
	var uLocal_2194 = -1;
	var uLocal_2195 = -1;
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
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = -1082130432;
	var uLocal_2218 = 3;
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
	var uLocal_2234 = -1;
	var uLocal_2235 = 0;
	var uLocal_2236 = -1;
	var uLocal_2237 = -1;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
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
	var uLocal_2259 = -1082130432;
	var uLocal_2260 = 3;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
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
	var uLocal_2276 = -1;
	var uLocal_2277 = 0;
	var uLocal_2278 = -1;
	var uLocal_2279 = -1;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
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
	var uLocal_2301 = -1082130432;
	var uLocal_2302 = 3;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = -1;
	var uLocal_2319 = 0;
	var uLocal_2320 = -1;
	var uLocal_2321 = -1;
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
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = -1082130432;
	var uLocal_2344 = 3;
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
	var uLocal_2359 = 0;
	var uLocal_2360 = -1;
	var uLocal_2361 = 0;
	var uLocal_2362 = -1;
	var uLocal_2363 = -1;
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
	var uLocal_2385 = -1082130432;
	var uLocal_2386 = 3;
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
	var uLocal_2402 = -1;
	var uLocal_2403 = 0;
	var uLocal_2404 = -1;
	var uLocal_2405 = -1;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
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
	var uLocal_2427 = -1082130432;
	var uLocal_2428 = 3;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
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
	var uLocal_2444 = -1;
	var uLocal_2445 = 0;
	var uLocal_2446 = -1;
	var uLocal_2447 = -1;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
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
	var uLocal_2469 = -1082130432;
	var uLocal_2470 = 3;
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
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = -1;
	var uLocal_2487 = 0;
	var uLocal_2488 = -1;
	var uLocal_2489 = -1;
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
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = -1082130432;
	var uLocal_2512 = 3;
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
	var uLocal_2528 = -1;
	var uLocal_2529 = 0;
	var uLocal_2530 = -1;
	var uLocal_2531 = -1;
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
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = -1082130432;
	var uLocal_2554 = 3;
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
	var uLocal_2570 = -1;
	var uLocal_2571 = 0;
	var uLocal_2572 = -1;
	var uLocal_2573 = -1;
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
	var uLocal_2594 = 0;
	var uLocal_2595 = -1082130432;
	var uLocal_2596 = 3;
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
	var uLocal_2612 = -1;
	var uLocal_2613 = 0;
	var uLocal_2614 = -1;
	struct<12> Local_2615[32];
	struct<12> Local_3000 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_312 = 40000f;
	iLocal_348 = unk_0x2F079D1FC5F6CB99();
	iLocal_349 = unk_0x2F079D1FC5F6CB99();
	iLocal_350 = -1;
	iLocal_351 = -1;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_736(ScriptParam_0))
		{
			func_699();
		}
	}
	while (true)
	{
		func_698();
		if (func_691() || func_689())
		{
			func_699();
		}
		if (func_687())
		{
			func_699();
		}
		func_661();
		switch (func_660(unk_0x822BEC8031773562()))
		{
			case 0:
				if (func_659() == 1)
				{
					if (func_658())
					{
						func_657(unk_0x822BEC8031773562(), 1);
					}
				}
				break;
			
			case 1:
				if (func_659() == 1)
				{
					func_128();
					func_116();
				}
				else if (func_659() == 3)
				{
					func_657(unk_0x822BEC8031773562(), 3);
				}
				break;
			
			case 3:
				func_699();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_659())
			{
				case 0:
					if (func_103())
					{
						func_102(1);
					}
					break;
				
				case 1:
					if (Local_649.f_37 == 6)
					{
						func_102(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_326, 1000, 0))
					{
						func_102(3);
					}
					break;
				
				case 3:
					func_699();
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
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
		{
			unk_0xF0059F27F7BB6680(&(Local_649.f_2), 0);
			Local_649.f_1 = unk_0xED678C85A82F0AB9();
		}
	}
	switch (Local_649.f_37)
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
			if (func_1(&(Local_649.f_43), func_29(), 0) || unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_649.f_38 = unk_0xED678C85A82F0AB9();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_649.f_39), func_28(0), 0) || unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_649.f_2, 1))
				{
					Local_649.f_1 = unk_0xED678C85A82F0AB9();
					unk_0xF0059F27F7BB6680(&(Local_649.f_2), 1);
					func_27(&(Local_649.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_351, &iLocal_350);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_649.f_41), 20000, 0) || Local_649.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_649.f_3))
				{
					func_27(&(Local_649.f_45), 0, 0);
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
		if (unk_0x8EA6CABD14F1B89A(Local_649.f_67[iVar0 /*2*/].f_1) && !unk_0x1D403DFADBC2DE3C(unk_0xD14280F674B4DBF4(Local_649.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_2615[iVar1 /*12*/].f_1, 1) || Local_2615[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xFA30DFD0084E92FE(Local_2615[iVar1 /*12*/].f_1, 0))
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
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -1595111884;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam14 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
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
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
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
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			unk_0xF0059F27F7BB6680(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0xFA30DFD0084E92FE(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xF0059F27F7BB6680(&(Local_649.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
				if (unk_0x96B1061E8F3CBC9A(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_649.f_50)
	{
		Local_649.f_50 = iVar1;
	}
	else
	{
		Local_649.f_66 = (Local_649.f_50 - iVar1);
	}
	if (iVar2 > Local_649.f_51)
	{
		Local_649.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
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
		fVar0 = unk_0xBBDA792448DB5A89(Local_2615[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4);
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
	switch (Local_649.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10328)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10329)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10330)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10331)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10332)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10333)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10334 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10335)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10336)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10337)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10338)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10339))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10340))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_10452)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_10453)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10343))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10345))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10346))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10347))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_649.f_3)
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
		if (Local_649.f_4[iParam0] == unk_0x6BAA0516CC970D99() && func_21(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4, 0))
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
	switch (Local_649.f_3)
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
	
	iVar0 = Local_2615[iParam0 /*12*/].f_4;
	iVar1 = Local_2615[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xFA30DFD0084E92FE(Local_649.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_649.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_649.f_49++;
			unk_0xF0059F27F7BB6680(&(Local_649.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_649.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_649.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_649.f_4[iVar3] < 0 || func_21(iVar0, Local_2615[Local_649.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2615[Local_649.f_4[iVar3] /*12*/].f_4, iVar1, Local_2615[Local_649.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_649.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_350 = iVar3;
				iLocal_351 = iParam0;
			}
			Local_649.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_649.f_4[iVar5] == iParam0)
				{
					Local_649.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_649.f_3 == 2)
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
	
	if (unk_0xFA30DFD0084E92FE(Local_649.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_649.f_4[iVar0] == iParam0)
			{
				Local_649.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x7CB6FD92BE491AD9(&(Local_649.f_48), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Local_649.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xED678C85A82F0AB9();
		}
		else
		{
			*uParam0 = unk_0x1C44CABA911F93F7();
		}
	}
	else
	{
		*uParam0 = unk_0x105601648511CC64();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xFA30DFD0084E92FE(Local_649.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_649.f_3)
	{
		case 0:
			return Global_262145.f_9645;
		
		case 8:
			return Global_262145.f_9647;
		
		case 3:
			return Global_262145.f_9648;
		
		case 1:
			return Global_262145.f_10438;
		
		case 6:
			return Global_262145.f_10439;
		
		case 10:
			return Global_262145.f_10441;
		
		case 11:
			return Global_262145.f_10443;
		
		case 12:
			return Global_262145.f_10444;
		
		case 15:
			return Global_262145.f_10448;
		
		case 16:
			return Global_262145.f_10449;
		
		case 17:
			return Global_262145.f_10450;
		
		case 18:
			return Global_262145.f_10451;
		
		case 13:
			return Global_262145.f_10442;
		
		case 14:
			return Global_262145.f_10445;
		
		case 2:
			return Global_262145.f_9650;
		
		case 7:
			return Global_262145.f_10440;
		
		case 9:
			return Global_262145.f_10446;
		
		case 5:
			return Global_262145.f_9651;
		
		case 4:
			return Global_262145.f_9649;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_10408;
}

void func_30(int iParam0)
{
	Local_649.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_649.f_37 == 0 || func_5(Local_649.f_3)) || Local_649.f_54 < 10))
	{
		Var0 = { Local_649.f_67[iLocal_345 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0x7FFE36DB9042AF23(Var0.f_1))
			{
				if (func_38(Local_649.f_3, iLocal_345, &Var2, &uVar5))
				{
					Local_649.f_55[iLocal_345] = func_34(iLocal_345);
					if (unk_0xFA30DFD0084E92FE(Local_2615[Local_649.f_55[iLocal_345] /*12*/].f_2, iLocal_345))
					{
						if (func_33(&(Local_649.f_67[iLocal_345 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x60901715E78798D5(unk_0xD14280F674B4DBF4(Local_649.f_67[iLocal_345 /*2*/].f_1), 1, 1);
							unk_0xD421BC740C5340C3(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), 1);
							unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), 1);
							unk_0x251D94F557BABE92(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), 0);
							func_32(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), 1);
							if (unk_0x46032D09AA009EC4("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x46032D09AA009EC4("MPBitset", 3))
							{
								if (unk_0x3C03CFD5DD1E2D97(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x67CFC62D543B19EF(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), "MPBitset");
								}
								unk_0xF0059F27F7BB6680(&iVar6, 10);
								unk_0xF0059F27F7BB6680(&iVar6, 11);
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_345 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_649.f_55[iLocal_345] = -1;
							Local_649.f_54++;
						}
					}
				}
			}
		}
		iLocal_345++;
		if (iLocal_345 >= 10)
		{
			iLocal_345 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x46032D09AA009EC4("MPBitset", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xF0059F27F7BB6680(&uVar0, 13);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&uVar0, 13);
		}
		unk_0x3F9FE9BB735B1604(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x4A09C6BA3AFA4242(iParam1))
	{
		return 0;
	}
	if (!unk_0x424470694C82EFFA(1))
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
		unk_0xEDAD35A0D81ED3FB(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x61C05BF08A1E0EFE(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x724D816EA203A79E(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_2519572.f_6112 = iVar1;
		if (unk_0x7FFE36DB9042AF23(*uParam0))
		{
			if (bParam15)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			unk_0x656194E145691D3E(iVar1, iParam10);
			if (unk_0x270072584099CC42(iVar1))
			{
				if (bParam8)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, unk_0xB5CEFD608600A09F(), 1);
				}
			}
			unk_0x8D8F52BBEE186D6D(iVar1, iParam9);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x64B0385195B407FC(iVar1);
				unk_0x1E6686599BFBEC90(iVar1, 5, 5, 1f);
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
		while (iVar0 <= (unk_0x81C86888AEA2F49B() - 1))
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
			{
				iVar8 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
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
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
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
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

bool func_41()
{
	return (func_5(Local_649.f_3) || func_39(Local_649.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_101(unk_0xB5CEFD608600A09F(), 0) || func_98(unk_0xB5CEFD608600A09F(), 0))
	{
		if (func_97(unk_0xB5CEFD608600A09F()) || func_95(unk_0xB5CEFD608600A09F()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xB46BE0E79661103C() < iParam0)
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
	if (func_45(&(Global_1574452.f_18)))
	{
		if (!func_1(&(Global_1574452.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1574452.f_18));
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
	if (iParam1 && unk_0x3D4274189EB7E01E() < iParam0)
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
	return unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 0);
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
			unk_0xCFDC109752603B38(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x2DC92D46FC48E795(uVar1);
			if (unk_0xFA30DFD0084E92FE(iVar0, iParam0))
			{
				unk_0x7CB6FD92BE491AD9(&iVar0, iParam0);
				unk_0xCFDC109752603B38(iVar0, iParam1);
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
	uVar1 = unk_0x2DC92D46FC48E795(uVar0);
	return unk_0xFA30DFD0084E92FE(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 2) && !func_8(unk_0xB5CEFD608600A09F())) && !func_7(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xF1734B55490E9045(sParam1))
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
		unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 2);
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
	func_94(iParam0, &Var0, -1, sParam2, sParam1);
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
		if (Global_2436641.f_3025)
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
		if (Global_2436641.f_2703[0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436641.f_2703[0 /*80*/].f_1 == 13 || Global_2436641.f_2703[0 /*80*/].f_1 == 53) || Global_2436641.f_2703[0 /*80*/].f_1 == 54) || Global_2436641.f_2703[0 /*80*/].f_1 == 58)
		{
			Global_2436641.f_2703[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436641.f_2703[iVar0 + 1 /*80*/] = { Global_2436641.f_2703[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436641.f_2703[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/] = { *uParam0 };
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
				unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 1);
				Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0xFA30DFD0084E92FE(uParam0->f_69, 7))
			{
				if (func_52(Global_2436641.f_2703[iVar0 /*80*/].f_1))
				{
					Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
					unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
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
	
	if (Global_2436641.f_3026)
	{
		return;
	}
	if (!Global_71246)
	{
		Global_71246 = 1;
		bVar0 = true;
	}
	func_54();
	if (bVar0)
	{
		Global_71246 = 0;
	}
}

void func_54()
{
	Global_2436641.f_3027 = 0;
	Global_2436641.f_3027.f_578 = 0;
	func_58(&(Global_2436641.f_3027.f_1));
	Global_2436641.f_3027.f_1.f_1 = 0;
	func_55(&(Global_2436641.f_3027.f_1));
}

void func_55(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(0);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0xB0B0FE33F4F22679(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xC4248B71D9B26306(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71246)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
		{
			if (!Global_71247)
			{
				if (unk_0x17FAADF9916EF741() && !func_57(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
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
	return Global_2447942.f_16;
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
	if (iParam1 == func_93() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_66(iParam1, -2, 0, 0);
		}
	}
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_91(iParam0))
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
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_121853[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_91(unk_0xB5CEFD608600A09F()) || (func_90() && func_89())) && !unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 31))
	{
		uVar1 = func_88();
		if (unk_0x724D816EA203A79E(uVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_12(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_4456448.f_121853[iParam1] != -1)
							{
								return func_86(iParam1, iParam0, 0);
							}
							else
							{
								return func_74(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_4456448.f_121853[iParam1] != -1)
				{
					return func_86(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_4456448.f_121853[iParam1] != -1)
		{
			return func_86(iParam1, iParam0, 0);
		}
		else
		{
			return func_74(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	return func_68(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x96B1061E8F3CBC9A(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 18))
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
			else if (unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 20))
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
	if (func_70(Global_4456448.f_126776, 1))
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
		if (Global_4456448.f_148478 == 65)
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
		if (iParam0 == Global_262145.f_8408[iVar0])
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
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589291[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_83(1))
			{
				iVar3 = func_79(iParam0);
				if (!iVar3 == -1)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 18)) || ((func_73(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 23)) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 18)))
			{
				return func_72(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574355 || Global_1574346) || Global_1589291[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574355 == 1 && Global_1574365 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574350 && Global_1573884.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_79(iParam0);
	if (!iVar4 == -1)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
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

var func_78(int iParam0)
{
	return Global_2417501.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_93())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2417501.f_2071.f_11[func_80(iParam0)];
		}
	}
	return -1;
}

int func_80(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_93();
}

bool func_81(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_1624079[iParam0 /*558*/].f_11 != func_93();
}

int func_82(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_93())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if ((func_85() || func_84()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_84()
{
	return Global_2447942.f_15;
}

var func_85()
{
	return Global_2447942.f_14;
}

int func_86(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_83(1))
	{
		iVar2 = func_79(iParam1);
		if (!iVar2 == -1)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_98[iParam0 /*10231*/].f_5361[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_93())
	{
		if (Global_4456448.f_121853[iParam0] != -1 && Global_4456448.f_121853[iParam0] <= 4)
		{
			if (Global_4456448.f_121853[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_121853[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_121853[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_121853[iParam0] == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_121853[iParam0];
			}
		}
		else
		{
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_21, 13))
		{
			iVar0 = func_87(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_148521;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_148522;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_148523;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_148524;
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

var func_88()
{
	return Global_2359302.f_2;
}

bool func_89()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 4);
}

bool func_90()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

int func_91(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_93()
{
	return -1;
}

void func_94(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_93();
	uParam1->f_18 = func_93();
	uParam1->f_19 = func_93();
	uParam1->f_20 = func_93();
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

bool func_95(int iParam0)
{
	return func_96(iParam0, 20);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_11.f_4, iParam1);
}

int func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_96(iParam0, 9);
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 && func_99(Global_1624079[iParam0 /*558*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1)
	{
		if (func_99(Global_1624079[iParam0 /*558*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
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
	return func_100(iParam0, 0);
	return 0;
}

int func_100(int iParam0, int iParam1)
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

int func_101(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)
{
	Local_649.f_0 = iParam0;
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_649.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_649.f_39));
	func_108();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_649.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_104();
	}
	return 1;
}

void func_104()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_649.f_3))
		{
			Local_649.f_67[iVar0 /*2*/] = func_107();
		}
		else
		{
			Local_649.f_67[iVar0 /*2*/] = func_105();
		}
		iVar0++;
	}
}

int func_105()
{
	int iVar0;
	
	switch (Local_649.f_3)
	{
		case 12:
			return func_106();
			break;
	}
	iVar0 = unk_0x491B2241281A03B7(0, 2);
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

int func_106()
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 2);
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

int func_107()
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 2);
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

void func_108()
{
	int iVar0;
	
	iVar0 = func_112();
	Local_649.f_3 = iVar0;
	func_109(func_111(133, iVar0, 0, 0));
}

void func_109(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = -2008494047;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = iParam0;
	iVar3 = func_110(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 3, iVar3);
	}
}

var func_110(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_112()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_10737;
	iVar0[1] = Global_262145.f_10410;
	iVar0[2] = Global_262145.f_10741;
	iVar0[3] = Global_262145.f_10739;
	iVar0[4] = Global_262145.f_10740;
	iVar0[5] = Global_262145.f_10742;
	iVar0[6] = Global_262145.f_10411;
	iVar0[7] = Global_262145.f_10412;
	iVar0[8] = Global_262145.f_10738;
	iVar0[9] = Global_262145.f_10418;
	iVar0[10] = Global_262145.f_10413;
	iVar0[11] = Global_262145.f_10415;
	iVar0[12] = Global_262145.f_10416;
	iVar0[13] = Global_262145.f_10414;
	iVar0[14] = Global_262145.f_10417;
	iVar0[15] = Global_262145.f_10420;
	iVar0[16] = Global_262145.f_10421;
	iVar0[17] = Global_262145.f_10422;
	iVar0[18] = Global_262145.f_10423;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_115(iVar21) || func_113(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x55AEFCD285ECC0F2(0f, fVar20);
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
	return func_112();
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_114(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_7501)
		{
			if (Global_2492909.f_130[iVar0 /*2*/] == iVar1 && Global_2492909.f_130[iVar0 /*2*/].f_1 == func_111(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)
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

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9639;
		
		case 1:
			return Global_262145.f_10424;
		
		case 6:
			return Global_262145.f_10425;
		
		case 7:
			return Global_262145.f_10426;
		
		case 8:
			return Global_262145.f_9640;
		
		case 3:
			return Global_262145.f_9641;
		
		case 4:
			return Global_262145.f_9642;
		
		case 2:
			return Global_262145.f_9643;
		
		case 5:
			return Global_262145.f_9644;
		
		case 9:
			return Global_262145.f_10432;
		
		case 10:
			return Global_262145.f_10427;
		
		case 11:
			return Global_262145.f_10429;
		
		case 12:
			return Global_262145.f_10430;
		
		case 15:
			return Global_262145.f_10434;
		
		case 16:
			return Global_262145.f_10435;
		
		case 17:
			return Global_262145.f_10436;
		
		case 18:
			return Global_262145.f_10437;
		
		case 13:
			return Global_262145.f_10428;
		
		case 14:
			return Global_262145.f_10431;
		
		default:
	}
	return 1;
}

void func_116()
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_649.f_55[iVar0] == unk_0x6BAA0516CC970D99())
			{
				if (func_117(iVar0))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_2, iVar0))
					{
						unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_2, iVar0))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_2, iVar0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_117(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_37(iParam0, &Var0, &uVar3))
	{
		if (func_118(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405070.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x38B362A95EA24163(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAE7193AAF1ECF1DB(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (unk_0x90629C6D0C640733(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_123(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_119(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_119(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF0F2FC9DE291567F(func_121(unk_0xB5CEFD608600A09F()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x33CC9445B2DF9387(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_120(iVar1) || !bParam10) && !Global_2423644[iVar1 /*406*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_121(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam8 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_121(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
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

int func_120(int iParam0)
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_2423644[iParam0 /*406*/].f_241)
	{
		return 1;
	}
	return 0;
}

Vector3 func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1589291[iVar0 /*770*/].f_746) && !func_122(Global_1589291[iVar0 /*770*/].f_747))
	{
		return Global_1589291[iVar0 /*770*/].f_747;
	}
	return func_36(iParam0);
}

int func_122(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_123(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam7 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_120(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam9) && bParam6) && func_124(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_36(iVar1), Param0, 1) < fParam3)
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

int func_124(int iParam0)
{
	if (func_127(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_2498829 = { func_126(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_2498829))
	{
		return 1;
	}
	if (func_125(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (!iVar0 == func_93())
	{
		if (iVar0 == func_80(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_126(int iParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_127(int iParam0, int iParam1)
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_2498829 = { func_126(iParam0) };
		Global_2498842 = { func_126(iParam1) };
		if (unk_0xD7F4457CECF10121(&Global_2498829))
		{
			if (unk_0xD7F4457CECF10121(&Global_2498842))
			{
				unk_0x24723877416AAAFC(&Global_2498759, 35, &Global_2498829);
				unk_0x24723877416AAAFC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_128()
{
	float fVar0;
	float fVar1;
	
	func_654();
	func_653();
	if (func_651())
	{
		func_541();
	}
	if (!func_7(unk_0xB5CEFD608600A09F()))
	{
		if (func_518(0, 1, 1))
		{
			if (unk_0xFA30DFD0084E92FE(iLocal_340, 6))
			{
				unk_0x7CB6FD92BE491AD9(&iLocal_340, 6);
			}
			switch (Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_3)
			{
				case 0:
					if (Local_649.f_37 < 2)
					{
						if (Local_649.f_37 > 0)
						{
							if (Local_649.f_3 != -1)
							{
								func_517(1);
								func_516(1);
							}
						}
					}
					else
					{
						func_516(2);
					}
					break;
				
				case 1:
					func_510(9);
					if (Local_3000.f_8 == 0)
					{
						Local_3000.f_8 = unk_0xB99C193A32DE341D();
					}
					if (Local_649.f_37 >= 2)
					{
						func_516(2);
						Local_3000.f_9 = unk_0xB99C193A32DE341D();
					}
					if (func_41())
					{
						func_510(0);
					}
					func_508((func_29() - func_509(&(Local_649.f_43), 0, 0)));
					func_505(func_507((func_29() - func_509(&(Local_649.f_43), 0, 0)), 0), func_506(Local_649.f_3));
					func_449(0, func_504());
					func_428();
					func_405();
					if (func_404())
					{
						func_403();
					}
					break;
				
				case 2:
					if (Local_649.f_37 > 2)
					{
						func_517(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_402())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_385(133, fVar0, fVar1, 0, 0, 0, 0);
						func_384(Local_649.f_3, 1);
						func_383(23, 1);
						if (Local_3000.f_8 == 0)
						{
							Local_3000.f_8 = unk_0xB99C193A32DE341D();
						}
						if (Local_3000.f_9 == 0)
						{
							Local_3000.f_9 = unk_0xB99C193A32DE341D();
						}
						func_379();
						unk_0xA9F827A1B59E18D4(1);
						if (func_402())
						{
							unk_0xDF53A66AEE1401AA(0f);
							unk_0xAEC867D0DBB7AFEB(0);
						}
						if (Local_649.f_3 == 14)
						{
							func_378(&Local_360);
						}
						func_377();
						if (!func_7(unk_0xB5CEFD608600A09F()))
						{
							func_50(63, "AMCH_STARTED", func_376(Local_649.f_3), func_63(), -1, func_63(), 1);
							if (func_373("AMCH_WARN", func_375(Local_649.f_3), func_374(Local_649.f_3)))
							{
								unk_0x7456702622C62EA0(1);
							}
						}
						if (func_41())
						{
							func_356(678f, 794f, 206f, 8f, 0);
							func_356(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_356(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_516(3);
					}
					break;
				
				case 3:
					if (Local_649.f_37 > 3)
					{
						iLocal_342 = 0;
						func_516(4);
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(Local_649.f_2, 1))
						{
							func_319();
							func_316();
							func_315();
						}
						if (func_314(0) && !func_20(0))
						{
							func_313();
						}
					}
					if (func_402())
					{
						unk_0x2C60B9CCB9A13F96(unk_0xB5CEFD608600A09F());
					}
					func_312();
					func_289();
					func_541();
					func_449(0, 1);
					func_428();
					func_405();
					func_510(2);
					func_510(5);
					func_510(7);
					break;
				
				case 4:
					if (func_278(&uLocal_352, !unk_0xFA30DFD0084E92FE(Local_649.f_2, 0)) || unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
					{
						if (func_5(Local_649.f_3))
						{
							if (Local_649.f_37 == 5)
							{
								func_516(5);
							}
						}
						else
						{
							func_516(6);
						}
					}
					func_265();
					func_160();
					func_289();
					func_541();
					func_449(1, 1);
					func_377();
					break;
				
				case 5:
					if (Local_649.f_37 > 5)
					{
						func_516(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_155();
		}
	}
	else
	{
		func_155();
	}
	func_135();
	func_130();
	func_129();
}

void func_129()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_41())
	{
		Var0 = { Local_649.f_67[iLocal_359 /*2*/] };
		if (unk_0x7FFE36DB9042AF23(Var0.f_1))
		{
			iVar2 = unk_0x19D7F09C2FABDDA0(Var0.f_1);
			if (unk_0x4DF785C4DF542CD0(iVar2))
			{
				if (!unk_0xE59B7F5A03335350(iVar2, 0))
				{
					unk_0x1E7A09C1710FB071(&iVar2);
				}
			}
		}
		iLocal_359++;
		if (iLocal_359 >= 10)
		{
			iLocal_359 = 0;
			iLocal_648 = iLocal_647;
			iLocal_647 = 0;
		}
	}
}

void func_130()
{
	if (Local_649.f_37 == 5)
	{
		if (unk_0x7FFE36DB9042AF23(Local_649.f_67[iLocal_359 /*2*/].f_1))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_359 /*2*/].f_1), 0))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_635, iLocal_359))
				{
					unk_0xF0059F27F7BB6680(&iLocal_635, iLocal_359);
					uLocal_636[iLocal_359] = unk_0x2F079D1FC5F6CB99();
					unk_0xF2C27FE5A8B98CB5(uLocal_636[iLocal_359], "Explosion_Countdown", unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_359 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x8B34879B92B3B225(uLocal_636[iLocal_359], "Time", 30f);
				}
				if ((30000 - func_509(&(Local_649.f_45), 0, 0)) >= 0)
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_359 /*2*/].f_1), 0))
					{
						func_510(1);
						iLocal_647 = 1;
					}
				}
				else if (unk_0x89B5CBCE9D131B32(Local_649.f_67[iLocal_359 /*2*/].f_1))
				{
					unk_0x5502708AECB47F5D(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_359 /*2*/].f_1));
					unk_0x8195A15B79CC81A4(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iLocal_359 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(iLocal_635, iLocal_359) && !unk_0x1BD5EE88F32433CD(uLocal_636[iLocal_359]))
			{
				unk_0x38FF8CB6377D36F6(uLocal_636[iLocal_359]);
			}
		}
		if (iLocal_648)
		{
			if (!func_91(unk_0xB5CEFD608600A09F()))
			{
				func_132(func_507((30000 - func_509(&(Local_649.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_131();
			}
		}
	}
}

void func_131()
{
	Global_1364578.f_1088 = 1;
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_133(7, iVar0);
		Global_1364578.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1364578.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_4388.f_172[iVar0] = iParam2;
		Global_1364578.f_4388.f_216[iVar0] = iParam3;
		Global_1364578.f_4388.f_183[iVar0] = iParam4;
		Global_1364578.f_4388.f_194[iVar0] = iParam5;
		Global_1364578.f_4388.f_249[iVar0] = iParam6;
		Global_1364578.f_4388.f_260[iVar0] = iParam7;
		Global_1364578.f_4388.f_205[iVar0] = iParam8;
		Global_1364578.f_4388.f_314[iVar0] = iParam9;
		Global_1364578.f_4388.f_325[iVar0] = iParam10;
		Global_1364578.f_4388.f_357[iVar0] = iParam11;
		Global_1364578.f_4388.f_238[iVar0] = iParam12;
		Global_1364578.f_4388.f_271[iVar0] = iParam13;
		Global_1364578.f_4388.f_368[iVar0] = iParam14;
		Global_1364578.f_4388.f_379[iVar0] = iParam15;
		Global_1364578.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_133(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_1364578.f_6119[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_1364578.f_6119[iParam0], iParam1);
}

void func_135()
{
	if (((func_12(unk_0xB5CEFD608600A09F(), 1, 1) && !func_7(unk_0xB5CEFD608600A09F())) && !func_151(unk_0xB5CEFD608600A09F())) && func_518(0, 1, 1))
	{
		if (Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_3 == 1)
		{
			func_148(func_150(Local_649.f_3), func_375(Local_649.f_3), 0, 0);
		}
		else if (Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_3 == 3)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_340, 10))
			{
				func_136(func_374(Local_649.f_3), 0);
			}
			else
			{
				func_136("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_377();
		}
	}
	else
	{
		func_377();
	}
}

void func_136(char* sParam0, bool bParam1)
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return;
	}
	if (func_146(sParam0))
	{
		return;
	}
	func_140();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_1312576.f_9 = unk_0x56BEECB328B6D29D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()
{
	unk_0xF0059F27F7BB6680(&(Global_1312576.f_59), 1);
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_1312576.f_59), 0);
}

void func_139()
{
	Global_1312576.f_10 = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_1312576.f_11 = unk_0xED678C85A82F0AB9();
}

void func_140()
{
	func_142();
	func_141(0);
}

void func_141(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x7AF0088ABFA713B6();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xED678C85A82F0AB9();
		Global_1312576.f_11 = unk_0xED678C85A82F0AB9();
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

void func_142()
{
	if (!func_145())
	{
	}
	if (func_144())
	{
		unk_0x0C2CA00C24C64582(&(Global_1312576.f_12));
		func_143();
		unk_0xF633952844D6CF3D();
	}
}

void func_143()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xAA5C5BF0489E5553(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0xAA5C5BF0489E5553(Global_1312576.f_52);
			unk_0xAA5C5BF0489E5553(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_16));
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0xA5CB8AC295293426(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			unk_0x607C19B90D297FE2(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_16));
			unk_0x449F0674640D94C0(Global_1312576.f_57);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0xA5CB8AC295293426(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			unk_0x449F0674640D94C0(Global_1312576.f_57);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			unk_0x607C19B90D297FE2(&(Global_1312576.f_32));
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x607C19B90D297FE2(&(Global_1312576.f_16));
			unk_0x449F0674640D94C0(Global_1312576.f_56);
			unk_0xC9C304D0AABE1335(&(Global_1312576.f_48));
			unk_0x607C19B90D297FE2(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_144()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_145()
{
	if (!func_144())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_1312576.f_12));
	func_143();
	return unk_0x121EFFA2D57472F2();
}

bool func_146(char* sParam0)
{
	if (!func_144())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_147(sParam0);
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_1312576.f_12));
}

bool func_147(char* sParam0)
{
	if (!func_144())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_1312576.f_16));
}

int func_148(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (func_149(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_140();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_1312576.f_9 = unk_0x56BEECB328B6D29D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	func_139();
	func_138(bParam2);
	func_137();
	return 1;
}

bool func_149(char* sParam0, char* sParam1)
{
	if (!func_144())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam1) == unk_0x56BEECB328B6D29D(&(Global_1312576.f_16));
}

char* func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA())) || unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
					iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
					if (unk_0x7512ED01F3F46714(iVar1) && unk_0x2B4DE5C0D509B0F9(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_sniperrifle"), 0) && !unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_heavysniper"), 0)) && !unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_151(int iParam0)
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1574452.f_13)))
		{
			if (!func_1(&(Global_1574452.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1574452.f_13));
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 9);
}

bool func_152(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_204, iParam1);
}

bool func_153()
{
	return Global_1312416.f_1;
}

bool func_154()
{
	return Global_1312416;
}

void func_155()
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_340, 6))
	{
		unk_0x98121A0800F4EA5E();
		func_449(1, 1);
		unk_0x38FF8CB6377D36F6(iLocal_348);
		unk_0x7CB6FD92BE491AD9(&iLocal_340, 4);
		func_159();
		func_157();
		unk_0xCF9877018AE2E3BB(0f, 0, 21);
		unk_0xF0059F27F7BB6680(&iLocal_340, 6);
		func_156();
	}
}

void func_156()
{
	Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_7 = 0;
}

void func_157()
{
	if (Global_2413628.f_6 == unk_0x8A55B15F4133C912())
	{
		func_158();
	}
}

void func_158()
{
	struct<28> Var0;
	
	if (unk_0x3C406FC829C1E14A(Global_2413628.f_6))
	{
		if (!Global_2413628.f_6 == unk_0x8A55B15F4133C912())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413628 = { Var0 };
	Global_2413628.f_6 = -1;
}

void func_159()
{
	struct<6> Var0;
	
	if (Global_2405070.f_483.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_2405070.f_483 = { Var0 };
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1, 0))
	{
		if (func_7(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1), 0);
			return;
		}
		if (func_151(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1), 0);
			return;
		}
		func_225(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3000.f_6 = (Local_3000.f_6 + iVar0);
			if (!Global_262145.f_10889)
			{
				func_224(10, Local_3000.f_6);
			}
			Global_2459893 = iVar0;
			if (func_223())
			{
				func_214(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x98D5F29DCDF681F8(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3000.f_7 = (Local_3000.f_7 + iVar1);
			func_213();
			func_161(0, unk_0xBC25C936A095B5BA(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1), 0);
	}
}

int func_161(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_162(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_162(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_172(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				uVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_168(unk_0x823166D9421223CA(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_163(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_163(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_166(iParam0, 1) };
	if (iParam0 == func_165(unk_0xBC25C936A095B5BA()))
	{
		func_164(1);
	}
	func_168(Var0, iParam1, 0, sParam2, uParam3);
}

void func_164(int iParam0)
{
	Global_2436641.f_1885 = iParam0;
}

int func_165(int iParam0)
{
	return iParam0;
}

Vector3 func_166(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xAE9335ADE2B33DFC())
	{
		Var3 = { unk_0x14C8316F37CF95AA(2) };
	}
	if (iParam0 == func_167(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		Var0 = { unk_0xA4455714F3DCE207(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar6 = unk_0x349C94FFF43E2979(iParam0);
		if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x89D97EB4FAE4A574(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_167(int iParam0)
{
	return iParam0;
}

void func_168(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436641.f_1284[iVar0 /*30*/].f_6 == 0 || Global_2436641.f_1284[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436641.f_1284[iVar1 /*30*/] = { Param0 };
			Global_2436641.f_1284[iVar1 /*30*/].f_6 = 1;
			Global_2436641.f_1284[iVar1 /*30*/].f_4 = func_171(Global_2436641.f_1284[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436641.f_1284[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_2436641.f_1284[iVar1 /*30*/].f_3 = iParam3;
			Global_2436641.f_1284[iVar1 /*30*/].f_8 = iParam4;
			Global_2436641.f_1284[iVar1 /*30*/].f_9 = func_170();
			Global_2436641.f_1284[iVar1 /*30*/].f_10 = func_169();
			StringCopy(&(Global_2436641.f_1284[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436641.f_1284[iVar1 /*30*/].f_26 = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), uParam6);
		}
	}
}

int func_169()
{
	if (Global_2436641.f_1885)
	{
		Global_2436641.f_1885 = 0;
		return 1;
	}
	Global_2436641.f_1885 = 0;
	return 0;
}

var func_170()
{
	var uVar0;
	
	uVar0 = Global_2436641.f_1887;
	Global_2436641.f_1887 = 1;
	return uVar0;
}

float func_171(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF0F2FC9DE291567F(unk_0x4E95580B2DDCC7A9(), Param0, 1);
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

var func_172(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_173(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_173(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_212(unk_0xB5CEFD608600A09F()) || func_211(unk_0xB5CEFD608600A09F()))
	{
		if (Global_262145.f_9024 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9024;
		}
	}
	else if (func_209() || func_206(unk_0xB5CEFD608600A09F()))
	{
		if (Global_262145.f_22143 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22143;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_205(uParam2))
	{
	}
	if (func_204())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_202(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_201(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_199(0, &iVar1);
					break;
				
				case 3:
					func_199(1, &iVar1);
					break;
				
				case 1:
					func_197(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1676003)
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
			func_194(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_183((func_193(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_2 != -1)
				{
					func_194(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_178(iVar1);
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
				func_174((func_176(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_174((func_176(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_174(int iParam0)
{
	if (func_204())
	{
		Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_5 = iParam0;
		func_175(joaat("mpply_globalxp"), iParam0);
	}
}

void func_175(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, 1);
	}
}

int func_176(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_177(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_5;
			}
		}
		else
		{
			return func_177(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_177(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_178(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_126(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar13 = func_181(func_182(&Var0));
			if (iVar13 == 0)
			{
				func_180(&Global_1373641, iParam0);
				func_179(joaat("mpply_crew_local_xp_0"), Global_1373641);
			}
			else if (iVar13 == 1)
			{
				func_180(&Global_1373642, iParam0);
				func_179(joaat("mpply_crew_local_xp_1"), Global_1373642);
			}
			else if (iVar13 == 2)
			{
				func_180(&Global_1373643, iParam0);
				func_179(joaat("mpply_crew_local_xp_2"), Global_1373643);
			}
			else if (iVar13 == 3)
			{
				func_180(&Global_1373644, iParam0);
				func_179(joaat("mpply_crew_local_xp_3"), Global_1373644);
			}
			else if (iVar13 == 4)
			{
				func_180(&Global_1373645, iParam0);
				func_179(joaat("mpply_crew_local_xp_4"), Global_1373645);
			}
		}
	}
}

void func_179(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1373636 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1373638 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1373638 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1373639 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1373640 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1373641 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1373642 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1373643 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1373644 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1373645 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1373646 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1373647 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1373648 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1373649 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1373650 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1373651 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1373652 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_181(int iParam0)
{
	if (iParam0 == Global_1373636)
	{
		return 0;
	}
	else if (iParam0 == Global_1373637)
	{
		return 1;
	}
	else if (iParam0 == Global_1373638)
	{
		return 2;
	}
	else if (iParam0 == Global_1373639)
	{
		return 3;
	}
	else if (iParam0 == Global_1373640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_182(var uParam0)
{
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(uParam0))
		{
			return Global_2457627;
		}
	}
	return Global_2457627;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	if (func_204())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8992 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1373762[func_192(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1373762[func_192(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_191(unk_0xB5CEFD608600A09F()))
		{
			Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_1 = iParam0;
			Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_6 = func_189(iParam0, 1);
		}
		func_188(639, iParam0, -1, 1);
		func_187(640, func_189(iParam0, 1), -1, 1, 0);
		Global_1373762[func_192(-1)] = iParam0;
		func_184(7, 0);
	}
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185();
		Global_2457604[iVar0] = iParam0;
	}
}

int func_185()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2457604[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_186(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_192(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_192(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_192(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_192(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_192(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_192(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_192(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_192(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_192(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_192(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_192(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_192(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_192(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_192(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_192(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_192(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_192(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_192(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_192(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_192(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_192(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_192(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_192(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_192(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_192(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_192(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_192(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_192(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_192(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_192(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_192(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_192(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_190(iParam0, 0);
}

int func_190(int iParam0, int iParam1)
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
		if (Global_286291[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_286291[iVar3] < iParam0)
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

int func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_2436641.f_1, iParam0);
	}
	return 1;
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_193(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_1373762[func_192(-1)];
			}
			else if (func_191(iParam0))
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1373762[func_192(-1)];
	}
	return 0;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_192(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_195(iParam0))
	{
		func_187(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam2, 1);
	}
}

int func_195(int iParam0)
{
	if (Global_1373635)
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
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar4 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar4))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(iVar4);
			if (unk_0x343CB262BF0CDF5A(iVar5) != -1)
			{
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_73(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_127(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_198(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_198(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_198(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_199(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			iVar3 = iVar0;
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_127(unk_0xB5CEFD608600A09F(), iVar4))
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
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_200(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_127(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_198(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_198(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_200(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_198(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_202(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_193(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_193(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_203(8000, 0, 0) > 0)
	{
		if (func_203(8000, 0, 0) < (iParam0 + func_193(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_203(8000, 0, 0) - func_193(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_203(int iParam0, bool bParam1, int iParam2)
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
	return Global_286291[iParam0];
}

int func_204()
{
	return 1;
}

int func_205(var uParam0)
{
	if (unk_0xEAEFBBEC1AEA464B(uParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B(uParam0, "") || unk_0x3362CDE8460ED38B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	return func_207(func_208(iParam0));
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

bool func_209()
{
	if (unk_0x517823CA390A19F6())
	{
		return func_61();
	}
	return func_210(Global_4456448.f_126776);
}

int func_210(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_211(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_212(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

void func_213()
{
	Global_2459235 = 1;
}

void func_214(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_223())
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
			if (iParam1 > 0)
			{
				func_215(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_215(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_223())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_16()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_4262738 = 1;
			return 0;
		}
		if (Global_2458855)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262739 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262188[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_222(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262188[*uParam0 /*80*/].f_69 = 1;
					Global_4262188[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262725 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262737 = 1;
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_221(1, iParam4);
			Global_4262737 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_216(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_216(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_118.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_217(iParam0);
	}
}

void func_217(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_223())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_220(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_4262188[iParam0 /*80*/]);
		}
		func_218(&(Global_4262188[iParam0 /*80*/]));
	}
}

void func_218(var uParam0)
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
	func_219(&(uParam0->f_8.f_3));
	func_219(&(uParam0->f_8.f_16));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_219(var uParam0)
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

int func_220(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262188[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_221(int iParam0, var uParam1)
{
	Global_2460027 = uParam1;
	Global_2460026 = iParam0;
}

int func_222(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262188[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_223())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262188[iVar0 /*80*/].f_2 = 1;
			Global_4262188[iVar0 /*80*/].f_1 = uParam5;
			Global_4262188[iVar0 /*80*/].f_3 = uParam1;
			Global_4262188[iVar0 /*80*/].f_4 = uParam2;
			Global_4262188[iVar0 /*80*/].f_7 = uParam3;
			Global_4262188[iVar0 /*80*/].f_5 = 0;
			Global_4262188[iVar0 /*80*/] = iParam0;
			Global_4262188[iVar0 /*80*/].f_6 = iParam4;
			Global_4262188[iVar0 /*80*/].f_72 = uParam8;
			Global_4262188[iVar0 /*80*/].f_71 = uParam7;
			Global_4262188[iVar0 /*80*/].f_74 = iParam9;
			Global_4262188[iVar0 /*80*/].f_73 = 0;
			Global_4262188[iVar0 /*80*/].f_75 = unk_0xC87A57742F7D3C06();
			Global_4262188[iVar0 /*80*/].f_79 = 0;
			Global_4262725 = 0;
			if (bParam6)
			{
				Global_4262188[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_223()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_224(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22851 == 0 || Global_262145.f_22851 == 1)
		{
			if (!unk_0x8ACB0C3FACC09467() || Global_262145.f_22851 == 1)
			{
				Global_2519572.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2519572.f_273 = iParam1;
				Global_2519572.f_274 = 0;
			}
		}
	}
}

void func_225(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x6BAA0516CC970D99(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_649.f_1 - iLocal_338)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_10824)
		{
			iVar1 = Global_262145.f_10824;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_264() * iVar1);
		*uParam1 = (func_263() * iVar1);
		fVar2 = func_262();
		if (fVar2 > 0f && !unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_261())
			{
				iVar3 = func_261();
			}
			iVar4 = Local_649.f_51;
			if (iVar4 > func_260())
			{
				iVar4 = func_260();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_253(func_259(), func_258(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_262145.f_10837)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_253(func_252(), func_251(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_262145.f_10838)));
		}
		else
		{
			func_249(1);
		}
	}
	else
	{
		func_249(0);
	}
	func_226(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_226(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_248())
		{
			if (func_247(0))
			{
				if (!func_243(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_242()))
					{
						if (func_241() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_241());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_239(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_232("GB_BCUT_TICK1", func_242(), iVar0, 0, 0, 1, 1);
						}
						func_231(20);
						func_227(func_242(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_227(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_230(iParam0);
		func_229(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_228(iParam0));
	}
}

var func_228(int iParam0)
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_229(var uParam0, var uParam1)
{
	*uParam0 = Global_1641937.f_9;
	*uParam1 = Global_1641937.f_10;
}

var func_230(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_491;
}

void func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

int func_232(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var1))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		unk_0x449F0674640D94C0(func_66(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_237(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_233(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_233(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_236() || !unk_0x517823CA390A19F6()) || !func_14(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_234(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1661957.f_5[iVar0 /*53*/] = iParam0;
		Global_1661957.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1661957.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1661957.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1661957.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1661957.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1661957.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1661957 - 1))
	{
		if (iParam0 > Global_1661957.f_5[iVar0 /*53*/].f_1)
		{
			func_235(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1661957++;
	if (Global_1661957 > 5)
	{
		Global_1661957 = 5;
		return Global_1661957;
	}
	return (Global_1661957 - 1);
}

void func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1661957.f_5[iVar0 /*53*/] = { Global_1661957.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_236()
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_237(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_238(&cVar0);
}

var func_238(char[4] cParam0)
{
	return cParam0;
}

void func_239(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_240(1);
	}
	else
	{
		iVar1 = func_240(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_240(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11779;
}

int func_241()
{
	return Global_262145.f_11778;
}

int func_242()
{
	return Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11;
}

bool func_243(bool bParam0)
{
	return func_244(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_244(int iParam0, bool bParam1)
{
	return func_245(iParam0, bParam1, 1);
}

int func_245(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_246(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_93() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 != func_93())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_93())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_247(bool bParam0)
{
	return func_81(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_248()
{
	return func_82(unk_0xB5CEFD608600A09F());
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		if (func_250(1))
		{
			unk_0xF0059F27F7BB6680(&Global_1574477, 1);
		}
	}
	else if (func_250(2))
	{
		unk_0xF0059F27F7BB6680(&Global_1574477, 2);
	}
}

int func_250(int iParam0)
{
	var uVar0;
	
	uVar0 = func_196(2530, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xFA30DFD0084E92FE(uVar0, 0) && unk_0xFA30DFD0084E92FE(iVar0, 1)) && unk_0xFA30DFD0084E92FE(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 3) && unk_0xFA30DFD0084E92FE(iVar0, 4)) && unk_0xFA30DFD0084E92FE(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 6) && unk_0xFA30DFD0084E92FE(iVar0, 7)) && unk_0xFA30DFD0084E92FE(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 9) && unk_0xFA30DFD0084E92FE(iVar0, 10)) && unk_0xFA30DFD0084E92FE(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_251()
{
	return Global_262145.f_10324;
}

int func_252()
{
	return Global_262145.f_10322;
}

int func_253(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_254(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_254(int iParam0, int iParam1, int iParam2)
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

float func_255()
{
	return Global_262145.f_10327;
}

float func_256()
{
	return Global_262145.f_10326;
}

float func_257()
{
	return Global_262145.f_10325;
}

int func_258()
{
	return Global_262145.f_10323;
}

int func_259()
{
	return Global_262145.f_10321;
}

int func_260()
{
	return Global_262145.f_10729;
}

int func_261()
{
	return Global_262145.f_10728;
}

var func_262()
{
	if (func_20(0))
	{
		return Global_262145.f_10348;
	}
	if (func_20(1))
	{
		return Global_262145.f_10349;
	}
	if (func_20(2))
	{
		return Global_262145.f_10350;
	}
	return Global_262145.f_10351;
}

int func_263()
{
	return Global_262145.f_10320;
}

int func_264()
{
	return Global_262145.f_10319;
}

void func_265()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1, 1) && (func_277() || unk_0xFA30DFD0084E92FE(Local_649.f_2, 0)))
	{
		if (func_64(func_276()))
		{
			func_275();
		}
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
			{
				if (func_314(0))
				{
					iVar2 = Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4;
					func_271(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_269(64, func_270(Local_649.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_375(Local_649.f_3), 1, 2, -1);
						}
						else if (func_268())
						{
							func_269(69, func_270(Local_649.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_375(Local_649.f_3), 1, 2, -1);
						}
						else
						{
							func_269(64, func_270(Local_649.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_375(Local_649.f_3), 1, 2, -1);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_649.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_375(Local_649.f_3), 1, 2, -1);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_649.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_649.f_3), 1, 2, -1);
						}
						else
						{
							func_269(67, func_270(Local_649.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_649.f_3), 1, 2, -1);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_649.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_375(Local_649.f_3), 1, 2, -1);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_649.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_649.f_3), 1, 2, -1);
						}
						else
						{
							func_269(67, func_270(Local_649.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_649.f_3), 1, 2, -1);
						}
					}
					else
					{
						uVar3 = unk_0xCFA8A401AAD7BB5A(Local_649.f_4[0]);
						if (unk_0x05086B70D2CFEA6F(uVar3))
						{
							iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
							if (Local_2615[Local_649.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2615[Local_649.f_4[0] /*12*/].f_4;
							func_271(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_267(76, func_93(), func_270(Local_649.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_375(Local_649.f_3), -1, fVar1, 1, 2, unk_0xD885B2234FC72D62(iVar4));
							}
							else if (func_268())
							{
								func_267(77, func_93(), func_270(Local_649.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_375(Local_649.f_3), iVar0, -1082130432, 1, 2, unk_0xD885B2234FC72D62(iVar4));
							}
							else
							{
								func_267(76, func_93(), func_270(Local_649.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_375(Local_649.f_3), iVar0, -1082130432, 1, 2, unk_0xD885B2234FC72D62(iVar4));
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
			unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1), 1);
			func_266(133);
		}
	}
}

void func_266(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_267(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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
	func_94(iParam0, &Var0, iParam7, sParam3, sParam4);
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

int func_268()
{
	return 0;
}

int func_269(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_94(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != -1)
	{
		unk_0xF0059F27F7BB6680(&(Var0.f_69), iParam10);
	}
	return func_51(&Var0);
}

char* func_270(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x8150E47F9B8C07E2())
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
			if (unk_0x8150E47F9B8C07E2())
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

int func_271(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_272(Local_649.f_3, iParam2) / 10f);
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

float func_272(int iParam0, int iParam1)
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
			if (unk_0x8150E47F9B8C07E2())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_274(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_273(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_273(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_274(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_275()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 != 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

int func_276()
{
	return Global_2436641.f_2703[0 /*80*/].f_1;
}

bool func_277()
{
	return unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 25);
}

int func_278(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_288()) && !(func_101(unk_0xB5CEFD608600A09F(), 0) && (func_97(unk_0xB5CEFD608600A09F()) || func_287(unk_0xB5CEFD608600A09F())))) && !func_285(unk_0xB5CEFD608600A09F()))
	{
		func_284();
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
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 25);
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&(Global_2519572.f_4573), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_283(uParam0, 1);
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
				func_280();
				func_283(uParam0, 2);
			}
			break;
		
		case 2:
			func_280();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_279("AMEV_LBD_HELP"))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_283(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4573), 1);
				func_283(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4573), 1);
			return 1;
	}
	return 0;
}

bool func_279(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_280()
{
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4573, 0))
	{
		if (((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_2519572.f_784, 2)) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_68280) && !Global_53148) && !unk_0x17FAADF9916EF741())
		{
			unk_0xF0059F27F7BB6680(&(Global_2519572.f_4573), 1);
			func_282("AMEV_LBD_HELP", -1);
			func_281(1);
			unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4573), 0);
		}
	}
}

void func_281(int iParam0)
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_288())
	{
		unk_0xC4BA30B532FE260F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_282(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam1);
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_284()
{
	Global_2459236 = 1;
}

int func_285(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_286(int iParam0)
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
	}
	return -1;
}

bool func_287(int iParam0)
{
	return func_96(iParam0, 19);
}

bool func_288()
{
	return Global_2436641.f_2703[0 /*80*/].f_1 != 0;
}

void func_289()
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
	
	if (Local_649.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_311() && !func_91(unk_0xB5CEFD608600A09F()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_93();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_649.f_4[iVar16] > -1)
			{
				uVar30 = unk_0xCFA8A401AAD7BB5A(Local_649.f_4[iVar16]);
				if (unk_0x05086B70D2CFEA6F(uVar30))
				{
					iVar4 = unk_0x4ED43B67B3F05E0F(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2615[Local_649.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_271(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2615[Local_649.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_247(1))
								{
									if (func_81(iVar4, 1))
									{
										uVar26[iVar16] = func_66(iVar4, -2, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x6BAA0516CC970D99();
		if (func_91(unk_0xB5CEFD608600A09F()))
		{
			uVar31 = func_309();
			iVar32 = unk_0x5363B43856FA7779(uVar31);
			if (unk_0x96B1061E8F3CBC9A(iVar32))
			{
				iVar33 = unk_0xDE780EBA36114734(iVar32);
				if (unk_0x05086B70D2CFEA6F(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_271(&iVar13, &fVar18, iLocal_342, 1);
		func_271(&iVar14, &fVar19, Local_2615[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_509(&(Local_649.f_39), 0, 0);
		iVar15 = func_507(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_308(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_340, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_311() || Local_649.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_649.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_304(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_270(Local_649.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_305(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_268())
		{
			func_303(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_305(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_294(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_270(Local_649.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_305(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_290();
	}
}

void func_290()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_293();
	if (fVar0 >= 0f)
	{
		if (Local_649.f_37 == 3)
		{
			if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xE59B7F5A03335350(iVar1, 0))
					{
						func_292(iVar1, &fLocal_346);
						fVar2 = (fVar0 + fLocal_346);
						unk_0xCF9877018AE2E3BB(fVar2, 1, 21);
						func_291(fVar0);
						return;
					}
				}
			}
		}
		if (func_279("AMCH_FLYLOW"))
		{
			unk_0x7456702622C62EA0(1);
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_340, 4))
		{
			unk_0x38FF8CB6377D36F6(iLocal_348);
			unk_0x7CB6FD92BE491AD9(&iLocal_340, 4);
		}
		unk_0xCF9877018AE2E3BB(0f, 0, 21);
	}
}

void func_291(float fParam0)
{
	float fVar0;
	
	if (unk_0xFB6A1A92F9B0EB9A(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_510(6);
			if (!unk_0xFA30DFD0084E92FE(iLocal_340, 4))
			{
				unk_0xC4BA30B532FE260F(iLocal_348, "Altitude_Warning", "EXILE_1", 1);
				unk_0xF0059F27F7BB6680(&iLocal_340, 4);
			}
		}
		else
		{
			if (func_279("AMCH_FLYLOW"))
			{
				unk_0x7456702622C62EA0(1);
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_340, 4))
			{
				unk_0x38FF8CB6377D36F6(iLocal_348);
				unk_0x7CB6FD92BE491AD9(&iLocal_340, 4);
			}
		}
	}
}

float func_292(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	unk_0x2084D4C6C2DF616F(Var1, uParam1, 1, 0);
	unk_0x2084D4C6C2DF616F(Var1, &uVar4, 0, 0);
	if (unk_0xC74F808C27B1BB64())
	{
		func_510(3);
		unk_0xF0059F27F7BB6680(&iLocal_340, 10);
		func_27(&uLocal_336, 0, 0);
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_340, 10))
	{
		if (func_1(&uLocal_336, 2000, 0))
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_340, 10);
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

float func_293()
{
	switch (Local_649.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_2458763[0] != iParam0 || Global_2458763[1] != iParam1) || Global_2458763[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2458763[0] = iParam0;
	Global_2458763[1] = iParam1;
	Global_2458763[2] = iParam2;
	Global_2458763[3] = 0;
	Global_2458763[4] = 0;
	if (Global_2458763[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[0]);
			Global_2458769[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_295(iParam3, &(Global_2458769[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2458763[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[1]);
			Global_2458769[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_295(iParam4, &(Global_2458769[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2458763[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[2]);
			Global_2458769[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_295(iParam5, &(Global_2458769[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xB5CEFD608600A09F() != func_93())
			{
				if (func_151(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_295(iParam7, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam14))
	{
		sVar2 = sParam14;
	}
	func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_131();
}

void func_295(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
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
			if (func_134(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_133(6, iVar0);
		Global_1364578.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1364578.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_3770.f_183[iVar0] = iParam3;
		Global_1364578.f_3770.f_172[iVar0] = iParam2;
		Global_1364578.f_3770.f_260[iVar0] = iParam4;
		Global_1364578.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1364578.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1364578.f_3770.f_443[iVar0] = iParam7;
		Global_1364578.f_3770.f_454[iVar0] = fParam8;
		Global_1364578.f_3770.f_497[iVar0] = iParam9;
		Global_1364578.f_3770.f_508[iVar0] = iParam10;
		Global_1364578.f_3770.f_205[iVar0] = iParam11;
		Global_1364578.f_3770.f_216[iVar0] = iParam12;
		Global_1364578.f_3770.f_227[iVar0] = iParam13;
		Global_1364578.f_3770.f_238[iVar0] = iParam14;
		Global_1364578.f_3770.f_249[iVar0] = iParam15;
		Global_1364578.f_3770.f_519[iVar0] = iParam16;
		Global_1364578.f_3770.f_530[iVar0] = iParam17;
		Global_1364578.f_3770.f_541[iVar0] = iParam18;
		Global_1364578.f_3770.f_552[iVar0] = iParam19;
		Global_1364578.f_3770.f_563[iVar0] = iParam20;
		Global_1364578.f_3770.f_574[iVar0] = iParam21;
		Global_1364578.f_3770.f_585[iVar0] = iParam22;
		Global_1364578.f_3770.f_596[iVar0] = iParam23;
		Global_1364578.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_297())
		{
			Global_1364578.f_1088 = 1;
		}
		if (unk_0x8ACB0C3FACC09467())
		{
			iVar2 = 0;
			unk_0x1BBB0A5225346008(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1364578.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1364578.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1364578.f_1088 = 1;
			}
			if (func_296())
			{
				Global_1364578.f_1092 = 1;
			}
		}
	}
}

int func_296()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x1BBB0A5225346008(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_297()
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_298(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_299()
{
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	Global_2459239 = 1;
}

int func_300(bool bParam0)
{
	if (func_302())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_301()
{
	return Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_196 != 0;
}

bool func_302()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 12);
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_2458763[0] != iParam0 || Global_2458763[1] != iParam1) || Global_2458763[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2458763[0] = iParam0;
	Global_2458763[1] = iParam1;
	Global_2458763[2] = iParam2;
	Global_2458763[3] = 0;
	Global_2458763[4] = 0;
	if (Global_2458763[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[0]);
			Global_2458769[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_132(iParam3, &(Global_2458769[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_2458763[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[1]);
			Global_2458769[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_132(iParam4, &(Global_2458769[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_2458763[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[2]);
			Global_2458769[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_132(iParam5, &(Global_2458769[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_132(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0xB5CEFD608600A09F() != func_93())
			{
				if (func_151(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_132(iParam7, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_132(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_132(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam13))
	{
		sVar2 = sParam13;
	}
	func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_131();
}

void func_304(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_2458763[0] != iParam0 || Global_2458763[1] != iParam1) || Global_2458763[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2458763[0] = iParam0;
	Global_2458763[1] = iParam1;
	Global_2458763[2] = iParam2;
	Global_2458763[3] = 0;
	Global_2458763[4] = 0;
	if (Global_2458763[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[0]);
			Global_2458769[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_295(-1, &(Global_2458769[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2458763[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[1]);
			Global_2458769[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_295(-1, &(Global_2458769[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2458763[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_2458763[2]);
			Global_2458769[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_295(-1, &(Global_2458769[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xB5CEFD608600A09F() != func_93())
			{
				if (func_151(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_295(-1, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_131();
}

char* func_305()
{
	return "HUD_COUNTDOWN";
	switch (func_307(unk_0xB5CEFD608600A09F()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_306())
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

int func_306()
{
	if (func_307(unk_0xB5CEFD608600A09F()) == 133)
	{
		return Global_2519572.f_4803;
	}
	return -1;
}

int func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/];
	}
	return -1;
}

void func_308(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x11F9F9006143871A())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 0))
		{
			if (!unk_0xF1734B55490E9045(&(Global_2519572.f_4721)))
			{
				unk_0x4F9069EB2310944B(&(Global_2519572.f_4721));
			}
			unk_0x1549CEF3D921CF97(1);
			unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_FIRA");
			unk_0xC1300D0F3A74E20B("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x9B90420B04C07704("DisableFlightMusic", 0);
			unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
			unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
			if (Global_2519572.f_4729 > -1)
			{
				unk_0x26D344275839A25E(Global_2519572.f_4729);
				Global_2519572.f_4729 = -1;
			}
			Global_2519572.f_4719 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 4))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 2))
				{
					if (unk_0x184DC585A2F8E4A2())
					{
						if ((!unk_0x3362CDE8460ED38B(unk_0x4D8215BCA285185C(unk_0x93DD0CE3F3963C56()), "OFF") && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0xF1734B55490E9045(&(Global_2519572.f_4721)))
						{
							StringCopy(&(Global_2519572.f_4721), "", 32);
							unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_FIRA");
							unk_0xC1300D0F3A74E20B("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x9B90420B04C07704("DisableFlightMusic", 0);
							unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
							unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
							unk_0x1549CEF3D921CF97(1);
							unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 2);
						}
					}
				}
				else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 5))
				{
					unk_0x4F9069EB2310944B("OFF");
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S");
				}
				unk_0xD6423910AAD8A379("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 1);
			}
			else if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xE32DCE487A4E2791() != 0)
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0xDACE091F91A7F74E())
						{
							StringCopy(&(Global_2519572.f_4721), unk_0x6451F9ED1F8684A5(), 32);
							unk_0x4F9069EB2310944B("OFF");
						}
						unk_0x1549CEF3D921CF97(1);
						unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 3))
				{
					Global_2519572.f_4729 = unk_0x2F079D1FC5F6CB99();
					unk_0xC4BA30B532FE260F(Global_2519572.f_4729, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 0))
			{
				Global_2519572.f_4719 = 0;
				Global_2519572.f_4729 = -1;
				unk_0x6FED2D1AA2EBF334("FM_COUNTDOWN_30S_KILL");
				unk_0x1549CEF3D921CF97(0);
				unk_0x3857DADBD6EC8A54("FM_PRE_COUNTDOWN_30S");
				unk_0x9B90420B04C07704("DisableFlightMusic", 1);
				unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
				unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
				unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 0);
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 2))
				{
					unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 2);
					unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 5);
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4719), 5);
					unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4719), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 0))
		{
			Global_2519572.f_4719 = 0;
			Global_2519572.f_4729 = -1;
			unk_0x6FED2D1AA2EBF334("FM_COUNTDOWN_30S_KILL");
			unk_0x1549CEF3D921CF97(0);
			unk_0x3857DADBD6EC8A54("FM_PRE_COUNTDOWN_30S");
			unk_0x9B90420B04C07704("DisableFlightMusic", 1);
			unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
			unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
			unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 0);
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 2);
				unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 5);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4719), 2);
				unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4719), 5);
			}
		}
	}
}

var func_309()
{
	if (unk_0x724D816EA203A79E(func_310()))
	{
		return func_310();
	}
	return func_88();
}

var func_310()
{
	return Global_2359302.f_3;
}

int func_311()
{
	switch (Local_649.f_3)
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

void func_312()
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
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		Local_737.f_533[iVar0 /*42*/] = { Var1 };
		Local_737.f_533[iVar0 /*42*/].f_1 = func_93();
		if (Local_649.f_4[iVar0] > -1)
		{
			uVar44 = unk_0xCFA8A401AAD7BB5A(Local_649.f_4[iVar0]);
			if (unk_0x05086B70D2CFEA6F(uVar44))
			{
				iVar43 = unk_0x4ED43B67B3F05E0F(iVar44);
				if (!func_14(iVar43, 0))
				{
					Local_737.f_533[iVar0 /*42*/] = Local_649.f_4[iVar0];
					Local_737.f_533[iVar0 /*42*/].f_1 = iVar43;
					Local_737.f_533[iVar0 /*42*/].f_9 = Local_2615[Local_649.f_4[iVar0] /*12*/].f_4;
					Local_737.f_533[iVar0 /*42*/].f_31 = -1;
					Local_737.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_313()
{
	unk_0xF0059F27F7BB6680(&(Global_2519572.f_1723), 19);
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_649.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2615[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_315()
{
}

void func_316()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_271(&iVar1, &fVar2, iLocal_342, 1);
	switch (Local_649.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_318(sVar0, fVar2 >= 70f);
			if (unk_0x144E80F5C46A6B75(sVar0))
			{
				fVar2 = func_317(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xB4B01646AEC7DB2E(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x620EBB593A8870CD();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_318(sVar0, bVar3);
			if (unk_0x144E80F5C46A6B75(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_317(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_317(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xB4B01646AEC7DB2E(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_347 != iLocal_342)
			{
				if (iLocal_342 > 0)
				{
					unk_0xC4BA30B532FE260F(iLocal_349, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x8B34879B92B3B225(iLocal_349, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xC4BA30B532FE260F(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_347 = iLocal_342;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_340, 3))
		{
			if (func_243(1))
			{
				unk_0xC4BA30B532FE260F(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xC4BA30B532FE260F(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xF0059F27F7BB6680(&iLocal_340, 3);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_340, 3))
	{
		if (func_243(1))
		{
			unk_0xC4BA30B532FE260F(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xC4BA30B532FE260F(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_340, 3);
	}
}

float func_317(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_318(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x144E80F5C46A6B75(sParam0))
		{
			unk_0xD6423910AAD8A379(sParam0);
		}
	}
	else if (unk_0x144E80F5C46A6B75(sParam0))
	{
		unk_0xC1300D0F3A74E20B(sParam0);
	}
}

void func_319()
{
	int iVar0;
	
	if ((!func_151(unk_0xB5CEFD608600A09F()) && !func_14(unk_0xB5CEFD608600A09F(), 0)) && func_12(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		iVar0 = func_340();
		if (iVar0 != Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_339) || func_339(iVar0, iLocal_339))
			{
				if (!func_338() || func_1(&uLocal_328, 1000, 0))
				{
					func_27(&uLocal_328, 0, 0);
					iLocal_339 = iVar0;
					Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4 = iVar0;
					func_322();
					if (iLocal_338 == 0)
					{
						iLocal_338 = unk_0xED678C85A82F0AB9();
					}
					if (Local_3000.f_11 == 0)
					{
						Local_3000.f_11 = unk_0xB99C193A32DE341D();
					}
				}
			}
		}
		iLocal_342 = func_320();
	}
}

int func_320()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_649.f_3)
	{
		case 0:
			fVar1 = unk_0x0F30CB0CB143363C();
			break;
		
		case 1:
			fVar1 = unk_0xBBB5FC157865F9C1();
			break;
		
		case 2:
			fVar1 = unk_0x620EBB593A8870CD();
			break;
		
		case 3:
			fVar1 = unk_0xD94883910C97693D();
			break;
		
		case 4:
			fVar1 = unk_0x6DCAB01957D214DA();
			break;
		
		case 5:
			fVar1 = unk_0xE590435BD561E6BD();
			break;
		
		case 8:
			iVar0 = unk_0x66D4675AE7BFBE0D();
			break;
		
		case 9:
			fVar1 = unk_0xA94ACC327E57DC18();
			break;
		
		case 11:
			fVar1 = unk_0xB329D387ACC694DB();
			break;
		
		case 12:
			fVar1 = unk_0xB329D387ACC694DB();
			break;
		
		case 13:
			fVar1 = unk_0xB3BC59BEF9318F16();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0xC40EDFF7541407A8(iVar0);
	func_321(&iVar2);
	if (iVar2 == iLocal_341)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_340, 1))
			{
				func_27(&uLocal_330, 0, 0);
				Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4.f_2 = func_509(&uLocal_330, 0, 0);
				unk_0xF0059F27F7BB6680(&iLocal_340, 1);
			}
			else if ((func_509(&uLocal_330, 0, 0) % 1000) == 0)
			{
				Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4.f_2 = func_509(&uLocal_330, 0, 0);
			}
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&iLocal_340, 1);
	}
	if ((func_21(iLocal_341, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_332, 2000, 0))
	{
		iVar2 = iLocal_341;
		unk_0xF0059F27F7BB6680(&iLocal_340, 2);
	}
	else
	{
		iLocal_341 = iVar2;
		func_44(&uLocal_332);
		unk_0x7CB6FD92BE491AD9(&iLocal_340, 2);
	}
	return iVar2;
}

void func_321(int iParam0)
{
	switch (Local_649.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((((unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
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

void func_322()
{
	if (!unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1, 2))
	{
		unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_1), 2);
		func_323(1);
	}
}

void func_323(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 7))
		{
			if ((!func_95(unk_0xB5CEFD608600A09F()) && !func_7(unk_0xB5CEFD608600A09F())) && !func_151(unk_0xB5CEFD608600A09F()))
			{
				if (func_154())
				{
					func_331(0);
					func_330();
				}
				if (func_329(0))
				{
					uVar0 = func_196(2476, -1, 0);
					unk_0x7CB6FD92BE491AD9(&uVar0, 0);
					func_330();
				}
				if (func_329(func_328(func_307(unk_0xB5CEFD608600A09F()))))
				{
					uVar0 = func_196(2476, -1, 0);
					unk_0x7CB6FD92BE491AD9(&uVar0, func_328(func_307(unk_0xB5CEFD608600A09F())));
					func_330();
				}
				if (func_327())
				{
					func_330();
				}
				if (func_307(unk_0xB5CEFD608600A09F()) > -1)
				{
					unk_0xF0059F27F7BB6680(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 7);
					if (func_307(unk_0xB5CEFD608600A09F()) == 236)
					{
						func_326();
					}
				}
			}
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 7))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 7);
		func_324();
	}
}

void func_324()
{
	if (func_325())
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 17);
	}
}

bool func_325()
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 17);
}

void func_326()
{
	if (!func_325())
	{
		Global_2519572.f_6168 = unk_0xED678C85A82F0AB9();
		unk_0xF0059F27F7BB6680(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 17);
	}
}

int func_327()
{
	if (Global_2436641.f_1151.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_328(int iParam0)
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
	return Global_262145.f_22968;
}

bool func_329(int iParam0)
{
	var uVar0;
	
	uVar0 = func_196(2476, -1, 0);
	return unk_0xFA30DFD0084E92FE(uVar0, iParam0);
}

void func_330()
{
	if (func_327())
	{
		Global_2436641.f_1151.f_16 = 1;
	}
}

void func_331(int iParam0)
{
	if (func_154())
	{
		if (iParam0 == 1)
		{
			if (Global_2519572.f_4381 == -1)
			{
				Global_2519572.f_4381 = 60000;
			}
			func_27(&(Global_2519572.f_4379), 0, 0);
			if (Global_2519572.f_4384 == -1)
			{
				Global_2519572.f_4384 = 10000;
			}
			func_27(&(Global_2519572.f_4382), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_8 = 0;
			func_337(1);
		}
		if ((!unk_0x517823CA390A19F6() && !func_336()) && !func_332(unk_0xB5CEFD608600A09F()))
		{
			Global_979885 = 0;
		}
	}
}

int func_332(int iParam0)
{
	if (func_333(iParam0, 1))
	{
		if (Global_1589291[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_334(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_334(int iParam0)
{
	return func_335(iParam0);
}

bool func_335(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

bool func_336()
{
	return Global_2447942.f_727;
}

void func_337(bool bParam0)
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_154())
		{
			if (func_12(unk_0xB5CEFD608600A09F(), 1, 0))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, 0);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, 0);
			}
			unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0x4D5701941275B494(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 0);
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, 1);
				unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x4D5701941275B494(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(0);
		}
	}
}

int func_338()
{
	switch (Local_649.f_3)
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

int func_339(int iParam0, int iParam1)
{
	if (Local_649.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_340()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_355())
	{
		if (Local_649.f_3 == 14)
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && func_354(unk_0xBC25C936A095B5BA(), 0) == -1)
			{
				iVar2 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				if ((!func_353(&iVar2, 0) || unk_0x6F79ECA8C83E4357(iVar2) != joaat("dodo")) && unk_0x2A348A3A98B80B13(iVar2))
				{
					func_346(Local_649.f_3 != 14, 1, 0);
					if (func_345())
					{
						iVar3 = func_344();
						if (iVar3 >= 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_8[func_343(iVar3)], func_342(iVar3)))
							{
								iLocal_343++;
								unk_0xF0059F27F7BB6680(&(Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_8[func_343(iVar3)]), func_342(iVar3));
							}
						}
					}
					iVar0 = iLocal_343;
				}
			}
		}
		else
		{
			iVar0 = func_341();
		}
	}
	else
	{
		unk_0x8C87D396610D1D7C(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0xC40EDFF7541407A8(iVar0);
}

int func_341()
{
	switch (Local_649.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_342(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_343(iParam0) * 31);
}

int func_343(int iParam0)
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

int func_344()
{
	return iLocal_105;
}

int func_345()
{
	if (iLocal_112 == 1)
	{
		iLocal_112 = 0;
		return 1;
	}
	return 0;
}

void func_346(bool bParam0, bool bParam1, int iParam2)
{
	func_348(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_313.f_2 < Local_316.f_2)
		{
			Local_313.f_2 = 0f;
		}
		else
		{
			Local_316.f_2 = 0f;
		}
		if (Local_319.f_2 < Local_322.f_2)
		{
			Local_319.f_2 = 0f;
		}
		else
		{
			Local_322.f_2 = 0f;
		}
	}
	switch (iLocal_106)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Local_116[iLocal_105 /*3*/]) < fLocal_312)
				{
					if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0))
							{
								bLocal_107 = true;
								iLocal_106 = 1;
							}
							if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
							{
								bLocal_108 = true;
								iLocal_106 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) && !unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					func_347();
				}
				else if (!unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					func_347();
				}
				else if (!unk_0x2A348A3A98B80B13(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) && !bParam1)
				{
					func_347();
				}
				if (bLocal_107)
				{
					if (iLocal_111)
					{
						if (iLocal_110)
						{
							if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
							{
								func_347();
								iLocal_112 = 1;
							}
						}
						else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
						{
							iLocal_110 = 1;
						}
						else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
						{
							func_347();
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
					{
						iLocal_111 = 1;
					}
					else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
					{
						func_347();
					}
				}
				else if (bLocal_108)
				{
					if (iLocal_111)
					{
						if (iLocal_109)
						{
							if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
							{
								func_347();
								iLocal_112 = 1;
							}
						}
						else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
						{
							iLocal_109 = 1;
						}
						else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
						{
							func_347();
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
					{
						iLocal_111 = 1;
					}
					else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_313, Local_316, fLocal_325, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_319, Local_322, fLocal_325, 0, 1, 0))
					{
						func_347();
					}
				}
			}
			break;
	}
}

void func_347()
{
	bLocal_107 = false;
	bLocal_108 = false;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_106 = 0;
}

void func_348(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_113 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_352(iVar0)) && (uParam1 || !func_351(iVar0)))
		{
			if (func_350(Local_113, Local_116[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_113, Local_116[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_105 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_349(iLocal_105);
}

void func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_313 = { 1103.014f, -233.0374f, 56.13004f };
			Local_316 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_325 = 30f;
			Local_319 = { 1093.589f, -248.5926f, 56.88639f };
			Local_322 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_313 = { 1044.182f, -324.5904f, 49.33408f };
			Local_316 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_325 = 30f;
			Local_319 = { 1007.983f, -320.6159f, 48.4543f };
			Local_322 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_313 = { 916.599f, -419.8782f, 35.62748f };
			Local_316 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_325 = 7f;
			Local_319 = { 912.1362f, -420.5161f, 35.38034f };
			Local_322 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_313 = { 757.7189f, -472.924f, 19.2535f };
			Local_316 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_325 = 20.75f;
			Local_319 = { 744.9114f, -480.7373f, 19.06514f };
			Local_322 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_313 = { 680.3677f, -581.1792f, 14.2145f };
			Local_316 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_325 = 45f;
			Local_319 = { 667.3692f, -610.5356f, 13.85401f };
			Local_322 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_313 = { 644.2497f, -844.7504f, 12.36707f };
			Local_316 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_325 = 25f;
			Local_319 = { 644.3659f, -859.3878f, 12.59677f };
			Local_322 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_313 = { 634.972f, -1011.64f, 10.92594f };
			Local_316 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_325 = 25f;
			Local_319 = { 634.9612f, -1029.123f, 10.61846f };
			Local_322 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_313 = { 645.7223f, -1191.215f, 10.45198f };
			Local_316 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_325 = 50f;
			Local_319 = { 645.7223f, -1228.966f, 10.98015f };
			Local_322 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_313 = { 642.1216f, -1295.73f, 9.005976f };
			Local_316 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_325 = 7f;
			Local_319 = { 644.7772f, -1298.168f, 9.128529f };
			Local_322 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_313 = { 686.5675f, -1444.71f, 9.065001f };
			Local_316 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_325 = 25f;
			Local_319 = { 682.3027f, -1429.872f, 9.890836f };
			Local_322 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_313 = { 718.7617f, -1734.313f, 9.082874f };
			Local_316 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_325 = 30f;
			Local_319 = { 717.5355f, -1748.646f, 9.363478f };
			Local_322 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_313 = { 694.3165f, -2049.806f, 0.009695f };
			Local_316 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_325 = 30f;
			Local_319 = { 693.1836f, -2063.225f, 0.429037f };
			Local_322 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_313 = { 642.6671f, -2494.551f, 0.468485f };
			Local_316 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_325 = 20f;
			Local_319 = { 647.0339f, -2506.202f, 0.583701f };
			Local_322 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_313 = { 691.8235f, -2558.219f, 0.363352f };
			Local_316 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_325 = 10.25f;
			Local_319 = { 695.7928f, -2561.034f, 0.346731f };
			Local_322 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_313 = { 723.6254f, -2562.171f, 0.255647f };
			Local_316 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_325 = 15f;
			Local_319 = { 735.765f, -2561.935f, 0.311182f };
			Local_322 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_313 = { 891.4387f, -2603.12f, 0f };
			Local_316 = { 704.4932f, -2634.793f, 45f };
			fLocal_325 = 20f;
			Local_319 = { 893.2578f, -2616.235f, 0f };
			Local_322 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_313 = { -2669.587f, 2491.96f, 2.043799f };
			Local_316 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_325 = 26.5f;
			Local_319 = { -2687.606f, 2494.868f, 2.608733f };
			Local_322 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_313 = { -1986.173f, 4521.799f, 0f };
			Local_316 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_325 = 17f;
			Local_319 = { -1995.668f, 4531.259f, 0f };
			Local_322 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_313 = { -526.0265f, 4472.442f, 0f };
			Local_316 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_325 = 10f;
			Local_319 = { -519.9281f, 4476.346f, 0f };
			Local_322 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_313 = { 98.1615f, 3384.489f, 45.45169f };
			Local_316 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_325 = 8f;
			Local_319 = { 152.6802f, 3346.793f, 45.02156f };
			Local_322 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_313 = { 147.8606f, 3406.796f, 38.03672f };
			Local_316 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_325 = 14.5f;
			Local_319 = { 130.0916f, 3425.417f, 38.05672f };
			Local_322 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_313 = { 2830.972f, 4967.14f, 34.56013f };
			Local_316 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_325 = 10f;
			Local_319 = { 2826.767f, 4964.185f, 34.10636f };
			Local_322 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_313 = { -151.5764f, 4264.417f, 31.04735f };
			Local_316 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_325 = 10f;
			Local_319 = { -148.3842f, 4261.071f, 31.57409f };
			Local_322 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_313 = { -426.6919f, 2964.272f, 14.848f };
			Local_316 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_325 = 7f;
			Local_319 = { -425.0283f, 2967.861f, 15.22699f };
			Local_322 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_313 = { -192.3414f, 2864.916f, 30.72595f };
			Local_316 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_325 = 10f;
			Local_319 = { -192.0129f, 2871.603f, 29.99943f };
			Local_322 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_313 = { 2539.185f, 2228.772f, 18.6102f };
			Local_316 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_325 = 10f;
			Local_319 = { 2543.708f, 2231.402f, 18.331f };
			Local_322 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_313 = { 2954.087f, 815.7209f, 0.037901f };
			Local_316 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_325 = 35f;
			Local_319 = { 2966.123f, 806.8889f, 0.544056f };
			Local_322 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_313 = { 2329.673f, -459.6648f, 70.24277f };
			Local_316 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_325 = 12f;
			Local_319 = { 2324.752f, -455.5238f, 70.25145f };
			Local_322 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_313 = { 1943.428f, -753.251f, 80.17905f };
			Local_316 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_325 = 7f;
			Local_319 = { 1943.366f, -758.287f, 80.32291f };
			Local_322 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_313 = { -271.2849f, -2414.993f, -10f };
			Local_316 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_325 = 30f;
			Local_319 = { -279.8399f, -2427.212f, -10f };
			Local_322 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_313 = { -1483f, 2691.428f, -10f };
			Local_316 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_325 = 12f;
			Local_319 = { -1478.152f, 2696.688f, -10f };
			Local_322 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_313 = { 222.1519f, -2343.487f, 0.039199f };
			Local_316 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_325 = 12f;
			Local_319 = { 216.959f, -2343.487f, 0.207734f };
			Local_322 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_313 = { 346.4622f, -2244.374f, 0.159779f };
			Local_316 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_325 = 20f;
			Local_319 = { 359.609f, -2244.468f, 0.129684f };
			Local_322 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_313 = { -1859.68f, -322.6357f, 56.16368f };
			Local_316 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_325 = 7.5f;
			Local_319 = { -1860.27f, -327.8634f, 57.543f };
			Local_322 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_313 = { -680.2632f, -600.818f, 69.11289f };
			Local_316 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_325 = 31.5f;
			Local_319 = { -680.6077f, -618.3658f, 69.27496f };
			Local_322 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_313 = { -1468.096f, -591.7158f, 67.05518f };
			Local_316 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_325 = 11.75f;
			Local_319 = { -1474.903f, -591.1215f, 67.08091f };
			Local_322 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_313 = { -1544.958f, -537.1475f, 72.44347f };
			Local_316 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_325 = 11.75f;
			Local_319 = { -1541.008f, -541.5494f, 71.61972f };
			Local_322 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_313 = { 333.2108f, -2727.274f, 20.71663f };
			Local_316 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_325 = 20f;
			Local_319 = { 343.1127f, -2727.236f, 20.23613f };
			Local_322 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_313 = { 1928.071f, 6228.355f, 43.49398f };
			Local_316 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_325 = 13f;
			Local_319 = { 1931.82f, 6235.634f, 43.37382f };
			Local_322 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_313 = { -736.4309f, -1590.921f, 10.80892f };
			Local_316 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_325 = 15f;
			Local_319 = { -727.2307f, -1585.221f, 11.78027f };
			Local_322 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_313 = { -676.3775f, -1548.553f, 12.33747f };
			Local_316 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_325 = 25f;
			Local_319 = { -654.203f, -1536.146f, 9.191055f };
			Local_322 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_313 = { -624.2344f, -1537.045f, 12.60193f };
			Local_316 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_325 = 8f;
			Local_319 = { -615.4003f, -1536.65f, 12.40271f };
			Local_322 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_313 = { -492.5057f, -1632.457f, 24.3307f };
			Local_316 = { -418.2088f, -1487.452f, 0f };
			fLocal_325 = 25f;
			Local_319 = { -486.2016f, -1636.095f, 24.20805f };
			Local_322 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_313 = { -359.3541f, -1639.693f, 13.13455f };
			Local_316 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_325 = 25f;
			Local_319 = { -378.1518f, -1705.66f, 12.47196f };
			Local_322 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_313 = { -243.4436f, -1814.623f, 25.69465f };
			Local_316 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_325 = 25f;
			Local_319 = { -235.1319f, -1822.094f, 25.86542f };
			Local_322 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_313 = { 84.55537f, -2046.159f, 13.30767f };
			Local_316 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_325 = 25f;
			Local_319 = { 17.90788f, -2035.773f, 12.62706f };
			Local_322 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_313 = { 221.5029f, -2232.766f, 9.88676f };
			Local_316 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_325 = 8f;
			Local_319 = { 218.583f, -2232.766f, 9.886198f };
			Local_322 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_313 = { 221.6518f, -2184.635f, 11.66457f };
			Local_316 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_325 = 8f;
			Local_319 = { 217.8995f, -2184.635f, 11.5405f };
			Local_322 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_313 = { 2326.57f, 1096.031f, 76.31458f };
			Local_316 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_325 = 21f;
			Local_319 = { 2334.453f, 1103.067f, 76.26603f };
			Local_322 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_313 = { 2379.442f, 1150.776f, 58.79632f };
			Local_316 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_325 = 12f;
			Local_319 = { 2374.064f, 1146.282f, 58.83331f };
			Local_322 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_313 = { -1179.405f, -355.2554f, 56.53003f };
			Local_316 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_325 = 12.5f;
			Local_319 = { -1178.385f, -361.8784f, 56.15081f };
			Local_322 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_313 = { -921.3846f, -384.94f, 137.0181f };
			Local_316 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_325 = 16f;
			Local_319 = { -914.1658f, -387.9444f, 137.0794f };
			Local_322 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_313 = { -740.2564f, 246.4529f, 132.2922f };
			Local_316 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_325 = 22f;
			Local_319 = { -726.6429f, 253.0676f, 132.3319f };
			Local_322 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_313 = { -771.2068f, 268.2729f, 132.1689f };
			Local_316 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_325 = 16f;
			Local_319 = { -770.8035f, 310.8625f, 137.4161f };
			Local_322 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_313 = { 259.2205f, 135.4146f, 136.7083f };
			Local_316 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_325 = 16f;
			Local_319 = { 261.9694f, 142.9676f, 136.6889f };
			Local_322 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_313 = { 393.548f, -30.87166f, 152.6635f };
			Local_316 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_325 = 8f;
			Local_319 = { 390.5358f, -36.08882f, 152.7813f };
			Local_322 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_313 = { 114.3139f, -648.4297f, 261.8488f };
			Local_316 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_325 = 20f;
			Local_319 = { 124.8467f, -646.6575f, 261.8488f };
			Local_322 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_313 = { -215.919f, -823.8436f, 126.0224f };
			Local_316 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_325 = 20f;
			Local_319 = { -225.397f, -820.3937f, 126.0812f };
			Local_322 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_313 = { -296.4725f, -802.0815f, 95.40108f };
			Local_316 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_325 = 20f;
			Local_319 = { -305.4602f, -798.8369f, 95.48194f };
			Local_322 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_313 = { -292.3034f, -823.3569f, 95.37621f };
			Local_316 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_325 = 20f;
			Local_319 = { -288.9206f, -814.022f, 95.37556f };
			Local_322 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_313 = { -256.3589f, -714.7838f, 110.1617f };
			Local_316 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_325 = 20f;
			Local_319 = { -253.7723f, -705.6632f, 110.1736f };
			Local_322 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_313 = { 1808.214f, 1949.246f, 71.73707f };
			Local_316 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_325 = 9.75f;
			Local_319 = { 1802.786f, 1950.262f, 71.74002f };
			Local_322 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_313 = { 2388.733f, 2931.941f, 46.62681f };
			Local_316 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_325 = 10f;
			Local_319 = { 2392.547f, 2934.867f, 46.6268f };
			Local_322 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_313 = { 2700.056f, 4836.381f, 42.07854f };
			Local_316 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_325 = 20.75f;
			Local_319 = { 2685.672f, 4821.653f, 42.18471f };
			Local_322 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_313 = { -1053.446f, 4766.245f, 234.3251f };
			Local_316 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_325 = 5f;
			Local_319 = { -1051.414f, 4767.193f, 234.4293f };
			Local_322 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_350(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0)
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

int func_352(int iParam0)
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

int func_353(var uParam0, int iParam1)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*uParam0, 0) || iParam1)
		{
			if (unk_0x149E9368A11035DE(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
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

int func_355()
{
	switch (Local_649.f_3)
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

int func_356(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_372() < 10)
	{
		iVar0 = func_371();
		func_357(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_357(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_358(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_358(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_367(unk_0xB5CEFD608600A09F()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_366(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_361(Var0))
		{
			Global_2405070.f_44.f_64 = func_360(unk_0xB5CEFD608600A09F());
			func_359(Var0, iParam8);
		}
	}
}

void func_359(struct<12> Param0, int iParam12)
{
	Global_2405070.f_361[iParam12 /*12*/] = { Param0 };
	Global_2405070.f_361[iParam12 /*12*/].f_9 = 1;
}

int func_360(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_361(struct<12> Param0)
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
			if (!func_362(Global_2405070.f_44[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_362(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_365(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_363(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_365(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_363(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_363(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_364(Param0, Param3, Var0, Var3);
}

int func_364(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_365(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_366(var uParam0, var uParam1)
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

int func_367(int iParam0)
{
	if (((func_370(iParam0, 1) || func_369(iParam0)) || func_101(iParam0, 0)) || func_368(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_35;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/] != -1;
	}
	return 0;
}

bool func_370(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_360(iParam0) != 0;
	}
	return func_333(iParam0, bParam1);
}

int func_371()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405070.f_361[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_372()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405070.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_373(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_374(int iParam0)
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

char* func_375(int iParam0)
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

char* func_376(int iParam0)
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

void func_377()
{
	if (!func_144())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_1312576.f_9)
	{
		return;
	}
	func_140();
}

void func_378(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_352(iVar0) && !func_351(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_116[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_379()
{
	if (!func_355())
	{
		if (Local_649.f_3 == 14)
		{
			func_382();
		}
		Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4.f_1 = func_341();
	}
	else if ((!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 4) && !unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 5)) && !func_381(unk_0xB5CEFD608600A09F()))
	{
		func_380();
	}
}

void func_380()
{
	switch (Local_649.f_3)
	{
		case 0:
			unk_0x48EA99C287C11C46(8, 2);
			break;
		
		case 1:
			unk_0x48EA99C287C11C46(13, 2);
			break;
		
		case 2:
			unk_0x48EA99C287C11C46(4, 2);
			break;
		
		case 4:
			unk_0x48EA99C287C11C46(1, 2);
			break;
		
		case 3:
			unk_0x48EA99C287C11C46(2, 2);
			break;
		
		case 5:
			unk_0x48EA99C287C11C46(3, 2);
			break;
		
		case 6:
			unk_0x48EA99C287C11C46(11, 3);
			break;
		
		case 7:
			unk_0x48EA99C287C11C46(14, 1);
			break;
		
		case 8:
			unk_0x48EA99C287C11C46(29, 2);
			break;
		
		case 9:
			unk_0x48EA99C287C11C46(12, 2);
			break;
		
		case 10:
			unk_0x48EA99C287C11C46(10, 2);
			break;
		
		case 11:
			unk_0x48EA99C287C11C46(18, 2);
			break;
		
		case 12:
			unk_0x48EA99C287C11C46(20, 2);
			break;
		
		case 13:
			unk_0x48EA99C287C11C46(27, 2);
			break;
		
		case 15:
			unk_0x48EA99C287C11C46(26, 1);
			break;
		
		case 16:
			unk_0x48EA99C287C11C46(25, 1);
			break;
		
		case 17:
			unk_0x48EA99C287C11C46(22, 1);
			break;
		
		case 18:
			unk_0x48EA99C287C11C46(24, 1);
			break;
	}
	unk_0xF0059F27F7BB6680(&iLocal_340, 8);
}

bool func_381(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_382()
{
	Local_116[0 /*3*/] = { 1083f, -231f, 60f };
	Local_116[1 /*3*/] = { 1024f, -325f, 60f };
	Local_116[2 /*3*/] = { 910f, -401f, 43f };
	Local_116[3 /*3*/] = { 721f, -457f, 26f };
	Local_116[4 /*3*/] = { 643f, -579f, 26f };
	Local_116[5 /*3*/] = { 590f, -851f, 26f };
	Local_116[6 /*3*/] = { 590f, -1023f, 16f };
	Local_116[7 /*3*/] = { 582f, -1205f, 24f };
	Local_116[8 /*3*/] = { 608f, -1335f, 16f };
	Local_116[9 /*3*/] = { 640f, -1434f, 16f };
	Local_116[10 /*3*/] = { 671f, -1742f, 20f };
	Local_116[11 /*3*/] = { 651f, -2046f, 16f };
	Local_116[12 /*3*/] = { 603f, -2505f, 9f };
	Local_116[13 /*3*/] = { 673f, -2582f, 4f };
	Local_116[14 /*3*/] = { 728f, -2594f, 10f };
	Local_116[15 /*3*/] = { 794f, -2624f, 27f };
	Local_116[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_116[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_116[18 /*3*/] = { -513f, 4427f, 40f };
	Local_116[19 /*3*/] = { 126f, 3366f, 40f };
	Local_116[20 /*3*/] = { 143f, 3418f, 36f };
	Local_116[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_116[22 /*3*/] = { -162f, 4249f, 40f };
	Local_116[23 /*3*/] = { -408f, 2964f, 20f };
	Local_116[24 /*3*/] = { -181f, 2862f, 38f };
	Local_116[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_116[26 /*3*/] = { 2950f, 803f, 8f };
	Local_116[27 /*3*/] = { 2369f, -409f, 80f };
	Local_116[28 /*3*/] = { 1906f, -755f, 84f };
	Local_116[29 /*3*/] = { -403f, -2333f, 40f };
	Local_116[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_116[31 /*3*/] = { 219f, -2315f, 5f };
	Local_116[32 /*3*/] = { 350f, -2315f, 5f };
	Local_116[33 /*3*/] = { -1848f, -333f, 75f };
	Local_116[34 /*3*/] = { -693f, -608f, 69f };
	Local_116[35 /*3*/] = { -1461f, -582f, 53f };
	Local_116[36 /*3*/] = { -1553f, -546f, 59f };
	Local_116[37 /*3*/] = { 338f, -2758f, 23f };
	Local_116[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_116[39 /*3*/] = { -713f, -1538f, 13f };
	Local_116[40 /*3*/] = { -659f, -1518f, 13f };
	Local_116[41 /*3*/] = { -620f, -1502f, 16f };
	Local_116[42 /*3*/] = { -445f, -1575f, 26f };
	Local_116[43 /*3*/] = { -373f, -1680f, 19f };
	Local_116[44 /*3*/] = { -212f, -1805f, 29f };
	Local_116[45 /*3*/] = { 47f, -2040f, 18f };
	Local_116[46 /*3*/] = { 223f, -2240f, 6f };
	Local_116[47 /*3*/] = { 218f, -2189f, 6f };
	Local_116[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_116[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_116[50 /*3*/] = { -1186f, -365f, 46f };
	Local_116[51 /*3*/] = { -916f, -407f, 93f };
	Local_116[52 /*3*/] = { -726f, 235f, 105f };
	Local_116[53 /*3*/] = { -774f, 286f, 112f };
	Local_116[54 /*3*/] = { 271f, 134f, 125f };
	Local_116[55 /*3*/] = { 377f, -28f, 125f };
	Local_116[56 /*3*/] = { 121f, -703f, 150f };
	Local_116[57 /*3*/] = { -204f, -784f, 74f };
	Local_116[58 /*3*/] = { -287f, -774f, 72f };
	Local_116[59 /*3*/] = { -272f, -824f, 71f };
	Local_116[60 /*3*/] = { -230f, -723f, 80f };
	Local_116[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_116[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_116[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_116[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_383(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204, iParam0))
		{
			unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204, iParam0))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204), iParam0);
	}
}

void func_384(var uParam0, int iParam1)
{
	if (func_307(unk_0xB5CEFD608600A09F()) == 133 && iParam1)
	{
		Global_2519572.f_4803 = uParam0;
	}
	else
	{
		Global_2519572.f_4803 = -1;
	}
}

void func_385(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9B90420B04C07704("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
	}
	Global_2519572.f_4729 = -1;
	bVar0 = (func_101(unk_0xB5CEFD608600A09F(), 0) && func_97(unk_0xB5CEFD608600A09F()));
	if (bParam6)
	{
		func_383(21, 1);
	}
	else
	{
		func_401(iParam0, -1);
		if (func_8(unk_0xB5CEFD608600A09F()))
		{
			Global_1574452.f_3 = iParam0;
		}
		else
		{
			func_400(iParam0);
		}
		Global_1574452.f_4 = -1;
		if (func_8(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 5);
		}
		if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 4);
		}
		unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 17);
		unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 20);
		if (func_399(iParam0))
		{
			func_398();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_395(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xDF53A66AEE1401AA(fParam2);
			if (iParam0 == 146)
			{
				unk_0xAEC867D0DBB7AFEB(0);
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			}
		}
		if (func_393(iParam0))
		{
			unk_0xAEC867D0DBB7AFEB(0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_391(1);
				if (func_250(0))
				{
					unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 9);
				}
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_389(1);
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 12);
		}
		if (bParam5)
		{
			func_388();
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_386(iParam0))
			{
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 21);
			}
		}
	}
	Global_2498720 = 1;
}

int func_386(int iParam0)
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
	if (func_387())
	{
		return 1;
	}
	return 0;
}

int func_387()
{
	switch (func_306())
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

void func_388()
{
	unk_0xF0059F27F7BB6680(&(Global_2519572.f_4720), 0);
}

void func_389(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_93007.f_8 = 1;
	}
	else
	{
		Global_93007.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_390(iVar0);
		iVar0++;
	}
}

void func_390(int iParam0)
{
	Global_93007.f_169[iParam0] = 1;
	Global_93007.f_168 = 1;
}

void func_391(int iParam0)
{
	if (func_392() && iParam0)
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

int func_392()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_394(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_1624079[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

void func_395(float fParam0)
{
	float fVar0;
	
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_396())
	{
		return;
	}
	fVar0 = (Global_2519572.f_4877 - fParam0);
	if (unk_0x3C406FC829C1E14A(Global_2519572.f_4878))
	{
		if (!Global_2519572.f_4878 == unk_0x8A55B15F4133C912() && unk_0x357058E632979E65(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2519572.f_4877 = fParam0;
	Global_2519572.f_4878 = unk_0x8A55B15F4133C912();
}

int func_396()
{
	switch (func_397())
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

int func_397()
{
	return Global_25277;
}

void func_398()
{
	Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_196 = 0;
	unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4547), 1);
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_400(int iParam0)
{
	Global_1624079[unk_0xB5CEFD608600A09F() /*558*/] = iParam0;
}

void func_401(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_329(0) || func_329(func_328(iVar0)))
		{
			unk_0xF0059F27F7BB6680(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 2);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 2);
		}
	}
}

int func_402()
{
	switch (Local_649.f_3)
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

void func_403()
{
	Global_1662768 = 1;
	if (!unk_0xFA30DFD0084E92FE(Global_2527911, 0))
	{
		unk_0xF0059F27F7BB6680(&Global_2527911, 0);
		unk_0xF0059F27F7BB6680(&Global_1662769, 0);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_2527911, 1))
	{
		unk_0xF0059F27F7BB6680(&Global_2527911, 1);
		unk_0xF0059F27F7BB6680(&Global_1662769, 1);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_2527911, 5))
	{
		unk_0xF0059F27F7BB6680(&Global_2527911, 5);
		unk_0xF0059F27F7BB6680(&Global_1662769, 5);
	}
	if (unk_0x86BC948CAD7C61EF(-355737150))
	{
		unk_0xF72F6BB050622804(-355737150, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-580979506))
	{
		unk_0xF72F6BB050622804(-580979506, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1426452475))
	{
		unk_0xF72F6BB050622804(-1426452475, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(745417724))
	{
		unk_0xF72F6BB050622804(745417724, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1305304906))
	{
		unk_0xF72F6BB050622804(-1305304906, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1543175077))
	{
		unk_0xF72F6BB050622804(-1543175077, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-811770997))
	{
		unk_0xF72F6BB050622804(-811770997, 0, 0, 0);
	}
}

int func_404()
{
	switch (Local_649.f_3)
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

void func_405()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_649.f_3))
	{
		if (Local_649.f_3 == 1 || Local_649.f_3 == 6)
		{
			iVar0 = func_427(unk_0xB5CEFD608600A09F(), 1);
			iVar1 = func_189(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 1, 0, 0);
					func_406(1);
				}
			}
			else
			{
				unk_0xC4E9ABB77918D853(unk_0xB5CEFD608600A09F(), 1);
			}
		}
	}
}

void func_406(bool bParam0)
{
	int iVar0;
	
	if (unk_0xA86A4D206EC8EB16(unk_0xBC25C936A095B5BA(), 5) != 0)
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
		unk_0x50F2F0965715E2E9(unk_0xB5CEFD608600A09F(), func_196(585, -1, 0));
		if (func_426())
		{
			unk_0x1198327AE0081E72(unk_0xB5CEFD608600A09F(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_425())
		{
			unk_0x1198327AE0081E72(unk_0xB5CEFD608600A09F(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_422(3610, -1, -1))
		{
		}
		iVar0 = func_196(2040, -1, 0);
		unk_0x010C38B96FD822BF(unk_0xB5CEFD608600A09F(), func_421(unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F()), iVar0));
		if (func_247(0))
		{
			unk_0x50F2F0965715E2E9(unk_0xB5CEFD608600A09F(), func_196(585, -1, 0));
		}
		else
		{
			unk_0x50F2F0965715E2E9(unk_0xB5CEFD608600A09F(), func_420(Global_2528195));
		}
		func_419(unk_0xB5CEFD608600A09F(), iVar0);
		unk_0xC88B78697EDDABA9(unk_0xB5CEFD608600A09F(), 5, func_412(unk_0xBC25C936A095B5BA(), iVar0), func_411(unk_0xBC25C936A095B5BA(), iVar0), 0);
		func_410(func_196(2040, -1, 0), 1);
		Global_2519572.f_276 = 1;
		func_407(unk_0xB5CEFD608600A09F(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_407(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7AF0088ABFA713B6())
	{
		func_409();
		if (iParam2 == -1)
		{
			iParam2 = func_196(2040, -1, 0);
		}
		unk_0xC88B78697EDDABA9(iParam0, 5, func_412(unk_0xA95CF30C72EB526E(iParam0), iParam2), func_411(unk_0xA95CF30C72EB526E(iParam0), iParam2), 0);
		unk_0x010C38B96FD822BF(iParam0, func_421(unk_0xA95CF30C72EB526E(iParam0), iParam2));
		unk_0xB0031DDAE4FF0BC3(unk_0xA95CF30C72EB526E(iParam0), 5, func_412(unk_0xA95CF30C72EB526E(iParam0), iParam2), func_411(unk_0xA95CF30C72EB526E(iParam0), iParam2), func_421(unk_0xA95CF30C72EB526E(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_196(585, -1, 0);
		}
		if (func_247(1) && func_408(iParam0))
		{
			unk_0x50F2F0965715E2E9(iParam0, func_420(Global_2528195));
		}
		else
		{
			unk_0x50F2F0965715E2E9(iParam0, iParam1);
		}
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_28, 4))
		{
			unk_0x50F2F0965715E2E9(iParam0, Global_1574382);
			unk_0x1198327AE0081E72(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_419(iParam0, iParam2);
		unk_0x2E9860A2B72187F5(unk_0xA95CF30C72EB526E(iParam0), 177, 1);
	}
}

bool func_408(int iParam0)
{
	return func_96(iParam0, 10);
}

void func_409()
{
	Global_70954 = 0;
	Global_70955 = -1;
	Global_70956 = -1;
	Global_70957 = -1;
	Global_70958 = -1;
	Global_70959 = -1;
}

void func_410(int iParam0, int iParam1)
{
	if (unk_0x7AF0088ABFA713B6())
	{
		func_409();
		func_187(2040, iParam0, -1, 1, 0);
		unk_0xC88B78697EDDABA9(unk_0xB5CEFD608600A09F(), 5, func_412(unk_0xBC25C936A095B5BA(), iParam0), func_411(unk_0xBC25C936A095B5BA(), iParam0), 0);
		func_419(unk_0xB5CEFD608600A09F(), iParam0);
		unk_0x010C38B96FD822BF(unk_0xB5CEFD608600A09F(), func_421(unk_0xBC25C936A095B5BA(), iParam0));
		if ((iParam1 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0xA86A4D206EC8EB16(unk_0xBC25C936A095B5BA(), 5) != 0)
		{
			func_407(unk_0xB5CEFD608600A09F(), -1, -1);
		}
	}
}

int func_411(var uParam0, int iParam1)
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

var func_412(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0xA86A4D206EC8EB16(uParam0, 9) != false;
	iVar1 = unk_0x769DFEDCD5A3DE41(iParam0, 8, unk_0xA86A4D206EC8EB16(iParam0, 8), unk_0x695D13ECF7DAEC22(iParam0, 8));
	iVar2 = unk_0x769DFEDCD5A3DE41(iParam0, 11, unk_0xA86A4D206EC8EB16(iParam0, 11), unk_0x695D13ECF7DAEC22(iParam0, 11));
	iVar3 = unk_0x769DFEDCD5A3DE41(iParam0, 4, unk_0xA86A4D206EC8EB16(iParam0, 4), unk_0x695D13ECF7DAEC22(iParam0, 4));
	if ((((!bVar0 == Global_70954 || !iParam1 == Global_70955) || !iVar1 == Global_70956) || !iVar2 == Global_70957) || !iVar3 == Global_70958)
	{
		Global_70954 = bVar0;
		Global_70955 = iParam1;
		Global_70956 = iVar1;
		Global_70957 = iVar2;
		Global_70958 = iVar3;
		Global_70959 = func_413(iParam0, iParam1);
	}
	return Global_70959;
}

int func_413(int iParam0, int iParam1)
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
	
	iVar0 = unk_0xA86A4D206EC8EB16(uParam0, 11);
	if (unk_0xA86A4D206EC8EB16(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6F79ECA8C83E4357(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 50;
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
	uVar4 = unk_0x769DFEDCD5A3DE41(iParam0, 8, unk_0xA86A4D206EC8EB16(iParam0, 8), unk_0x695D13ECF7DAEC22(iParam0, 8));
	if (unk_0xF062C4E30590463E(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		return func_418(iParam0, iParam1);
	}
	if (func_417(iParam0))
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
		iVar5 = unk_0x769DFEDCD5A3DE41(iParam0, 11, iVar0, unk_0x695D13ECF7DAEC22(iParam0, 11));
		if (unk_0xF062C4E30590463E(iVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("DRESS"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("HOODED_JACKET"), 0))
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
			else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_418(iParam0, iParam1) + 15;
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LUXE_COAT"), 0) && !unk_0xF062C4E30590463E(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_416(iVar5, 0);
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
						iVar0 = func_415(iVar5);
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
						iVar0 = func_415(iVar5);
						break;
					}
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xF062C4E30590463E(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_414(iVar5, 0);
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
					iVar0 = func_415(iVar5);
					break;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0xF062C4E30590463E(iVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0xF062C4E30590463E(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xF062C4E30590463E(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_418(iParam0, iParam1) + 15;
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0xF062C4E30590463E(iVar5, -1086258388, 0) || unk_0xF062C4E30590463E(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xF062C4E30590463E(iVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_418(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, -872449705, 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, 144417099, 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, -102825006, 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_21"), 0))
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
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0xF062C4E30590463E(iVar5, joaat("AIR_DRAW_0"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return func_418(iParam0, iParam1);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return func_418(iParam0, iParam1);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, 970679185, 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, 83294665, 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, 382246252, 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("IE_DRAW_5"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, joaat("ASSAULT_DRAW_0"), 0))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xF062C4E30590463E(iVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xF062C4E30590463E(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xF062C4E30590463E(iVar5, joaat("SILK_ROBE"), 0)) || unk_0xF062C4E30590463E(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_415(iVar5);
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

int func_414(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_415(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_416(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF062C4E30590463E(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xF062C4E30590463E(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_417(int iParam0)
{
	if (unk_0xF062C4E30590463E(unk_0x769DFEDCD5A3DE41(uParam0, 4, unk_0xA86A4D206EC8EB16(uParam0, 4), unk_0x695D13ECF7DAEC22(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_418(var uParam0, int iParam1)
{
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

void func_419(int iParam0, int iParam1)
{
	if (func_426())
	{
		if (iParam1 > 51)
		{
			unk_0xA768DBC86E5810C9(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else if (iParam1 > 46)
		{
			unk_0xA768DBC86E5810C9(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0xA768DBC86E5810C9(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0xA768DBC86E5810C9(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x2E3BFA5081B4C3D4(iParam0);
		}
	}
	else if (func_425())
	{
		if (iParam1 > 0)
		{
			unk_0xA768DBC86E5810C9(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x2E3BFA5081B4C3D4(iParam0);
		}
	}
}

int func_420(var uParam0)
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

int func_421(var uParam0, int iParam1)
{
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_424(iParam0, iParam1);
	uVar2 = func_423(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_423(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_424(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_425()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mppilot"));
}

bool func_426()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mplts"));
}

int func_427(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_193(iParam0);
}

void func_428()
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
	
	if ((((!func_7(unk_0xB5CEFD608600A09F()) && !func_151(unk_0xB5CEFD608600A09F())) && !func_301()) && !func_439(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_438(unk_0xB5CEFD608600A09F()))
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			bVar11 = func_5(Local_649.f_3);
			bVar12 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0);
			bVar13 = func_436();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_649.f_67[iVar4 /*2*/].f_1;
				if (unk_0x8EA6CABD14F1B89A(uVar14) && unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == unk_0x19D7F09C2FABDDA0(uVar14))
						{
							func_323(1);
						}
					}
					unk_0xF0059F27F7BB6680(&uVar5, iVar4);
					if (bVar11 && func_38(Local_649.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(uVar14), 1) };
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
			if (func_39(Local_649.f_3))
			{
				unk_0xF0059F27F7BB6680(&uVar5, 31);
			}
			Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_7 = uVar5;
			if (func_5(Local_649.f_3))
			{
				if ((unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()) || (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_649.f_3, iVar7, &Var0, &uVar3))
						{
							func_435(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_434(Var0, 1, 0);
							func_430(10, 0, 0, 0, 0);
							unk_0xF0059F27F7BB6680(&iLocal_340, 5);
						}
					}
				}
				else
				{
					func_429();
				}
			}
		}
	}
	else
	{
		func_429();
	}
}

void func_429()
{
	if (unk_0xFA30DFD0084E92FE(iLocal_340, 5))
	{
		func_159();
		func_157();
		unk_0x7CB6FD92BE491AD9(&iLocal_340, 5);
		func_156();
	}
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436641.f_1888.f_690.f_16 != func_93())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2423644[Global_2436641.f_1888.f_690.f_16 /*406*/].f_396, 0) && func_431())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412387 = 0;
	}
	Global_2405070.f_483 = iParam0;
	Global_2405070.f_483.f_1 = unk_0x8A55B15F4133C912();
	Global_2405070.f_483.f_2 = iParam1;
	Global_2405070.f_483.f_3 = iParam2;
	Global_2405070.f_483.f_4 = iParam3;
	Global_2405070.f_483.f_5 = iParam4;
}

int func_431()
{
	if (((func_208(unk_0xB5CEFD608600A09F()) == 229 || func_208(unk_0xB5CEFD608600A09F()) == 191) || func_433()) || func_432())
	{
		return 0;
	}
	return 1;
}

bool func_432()
{
	return Global_1574350;
}

int func_433()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_434(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { Param0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

void func_435(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x3C406FC829C1E14A(Global_2413628.f_6))
	{
		if (!Global_2413628.f_6 == unk_0x8A55B15F4133C912())
		{
			return;
		}
	}
	else
	{
		Global_2413628.f_6 = unk_0x8A55B15F4133C912();
	}
	Var0.f_6 = Global_2413628.f_6;
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
	if (func_367(unk_0xB5CEFD608600A09F()))
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
	Global_2413628 = { Var0 };
}

int func_436()
{
	if (((((func_437(unk_0xB5CEFD608600A09F()) || func_154()) || func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21)) || func_8(unk_0xB5CEFD608600A09F())) || func_7(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_1624079[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

int func_438(int iParam0)
{
	if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 11))
	{
		return 1;
	}
	return 0;
}

int func_439(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (Global_1589291[iParam0 /*770*/].f_273.f_21 > 0)
	{
		if (bParam1)
		{
			if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 0))
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
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_285(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_447(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_446(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_445(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_444(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_441(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_440(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_93())
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_441(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_442(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_93())
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_444(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_445(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_448(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_449(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_503())
	{
		if (bParam1)
		{
			iVar0 = unk_0x6BAA0516CC970D99();
			if (func_91(unk_0xB5CEFD608600A09F()))
			{
				uVar1 = func_309();
				iVar2 = unk_0x5363B43856FA7779(uVar1);
				if (unk_0x96B1061E8F3CBC9A(iVar2))
				{
					iVar3 = unk_0xDE780EBA36114734(iVar2);
					if (unk_0x05086B70D2CFEA6F(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_502())
				{
					switch (Local_649.f_3)
					{
						case 14:
							if (!func_352(iVar4) && !func_351(iVar4))
							{
								func_454("AMCH_BRIDGE", bParam0, iVar0, iVar4);
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
			if (((!bParam0 && unk_0x8EA6CABD14F1B89A(Local_649.f_67[iVar5 /*2*/].f_1)) && unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x1AAF0C23233C57AF(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(uLocal_622[iVar5]))
				{
					uLocal_622[iVar5] = unk_0x511FE22BCF5353CD(unk_0xD14280F674B4DBF4(Local_649.f_67[iVar5 /*2*/].f_1));
					unk_0xBF0E22F3E083C33D(uLocal_622[iVar5], func_453(iVar5));
					unk_0x12DB69036F6569F7(uLocal_622[iVar5], 9);
					unk_0x436D0272182E484D(uLocal_622[iVar5], func_452(iVar5));
					func_450(&(uLocal_622[iVar5]), 9);
				}
				else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					Var6 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_649.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x222805B89367761E(uLocal_622[iVar5], 1);
					}
					else
					{
						unk_0x222805B89367761E(uLocal_622[iVar5], 0);
					}
				}
			}
			else if (unk_0x2DA8CA50A72528FB(uLocal_622[iVar5]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_622[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_450(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		uVar0 = func_451(iParam1);
		unk_0x0D5352939CC40C16(*uParam0, uVar0);
	}
}

int func_451(int iParam0)
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
	unk_0xE45648BDBF3441F5(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_452(int iParam0)
{
	if (unk_0x8C1A6E7D5F410F4A(Local_649.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xA19D269B4B5A1532(Local_649.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x7512ED01F3F46714(Local_649.f_67[iParam0 /*2*/]) && !unk_0x89B9572166100905(Local_649.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_453(int iParam0)
{
	if (unk_0x8C1A6E7D5F410F4A(Local_649.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0xA19D269B4B5A1532(Local_649.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x7512ED01F3F46714(Local_649.f_67[iParam0 /*2*/]) && !unk_0x89B9572166100905(Local_649.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_454(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xFA30DFD0084E92FE(Local_2615[iParam2 /*12*/].f_8[func_343(iParam3)], func_342(iParam3)) && !bParam1)
	{
		Var0 = { func_501(iParam3) };
		if (!unk_0x2DA8CA50A72528FB(uLocal_556[iParam3]))
		{
			if (!func_500(Var0, 0f, 0f, 0f, 0) && !func_500(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_556[iParam3] = unk_0x390CF6C8AD6903B7(Var0);
				unk_0x12DB69036F6569F7(uLocal_556[iParam3], 9);
				unk_0x436D0272182E484D(uLocal_556[iParam3], sParam0);
				func_455(uLocal_556[iParam3], 25, 1152319488, 1137180672);
				func_450(&(uLocal_556[iParam3]), 12);
				unk_0x222805B89367761E(uLocal_556[iParam3], 1);
			}
		}
		else if (unk_0xE186ACC7BE9B244E())
		{
			unk_0x7781946F1FC054FA(uLocal_556[iParam3], 255);
		}
		else
		{
			func_455(uLocal_556[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(uLocal_556[iParam3]))
	{
		unk_0x07B8ECB35A4ED3AC(&(uLocal_556[iParam3]));
		if (!bParam1)
		{
			unk_0xC4BA30B532FE260F(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_455(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0x7781946F1FC054FA(uParam0, func_456(uParam0, iParam1, fParam2, fParam3));
}

int func_456(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_499(Global_2436641))
	{
		fVar0 = func_458(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_457();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_457()
{
	if (func_370(Global_2436641, 1))
	{
		return 50;
	}
	return 0;
}

float func_458(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2436641;
	Var2 = { unk_0x5DC00ADB7E2FD7C2(uParam0) };
	Var2.f_2 = 0f;
	if ((Global_1316795 || func_498()) || func_497())
	{
		if (func_496(iVar0))
		{
			Var5 = { func_461(iVar0) };
		}
		else if (func_460(iVar0))
		{
			Var5 = { func_459(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar0), 0) };
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

Vector3 func_459(int iParam0)
{
	var uVar0;
	
	if (func_460(iParam0))
	{
		uVar0 = unk_0xA95CF30C72EB526E(iParam0);
		if (unk_0x724D816EA203A79E(uVar0))
		{
			return unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_460(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0xA95CF30C72EB526E(iParam0);
			if (unk_0x724D816EA203A79E(uVar0))
			{
				if (unk_0x4DBCE270B354E123(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_461(int iParam0)
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
	
	if (iParam0 == func_93())
	{
	}
	if (func_495(iParam0))
	{
		iVar0 = func_494(iParam0);
		if (iVar0 != func_93())
		{
			if (!func_493(iVar0))
			{
				if (unk_0x724D816EA203A79E(Global_2436641.f_656[iVar0 /*3*/][1]))
				{
					return unk_0x541C2AEF053615BC(Global_2436641.f_656[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2423644[func_494(iParam0) /*406*/].f_305.f_5;
				}
			}
			else
			{
				iVar1 = func_489(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1667157.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_488(iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_2519572.f_294))
		{
			return unk_0x541C2AEF053615BC(Global_2519572.f_294, 0);
		}
	}
	else if (func_446(iParam0) && !func_487(iParam0))
	{
		iVar2 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar2 != func_93())
		{
			iVar3 = func_489(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1667157.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_444(iParam0) && !func_486(iParam0))
	{
		if (func_496(iParam0) && func_485())
		{
			return Global_1667157.f_42[Global_2423644[iParam0 /*406*/].f_305.f_1 /*3*/];
		}
		iVar4 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar4 != func_93())
		{
			if (func_484(iVar4))
			{
				iVar5 = func_480(iVar4);
				if (iVar5 != -1)
				{
					return Global_1667157.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_443(iParam0))
	{
		iVar6 = func_479(iParam0);
		if (iVar6 != func_93())
		{
			if (!func_478(iVar6))
			{
				if (unk_0x724D816EA203A79E(Global_2436641.f_753[iVar6]))
				{
					return unk_0x541C2AEF053615BC(Global_2436641.f_753[iVar6], 0);
				}
				else
				{
					return Global_2423644[func_479(iParam0) /*406*/].f_305.f_14;
				}
			}
			else
			{
				iVar7 = func_480(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1667157.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_477(iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_2519572.f_296))
		{
			return unk_0x541C2AEF053615BC(Global_2519572.f_296, 0);
		}
	}
	else if (func_442(iParam0) && !func_476(iParam0))
	{
		iVar8 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar8 != func_93())
		{
			if (func_475(iVar8))
			{
				iVar9 = func_471(iVar8);
				if (iVar9 != -1)
				{
					return func_470(iVar9);
				}
			}
		}
	}
	else if (func_441(iParam0) && !func_469(iParam0))
	{
		iVar10 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar10 != func_93())
		{
			if (func_468(iVar10))
			{
				iVar11 = func_464(iVar10);
				if (iVar11 != -1)
				{
					return Global_1667157.f_42[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_440(iParam0, 0))
	{
		iVar12 = func_463(iParam0);
		if (iVar12 != func_93())
		{
			if (!func_462(iVar12))
			{
				if (unk_0x724D816EA203A79E(Global_2436641.f_786[iVar12]))
				{
					return unk_0x541C2AEF053615BC(Global_2436641.f_786[iVar12], 0);
				}
				else
				{
					return Global_1624079[func_463(iParam0) /*558*/].f_549;
				}
			}
			else
			{
				iVar13 = func_464(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1667157.f_42[iVar13 /*3*/];
				}
			}
		}
	}
	if (func_442(iParam0))
	{
		return func_470(Global_2423644[iParam0 /*406*/].f_305.f_1);
	}
	return Global_1667157.f_42[Global_2423644[iParam0 /*406*/].f_305.f_1 /*3*/];
}

int func_462(int iParam0)
{
	if (iParam0 != func_93())
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305.f_21, 4);
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2423644[iParam0 /*406*/].f_305.f_4;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_93())
	{
		iVar0 = func_467(iParam0);
		if (iVar0 != 0)
		{
			return func_465(iVar0);
		}
	}
	return -1;
}

int func_465(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_286(iVar0) == 11)
		{
			if (func_466(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_466(int iParam0)
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

int func_467(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_266;
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (Global_1589291[iParam0 /*770*/].f_273.f_266 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_441(iParam0) && Global_2423644[iParam0 /*406*/].f_305.f_4 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_470(int iParam0)
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
	return Global_1667157.f_42[iParam0 /*3*/];
}

int func_471(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_93())
	{
		iVar0 = func_474(iParam0);
		if (iVar0 != 0)
		{
			return func_472(iVar0);
		}
	}
	return -1;
}

int func_472(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_286(iVar0) == 11)
		{
			if (func_473(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_473(int iParam0)
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

int func_474(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_307;
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_307 != 0;
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_442(iParam0) && Global_2423644[iParam0 /*406*/].f_305.f_4 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_478(int iParam0)
{
	if (iParam0 != func_93())
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305.f_10, 6);
	}
	return 0;
}

int func_479(int iParam0)
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2423644[iParam0 /*406*/].f_305.f_4;
}

int func_480(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_483(iParam0);
	if (!iVar0 == 0)
	{
		return func_481(iVar0);
	}
	return -1;
}

int func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_286(iVar0) == 9)
		{
			if (func_482(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_483(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_273.f_256;
}

int func_484(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_256 != 0;
	}
	return 0;
}

int func_485()
{
	if (unk_0xFA30DFD0084E92FE(Global_1667157.f_3292, 13) || Global_1667157.f_2161)
	{
		return 1;
	}
	return 0;
}

int func_486(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_444(iParam0) && Global_2423644[iParam0 /*406*/].f_305.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_446(iParam0) && Global_2423644[iParam0 /*406*/].f_305.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_489(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_492(iParam0);
	if (!iVar0 == 0)
	{
		return func_490(iVar0);
	}
	return -1;
}

int func_490(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_491(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_491(int iParam0)
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
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_273.f_168[5 /*12*/];
}

int func_493(int iParam0)
{
	if (iParam0 != func_93())
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305, 6);
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2423644[iParam0 /*406*/].f_305.f_4;
}

int func_495(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_93())
			{
				return func_286(Global_2423644[iParam0 /*406*/].f_305.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_496(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_12(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

bool func_497()
{
	return unk_0xFA30DFD0084E92FE(Global_1676972, 5);
}

bool func_498()
{
	return unk_0xFA30DFD0084E92FE(Global_1676971, 1);
}

int func_499(int iParam0)
{
	if ((unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_68.f_2, 9) && !(unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_68.f_2, 6) && unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_68.f_2, 7))) || ((unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_68.f_2, 6) && !unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_68.f_2, 7)) && !unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_500(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_501(int iParam0)
{
	switch (Local_649.f_3)
	{
		case 14:
			return Local_360[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_502()
{
	switch (Local_649.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_503()
{
	switch (Local_649.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_504()
{
	switch (Local_649.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_505(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_300(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_205(sParam1))
	{
		sVar0 = sParam1;
	}
	func_132(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_506(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x1377080E9B0BD993();
	return "HUD_STARTING";
	if (unk_0x3362CDE8460ED38B(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_challenges"))
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
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x3362CDE8460ED38B(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_507(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_508(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x11F9F9006143871A())
	{
		Global_2519572.f_4719 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 1))
		{
			unk_0xC4BA30B532FE260F(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2519572.f_4719 = 0;
			unk_0xF0059F27F7BB6680(&(Global_2519572.f_4719), 1);
		}
	}
}

int func_509(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0);
		}
		else
		{
			return unk_0xCCA9497DA4595710(unk_0x1C44CABA911F93F7(), *uParam0);
		}
	}
	return unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0);
}

void func_510(int iParam0)
{
	if (!unk_0x7382A6B79BD5F585() && !unk_0x17FAADF9916EF741())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C())
					{
						if (func_5(Local_649.f_3))
						{
							if (Local_649.f_3 == 12)
							{
								func_282("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_282("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_649.f_3))
						{
							func_282("AMCH_BIKEAV", 30000);
						}
						func_281(1);
						unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E())
					{
						func_282("AMCH_BLOW", 30000);
						func_281(1);
						unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !func_515(63))
					{
						switch (Local_649.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
									{
										func_282("AMCH_ALTI", 30000);
										func_281(1);
										unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_NMIS", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_FRFALL", -1);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_PVPO1", -1);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_PVPO2", -1);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_WHEELIE", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_STOPPIE", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_LFALL", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_LPARA", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
					{
						switch (Local_649.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
									{
										if (func_1(&uLocal_334, 1000, 0))
										{
											func_282("AMCH_OCEAN", 30000);
											func_281(1);
											func_44(&uLocal_334);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !func_515(63))
					{
						switch (Local_649.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
									{
										if (func_499(unk_0xB5CEFD608600A09F()) && !func_512(unk_0xB5CEFD608600A09F()))
										{
											func_282("AMCH_ALTIEXP", 30000);
											func_281(1);
											unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
					{
						if (func_1(&uLocal_334, 1000, 0))
						{
							func_282("AMCH_FLYLOW", 30000);
							func_281(1);
							func_44(&uLocal_334);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if (Local_649.f_3 == 7)
					{
						if (iLocal_634 == 0)
						{
							if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
							{
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_MVS1", 30000);
									func_281(1);
									iLocal_634 = 1;
								}
							}
						}
						else if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
						{
							if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
							{
								func_282("AMCH_MVS2", 30000);
								func_281(1);
								unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
							}
						}
					}
					if (Local_649.f_3 == 14)
					{
						if (iLocal_634 == 0)
						{
							if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
							{
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_BRBL", 30000);
									func_281(1);
									iLocal_634 = 1;
								}
							}
						}
						else if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
						{
							if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
							{
								func_282("AMCH_BRBL2", 30000);
								func_281(1);
								unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xFA30DFD0084E92FE(iLocal_633, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C())
					{
						func_511("AMCH_WARN", func_375(Local_649.f_3), func_374(Local_649.f_3), 30000);
						func_281(0);
						Local_3000.f_8 = unk_0xB99C193A32DE341D();
						unk_0xC4BA30B532FE260F(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xF0059F27F7BB6680(&iLocal_633, iParam0);
					}
				}
				break;
			}
	}
}

void func_511(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam3);
}

bool func_512(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_241.f_136[func_514(9) /*33*/][iParam0], func_513(9));
}

int func_513(int iParam0)
{
	return (iParam0 % 32);
}

int func_514(int iParam0)
{
	return (iParam0 / 32);
}

bool func_515(int iParam0)
{
	return Global_2436641.f_2703[0 /*80*/].f_1 == iParam0;
}

void func_516(int iParam0)
{
	Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_3 = iParam0;
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 4);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 4);
	}
}

int func_518(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_540(unk_0xB5CEFD608600A09F(), 29))
	{
		return 0;
	}
	if (func_152(unk_0xB5CEFD608600A09F(), 21))
	{
		return 0;
	}
	if (unk_0x2F7EEEA6378AC19B())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xD92FE7FDA11C7334())
		{
			return 0;
		}
	}
	if (func_332(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_538(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (func_537())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_95(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	else if (func_530(unk_0xB5CEFD608600A09F()) == 3)
	{
		return 0;
	}
	if (func_529(unk_0xB5CEFD608600A09F()) != func_93() && func_529(unk_0xB5CEFD608600A09F()) == func_80(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_528(func_276()) && func_307(unk_0xB5CEFD608600A09F()) != 236)
	{
		return 0;
	}
	if (func_527())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (unk_0x517823CA390A19F6())
	{
		return 0;
	}
	if (func_334(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!func_525())
	{
		return 0;
	}
	if (func_152(unk_0xB5CEFD608600A09F(), 0) || func_152(unk_0xB5CEFD608600A09F(), 3))
	{
		return 0;
	}
	if ((func_152(unk_0xB5CEFD608600A09F(), 12) || func_152(unk_0xB5CEFD608600A09F(), 14)) || func_152(unk_0xB5CEFD608600A09F(), 13))
	{
		return 0;
	}
	if (func_439(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_495(unk_0xB5CEFD608600A09F()))
	{
		if (!func_497() && !Global_2499093)
		{
			return 0;
		}
	}
	if (func_524(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_523())
	{
		return 0;
	}
	if (Global_1653121)
	{
		return 0;
	}
	if (func_368(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_522())
	{
		return 0;
	}
	if (func_520(unk_0xB5CEFD608600A09F()) && Global_1588940.f_171)
	{
		return 0;
	}
	if (func_519())
	{
		return 0;
	}
	return 1;
}

bool func_519()
{
	return Global_1667157.f_28;
}

int func_520(int iParam0)
{
	if (func_521(Global_1589291[iParam0 /*770*/].f_273.f_21))
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0)
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

int func_522()
{
	if (Global_4253672.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_523()
{
	return Global_93007.f_322 > 0;
}

bool func_524(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 11);
}

int func_525()
{
	if (func_526() == 0)
	{
		return 1;
	}
	return 0;
}

int func_526()
{
	return Global_1312466.f_18;
}

bool func_527()
{
	return Global_1312854;
}

int func_528(int iParam0)
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

int func_529(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_35;
}

int func_530(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_369(iParam0) && !func_8(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 8));
	bVar2 = func_95(iParam0);
	uVar3 = func_154();
	uVar4 = func_531();
	if ((bVar1 && (func_437(iParam0) || func_394(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_97(iParam0)) && !func_287(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2519572.f_4882.f_208 != iVar0)
	{
		Global_2519572.f_4882.f_208 = iVar0;
	}
	return iVar0;
}

int func_531()
{
	if ((func_96(unk_0xB5CEFD608600A09F(), 21) || func_96(unk_0xB5CEFD608600A09F(), 22)) || func_535())
	{
		return 1;
	}
	if (func_533())
	{
		func_532(22);
		return 1;
	}
	return 0;
}

void func_532(int iParam0)
{
	unk_0xF0059F27F7BB6680(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_4), iParam0);
}

int func_533()
{
	if (func_101(unk_0xB5CEFD608600A09F(), 0))
	{
		if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		else
		{
			func_534(27);
		}
	}
	return 0;
}

void func_534(int iParam0)
{
	unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_4), iParam0);
}

int func_535()
{
	return func_536(306, -1);
}

int func_536(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2557346[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_537()
{
	return Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] == 5;
}

int func_538(int iParam0)
{
	if (Global_2423644[iParam0 /*406*/].f_257.f_4 != 0 || Global_2423644[iParam0 /*406*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_539()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 0);
}

bool func_540(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_11.f_5, iParam1);
}

void func_541()
{
	func_542(&(Local_737.f_533), &Local_737, 26, &(Local_737.f_1), &(Local_737.f_116), Local_649.f_3, 0, 0);
}

void func_542(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_650(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_648() || iParam2 == 27)
	{
		if (func_605(uParam1, iParam2, uParam3, Global_1574165, 0, func_651(), iParam7))
		{
			func_604(1);
			if ((!func_603() && !func_602()) || unk_0xFA30DFD0084E92FE(Global_2519572.f_4573, 1))
			{
				if (func_601())
				{
					func_600();
				}
				else
				{
					unk_0xC2EAD30963BDAA47(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_599(1);
						Global_1574165 = 0;
						iVar54 = -1;
						if (Global_1574351 != 1)
						{
							func_598(uParam1, 0, 0);
							if (unk_0xFA30DFD0084E92FE(uParam3->f_33, 7))
							{
								unk_0x7CB6FD92BE491AD9(&(uParam3->f_33), 7);
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
								if (func_12(unk_0x3171C34AB3FE6F2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x3171C34AB3FE6F2E(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_597(iVar35) || Global_2423644[iVar35 /*406*/].f_232 != -1) || func_596(iVar35))
										{
											iVar44 = iVar35;
											if (func_82(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_593(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_98(unk_0xB5CEFD608600A09F(), 0) && func_208(unk_0xB5CEFD608600A09F()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_592())
							{
								if (func_12(unk_0x3171C34AB3FE6F2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x3171C34AB3FE6F2E(iVar52);
								}
								else
								{
									iVar35 = func_93();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_591(iVar35) && func_588(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589291[iVar44 /*770*/].f_211.f_6;
								Var38 = { func_583(iVar35) };
								if (iVar35 == unk_0xB5CEFD608600A09F())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xD885B2234FC72D62(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_126(iVar35) };
								iVar37 = func_577(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xF392EEDDF2FB749A(iVar37);
								}
								Global_1574165++;
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
									if (!func_592())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_575(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_270(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_574(iVar35, 0);
								if (bVar34)
								{
									if (func_81(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_573(iParam5))
								{
									func_572(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_572(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xF0059F27F7BB6680(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x3171C34AB3FE6F2E(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xFA30DFD0084E92FE(iVar49, iVar35))
							{
								iVar35 = unk_0x3171C34AB3FE6F2E(iVar52);
							}
							else
							{
								iVar35 = func_93();
							}
							if (func_591(iVar35))
							{
								if (func_12(unk_0x3171C34AB3FE6F2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589291[iVar44 /*770*/].f_211.f_6;
									Var38 = { func_583(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_126(iVar35) };
									iVar37 = func_577(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xF392EEDDF2FB749A(iVar37);
									}
									Global_1574165++;
									iVar51 = func_574(iVar35, 1);
									if (bVar34)
									{
										if (func_81(iVar35, 1))
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
									func_555(iVar35, unk_0xD885B2234FC72D62(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xFA30DFD0084E92FE(uParam3->f_33, 11))
						{
							func_552(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_551();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_33, 7))
						{
							func_550(uParam3, uParam1);
							func_549(uParam1, 0, 1);
							unk_0xF0059F27F7BB6680(&(uParam3->f_33), 7);
						}
						func_550(uParam3, uParam1);
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_33, 11))
						{
							unk_0xF0059F27F7BB6680(&(uParam3->f_33), 11);
						}
						if (func_545(uParam3))
						{
							Global_1574351 = 1;
						}
						func_543(uParam3);
						if (Global_1574351 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574351 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA7F138B5B1AB2CF6(*uParam1))
					{
						unk_0x996AC9A66B2A5A3F(7);
						unk_0x65E432C782E7E702(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x996AC9A66B2A5A3F(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_551();
			func_599(0);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_33, 7))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_33), 7);
			}
			if (unk_0xFA30DFD0084E92FE(uParam3->f_33, 10))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x2A025E7CEBB76D14();
}

void func_543(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_544(0);
	}
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574351 != 2)
		{
			Global_1574351 = 2;
		}
	}
	else
	{
		switch (Global_1574351)
		{
			case 0:
				Global_1574351 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_545(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x3171C34AB3FE6F2E(uParam0->f_37);
	if (iVar15 != func_93() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_126(iVar15) };
		iVar1 = func_548(uParam0, uParam0->f_37);
		if (func_547(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar16 = 1;
							func_546(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE838A0680E73021(&Var2))
					{
						iVar16 = 1;
						func_546(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar16 = 1;
							func_546(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_546(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xCE838A0680E73021(&Var2))
						{
							iVar16 = 1;
							func_546(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE838A0680E73021(&Var2))
					{
						iVar16 = 1;
						func_546(uParam0, iVar0, 0);
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

void func_546(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_547(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

var func_548(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x29CD142125FE177B(*uParam0, "COLLAPSE"))
	{
		unk_0x5E5DBD0A6623969E(iParam1);
		unk_0xF9FBC2F3F73D94C9();
	}
	if (iParam2 == 1)
	{
		if (unk_0x29CD142125FE177B(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_550(var uParam0, var uParam1)
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_33, 10))
	{
		unk_0x29CD142125FE177B(*uParam1, "SET_HIGHLIGHT");
		unk_0x1E1FB49121565EB6(uParam0->f_35);
		unk_0xF9FBC2F3F73D94C9();
		unk_0xF0059F27F7BB6680(&(uParam0->f_33), 10);
	}
}

void func_551()
{
	if (Global_1574351 != 0)
	{
		Global_1574351 = 0;
	}
}

void func_552(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar2 != func_93())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_554(uParam0->f_38[iVar0 /*2*/], 0);
					func_553(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589291[iVar0 /*770*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_553(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		if (unk_0x29CD142125FE177B(*uParam0, "SET_ICON"))
		{
			unk_0x1E1FB49121565EB6(iParam1);
			unk_0x1E1FB49121565EB6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1E1FB49121565EB6(iParam3);
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

int func_554(int iParam0, bool bParam1)
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

void func_555(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_571() && iParam4 < func_570())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574167)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574351 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x29CD142125FE177B(*uParam2, sVar1))
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_569("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(iParam10);
			}
			func_569(sParam1);
			unk_0x1E1FB49121565EB6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_569("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(65);
			}
			unk_0x1E1FB49121565EB6(-1);
			func_569("");
			if (uParam3->f_108 == 6)
			{
				func_569("");
			}
			else
			{
				func_569(&sParam5);
			}
			func_560(uParam3, iParam0);
			unk_0x6A664E53A192232C(sParam9);
			unk_0x6A664E53A192232C(sParam9);
			if (func_559(uParam3))
			{
				func_558("DPAD_FRIEND");
			}
			else if (func_557(uParam3))
			{
				func_558("DPAD_FRIEND");
			}
			else if (func_556(uParam3))
			{
				func_558("DPAD_CREW");
			}
			else
			{
				func_558("");
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

bool func_556(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_33, 6);
}

bool func_557(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_33, 5);
}

void func_558(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_559(var uParam0)
{
	if (func_557(uParam0) && func_556(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_560(var uParam0, int iParam1)
{
	if (func_568(iParam1))
	{
		unk_0x1E1FB49121565EB6(121);
	}
	else if (func_564(iParam1))
	{
		unk_0x1E1FB49121565EB6(122);
	}
	else if (((unk_0xFA30DFD0084E92FE(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xFA30DFD0084E92FE(Global_2423644[iParam1 /*406*/].f_405, 0))
	{
		unk_0x1E1FB49121565EB6(123);
	}
	else
	{
		if (func_561())
		{
			uParam0->f_36 = 0;
		}
		unk_0x5E5DBD0A6623969E(uParam0->f_36);
	}
}

int func_561()
{
	if (unk_0x517823CA390A19F6())
	{
		if (func_562() || func_85())
		{
			return 1;
		}
	}
	return 0;
}

int func_562()
{
	if (unk_0x517823CA390A19F6())
	{
		return func_85();
	}
	return func_563(Global_4456448.f_126776);
}

int func_563(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_564(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_565()) && func_244(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_565()
{
	if (func_369(unk_0xB5CEFD608600A09F()) || func_567())
	{
		if (!func_566(unk_0xB5CEFD608600A09F(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_566(int iParam0, int iParam1)
{
	if (func_307(iParam0) == iParam1)
	{
		return func_437(iParam0);
	}
	return 0;
}

int func_567()
{
	switch (func_208(unk_0xB5CEFD608600A09F()))
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

int func_568(int iParam0)
{
	if (func_561())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_565()) && func_246(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_569(char* sParam0)
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_570()
{
	int iVar0;
	
	if (Global_1574167)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_571()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574167)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_572(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_571() && iParam3 < func_570())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574167)
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
		if (Global_1574351 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA7F138B5B1AB2CF6(*uParam1))
		{
			if (unk_0x29CD142125FE177B(*uParam1, sVar1))
			{
				unk_0x1E1FB49121565EB6(iParam3);
				if (unk_0xFA30DFD0084E92FE(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_569("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					func_558(sParam16);
				}
				else
				{
					func_569(&(uParam2->f_1));
				}
				unk_0x1E1FB49121565EB6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_569("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1E1FB49121565EB6(iVar0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(-1);
				}
				if (func_592())
				{
					func_569("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_108 == 5 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_108 == 7 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_TWO_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_108 == 8 && !unk_0xF1734B55490E9045(&(uParam2->f_104)))
				{
					unk_0x57016C44F10111F0("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x3AE7CB4034BE212F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xAA5C5BF0489E5553(iParam10);
					}
					unk_0xC9C304D0AABE1335(&(uParam2->f_104));
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x57016C44F10111F0("FM_AE_CASH");
					unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x57016C44F10111F0("FM_AE_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
					else
					{
						unk_0x57016C44F10111F0("FM_NG_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xF1734B55490E9045(&(uParam2->f_104)))
					{
						func_558(&(uParam2->f_104));
					}
					else
					{
						func_569("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam14, 6);
					unk_0x64989E60CF560CA1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x57016C44F10111F0("NUMBER");
					unk_0x3AE7CB4034BE212F(fParam13, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (iParam10 != -1)
				{
					unk_0x1E1FB49121565EB6(iParam10);
				}
				else
				{
					func_569("");
				}
				if (uParam2->f_108 == 6)
				{
					func_569("");
				}
				else
				{
					func_569(&sParam4);
				}
				func_560(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xF1734B55490E9045(sParam8))
				{
					func_569("");
					func_569("");
				}
				else
				{
					unk_0x6A664E53A192232C(sParam8);
					unk_0x6A664E53A192232C(sParam8);
				}
				if (func_559(uParam2))
				{
					func_558("DPAD_FRIEND");
				}
				else if (func_557(uParam2))
				{
					func_558("DPAD_FRIEND");
				}
				else if (func_556(uParam2))
				{
					func_558("DPAD_CREW");
				}
				else
				{
					func_558("");
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_573(int iParam0)
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

int func_574(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_369(iParam0)) && !func_95(iParam0))
	{
		iVar0 = func_63();
	}
	iVar1 = func_79(iParam0);
	if (!iVar1 == -1)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

int func_575(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_576(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_573(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_576(int iParam0)
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

int func_577(int iParam0)
{
	int iVar0;
	
	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		func_578(iParam0, 1);
		return 0;
	}
	Global_1374725[iVar0 /*5*/].f_4 = 1;
	return Global_1374725[iVar0 /*5*/].f_2;
}

void func_578(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_580(iParam0) != -1)
	{
		return;
	}
	if (Global_1374888)
	{
		if (iParam0 == Global_1374888.f_1)
		{
			return;
		}
	}
	if (func_579(iParam0))
	{
		return;
	}
	if (Global_1374926 >= 32)
	{
		return;
	}
	Global_1374893[Global_1374926] = iParam0;
	Global_1374926++;
	if (bParam1)
	{
	}
}

int func_579(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1374926)
	{
		if (Global_1374893[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_580(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1374886 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1374886)
	{
		if (Global_1374725[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x516A8073F5BF5F0A(Global_1374725[iVar0 /*5*/].f_2) && unk_0xEB606E770B747B2C(Global_1374725[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_581(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_581(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1374886)
	{
		return;
	}
	if (unk_0x516A8073F5BF5F0A(Global_1374725[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1374725[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xF392EEDDF2FB749A(Global_1374725[iParam0 /*5*/].f_2), 64);
			unk_0x8F5E9D20607FC4FF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x469C2D90A617CB9A(Global_1374725[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1374886)
	{
		Global_1374725[iVar32 /*5*/] = { Global_1374725[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_582(&(Global_1374725[iVar32 /*5*/]));
	Global_1374886 = (Global_1374886 - 1);
}

void func_582(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_93();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

struct<4> func_583(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2498829 = { func_126(iParam0) };
		if (unk_0xF49912B78E2591B6())
		{
			if (func_547(Global_2498829))
			{
				if (!unk_0x43AECC0539840131(&Global_2498829))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x5553DFDA03631860(0))
		{
			return Var0;
		}
		if (func_587(&Global_2498829))
		{
			Global_2498759 = { func_585(iParam0) };
			func_584(&Global_2498759, &Var0);
		}
	}
	return Var0;
}

void func_584(var uParam0, var uParam1)
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, uParam1);
}

struct<35> func_585(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_586(iParam0))
	{
		return Global_1312886[unk_0xB5CEFD608600A09F() /*35*/];
	}
	Var0 = { func_126(iParam0) };
	unk_0x24723877416AAAFC(&Var13, 35, &Var0);
	return Var13;
}

int func_586(int iParam0)
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return 1;
	}
	return 0;
}

int func_587(var uParam0)
{
	if (unk_0x97EF4023B86C354F())
	{
		if (unk_0xB9ACC1154C623363() && unk_0xD7F4457CECF10121(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_588(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_590(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_589(iParam0))
	{
		return 0;
	}
	if ((!func_597(iParam0) && Global_2423644[iParam0 /*406*/].f_232 == -1) && !func_596(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_142, 22);
}

int func_590(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 10) || unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_591(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_93())
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
		if (unk_0xFA30DFD0084E92FE(Global_1589291[iVar0 /*770*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_592()
{
	switch (func_208(unk_0xB5CEFD608600A09F()))
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
	switch (func_307(unk_0xB5CEFD608600A09F()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_95(unk_0xB5CEFD608600A09F()))
	{
		switch (func_208(unk_0xB5CEFD608600A09F()))
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
	if (func_566(unk_0xB5CEFD608600A09F(), 236))
	{
		return 1;
	}
	return 0;
}

void func_593(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_597(iVar1) || Global_2423644[iVar1 /*406*/].f_232 != -1) || func_596(iVar1))
				{
					if (func_594(iVar1, iParam1, 0))
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

int func_594(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_93())
	{
		if (!bParam2)
		{
			if (func_595(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1624079[iParam0 /*558*/].f_11 != func_93())
		{
			return iParam1 == Global_1624079[iParam0 /*558*/].f_11;
		}
	}
	return 0;
}

int func_595(int iParam0, int iParam1)
{
	if (iParam1 != func_93())
	{
		if (iParam0 != func_93())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 != func_93())
			{
				if (Global_1624079[iParam0 /*558*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_596(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_196 != 0;
}

int func_597(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (unk_0x75206900382D1E30(iParam0, unk_0xB5CEFD608600A09F()) || func_208(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_598(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_599(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1363070.f_2 == 0)
		{
			Global_1363070.f_2 = 1;
		}
	}
	else if (Global_1363070.f_2 == 1)
	{
		Global_1363070.f_2 = 0;
	}
}

void func_600()
{
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4573, 1))
	{
		if (func_288())
		{
			func_275();
		}
	}
}

int func_601()
{
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4573, 0) && func_288())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4573, 1) && func_288())
	{
		return 1;
	}
	return 0;
}

int func_602()
{
	if (func_288())
	{
		if (func_52(Global_2436641.f_2703[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_603()
{
	if (func_288())
	{
		if (func_64(Global_2436641.f_2703[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_604(int iParam0)
{
	if (Global_1363070.f_1 != Global_1363070)
	{
		Global_1363070.f_1 = Global_1363070;
	}
	if (Global_1363070 != iParam0)
	{
		Global_1363070 = iParam0;
	}
}

int func_605(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_647(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_646();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_645())
		{
			if (func_644() > 0 && Global_1574167)
			{
				unk_0xE9DBADA362313538();
				unk_0xE7918A3D05166D98(fVar7);
				unk_0x4E0EC60D119222B1(18);
				if (unk_0xF16DAFF595E80F7C())
				{
					unk_0x39CC55A2108C1AB0();
				}
				unk_0x4E0EC60D119222B1(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_635())
		{
			func_634(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
	{
		func_634(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_644() == 1)
		{
			func_633(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_634(uParam0, uParam2, 0);
			unk_0xF0059F27F7BB6680(&(Global_2519572.f_4577), 5);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x39CC55A2108C1AB0();
		}
		unk_0x4E0EC60D119222B1(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_644() == 0 && !bParam5))
		{
			func_634(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_632();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0xE9DBADA362313538();
				}
				unk_0x4E0EC60D119222B1(18);
			}
			if (!unk_0xFA30DFD0084E92FE(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_632();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xE9DBADA362313538();
					}
					unk_0x4E0EC60D119222B1(18);
				}
				unk_0xE7918A3D05166D98(fVar7);
				if (func_633(bVar6, uParam0, 0))
				{
					func_598(uParam0, 0, 0);
					uVar4 = func_630(iParam1, &(Global_4456448.f_126783), bParam4);
					Var0 = { func_628(iParam1) };
					if (bParam4)
					{
						func_625(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_619(uParam0, func_622(uParam2), func_620(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_613(uParam2);
						if (!unk_0xF1734B55490E9045(uParam6))
						{
							sVar8 = sParam6;
						}
						func_611(uParam0, sVar8, func_612(), -1);
					}
					else if (func_561())
					{
						uParam2->f_34 = Global_1574166;
						func_625(uParam0, uVar4, &Var0, 1, -1, Global_1574166, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574166;
						func_625(uParam0, uVar4, "", 0, -1, Global_1574166, 1);
					}
					else
					{
						iVar9 = func_606(iParam1);
						func_625(uParam0, uVar4, &Var0, 1, iVar9, -1, 1);
					}
					unk_0xF0059F27F7BB6680(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xFA30DFD0084E92FE(uParam2->f_33, 0))
			{
				Global_1574165 = uParam3;
				Global_1574164 = 1;
				unk_0xE7918A3D05166D98(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574166)
					{
						unk_0x7CB6FD92BE491AD9(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_606(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_610())
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
			if (func_609(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 20;
			}
			if (func_608(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_607(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 2;
	}
	if (func_209())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_607(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 4;
}

bool func_608(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

bool func_609(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_610()
{
	return Global_4456448.f_1 == 0;
}

void func_611(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_558(sParam1);
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_558("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_612()
{
	switch (func_208(unk_0xB5CEFD608600A09F()))
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

char* func_613(var uParam0)
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
	switch (func_208(unk_0xB5CEFD608600A09F()))
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
			if (func_615())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_243(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_243(1))
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
			if (func_614(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_614(int iParam0)
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

bool func_615()
{
	return (func_618() && func_616(func_617()));
}

int func_616(int iParam0)
{
	return func_246(iParam0, 1);
}

int func_617()
{
	return Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_35;
}

bool func_618()
{
	return Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] == 148;
}

void func_619(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(uParam2))
		{
			func_558(uParam1);
		}
		else if (func_307(unk_0xB5CEFD608600A09F()) == 133)
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT_C");
			unk_0xC9C304D0AABE1335(uParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_558("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_620(var uParam0)
{
	int iVar0;
	
	iVar0 = func_307(unk_0xB5CEFD608600A09F());
	if (func_621())
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
			switch (func_306())
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

bool func_621()
{
	return Global_1589164;
}

char* func_622(var uParam0)
{
	int iVar0;
	
	iVar0 = func_307(unk_0xB5CEFD608600A09F());
	if (func_621())
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
			if (func_624() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_624() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_306())
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
			if (func_623() == 1)
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

int func_623()
{
	return Global_2519572.f_4806;
}

int func_624()
{
	if (func_307(unk_0xB5CEFD608600A09F()) == 132)
	{
		return Global_2519572.f_4801;
	}
	return -1;
}

void func_625(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_569(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x57016C44F10111F0(uParam1);
			unk_0xAA5C5BF0489E5553(iParam5);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_558(sParam1);
		}
		if (func_645() && iParam6)
		{
			if (func_627())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x57016C44F10111F0("LBD_DPD_CNT");
			unk_0xAA5C5BF0489E5553(iVar0);
			unk_0xAA5C5BF0489E5553(iVar1);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_558(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (func_626(unk_0xB5CEFD608600A09F()))
			{
				unk_0x1E1FB49121565EB6(166);
			}
			else if (func_61())
			{
				unk_0x1E1FB49121565EB6(220);
			}
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_626(int iParam0)
{
	if (func_609(iParam0) || func_608(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_627()
{
	return Global_1574167;
}

struct<4> func_628(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_629(unk_0xB5CEFD608600A09F()) || func_607(unk_0xB5CEFD608600A09F()))
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
			StringIntConCat(&Var0, Global_4456448.f_34, 16);
			break;
	}
	if (func_561() && unk_0x517823CA390A19F6())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_34, 16);
	}
	return Var0;
}

bool func_629(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 5;
}

char* func_630(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_561() || unk_0xF1734B55490E9045(uParam1)))
	{
		uVar0 = func_631();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574369 == 0)
		{
			Global_1574369 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xF1734B55490E9045(sParam1))
	{
		if (Global_1574369 == 1)
		{
			Global_1574369 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574369 == 0)
		{
			Global_1574369 = 1;
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

char* func_631()
{
	if (unk_0xB3132AD292C8DA36())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x2C748E7CAA8D1D06())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9115F2BCE1FD06B6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x5CE1D384CAEEB356())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_632()
{
	Global_36813 = 1;
}

bool func_633(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return unk_0xA7F138B5B1AB2CF6(*uParam1);
}

void func_634(var uParam0, var uParam1, bool bParam2)
{
	unk_0x7CB6FD92BE491AD9(&(uParam1->f_33), 7);
	Global_1574165 = 0;
	func_551();
	Global_1574164 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
			unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4577), 5);
		}
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		unk_0xB0B0FE33F4F22679(uParam0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam1->f_33, 0))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam1->f_33), 0);
	}
	unk_0xE7918A3D05166D98(0f);
}

int func_635()
{
	if (func_643())
	{
		return 0;
	}
	if (func_537())
	{
		return 0;
	}
	if (!func_641())
	{
		return 0;
	}
	if (!func_525())
	{
		return 0;
	}
	if (func_640(8, -1))
	{
		return 0;
	}
	if (func_644() == 2)
	{
		return 0;
	}
	if (Global_2519572.f_4529)
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	else if (!func_333(unk_0xB5CEFD608600A09F(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_639(1) || func_637(1)) || Global_17206.f_124) || Global_17206)
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (func_91(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_1653121)
	{
		return 0;
	}
	if (Global_1653125)
	{
		return 0;
	}
	if (func_636(0))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 4))
	{
		return 0;
	}
	if (Global_1356262)
	{
		return 0;
	}
	if ((Global_1677950.f_705.f_5 || Global_1680761.f_705.f_5) || Global_1676993.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_636(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_2519572.f_4882.f_37, iParam0);
}

int func_637(bool bParam0)
{
	if (unk_0x546584EE3E61A6C6())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_638(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x8FCEEB789599BD9B(0, 25) || unk_0x8FCEEB789599BD9B(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17206.f_130)
	{
		return 0;
	}
	if (unk_0x8FCEEB789599BD9B(0, 19) || (!bParam0 && unk_0xD3C4A010282C31F2(0, 19)))
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (((unk_0x8FCEEB789599BD9B(0, 166) || unk_0x8FCEEB789599BD9B(0, 167)) || unk_0x8FCEEB789599BD9B(0, 168)) || unk_0x8FCEEB789599BD9B(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD3C4A010282C31F2(0, 166) || unk_0xD3C4A010282C31F2(0, 167)) || unk_0xD3C4A010282C31F2(0, 168)) || unk_0xD3C4A010282C31F2(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_638(int iParam0)
{
	int iVar0;
	
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0))
		{
			unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_639(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17206.f_4 && Global_17206.f_104 == 4);
	}
	return Global_17206.f_4;
}

bool func_640(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

int func_641()
{
	if (func_642())
	{
		return 1;
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC())
	{
		return 0;
	}
	if (unk_0xF6023EB13558345B())
	{
		return 0;
	}
	return 1;
}

bool func_642()
{
	return Global_1312438;
}

bool func_643()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

int func_644()
{
	return Global_1363073.f_68;
}

int func_645()
{
	if (Global_1574166 > 16)
	{
		return 1;
	}
	return 0;
}

float func_646()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFAD6B644971DD747()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_647(int iParam0)
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

int func_648()
{
	if (func_651())
	{
		return 1;
	}
	if (func_7(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_369(unk_0xB5CEFD608600A09F()))
	{
		switch (func_307(unk_0xB5CEFD608600A09F()))
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
				if (!func_649(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_649(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_649(unk_0xB5CEFD608600A09F()))
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

bool func_649(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 4);
}

int func_650(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_369(unk_0xB5CEFD608600A09F()) && !func_95(unk_0xB5CEFD608600A09F())) && !func_566(unk_0xB5CEFD608600A09F(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_101(unk_0xB5CEFD608600A09F(), 0) && func_95(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
		if (func_530(unk_0xB5CEFD608600A09F()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_651()
{
	if (func_652(unk_0xB5CEFD608600A09F()))
	{
		return Global_1316736;
	}
	return 0;
}

int func_652(int iParam0)
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xE502970386494D01(iParam0);
		}
	}
	return 0;
}

void func_653()
{
	if (Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_3 == 3)
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_340, 8))
		{
			if ((!func_7(unk_0xB5CEFD608600A09F()) && !func_151(unk_0xB5CEFD608600A09F())) && !func_381(unk_0xB5CEFD608600A09F()))
			{
				func_380();
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(iLocal_340, 9))
		{
			if ((func_7(unk_0xB5CEFD608600A09F()) || func_151(unk_0xB5CEFD608600A09F())) || func_381(unk_0xB5CEFD608600A09F()))
			{
				unk_0x992E057EBDE4A46F();
				Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4 = 0;
				unk_0xF0059F27F7BB6680(&iLocal_340, 9);
			}
		}
	}
}

void func_654()
{
	int iVar0;
	
	if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_344)))
	{
		iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_344));
		if (unk_0x96B1061E8F3CBC9A(iVar0))
		{
			func_655(iVar0, 2);
		}
	}
	iLocal_344++;
	if (iLocal_344 >= unk_0x81C86888AEA2F49B())
	{
		iLocal_344 = 0;
	}
}

void func_655(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1574452.f_18)))
	{
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1574452.f_2, iParam0))
	{
		if (Global_1574452 < iParam1 && unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 1))
		{
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 0);
			return;
		}
		if (Global_1574452 != 0)
		{
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 1);
		}
		Global_1574452 = 0;
		Global_1574452.f_2 = 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_1574452.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_656(iParam0))
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
		Global_1574452++;
	}
}

bool func_656(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_1, 10);
}

void func_657(int iParam0, int iParam1)
{
	Local_2615[iParam0 /*12*/] = iParam1;
}

int func_658()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_737.f_533[iVar0 /*42*/].f_1 = func_93();
		iVar0++;
	}
	return 1;
}

int func_659()
{
	return Local_649.f_0;
}

int func_660(int iParam0)
{
	return Local_2615[iParam0 /*12*/];
}

void func_661()
{
	if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 6))
	{
		func_684();
		unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 6);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 7))
	{
		if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 4) || unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 16))
		{
			if (((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_288()) && func_12(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 7);
				func_282("FME_PASINT", 30000);
				func_281(1);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 17))
		{
			if (func_154() && !func_153())
			{
				unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 17);
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 16);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 23))
	{
		if (((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_2519572.f_784, 2)) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_68280) && !Global_53148) && !unk_0xF16DAFF595E80F7C())
		{
			if (func_682())
			{
				func_282("AMEV_GA_RP", -1);
				if (func_208(unk_0xB5CEFD608600A09F()) != 200)
				{
					func_281(1);
				}
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 23);
			}
		}
	}
	if (unk_0xE186ACC7BE9B244E() && unk_0x0352C1B6B66A87AC() == 15)
	{
		if (func_394(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				unk_0xFD1119221F75C876(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			unk_0xCB1E3206344A11E1(1344549371);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 9))
	{
		if ((((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_288()) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && !func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 9);
			func_681(0);
			func_282("FME_TBL00", -1);
			func_281(1);
		}
	}
	if (func_369(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 18))
		{
			if ((func_152(unk_0xB5CEFD608600A09F(), 21) && unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 20)) && !unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 19))
			{
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 18);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 18))
		{
			if (((((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_288()) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && unk_0x726D9204B160D23E()) && !Global_2519572.f_4815)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 18);
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 19);
				func_282("AMTT_RPAS", -1);
				func_281(1);
			}
		}
	}
	if (((((func_369(unk_0xB5CEFD608600A09F()) && !func_8(unk_0xB5CEFD608600A09F())) && func_307(unk_0xB5CEFD608600A09F()) != 146) && !func_7(unk_0xB5CEFD608600A09F())) && !func_151(unk_0xB5CEFD608600A09F())) && !func_671())
	{
		if (func_393(func_307(unk_0xB5CEFD608600A09F())))
		{
			unk_0x2C60B9CCB9A13F96(unk_0xB5CEFD608600A09F());
		}
		if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 22))
		{
			unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 22);
		}
		if (func_437(unk_0xB5CEFD608600A09F()) || func_387())
		{
			if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 10))
			{
				if (func_670(func_307(unk_0xB5CEFD608600A09F())))
				{
					if (func_250(0) && !Global_2391045)
					{
						unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_391(1);
						unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 14);
					}
				}
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 10);
			}
		}
		if (func_394(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 11))
			{
				if (!Global_93007.f_8)
				{
					unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 12);
					func_389(1);
				}
				if (!func_669())
				{
					unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 13);
					func_388();
				}
				if (!Global_2391045)
				{
					unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 14);
					if (func_250(0) && !Global_2391045)
					{
						unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 9);
					}
					func_391(1);
				}
				unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 11);
			}
		}
		else
		{
			func_667(0);
		}
	}
	else
	{
		func_667(1);
	}
	func_662();
	if (func_386(func_307(unk_0xB5CEFD608600A09F())) && !unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 21))
	{
		unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 21);
	}
	if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 10))
		{
			unk_0xF0059F27F7BB6680(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 10);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 10))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 10);
	}
}

void func_662()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_288())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_515(iVar2))
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
				if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 26))
				{
					unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 26);
				}
				func_663(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 26))
	{
		func_44(&(Global_1574452.f_22));
		unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 26);
	}
}

void func_663(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1574452.f_22)))
	{
		func_2(&(Global_1574452.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574452.f_22), iParam1, 0))
	{
		if (func_644() > 0)
		{
			func_666(iParam0);
			if (func_279("AMEV_LBD_HELP"))
			{
				unk_0x7456702622C62EA0(1);
			}
			func_44(&(Global_1574452.f_22));
		}
	}
	else
	{
		func_665(0);
		func_664();
	}
}

void func_664()
{
	Global_2519572.f_4518 = 0;
}

void func_665(int iParam0)
{
	Global_1363073.f_68 = iParam0;
}

void func_666(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

void func_667(int iParam0)
{
	if ((unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 11) || (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 10) && iParam0)) || (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 22) && iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 12))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 12);
			func_389(0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 13))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 13);
			func_668();
		}
		if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 14) && !func_101(unk_0xB5CEFD608600A09F(), 0))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 14);
			func_391(0);
		}
		unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 11);
		unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 10);
		unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 22);
	}
}

void func_668()
{
	unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4720), 0);
}

bool func_669()
{
	return unk_0xFA30DFD0084E92FE(Global_2519572.f_4720, 0);
}

int func_670(int iParam0)
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
			return func_394(unk_0xB5CEFD608600A09F());
		
		case 133:
			return (func_387() || func_5(func_306()));
		
		default:
	}
	return 0;
}

int func_671()
{
	if (((((((((func_680() || func_679()) || func_678()) || func_301()) || (func_677() && !unk_0x517823CA390A19F6())) || (func_674() && !func_673())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_672() == 2 && !unk_0x517823CA390A19F6()))
	{
		return 1;
	}
	return 0;
}

int func_672()
{
	return Global_979886;
}

bool func_673()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 27);
}

int func_674()
{
	if (func_676() || func_675())
	{
		return Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_98 == 8;
	}
	return 0;
}

var func_675()
{
	return Global_2447942.f_622;
}

bool func_676()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 11);
}

bool func_677()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 5);
}

bool func_678()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 2);
}

bool func_679()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 20);
}

bool func_680()
{
	return Global_2447942.f_586;
}

void func_681(int iParam0)
{
	int iVar0;
	
	iVar0 = func_196(2530, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 0))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 0);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 1))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 1);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 2))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 3))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 3);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 4))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 4);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 5))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 6))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 6);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 7))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 7);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 8))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 9))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 9);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 10))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 10);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 11))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 11);
		}
	}
	func_187(2530, iVar0, -1, 1, 0);
}

int func_682()
{
	int iVar0;
	
	if (!func_45(&(Global_1574452.f_15)))
	{
		func_2(&(Global_1574452.f_15), 0, 0);
		Global_1574452.f_17 = 0;
	}
	else if (func_1(&(Global_1574452.f_15), 1000, 0))
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Global_1574452.f_17)))
		{
			iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Global_1574452.f_17));
			if (unk_0x96B1061E8F3CBC9A(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_683(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0xB5CEFD608600A09F()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574452.f_17++;
		if (Global_1574452.f_17 >= 32)
		{
			Global_1574452.f_17 = 0;
			func_44(&(Global_1574452.f_15));
		}
	}
	return 0;
}

int func_683(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_191(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589291[iVar0 /*770*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_684()
{
	unk_0xAEC867D0DBB7AFEB(5);
	func_686();
	unk_0xDF53A66AEE1401AA(1f);
	unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 8);
	func_685();
}

void func_685()
{
	if (Global_1662768)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1662769, 0))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2527911, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_1662769, 1))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2527911, 1);
		}
		if (unk_0xFA30DFD0084E92FE(Global_1662769, 5))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2527911, 5);
		}
		if (unk_0x86BC948CAD7C61EF(-355737150))
		{
			unk_0xF72F6BB050622804(-355737150, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-580979506))
		{
			unk_0xF72F6BB050622804(-580979506, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1426452475))
		{
			unk_0xF72F6BB050622804(-1426452475, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(745417724))
		{
			unk_0xF72F6BB050622804(745417724, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1305304906))
		{
			unk_0xF72F6BB050622804(-1305304906, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1543175077))
		{
			unk_0xF72F6BB050622804(-1543175077, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-811770997))
		{
			unk_0xF72F6BB050622804(-811770997, 1, 0, 0);
		}
		Global_1662769 = 0;
	}
	Global_1662768 = 0;
}

void func_686()
{
	if (unk_0x3C406FC829C1E14A(Global_2519572.f_4878))
	{
		if (!Global_2519572.f_4878 == unk_0x8A55B15F4133C912() && Global_2519572.f_4877 < 1f)
		{
			return;
		}
	}
	Global_2519572.f_4878 = -1;
	Global_2519572.f_4877 = 1f;
}

int func_687()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2519572.f_4718)
	{
		return 0;
	}
	if ((!func_45(&(Local_649.f_39)) && !func_45(&(Local_649.f_41))) && !func_45(&(Local_649.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0xED678C85A82F0AB9();
	if (func_45(&(Local_649.f_41)))
	{
		iVar0 = func_688(&uVar2, &(Local_649.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_649.f_39)))
	{
		iVar0 = func_688(&uVar2, &(Local_649.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_649.f_43)))
	{
		iVar0 = func_688(&uVar2, &(Local_649.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_688(var uParam0, var uParam1)
{
	return unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(*uParam0, *uParam1));
}

int func_689()
{
	if (func_690())
	{
		return 1;
	}
	return 0;
}

bool func_690()
{
	return Global_1574452.f_24;
}

int func_691()
{
	var uVar0;
	
	func_695(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_694())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_693())
	{
		return 1;
	}
	if (func_692(157))
	{
		if (!func_680())
		{
			return 1;
		}
	}
	if (func_692(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_396() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_396()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_692(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_693()
{
	return Global_2457699;
}

bool func_694()
{
	return Global_2447942.f_581;
}

void func_695(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_696(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_696(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xA95CF30C72EB526E(Var0.f_1);
			if (unk_0x724D816EA203A79E(uVar3))
			{
				if (unk_0x5237AF95232D78C5(iVar3, 0))
				{
					uVar4 = unk_0x9FE9D386222EEE47(iVar3, 0);
					if (unk_0x403C891106DCABAF(uVar4, Var0.f_2) && unk_0x32405B7614E36453())
					{
						if (func_697(uVar4, &bVar5))
						{
							unk_0xD5DC0505375F4D00(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x1E7A09C1710FB071(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_697(int iParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_698()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_699()
{
	int iVar0;
	
	if (func_691())
	{
		Local_3000.f_5 = 5;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_649.f_2, 0))
	{
		Local_3000.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3000.f_5 = 1;
	}
	else
	{
		Local_3000.f_5 = 2;
	}
	Local_3000.f_0 = Local_649.f_52;
	Local_3000.f_1 = Local_649.f_53;
	Local_3000.f_4 = Local_649.f_66;
	Local_3000.f_3 = Local_649.f_51;
	Local_3000.f_10 = (unk_0xB99C193A32DE341D() - Local_3000.f_9);
	if (!Global_262145.f_10889)
	{
		if (Local_3000.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x6BAA0516CC970D99() != -1)
	{
		func_735(Local_3000, Local_649.f_3, Local_2615[unk_0x6BAA0516CC970D99() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_340, 4))
	{
		unk_0x38FF8CB6377D36F6(iLocal_348);
		unk_0x7CB6FD92BE491AD9(&iLocal_340, 4);
	}
	unk_0x26D344275839A25E(iLocal_348);
	unk_0x26D344275839A25E(iLocal_349);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_635, iVar0) && !unk_0x1BD5EE88F32433CD(uLocal_636[iVar0]))
		{
			unk_0x38FF8CB6377D36F6(uLocal_636[iVar0]);
			unk_0x26D344275839A25E(uLocal_636[iVar0]);
		}
		iVar0++;
	}
	func_377();
	func_449(1, 1);
	unk_0xA9F827A1B59E18D4(0);
	func_517(0);
	func_384(Local_649.f_3, 0);
	func_700(133, 0, Local_649.f_37 == 6);
	func_383(23, 0);
	if (func_293() >= 0f)
	{
		unk_0xCF9877018AE2E3BB(0f, 0, 21);
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_340, 9))
	{
		unk_0x992E057EBDE4A46F();
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_700(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xB5CEFD608600A09F() != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 13))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 13);
		}
		if (unk_0xFA30DFD0084E92FE(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1, 14))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1), 14);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_1574452.f_1, 21))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1574452.f_1), 21);
	}
	func_731();
	unk_0x9B90420B04C07704("DisableFlightMusic", 0);
	unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_730(func_307(unk_0xB5CEFD608600A09F()));
		func_383(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xB5CEFD608600A09F() != -1) && func_729(unk_0xB5CEFD608600A09F()) >= 12)
		{
			func_728(2542, -1);
			iVar1 = func_196(2542, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF0059F27F7BB6680(&Global_1574478, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF0059F27F7BB6680(&Global_1574478, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF0059F27F7BB6680(&Global_1574478, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF0059F27F7BB6680(&Global_1574478, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF0059F27F7BB6680(&Global_1574478, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF0059F27F7BB6680(&Global_1574478, 5);
			}
		}
		func_727();
		func_726();
		func_725();
		if ((!func_97(unk_0xB5CEFD608600A09F()) && !func_287(unk_0xB5CEFD608600A09F())) && !func_432())
		{
			func_709();
		}
		func_708();
		if (!unk_0xFA30DFD0084E92FE(Global_1665343.f_3, 0) && !unk_0xFA30DFD0084E92FE(Global_1665343.f_3, 1))
		{
			func_684();
		}
		func_707();
		unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_1732), 2);
		func_706();
		func_156();
	}
	if (unk_0x7922FBF86CF76430(1344549371))
	{
		unk_0xCB1E3206344A11E1(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xB5CEFD608600A09F() != -1 && !func_152(unk_0xB5CEFD608600A09F(), 21)) && !func_101(unk_0xB5CEFD608600A09F(), 0))
		{
			func_391(0);
			func_389(0);
			func_705();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2459868 = -1;
			func_46(26, -1);
		}
	}
	if (!func_701())
	{
		Global_2498720 = 1;
	}
}

int func_701()
{
	if (((((!func_626(unk_0xB5CEFD608600A09F()) && !func_607(unk_0xB5CEFD608600A09F())) && func_307(unk_0xB5CEFD608600A09F()) != 146) && !func_704()) && !func_703()) && !func_702(Global_4456448.f_148478))
	{
		return 0;
	}
	return 1;
}

bool func_702(int iParam0)
{
	return iParam0 == 57;
}

int func_703()
{
	if (Global_4456448.f_126776 == Global_262145.f_8985)
	{
		return 1;
	}
	return 0;
}

int func_704()
{
	if ((Global_4456448 == 0 && unk_0x517823CA390A19F6()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_148478 > 0) || unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 15)) || unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 18)) || unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 19)) || unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 29)) || unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 28)) || unk_0xFA30DFD0084E92FE(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_705()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xFA30DFD0084E92FE(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_706()
{
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4719, 1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_4719), 1);
	}
	if (Global_2519572.f_4719 > 0)
	{
		unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_KILL");
		unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_FIRA");
		unk_0xC1300D0F3A74E20B("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x1549CEF3D921CF97(1);
		Global_2519572.f_4719 = 0;
		unk_0x9B90420B04C07704("DisableFlightMusic", 0);
		unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
		unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
		if (!unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "am_pi_menu"))
		{
			if (Global_2519572.f_4729 > -1)
			{
				unk_0x26D344275839A25E(Global_2519572.f_4729);
				Global_2519572.f_4729 = -1;
			}
		}
	}
}

void func_707()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574452 = { Var0 };
}

void func_708()
{
	var uVar0;
	
	Global_1316736 = uVar0;
}

void func_709()
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_24), &Global_2409277, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_26), &Global_2409279, 18);
	func_723();
	func_712(1, 1, 0);
	func_710();
}

void func_710()
{
	func_711(0, 0);
}

void func_711(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_712(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_44), &Global_2409297, 317);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409297 };
		Global_2405070.f_44.f_49 = { Global_2409297.f_49 };
		Global_2405070.f_44.f_52 = Global_2409297.f_52;
		Global_2405070.f_44.f_53 = Global_2409297.f_53;
	}
	if (bParam0)
	{
		func_722();
	}
	if (!bParam2)
	{
		func_714(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_713(0);
	func_159();
}

void func_713(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_701 = 0;
	}
	else
	{
		Global_2405070.f_701 = 1;
	}
}

void func_714(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_721())
		{
			func_720();
		}
		Global_2405070.f_702.f_515 = unk_0x8A55B15F4133C912();
		Global_2405070.f_702.f_504 = iParam1;
		Global_2405070.f_702.f_505 = iParam2;
		Global_2405070.f_702.f_506 = iParam10;
		func_718();
		func_430(8, 0, 0, 0, 0);
		Global_2405070.f_702.f_507 = iParam11;
		Global_2405070.f_702.f_510 = iParam3;
		Global_2405070.f_702.f_511 = iParam4;
		Global_2405070.f_702.f_508 = iParam5;
		Global_2405070.f_702.f_509 = iParam6;
		Global_2405070.f_702.f_512 = iParam7;
		Global_2405070.f_702.f_513 = iParam8;
		Global_2405070.f_702.f_514 = iParam9;
		Global_2405070.f_1735 = 1;
	}
	else
	{
		func_715();
	}
}

void func_715()
{
	if (func_721() && !func_717())
	{
		func_720();
	}
	if (func_717())
	{
		func_716();
	}
	else
	{
		func_718();
		func_430(0, 0, 0, 0, 0);
		Global_2405070.f_1735 = 0;
		Global_2405070.f_1734 = 0;
	}
}

void func_716()
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_702), &(Global_2405070.f_1218), 516);
	Global_2405070.f_483 = { Global_2405070.f_489 };
	if (unk_0x8A55B15F4133C912() == Global_2405070.f_702.f_515)
	{
		Global_2405070.f_1734 = 0;
	}
}

int func_717()
{
	if ((Global_2405070.f_1734 && !unk_0x8A55B15F4133C912() == Global_2405070.f_1218.f_515) && unk_0x3C406FC829C1E14A(Global_2405070.f_1218.f_515))
	{
		return 1;
	}
	return 0;
}

void func_718()
{
	if (func_721() && !func_717())
	{
		func_720();
	}
	func_719();
	Global_2405070.f_702 = 0;
}

void func_719()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_702.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_720()
{
	if (func_717())
	{
		if (Global_2405070.f_702.f_515 == Global_2405070.f_1218.f_515)
		{
			return;
		}
	}
	if (!unk_0x8A55B15F4133C912() == Global_2405070.f_702.f_515)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_1218), &(Global_2405070.f_702), 516);
		Global_2405070.f_489 = { Global_2405070.f_483 };
		Global_2405070.f_1734 = 1;
	}
}

int func_721()
{
	if ((Global_2405070.f_1735 && !unk_0x8A55B15F4133C912() == Global_2405070.f_702.f_515) && unk_0x3C406FC829C1E14A(Global_2405070.f_702.f_515))
	{
		return 1;
	}
	return 0;
}

void func_722()
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_361), &Global_2409614, 121);
}

void func_723()
{
	func_724();
	Global_2405070.f_2244 = 0;
}

void func_724()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2245[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_725()
{
	Global_2519572.f_4720 = 0;
}

void func_726()
{
	if (unk_0xB5CEFD608600A09F() != -1)
	{
		Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_1 = 0;
	}
}

void func_727()
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	if (iVar0 != -1)
	{
		Global_1624079[iVar0 /*558*/] = -1;
	}
}

void func_728(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_192(iParam1), 0);
	iVar0++;
	if (!func_195(iParam0))
	{
		func_187(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam1, 1);
	}
}

int func_729(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_211.f_6;
}

int func_730(int iParam0)
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
			if (func_394(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_731()
{
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_1724, 3) || unk_0xFA30DFD0084E92FE(Global_2519572.f_1724, 4))
	{
		if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
		{
			unk_0x829FA4611BD56B44(800);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_1724, 5))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_1724), 5);
	}
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_1724, 3))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_1724), 3);
	}
	if (unk_0xFA30DFD0084E92FE(Global_2519572.f_1724, 4))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_1724), 4);
	}
	func_734(0);
	func_733(0);
	func_732(0);
}

void func_732(int iParam0)
{
	if (Global_2519572.f_4506 != iParam0)
	{
		Global_2519572.f_4506 = iParam0;
	}
}

void func_733(bool bParam0)
{
	if (Global_2519572.f_4505 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2519572.f_4505 = bParam0;
	}
}

void func_734(int iParam0)
{
	if (Global_2519572.f_4503 != iParam0)
	{
		Global_2519572.f_4503 = iParam0;
	}
}

void func_735(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x1377080E9B0BD993();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_70978)
	{
		if (unk_0x3362CDE8460ED38B(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x3F02404BB189D126(&Var1);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x3F37A01E10EFBC82(&Var14);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x9D30E1D8E183CBC3(&Var28);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xC0312FB328DBF452(&Var52);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_penned_in"))
		{
			unk_0x6B88EE97D205E33D(&Param0);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x6188CC5679D9EC62(&Var66);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x0F05DB94C77F0394(&Var79);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xB4DF36A99D88AB30(&Var93);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x5D48D4D7FEF5F15D(&Var107);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x72EF836BB244665D(&Var123);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x7A96074A38F0BFBD(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x71D1B9D601584712(&Var150);
			}
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x46BD47BFBC39CC53(&Var164);
		}
	}
}

int func_736(struct<21> Param0)
{
	func_745(func_746(Param0.f_0), Param0);
	unk_0x38A34821FCF0B79E(func_744(9));
	unk_0xA6E7E0EC9E48D44C(func_743(9));
	func_740(0, -1, 0);
	func_738(133);
	unk_0x76AE988734CA7760(&Local_649, 88);
	unk_0xE45D6A3FD6454198(&Local_2615, 385);
	if (!func_737())
	{
		func_699();
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		unk_0x498B26CF846D31E2(&(Local_649.f_52), &(Local_649.f_53));
	}
	Local_3000.f_2 = unk_0xB46BE0E79661103C();
	unk_0x6C87EFD58B261C6F(0);
	return 1;
}

int func_737()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_694())
		{
			return 0;
		}
		if (func_692(155))
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

void func_738(int iParam0)
{
	func_707();
	func_739();
	func_725();
	Global_1574452.f_4 = iParam0;
	Global_1574452.f_5 = iParam0;
	func_401(iParam0, -1);
	func_27(&(Global_1574452.f_18), 0, 0);
	Global_2519572.f_4573 = 0;
	Global_2458763[0] = func_93();
	Global_2458763[1] = func_93();
	Global_2458763[2] = func_93();
	Global_2458763[3] = func_93();
	Global_2458763[4] = func_93();
	func_156();
	if (!func_528(func_276()))
	{
		func_275();
	}
	if (func_154() && !func_153())
	{
		unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 16);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_1574452.f_1), 17);
	}
}

void func_739()
{
	var uVar0;
	
	Global_1574477 = uVar0;
}

int func_740(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_742();
			}
			else
			{
				return 0;
			}
		}
		if (!func_741())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_742();
					}
					else
					{
						return 0;
					}
				}
				if (func_694())
				{
					if (!bParam2)
					{
						func_742();
					}
					else
					{
						return 0;
					}
				}
				if (func_692(155))
				{
					if (!bParam2)
					{
						func_742();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_742();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_742();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_742();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_741()
{
	return Global_1312831;
}

void func_742()
{
	unk_0x95E4B6F3ED223F5A();
}

int func_743(int iParam0)
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

int func_744(int iParam0)
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

void func_745(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_742();
	}
	unk_0xBF463BC3D6FFDE31(uParam0, 0, Param1.f_16);
}

int func_746(int iParam0)
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


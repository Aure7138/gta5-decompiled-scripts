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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 5;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	struct<10> Local_190[15];
	int iLocal_341 = 0;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<3> Local_409[8];
	struct<3> Local_434[12];
	struct<3> Local_471[6];
	struct<3> Local_490[5];
	struct<3> Local_506[20];
	struct<3> Local_567[11];
	struct<3> Local_601[3];
	struct<3> Local_611[3];
	struct<3> Local_621[4];
	struct<3> Local_634[7];
	struct<3> Local_656[3];
	struct<3> Local_666[4];
	struct<3> Local_679[2];
	struct<3> Local_686[4];
	struct<3> Local_699[7];
	struct<3> Local_721[7];
	struct<3> Local_743[8];
	struct<3> Local_768[5];
	struct<3> Local_784[5];
	struct<3> Local_800[6];
	struct<3> Local_819[6];
	struct<3> Local_838[6];
	var uLocal_857 = 0;
	int iLocal_858 = 0;
	struct<429> Local_859 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	struct<13> Local_1297 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1310 = 23;
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
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
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
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
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
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	int iLocal_1564 = 0;
	bool bLocal_1565 = 0;
	struct<28> Local_1566 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 5;
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
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 1097859072;
	var uLocal_1640 = 1500;
	var uLocal_1641 = 45;
	var uLocal_1642 = 1103626240;
	var uLocal_1643 = 5;
	var uLocal_1644 = 0;
	float fLocal_1645 = 0f;
	bool bLocal_1646 = 0;
	var uLocal_1647 = 0;
	struct<2> Local_1648 = { 0, 0 } ;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_77 = unk_0x2C4CAB2984F6DB6B();
	uLocal_78 = unk_0xEB9EC7BD70F671E1();
	Local_83 = { 500f, 500f, 500f };
	bLocal_1646 = true;
	if (unk_0xB9B05E900D325C36(67))
	{
		func_415();
	}
	unk_0xB5533C0C8A2B9BF2(1);
	func_399();
	func_397(&uLocal_1310);
	func_396();
	func_377();
	Local_859.f_14 = { 4186.797f, -3657.349f, -0.5762f };
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (func_376(&Local_859))
	{
		func_375(&Local_859);
		if (Local_859.f_410 > 0)
		{
			switch (iLocal_858)
			{
				case 0:
					if (func_374(&Local_859, 0))
					{
						iLocal_858 = 1;
					}
					break;
				
				case 1:
					func_372();
					break;
			}
		}
		else if (func_371(&Local_859, 31) > 5f)
		{
			func_415();
		}
	}
	else
	{
		if (Local_859.f_410 <= 9)
		{
			func_336(&Local_859, &uLocal_1637);
			func_335(&Local_859);
		}
		func_334(&Local_859);
		func_333(&Local_859, &uLocal_1644, 0);
		if (Local_859.f_410 > 2)
		{
			if (!func_332(&Local_859))
			{
				func_297();
			}
			else
			{
				func_282(&Local_859, "Taxi Not Driveable", func_296(&Local_859));
			}
		}
		if (Local_859.f_410 == 9)
		{
			func_258(&Local_859, 0, 1);
		}
		if (func_257("TC_HOWTOSTART"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		switch (Local_859.f_410)
		{
			case 2:
				if (func_251(&uLocal_1310, &(Local_859.f_14), 1))
				{
					func_250(&Local_859, 0);
				}
				break;
			
			case 0:
				if (func_247(&Local_859))
				{
					func_244();
					func_250(&Local_859, 1);
				}
				break;
			
			case 1:
				if (func_242())
				{
					func_241(&Local_859);
					func_250(&Local_859, 3);
				}
				break;
			
			case 3:
				if (!unk_0x76B3C79DE564AFC6(Local_859.f_3))
				{
					func_240(&Local_859, Local_859.f_14);
					Local_859.f_11 = { Local_859.f_14 };
					func_239(Local_859.f_14, 0);
					unk_0xD50199C9F3AD72E7(Local_859.f_14, 2f, 0);
					Local_859.f_3 = unk_0x5618B819E5B9C053(26, iLocal_1564, Local_859.f_11, 0, 1, 1);
					unk_0x37907A374973B718(Local_859.f_3, Local_859.f_145);
					func_238(&(Local_859.f_244), 3, Local_859.f_3, "TaxiGeneric", 0, 1);
					unk_0x49544FB997F0AADE(Local_859.f_3, 112, 1);
					if (!unk_0x8682D8A6269E52C9(Local_859.f_3))
					{
						unk_0xD6A092D1F1B9A9F1(Local_859.f_3, 32, 0);
						unk_0xD6A092D1F1B9A9F1(Local_859.f_3, 177, 1);
						unk_0xD6A092D1F1B9A9F1(Local_859.f_3, 317, 1);
						Local_859.f_8 = func_237(Local_859.f_3, 0, 0);
						unk_0x50B5259DFC71B8EC(Local_859.f_8, "TAXI_BLIP_PASS");
						unk_0x0DC09107B06EEFFD(1, 0);
						unk_0xE4E08EF8CF4469E9(Local_859.f_8, 1);
						unk_0x659E5E147E8E6635("TAXI_Passenger", &(Local_859.f_413));
						unk_0x85F49C37BE784CD7(1, Local_859.f_413, joaat("player"));
						unk_0x85F49C37BE784CD7(2, Local_859.f_413, joaat("COP"));
						unk_0x7F53E53C6F32D196(Local_859.f_3, Local_859.f_413);
						unk_0x43EC517AF665D2B9(Local_859.f_3, Local_859.f_4, -1, 2048, 4);
					}
					func_236(&Local_859, 1, 0);
					func_250(&Local_859, 5);
				}
				break;
			
			case 5:
				if (!func_235(Global_104439.f_18958, 2))
				{
					if (func_234(9) >= 2)
					{
						func_233("TAXI_2CANCEL", -1);
						func_231(&(Global_104439.f_18958), 2);
					}
				}
				if (unk_0x9148803485DEDF45(0, 86) && !Local_859.f_48 > 0)
				{
					func_282(&Local_859, "Player cancelled on dispatch", 19);
				}
				if (func_205(&Local_859, 0, 1109393408))
				{
					func_250(&Local_859, 15);
				}
				break;
			
			case 15:
				if (func_204(&Local_859))
				{
					func_199(&Local_1297);
					Local_859.f_17 = { func_198(Local_1297.f_1) };
					Local_859.f_29 = { func_197(Local_1297.f_1) };
					func_193(&Local_859, 9, 1, 0, 0);
					if (!unk_0xA761A0B6072010C8(Local_859.f_9))
					{
						Local_859.f_9 = func_192(Local_859.f_17, 1);
					}
					func_191(&Local_859);
					func_190();
					func_250(&Local_859, 9);
				}
				if (unk_0x432757A9E7AAFA96(Local_859.f_4, 0))
				{
					if (!unk_0xA32DC7E16AD1DFB7(Local_859.f_2, Local_859.f_4, 0))
					{
						func_186(&Local_859);
						func_250(&Local_859, 5);
					}
				}
				break;
			
			case 9:
				if (func_170(&Local_859))
				{
					func_169(&Local_859, &(Local_859.f_43));
					func_164();
					func_161(&Local_859);
					func_155(&Local_859, 1097859072, 1117782016);
					if (func_151(&Local_859, func_154()))
					{
						fLocal_1645 = ((Local_1297.f_12 / func_371(&Local_859, 7)) * 3600f);
						if (fLocal_1645 > 40f)
						{
							Local_859.f_56 = Local_859.f_59;
						}
						else if (fLocal_1645 > 30f)
						{
							Local_859.f_56 = Local_859.f_58;
						}
						else
						{
							Local_859.f_56 = 0;
						}
						unk_0x0C4BDC77192798AE(&(Local_859.f_9));
						iVar0 = unk_0x3AF262D7332EEDF5(0, 100);
						if (iVar0 < 10)
						{
							bLocal_1646 = true;
						}
						else
						{
							bLocal_1646 = false;
						}
						func_149(&Local_859);
						func_144(bLocal_1646);
						func_143(&Local_859);
						if (bLocal_1646)
						{
							func_250(&Local_859, 28);
						}
						else
						{
							func_250(&Local_859, 27);
						}
					}
				}
				break;
			
			case 27:
				if (func_133(&Local_859, 1))
				{
					if (!unk_0x7A6C051038031EFA(Local_859.f_3, 0))
					{
						unk_0x1F5B34056C3CB80B(&uLocal_1647);
						unk_0x173325AAF2CD766A(&uLocal_1647);
						unk_0xCFA3B07B6CEEF62C(0);
						unk_0xCD660EFEFB62BC2F(0, 0);
						if (unk_0x6FDAA51051AB12D5(func_197(Local_1297.f_1), 5f, 1))
						{
							unk_0x2CA980D6553D4E80(0, func_197(Local_1297.f_1), 5f, 0);
						}
						else
						{
							unk_0x276406356F4120BB(0, func_197(Local_1297.f_1), 1f, -1, 1048576000, 0, 1193033728);
							unk_0x9B18650A8523389D(0, 500);
							unk_0x3A85AE9FA7967993(0, func_131(func_132(), "WORLD_HUMAN_STAND_MOBILE", "WORLD_HUMAN_AA_SMOKE"), 5000, 1);
							unk_0x9BE63CB00B240063(0, 1193033728, 0);
						}
						unk_0xF81AD3C937316CCA(uLocal_1647);
						unk_0xEDD5437C49B7B1F8(Local_859.f_3, uLocal_1647);
						unk_0x390D16BCBFB23E1A(Local_859.f_3, 1);
					}
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
					func_250(&Local_859, 29);
				}
				break;
			
			case 28:
				if (func_94(&uLocal_1289, &Local_859, &(Local_859.f_3), &uLocal_1290, 1))
				{
					func_250(&Local_859, 29);
				}
				break;
			
			case 29:
				switch (iLocal_168)
				{
					case 0:
						unk_0x18F1BFAF88AC511B(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
						func_93(&Local_1648, "TAXI_FARE_FIN", Local_859.f_50, Local_859.f_56, (Local_859.f_50 + Local_859.f_56), "TAXI_FARE_DET", 4000, 1);
						Local_1648.f_1 = 4000;
						func_92(1);
						iLocal_168 = 6;
						break;
					
					case 6:
						if (!func_88(&Local_1648, 1))
						{
							func_69(&Local_859);
							func_66(&Local_859, 0, 0, 0);
							func_92(0);
							iLocal_168 = 7;
						}
						break;
					
					case 7:
						func_2(1, &Local_859, 1);
						func_250(&Local_859, 30);
						break;
				}
				break;
			
			case 30:
				func_415();
				break;
			}
	}
}

void func_2(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_41(uParam1);
		if (!unk_0x8682D8A6269E52C9(uParam1->f_3))
		{
			unk_0xD6A092D1F1B9A9F1(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_39(1, 0);
	}
	func_3(uParam1, bParam2);
}

void func_3(var uParam0, bool bParam1)
{
	func_375(uParam0);
	if (func_38())
	{
		func_36();
	}
	func_34();
	unk_0x27FC4121D73AF604();
	unk_0x8C361F37C04084F4(1);
	func_31(0);
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		unk_0x014C5648BA70BF8B(uParam0->f_4, 0);
		unk_0xC80119C06730FA8A(uParam0->f_4);
		unk_0x9C58F749F0AA66AE(uParam0->f_4);
	}
	func_239(uParam0->f_14, 1);
	func_29(uParam0->f_14, 1, 1114636288);
	func_28(&(uParam0->f_244), 3);
	unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 1);
	if (func_25())
	{
		unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
	}
	unk_0x11AA938960F52423(1);
	func_15(0, 1, 1, 0);
	unk_0x4C4F62CD43971CED(1);
	unk_0x56A844FA6FE745C3(1);
	if (unk_0x2A3EA4C0BCED85F2(*uParam0))
	{
		unk_0x46B35AD2F641A4A3(*uParam0, 0);
		unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
		unk_0xC938B5CB1FF90CA1(1);
	}
	if (func_235(Global_104439.f_18958, 4))
	{
		func_13(&(Global_104439.f_18958), 4);
		unk_0x05C9FC8771682275(func_12(), 0);
	}
	if (bParam1)
	{
		func_11(uParam0);
	}
	func_10(uParam0);
	unk_0xBE238DB7614E8074("gestures@m@standing@casual");
	unk_0xBE238DB7614E8074("oddjobs@taxi@");
	unk_0xBE238DB7614E8074("oddjobs@towingcome_here");
	if (unk_0xE096BC82D913B3DB())
	{
		func_8(uParam0->f_411);
	}
	if (!unk_0x46F4AE18D5506B08(unk_0xED1168B8D2D313FA()))
	{
		unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
	}
	unk_0xC154C4DED6F310CC(unk_0xF2DB717A73826179((func_4(&uLocal_90) * 1000f)), 12, 0);
}

float func_4(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_5(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

void func_8(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_9(iParam0)}, 6);
		if (!unk_0x996B09F758C57FBE(&uVar0))
		{
		}
	}
}

struct<8> func_9(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_10(var uParam0)
{
	unk_0x54AD3BB046B08457(uParam0->f_51[0]);
}

void func_11(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_3))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
		{
			if (!unk_0x90219307C9D2728D(uParam0->f_3, 0))
			{
				unk_0xA6CF3FDF7453AB63(uParam0->f_3);
			}
			unk_0xEB9B39274C401888(uParam0->f_3, 0);
			unk_0x85F49C37BE784CD7(255, uParam0->f_413, joaat("player"));
			if (unk_0x4CB2F72EA418C083(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xEBC568297077D190(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x4CB2F72EA418C083(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xEBC568297077D190(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x4CB2F72EA418C083(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xEBC568297077D190(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x4CB2F72EA418C083(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xEBC568297077D190(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x056049D9941BD43D(&(uParam0->f_3));
		}
	}
}

int func_12()
{
	return joaat("taxi");
}

void func_13(var uParam0, int iParam1)
{
	func_14(uParam0, iParam1);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_24(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_23())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_24(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_20(unk_0x3D35F9864E4640B1())) && !func_17(unk_0x3D35F9864E4640B1(), 0)) && !func_16())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_20(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_16()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312735;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_22(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

int func_25()
{
	if (!func_27() && !func_26())
	{
		if (!unk_0x3B417E8173D1291D(unk_0xED1168B8D2D313FA()))
		{
			return 1;
		}
	}
	return 0;
}

int func_26()
{
	if (unk_0x7832F791572D5809(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (unk_0x7832F791572D5809(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_29(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_30(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_30(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x4684D9ED3F94B4A8(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0xEE470B9028B06E0A(Var0, Var3, 1);
		unk_0x92C87DB219EDEB03();
	}
}

Vector3 func_30(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_31(int iParam0)
{
	if (Global_14604)
	{
		func_32(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_23())
	{
		Global_14443.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_89840[iVar0 /*17*/] && !Global_89840[iVar0 /*17*/].f_1)
		{
			if (Global_89840[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89840[iVar0 /*17*/].f_5 != 88 && Global_89840[iVar0 /*17*/].f_5 != 89) && Global_89840[iVar0 /*17*/].f_5 != 92)
				{
					func_35(Global_89840[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_35(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86892[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86892[iParam0 /*2*/] = 0;
	}
}

void func_36()
{
	Global_14611 = 0;
	func_37();
}

void func_37()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

int func_38()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_104439.f_18958.f_22[0]++;
			func_40("Fares Completed ++ = ", Global_104439.f_18958.f_22[0]);
			break;
		
		case 1:
			Global_104439.f_18958.f_22[1]++;
			func_40("Fares Failed ++ = ", Global_104439.f_18958.f_22[1]);
			break;
		
		case 2:
			Global_104439.f_18958.f_22[2]++;
			func_40("Fares Accepted ++ ", Global_104439.f_18958.f_22[2]);
			break;
		
		case 3:
			Global_104439.f_18958.f_22[3]++;
			func_40("Fares Expired ++ ", Global_104439.f_18958.f_22[3]);
			break;
		
		case 13:
			Global_104439.f_18958.f_22[13]++;
			func_40("Passengers run ++ = ", Global_104439.f_18958.f_22[13]);
			break;
		
		case 14:
			Global_104439.f_18958.f_22[14]++;
			func_40("Passenger Forced to Pay ++ = ", Global_104439.f_18958.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104439.f_18958.f_22[4])
				{
					Global_104439.f_18958.f_22[4] = iParam1;
					func_40("This distance ", iParam1);
					func_40(" is longer than current best", Global_104439.f_18958.f_22[4]);
				}
				else
				{
					func_40("Longest Distance Not Beat ", Global_104439.f_18958.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104439.f_18958.f_22[5] = (Global_104439.f_18958.f_22[5] + iParam1);
			func_40("Total Distance w/ Passenger = ", Global_104439.f_18958.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_104439.f_18958.f_22[6]++;
			}
			else
			{
				Global_104439.f_18958.f_22[6] = (Global_104439.f_18958.f_22[6] + iParam1);
			}
			func_40("Wanted Levels ++ = ", Global_104439.f_18958.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_104439.f_18958.f_22[7] = (Global_104439.f_18958.f_22[7] + iParam1);
			}
			else
			{
				Global_104439.f_18958.f_22[7]++;
			}
			func_40("Wanted Levels Lost = ", Global_104439.f_18958.f_22[7]);
			break;
		
		case 8:
			Global_104439.f_18958.f_22[8]++;
			func_40("Taxis wrecked ++ = ", Global_104439.f_18958.f_22[8]);
			break;
		
		case 9:
			Global_104439.f_18958.f_22[9]++;
			func_40("Horn Honked ++ = ", Global_104439.f_18958.f_22[9]);
			break;
		
		case 10:
			Global_104439.f_18958.f_22[10] = (Global_104439.f_18958.f_22[10] + iParam1);
			func_40("Total Money Earned = ", Global_104439.f_18958.f_22[10]);
			break;
		
		case 11:
			Global_104439.f_18958.f_22[11] = (Global_104439.f_18958.f_22[11] + iParam1);
			func_40("Total Tips Earned = ", Global_104439.f_18958.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104439.f_18958.f_22[12])
			{
				Global_104439.f_18958.f_22[12] = iParam1;
				func_40("New Highest Tip = ", Global_104439.f_18958.f_22[12]);
			}
			else
			{
				func_40("Highest Tip Not Reached = ", Global_104439.f_18958.f_22[12]);
			}
			break;
	}
}

void func_40(char* sParam0, int iParam1)
{
}

void func_41(var uParam0)
{
	func_39(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_65(1);
		func_51(15, 1);
	}
	func_231(&(Global_104439.f_18958), 1024);
	if (!func_235(Global_104439.f_18958, 64))
	{
		func_42(func_49(func_50(uParam0)), 0, 0);
	}
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = iParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_46() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_44();
				}
			}
		}
	}
}

int func_44()
{
	if (func_45(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_46()
{
	return Global_25222;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_50(var uParam0)
{
	return uParam0->f_411;
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_52(iParam0, iParam1);
}

int func_52(int iParam0, int iParam1)
{
	if (func_64(14) && !func_63(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_62(&Global_2608378))
	{
		if (func_60(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_53(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_53(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_64(14) && !func_63(iParam1))
	{
		return 0;
	}
	if (func_60(uParam0, iParam1))
	{
		return 0;
	}
	if (func_59(uParam0) < 0f)
	{
		func_58(uParam0, 0);
	}
	func_56(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_54(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_64(14) && !func_63(iParam1))
	{
		return 0;
	}
	if (func_60(uParam0, iParam1))
	{
		return 0;
	}
	if (func_59(uParam0) < 0f)
	{
		func_58(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_55(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_56(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_57(uParam0, iVar0);
		iVar0++;
	}
	func_58(uParam0, (Global_2608377 - 0.5f));
}

void func_57(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_58(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_59(var uParam0)
{
	return uParam0->f_72;
}

bool func_60(var uParam0, int iParam1)
{
	return func_61(uParam0, iParam1) != -1;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_62(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_64(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_65(int iParam0)
{
	Global_103149.f_22 = iParam0;
}

void func_66(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_68(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_67(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_68(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_67(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_67(var uParam0)
{
	func_68(uParam0, 0f);
}

void func_68(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_69(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_70(func_83(), 21, iVar0, 0, 0);
		func_39(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_71(Global_104439.f_27911[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x2553A7EB99AABF55(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE931A869061F7BD2(iVar1, iVar0, 1);
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_82();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_81(99, 1);
					func_80(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_80(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_80(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_79(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_78(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_78(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_78(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_77(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_81(95, iParam3);
					break;
				
				case 1:
					func_81(97, iParam3);
					break;
				
				case 2:
					func_81(96, iParam3);
					break;
			}
			func_81(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_74(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_74(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_80(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_80(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_80(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_73(iParam0);
	if (Global_35813 == 15)
	{
		func_72(0);
	}
	return 1;
}

void func_72(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_74(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_76() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_76() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_75(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_77(int iParam0)
{
	func_81(93, iParam0);
	func_81(29, iParam0);
	func_81(30, iParam0);
}

bool func_78(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_76() /*11035*/].f_7550.f_10, iParam0);
}

int func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_47(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_51(27, 1);
	return 1;
}

void func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_82()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

int func_83()
{
	func_84();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_84()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_87(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_86(unk_0x0031992CA618A445());
			if (func_85(iVar0) && (!func_64(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_85(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_85(int iParam0)
{
	return iParam0 < 3;
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_87(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_87(int iParam0)
{
	if (func_85(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_88(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_67(&(uParam0->f_2));
	}
	unk_0xBD1C47D856010F09(14);
	unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xD887E21676314450(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_67(&(uParam0->f_5));
				func_91(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_90(&(uParam0->f_5)) > 0.33f)
			{
				func_89(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_90(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_67(&(uParam0->f_5));
			func_91(uParam0, 1051260355);
		}
		else if (func_90(&(uParam0->f_5)) > 0.33f)
		{
			func_89(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_89(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_90(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_91(var uParam0, int iParam1)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "SHARD_ANIM_OUT");
	unk_0x32F9127910F63DFA(uParam0->f_9);
	unk_0x90495002CD46BD88(iParam1);
	unk_0x1C703A54AB4B12F6();
}

void func_92(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

void func_93(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0xEBD23F68B1A617FC(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x9BC6C9E77AAC792E("STRING");
	unk_0xDBB8FCB00B701798(iParam7);
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	unk_0xCC5EB3A492FB7D4B();
	unk_0x9BC6C9E77AAC792E(sParam5);
	unk_0x96577CAA1D1E72DB(uParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	unk_0x96577CAA1D1E72DB(iParam4);
	unk_0xCC5EB3A492FB7D4B();
	unk_0x1C703A54AB4B12F6();
	func_67(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

int func_94(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x7A6C051038031EFA(*uParam2, 0))
			{
				func_126(uParam1, 320, bParam4);
				unk_0xE236218481966790(*uParam2, unk_0x3AF262D7332EEDF5(100, 300));
				func_124(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_39(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x7A6C051038031EFA(*uParam2, 0))
			{
				if (!unk_0x90219307C9D2728D(*uParam2, 0))
				{
					unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x7A6C051038031EFA(*uParam2, 0))
			{
				func_100(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_99(uParam1->f_2, *uParam2))
				{
					if (unk_0x432757A9E7AAFA96(uParam1->f_4, 0))
					{
						if (unk_0x7CA73A79B30385F3(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0x7CA73A79B30385F3(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x90219307C9D2728D(uParam1->f_2, 0))
						{
							if (unk_0x830CAE5496B8AD6B(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0xD08ED8D7088059C5(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0x830CAE5496B8AD6B(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x1F510E862BD5CD12(uParam1->f_2, 6))
									{
										if (unk_0x5DA901F6AE7EB392())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x830CAE5496B8AD6B(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0xD08ED8D7088059C5(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0x830CAE5496B8AD6B(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0xD08ED8D7088059C5(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_98(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_98(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_98(&uLocal_45, 0, 0);
			if (!unk_0x7A6C051038031EFA(*uParam2, 0))
			{
				if (unk_0xA761A0B6072010C8(uParam1->f_8))
				{
					unk_0x0C4BDC77192798AE(&(uParam1->f_8));
				}
				unk_0xEB9B39274C401888(*uParam2, 1);
				unk_0x173325AAF2CD766A(&uVar0);
				unk_0x26CD819CC5B5E17A(0, 5000);
				unk_0x53E150F8F0AD7101(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0xCD660EFEFB62BC2F(0, 0);
				unk_0xF81AD3C937316CCA(uVar0);
				unk_0xEDD5437C49B7B1F8(*uParam2, uVar0);
				unk_0x1F5B34056C3CB80B(&uVar0);
				unk_0x390D16BCBFB23E1A(*uParam2, 1);
				func_193(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0x27FC4121D73AF604();
			}
			else
			{
				*uParam0 = 4;
				unk_0x27FC4121D73AF604();
			}
			if (unk_0xA761A0B6072010C8(uParam1->f_8))
			{
				unk_0x0C4BDC77192798AE(&(uParam1->f_8));
			}
			func_95(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0xE953D49DA08BEC4C(uParam3->f_6))
			{
				if (unk_0xA761A0B6072010C8(uParam3->f_5))
				{
					unk_0x0C4BDC77192798AE(&(uParam3->f_5));
				}
				func_149(uParam1);
				func_39(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x7A6C051038031EFA(*uParam2, 0))
			{
				unk_0x056049D9941BD43D(uParam2);
				if (unk_0xA761A0B6072010C8(uParam1->f_8))
				{
					unk_0x0C4BDC77192798AE(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0x3E770560EE4A1F19(unk_0xED1168B8D2D313FA(), 2, 0);
				unk_0x1E0B5FFAC5A97BE8(unk_0xED1168B8D2D313FA(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_95(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		uParam1->f_2 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
		unk_0xE236218481966790(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x3AF262D7332EEDF5(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x8C28FC0D53E1B8D9(iParam0, 1067030938, 1069547520) };
	}
	unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_1), 3);
	unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_1), 4);
	Var0 = { unk_0x25EAC857A309B627(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x4BE9AB39547B4323(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xA761A0B6072010C8(uParam1->f_5))
		{
			uParam1->f_5 = func_96(uParam1->f_6);
			unk_0x50B5259DFC71B8EC(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x50B5259DFC71B8EC(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_96(var uParam0)
{
	var uVar0;
	
	if (!unk_0x04555E252AB94D48(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x98CE01851C964426(uParam0);
	unk_0x067D86058370B7EB(uVar0, func_97(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
	return uVar0;
}

float func_97(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
		{
			return;
		}
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0x59FA14CE9944B95A(iParam2);
		unk_0xC84CB7879942C3BA("FocusIn");
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xC938B5CB1FF90CA1(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x996B09F758C57FBE(sVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x996B09F758C57FBE(uParam0->f_3))
	{
		if (func_257(uParam0->f_3))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
	if (!unk_0x996B09F758C57FBE(sVar0))
	{
		if (func_257(sVar0))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
}

int func_99(var uParam0, int iParam1)
{
	if (!unk_0x8682D8A6269E52C9(iParam1))
	{
		if (!unk_0x830CAE5496B8AD6B(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0xAD2B8127B12C130D(unk_0xF177E0DA126D71C8(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_101(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_101(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_102(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_102(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		func_98(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_103(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_103(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x154C8F16279FF849())
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x996B09F758C57FBE(iVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_257(iVar0))
	{
		func_123();
	}
	if (func_122(iParam1) && unk_0x8CAADD2AA5EDCAAC(iParam1))
	{
		iVar1 = 0;
		if (unk_0x269F274F1955DE87(iParam1))
		{
			unk_0x74C81A83411D14D3(unk_0x4849801147A2BA1E(iParam1));
			unk_0x0FA8F26FCFDFF803(unk_0x4849801147A2BA1E(iParam1), 1);
			if (unk_0x5C428867F8F5FE0C(unk_0x4849801147A2BA1E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x036E1D5EA494CEB2(iParam1))
		{
			unk_0x932BE5F88FA96F6D(unk_0x89C1AD6422029361(iParam1));
			if (unk_0x896AC94320989D6D(unk_0x89C1AD6422029361(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam1))
		{
			unk_0x34CD6EBB80DC5D6B(unk_0x0B603933F47AABAA(iParam1));
			if (unk_0x3754E63199967977(unk_0x0B603933F47AABAA(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x154C8F16279FF849())
		{
			if (func_117(uParam0, bParam7, bParam9, 0))
			{
				func_113(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_107(iVar0))
				{
					if ((unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0)) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if ((iVar1 && !unk_0x068C69D0643C4B95()) && uParam8)
						{
							if (!func_257(iVar0))
							{
								func_233(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
								{
									func_106(1);
								}
							}
						}
					}
				}
			}
			else if (func_107(iVar0))
			{
				if (unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0))
				{
					if (((unk_0x4096DB4B0B8A982B(iParam1) && iVar1) && !unk_0x068C69D0643C4B95()) && uParam8)
					{
						if (!func_257(iVar0))
						{
							func_233(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
							{
								func_106(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x996B09F758C57FBE(sParam5))
			{
				if (func_257(sParam5))
				{
					unk_0x8C361F37C04084F4(1);
				}
			}
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
			{
				if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
				{
					func_98(uParam0, iVar0, 1);
				}
			}
			if (!func_117(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_105(uParam0))
				{
					func_104(uParam0);
				}
			}
		}
	}
	else
	{
		func_98(uParam0, iVar0, 0);
	}
}

void func_104(var uParam0)
{
	if (func_122(unk_0x0031992CA618A445()))
	{
		unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0xC938B5CB1FF90CA1(1);
		unk_0x59FA14CE9944B95A(0);
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		unk_0xC84CB7879942C3BA("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_105(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x31CD6E9F83C10233()
		{
			return 1;
		}
	}
	return 0;
}

int func_106(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104439.f_9910.f_100++;
			}
			return Global_104439.f_9910.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104439.f_9910.f_101++;
			}
			return Global_104439.f_9910.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104439.f_9910.f_102++;
			}
			return Global_104439.f_9910.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_107(char* sParam0)
{
	if (!func_108(1, 1, 0))
	{
		if ((!unk_0x0BD3CCFB6C6CFA91(sParam0) && func_257(sParam0)) || func_257("CMN_HINT"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_106(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_106(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_106(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_108(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		return 0;
	}
	if (func_33(0))
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x7832F791572D5809(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
			{
				return 0;
			}
			if (unk_0xCE65BA0D5E39A5CB())
			{
				return 0;
			}
		}
	}
	if (func_111() || func_110(Global_1641087.f_116067))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xCF432047F5AFBA06(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), func_109(unk_0x0031992CA618A445(), 0)) || (unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) == joaat("apc") && func_109(unk_0x0031992CA618A445(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
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

bool func_110(int iParam0)
{
	return iParam0 == 51;
}

var func_111()
{
	return Global_2445582.f_13;
}

bool func_112()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

void func_113(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316441 == 1)
	{
		return;
	}
	if (unk_0x7A6C051038031EFA(iParam1, 0))
	{
		func_98(uParam0, 0, 0);
	}
	if (func_116(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x269F274F1955DE87(iParam1))
		{
			iVar0 = unk_0x4849801147A2BA1E(iParam1);
			if (!unk_0x90219307C9D2728D(iVar0, 0))
			{
				if (unk_0x972B5786EA49FE1A(iVar0))
				{
					if (!func_114())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA7D1AE4528FB3B74(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xC938B5CB1FF90CA1(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xF539A9F1BCA8C0E9(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iParam1, -1, iVar3, iVar4);
	unk_0xF177BD202464664F("FocusIn", 0, 0);
	unk_0xFD69BDF108B32E5B("HINT_CAM_SCENE");
	unk_0x18F1BFAF88AC511B(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x31CD6E9F83C10233();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_114()
{
	return func_115(unk_0x3D35F9864E4640B1());
}

int func_115(int iParam0)
{
	if (unk_0xE9559A12052415BE(unk_0xD33F4BC17EB987E5(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_116(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_117(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_121(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_105(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (!func_121(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x31CD6E9F83C10233();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (!func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_120(bParam1, bParam2, bParam3) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_121(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (func_119(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_105(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_108(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_123();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_120(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x036E1D5EA494CEB2(iParam0))
		{
			if (unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x269F274F1955DE87(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x4849801147A2BA1E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_123()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2314, 4);
}

void func_124(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_375(uParam0);
	}
	if (!unk_0xA761A0B6072010C8(uParam0->f_8))
	{
		uParam0->f_8 = func_125(*uParam1, 0, 0);
	}
	if (!unk_0x996B09F758C57FBE(sParam2))
	{
		unk_0x50B5259DFC71B8EC(uParam0->f_8, sParam2);
	}
}

int func_125(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE80C2D6BF636C6C4(iParam0);
	if (unk_0x036E1D5EA494CEB2(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_97(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x8D60956768933D7C(uVar0, bParam1);
		}
		else
		{
			unk_0xEB934A06DDA5027D(uVar0, 2);
		}
	}
	else if (unk_0x269F274F1955DE87(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_97(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
		unk_0x8D60956768933D7C(uVar0, bParam1);
	}
	else if (unk_0xC207EA827E8CD735(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_97(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_126(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
	{
		unk_0xEB9B39274C401888(uParam0->f_3, 0);
		unk_0xEA607D64503E7F21(uParam0->f_3);
		unk_0x67ABC034CBFBD349(uParam0->f_3, 3, 0);
		unk_0xA8A16396F3E7CD41(uParam0->f_3, 17, 1);
		unk_0xD706D9D85701BFBD(uParam0->f_3);
		if ((func_130(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_129(uParam0->f_29)) && !bParam2)
		{
			func_127(uParam0);
		}
		else
		{
			unk_0x67ABC034CBFBD349(uParam0->f_3, 1024, 1);
			unk_0x67ABC034CBFBD349(uParam0->f_3, 131072, 1);
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0x471E558A661279DE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x9BE63CB00B240063(0, 1193033728, 0);
			}
			else
			{
				unk_0x53E150F8F0AD7101(0, unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
			}
			unk_0xCD660EFEFB62BC2F(0, 0);
			unk_0xF81AD3C937316CCA(uVar0);
			unk_0xEDD5437C49B7B1F8(uParam0->f_3, uVar0);
			unk_0x1F5B34056C3CB80B(&uVar0);
		}
		unk_0x390D16BCBFB23E1A(uParam0->f_3, 1);
	}
}

void func_127(var uParam0)
{
	var uVar0;
	
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
	{
		if (func_116(func_128(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x5082D1A6D078DB20(uParam0->f_3, 84.9058f);
				unk_0x390D16BCBFB23E1A(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x5082D1A6D078DB20(uParam0->f_3, 68.3138f);
				unk_0x390D16BCBFB23E1A(uParam0->f_3, 1);
			}
			else
			{
				unk_0x9BE63CB00B240063(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xD706D9D85701BFBD(uParam0->f_3);
			unk_0x1F5B34056C3CB80B(&uVar0);
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0x471E558A661279DE(0, 0, 0);
			unk_0xCD660EFEFB62BC2F(0, 0);
			unk_0x276406356F4120BB(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xE33690632607375D(0, 1);
				unk_0x276406356F4120BB(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xCBA311EF4F32CB8A(0, 151.7794f, 0);
				unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x2CA980D6553D4E80(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x2CA980D6553D4E80(0, uParam0->f_29, 15f, 20000);
				unk_0x9BE63CB00B240063(0, 1193033728, 0);
			}
			else
			{
				unk_0xBE0E7D38FE7C495C(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x6FDAA51051AB12D5(uParam0->f_29, 15f, 1))
			{
				unk_0x2CA980D6553D4E80(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x9BE63CB00B240063(0, 1193033728, 0);
			}
			unk_0xF81AD3C937316CCA(uVar0);
			unk_0xEDD5437C49B7B1F8(uParam0->f_3, uVar0);
			unk_0x1F5B34056C3CB80B(&uVar0);
		}
		unk_0x390D16BCBFB23E1A(uParam0->f_3, 1);
	}
}

Vector3 func_128()
{
	struct<3> Var0;
	
	return Var0;
}

int func_129(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_130(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x7A6C051038031EFA(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam0, 1), Param1, iParam4);
}

char* func_131(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_132()
{
	if (unk_0x2A3398C6222EB190(unk_0x3AF262D7332EEDF5(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_133(var uParam0, bool bParam1)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
	{
		if (func_142(uParam0) && func_138(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_137(uParam0, 2097152))
				{
					func_134(uParam0);
				}
			}
			else
			{
				func_134(uParam0);
			}
		}
		else if (!func_142(uParam0))
		{
			if (bParam1)
			{
				if (func_137(uParam0, 2097152))
				{
					if (unk_0xF57D21B49780A7A8(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xF57D21B49780A7A8(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134(var uParam0)
{
	struct<3> Var0;
	
	if (func_129(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_135(uParam0, Var0);
}

void func_135(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0) && unk_0x26D7BF365BA84F9C(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xCD59EF1D7098A4B4(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xCD59EF1D7098A4B4(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_136(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x89E71378750944C1(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x1410333E912D4EC6(Var0, Param1, 0) < unk_0x1410333E912D4EC6(Var3, Param1, 0) && unk_0x386E375BE12CA08D(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x89E71378750944C1(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x1410333E912D4EC6(Var0, Param1, 0) >= unk_0x1410333E912D4EC6(Var3, Param1, 0) && unk_0x386E375BE12CA08D(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x89E71378750944C1(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x89E71378750944C1(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_136(int iParam0, int iParam1)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0) && !unk_0x7A6C051038031EFA(iParam1, 0))
	{
		if (unk_0x26D7BF365BA84F9C(iParam0, iParam1))
		{
			if (unk_0x3251C2B06497863C(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3251C2B06497863C(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3251C2B06497863C(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3251C2B06497863C(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_137(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_235(uParam0->f_81, iParam1) && !func_38());
	}
	return func_38();
}

int func_138(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0xA32DC7E16AD1DFB7(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_33(1))
			{
				func_31(0);
			}
			if (func_25())
			{
				func_141();
				return 1;
			}
			else if (func_139(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 0, 256);
				}
				else
				{
					unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 0, 0);
				}
			}
			unk_0x3D208D7A2B28C139(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_139(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC9621A9AD282CC14(0, 71, 1);
	unk_0xC9621A9AD282CC14(0, 72, 1);
	unk_0xC9621A9AD282CC14(0, 76, 1);
	unk_0xC9621A9AD282CC14(0, 73, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	if (bParam5)
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
	unk_0xC9621A9AD282CC14(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
	}
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 86, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 138, 1);
	unk_0xC9621A9AD282CC14(0, 136, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 107, 1);
	unk_0xC9621A9AD282CC14(0, 110, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 87, 1);
	unk_0xC9621A9AD282CC14(0, 88, 1);
	unk_0xC9621A9AD282CC14(0, 113, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 117, 1);
	unk_0xC9621A9AD282CC14(0, 118, 1);
	unk_0xC9621A9AD282CC14(0, 119, 1);
	unk_0xC9621A9AD282CC14(0, 131, 1);
	unk_0xC9621A9AD282CC14(0, 132, 1);
	unk_0xC9621A9AD282CC14(0, 123, 1);
	unk_0xC9621A9AD282CC14(0, 126, 1);
	unk_0xC9621A9AD282CC14(0, 129, 1);
	unk_0xC9621A9AD282CC14(0, 130, 1);
	unk_0xC9621A9AD282CC14(0, 133, 1);
	unk_0xC9621A9AD282CC14(0, 134, 1);
	unk_0x36EF10C45CB5F97A();
	func_140(iParam0);
	if ((unk_0x31CD6E9F83C10233() - Global_29) > 500)
	{
		unk_0x0821297CFC3D8B81(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x31CD6E9F83C10233();
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x229F35E7CDDBF757(unk_0x38A3CC71471EC547(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_140(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x51C1CCFBBE8CC4D1(iParam0))
		{
			if (unk_0x6753D44917FA47E9(iParam0))
			{
				unk_0x0323C8DAEC297D2A(iParam0, 0);
			}
		}
	}
}

void func_141()
{
	if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
	{
		unk_0xC1352A845590F32D(unk_0x3D35F9864E4640B1());
	}
}

int func_142(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
		{
			if (unk_0xA32DC7E16AD1DFB7(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_143(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_235(uParam0->f_55, 1))
	{
		func_231(&(uParam0->f_55), 1);
	}
}

void func_144(bool bParam0)
{
	func_147();
	unk_0x27FC4121D73AF604();
	if (bParam0)
	{
		func_193(&Local_859, 105, 1, 0, 0);
	}
	else if (Local_859.f_56 < Local_859.f_58)
	{
		if (!unk_0x8682D8A6269E52C9(Local_859.f_3))
		{
			func_145(Local_859.f_3, "GENERIC_INSULT_MED", Local_859.f_145, 4);
		}
	}
	else if (Local_859.f_56 >= Local_859.f_59)
	{
		if (!unk_0x8682D8A6269E52C9(Local_859.f_3))
		{
			func_145(Local_859.f_3, "TAXI_GOOD", Local_859.f_145, 4);
		}
	}
	else if (!unk_0x8682D8A6269E52C9(Local_859.f_3))
	{
		func_145(Local_859.f_3, "GENERIC_THANKS", Local_859.f_145, 4);
	}
	func_231(&(Local_859.f_81), 2097152);
	func_66(&Local_859, 16, 4f, 0);
}

void func_145(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x90A3B3322B687517(uParam0, sParam1, uParam2, func_146(iParam3), 0);
}

int func_146(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_147()
{
	Global_14611 = 0;
	func_148();
}

void func_148()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_149(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_150(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_39(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_39(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_150(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

int func_151(var uParam0, int iParam1)
{
	if (func_50(uParam0) == 2)
	{
		if (unk_0xF041E50CF58AF6F9(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_153(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) < 1) && func_152(1, 1, 1)) && unk_0xB0264CE056EC6EF9(uParam0->f_4))
		{
			return func_138(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xF041E50CF58AF6F9(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) < 1) && func_152(1, 1, 1)) && unk_0xB0264CE056EC6EF9(uParam0->f_4))
	{
		return func_138(uParam0, 1, iParam1);
	}
	return 0;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8CD86DB54E1E0747())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			return 0;
		}
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (bParam0)
		{
			if (unk_0x7A6C051038031EFA(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0x3251C2B06497863C(iVar0, -1, 0) != unk_0x0031992CA618A445())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7A6C051038031EFA(iVar0, 0))
		{
			if (unk_0x4F3A65A97120614D(iVar0) < 0.95f || unk_0x4F3A65A97120614D(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!unk_0x99494FDEBA30D9AF(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

float func_153(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

float func_154()
{
	float fVar0;
	
	fVar0 = unk_0x38A3CC71471EC547(Local_859.f_4);
	if (fVar0 >= 5f)
	{
		return (fVar0 * 0.5f);
	}
	return 6f;
}

void func_155(var uParam0, float fParam1, float fParam2)
{
	if (func_142(uParam0) && func_235(uParam0->f_44, 4))
	{
		if ((unk_0xBBA75C4729CDDA2C(uParam0->f_4) || unk_0x38A3CC71471EC547(uParam0->f_4) < 3f) && func_160(uParam0))
		{
			if (!func_159(uParam0, 2))
			{
				func_157(uParam0, 2);
			}
			else if (func_142(uParam0))
			{
				if (func_371(uParam0, 2) > fParam1 && !func_159(uParam0, 14))
				{
					if (func_27())
					{
						func_193(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_193(uParam0, 48, 1, 0, 0);
					}
					func_66(uParam0, 2, 0, 0);
					if (func_159(uParam0, 10))
					{
						func_66(uParam0, 10, 0, 0);
					}
				}
				if (!func_159(uParam0, 3))
				{
					func_66(uParam0, 3, 0, 0);
				}
				else if (func_371(uParam0, 3) >= fParam2)
				{
					func_156(uParam0, 3, 0);
					func_282(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_159(uParam0, 2))
			{
				func_156(uParam0, 2, 0);
			}
			if (func_159(uParam0, 3))
			{
				func_156(uParam0, 3, 0);
			}
		}
	}
}

void func_156(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_89(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_89(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_157(var uParam0, int iParam1)
{
	func_158(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_158(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_67(uParam0);
	}
}

bool func_159(var uParam0, int iParam1)
{
	return func_7(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_160(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0x3251C2B06497863C(uParam0->f_4, -1, 0) == unk_0x0031992CA618A445())
		{
			return 1;
		}
	}
	return 0;
}

void func_161(var uParam0)
{
	if (func_163(uParam0))
	{
		func_162(uParam0);
	}
}

void func_162(var uParam0)
{
	if (unk_0x2CD3BB84FDB768C9() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x885DE9EE2AE89A2A();
			func_156(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_371(uParam0, 20) > 3f)
				{
					func_193(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_235(uParam0->f_81, 262144) || !func_235(uParam0->f_81, 1048576))
				{
					if (func_371(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_193(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_235(uParam0->f_82, 67108864))
				{
					if (func_371(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_193(uParam0, 85, 1, 0, 0);
						func_156(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_371(uParam0, 20) > 8f)
				{
					func_193(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_235(uParam0->f_81, 262144) || func_235(uParam0->f_82, 67108864))
			{
				if (!func_159(uParam0, 22))
				{
					func_157(uParam0, 22);
				}
			}
			if (func_159(uParam0, 22) && func_371(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_235(uParam0->f_81, 1048576))
					{
						func_193(uParam0, 84, 1, 0, 0);
						func_156(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_235(uParam0->f_82, 134217728))
					{
						func_193(uParam0, 85, 1, 0, 0);
						func_156(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_163(var uParam0)
{
	return uParam0->f_120;
}

void func_164()
{
	if (!func_235(Local_859.f_44, 1))
	{
		switch (Local_859.f_412)
		{
			case 0:
				if (unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) >= 1)
				{
					if (func_371(&Local_859, 9) > 1f)
					{
						func_168(&Local_859, unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()));
						func_66(&Local_859, 9, 0, 0);
						if (unk_0xA761A0B6072010C8(Local_859.f_9))
						{
							unk_0x18EC814D577B92CE(Local_859.f_9, 0);
							unk_0xE4E08EF8CF4469E9(Local_859.f_9, 0);
						}
						Local_859.f_140 = 1;
						Local_859.f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_38() && func_371(&Local_859, 9) > 4f)
				{
					func_193(&Local_859, 52, 1, 0, 0);
					Local_859.f_412 = 2;
				}
				break;
			
			case 2:
				if (func_167("TAXI_OBJ_POL", 0, 0))
				{
					Local_859.f_412 = 3;
				}
				else if (unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) < 1)
				{
					Local_859.f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x587694641947BA55(unk_0xED1168B8D2D313FA(), func_166(&Local_859)))
				{
					func_168(&Local_859, unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()));
					func_39(6, 0);
				}
				if (unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) < 1)
				{
					if (func_167("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x27FC4121D73AF604();
					}
					if (unk_0xA761A0B6072010C8(Local_859.f_9))
					{
						unk_0x18EC814D577B92CE(Local_859.f_9, 255);
						unk_0xE4E08EF8CF4469E9(Local_859.f_9, 1);
					}
					Local_859.f_140 = 0;
					Local_859.f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_38())
				{
					func_39(7, func_166(&Local_859));
					func_168(&Local_859, 0);
					Local_859.f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_38())
				{
					func_165(&Local_1566, -1, 4);
					Local_859.f_412 = 0;
				}
				break;
			}
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_166(var uParam0)
{
	return uParam0->f_106;
}

bool func_167(char* sParam0, int iParam1, int iParam2)
{
	unk_0xDDF591880CC70341(sParam0);
	if (iParam1 == 1)
	{
		unk_0x7C8A7ECFBAD2C8C4(iParam2);
	}
	return unk_0xD140B300704DB2C2();
}

void func_168(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_169(var uParam0, var uParam1)
{
	unk_0x00B0AABF6D593141(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_170(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
		{
			if (!unk_0xA32DC7E16AD1DFB7(uParam0->f_3, uParam0->f_4, 1) && !unk_0x292D1BF190062D1C(uParam0->f_3))
			{
				func_282(uParam0, "Passenger left car.", 9);
			}
			else if (func_182(uParam0))
			{
				if (func_167("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xEA8C7331F449F129("TAXI_OBJ_PICKUP");
				}
				if (unk_0xF9FC07CC13402AEF())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
				{
				}
				func_171(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_171(var uParam0, bool bParam1)
{
	func_181(uParam0, uParam0->f_3);
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0xA32DC7E16AD1DFB7(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_159(uParam0, 14))
			{
				if (func_38())
				{
					func_180(1);
				}
				func_179(uParam0, 11, 1);
				func_174(uParam0, 1);
				func_66(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_142(uParam0))
				{
					if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
					{
					}
					if (unk_0x90219307C9D2728D(uParam0->f_2, 0))
					{
						if (func_371(uParam0, 15) > 5f)
						{
							func_66(uParam0, 15, 0f, 1);
						}
					}
					if (func_371(uParam0, 14) > 20f)
					{
						func_282(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_371(uParam0, 14) > 20f)
				{
					if (func_172(uParam0->f_4, 1) > 40f)
					{
						func_282(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_282(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_172(int iParam0, int iParam1)
{
	return func_173(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), iParam0, iParam1);
}

float func_173(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Var3, iParam2);
}

void func_174(var uParam0, bool bParam1)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xA761A0B6072010C8(uParam0->f_8))
			{
				unk_0x18EC814D577B92CE(uParam0->f_8, 0);
				unk_0xE4E08EF8CF4469E9(uParam0->f_8, 0);
				func_178(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA761A0B6072010C8(uParam0->f_9))
			{
				unk_0x18EC814D577B92CE(uParam0->f_9, 0);
				unk_0xE4E08EF8CF4469E9(uParam0->f_9, 0);
				unk_0x27FC4121D73AF604();
				if (func_142(uParam0))
				{
					func_193(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_178(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_175(uParam0, 0, 0);
		}
		else if (unk_0xA761A0B6072010C8(uParam0->f_10))
		{
			unk_0x0C4BDC77192798AE(&(uParam0->f_10));
			if (unk_0xA761A0B6072010C8(uParam0->f_8))
			{
				unk_0x18EC814D577B92CE(uParam0->f_8, 255);
				unk_0xE4E08EF8CF4469E9(uParam0->f_8, 1);
			}
			else if (unk_0xA761A0B6072010C8(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x18EC814D577B92CE(uParam0->f_9, 0);
					unk_0xE4E08EF8CF4469E9(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x18EC814D577B92CE(uParam0->f_9, 255);
					unk_0xE4E08EF8CF4469E9(uParam0->f_9, 1);
				}
			}
			unk_0x27FC4121D73AF604();
		}
	}
}

void func_175(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_375(uParam0);
	}
	if (!unk_0xA761A0B6072010C8(uParam0->f_10))
	{
		uParam0->f_10 = func_125(uParam0->f_4, 1, 0);
		unk_0x50B5259DFC71B8EC(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xE4E08EF8CF4469E9(uParam0->f_10, 1);
		func_176(uParam0);
		if (bParam2)
		{
			unk_0x27FC4121D73AF604();
			func_193(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_176(var uParam0)
{
	func_66(uParam0, 14, 0, 0);
	func_177();
}

void func_177()
{
	int iVar0;
	
	iVar0 = unk_0x7899A2987EB03783();
	if (unk_0x432757A9E7AAFA96(iVar0, 0))
	{
		unk_0x71CE8B25981385FD(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_178(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_235(*uParam1, iParam2))
	{
		unk_0x27FC4121D73AF604();
		func_193(uParam0, iParam3, 1, 0, 0);
		func_231(uParam1, iParam2);
	}
}

void func_179(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_180(int iParam0)
{
	Global_16756 = iParam0;
}

void func_181(var uParam0, int iParam1)
{
	if (unk_0x76B3C79DE564AFC6(iParam1))
	{
		if (!unk_0x8682D8A6269E52C9(iParam1))
		{
			if (unk_0x564AF6CD09937A47(unk_0x3D35F9864E4640B1()))
			{
				if ((unk_0x1BED922C44D84D3A(iParam1, joaat("weapon_stungun"), 0) || unk_0x1BED922C44D84D3A(iParam1, 0, 2)) || unk_0x1BED922C44D84D3A(iParam1, 0, 1))
				{
					func_282(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x7415F7E0896D14F5(unk_0x3D35F9864E4640B1());
			}
		}
	}
}

int func_182(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0x3251C2B06497863C(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_159(uParam0, 14))
			{
				func_183(uParam0);
			}
			func_174(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0)
{
	func_156(uParam0, 14, 0);
	func_156(uParam0, 15, 0);
	func_185();
	if (func_184())
	{
		func_180(0);
	}
}

int func_184()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_185()
{
	var uVar0;
	
	uVar0 = unk_0x7899A2987EB03783();
	if (unk_0x432757A9E7AAFA96(uVar0, 0))
	{
		unk_0x71CE8B25981385FD(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_186(var uParam0)
{
	func_189(uParam0, 1000);
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x3000ECF14A659126(uParam0->f_3);
		unk_0x3933C434ECC3BB69(uParam0->f_3, unk_0x0031992CA618A445(), 0);
	}
	func_187();
	func_183(uParam0);
}

void func_187()
{
	Global_14611 = 0;
	func_188();
}

void func_188()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_189(var uParam0, int iParam1)
{
	if (unk_0x2A3EA4C0BCED85F2(*uParam0))
	{
		unk_0x46B35AD2F641A4A3(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x087893C6FCE21842(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
	}
}

void func_190()
{
	func_231(&(Local_859.f_55), 2);
	func_231(&(Local_859.f_55), 4);
	func_231(&(Local_859.f_55), 16);
	func_231(&(Local_859.f_55), 64);
	func_231(&(Local_859.f_55), 256);
	func_231(&(Local_859.f_55), 512);
	func_231(&(Local_859.f_55), 1024);
	func_231(&(Local_859.f_55), 2048);
	func_231(&(Local_859.f_55), 4096);
	func_231(&(Local_859.f_55), 1073741824);
	func_231(&(Local_859.f_100), 8);
	func_231(&(Local_859.f_100), 2048);
	func_231(&(Local_859.f_100), 256);
	func_231(&uLocal_1637, 2);
	func_157(&Local_859, 7);
}

void func_191(var uParam0)
{
	unk_0x7415F7E0896D14F5(unk_0x3D35F9864E4640B1());
	unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
	func_189(uParam0, 1000);
}

var func_192(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_97(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
	return uVar0;
}

void func_193(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_66(uParam0, 16, 4f, 0);
		if (func_194(uParam0))
		{
			func_36();
		}
	}
	func_236(uParam0, iParam2, bParam3);
}

int func_194(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_38())
	{
		Var6 = { func_196() };
		if (!unk_0x0BD3CCFB6C6CFA91(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xB3404E397FF56B3B(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_195(&Var0);
			if (unk_0xB3404E397FF56B3B(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_195(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_196()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

Vector3 func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -59.3352f, 6524.735f, 30.4908f;
		
		case 1:
			return -132.9203f, 6376.91f, 31.18f;
		
		case 2:
			return -300.9561f, 6256.123f, 30.4934f;
		
		case 3:
			return -697.4664f, 5802.419f, 16.3311f;
		
		case 4:
			return -570.0295f, 5333.112f, 69.2148f;
		
		case 5:
			return -1578.767f, 5195.218f, 2.98937f;
		
		case 6:
			return -2192.899f, 4293.567f, 48.177f;
		
		case 7:
			return -1308.83f, 2507.66f, 20.92f;
		
		case 8:
			return -2558.793f, 2317.307f, 32.2157f;
		
		case 9:
			return -2241.69f, 385.825f, 173.6019f;
		
		case 10:
			return -3047.286f, 615.7632f, 6.3175f;
		
		case 11:
			return -3427.014f, 967.4479f, 7.315f;
		
		case 12:
			return -1123.343f, 2682.373f, 17.7356f;
		
		case 13:
			return -121.4933f, 1895.286f, 196.3327f;
		
		case 14:
			return 593.7659f, 2744.095f, 41.0225f;
		
		case 15:
			return 1219.92f, 2726.274f, 37.0041f;
		
		case 16:
			return -201.7949f, 3934.594f, 33.56364f;
		
		case 17:
			return 1584.545f, 6451.589f, 24.319f;
		
		case 18:
			return 1737.225f, 6415.12f, 34.0373f;
		
		case 19:
			return 1653.487f, 4850.271f, 41.0103f;
		
		case 20:
			return 2166.326f, 4670.86f, 32.24834f;
		
		case 21:
			return 2304.707f, 5761.063f, 142.263f;
		
		case 22:
			return 2242.456f, 5153.376f, 56.3431f;
		
		case 23:
			return 3351.297f, 5153.125f, 18.9279f;
		
		case 24:
			return 3855.812f, 4463.865f, 1.7019f;
		
		case 25:
			return 2392.035f, 4296.561f, 33.8303f;
		
		case 26:
			return -167.1902f, -342.5854f, 33.6663f;
		
		case 27:
			return -1870.639f, -339.964f, 56.0797f;
		
		case 28:
			return -1656.636f, -1038.197f, 12.1523f;
		
		case 29:
			return -1157.252f, -1424.156f, 3.7189f;
		
		case 30:
			return -280.5858f, -1915.339f, 28.9458f;
		
		case 31:
			return 354.0562f, -2120.609f, 14.8566f;
		
		case 32:
			return 954.7517f, -2010.277f, 29.2413f;
		
		case 33:
			return 2578.211f, -291.1939f, 92.0786f;
		
		case 34:
			return 1118.531f, -630.3503f, 55.7513f;
		
		case 35:
			return -99.4315f, 359.0916f, 111.8854f;
		
		case 36:
			return 178.1905f, 702.915f, 206.0482f;
		
		case 37:
			return -664.351f, 311.5536f, 82.0848f;
		
		case 38:
			return -331.9954f, 1389.257f, 339.8977f;
		
		case 39:
			return 1042.35f, 700.06f, 157.83f;
		
		case 40:
			return 2328.336f, 2542.247f, 45.5186f;
		
		case 41:
			return 727.8768f, 4188.966f, 39.70889f;
		
		case 42:
			return 1501.727f, 3775.82f, 32.5121f;
		
		case 43:
			return 1894.976f, 3712.496f, 31.7588f;
		
		case 44:
			return 1769.103f, 3339.951f, 40.2607f;
		
		case 45:
			return 437.4482f, 3560.369f, 32.2387f;
		
		case 46:
			return -503.3234f, 30.6442f, 43.7251f;
		
		case 47:
			return 164.496f, -975.3979f, 29.0917f;
		
		case 48:
			return -1721.108f, -214.6897f, 56.5442f;
		
		case 49:
			return -11.903f, -152.7058f, 55.619f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -36.6529f, 6521.831f, 30.4908f;
		
		case 1:
			return -120.6537f, 6398.326f, 30.4626f;
		
		case 2:
			return -284.8858f, 6258.993f, 30.297f;
		
		case 3:
			return -712.0081f, 5781.85f, 16.448f;
		
		case 4:
			return -551.7639f, 5404.583f, 64.5437f;
		
		case 5:
			return -1573.932f, 5149.518f, 19.02919f;
		
		case 6:
			return -2212.51f, 4275.911f, 46.7804f;
		
		case 7:
			return -1301.802f, 2507.944f, 20.4695f;
		
		case 8:
			return -2537.341f, 2321.831f, 32.0604f;
		
		case 9:
			return -2281.83f, 403.6109f, 173.4669f;
		
		case 10:
			return -3041.436f, 607.0844f, 6.4887f;
		
		case 11:
			return -3233.872f, 967.8956f, 12.0138f;
		
		case 12:
			return -1122.203f, 2673.213f, 17.1472f;
		
		case 13:
			return -128.3674f, 1931.456f, 195.5282f;
		
		case 14:
			return 592.2542f, 2737.414f, 41.0505f;
		
		case 15:
			return 1210.234f, 2699.729f, 37.0059f;
		
		case 16:
			return -224.543f, 3898.723f, 36.39012f;
		
		case 17:
			return 1581.557f, 6439.348f, 23.8881f;
		
		case 18:
			return 1727.557f, 6396.93f, 33.575f;
		
		case 19:
			return 1661.567f, 4851.506f, 40.8905f;
		
		case 20:
			return 2105.951f, 4716.417f, 40.04f;
		
		case 21:
			return 2247.163f, 5567.262f, 51.5209f;
		
		case 22:
			return 2241.322f, 5180.994f, 59.2585f;
		
		case 23:
			return 3260.339f, 5145.26f, 18.5874f;
		
		case 24:
			return 3774.741f, 4463.857f, 5.4614f;
		
		case 25:
			return 2441.507f, 4297.548f, 35.64625f;
		
		case 26:
			return -163.6905f, -349.8653f, 32.9431f;
		
		case 27:
			return -1854.983f, -360.2094f, 48.2535f;
		
		case 28:
			return -1601.634f, -945.3931f, 12.1875f;
		
		case 29:
			return -1162.085f, -1414.057f, 3.8002f;
		
		case 30:
			return -240.4874f, -1859.449f, 27.7915f;
		
		case 31:
			return 386.7202f, -2148.965f, 15.2725f;
		
		case 32:
			return 942.1559f, -2055.073f, 29.1246f;
		
		case 33:
			return 2596.906f, -296.528f, 91.8872f;
		
		case 34:
			return 1172.45f, -641.2902f, 61.4465f;
		
		case 35:
			return -129.4093f, 379.0035f, 111.7795f;
		
		case 36:
			return 117.2106f, 719.4644f, 208.1559f;
		
		case 37:
			return -638.5713f, 280.6203f, 80.2992f;
		
		case 38:
			return -388.1616f, 1226.36f, 324.6421f;
		
		case 39:
			return 1038.21f, 700.512f, 157.9407f;
		
		case 40:
			return 2388.166f, 2529.152f, 45.6804f;
		
		case 41:
			return 815.8218f, 4235.264f, 51.85716f;
		
		case 42:
			return 1538.15f, 3771.104f, 33.0502f;
		
		case 43:
			return 1892.2f, 3704.36f, 31.8767f;
		
		case 44:
			return 1780.28f, 3336.798f, 40.0848f;
		
		case 45:
			return 466.1649f, 3576.027f, 32.2322f;
		
		case 46:
			return -489.8451f, 21.3197f, 43.9248f;
		
		case 47:
			return 167.8984f, -1012.48f, 28.375f;
		
		case 48:
			return -1662.528f, -226.7487f, 53.9386f;
		
		case 49:
			return -11.2343f, -140.1264f, 55.7106f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	func_203(uParam0);
	switch (uParam0->f_10)
	{
		case 0:
			fVar5 = 1f;
			break;
		
		case 1:
			fVar5 = 1.5f;
			break;
		
		case 2:
			fVar5 = 2.25f;
			break;
	}
	iVar3 = 0;
	while (iVar3 < 50)
	{
		if (iVar4 < 6)
		{
			Var0 = { func_198(iVar3) };
			fVar6 = func_201(Var0, 1);
			if (((((fVar6 < fVar5 && fVar6 >= func_200(uParam0->f_10)) && iVar3 != Global_103518[0]) && iVar3 != Global_103518[1]) && iVar3 != Global_103518[2]) && iVar3 != Global_103518[3])
			{
				uParam0->f_2[iVar4] = iVar3;
				iVar4++;
			}
		}
		iVar3++;
	}
	if (iVar4 > 0)
	{
		iVar3 = (unk_0x3AF262D7332EEDF5(0, 65535) % iVar4);
		uParam0->f_1 = uParam0->f_2[iVar3];
		uParam0->f_12 = func_201(func_198(uParam0->f_1), 1);
	}
	else
	{
		uParam0->f_1 = unk_0x3AF262D7332EEDF5(0, 50);
		uParam0->f_12 = func_201(func_198(uParam0->f_1), 1);
	}
	Global_103518[3] = Global_103518[2];
	Global_103518[2] = Global_103518[1];
	Global_103518[1] = Global_103518[0];
	Global_103518[0] = uParam0->f_1;
}

float func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.25f;
		
		case 1:
			return 1f;
		
		case 2:
			return 1.5f;
		
		default:
	}
	return 1000f;
}

float func_201(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	if (bParam3)
	{
		if (unk_0x311738D6251731D4())
		{
			iVar0 = unk_0x5314E5CEC98934C0();
		}
		else
		{
			iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_202(unk_0x3D35F9864E4640B1()), Param0));
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_202(unk_0x3D35F9864E4640B1()), Param0));
	}
	return func_150(unk_0xBBDA792448DB5A89(iVar0));
}

Vector3 func_202(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

void func_203(var uParam0)
{
	int iVar0;
	
	iVar0 = Global_103523 + 1;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	uParam0->f_10 = iVar0;
	Global_103523 = iVar0;
}

int func_204(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
		{
			if ((unk_0x292D1BF190062D1C(uParam0->f_3) && (unk_0x31CD6E9F83C10233() - iLocal_89) > 500) || unk_0xA32DC7E16AD1DFB7(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_205(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0xA32DC7E16AD1DFB7(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
			{
			}
			func_171(uParam0, 1);
			if (func_25())
			{
				unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
			}
			if (unk_0xF57D21B49780A7A8(uParam0->f_3, 2106541073) == 1 || unk_0xF57D21B49780A7A8(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x3000ECF14A659126(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x3933C434ECC3BB69(uParam0->f_3, unk_0x0031992CA618A445(), 0);
			}
		}
		else if (unk_0x587694641947BA55(unk_0xED1168B8D2D313FA(), 0))
		{
			func_229(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x1F5B34056C3CB80B(&uVar3);
				unk_0x173325AAF2CD766A(&uVar3);
				unk_0x276406356F4120BB(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x3933C434ECC3BB69(0, uParam0->f_4, 0);
				unk_0xF81AD3C937316CCA(uVar3);
				unk_0xEDD5437C49B7B1F8(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_159(uParam0, 14))
			{
				func_183(uParam0);
				func_174(uParam0, 0);
			}
			if (func_159(uParam0, 9))
			{
				func_156(uParam0, 9, 0);
				unk_0x27FC4121D73AF604();
				if (unk_0xA761A0B6072010C8(uParam0->f_8))
				{
					unk_0x18EC814D577B92CE(uParam0->f_8, 255);
					unk_0xE4E08EF8CF4469E9(uParam0->f_8, 1);
				}
			}
			if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x38A3CC71471EC547(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_228(uParam0, uParam0->f_3) > 300f)
				{
					func_282(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) != 1 || ((func_173(unk_0x0031992CA618A445(), uParam0->f_3, 1) < 20f && func_153(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_153(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_227(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_226(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_225(uParam0->f_4, uParam0->f_3);
								iVar0 = func_224(uParam0, &iVar1);
								if (!unk_0x7A6C051038031EFA(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x471E558A661279DE(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x471E558A661279DE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x386E375BE12CA08D(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x7A6C051038031EFA(iVar0, 0))
											{
												unk_0x471E558A661279DE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xD706D9D85701BFBD(uParam0->f_3);
							unk_0x2E0E5BF2A31392F4(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x5B639AB1394AB4DF(unk_0xF177E0DA126D71C8(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_160(uParam0))
							{
								unk_0xD706D9D85701BFBD(uParam0->f_3);
							}
							else if (((unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) != 1 && unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) != 0) && unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) != 7) && func_228(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x1F5B34056C3CB80B(&(uParam0->f_243));
								unk_0x173325AAF2CD766A(&(uParam0->f_243));
								unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xBE0E7D38FE7C495C(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xBE0E7D38FE7C495C(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xF81AD3C937316CCA(uParam0->f_243);
								unk_0xEDD5437C49B7B1F8(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x4CB2F72EA418C083(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x11B110DE93DCDA0C(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_173(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_223(uParam0, 1))
								{
									unk_0x3000ECF14A659126(uParam0->f_3);
									func_282(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_222(uParam0->f_4))
								{
									unk_0x3000ECF14A659126(uParam0->f_3);
									func_282(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_220(uParam0);
						if (func_228(uParam0, uParam0->f_3) < fVar4 || func_25())
						{
							if (unk_0xA32DC7E16AD1DFB7(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_207(uParam0))
								{
									func_206(uParam0);
									iLocal_89 = unk_0x31CD6E9F83C10233();
									unk_0xD6A092D1F1B9A9F1(uParam0->f_3, 26, 1);
									func_156(uParam0, 5, 0);
									unk_0x0B939DD5954815ED();
									unk_0x00B0AABF6D593141(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x1481FD3C9C94FB39(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x5B639AB1394AB4DF(unk_0xF177E0DA126D71C8(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_206(var uParam0)
{
	if (unk_0xA761A0B6072010C8(uParam0->f_8))
	{
		unk_0xE4E08EF8CF4469E9(uParam0->f_8, 0);
		unk_0x0C4BDC77192798AE(&(uParam0->f_8));
	}
}

int func_207(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_219("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0) && !unk_0x7A6C051038031EFA(uParam0->f_4, 0))
	{
		func_218();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_216(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_138(uParam0, 0, 1084227584) && func_152(1, 1, 1))
			{
				if (func_223(uParam0, 1))
				{
					iLocal_88 = unk_0x31CD6E9F83C10233();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_282(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_225(uParam0->f_4, uParam0->f_3);
				iVar9 = func_224(uParam0, &iVar10);
				if (!unk_0x7A6C051038031EFA(iVar9, 0))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						unk_0x471E558A661279DE(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x471E558A661279DE(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x386E375BE12CA08D(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x7A6C051038031EFA(iVar9, 0))
						{
							unk_0x471E558A661279DE(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var6 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var6 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_215(&(uParam0->f_409), unk_0xCD59EF1D7098A4B4(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xCD59EF1D7098A4B4(uParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_214(0, 0, 1);
				unk_0xD50199C9F3AD72E7(unk_0xF177E0DA126D71C8(uParam0->f_4, 1), 3f, 0);
				unk_0xB15893BD298F03CA(unk_0xF177E0DA126D71C8(uParam0->f_4, 1), 25f, 0);
				unk_0x8C361F37C04084F4(1);
				unk_0x27FC4121D73AF604();
				func_147();
				func_236(uParam0, 0, 0);
				Var13 = { unk_0xCD59EF1D7098A4B4(uParam0->f_4, Var6) };
				unk_0x0A69FBBF51E1A08F(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(uParam0->f_3, func_212(uParam0));
				func_211(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x9DCCF01CC7010892(*uParam0, unk_0xCD59EF1D7098A4B4(uParam0->f_4, Var0));
				unk_0x15DC0C1FBCB00FAA(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x55CC07D5416539C8(*uParam0, 1);
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				unk_0x7E54A33202605E52(uParam0->f_3, 0, 0);
				unk_0x2E0E5BF2A31392F4(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_219("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0) && !unk_0x7A6C051038031EFA(uParam0->f_4, 0))
			{
				if (!unk_0x90219307C9D2728D(uParam0->f_3, 0))
				{
					unk_0x7E3C622EB2D4D2E2(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x424767E89542F684(uParam0->f_4, func_210(uParam0->f_7), 1);
				}
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				unk_0x46B35AD2F641A4A3(*uParam0, 0);
				unk_0x46B35AD2F641A4A3(uParam0->f_1, 0);
				unk_0x31F42B23A853582E(0);
				unk_0xADE985F6BA90AED5(0, 1065353216);
				unk_0x18D7C8000EDEAAB4(800);
				unk_0x8C361F37C04084F4(1);
				unk_0x27FC4121D73AF604();
				func_147();
				func_236(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xF9FC07CC13402AEF() && !unk_0x4413A34F0AAF1146())
			{
				func_208(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
			unk_0x46B35AD2F641A4A3(*uParam0, 0);
			unk_0x46B35AD2F641A4A3(uParam0->f_1, 0);
			unk_0x31F42B23A853582E(0);
			unk_0xADE985F6BA90AED5(0, 1065353216);
			func_208(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0) && !unk_0x7A6C051038031EFA(uParam0->f_4, 0))
			{
				if (unk_0x292D1BF190062D1C(uParam0->f_3) || unk_0x90219307C9D2728D(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -1794415470) != 1 && unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -1794415470) != 0)
				{
					unk_0x2E0E5BF2A31392F4(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
	}
	unk_0x11AA938960F52423(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x4C4F62CD43971CED(1);
		unk_0x56A844FA6FE745C3(1);
	}
	func_209(23, 0);
}

void func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_25466, iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_25466, iParam0);
	}
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_211(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x2A3EA4C0BCED85F2(*uParam0))
	{
		*uParam0 = unk_0x6BE82EFE6EE60BF4(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_212(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_128() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xCD59EF1D7098A4B4(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xCD59EF1D7098A4B4(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_213(unk_0xF177E0DA126D71C8(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_213(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x5E9D1531733B27F6((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_214(int iParam0, int iParam1, int iParam2)
{
	unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 0, iParam0);
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0xB8BC2FD710896F98(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 15f);
	}
	unk_0x11AA938960F52423(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0);
	unk_0x4C4F62CD43971CED(0);
	unk_0x56A844FA6FE745C3(0);
	func_209(23, 1);
}

int func_215(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xB654849962F7FBC3(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xF645F030F8429492(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_216(int iParam0)
{
	if (func_217() && unk_0x31CD6E9F83C10233() >= iParam0 + 1000)
	{
		unk_0x8351F65655759E0C(500);
		while (!unk_0x5114FCEE2A997B95())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_31(0);
		func_187();
		return 1;
	}
	return 0;
}

int func_217()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0xD887E21676314450(0, 18) || unk_0xD887E21676314450(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	if (func_27())
	{
		unk_0xAC6C3A31619F7D8D("appInternet");
	}
	if (func_26())
	{
		unk_0xAC6C3A31619F7D8D("appCamera");
	}
	if (func_33(1))
	{
		func_31(0);
	}
}

void func_219(char* sParam0, var uParam1, int iParam2)
{
	if (unk_0x31CD6E9F83C10233() < (*uParam1 + iParam2))
	{
		return;
	}
	*uParam1 = unk_0x31CD6E9F83C10233();
}

void func_220(var uParam0)
{
	var uVar0;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
		{
			if (func_172(uParam0->f_3, 1) > 30f || func_221(uParam0))
			{
				if (unk_0xF57D21B49780A7A8(uParam0->f_3, -1794415470) == 1 || unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) == 1)
				{
					unk_0x1F5B34056C3CB80B(&uVar0);
					unk_0x173325AAF2CD766A(&uVar0);
					unk_0x3933C434ECC3BB69(0, uParam0->f_4, 0);
					unk_0xBE0E7D38FE7C495C(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x276406356F4120BB(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xF81AD3C937316CCA(uVar0);
					unk_0xEDD5437C49B7B1F8(uParam0->f_3, uVar0);
					func_282(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_221(var uParam0)
{
	if ((unk_0x38A3CC71471EC547(uParam0->f_4) > 3f && func_371(uParam0, 5) > 15f) || unk_0x95E4E33CFB8D32BE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xD5667AC07F79E531(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xD5667AC07F79E531(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xD5667AC07F79E531(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xD5667AC07F79E531(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x2076012573940835(unk_0xE9559A12052415BE(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x6C519F166B8D3A0A(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x6C519F166B8D3A0A(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x6C519F166B8D3A0A(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x6C519F166B8D3A0A(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_223(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x3251C2B06497863C(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x3251C2B06497863C(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x3251C2B06497863C(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x76B3C79DE564AFC6(iVar0[iVar4]))
			{
				if (unk_0x7A6C051038031EFA(iVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_224(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		iVar0 = unk_0x3251C2B06497863C(uParam0->f_4, 1, 0);
		if (unk_0x76B3C79DE564AFC6(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x3251C2B06497863C(uParam0->f_4, 2, 0);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x3251C2B06497863C(uParam0->f_4, 0, 0);
				if (unk_0x76B3C79DE564AFC6(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_225(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xB8B31FD7EF092667(iParam0);
	Var0 = { unk_0x4FCF41D2B316BEF6(iParam0, unk_0xF177E0DA126D71C8(iParam1, 1)) };
	if (unk_0xE9559A12052415BE(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0xE9559A12052415BE(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x386E375BE12CA08D(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x386E375BE12CA08D(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x386E375BE12CA08D(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x386E375BE12CA08D(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_226(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
	{
		if (!unk_0xDBF188DE6334F01A(uParam0->f_3) && func_172(uParam0->f_3, 1) < fParam2)
		{
			if (!func_159(uParam0, 5))
			{
				func_66(uParam0, 5, 0, 0);
			}
		}
		else if (func_159(uParam0, 5))
		{
			func_156(uParam0, 5, 0);
		}
		if (((func_371(uParam0, 5) > IntToFloat(iParam1) && unk_0x38A3CC71471EC547(uParam0->f_4) < fParam4) && !unk_0xDBF188DE6334F01A(uParam0->f_3)) || func_172(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_227(var uParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = unk_0x074C5D79DFD8396C(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x074C5D79DFD8396C(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xA8FEF376976A5F94(uParam0->f_4, iVar18) };
		Var6 = { unk_0x4FCF41D2B316BEF6(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xCD59EF1D7098A4B4(uParam0->f_4, Var6) };
	Var3 = { unk_0xCD59EF1D7098A4B4(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x5F00B59AB0A2B81A(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xEB9B39274C401888(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_173(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x229F35E7CDDBF757((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xB654849962F7FBC3(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xF645F030F8429492(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) != 1 && unk_0xF57D21B49780A7A8(uParam0->f_3, 242628503) != 0)
			{
				unk_0x1F5B34056C3CB80B(&(uParam0->f_243));
				unk_0x173325AAF2CD766A(&(uParam0->f_243));
				unk_0xBE0E7D38FE7C495C(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
				unk_0x7295DC34C4D0B923(uParam0->f_243, 1);
				unk_0xF81AD3C937316CCA(uParam0->f_243);
				unk_0xEDD5437C49B7B1F8(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x27FC4121D73AF604();
			if (uParam0->f_411 != 9)
			{
				if (!func_235(uParam0->f_44, 128))
				{
					func_193(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_145(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xD706D9D85701BFBD(uParam0->f_3);
			unk_0x43EC517AF665D2B9(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x1F5B34056C3CB80B(&(uParam0->f_243));
			unk_0x173325AAF2CD766A(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xBE0E7D38FE7C495C(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xBE0E7D38FE7C495C(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
			unk_0xF81AD3C937316CCA(uParam0->f_243);
			unk_0xEDD5437C49B7B1F8(uParam0->f_3, uParam0->f_243);
			unk_0x1F5B34056C3CB80B(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x4CB2F72EA418C083(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x11B110DE93DCDA0C(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

float func_228(var uParam0, int iParam1)
{
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		if (func_160(uParam0))
		{
			return func_173(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_229(var uParam0)
{
	func_181(uParam0, uParam0->f_3);
	if (func_160(uParam0))
	{
		if (func_159(uParam0, 14))
		{
			func_183(uParam0);
			if (unk_0xA761A0B6072010C8(uParam0->f_10))
			{
				unk_0x0C4BDC77192798AE(&(uParam0->f_10));
			}
		}
	}
	if (!func_159(uParam0, 9))
	{
		if (unk_0xA761A0B6072010C8(uParam0->f_8))
		{
			unk_0x18EC814D577B92CE(uParam0->f_8, 0);
			unk_0xE4E08EF8CF4469E9(uParam0->f_8, 0);
		}
		func_66(uParam0, 9, 0, 0);
		func_230("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_230(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 1);
}

void func_231(var uParam0, int iParam1)
{
	func_232(uParam0, iParam1);
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_234(int iParam0)
{
	return Global_104439.f_18958.f_39[iParam0];
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_236(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_36();
		func_66(uParam0, 16, 4f, 0);
		unk_0x27FC4121D73AF604();
	}
}

int func_237(int iParam0, bool bParam1, bool bParam2)
{
	return func_125(iParam0, !bParam1, bParam2);
}

void func_238(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_239(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_116(Param0, func_128(), 0))
	{
		Var0 = { func_30(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_30(Param0, 1f, 30f, 30f, 10f) };
		unk_0x1ED966252985F895(Var0, Var3, iParam3, 1);
	}
}

void func_240(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xCC2319AEB133E134(Param1, 20f, 5f, 0);
}

void func_241(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_14(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

int func_242()
{
	if (func_182(&Local_859))
	{
		if (!unk_0x772F801619C83779(iLocal_1564))
		{
			return 0;
		}
		if (!unk_0x77FA56883245AD26(Local_1648.f_0))
		{
			return 0;
		}
		if (!func_243(&uLocal_857, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_243(var uParam0, bool bParam1)
{
	if (!unk_0x772F801619C83779(func_12()))
	{
		func_219("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", uParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xB3379AC2E71D1E7E("gestures@m@standing@casual"))
		{
			func_219("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", uParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xB3379AC2E71D1E7E("oddjobs@taxi@"))
	{
		func_219("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xB3379AC2E71D1E7E("oddjobs@towingcome_here"))
	{
		func_219("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xB3379AC2E71D1E7E("misscommon@response"))
	{
		func_219("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xF376F1492C8D737F(2))
	{
		func_219("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", uParam0, 1000);
		return 0;
	}
	return 1;
}

void func_244()
{
	unk_0xBE91026C1FC72180(iLocal_1564);
	Local_1648.f_0 = func_246();
	func_245(1);
}

void func_245(bool bParam0)
{
	unk_0xBE91026C1FC72180(func_12());
	if (bParam0)
	{
		unk_0x9F62787D280BF2EC("gestures@m@standing@casual");
	}
	unk_0x9F62787D280BF2EC("oddjobs@taxi@");
	unk_0x9F62787D280BF2EC("oddjobs@towingcome_here");
	unk_0x9F62787D280BF2EC("misscommon@response");
	unk_0x1D69C39ECF71C85C("TAXI", 2);
	if (!func_235(Global_104439.f_18958, 128))
	{
		func_231(&(Global_104439.f_18958), 128);
	}
}

var func_246()
{
	return unk_0xB1E69EFAB6CB45A3("MIDSIZED_MESSAGE");
}

int func_247(var uParam0)
{
	if (unk_0x90219307C9D2728D(uParam0->f_2, 0))
	{
		uParam0->f_4 = unk_0xCFA31F1E461A6BB5(uParam0->f_2, 0);
		if (unk_0x735DF363967D2CEC(uParam0->f_2) || unk_0xE9559A12052415BE(uParam0->f_4) == func_12())
		{
			if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
			{
				if (unk_0x3251C2B06497863C(uParam0->f_4, -1, 0) == uParam0->f_2)
				{
					unk_0x9C7BDF117DA1C784(uParam0->f_4);
					func_249(uParam0);
					func_39(2, 0);
					bLocal_94 = true;
					func_248(12);
					func_158(&uLocal_90);
					return 1;
				}
				else
				{
					func_282(uParam0, "No Taxi", 21);
					func_233("TAXI_DBG_NTAXI", -1);
				}
			}
			else
			{
				func_282(uParam0, "Taxi is not drivable", 0);
				func_233("TAXI_DBG_NTAXI", -1);
			}
		}
		else if (func_371(uParam0, 3) > 2f)
		{
			func_282(uParam0, "No Taxi", 21);
			func_233("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_248(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
	{
		uVar0 = iParam0;
		unk_0x71DCD6EAA8EE9DC4(8, &uVar0, 1, 1);
	}
	else if (unk_0x6EC0C21CF01F429C() || unk_0x43F4A6D2081CC5ED())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x439D53B53DC181D5(8, &cVar1);
	}
}

void func_249(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_4, 0))
	{
		if (func_132())
		{
		}
	}
}

void func_250(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_251(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	iVar1 = func_255(uParam0, iParam2);
	iVar0 = iVar1;
	func_252(uParam0, iVar0, uParam1, &bVar2, &uVar7);
	if (!bVar2)
	{
		if ((((iVar1 != 0 && iVar1 != 3) && iVar1 != 8) && iVar1 != 13) && iVar1 != 18)
		{
			iVar0 = (iVar1 - 1);
			bVar3 = true;
		}
		if (bVar3)
		{
			func_252(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 2 && iVar1 != 7) && iVar1 != 12) && iVar1 != 17) && iVar1 != 21)
		{
			iVar0 = iVar1 + 1;
			bVar4 = true;
		}
		if (bVar4)
		{
			func_252(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 18 && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 13)
		{
			if ((iVar1 >= 14 && iVar1 <= 16) || (iVar1 >= 0 && iVar1 <= 2))
			{
				iVar0 = iVar1 + 4;
			}
			else
			{
				iVar0 = iVar1 + 5;
			}
			bVar5 = true;
		}
		if (bVar5)
		{
			func_252(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 3 && iVar1 != 0) && iVar1 != 1) && iVar1 != 2) && iVar1 != 7)
		{
			if ((iVar1 >= 18 && iVar1 <= 21) || (iVar1 >= 4 && iVar1 <= 6))
			{
				iVar0 = (iVar1 - 4);
			}
			else
			{
				iVar0 = (iVar1 - 5);
			}
			bVar6 = true;
		}
		if (bVar6)
		{
			func_252(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (bVar2)
	{
	}
	Global_103513[3] = Global_103513[2];
	Global_103513[2] = Global_103513[1];
	Global_103513[1] = Global_103513[0];
	Global_103513[0] = iVar0;
	Global_103508[3] = Global_103508[2];
	Global_103508[2] = Global_103508[1];
	Global_103508[1] = Global_103508[0];
	Global_103508[0] = uVar7;
	if (!Global_103493)
	{
		Global_103493 = 1;
	}
	return 1;
}

void func_252(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < (uParam0[iParam1 /*11*/])->f_1)
	{
		Var1 = { func_254(uParam0, iParam1, iVar0) };
		if (func_201(Var1, 1) < func_201(*uParam2, 1))
		{
			if (Global_103493 && ((((iParam1 == Global_103513[0] && iVar0 == Global_103508[0]) || (iParam1 == Global_103513[1] && iVar0 == Global_103508[1])) || (iParam1 == Global_103513[2] && iVar0 == Global_103508[2])) || (iParam1 == Global_103513[3] && iVar0 == Global_103508[3])))
			{
			}
			else if (func_253(Var1, 1) > 40f)
			{
				*uParam2 = { Var1 };
				*uParam4 = iVar0;
				if (func_201(*uParam2, 1) <= 0.6f)
				{
					*uParam4 = iVar0;
					*bParam3 = 1;
				}
			}
		}
		iVar0++;
	}
}

float func_253(struct<3> Param0, int iParam3)
{
	return func_130(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), Param0, iParam3);
}

Vector3 func_254(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { func_128() };
	if (iParam2 == -1)
	{
		iParam2 = (unk_0x3AF262D7332EEDF5(0, 65535) % (uParam0[iParam1 /*11*/])->f_1);
	}
	switch (iParam1)
	{
		case 0:
			Var0 = { Local_409[iParam2 /*3*/] };
			break;
		
		case 1:
			Var0 = { Local_434[iParam2 /*3*/] };
			break;
		
		case 2:
			Var0 = { Local_471[iParam2 /*3*/] };
			break;
		
		case 3:
			Var0 = { Local_490[iParam2 /*3*/] };
			break;
		
		case 4:
			Var0 = { Local_506[iParam2 /*3*/] };
			break;
		
		case 5:
			Var0 = { Local_567[iParam2 /*3*/] };
			break;
		
		case 6:
			Var0 = { Local_601[iParam2 /*3*/] };
			break;
		
		case 7:
			Var0 = { Local_611[iParam2 /*3*/] };
			break;
		
		case 8:
			Var0 = { Local_621[iParam2 /*3*/] };
			break;
		
		case 9:
			Var0 = { Local_634[iParam2 /*3*/] };
			break;
		
		case 10:
			Var0 = { Local_656[iParam2 /*3*/] };
			break;
		
		case 11:
			Var0 = { Local_666[iParam2 /*3*/] };
			break;
		
		case 12:
			Var0 = { Local_679[iParam2 /*3*/] };
			break;
		
		case 13:
			Var0 = { Local_686[iParam2 /*3*/] };
			break;
		
		case 14:
			Var0 = { Local_699[iParam2 /*3*/] };
			break;
		
		case 15:
			Var0 = { Local_721[iParam2 /*3*/] };
			break;
		
		case 16:
			Var0 = { Local_743[iParam2 /*3*/] };
			break;
		
		case 17:
			Var0 = { Local_768[iParam2 /*3*/] };
			break;
		
		case 18:
			Var0 = { Local_784[iParam2 /*3*/] };
			break;
		
		case 19:
			Var0 = { Local_800[iParam2 /*3*/] };
			break;
		
		case 20:
			Var0 = { Local_819[iParam2 /*3*/] };
			break;
		
		case 21:
			Var0 = { Local_838[iParam2 /*3*/] };
			break;
	}
	return Var0;
}

int func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_256(uParam0);
	if (iParam1 > 1)
	{
		iVar1 = (unk_0x3AF262D7332EEDF5(0, 65535) % 3);
		if (iVar1 == 0)
		{
			iVar2 = unk_0xF34EE736CF047844((uParam0[iVar0 /*11*/])->f_8);
		}
		else if (iVar1 == 1)
		{
			iVar2 = unk_0xF34EE736CF047844((uParam0[iVar0 /*11*/])->f_8.f_1);
		}
		else
		{
			iVar2 = unk_0xF34EE736CF047844((uParam0[iVar0 /*11*/])->f_8.f_2);
		}
		return iVar2;
	}
	return iVar0;
}

int func_256(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (unk_0xBB43B50327B1A590(unk_0x0031992CA618A445(), (uParam0[iVar0 /*11*/])->f_2, (uParam0[iVar0 /*11*/])->f_5, 0, 0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 22;
}

bool func_257(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_258(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0)
		{
			if (bParam2)
			{
				if (func_371(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_193(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_193(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_66(uParam0, 10, 0f, 1);
				}
			}
			else if (func_371(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_193(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_193(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_66(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_371(uParam0, 10) > 30f)
		{
			if (!func_38())
			{
				if (uParam0->f_112)
				{
					func_193(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_193(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_66(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_235(uParam0->f_100, 64))
	{
		if (!func_7(&(Local_190[5 /*10*/].f_6)))
		{
			func_158(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_281(uParam0))
			{
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_280(uParam0, 1);
				func_278(5, uParam0);
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 1))
	{
		if (!func_7(&(Local_190[0 /*10*/].f_6)))
		{
			func_158(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_276(uParam0))
			{
				func_280(uParam0, 1);
				func_278(0, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 2))
	{
		if (!func_7(&(Local_190[1 /*10*/].f_6)))
		{
			func_158(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_275(uParam0))
			{
				func_280(uParam0, 1);
				func_278(1, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 2048))
	{
		if (!func_7(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x76B3C79DE564AFC6(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8DB158934E64B062(uParam0->f_4);
				func_158(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_90(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_274(uParam0))
			{
				func_280(uParam0, 1);
				func_278(8, uParam0);
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 128))
	{
		if (!func_7(&(Local_190[6 /*10*/].f_6)))
		{
			func_158(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_273(uParam0))
			{
				func_280(uParam0, 1);
				func_278(6, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 32))
	{
		if (!func_7(&(Local_190[4 /*10*/].f_6)))
		{
			func_158(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_272(uParam0))
			{
				func_280(uParam0, 1);
				func_278(4, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 256))
	{
		if (!func_7(&(Local_190[7 /*10*/].f_6)))
		{
			func_158(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_271(uParam0))
			{
				func_278(7, uParam0);
				func_280(uParam0, 1);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 8))
	{
		if (!func_7(&(Local_190[9 /*10*/].f_6)))
		{
			func_158(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x7415F7E0896D14F5(unk_0x3D35F9864E4640B1());
		}
		else if (func_90(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_270(uParam0))
			{
				func_280(uParam0, 1);
				func_278(9, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 16384))
	{
		if (!func_7(&(Local_190[13 /*10*/].f_6)))
		{
			func_158(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_264(uParam0))
			{
				func_280(uParam0, 1);
				func_278(13, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 32768))
	{
		if (!func_7(&(Local_190[14 /*10*/].f_6)))
		{
			func_158(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_263(uParam0))
			{
				func_280(uParam0, 1);
				func_278(14, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 4096))
	{
		if (!func_7(&(Local_190[11 /*10*/].f_6)))
		{
			func_158(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_262(uParam0))
			{
				func_280(uParam0, 1);
				func_278(11, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 8192))
	{
		if (!func_7(&(Local_190[12 /*10*/].f_6)))
		{
			func_158(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_261(uParam0))
			{
				func_280(uParam0, 1);
				func_278(12, uParam0);
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_277(uParam0);
			}
		}
	}
	if (func_235(uParam0->f_100, 4))
	{
		if (!func_7(&(Local_190[2 /*10*/].f_6)))
		{
			func_260(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_90(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_259(uParam0))
			{
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_280(uParam0, 1);
				func_278(2, uParam0);
				func_277(uParam0);
			}
		}
	}
}

int func_259(var uParam0)
{
	float fVar0;
	
	if (!unk_0x8682D8A6269E52C9(uParam0->f_2))
	{
		if ((!unk_0x1C66A71D5114A598(uParam0->f_2) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x38A3CC71471EC547(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_158(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_90(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x38A3CC71471EC547(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_89(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_89(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_260(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_68(uParam0, fParam1);
	}
}

int func_261(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		Var0 = { unk_0xFC96E9FAC4919965(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[12 /*10*/].f_3)))
			{
				func_158(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_262(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x432757A9E7AAFA96(uParam0->f_4, 0) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[1 /*10*/].f_3))) && !func_7(&(Local_190[5 /*10*/].f_3))) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3))) && !func_7(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0xFC96E9FAC4919965(uParam0->f_4, 1) };
		if (unk_0x229F35E7CDDBF757(Var0.f_0) > 2.5f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[11 /*10*/].f_3)))
			{
				func_158(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_90(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x229F35E7CDDBF757(uLocal_342) - unk_0x229F35E7CDDBF757(Var0.f_0)) < 0f)
			{
				func_89(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_90(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_89(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_263(var uParam0)
{
	if (((((unk_0x432757A9E7AAFA96(uParam0->f_4, 0) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[8 /*10*/].f_3))) && !func_7(&(Local_190[5 /*10*/].f_3))) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_7(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x2A1786470CB06BC9(unk_0xF177E0DA126D71C8(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x76B3C79DE564AFC6(uParam0->f_5))
			{
				if ((unk_0x38A3CC71471EC547(uParam0->f_4) > 15f && func_173(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x7A6C051038031EFA(uParam0->f_5, 0) && !unk_0x00E962E9D49FD6C4(uParam0->f_5, -1, 0)))
				{
					func_158(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_90(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_173(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xB4C8C23C11AEB34D(uParam0->f_5))
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_90(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xB4C8C23C11AEB34D(uParam0->f_5))
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_264(var uParam0)
{
	if (((unk_0x432757A9E7AAFA96(uParam0->f_4, 0) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3))) && !func_7(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_265(uParam0->f_4) && unk_0x38A3CC71471EC547(uParam0->f_4) > 15f)
		{
			if (!func_7(&(Local_190[13 /*10*/].f_3)))
			{
				func_158(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_89(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_265(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	unk_0x2C8CBD805D869412(unk_0xF177E0DA126D71C8(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x2C8CBD805D869412(unk_0xF177E0DA126D71C8(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x8B2C521A23CFB8FA(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_269((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_268(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_266(unk_0xF177E0DA126D71C8(iParam0, 1), Var15, Var18, Var21);
}

int func_266(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	Param6.f_2 = 0f;
	Param9.f_2 = 0f;
	Var0 = { func_269(Param6 - Param3) };
	Var3 = { func_269(Param9 - Param3) };
	fVar6 = func_267(Param0, Var0);
	fVar7 = func_267(Param3, Var0);
	fVar8 = func_267(Param6, Var0);
	fVar9 = func_267(Param0, Var3);
	fVar10 = func_267(Param3, Var3);
	fVar11 = func_267(Param9, Var3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_267(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_268(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	switch (iParam3)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_269(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_270(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0x3251C2B06497863C(uParam0->f_4, -1, 0) == unk_0x0031992CA618A445())
		{
			if (unk_0x564AF6CD09937A47(unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0x3251C2B06497863C(uParam0->f_4, -1, 0) == unk_0x0031992CA618A445())
		{
			if (unk_0x95E4E33CFB8D32BE(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xCD270953126AC4E9(uParam0->f_4) <= -145f || unk_0xCD270953126AC4E9(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xCD270953126AC4E9(uParam0->f_4) <= 35f && unk_0xCD270953126AC4E9(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_272(var uParam0)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		iVar0 = unk_0x2798AE6D6003E4BA(unk_0x3D35F9864E4640B1());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_190[4 /*10*/].f_3)))
			{
				func_158(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_89(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_273(var uParam0)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		iVar0 = unk_0xAC352446B7D61E95(unk_0x3D35F9864E4640B1());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_190[6 /*10*/].f_3)))
			{
				func_158(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_274(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0x79B378EDDA36AA08(uParam0->f_4))
		{
			iVar0 = unk_0x8DB158934E64B062(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xEA607D64503E7F21(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_193(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_193(uParam0, 72, 1, 0, 1);
				}
				func_89(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_275(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		Var0 = { unk_0xFC96E9FAC4919965(uParam0->f_4, 1) };
		if (unk_0x229F35E7CDDBF757(Var0.f_0) > 3f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[1 /*10*/].f_3)))
			{
				func_158(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_89(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_276(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (!unk_0xB0264CE056EC6EF9(uParam0->f_4) && unk_0xF6C6ED9F9C63AEC0(uParam0->f_4))
		{
			if (!func_7(&(Local_190[0 /*10*/].f_3)))
			{
				func_158(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_89(&(Local_190[0 /*10*/].f_3));
				func_67(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_277(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_7(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_67(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_66(uParam0, 10, 0f, 1);
	unk_0x7415F7E0896D14F5(unk_0x3D35F9864E4640B1());
}

void func_278(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_279(uParam1, iParam0);
	func_89(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_279(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_280(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_281(var uParam0)
{
	if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
	{
		if (unk_0x38A3CC71471EC547(uParam0->f_4) > 25f)
		{
			if (!func_7(&(Local_190[5 /*10*/].f_3)))
			{
				func_158(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_90(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_89(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_89(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_282(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_187();
	func_65(2);
	Var0 = { func_295() };
	if ((!unk_0x0BD3CCFB6C6CFA91(&Var0) && func_38()) && !unk_0xB3404E397FF56B3B(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x27FC4121D73AF604();
		unk_0x8C361F37C04084F4(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
		{
			if (!func_142(uParam0))
			{
				if (unk_0x4CB2F72EA418C083(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xEBC568297077D190(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x4CB2F72EA418C083(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xEBC568297077D190(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x4CB2F72EA418C083(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xEBC568297077D190(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_66(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
			{
				func_145(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_142(uParam0))
			{
				if (unk_0xBBA75C4729CDDA2C(uParam0->f_4))
				{
					func_126(uParam0, 4096, 0);
				}
				else
				{
					func_126(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
			{
				func_145(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_293(uParam0, &Var0);
			unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_293(uParam0, &Var0);
			unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_39(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
			{
				func_145(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_126(uParam0, 0, 0);
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_39(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
			{
				func_145(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_39(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_293(uParam0, &Var0);
			}
			else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
			{
				func_145(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_292(&Var0);
			func_283(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_293(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_293(uParam0, &Var0);
				}
			}
			else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
			{
				func_145(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_39(3, 0);
		}
		func_66(uParam0, 3, 0f, 1);
	}
}

int func_283(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_291(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_284(sParam2, iParam3, 0);
}

int func_284(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_188();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_290(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_289();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_288();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_287())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_23())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_286();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_285();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_285()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_286()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_287()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_288()
{
	if (func_64(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_83();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_291(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_292(char* sParam0)
{
	switch (func_86(unk_0x0031992CA618A445()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_293(var uParam0, char* sParam1)
{
	if (func_294(uParam0))
	{
		func_283(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_294(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
	{
		if (func_173(unk_0x0031992CA618A445(), uParam0->f_3, 1) < 40f && !unk_0xDBF188DE6334F01A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_295()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0x1B2C99C290B1EF3B();
		iVar6 = (iVar6 + Global_16755);
		if (iVar6 > -1)
		{
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_296(var uParam0)
{
	return uParam0->f_118;
}

void func_297()
{
	func_331(&Local_859);
	if (func_330(&Local_859, &Local_1566))
	{
		switch (Local_1566.f_27)
		{
			case 0:
				if (Local_859.f_410 == 9)
				{
					if (!func_329(&Local_859))
					{
						if (func_328("TX_OBJ_PRO_DO") || unk_0xA761A0B6072010C8(Local_859.f_9))
						{
							Local_1566.f_27++;
						}
						else if (func_327(&Local_859) != 10)
						{
							func_193(&Local_859, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_327(&Local_859) > 10 && func_327(&Local_859) != 15) && !func_329(&Local_859))
				{
					if (!unk_0x8682D8A6269E52C9(Local_859.f_3))
					{
						func_145(Local_859.f_3, "PED_RANT", Local_859.f_145, 4);
					}
					Local_1566.f_27++;
					if (bLocal_1565)
					{
					}
				}
				break;
			}
	}
	func_298(&Local_859, &uLocal_1596, &Local_1566, bLocal_1565);
}

int func_298(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_308(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_159(uParam0, 2))
	{
		if (func_307(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x31CD6E9F83C10233() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_306(uParam0))
				{
					uParam2->f_7 = { func_305(uParam1) };
					func_283(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_38())
				{
					uParam2->f_13 = { func_196() };
					if (unk_0xB3404E397FF56B3B(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_232(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_302(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_301(uParam0))
				{
					if (func_38())
					{
						func_66(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_300() };
						if (unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_38())
				{
					uParam2->f_19 = { func_295() };
				}
				else
				{
					func_232(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_302(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_159(uParam0, 14) && !func_38()) && !func_301(uParam0)) && func_371(uParam0, 18) > 1f)
				{
					func_66(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_38())
				{
					if (func_371(uParam0, 18) > 1f)
					{
						if (!unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_1)))
						{
							func_299(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_38())
				{
					func_232(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_302(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_299(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_291(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_284(sParam2, iParam4, 0);
}

struct<6> func_300()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0x1B2C99C290B1EF3B();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xA56C5821F50C3275(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xA56C5821F50C3275(&(Global_14613[iVar8 /*6*/])))
					{
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_301(var uParam0)
{
	return uParam0->f_110;
}

void func_302(var uParam0)
{
	int iVar0;
	
	iVar0 = func_304(uParam0);
	if (iVar0 > -1)
	{
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_231(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_303(), 24);
	}
}

var func_303()
{
	var uVar0;
	
	return uVar0;
}

int func_304(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_235((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_305(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_235((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_231(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_306(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_167("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_167("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_167("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_167("TX_OBJ_GYB_DO", 0, 0) || func_167("TAXI_OBJ_GYB", 0, 0)) || func_167("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_167("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_167("TX_OBJ_CYI_DO", 0, 0) || func_167("TAXI_OBJ_CYI_01", 0, 0)) || func_167("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_167("TX_OBJ_GYN_DO", 0, 0) || func_167("TAXI_OBJ_GYN", 0, 0)) || func_167("TAXI_OBJ_GYN_TG", 0, 0)) || func_167("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_167("TAXI_OBJ_CC1", 0, 0) || func_167("TAXI_OBJ_CC2", 0, 0)) || func_167("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_167("TAXI_OBJ_FTC1", 0, 0) || func_167("TAXI_OBJ_FTC2", 0, 0)) || func_167("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_167("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_167("TAXI_OBJ_GETRUN", 0, 0) || func_167("TAXI_OBJ_DRIVE", 0, 0)) || func_167("TAXI_OBJ_RETURN", 0, 0)) || func_167("TAXI_OBJ_POL", 0, 0)) || func_167("TAXI_OBJ_RUNOUT", 0, 0)) || func_167("TAXI_OBJ_POL", 0, 0));
}

int func_307(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_235((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_308(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_306(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_159(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_327(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_324(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_38())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_323(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_320(uParam0, Var0, func_322(uParam0, 2));
				}
				if (func_235(uParam0->f_98, 4))
				{
					func_66(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				func_178(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_371(uParam0, 16) > 1f)
				{
					func_180(1);
					if (uParam0->f_411 == 9)
					{
						func_230("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_230("TAXI_VIP_RETURN", 7500, 1);
					}
					func_66(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_323(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
				{
					func_145(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_371(uParam0, 16) > func_97(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_38()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_327(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_323(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_324(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_283(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_193(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_66(uParam0, 16, 0, 0);
				func_193(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_235(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_326(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_323(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_66(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_230("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_230("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA761A0B6072010C8(uParam0->f_9))
					{
						uParam0->f_9 = func_192(uParam0->f_17, 1);
					}
					else if (unk_0x2FC773C69270B2E5(uParam0->f_9) == 0)
					{
						unk_0x18EC814D577B92CE(uParam0->f_9, 255);
						unk_0xAD390762A82890FB(uParam0->f_9, uParam0->f_17);
						unk_0xE4E08EF8CF4469E9(uParam0->f_9, 1);
					}
				}
				func_193(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_195(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_145(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA761A0B6072010C8(uParam0->f_9))
					{
						uParam0->f_9 = func_192(uParam0->f_17, 1);
					}
					else if (unk_0x2FC773C69270B2E5(uParam0->f_9) == 0)
					{
						unk_0x18EC814D577B92CE(uParam0->f_9, 255);
						unk_0xAD390762A82890FB(uParam0->f_9, uParam0->f_17);
						unk_0xE4E08EF8CF4469E9(uParam0->f_9, 1);
					}
				}
				func_193(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_319(uParam0, 33554432, Var0, "", 1, 8);
				func_66(uParam0, 16, 0, 0);
				func_193(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_38())
				{
					func_318(uParam0, 0);
					func_231(&(uParam0->f_44), 4);
					func_66(uParam0, 16, 0, 0);
					func_193(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_195(&Var0);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_371(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_195(&Var0);
					}
					func_316(Var0, uParam1);
					func_231(&(uParam0->f_81), 67108864);
					func_66(uParam0, 16, 0, 0);
					func_66(uParam0, 11, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_371(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_195(&Var0);
						}
					}
					func_316(Var0, uParam1);
					func_66(uParam0, 11, 0, 0);
					func_66(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_195(&Var0);
				}
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_195(&Var0);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_195(&Var0);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_195(&Var0);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				func_231(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_314(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_314(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_316(Var0, uParam1);
				func_324(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 6, 0f, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_314(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_314(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_316(Var0, uParam1);
				func_324(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 6, 0f, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 12:
				func_230("TAXI_OBJ_GYB", 3500, 1);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_230("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_230("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_230("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_235(uParam0->f_98, 268435456))
				{
					func_230("TAXI_OBJ_CYI_01", 7500, 1);
					func_231(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_195(&Var0);
				func_316(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_195(&Var0);
				func_316(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_195(&Var0);
				func_316(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 33:
				func_230("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_235(uParam0->f_82, 8192))
				{
					if (func_371(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_195(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_316(Var0, uParam1);
						}
						else
						{
							func_323(uParam0, &Var0, 0, 0, 8);
						}
						func_231(&(uParam0->f_82), 8192);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_235(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_195(&Var0);
					func_323(uParam0, &Var0, 0, 0, 8);
					func_231(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_235(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_195(&Var0);
					func_323(uParam0, &Var0, 0, 0, 8);
					func_231(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_236(uParam0, 0, 0);
				break;
			
			case 139:
				func_230("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_193(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x3AF262D7332EEDF5(0, 120);
				if (!func_235(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_231(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x3AF262D7332EEDF5(0, 100);
				if (!func_235(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_231(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_230("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_236(uParam0, 0, 0);
				func_193(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_38())
				{
					func_230("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_236(uParam0, 0, 0);
					func_193(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_230("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_236(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_235(uParam0->f_81, 1))
				{
					func_313(uParam0, 1, Var0, "_sick1", 8);
					func_13(&(uParam0->f_81), 2);
				}
				else if (!func_235(uParam0->f_81, 2))
				{
					func_313(uParam0, 2, Var0, "_sick2", 8);
					func_13(&(uParam0->f_81), 1);
				}
				func_324(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_235(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_235(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_231(&(uParam0->f_81), 2097152);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_324(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_324(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_324(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_324(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_235(uParam0->f_81, 4))
				{
					func_313(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_235(uParam0->f_81, 8))
				{
					func_313(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_313(uParam0, 8, Var0, "_turns3", 8);
					func_13(&(uParam0->f_81), 4);
					func_13(&(uParam0->f_81), 8);
				}
				func_324(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_312(uParam0))
				{
					func_320(uParam0, Var0, func_322(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
					{
						func_145(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_326(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_283(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_326(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_326(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_324(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_235(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 128);
					func_13(&(uParam0->f_83), 256);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 256);
					func_13(&(uParam0->f_83), 512);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 512);
					func_13(&(uParam0->f_83), 128);
					func_66(uParam0, 16, 0, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_235(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_195(&Var0);
					}
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 1);
					func_13(&(uParam0->f_83), 2);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_195(&Var0);
					}
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 4);
					}
					else
					{
						func_13(&(uParam0->f_83), 1);
					}
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_195(&Var0);
					}
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 4);
					func_13(&(uParam0->f_83), 1);
					func_66(uParam0, 16, 0, 0);
				}
				func_324(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_235(uParam0->f_81, 4096))
				{
					func_319(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_235(uParam0->f_81, 8192))
				{
					func_319(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_324(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_235(uParam0->f_81, 16384))
				{
					func_319(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_235(uParam0->f_81, 32768))
				{
					func_319(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_324(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_235(uParam0->f_82, 8))
					{
						func_311(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_235(uParam0->f_82, 16))
					{
						func_311(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_235(uParam0->f_82, 32))
					{
						func_311(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_324(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_236(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_326(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_324(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_66(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_324(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_324(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_235(uParam0->f_81, 65536))
				{
					func_319(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_235(uParam0->f_81, 131072))
				{
					func_319(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_312(uParam0))
				{
					func_320(uParam0, Var0, func_322(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
					{
						func_145(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_235(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 8);
					func_13(&(uParam0->f_83), 16);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 16);
					func_13(&(uParam0->f_83), 32);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 64);
					}
					else
					{
						func_13(&(uParam0->f_83), 8);
					}
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_231(&(uParam0->f_83), 64);
					func_13(&(uParam0->f_83), 8);
					func_66(uParam0, 16, 0, 0);
				}
				func_324(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_38())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_323(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_320(uParam0, Var0, func_322(uParam0, 65));
					func_236(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_38())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_323(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_320(uParam0, Var0, func_322(uParam0, 66));
					func_236(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_38())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_323(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_323(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_323(uParam0, &Var0, 0, 0, 8);
								func_324(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_323(uParam0, &Var0, 0, 0, 8);
								func_324(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_323(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_326(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_324(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_66(uParam0, 16, 0, 0);
								func_236(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_323(uParam0, &Var0, 0, 0, 8);
									func_66(uParam0, 16, 0, 0);
									func_66(uParam0, 11, 0, 0);
									func_236(uParam0, 0, 0);
									if (!iLocal_66)
									{
										iLocal_64 = 1;
									}
								}
								else
								{
									if (!iLocal_65)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_65 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_66 = 1;
									}
									func_195(&Var0);
									func_323(uParam0, &Var0, 0, 0, 8);
									func_66(uParam0, 16, 0, 0);
									func_66(uParam0, 11, 0, 0);
									func_236(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_323(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_193(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_324(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_235(uParam0->f_82, 1))
				{
					func_311(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_235(uParam0->f_82, 2))
				{
					func_311(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_235(uParam0->f_82, 4))
				{
					func_311(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar6 = { Var0 };
				func_326(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
				{
					func_145(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_66(uParam0, 16, 0, 0);
				func_324(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_312(uParam0))
				{
					func_320(uParam0, Var0, func_322(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
					{
						func_145(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_310(uParam0, Var0, 8);
				}
				func_324(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_235(uParam0->f_83, 1024))
				{
					func_231(&(uParam0->f_83), 1024);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 2048))
				{
					func_231(&(uParam0->f_83), 2048);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_235(uParam0->f_83, 4096))
				{
					func_231(&(uParam0->f_83), 4096);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_195(&Var0);
					func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_235(uParam0->f_82, 1024))
				{
					func_311(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_13(&(uParam0->f_82), 2048);
				}
				else if (!func_235(uParam0->f_82, 2048))
				{
					func_311(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_324(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
				{
					func_145(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_312(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_323(uParam0, &Var0, 0, 0, 8);
						func_193(uParam0, 52, 1, 0, 0);
						func_66(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar6 = { Var0 };
						func_323(uParam0, &Var0, 0, 0, 8);
						func_66(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_326(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_66(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_324(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x4347749EAD4D87DF(unk_0xED1168B8D2D313FA()) >= 1)
				{
					func_230("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_235(uParam0->f_81, 262144))
				{
					func_319(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_235(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_319(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_319(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_324(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_235(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_309(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_235(uParam0->f_82, 134217728))
				{
					func_309(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_324(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 100:
				func_230("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_236(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_195(&Var0);
				}
				func_231(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_195(&Var0);
				}
				func_231(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_195(&Var0);
				}
				func_231(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_235(uParam0->f_82, 65536))
				{
					if (func_371(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_195(&Var0);
						func_316(Var0, uParam1);
						func_231(&(uParam0->f_82), 65536);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_235(uParam0->f_82, 131072))
				{
					if (func_371(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_195(&Var0);
						func_316(Var0, uParam1);
						func_231(&(uParam0->f_82), 131072);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_235(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_231(&(uParam0->f_82), 8388608);
				}
				else if (!func_235(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_231(&(uParam0->f_82), 16777216);
				}
				else if (!func_235(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_231(&(uParam0->f_82), 33554432);
				}
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_326(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_195(&Var0);
					func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_323(uParam0, &Var0, 0, 0, 8);
				}
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_316(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_326(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_325(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_193(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_231(&(uParam0->f_81), 2097152);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_195(&Var0);
				func_316(Var0, uParam1);
				func_231(&(uParam0->f_81), 67108864);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_235(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_319(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
					{
						func_145(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_193(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_235(uParam0->f_81, 268435456))
				{
					func_319(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_193(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_230("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_236(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_235(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_319(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
						{
							func_145(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_319(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_193(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_230("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_236(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_283(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_235(uParam0->f_81, 16777216))
				{
					func_319(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 88:
				func_230("TAXI_TIEFLEE", 7500, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_235(uParam0->f_98, 536870912))
				{
					func_230("TAXI_OBJ_CYI_1B", 7500, 1);
					func_231(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_236(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_195(&Var0);
				func_323(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_323(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_323(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_323(uParam0, &Var0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_323(uParam0, &Var0, 1, 0, 8);
				func_193(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_230("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_193(uParam0, 0, 0, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			}
	}
}

void func_309(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_231(&(uParam0->f_82), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_195(&Param2);
	}
	func_283(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_310(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_235(uParam0->f_82, 64))
	{
		func_231(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_235(uParam0->f_82, 128))
	{
		func_231(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x3AF262D7332EEDF5(1, 3), 24);
	}
	func_325(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_66(uParam0, 16, 0, 0);
}

void func_311(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_231(&(uParam0->f_82), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_195(&Param2);
		}
	}
	func_283(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_312(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_313(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_231(&(uParam0->f_81), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_283(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_314(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_315(*uParam0, iVar1))
		{
			func_232(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_195(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_316(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_317(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_231(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_317(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x0BD3CCFB6C6CFA91(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_318(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_230("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_230("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_230("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_230("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_230("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_230("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_230("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_230("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_230("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_230("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_230("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_230("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_230("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_319(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_231(&(uParam0->f_81), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_195(&Param2);
	}
	func_283(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_320(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_66(uParam0, 16, 0, 0);
	func_66(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x8682D8A6269E52C9(uParam0->f_3))
	{
		unk_0x61E60EEAE9774621(uParam0->f_3, &cParam1, func_321(uParam0));
	}
}

char* func_321(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_322(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_323(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_66(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_66(uParam0, 17, 0f, 1);
	}
	func_236(uParam0, iParam2, 0);
	return func_283(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_324(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_235(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_235(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_235(*uParam2, 4))
		{
			if (!func_235(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_235(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_235(*uParam2, 512))
		{
			if (!func_235(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_235(*uParam2, 16))
		{
			if (!func_235(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_235(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_235(*uParam2, 64))
		{
			if (!func_235(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_235(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_235(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_235(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_235(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_235(*uParam2, 8192))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_235(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_235(*uParam2, 16384))
		{
			if (func_235(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_235(*uParam2, 32768))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_235(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_235(*uParam2, 65536))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_235(*uParam2, 131072))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_235(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_235(*uParam2, 262144))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_235(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_235(*uParam2, 524288))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_235(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_235(*uParam2, 1048576))
		{
			if (func_235(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_235(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_235(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_235(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_235(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_235(*uParam2, 67108864))
		{
			if (func_235(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_235(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_235(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_235(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_235(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_325(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_291(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_284(sParam2, iParam4, 0);
}

void func_326(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_315(*uParam0, iVar1))
		{
			func_232(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_195(sParam2);
				}
				else
				{
					func_195(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_327(var uParam0)
{
	return uParam0->f_416;
}

int func_328(char* sParam0)
{
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		if (func_167(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_329(var uParam0)
{
	if (func_38())
	{
		return 1;
	}
	if (func_159(uParam0, 17))
	{
		return 1;
	}
	if (func_159(uParam0, 14))
	{
		return 1;
	}
	if (func_301(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_330(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_159(uParam0, 9));
}

void func_331(var uParam0)
{
	if (func_159(uParam0, 17))
	{
		if (!func_159(uParam0, 14))
		{
			if (!func_301(uParam0))
			{
				if (!func_38())
				{
					func_156(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_332(var uParam0)
{
	return uParam0->f_117;
}

void func_333(var uParam0, var uParam1, bool bParam2)
{
	if (!func_235(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x0BD3CCFB6C6CFA91(&(uParam0->f_124)) && func_38())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_38())
				{
					StringCopy(&(uParam0->f_124), func_303(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_334(var uParam0)
{
	if (!func_235(uParam0->f_98, 2))
	{
		if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
		{
			if (func_130(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xE882E0C18562237F(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_231(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_335(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x76B3C79DE564AFC6(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_315(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_315(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_315(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_232(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x31CD6E9F83C10233();
							}
						}
						else
						{
							func_14(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_315(Local_343.f_1[iVar0 /*4*/], 4) && !func_315(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_232(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_282(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_336(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_159(uParam0, 27))
	{
		func_157(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_371(uParam0, 27) > 5f)
	{
		if (func_364(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_66(uParam0, 27, 0, 0);
			func_66(uParam0, 10, 0, 0);
			func_362(uParam0, &uVar0, uParam1);
		}
		func_358(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_337(uParam0);
	}
	if ((((!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()) && (unk_0x2A3EA4C0BCED85F2(*uParam0) && !unk_0x63D9209D70E2F5D5(*uParam0))) && (unk_0x2A3EA4C0BCED85F2(uParam0->f_1) && !unk_0x63D9209D70E2F5D5(uParam0->f_1))) && !unk_0x2C4568A5B00B34DA()) && !func_38())
	{
		if (func_371(uParam0, 26) > 10f)
		{
			func_156(uParam0, 26, 0);
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
		}
	}
	else if (func_159(uParam0, 26))
	{
		func_156(uParam0, 26, 0);
	}
	return 0;
}

void func_337(var uParam0)
{
	if (!func_357(uParam0->f_429))
	{
		uParam0->f_429 = func_356();
		func_347(&(uParam0->f_429), 0, 0, unk_0x3AF262D7332EEDF5(4, 7), 0, 0, 0);
	}
	else if (func_338(uParam0->f_429))
	{
		func_282(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_338(int iParam0)
{
	return func_339(func_356(), iParam0);
}

int func_339(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_357(iParam1) || !func_357(iParam0))
	{
		return 1;
	}
	iVar0 = func_345(iParam0);
	iVar1 = func_345(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_344(iParam0);
	iVar1 = func_344(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_343(iParam0);
	iVar1 = func_343(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_342(iParam0);
	iVar1 = func_342(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_341(iParam0);
	iVar1 = func_341(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_341(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_342(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_343(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_344(int iParam0)
{
	return iParam0 & 15;
}

var func_345(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_346(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_346(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_347(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_345(*uParam0);
	iVar1 = func_344(*uParam0);
	iVar2 = func_343(*uParam0);
	iVar3 = func_342(*uParam0);
	iVar4 = func_341(*uParam0);
	iVar5 = func_340(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_355(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_355(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_348(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_348(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_354(uParam0, iParam1);
	func_353(uParam0, iParam2);
	func_352(uParam0, iParam3);
	func_351(uParam0, iParam5);
	func_350(uParam0, iParam4);
	func_349(uParam0, iParam6);
}

void func_349(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_350(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_344(*uParam0);
	iVar1 = func_345(*uParam0);
	if (iParam1 < 1 || iParam1 > func_355(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_351(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_352(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_353(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_354(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_355(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_356()
{
	var uVar0;
	
	func_354(&uVar0, unk_0x6676AD594A1E113E());
	func_353(&uVar0, unk_0xE647A8424B4399CE());
	func_352(&uVar0, unk_0x41413FABD538FC3A());
	func_350(&uVar0, unk_0xEC3E0DDCEEBF8A00());
	func_351(&uVar0, unk_0x1A7BD52C0A88E679());
	func_349(&uVar0, unk_0x760D3328FB0F48C5());
	return uVar0;
}

int func_357(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_340(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_341(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_342(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_345(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_344(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_343(iParam0);
	if (iVar5 < 1 || iVar5 > func_355(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_358(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_361()) && !func_160(uParam0)) || ((uParam0->f_411 != 9 && func_360(uParam0, 1)) && !func_160(uParam0)))
		{
			uVar0 = func_359(uParam0->f_4);
			unk_0x3D93C0CB2ED2E7DC(&uVar0);
			uParam0->f_4 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			unk_0x1581691D748490F3(uParam0->f_4, 1, 0);
			func_183(uParam0);
			func_174(uParam0, 0);
		}
	}
}

var func_359(var uParam0)
{
	return uParam0;
}

int func_360(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				iVar1 = unk_0xE9559A12052415BE(iVar0);
				bVar2 = func_222(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x2076012573940835(iVar1))
				{
					if (unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xB8B31FD7EF092667(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_235(uParam0->f_44, 64))
					{
						if (unk_0xF376F1492C8D737F(2))
						{
							func_233("TX_VIP_DMGD", -1);
							if (func_257("TX_VIP_DMGD"))
							{
								func_231(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_235(uParam0->f_44, 32))
					{
						if (unk_0xF376F1492C8D737F(2))
						{
							func_233("TX_VIP_CAR", -1);
							if (func_257("TX_VIP_CAR"))
							{
								func_231(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_235(uParam0->f_44, 16))
					{
						if (unk_0xF376F1492C8D737F(2))
						{
							func_233("TX_VIP_SMALL", -1);
							if (func_257("TX_VIP_SMALL"))
							{
								func_231(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_13(&(uParam0->f_44), 16);
			func_13(&(uParam0->f_44), 64);
			func_13(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_361()
{
	int iVar0;
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445())
				{
					if (unk_0xEE37D610E00A6E4E(iVar0, func_12()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_362(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_363(uParam0, 0, 1))
			{
				func_282(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_363(uParam0, 0, 4))
			{
				func_282(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_363(uParam0, 0, 8))
			{
				func_282(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_363(uParam0, 1, 1))
			{
				func_282(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_363(uParam0, 0, 1))
			{
				func_282(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_235(*uParam2, 2) && func_142(uParam0))
			{
				func_282(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_363(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
	{
		if (!unk_0xDBF188DE6334F01A(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_193(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_193(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_364(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x0031992CA618A445();
	if (!unk_0x7A6C051038031EFA(iVar0, 0) && !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (!func_235(*uParam2, 1))
		{
			if (func_370(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_235(*uParam2, 2))
		{
			if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_235(*uParam2, 4))
		{
			if (func_368(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_235(*uParam2, 8))
		{
			if (func_367(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_235(*uParam2, 128);
		if (bParam4)
		{
			if (func_365(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_235(*uParam2, 16))
		{
			if (func_365(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (iParam7 && unk_0x7CA73A79B30385F3(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x8DB158934E64B062(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x8DB158934E64B062(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x7899A2987EB03783();
		if (!unk_0x7A6C051038031EFA(uVar0, 0))
		{
			if (unk_0x7CA73A79B30385F3(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x7CA73A79B30385F3(iParam0, unk_0x0031992CA618A445(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7CA73A79B30385F3(iParam0, unk_0x0031992CA618A445(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x7899A2987EB03783();
		if (!unk_0x7A6C051038031EFA(uVar1, 0))
		{
			if (unk_0x7CA73A79B30385F3(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			if (unk_0x20BE8D7B7834CA2D(iParam0))
			{
				if (unk_0xB6903829A19F7017(iParam0) == unk_0x0031992CA618A445())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
		{
			if (unk_0xF041E50CF58AF6F9(iParam0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x564AF6CD09937A47(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xBEF1D13D84429BDD(unk_0x0031992CA618A445()))
	{
		if (unk_0xD81E58A8E3A98DEA(iParam0))
		{
			return 1;
		}
	}
	if (func_366(unk_0x0031992CA618A445(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xABB40063444DEDAA(iParam0) && func_172(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x90219307C9D2728D(iParam0, 0))
		{
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), unk_0xCFA31F1E461A6BB5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iParam0))
		{
			return 1;
		}
		if (!unk_0x7A6C051038031EFA(uParam1, 0))
		{
			if (unk_0x7CA73A79B30385F3(iParam1, unk_0x0031992CA618A445(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x1306828A757A10AC(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xD08ED8D7088059C5(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 1), unk_0xF177E0DA126D71C8(iParam1, 1)) < 2.5f)
			{
				if (unk_0x51D10CE903646C26(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x1F510E862BD5CD12(uParam0, 4))
	{
		if (unk_0xD08ED8D7088059C5(uParam0) && !unk_0x57550D8981DAEF6C(iParam0))
		{
			if (unk_0xF041E50CF58AF6F9(uParam1, unk_0xF177E0DA126D71C8(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x7A6C051038031EFA(uParam1, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	if (unk_0xA836CB82D16639AD(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x1EE8F1A6A0B08F95(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x1F510E862BD5CD12(uParam0, 2))
	{
		if (unk_0xD08ED8D7088059C5(uParam0))
		{
			if (unk_0xF041E50CF58AF6F9(iParam1, unk_0xF177E0DA126D71C8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x51D10CE903646C26(unk_0x4849801147A2BA1E(iParam1), iParam0, 120f) && unk_0x367C9FFCB04B45EF(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x90219307C9D2728D(unk_0x4849801147A2BA1E(iParam1), 0))
			{
				iVar3 = unk_0xCFA31F1E461A6BB5(unk_0x4849801147A2BA1E(iParam1), 0);
			}
			if (unk_0x4409826A2E8B7CC7(iParam0) || func_369(iVar3))
			{
				if (unk_0xF041E50CF58AF6F9(iParam1, unk_0xF177E0DA126D71C8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x51D10CE903646C26(unk_0x4849801147A2BA1E(iParam1), iParam0, 120f) && unk_0x367C9FFCB04B45EF(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x358ED862352D8DB6((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x3251C2B06497863C(iParam0, -1, 0) != 0)
			{
				if (unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_173(unk_0x0031992CA618A445(), iParam0, 1) < 40f)
						{
							if (unk_0x63683B42C74DE9C9(unk_0x3D35F9864E4640B1(), &uVar1))
							{
								if ((unk_0x036E1D5EA494CEB2(uVar1) && unk_0x89C1AD6422029361(iVar1) == iParam0) || (unk_0x269F274F1955DE87(iVar1) && unk_0x4849801147A2BA1E(iVar1) == unk_0x3251C2B06497863C(iParam0, -1, 0)))
								{
									if ((unk_0x52559DAD5F31039D(unk_0x0031992CA618A445()) && unk_0x9148803485DEDF45(0, 24)) || (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x9148803485DEDF45(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_370(int iParam0, var uParam1)
{
	if (!unk_0x7A6C051038031EFA(uParam0, 0))
	{
		if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
		{
			if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iParam0) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0))
			{
				if (unk_0x51D10CE903646C26(iParam0, unk_0x0031992CA618A445(), 90f))
				{
					if (func_172(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x31CD6E9F83C10233();
						}
						else if ((unk_0x31CD6E9F83C10233() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_371(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_158(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_90(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_372()
{
	func_373(&Local_859);
	func_415();
}

void func_373(var uParam0)
{
	func_2(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_65(2);
	}
}

int func_374(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_38() && func_371(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_3, 0))
		{
			if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
			{
				if (unk_0xA32DC7E16AD1DFB7(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_50(uParam0) == 0 || func_315(uParam0->f_85, 32))
					{
						if (!unk_0xBBA75C4729CDDA2C(uParam0->f_4))
						{
							func_126(uParam0, 4160, 0);
						}
						else
						{
							func_126(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_126(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_126(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_126(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x31CD6E9F83C10233() % 1000) < 50)
	{
	}
	return 0;
}

void func_375(var uParam0)
{
	if (unk_0xA761A0B6072010C8(uParam0->f_8))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_8));
	}
	if (unk_0xA761A0B6072010C8(uParam0->f_9))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_9));
	}
	if (unk_0xA761A0B6072010C8(uParam0->f_10))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_10));
	}
}

int func_376(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_377()
{
	Local_343.f_0 = 0;
	func_393(74190, 74165, 1);
	func_393(73926, 73904, 1);
	func_393(73842, 73817, 1);
	func_393(73745, 73721, 1);
	func_393(73611, 73590, 1);
	func_393(73552, 73527, 1);
	func_393(73385, 73363, 1);
}

int func_378(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_282(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_379(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_4))
	{
		if (func_381(uParam0->f_4))
		{
			func_380(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_380(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_381(int iParam0)
{
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x9944C9C4DBEAB270(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xDECC749CB8B5AAB6(iParam0, 0, 40000) || unk_0xDECC749CB8B5AAB6(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_382(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_282(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_383(var uParam0)
{
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
	{
		if (func_315(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_384(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_380(uParam0, 11);
	return 1;
}

int func_385(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_4))
	{
		if (unk_0x7019CC495F72B3AC(uParam0->f_4) && !unk_0xB0264CE056EC6EF9(uParam0->f_4))
		{
			if (!func_159(uParam0, 25))
			{
				func_66(uParam0, 25, 0, 0);
			}
			else if (func_371(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_159(uParam0, 25))
		{
			func_156(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_386(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_282(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_387(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_4, 0))
	{
		if (unk_0xFB47BEA738196607(uParam0->f_4))
		{
			if (unk_0xDECC749CB8B5AAB6(uParam0->f_4, 0, 40000) || unk_0xDECC749CB8B5AAB6(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_282(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_389(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_4, 0))
	{
		if (unk_0x432757A9E7AAFA96(uParam0->f_4, 0))
		{
			if (unk_0xBBA75C4729CDDA2C(uParam0->f_4))
			{
				if (func_315(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_390(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_282(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_391(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_4))
	{
		if (func_392(uParam0->f_4))
		{
			func_380(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0)
{
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x9944C9C4DBEAB270(iParam0) == 0f)
	{
		if (!unk_0x432757A9E7AAFA96(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xDECC749CB8B5AAB6(iParam0, 0, 40000) || unk_0xDECC749CB8B5AAB6(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_393(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_232(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_232(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_394(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_282(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_395(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_3))
	{
		if ((unk_0x8682D8A6269E52C9(uParam0->f_3) || unk_0x7A6C051038031EFA(uParam0->f_3, 0)) || unk_0xB3D4A3F00B489CC7(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_396()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

void func_397(var uParam0)
{
	func_398();
	(*uParam0)[0 /*11*/] = "Region 0 - Los Puerta";
	(uParam0[0 /*11*/])->f_2 = { -1902f, -1280f, 20f };
	(uParam0[0 /*11*/])->f_5 = { -373f, -3533f, -20f };
	(uParam0[0 /*11*/])->f_1 = 8;
	(uParam0[0 /*11*/])->f_8 = { IntToFloat(1), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[1 /*11*/] = "Region 1 - South Los Santos";
	(uParam0[1 /*11*/])->f_2 = { -373f, -1280f, 20f };
	(uParam0[1 /*11*/])->f_5 = { 708f, -3533f, -20f };
	(uParam0[1 /*11*/])->f_1 = 12;
	(uParam0[1 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(1), IntToFloat(5) };
	(*uParam0)[2 /*11*/] = "Region 2 - Vinewood Hills";
	(uParam0[2 /*11*/])->f_2 = { 708f, -1280f, 20f };
	(uParam0[2 /*11*/])->f_5 = { 1952f, -3533f, -20f };
	(uParam0[2 /*11*/])->f_1 = 6;
	(uParam0[2 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[3 /*11*/] = "Region 3 - Del Perro";
	(uParam0[3 /*11*/])->f_2 = { -4613f, 315f, 20f };
	(uParam0[3 /*11*/])->f_5 = { -1902f, -1280f, -20f };
	(uParam0[3 /*11*/])->f_1 = 5;
	(uParam0[3 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[4 /*11*/] = "Region 4 - Little Seoul";
	(uParam0[4 /*11*/])->f_2 = { -1902f, 315f, 20f };
	(uParam0[4 /*11*/])->f_5 = { -373f, -1280f, 33f };
	(uParam0[4 /*11*/])->f_1 = 20;
	(uParam0[4 /*11*/])->f_8 = { IntToFloat(5), IntToFloat(0), IntToFloat(1) };
	(*uParam0)[5 /*11*/] = "Region 5 -  Downtown";
	(uParam0[5 /*11*/])->f_2 = { -373f, 315f, 20f };
	(uParam0[5 /*11*/])->f_5 = { 708f, -1280f, -17f };
	(uParam0[5 /*11*/])->f_1 = 11;
	(uParam0[5 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(2) };
	(*uParam0)[6 /*11*/] = "Region 6 - SouthGate";
	(uParam0[6 /*11*/])->f_2 = { 708f, 315f, 20f };
	(uParam0[6 /*11*/])->f_5 = { 1952f, -1280f, -20f };
	(uParam0[6 /*11*/])->f_1 = 3;
	(uParam0[6 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(2) };
	(*uParam0)[7 /*11*/] = "Region 7 - City Hills";
	(uParam0[7 /*11*/])->f_2 = { 1952f, 315f, 35f };
	(uParam0[7 /*11*/])->f_5 = { 4603f, -1280f, -20f };
	(uParam0[7 /*11*/])->f_1 = 3;
	(uParam0[7 /*11*/])->f_8 = { IntToFloat(5), IntToFloat(2), IntToFloat(6) };
	(*uParam0)[8 /*11*/] = "Region 8 - Country Hills";
	(uParam0[8 /*11*/])->f_2 = { -4613f, 2550f, 35f };
	(uParam0[8 /*11*/])->f_5 = { -1902f, 315f, -20f };
	(uParam0[8 /*11*/])->f_1 = 4;
	(uParam0[8 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(4), IntToFloat(0) };
	(*uParam0)[9 /*11*/] = "Region 9 - Bel Air";
	(uParam0[9 /*11*/])->f_2 = { -1902f, 2550f, 35f };
	(uParam0[9 /*11*/])->f_5 = { -373f, 315f, -20f };
	(uParam0[9 /*11*/])->f_1 = 7;
	(uParam0[9 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(10) };
	(*uParam0)[10 /*11*/] = "Region 10 - West Hollywood";
	(uParam0[10 /*11*/])->f_2 = { -373f, 2550f, 35f };
	(uParam0[10 /*11*/])->f_5 = { 708f, 315f, -20f };
	(uParam0[10 /*11*/])->f_1 = 3;
	(uParam0[10 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(6) };
	(*uParam0)[11 /*11*/] = "Region 11 - Echo Park";
	(uParam0[11 /*11*/])->f_2 = { 708f, 2550f, 35f };
	(uParam0[11 /*11*/])->f_5 = { 1952f, 315f, -20f };
	(uParam0[11 /*11*/])->f_1 = 4;
	(uParam0[11 /*11*/])->f_8 = { IntToFloat(10), IntToFloat(5), IntToFloat(6) };
	(*uParam0)[12 /*11*/] = "Region 12 - North City Hills";
	(uParam0[12 /*11*/])->f_2 = { 1952f, 2550f, 35f };
	(uParam0[12 /*11*/])->f_5 = { 4603f, 315f, -20f };
	(uParam0[12 /*11*/])->f_1 = 2;
	(uParam0[12 /*11*/])->f_8 = { IntToFloat(11), IntToFloat(6), IntToFloat(6) };
	(*uParam0)[13 /*11*/] = "Region 13 - Vinewood";
	(uParam0[13 /*11*/])->f_2 = { -4613f, 4435f, 35f };
	(uParam0[13 /*11*/])->f_5 = { -1902f, 2550f, -20f };
	(uParam0[13 /*11*/])->f_1 = 4;
	(uParam0[13 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(8), IntToFloat(9) };
	(*uParam0)[14 /*11*/] = "Region 14 - Mountains";
	(uParam0[14 /*11*/])->f_2 = { -1902f, 4435f, 35f };
	(uParam0[14 /*11*/])->f_5 = { -373f, 2550f, -20f };
	(uParam0[14 /*11*/])->f_1 = 7;
	(uParam0[14 /*11*/])->f_8 = { IntToFloat(8), IntToFloat(9), IntToFloat(10) };
	(*uParam0)[15 /*11*/] = "Region 15 - Lakes";
	(uParam0[15 /*11*/])->f_2 = { -373f, 4435f, 35f };
	(uParam0[15 /*11*/])->f_5 = { 708f, 2550f, 1f };
	(uParam0[15 /*11*/])->f_1 = 7;
	(uParam0[15 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(10), IntToFloat(11) };
	(*uParam0)[16 /*11*/] = "Region 16 - Sandy Shores";
	(uParam0[16 /*11*/])->f_2 = { 708f, 4435f, 35f };
	(uParam0[16 /*11*/])->f_5 = { 1952f, 2550f, -20f };
	(uParam0[16 /*11*/])->f_1 = 8;
	(uParam0[16 /*11*/])->f_8 = { IntToFloat(10), IntToFloat(11), IntToFloat(15) };
	(*uParam0)[17 /*11*/] = "Region 17 - SS Hills";
	(uParam0[17 /*11*/])->f_2 = { 1952f, 4435f, 35f };
	(uParam0[17 /*11*/])->f_5 = { 4603f, 2550f, -20f };
	(uParam0[17 /*11*/])->f_1 = 5;
	(uParam0[17 /*11*/])->f_8 = { IntToFloat(11), IntToFloat(15), IntToFloat(12) };
	(*uParam0)[18 /*11*/] = "Region 18 - NW Country";
	(uParam0[18 /*11*/])->f_2 = { -1902f, 7693f, 35f };
	(uParam0[18 /*11*/])->f_5 = { -373f, 4435f, -20f };
	(uParam0[18 /*11*/])->f_1 = 5;
	(uParam0[18 /*11*/])->f_8 = { IntToFloat(13), IntToFloat(14), IntToFloat(15) };
	(*uParam0)[19 /*11*/] = "Region 19 - N Country";
	(uParam0[19 /*11*/])->f_2 = { -373f, 7693f, 35f };
	(uParam0[19 /*11*/])->f_5 = { 708f, 4435f, -20f };
	(uParam0[19 /*11*/])->f_1 = 6;
	(uParam0[19 /*11*/])->f_8 = { IntToFloat(18), IntToFloat(20), IntToFloat(15) };
	(*uParam0)[20 /*11*/] = "Region 20 - E Country";
	(uParam0[20 /*11*/])->f_2 = { 708f, 7693f, 35f };
	(uParam0[20 /*11*/])->f_5 = { 1952f, 4435f, -20f };
	(uParam0[20 /*11*/])->f_1 = 6;
	(uParam0[20 /*11*/])->f_8 = { IntToFloat(19), IntToFloat(21), IntToFloat(16) };
	(*uParam0)[21 /*11*/] = "Region 21 - CountrySide";
	(uParam0[21 /*11*/])->f_2 = { 1952f, 7693f, 35f };
	(uParam0[21 /*11*/])->f_5 = { 4603f, 4435f, 1f };
	(uParam0[21 /*11*/])->f_1 = 6;
	(uParam0[21 /*11*/])->f_8 = { IntToFloat(17), IntToFloat(20), IntToFloat(16) };
	(*uParam0)[22 /*11*/] = "Region 8 - Special POIs";
	(uParam0[22 /*11*/])->f_2 = { -4613f, 7693f, 20f };
	(uParam0[22 /*11*/])->f_5 = { 4603f, -3533f, -20f };
	(uParam0[22 /*11*/])->f_1 = 10;
	(uParam0[22 /*11*/])->f_8 = { IntToFloat(1), IntToFloat(2), IntToFloat(3) };
}

void func_398()
{
	Local_409[0 /*3*/] = { -939.6133f, -1523.37f, 4.1764f };
	Local_409[1 /*3*/] = { -1161.53f, -1492.471f, 3.3139f };
	Local_409[2 /*3*/] = { -1037.172f, -2730.923f, 19.1697f };
	Local_409[3 /*3*/] = { -1204.591f, -1377.74f, 3.1844f };
	Local_409[4 /*3*/] = { -939.6133f, -1523.37f, 4.1764f };
	Local_409[5 /*3*/] = { -91.6341f, -1328.155f, 28.3373f };
	Local_409[6 /*3*/] = { -900.3735f, -2690.014f, 12.9447f };
	Local_409[7 /*3*/] = { -1012.786f, -2468.602f, 12.8384f };
	Local_434[0 /*3*/] = { 87.0014f, -1402.448f, 28.2549f };
	Local_434[1 /*3*/] = { 146.5773f, -1426.882f, 28.2915f };
	Local_434[2 /*3*/] = { 435.1445f, -1462.779f, 28.2915f };
	Local_434[3 /*3*/] = { 135.1209f, -1302.604f, 28.1936f };
	Local_434[4 /*3*/] = { 112.2743f, -1947.214f, 19.6826f };
	Local_434[5 /*3*/] = { 65.3804f, -1568.944f, 28.6028f };
	Local_434[6 /*3*/] = { 137.8282f, -1724.227f, 28.2079f };
	Local_434[7 /*3*/] = { 132.9427f, -2009.911f, 17.2055f };
	Local_434[8 /*3*/] = { -184.5559f, -1438.031f, 30.3049f };
	Local_434[9 /*3*/] = { 153.5036f, -1451.892f, 28.1418f };
	Local_434[10 /*3*/] = { 50.2007f, -1379.729f, 32f };
	Local_434[11 /*3*/] = { -297.4216f, -1848.188f, 24.7217f };
	Local_471[0 /*3*/] = { 768.2622f, -2371.747f, 21.6783f };
	Local_471[1 /*3*/] = { 1188.841f, -3249.505f, 5.0276f };
	Local_471[2 /*3*/] = { 770.0794f, -2991.976f, 5.0203f };
	Local_471[3 /*3*/] = { 946.5765f, -2453.436f, 27.5512f };
	Local_471[4 /*3*/] = { 957.6567f, -2097.351f, 29.6646f };
	Local_471[5 /*3*/] = { 926.1091f, -1749.836f, 29.9898f };
	Local_490[0 /*3*/] = { -2075.602f, -330.3965f, 12.3162f };
	Local_490[1 /*3*/] = { -1994.446f, -545.3368f, 10.7213f };
	Local_490[2 /*3*/] = { -3171.321f, 918.0819f, 13.4239f };
	Local_490[3 /*3*/] = { -1918.183f, -370.5667f, 48.1919f };
	Local_490[4 /*3*/] = { -1938.766f, -441.2331f, 18.7351f };
	Local_506[0 /*3*/] = { -1392.673f, -179.0173f, 46.3472f };
	Local_506[1 /*3*/] = { -1428.562f, -195.809f, 46.4109f };
	Local_506[2 /*3*/] = { -385.7066f, -403.3985f, 30.5014f };
	Local_506[3 /*3*/] = { -486.7284f, -389.6814f, 33.2888f };
	Local_506[4 /*3*/] = { -583.0761f, -446.2154f, 33.299f };
	Local_506[5 /*3*/] = { -496.0706f, 236.211f, 82.0245f };
	Local_506[6 /*3*/] = { -536.2413f, -679.3174f, 32.2419f };
	Local_506[7 /*3*/] = { -1156.046f, -1418.88f, 3.7969f };
	Local_506[8 /*3*/] = { -856.6715f, -1148.855f, 5.2178f };
	Local_506[9 /*3*/] = { -696.4865f, -823.45f, 22.8254f };
	Local_506[10 /*3*/] = { -1142.855f, -933.465f, 1.6658f };
	Local_506[11 /*3*/] = { -1281.353f, -882.9135f, 10.3152f };
	Local_506[12 /*3*/] = { -1099.791f, -1702.432f, 3.37f };
	Local_506[13 /*3*/] = { -1270.749f, -1159.347f, 5.2547f };
	Local_506[14 /*3*/] = { -1130.542f, -1195.19f, 1.2757f };
	Local_506[15 /*3*/] = { -1076.003f, -1011.876f, 1.1503f };
	Local_506[16 /*3*/] = { -1035.184f, -1252.296f, 5.197f };
	Local_506[17 /*3*/] = { -1006.773f, -1106.055f, 1.1484f };
	Local_506[18 /*3*/] = { -1847.2f, -602.4301f, 10.4091f };
	Local_506[19 /*3*/] = { -597.1105f, -304.0766f, 33.9632f };
	Local_567[0 /*3*/] = { -272.7684f, 248.4368f, 89.1359f };
	Local_567[1 /*3*/] = { 56.3248f, 288.189f, 109.281f };
	Local_567[2 /*3*/] = { 415.2359f, 103.9472f, 99.8247f };
	Local_567[3 /*3*/] = { 394.9993f, -200.0683f, 58.3083f };
	Local_567[4 /*3*/] = { 253.857f, -378.6688f, 43.6252f };
	Local_567[5 /*3*/] = { 223.6173f, -50.8911f, 68.2267f };
	Local_567[6 /*3*/] = { 544.0235f, 202.5245f, 100.61f };
	Local_567[7 /*3*/] = { -264.7876f, -1062.839f, 24.8463f };
	Local_567[8 /*3*/] = { -234.3063f, -732.1405f, 32.5016f };
	Local_567[9 /*3*/] = { -84.3683f, 241.2898f, 99.4509f };
	Local_567[10 /*3*/] = { 346.413f, -960.6713f, 28.4297f };
	Local_601[0 /*3*/] = { 898.7972f, 56.0888f, 78.0298f };
	Local_601[1 /*3*/] = { 832.3909f, -191.5166f, 71.6695f };
	Local_601[2 /*3*/] = { 790.4477f, -734.7306f, 26.5794f };
	Local_611[0 /*3*/] = { 2590.337f, -293.4442f, 92.0786f };
	Local_611[1 /*3*/] = { 2531.404f, -600.4139f, 63.2007f };
	Local_611[2 /*3*/] = { 2604.217f, 375.1005f, 107.472f };
	Local_621[0 /*3*/] = { -3233.263f, 953.5733f, 12.2187f };
	Local_621[1 /*3*/] = { -3078.346f, 675.666f, 12.9159f };
	Local_621[2 /*3*/] = { -2647.83f, 1504.821f, 117.968f };
	Local_621[3 /*3*/] = { -2564.214f, 2318.03f, 32.2153f };
	Local_634[0 /*3*/] = { -1314.019f, 2483.44f, 22.774f };
	Local_634[1 /*3*/] = { -409.0888f, 1172.897f, 324.6412f };
	Local_634[2 /*3*/] = { -1506.186f, 1473.57f, 116.8286f };
	Local_634[3 /*3*/] = { -518.6162f, 1995.393f, 205.0397f };
	Local_634[4 /*3*/] = { -742.0004f, 2320.376f, 70.661f };
	Local_634[5 /*3*/] = { -1851.372f, -602.5151f, 10.4741f };
	Local_634[6 /*3*/] = { -1666.413f, -538.9609f, 34.2561f };
	Local_656[0 /*3*/] = { -139.8096f, 1872.378f, 197.166f };
	Local_656[1 /*3*/] = { 695.1385f, 2297.118f, 49.9406f };
	Local_656[2 /*3*/] = { 167.7863f, 782.6042f, 208.0805f };
	Local_666[0 /*3*/] = { 1498.546f, 774.8596f, 76.4493f };
	Local_666[1 /*3*/] = { 1309.908f, 1090.133f, 104.561f };
	Local_666[2 /*3*/] = { 1510.705f, 1712.529f, 109.2625f };
	Local_666[3 /*3*/] = { 1070.393f, 2038.015f, 52.5529f };
	Local_679[0 /*3*/] = { 2509.309f, 1601.622f, 30.0754f };
	Local_679[1 /*3*/] = { 2546.551f, 1971.305f, 19.0362f };
	Local_686[0 /*3*/] = { -2339.021f, 3424.616f, 28.7394f };
	Local_686[1 /*3*/] = { -2494.466f, 3644.748f, 12.9216f };
	Local_686[2 /*3*/] = { -2223.443f, 4335.251f, 48.4857f };
	Local_686[3 /*3*/] = { -2369.652f, 4033.362f, 27.9193f };
	Local_699[0 /*3*/] = { -1578.525f, 3005.025f, 32.3629f };
	Local_699[1 /*3*/] = { -1441.716f, 4224.607f, 49.0816f };
	Local_699[2 /*3*/] = { -637.3727f, 4014.45f, 124.2407f };
	Local_699[3 /*3*/] = { -1092.599f, 2696.029f, 18.9957f };
	Local_699[4 /*3*/] = { -482.845f, 2853.052f, 32.7909f };
	Local_699[5 /*3*/] = { -1280.543f, 2543.44f, 17.3096f };
	Local_699[6 /*3*/] = { -435.9443f, 3039.766f, 27.85744f };
	Local_721[0 /*3*/] = { 322.4791f, 2624.685f, 43.4903f };
	Local_721[1 /*3*/] = { -118.0555f, 2831.105f, 49.9236f };
	Local_721[2 /*3*/] = { 8.32642f, 3036.625f, 39.93201f };
	Local_721[3 /*3*/] = { 486.82f, 3094.723f, 39.68279f };
	Local_721[4 /*3*/] = { 355.6632f, 3465.564f, 34.46225f };
	Local_721[5 /*3*/] = { 73.93981f, 3597.899f, 38.72102f };
	Local_721[6 /*3*/] = { -223.5336f, 3914.409f, 36.4796f };
	Local_743[0 /*3*/] = { 914.0446f, 3641.2f, 31.4356f };
	Local_743[1 /*3*/] = { 1713.807f, 3786.299f, 33.6656f };
	Local_743[2 /*3*/] = { 1798.266f, 3773.496f, 32.6142f };
	Local_743[3 /*3*/] = { 2008.204f, 3771.954f, 31.1457f };
	Local_743[4 /*3*/] = { 1860.152f, 3675.656f, 32.669f };
	Local_743[5 /*3*/] = { 1974.862f, 3855.369f, 31.162f };
	Local_743[6 /*3*/] = { 1841.707f, 3799.654f, 32.219f };
	Local_743[7 /*3*/] = { 1775.659f, 3335.493f, 40.2247f };
	Local_768[0 /*3*/] = { 2506.683f, 4104.038f, 37.3903f };
	Local_768[1 /*3*/] = { 2902.443f, 4428.438f, 47.2892f };
	Local_768[2 /*3*/] = { 2338.391f, 3146.762f, 47.1288f };
	Local_768[3 /*3*/] = { 2756.396f, 3396.395f, 55.5796f };
	Local_768[4 /*3*/] = { 2560.313f, 2619.59f, 36.7532f };
	Local_784[0 /*3*/] = { -1499.354f, 4980.817f, 61.8513f };
	Local_784[1 /*3*/] = { -686.7758f, 5841.241f, 15.7987f };
	Local_784[2 /*3*/] = { -547.5048f, 5405.471f, 64.2441f };
	Local_784[3 /*3*/] = { -411.6347f, 6050.651f, 30.4916f };
	Local_784[4 /*3*/] = { -860.8704f, 5421.505f, 33.9464f };
	Local_800[0 /*3*/] = { 331.2503f, 6586.893f, 27.8962f };
	Local_800[1 /*3*/] = { -37.7542f, 6319.74f, 30.3761f };
	Local_800[2 /*3*/] = { -115.5213f, 6456.377f, 30.4546f };
	Local_800[3 /*3*/] = { -145.1629f, 6442.393f, 30.4404f };
	Local_800[4 /*3*/] = { -46.1561f, 6475.15f, 30.4923f };
	Local_800[5 /*3*/] = { 533.2067f, 6537.78f, 26.6048f };
	Local_819[0 /*3*/] = { 1592.815f, 6427.924f, 24.2329f };
	Local_819[1 /*3*/] = { 1664.341f, 4845.467f, 41.0121f };
	Local_819[2 /*3*/] = { 1705.225f, 4713.161f, 41.4366f };
	Local_819[3 /*3*/] = { 1731.809f, 6387.005f, 33.5953f };
	Local_819[4 /*3*/] = { 1082.483f, 6503.538f, 20.0265f };
	Local_819[5 /*3*/] = { 1996.321f, 5148.716f, 44.2356f };
	Local_838[0 /*3*/] = { 2172.52f, 4759.795f, 40.0044f };
	Local_838[1 /*3*/] = { 2451.021f, 4953.289f, 43.9633f };
	Local_838[2 /*3*/] = { 2245.155f, 5562.862f, 51.4367f };
	Local_838[3 /*3*/] = { 2456.187f, 4596.741f, 35.8278f };
	Local_838[4 /*3*/] = { 3336.815f, 5464.448f, 18.5259f };
	Local_838[5 /*3*/] = { 3491.209f, 4707.075f, 50.1144f };
}

void func_399()
{
	iLocal_1564 = func_414();
	Local_859.f_145 = func_413(iLocal_1564);
	func_412(1);
	func_185();
	func_411(&(Local_859.f_244));
	func_410(&Local_859);
	Local_859.f_411 = 9;
	if (!func_235(Global_104439.f_18958, 4))
	{
		func_231(&(Global_104439.f_18958), 4);
		unk_0x05C9FC8771682275(func_12(), 1);
	}
	func_405(&Local_859);
	func_404(9);
	func_402(&Local_859);
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
	}
	Local_859.f_428 = func_401();
	func_400(&Local_859, 3, 6);
	Local_859.f_6 = 1.45f;
}

void func_400(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_401()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_86(unk_0x0031992CA618A445());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

void func_402(var uParam0)
{
	switch (func_50(uParam0))
	{
		case 0:
			func_403(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_403(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_403(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_403(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_403(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_403(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_403(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_403(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_403(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_403(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_403(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_404(int iParam0)
{
	Global_104439.f_18958.f_39[iParam0]++;
}

void func_405(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_409(uParam0, 3);
			func_408(uParam0, 14);
			break;
		
		case 1:
			func_409(uParam0, 14);
			func_408(uParam0, 8);
			break;
		
		case 2:
			func_409(uParam0, 8);
			func_408(uParam0, 7);
			break;
		
		case 3:
			func_409(uParam0, 15);
			func_408(uParam0, 6);
			break;
		
		case 4:
			func_409(uParam0, 0);
			func_408(uParam0, 3);
			break;
		
		case 5:
			func_409(uParam0, 6);
			func_408(uParam0, 7);
			break;
		
		case 6:
			func_409(uParam0, 8);
			func_408(uParam0, 15);
			break;
		
		case 7:
			func_409(uParam0, 8);
			func_408(uParam0, 14);
			break;
		
		case 8:
			func_409(uParam0, 7);
			func_408(uParam0, 15);
			break;
		
		case 9:
			func_409(uParam0, unk_0x3AF262D7332EEDF5(0, 17));
			iVar0 = func_407((uParam0->f_418.f_2 + unk_0x3AF262D7332EEDF5(1, 17)), 0, 16);
			func_408(uParam0, iVar0);
			func_406(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_406(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_407(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_408(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_409(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_410(var uParam0)
{
	uParam0->f_2 = unk_0x0031992CA618A445();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_128() };
	uParam0->f_17 = { func_128() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_156(uParam0, 32, 0);
}

void func_411(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_86(unk_0x0031992CA618A445());
	if (iVar0 == 0)
	{
		func_238(uParam0, 0, unk_0x0031992CA618A445(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_238(uParam0, 0, unk_0x0031992CA618A445(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_238(uParam0, 0, unk_0x0031992CA618A445(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_238(uParam0, 0, unk_0x0031992CA618A445(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_238(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_103495, unk_0x49CAADAD1ABAB70A(), 24);
		Global_103489 = 1;
	}
	else
	{
		StringCopy(&Global_103495, "NULL", 24);
		Global_103489 = 0;
	}
}

char* func_413(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_f_y_vinewood_04"):
			return "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
		
		case joaat("a_m_m_soucent_04"):
			return "A_M_M_SOUCENT_04_BLACK_MINI_01";
		
		case joaat("a_m_y_salton_01"):
			return "A_M_Y_SALTON_01_WHITE_MINI_02";
		
		case joaat("a_m_y_soucent_04"):
			return "A_M_Y_SOUCENT_04_BLACK_MINI_01";
		
		case joaat("a_m_y_vinewood_01"):
			return "A_M_Y_VINEWOOD_01_BLACK_MINI_01";
		
		default:
	}
	return "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
}

int func_414()
{
	switch (unk_0x3AF262D7332EEDF5(0, 5))
	{
		case 0:
			return joaat("a_f_y_vinewood_04");
		
		case 1:
			return joaat("a_m_m_soucent_04");
		
		case 2:
			return joaat("a_m_y_salton_01");
		
		case 3:
			return joaat("a_m_y_soucent_04");
		
		case 4:
			return joaat("a_m_y_vinewood_01");
		
		default:
	}
	return joaat("a_f_y_vinewood_04");
}

void func_415()
{
	if (unk_0xE096BC82D913B3DB())
	{
		func_8(9);
	}
	unk_0xBEE2834559A8897A();
}


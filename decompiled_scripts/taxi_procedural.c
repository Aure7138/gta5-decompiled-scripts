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
	uLocal_77 = unk_0x8FB19B229BCF8953();
	uLocal_78 = unk_0x355073A98A8FF72A();
	Local_83 = { 500f, 500f, 500f };
	bLocal_1646 = true;
	if (unk_0x76BF814AB8D4CAB8(67))
	{
		func_423();
	}
	unk_0x955FF17089AF6072(1);
	func_407();
	func_405(&uLocal_1310);
	func_404();
	func_385();
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
	
	if (func_384(&Local_859))
	{
		func_383(&Local_859);
		if (Local_859.f_410 > 0)
		{
			switch (iLocal_858)
			{
				case 0:
					if (func_382(&Local_859, 0))
					{
						iLocal_858 = 1;
					}
					break;
				
				case 1:
					func_380();
					break;
			}
		}
		else if (func_379(&Local_859, 31) > 5f)
		{
			func_423();
		}
	}
	else
	{
		if (Local_859.f_410 <= 9)
		{
			func_344(&Local_859, &uLocal_1637);
			func_343(&Local_859);
		}
		func_342(&Local_859);
		func_341(&Local_859, &uLocal_1644, 0);
		if (Local_859.f_410 > 2)
		{
			if (!func_340(&Local_859))
			{
				func_305();
			}
			else
			{
				func_290(&Local_859, "Taxi Not Driveable", func_304(&Local_859));
			}
		}
		if (Local_859.f_410 == 9)
		{
			func_266(&Local_859, 0, 1);
		}
		if (func_265("TC_HOWTOSTART"))
		{
			unk_0xEFF1F12403847394(1);
		}
		switch (Local_859.f_410)
		{
			case 2:
				if (func_259(&uLocal_1310, &(Local_859.f_14), 1))
				{
					func_258(&Local_859, 0);
				}
				break;
			
			case 0:
				if (func_255(&Local_859))
				{
					func_252();
					func_258(&Local_859, 1);
				}
				break;
			
			case 1:
				if (func_250())
				{
					func_249(&Local_859);
					func_258(&Local_859, 3);
				}
				break;
			
			case 3:
				if (!unk_0x31F12808DC47A9E5(Local_859.f_3))
				{
					func_248(&Local_859, Local_859.f_14);
					Local_859.f_11 = { Local_859.f_14 };
					func_247(Local_859.f_14, 0);
					unk_0xE6B6928D4EED07B1(Local_859.f_14, 2f, 0);
					Local_859.f_3 = unk_0x364B87C5C64BD100(26, iLocal_1564, Local_859.f_11, 0, 1, 1);
					unk_0x2F51E4FCC3B20959(Local_859.f_3, Local_859.f_145);
					func_246(&(Local_859.f_244), 3, Local_859.f_3, "TaxiGeneric", 0, 1);
					unk_0xB05E48165A6F6058(Local_859.f_3, 112, 1);
					if (!unk_0x0FAE113CE72ED842(Local_859.f_3))
					{
						unk_0x764AFC5A3A16C2B0(Local_859.f_3, 32, 0);
						unk_0x764AFC5A3A16C2B0(Local_859.f_3, 177, 1);
						unk_0x764AFC5A3A16C2B0(Local_859.f_3, 317, 1);
						Local_859.f_8 = func_245(Local_859.f_3, 0, 0);
						unk_0x61C2EC67C90074E5(Local_859.f_8, "TAXI_BLIP_PASS");
						unk_0x14172FEAD9C1EA26(1, 0);
						unk_0x63EECA6600F1090E(Local_859.f_8, 1);
						unk_0x48E76A4B7B58B77A("TAXI_Passenger", &(Local_859.f_413));
						unk_0xFB5F4D76105A21B5(1, Local_859.f_413, joaat("player"));
						unk_0xFB5F4D76105A21B5(2, Local_859.f_413, joaat("COP"));
						unk_0x641E77554763EF06(Local_859.f_3, Local_859.f_413);
						unk_0x6016A20BFEAEFE11(Local_859.f_3, Local_859.f_4, -1, 2048, 4);
					}
					func_244(&Local_859, 1, 0);
					func_258(&Local_859, 5);
				}
				break;
			
			case 5:
				if (!func_243(Global_104551.f_19067, 2))
				{
					if (func_242(9) >= 2)
					{
						func_241("TAXI_2CANCEL", -1);
						func_239(&(Global_104551.f_19067), 2);
					}
				}
				if (unk_0x02EA7C5633421A0F(0, 86) && !Local_859.f_48 > 0)
				{
					func_290(&Local_859, "Player cancelled on dispatch", 19);
				}
				if (func_213(&Local_859, 0, 1109393408))
				{
					func_258(&Local_859, 15);
				}
				break;
			
			case 15:
				if (func_212(&Local_859))
				{
					func_207(&Local_1297);
					Local_859.f_17 = { func_206(Local_1297.f_1) };
					Local_859.f_29 = { func_205(Local_1297.f_1) };
					func_201(&Local_859, 9, 1, 0, 0);
					if (!unk_0xE769D9B5158D0F11(Local_859.f_9))
					{
						Local_859.f_9 = func_200(Local_859.f_17, 1);
					}
					func_199(&Local_859);
					func_198();
					func_258(&Local_859, 9);
				}
				if (unk_0xC4B84EB67F78C1F0(Local_859.f_4, 0))
				{
					if (!unk_0x88B79D32B518C327(Local_859.f_2, Local_859.f_4, 0))
					{
						func_194(&Local_859);
						func_258(&Local_859, 5);
					}
				}
				break;
			
			case 9:
				if (func_178(&Local_859))
				{
					func_177(&Local_859, &(Local_859.f_43));
					func_172();
					func_169(&Local_859);
					func_163(&Local_859, 1097859072, 1117782016);
					if (func_159(&Local_859, func_162()))
					{
						fLocal_1645 = ((Local_1297.f_12 / func_379(&Local_859, 7)) * 3600f);
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
						unk_0x40D517D991458154(&(Local_859.f_9));
						iVar0 = unk_0x61E9B3BFA06B017B(0, 100);
						if (iVar0 < 10)
						{
							bLocal_1646 = true;
						}
						else
						{
							bLocal_1646 = false;
						}
						func_157(&Local_859);
						func_152(bLocal_1646);
						func_151(&Local_859);
						if (bLocal_1646)
						{
							func_258(&Local_859, 28);
						}
						else
						{
							func_258(&Local_859, 27);
						}
					}
				}
				break;
			
			case 27:
				if (func_141(&Local_859, 1))
				{
					if (!unk_0x74C2FE037DFC8B4A(Local_859.f_3, 0))
					{
						unk_0x56C7B20E11B37066(&uLocal_1647);
						unk_0xC8BEB049F3BFC0AB(&uLocal_1647);
						unk_0x81D9C52E2A8DA464(0);
						unk_0x4C7506FBB6FFDFC8(0, 0);
						if (unk_0xB6B12179F5BB7520(func_205(Local_1297.f_1), 5f, 1))
						{
							unk_0x71F977266792711C(0, func_205(Local_1297.f_1), 5f, 0);
						}
						else
						{
							unk_0xA303A4837FBB8DDE(0, func_205(Local_1297.f_1), 1f, -1, 1048576000, 0, 1193033728);
							unk_0x73E31FC09D8359DB(0, 500);
							unk_0x277F581982E2DD7D(0, func_139(func_140(), "WORLD_HUMAN_STAND_MOBILE", "WORLD_HUMAN_AA_SMOKE"), 5000, 1);
							unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
						}
						unk_0xAFDA7B8F83B2CA58(uLocal_1647);
						unk_0x73F69DD57B7E92A9(Local_859.f_3, uLocal_1647);
						unk_0x10F31830C95ED2E5(Local_859.f_3, 1);
					}
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					func_258(&Local_859, 29);
				}
				break;
			
			case 28:
				if (func_98(&uLocal_1289, &Local_859, &(Local_859.f_3), &uLocal_1290, 1))
				{
					func_258(&Local_859, 29);
				}
				break;
			
			case 29:
				switch (iLocal_168)
				{
					case 0:
						unk_0x929C3CBA660376D5(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
						func_96(&Local_1648, "TAXI_FARE_FIN", Local_859.f_50, Local_859.f_56, (Local_859.f_50 + Local_859.f_56), "TAXI_FARE_DET", 4000, 1);
						Local_1648.f_1 = 4000;
						func_95(1);
						iLocal_168 = 6;
						break;
					
					case 6:
						if (!func_91(&Local_1648, 1))
						{
							func_69(&Local_859);
							func_66(&Local_859, 0, 0, 0);
							func_95(0);
							iLocal_168 = 7;
						}
						break;
					
					case 7:
						func_2(1, &Local_859, 1);
						func_258(&Local_859, 30);
						break;
				}
				break;
			
			case 30:
				func_423();
				break;
			}
	}
}

void func_2(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_41(uParam1);
		if (!unk_0x0FAE113CE72ED842(uParam1->f_3))
		{
			unk_0x764AFC5A3A16C2B0(uParam1->f_3, 317, 1);
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
	func_383(uParam0);
	if (func_38())
	{
		func_36();
	}
	func_34();
	unk_0x08FC50794202A47C();
	unk_0xEFF1F12403847394(1);
	func_31(0);
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		unk_0xE58E53D56F33BF17(uParam0->f_4, 0);
		unk_0x84854164769BB257(uParam0->f_4);
		unk_0xF584C5576016093C(uParam0->f_4);
	}
	func_247(uParam0->f_14, 1);
	func_29(uParam0->f_14, 1, 1114636288);
	func_28(&(uParam0->f_244), 3);
	unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 1);
	if (func_25())
	{
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	}
	unk_0xC7321FA901D43FA2(1);
	func_15(0, 1, 1, 0);
	unk_0x77B57B2BB7F3EA0A(1);
	unk_0x4A3AD9384F0AAEA0(1);
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		unk_0x13AD763DBD687842(*uParam0, 0);
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
		unk_0x9A8BE560E024CAB0(1);
	}
	if (func_243(Global_104551.f_19067, 4))
	{
		func_13(&(Global_104551.f_19067), 4);
		unk_0x116D235ABEF5CE46(func_12(), 0);
	}
	if (bParam1)
	{
		func_11(uParam0);
	}
	func_10(uParam0);
	unk_0x334F1DD67B2EC86A("gestures@m@standing@casual");
	unk_0x334F1DD67B2EC86A("oddjobs@taxi@");
	unk_0x334F1DD67B2EC86A("oddjobs@towingcome_here");
	if (unk_0xA1C84586015AE5DB())
	{
		func_8(uParam0->f_411);
	}
	if (!unk_0xA126D857D0E10968(unk_0x0A91D180DDC7A1B8()))
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	}
	unk_0x0690219D4566637A(unk_0xF2DB717A73826179((func_4(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_5(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_8(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_9(iParam0)}, 6);
		if (!unk_0xE0C4A595CD61B7F2(&uVar0))
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
	unk_0x7886AA7E3680A3D4(uParam0->f_51[0]);
}

void func_11(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (!unk_0x657B649BA2AD3582(uParam0->f_3, 0))
			{
				unk_0x456E65E2EDE3381E(uParam0->f_3);
			}
			unk_0x40E2910BAF39B1C7(uParam0->f_3, 0);
			unk_0xFB5F4D76105A21B5(255, uParam0->f_413, joaat("player"));
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xDBE64C5761554FBF(&(uParam0->f_3));
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
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_24(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_23())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_24(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_20(unk_0x8CFC7D6E1DA5D304())) && !func_17(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_16())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_20(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_16()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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

int func_19()
{
	return Global_1312736;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_22(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_25()
{
	if (!func_27() && !func_26())
	{
		if (!unk_0x2102D86657DB9A09(unk_0x0A91D180DDC7A1B8()))
		{
			return 1;
		}
	}
	return 0;
}

int func_26()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
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
		unk_0x9E1C273D1197BF71(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x52756EBA46F4FA41(Var0, Var3, 1);
		unk_0xEE0B7B5DD68BDE7A();
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
	if (Global_14615)
	{
		func_32(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_23())
	{
		Global_14453.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
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
		if (Global_89907[iVar0 /*17*/] && !Global_89907[iVar0 /*17*/].f_1)
		{
			if (Global_89907[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89907[iVar0 /*17*/].f_5 != 88 && Global_89907[iVar0 /*17*/].f_5 != 89) && Global_89907[iVar0 /*17*/].f_5 != 92)
				{
					func_35(Global_89907[iVar0 /*17*/].f_5, 1);
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
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

void func_36()
{
	Global_14622 = 0;
	func_37();
}

void func_37()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

int func_38()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
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
			Global_104551.f_19067.f_22[0]++;
			func_40("Fares Completed ++ = ", Global_104551.f_19067.f_22[0]);
			break;
		
		case 1:
			Global_104551.f_19067.f_22[1]++;
			func_40("Fares Failed ++ = ", Global_104551.f_19067.f_22[1]);
			break;
		
		case 2:
			Global_104551.f_19067.f_22[2]++;
			func_40("Fares Accepted ++ ", Global_104551.f_19067.f_22[2]);
			break;
		
		case 3:
			Global_104551.f_19067.f_22[3]++;
			func_40("Fares Expired ++ ", Global_104551.f_19067.f_22[3]);
			break;
		
		case 13:
			Global_104551.f_19067.f_22[13]++;
			func_40("Passengers run ++ = ", Global_104551.f_19067.f_22[13]);
			break;
		
		case 14:
			Global_104551.f_19067.f_22[14]++;
			func_40("Passenger Forced to Pay ++ = ", Global_104551.f_19067.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104551.f_19067.f_22[4])
				{
					Global_104551.f_19067.f_22[4] = iParam1;
					func_40("This distance ", iParam1);
					func_40(" is longer than current best", Global_104551.f_19067.f_22[4]);
				}
				else
				{
					func_40("Longest Distance Not Beat ", Global_104551.f_19067.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104551.f_19067.f_22[5] = (Global_104551.f_19067.f_22[5] + iParam1);
			func_40("Total Distance w/ Passenger = ", Global_104551.f_19067.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_104551.f_19067.f_22[6]++;
			}
			else
			{
				Global_104551.f_19067.f_22[6] = (Global_104551.f_19067.f_22[6] + iParam1);
			}
			func_40("Wanted Levels ++ = ", Global_104551.f_19067.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_104551.f_19067.f_22[7] = (Global_104551.f_19067.f_22[7] + iParam1);
			}
			else
			{
				Global_104551.f_19067.f_22[7]++;
			}
			func_40("Wanted Levels Lost = ", Global_104551.f_19067.f_22[7]);
			break;
		
		case 8:
			Global_104551.f_19067.f_22[8]++;
			func_40("Taxis wrecked ++ = ", Global_104551.f_19067.f_22[8]);
			break;
		
		case 9:
			Global_104551.f_19067.f_22[9]++;
			func_40("Horn Honked ++ = ", Global_104551.f_19067.f_22[9]);
			break;
		
		case 10:
			Global_104551.f_19067.f_22[10] = (Global_104551.f_19067.f_22[10] + iParam1);
			func_40("Total Money Earned = ", Global_104551.f_19067.f_22[10]);
			break;
		
		case 11:
			Global_104551.f_19067.f_22[11] = (Global_104551.f_19067.f_22[11] + iParam1);
			func_40("Total Tips Earned = ", Global_104551.f_19067.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104551.f_19067.f_22[12])
			{
				Global_104551.f_19067.f_22[12] = iParam1;
				func_40("New Highest Tip = ", Global_104551.f_19067.f_22[12]);
			}
			else
			{
				func_40("Highest Tip Not Reached = ", Global_104551.f_19067.f_22[12]);
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
	func_239(&(Global_104551.f_19067), 1024);
	if (!func_243(Global_104551.f_19067, 64))
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_46() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
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
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_46()
{
	return Global_25233;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
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
	if (iParam0 >= 78)
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
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_62(&Global_4267379))
	{
		if (func_60(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_53(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
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
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
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
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
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
	return (*uParam0)[iParam1] == 78;
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
	func_58(uParam0, (Global_4267378 - 0.5f));
}

void func_57(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_58(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_59(var uParam0)
{
	return uParam0->f_80;
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
	return uParam0->f_79 == 1;
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
	return Global_35859 == iParam0;
}

void func_65(int iParam0)
{
	Global_103261.f_22 = iParam0;
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
	uParam0->f_1 = (func_5(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_69(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_70(func_86(), 21, iVar0, 0, 0);
		func_39(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_71(Global_104551.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD194C635833AC189(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xD92C8D8AF3C67820(iVar1, iVar0, 1);
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
	
	func_85();
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
					func_84(99, 1);
					func_83(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_82(0);
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
							func_83(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_83(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_83(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_83(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_84(95, iParam3);
					break;
				
				case 1:
					func_84(97, iParam3);
					break;
				
				case 2:
					func_84(96, iParam3);
					break;
			}
			func_84(98, iParam3);
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
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_83(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_73(iParam0);
	if (Global_35859 == 15)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_74(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_48(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_76() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_76() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_75(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		case 8:
			return "COUP_XMAS2017";
		
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
	func_84(93, iParam0);
	func_84(29, iParam0);
	func_84(30, iParam0);
}

bool func_78(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_79(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_76() /*12062*/].f_7637.f_10, iParam0);
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_81(iParam0, iParam1);
	uVar2 = func_80(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_82(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_47(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_51(27, 1);
	return 1;
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_85()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

int func_86()
{
	func_87();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_87()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_90(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_89(unk_0x18F7BE9ACB7D08F4());
			if (func_88(iVar0) && (!func_64(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_88(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_88(int iParam0)
{
	return iParam0 < 3;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_90(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_90(int iParam0)
{
	if (func_88(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_91(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_67(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_67(&(uParam0->f_5));
				func_94(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_93(&(uParam0->f_5)) > 0.33f)
			{
				func_92(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_93(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_67(&(uParam0->f_5));
			func_94(uParam0, 1051260355);
		}
		else if (func_93(&(uParam0->f_5)) > 0.33f)
		{
			func_92(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_92(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_93(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_94(var uParam0, int iParam1)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SHARD_ANIM_OUT");
	unk_0x22DD5585E00B80C3(uParam0->f_9);
	unk_0x954263F3D07BEFC2(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_95(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

void func_96(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0x76F4FB5EFF5BDED5(*uParam0, func_97());
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0x70A9E4720D71C2D5(iParam7);
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xC30401186AC91B01();
	unk_0x0ECBA72FAFCEBA59(sParam5);
	unk_0x3A12001DBF78DC62(uParam2);
	unk_0x3A12001DBF78DC62(uParam3);
	unk_0x3A12001DBF78DC62(iParam4);
	unk_0xC30401186AC91B01();
	unk_0xE2B30EB9B14EEAB2();
	func_67(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

char* func_97()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

int func_98(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x74C2FE037DFC8B4A(*uParam2, 0))
			{
				func_134(uParam1, 320, bParam4);
				unk_0xD592E5486B0119A2(*uParam2, unk_0x61E9B3BFA06B017B(100, 300));
				func_132(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_39(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x74C2FE037DFC8B4A(*uParam2, 0))
			{
				if (!unk_0x657B649BA2AD3582(*uParam2, 0))
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x74C2FE037DFC8B4A(*uParam2, 0))
			{
				func_104(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_103(uParam1->f_2, *uParam2))
				{
					if (unk_0xC4B84EB67F78C1F0(uParam1->f_4, 0))
					{
						if (unk_0x1B843A60307EECA4(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0x1B843A60307EECA4(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x657B649BA2AD3582(uParam1->f_2, 0))
						{
							if (unk_0xEA07F07380ABC460(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0xAADA5865C8BFAE94(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0xEA07F07380ABC460(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x9381BBF272130ED6(uParam1->f_2, 6))
									{
										if (unk_0x4D73A339AD1764B4())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0xEA07F07380ABC460(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0xAADA5865C8BFAE94(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0xEA07F07380ABC460(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0xAADA5865C8BFAE94(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_102(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_102(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_102(&uLocal_45, 0, 0);
			if (!unk_0x74C2FE037DFC8B4A(*uParam2, 0))
			{
				if (unk_0xE769D9B5158D0F11(uParam1->f_8))
				{
					unk_0x40D517D991458154(&(uParam1->f_8));
				}
				unk_0x40E2910BAF39B1C7(*uParam2, 1);
				unk_0xC8BEB049F3BFC0AB(&uVar0);
				unk_0x9908B4382DC81484(0, 5000);
				unk_0x9603FB72C3126396(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x4C7506FBB6FFDFC8(0, 0);
				unk_0xAFDA7B8F83B2CA58(uVar0);
				unk_0x73F69DD57B7E92A9(*uParam2, uVar0);
				unk_0x56C7B20E11B37066(&uVar0);
				unk_0x10F31830C95ED2E5(*uParam2, 1);
				func_201(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0x08FC50794202A47C();
			}
			else
			{
				*uParam0 = 4;
				unk_0x08FC50794202A47C();
			}
			if (unk_0xE769D9B5158D0F11(uParam1->f_8))
			{
				unk_0x40D517D991458154(&(uParam1->f_8));
			}
			func_99(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x3EFEA066EF92D5B7(uParam3->f_6))
			{
				if (unk_0xE769D9B5158D0F11(uParam3->f_5))
				{
					unk_0x40D517D991458154(&(uParam3->f_5));
				}
				func_157(uParam1);
				func_39(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x74C2FE037DFC8B4A(*uParam2, 0))
			{
				unk_0xDBE64C5761554FBF(uParam2);
				if (unk_0xE769D9B5158D0F11(uParam1->f_8))
				{
					unk_0x40D517D991458154(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0x77E9D78B235BDEFB(unk_0x0A91D180DDC7A1B8(), 2, 0);
				unk_0xE223A1A4864F355C(unk_0x0A91D180DDC7A1B8(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_99(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		uParam1->f_2 = { unk_0x761660F5CE986DC4(iParam0, 1) };
		unk_0xD592E5486B0119A2(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x61E9B3BFA06B017B(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x3D9DB425A03507F7(iParam0, 1067030938, 1069547520) };
	}
	unk_0xD2A9C3F486236CC5(&(uParam1->f_1), 3);
	unk_0xD2A9C3F486236CC5(&(uParam1->f_1), 4);
	Var0 = { unk_0xA5D7493D711B335A(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x5ABEF538412867C6(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xE769D9B5158D0F11(uParam1->f_5))
		{
			uParam1->f_5 = func_100(uParam1->f_6);
			unk_0x61C2EC67C90074E5(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x61C2EC67C90074E5(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_100(var uParam0)
{
	var uVar0;
	
	if (!unk_0x351CD242DF0BE9BA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x34373C6A4661A2FA(uParam0);
	unk_0x0590222010A36CE4(uVar0, func_101(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	return uVar0;
}

float func_101(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_102(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(iParam2);
		unk_0x605B63B87CCF606F("FocusIn");
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x9A8BE560E024CAB0(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(uParam0->f_3))
	{
		if (func_265(uParam0->f_3))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (func_265(sVar0))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
}

int func_103(var uParam0, int iParam1)
{
	if (!unk_0x0FAE113CE72ED842(iParam1))
	{
		if (!unk_0xEA07F07380ABC460(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x6157232E032EBC56(unk_0x761660F5CE986DC4(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_104(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_105(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_105(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_106(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_106(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		func_102(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_107(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_107(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x76AF8AC551A53D4C())
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xE0C4A595CD61B7F2(iVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_265(iVar0))
	{
		func_131();
	}
	if (func_130(iParam1) && unk_0xBF0517F7142EEB5B(iParam1))
	{
		iVar1 = 0;
		if (unk_0xB6C2454233C8F532(iParam1))
		{
			unk_0xD8FED54465FFD16D(unk_0x6DE4035D8BAB73B4(iParam1));
			unk_0x1834FEB33AA9A42E(unk_0x6DE4035D8BAB73B4(iParam1), 1);
			if (unk_0xC5581857956555AD(unk_0x6DE4035D8BAB73B4(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x978B4E1292EBBE41(iParam1))
		{
			unk_0x537FF9DF0013B635(unk_0x00ABCA0241A97143(iParam1));
			if (unk_0x95AB6E5C406E24CB(unk_0x00ABCA0241A97143(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam1))
		{
			unk_0x33385B2D899D1FC3(unk_0x466780B966EA4B56(iParam1));
			if (unk_0xFAA49DBF76CAA296(unk_0x466780B966EA4B56(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x76AF8AC551A53D4C())
		{
			if (func_125(uParam0, bParam7, bParam9, 0))
			{
				func_121(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0)) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if ((iVar1 && !unk_0x622E10ED992CEB95()) && uParam8)
						{
							if (!func_265(iVar0))
							{
								func_241(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0))
				{
					if (((unk_0x3AAE8FF7FB37F69E(iParam1) && iVar1) && !unk_0x622E10ED992CEB95()) && uParam8)
					{
						if (!func_265(iVar0))
						{
							func_241(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xE0C4A595CD61B7F2(sParam5))
			{
				if (func_265(sParam5))
				{
					unk_0xEFF1F12403847394(1);
				}
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
					{
						func_102(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
					{
						func_102(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
					{
						func_102(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
					{
						func_102(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
					{
						func_102(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
				{
					func_102(uParam0, iVar0, 1);
				}
			}
			if (!func_125(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_108(uParam0);
				}
			}
		}
	}
	else
	{
		func_102(uParam0, iVar0, 0);
	}
}

void func_108(var uParam0)
{
	if (func_130(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x81D9C52E2A8DA464(unk_0x18F7BE9ACB7D08F4());
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0x9A8BE560E024CAB0(1);
		unk_0xBC3C2A3068412290(0);
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		unk_0x605B63B87CCF606F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_109(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x5AFB8ED811F05E4D()
		{
			return 1;
		}
	}
	return 0;
}

int func_110(bool bParam0)
{
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104551.f_10019.f_100++;
			}
			return Global_104551.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104551.f_10019.f_101++;
			}
			return Global_104551.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104551.f_10019.f_102++;
			}
			return Global_104551.f_10019.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_111(char* sParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0xFAFFA408239A026B(sParam0) && func_265(sParam0)) || func_265("CMN_HINT"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return 0;
	}
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x51CFE20A158947F4())
	{
		return 0;
	}
	if (func_33(0))
	{
		return 0;
	}
	if (func_120())
	{
		return 0;
	}
	if (unk_0x91A08229665C71F1())
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53082)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
			{
				return 0;
			}
			if (unk_0xE368D11FD9469808())
			{
				return 0;
			}
		}
	}
	if ((func_119() || func_118(Global_1646129.f_138609)) || func_117())
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if ((unk_0xF8DAA7AB81AFC008(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), func_116(unk_0x18F7BE9ACB7D08F4(), 0)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("apc") && func_116(unk_0x18F7BE9ACB7D08F4(), 0) != -1)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("akula") && func_116(unk_0x18F7BE9ACB7D08F4(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_113(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 != func_115())
	{
		if (func_114(iParam0, 1, 1))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_114(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_115()
{
	return -1;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			iVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(iVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(iVar0, iVar3, 0) == iParam0)
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

var func_117()
{
	return Global_2447128.f_16;
}

bool func_118(int iParam0)
{
	return iParam0 == 51;
}

var func_119()
{
	return Global_2447128.f_15;
}

bool func_120()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

void func_121(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316746 == 1)
	{
		return;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		func_102(uParam0, 0, 0);
	}
	if (func_124(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xB6C2454233C8F532(iParam1))
		{
			iVar0 = unk_0x6DE4035D8BAB73B4(iParam1);
			if (!unk_0x657B649BA2AD3582(iVar0, 0))
			{
				if (unk_0xEE1E09882FA264CA(iVar0))
				{
					if (!func_122())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xC1A23BED641FA58E(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x9A8BE560E024CAB0(0);
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
	unk_0x211B8384E5838644(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), iParam1, -1, iVar3, iVar4);
	unk_0x9575CEFF222148A6("FocusIn", 0, 0);
	unk_0x64D773F3BE6DC50A("HINT_CAM_SCENE");
	unk_0x929C3CBA660376D5(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_122()
{
	return func_123(unk_0x8CFC7D6E1DA5D304());
}

int func_123(int iParam0)
{
	if (unk_0x4F69FBD64CDF125B(unk_0x6604E096142B4B55(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_124(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_125(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (!func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_128(bParam1, bParam2, bParam3) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (func_127(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_131();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				unk_0x9A8BE560E024CAB0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				unk_0x9A8BE560E024CAB0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0x978B4E1292EBBE41(iParam0))
		{
			if (unk_0xC4B84EB67F78C1F0(unk_0x00ABCA0241A97143(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xB6C2454233C8F532(iParam0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x6DE4035D8BAB73B4(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131()
{
	unk_0xD2A9C3F486236CC5(&Global_2324, 4);
}

void func_132(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_383(uParam0);
	}
	if (!unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		uParam0->f_8 = func_133(*uParam1, 0, 0);
	}
	if (!unk_0xE0C4A595CD61B7F2(sParam2))
	{
		unk_0x61C2EC67C90074E5(uParam0->f_8, sParam2);
	}
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_101(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_101(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_101(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_134(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		unk_0x40E2910BAF39B1C7(uParam0->f_3, 0);
		unk_0xA3F48AA4B6323A62(uParam0->f_3);
		unk_0x470C9634914699C0(uParam0->f_3, 3, 0);
		unk_0x273FE09AE985A00A(uParam0->f_3, 17, 1);
		unk_0x267F7A2DFDFFB077(uParam0->f_3);
		if ((func_138(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_137(uParam0->f_29)) && !bParam2)
		{
			func_135(uParam0);
		}
		else
		{
			unk_0x470C9634914699C0(uParam0->f_3, 1024, 1);
			unk_0x470C9634914699C0(uParam0->f_3, 131072, 1);
			unk_0xC8BEB049F3BFC0AB(&uVar0);
			unk_0x5941F8B2A813BBA8(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			else
			{
				unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
			}
			unk_0x4C7506FBB6FFDFC8(0, 0);
			unk_0xAFDA7B8F83B2CA58(uVar0);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
			unk_0x56C7B20E11B37066(&uVar0);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
	}
}

void func_135(var uParam0)
{
	var uVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_124(func_136(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xB88121FF8A34A66F(uParam0->f_3, 84.9058f);
				unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xB88121FF8A34A66F(uParam0->f_3, 68.3138f);
				unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x267F7A2DFDFFB077(uParam0->f_3);
			unk_0x56C7B20E11B37066(&uVar0);
			unk_0xC8BEB049F3BFC0AB(&uVar0);
			unk_0x5941F8B2A813BBA8(0, 0, 0);
			unk_0x4C7506FBB6FFDFC8(0, 0);
			unk_0xA303A4837FBB8DDE(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x37B842A4CEC2630C(0, 1);
				unk_0xA303A4837FBB8DDE(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x8A32C8BCE5987E9B(0, 151.7794f, 0);
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 20000);
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xB6B12179F5BB7520(uParam0->f_29, 15f, 1))
			{
				unk_0x71F977266792711C(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
			}
			unk_0xAFDA7B8F83B2CA58(uVar0);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
			unk_0x56C7B20E11B37066(&uVar0);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_3, 1);
	}
}

Vector3 func_136()
{
	struct<3> Var0;
	
	return Var0;
}

int func_137(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_138(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), Param1, iParam4);
}

char* func_139(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_140()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_141(var uParam0, bool bParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_150(uParam0) && func_146(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_145(uParam0, 2097152))
				{
					func_142(uParam0);
				}
			}
			else
			{
				func_142(uParam0);
			}
		}
		else if (!func_150(uParam0))
		{
			if (bParam1)
			{
				if (func_145(uParam0, 2097152))
				{
					if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_142(var uParam0)
{
	struct<3> Var0;
	
	if (func_137(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_143(uParam0, Var0);
}

void func_143(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && unk_0x160400EAEE246B4D(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_144(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x15EE504466B7BBD3(Var0, Param1, 0) < unk_0x15EE504466B7BBD3(Var3, Param1, 0) && unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x15EE504466B7BBD3(Var0, Param1, 0) >= unk_0x15EE504466B7BBD3(Var3, Param1, 0) && unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xD7A975DB04C06BA4(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (unk_0x160400EAEE246B4D(iParam0, iParam1))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_145(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_243(uParam0->f_81, iParam1) && !func_38());
	}
	return func_38();
}

int func_146(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_33(1))
			{
				func_31(0);
			}
			if (func_25())
			{
				func_149();
				return 1;
			}
			else if (func_147(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 256);
				}
				else
				{
					unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 0);
				}
			}
			unk_0x0D984C74D0E76505(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_147(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_148(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_148(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

void func_149()
{
	if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
	}
}

int func_150(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_151(var uParam0)
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
	if (!func_243(uParam0->f_55, 1))
	{
		func_239(&(uParam0->f_55), 1);
	}
}

void func_152(bool bParam0)
{
	func_155();
	unk_0x08FC50794202A47C();
	if (bParam0)
	{
		func_201(&Local_859, 105, 1, 0, 0);
	}
	else if (Local_859.f_56 < Local_859.f_58)
	{
		if (!unk_0x0FAE113CE72ED842(Local_859.f_3))
		{
			func_153(Local_859.f_3, "GENERIC_INSULT_MED", Local_859.f_145, 4);
		}
	}
	else if (Local_859.f_56 >= Local_859.f_59)
	{
		if (!unk_0x0FAE113CE72ED842(Local_859.f_3))
		{
			func_153(Local_859.f_3, "TAXI_GOOD", Local_859.f_145, 4);
		}
	}
	else if (!unk_0x0FAE113CE72ED842(Local_859.f_3))
	{
		func_153(Local_859.f_3, "GENERIC_THANKS", Local_859.f_145, 4);
	}
	func_239(&(Local_859.f_81), 2097152);
	func_66(&Local_859, 16, 4f, 0);
}

void func_153(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, uParam2, func_154(iParam3), 0);
}

int func_154(int iParam0)
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

void func_155()
{
	Global_14622 = 0;
	func_156();
}

void func_156()
{
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0x815093B4702C59D8();
		Global_16767 = 0;
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_157(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_158(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_39(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_39(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_158(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

int func_159(var uParam0, int iParam1)
{
	if (func_50(uParam0) == 2)
	{
		if (unk_0x8673F2F1802ADEF7(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_161(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1) && func_160(1, 1, 1)) && unk_0x19160618B3657F0E(uParam0->f_4))
		{
			return func_146(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x8673F2F1802ADEF7(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1) && func_160(1, 1, 1)) && unk_0x19160618B3657F0E(uParam0->f_4))
	{
		return func_146(uParam0, 1, iParam1);
	}
	return 0;
}

int func_160(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xED304DF0BE5BEBDD())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (bParam0)
		{
			if (unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) != unk_0x18F7BE9ACB7D08F4())
				{
					return 0;
				}
			}
		}
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x39B21DBADBAFCF25(iVar0) < 0.95f || unk_0x39B21DBADBAFCF25(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!unk_0x91FFC4C24A972415(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

float func_161(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

float func_162()
{
	float fVar0;
	
	fVar0 = unk_0x2A72627520A107B5(Local_859.f_4);
	if (fVar0 >= 5f)
	{
		return (fVar0 * 0.5f);
	}
	return 6f;
}

void func_163(var uParam0, float fParam1, float fParam2)
{
	if (func_150(uParam0) && func_243(uParam0->f_44, 4))
	{
		if ((unk_0xF00EF9585E7FAC26(uParam0->f_4) || unk_0x2A72627520A107B5(uParam0->f_4) < 3f) && func_168(uParam0))
		{
			if (!func_167(uParam0, 2))
			{
				func_165(uParam0, 2);
			}
			else if (func_150(uParam0))
			{
				if (func_379(uParam0, 2) > fParam1 && !func_167(uParam0, 14))
				{
					if (func_27())
					{
						func_201(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_201(uParam0, 48, 1, 0, 0);
					}
					func_66(uParam0, 2, 0, 0);
					if (func_167(uParam0, 10))
					{
						func_66(uParam0, 10, 0, 0);
					}
				}
				if (!func_167(uParam0, 3))
				{
					func_66(uParam0, 3, 0, 0);
				}
				else if (func_379(uParam0, 3) >= fParam2)
				{
					func_164(uParam0, 3, 0);
					func_290(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_167(uParam0, 2))
			{
				func_164(uParam0, 2, 0);
			}
			if (func_167(uParam0, 3))
			{
				func_164(uParam0, 3, 0);
			}
		}
	}
}

void func_164(var uParam0, int iParam1, bool bParam2)
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
			func_92(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_92(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_165(var uParam0, int iParam1)
{
	func_166(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_166(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_67(uParam0);
	}
}

bool func_167(var uParam0, int iParam1)
{
	return func_7(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_168(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			return 1;
		}
	}
	return 0;
}

void func_169(var uParam0)
{
	if (func_171(uParam0))
	{
		func_170(uParam0);
	}
}

void func_170(var uParam0)
{
	if (unk_0x278E531440F0A177() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xFE4CC02D61DA2398();
			func_164(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_379(uParam0, 20) > 3f)
				{
					func_201(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_243(uParam0->f_81, 262144) || !func_243(uParam0->f_81, 1048576))
				{
					if (func_379(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_201(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_243(uParam0->f_82, 67108864))
				{
					if (func_379(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_201(uParam0, 85, 1, 0, 0);
						func_164(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_379(uParam0, 20) > 8f)
				{
					func_201(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_243(uParam0->f_81, 262144) || func_243(uParam0->f_82, 67108864))
			{
				if (!func_167(uParam0, 22))
				{
					func_165(uParam0, 22);
				}
			}
			if (func_167(uParam0, 22) && func_379(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_243(uParam0->f_81, 1048576))
					{
						func_201(uParam0, 84, 1, 0, 0);
						func_164(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_243(uParam0->f_82, 134217728))
					{
						func_201(uParam0, 85, 1, 0, 0);
						func_164(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_171(var uParam0)
{
	return uParam0->f_120;
}

void func_172()
{
	if (!func_243(Local_859.f_44, 1))
	{
		switch (Local_859.f_412)
		{
			case 0:
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
				{
					if (func_379(&Local_859, 9) > 1f)
					{
						func_176(&Local_859, unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()));
						func_66(&Local_859, 9, 0, 0);
						if (unk_0xE769D9B5158D0F11(Local_859.f_9))
						{
							unk_0x1DB03C7D3DC49006(Local_859.f_9, 0);
							unk_0x63EECA6600F1090E(Local_859.f_9, 0);
						}
						Local_859.f_140 = 1;
						Local_859.f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_38() && func_379(&Local_859, 9) > 4f)
				{
					func_201(&Local_859, 52, 1, 0, 0);
					Local_859.f_412 = 2;
				}
				break;
			
			case 2:
				if (func_175("TAXI_OBJ_POL", 0, 0))
				{
					Local_859.f_412 = 3;
				}
				else if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					Local_859.f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xAAC7941A7E0EE97A(unk_0x0A91D180DDC7A1B8(), func_174(&Local_859)))
				{
					func_176(&Local_859, unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()));
					func_39(6, 0);
				}
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) < 1)
				{
					if (func_175("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x08FC50794202A47C();
					}
					if (unk_0xE769D9B5158D0F11(Local_859.f_9))
					{
						unk_0x1DB03C7D3DC49006(Local_859.f_9, 255);
						unk_0x63EECA6600F1090E(Local_859.f_9, 1);
					}
					Local_859.f_140 = 0;
					Local_859.f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_38())
				{
					func_39(7, func_174(&Local_859));
					func_176(&Local_859, 0);
					Local_859.f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_38())
				{
					func_173(&Local_1566, -1, 4);
					Local_859.f_412 = 0;
				}
				break;
			}
	}
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_174(var uParam0)
{
	return uParam0->f_106;
}

bool func_175(char* sParam0, int iParam1, int iParam2)
{
	unk_0x096CAD0A8332D384(sParam0);
	if (iParam1 == 1)
	{
		unk_0xBEFD1ED9B6BE5127(iParam2);
	}
	return unk_0x45CD208BAEE25DF4();
}

void func_176(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_177(var uParam0, var uParam1)
{
	unk_0x205C6BBC993A91EA(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_178(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (!unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1) && !unk_0xDB5E52F2078862CA(uParam0->f_3))
			{
				func_290(uParam0, "Passenger left car.", 9);
			}
			else if (func_190(uParam0))
			{
				if (func_175("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x9A279C737383BE86("TAXI_OBJ_PICKUP");
				}
				if (unk_0xC8AB6A5E6C1E6613())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
				{
				}
				func_179(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_179(var uParam0, bool bParam1)
{
	func_189(uParam0, uParam0->f_3);
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_167(uParam0, 14))
			{
				if (func_38())
				{
					func_188(1);
				}
				func_187(uParam0, 11, 1);
				func_182(uParam0, 1);
				func_66(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_150(uParam0))
				{
					if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
					{
					}
					if (unk_0x657B649BA2AD3582(uParam0->f_2, 0))
					{
						if (func_379(uParam0, 15) > 5f)
						{
							func_66(uParam0, 15, 0f, 1);
						}
					}
					if (func_379(uParam0, 14) > 20f)
					{
						func_290(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_379(uParam0, 14) > 20f)
				{
					if (func_180(uParam0->f_4, 1) > 40f)
					{
						func_290(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_290(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_180(int iParam0, int iParam1)
{
	return func_181(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), iParam0, iParam1);
}

float func_181(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

void func_182(var uParam0, bool bParam1)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE769D9B5158D0F11(uParam0->f_8))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_8, 0);
				unk_0x63EECA6600F1090E(uParam0->f_8, 0);
				func_186(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE769D9B5158D0F11(uParam0->f_9))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
				unk_0x63EECA6600F1090E(uParam0->f_9, 0);
				unk_0x08FC50794202A47C();
				if (func_150(uParam0))
				{
					func_201(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_186(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_183(uParam0, 0, 0);
		}
		else if (unk_0xE769D9B5158D0F11(uParam0->f_10))
		{
			unk_0x40D517D991458154(&(uParam0->f_10));
			if (unk_0xE769D9B5158D0F11(uParam0->f_8))
			{
				unk_0x1DB03C7D3DC49006(uParam0->f_8, 255);
				unk_0x63EECA6600F1090E(uParam0->f_8, 1);
			}
			else if (unk_0xE769D9B5158D0F11(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_9, 0);
					unk_0x63EECA6600F1090E(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
					unk_0x63EECA6600F1090E(uParam0->f_9, 1);
				}
			}
			unk_0x08FC50794202A47C();
		}
	}
}

void func_183(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_383(uParam0);
	}
	if (!unk_0xE769D9B5158D0F11(uParam0->f_10))
	{
		uParam0->f_10 = func_133(uParam0->f_4, 1, 0);
		unk_0x61C2EC67C90074E5(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x63EECA6600F1090E(uParam0->f_10, 1);
		func_184(uParam0);
		if (bParam2)
		{
			unk_0x08FC50794202A47C();
			func_201(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_184(var uParam0)
{
	func_66(uParam0, 14, 0, 0);
	func_185();
}

void func_185()
{
	int iVar0;
	
	iVar0 = unk_0x952F33F151D40D1A();
	if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
	{
		unk_0x598D55F9D453C505(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_186(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_243(*uParam1, iParam2))
	{
		unk_0x08FC50794202A47C();
		func_201(uParam0, iParam3, 1, 0, 0);
		func_239(uParam1, iParam2);
	}
}

void func_187(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_188(int iParam0)
{
	Global_16767 = iParam0;
}

void func_189(var uParam0, int iParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (!unk_0x0FAE113CE72ED842(iParam1))
		{
			if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
			{
				if ((unk_0x4F653234AAF19B1C(iParam1, joaat("weapon_stungun"), 0) || unk_0x4F653234AAF19B1C(iParam1, 0, 2)) || unk_0x4F653234AAF19B1C(iParam1, 0, 1))
				{
					func_290(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
			}
		}
	}
}

int func_190(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_167(uParam0, 14))
			{
				func_191(uParam0);
			}
			func_182(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_191(var uParam0)
{
	func_164(uParam0, 14, 0);
	func_164(uParam0, 15, 0);
	func_193();
	if (func_192())
	{
		func_188(0);
	}
}

int func_192()
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	var uVar0;
	
	uVar0 = unk_0x952F33F151D40D1A();
	if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
	{
		unk_0x598D55F9D453C505(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_194(var uParam0)
{
	func_197(uParam0, 1000);
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0xD9FCA20C1C5553F7(uParam0->f_3);
		unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
	}
	func_195();
	func_191(uParam0);
}

void func_195()
{
	Global_14622 = 0;
	func_196();
}

void func_196()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_197(var uParam0, int iParam1)
{
	if (unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		unk_0x13AD763DBD687842(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xF5F744EF9F4DB21E(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
	}
}

void func_198()
{
	func_239(&(Local_859.f_55), 2);
	func_239(&(Local_859.f_55), 4);
	func_239(&(Local_859.f_55), 16);
	func_239(&(Local_859.f_55), 64);
	func_239(&(Local_859.f_55), 256);
	func_239(&(Local_859.f_55), 512);
	func_239(&(Local_859.f_55), 1024);
	func_239(&(Local_859.f_55), 2048);
	func_239(&(Local_859.f_55), 4096);
	func_239(&(Local_859.f_55), 1073741824);
	func_239(&(Local_859.f_100), 8);
	func_239(&(Local_859.f_100), 2048);
	func_239(&(Local_859.f_100), 256);
	func_239(&uLocal_1637, 2);
	func_165(&Local_859, 7);
}

void func_199(var uParam0)
{
	unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
	unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	func_197(uParam0, 1000);
}

var func_200(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_101(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

void func_201(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_66(uParam0, 16, 4f, 0);
		if (func_202(uParam0))
		{
			func_36();
		}
	}
	func_244(uParam0, iParam2, bParam3);
}

int func_202(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_38())
	{
		Var6 = { func_204() };
		if (!unk_0xFAFFA408239A026B(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x9D39145AD645E383(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_203(&Var0);
			if (unk_0x9D39145AD645E383(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_203(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_204()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

Vector3 func_205(int iParam0)
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

Vector3 func_206(int iParam0)
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

void func_207(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	func_211(uParam0);
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
			Var0 = { func_206(iVar3) };
			fVar6 = func_209(Var0, 1);
			if (((((fVar6 < fVar5 && fVar6 >= func_208(uParam0->f_10)) && iVar3 != Global_103630[0]) && iVar3 != Global_103630[1]) && iVar3 != Global_103630[2]) && iVar3 != Global_103630[3])
			{
				uParam0->f_2[iVar4] = iVar3;
				iVar4++;
			}
		}
		iVar3++;
	}
	if (iVar4 > 0)
	{
		iVar3 = (unk_0x61E9B3BFA06B017B(0, 65535) % iVar4);
		uParam0->f_1 = uParam0->f_2[iVar3];
		uParam0->f_12 = func_209(func_206(uParam0->f_1), 1);
	}
	else
	{
		uParam0->f_1 = unk_0x61E9B3BFA06B017B(0, 50);
		uParam0->f_12 = func_209(func_206(uParam0->f_1), 1);
	}
	Global_103630[3] = Global_103630[2];
	Global_103630[2] = Global_103630[1];
	Global_103630[1] = Global_103630[0];
	Global_103630[0] = uParam0->f_1;
}

float func_208(int iParam0)
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

float func_209(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	if (bParam3)
	{
		if (unk_0xD9AF06632520E09F())
		{
			iVar0 = unk_0x0241E11D4C07B588();
		}
		else
		{
			iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_210(unk_0x8CFC7D6E1DA5D304()), Param0));
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_210(unk_0x8CFC7D6E1DA5D304()), Param0));
	}
	return func_158(unk_0xBBDA792448DB5A89(iVar0));
}

Vector3 func_210(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

void func_211(var uParam0)
{
	int iVar0;
	
	iVar0 = Global_103635 + 1;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	uParam0->f_10 = iVar0;
	Global_103635 = iVar0;
}

int func_212(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if ((unk_0xDB5E52F2078862CA(uParam0->f_3) && (unk_0x5AFB8ED811F05E4D() - iLocal_89) > 500) || unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_213(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
			{
			}
			func_179(uParam0, 1);
			if (func_25())
			{
				unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
			}
			if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 2106541073) == 1 || unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xD9FCA20C1C5553F7(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x8F467CFC5FBBCE77(uParam0->f_3, unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (unk_0xAAC7941A7E0EE97A(unk_0x0A91D180DDC7A1B8(), 0))
		{
			func_237(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x56C7B20E11B37066(&uVar3);
				unk_0xC8BEB049F3BFC0AB(&uVar3);
				unk_0xA303A4837FBB8DDE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x8F467CFC5FBBCE77(0, uParam0->f_4, 0);
				unk_0xAFDA7B8F83B2CA58(uVar3);
				unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_167(uParam0, 14))
			{
				func_191(uParam0);
				func_182(uParam0, 0);
			}
			if (func_167(uParam0, 9))
			{
				func_164(uParam0, 9, 0);
				unk_0x08FC50794202A47C();
				if (unk_0xE769D9B5158D0F11(uParam0->f_8))
				{
					unk_0x1DB03C7D3DC49006(uParam0->f_8, 255);
					unk_0x63EECA6600F1090E(uParam0->f_8, 1);
				}
			}
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x2A72627520A107B5(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_236(uParam0, uParam0->f_3) > 300f)
				{
					func_290(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 || ((func_181(unk_0x18F7BE9ACB7D08F4(), uParam0->f_3, 1) < 20f && func_161(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_161(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_235(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_234(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_233(uParam0->f_4, uParam0->f_3);
								iVar0 = func_232(uParam0, &iVar1);
								if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
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
										unk_0x5941F8B2A813BBA8(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x5941F8B2A813BBA8(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
											{
												unk_0x5941F8B2A813BBA8(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x267F7A2DFDFFB077(uParam0->f_3);
							unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_168(uParam0))
							{
								unk_0x267F7A2DFDFFB077(uParam0->f_3);
							}
							else if (((unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 0) && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 7) && func_236(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x56C7B20E11B37066(&(uParam0->f_243));
								unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
								unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
								unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x700F262B92196AB4(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_181(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_231(uParam0, 1))
								{
									unk_0xD9FCA20C1C5553F7(uParam0->f_3);
									func_290(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_230(uParam0->f_4))
								{
									unk_0xD9FCA20C1C5553F7(uParam0->f_3);
									func_290(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_228(uParam0);
						if (func_236(uParam0, uParam0->f_3) < fVar4 || func_25())
						{
							if (unk_0x88B79D32B518C327(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_215(uParam0))
								{
									func_214(uParam0);
									iLocal_89 = unk_0x5AFB8ED811F05E4D();
									unk_0x764AFC5A3A16C2B0(uParam0->f_3, 26, 1);
									func_164(uParam0, 5, 0);
									unk_0x49704B3BB3A3F2E7();
									unk_0x205C6BBC993A91EA(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xC1EC3CD3D3C6690B(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x1A89830689BF9CEE(unk_0x761660F5CE986DC4(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_214(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		unk_0x63EECA6600F1090E(uParam0->f_8, 0);
		unk_0x40D517D991458154(&(uParam0->f_8));
	}
}

int func_215(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_227("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		func_226();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_224(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_146(uParam0, 0, 1084227584) && func_160(1, 1, 1))
			{
				if (func_231(uParam0, 1))
				{
					iLocal_88 = unk_0x5AFB8ED811F05E4D();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_290(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_233(uParam0->f_4, uParam0->f_3);
				iVar9 = func_232(uParam0, &iVar10);
				if (!unk_0x74C2FE037DFC8B4A(iVar9, 0))
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
						unk_0x5941F8B2A813BBA8(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x5941F8B2A813BBA8(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xDAE9D6BA21089B7F(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x74C2FE037DFC8B4A(iVar9, 0))
						{
							unk_0x5941F8B2A813BBA8(iVar9, 0, 4096);
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
			iVar12 = func_223(&(uParam0->f_409), unk_0x0AF3D0AB54EA2104(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var0), 1);
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
				func_222(0, 0, 1);
				unk_0xE6B6928D4EED07B1(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 3f, 0);
				unk_0x5E791DD328BCDC42(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 25f, 0);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				func_155();
				func_244(uParam0, 0, 0);
				Var13 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var6) };
				unk_0x990FFD4FB6ADD630(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uParam0->f_3, func_220(uParam0));
				func_219(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xF6910B463A17E809(*uParam0, unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var0));
				unk_0xEEBA7A992DA7B65A(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x2C535610856B3F4D(*uParam0, 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				unk_0x8F2E6C470A0005D4(uParam0->f_3, 0, 0);
				unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_227("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
			{
				if (!unk_0x657B649BA2AD3582(uParam0->f_3, 0))
				{
					unk_0x8D77EFA08616AD64(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xFC8F21F2629FD98F(uParam0->f_4, func_218(uParam0->f_7), 1);
				}
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				unk_0x13AD763DBD687842(*uParam0, 0);
				unk_0x13AD763DBD687842(uParam0->f_1, 0);
				unk_0xA3F41A1968319181(0);
				unk_0x4CCECEB2EA5D6A82(0, 1065353216);
				unk_0x8359CF51370FC969(800);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				func_155();
				func_244(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5())
			{
				func_216(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			unk_0x13AD763DBD687842(*uParam0, 0);
			unk_0x13AD763DBD687842(uParam0->f_1, 0);
			unk_0xA3F41A1968319181(0);
			unk_0x4CCECEB2EA5D6A82(0, 1065353216);
			func_216(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
			{
				if (unk_0xDB5E52F2078862CA(uParam0->f_3) || unk_0x657B649BA2AD3582(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 0)
				{
					unk_0xFDBDFC454E44A5BF(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_216(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 1, 0);
	}
	unk_0xC7321FA901D43FA2(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x77B57B2BB7F3EA0A(1);
		unk_0x4A3AD9384F0AAEA0(1);
	}
	func_217(23, 0);
}

void func_217(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25477, iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25477, iParam0);
	}
}

int func_218(int iParam0)
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

void func_219(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x5400DC5FAEBF30F0(*uParam0))
	{
		*uParam0 = unk_0x2F192286DA6346A2(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_220(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_136() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_221(unk_0x761660F5CE986DC4(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_221(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x7F21F40674579303((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, iParam0);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x65A28A348055034B(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 15f);
	}
	unk_0xC7321FA901D43FA2(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0);
	unk_0x77B57B2BB7F3EA0A(0);
	unk_0x4A3AD9384F0AAEA0(0);
	func_217(23, 1);
}

int func_223(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x96011BB04BED3CD0(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xA3F56DCC3ACBDEC5(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_224(int iParam0)
{
	if (func_225() && unk_0x5AFB8ED811F05E4D() >= iParam0 + 1000)
	{
		unk_0xFF91FEC6E57575E4(500);
		while (!unk_0xEC0ECEF2AF3FDA8D())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_31(0);
		func_195();
		return 1;
	}
	return 0;
}

int func_225()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_226()
{
	if (func_27())
	{
		unk_0x983D86B7F4F283B8("appInternet");
	}
	if (func_26())
	{
		unk_0x983D86B7F4F283B8("appCamera");
	}
	if (func_33(1))
	{
		func_31(0);
	}
}

void func_227(char* sParam0, var uParam1, int iParam2)
{
	if (unk_0x5AFB8ED811F05E4D() < (*uParam1 + iParam2))
	{
		return;
	}
	*uParam1 = unk_0x5AFB8ED811F05E4D();
}

void func_228(var uParam0)
{
	var uVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
		{
			if (func_180(uParam0->f_3, 1) > 30f || func_229(uParam0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, -1794415470) == 1 || unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) == 1)
				{
					unk_0x56C7B20E11B37066(&uVar0);
					unk_0xC8BEB049F3BFC0AB(&uVar0);
					unk_0x8F467CFC5FBBCE77(0, uParam0->f_4, 0);
					unk_0xB5746603774C4C9D(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xA303A4837FBB8DDE(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xAFDA7B8F83B2CA58(uVar0);
					unk_0x73F69DD57B7E92A9(uParam0->f_3, uVar0);
					func_290(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_229(var uParam0)
{
	if ((unk_0x2A72627520A107B5(uParam0->f_4) > 3f && func_379(uParam0, 5) > 15f) || unk_0xA8CA97883F68F589(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x9308517E4356A987(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x9308517E4356A987(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xEA44DF1A202A5946(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xEA44DF1A202A5946(iParam0, 3))
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

int func_231(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x31F12808DC47A9E5(iVar0[iVar4]))
			{
				if (unk_0x74C2FE037DFC8B4A(iVar0[iVar4], 0))
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
		if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_232(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 1, 0);
		if (unk_0x31F12808DC47A9E5(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 2, 0);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x4983F8C51A0C0AF3(uParam0->f_4, 0, 0);
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xE4752B503DF3FEC0(iParam0);
	Var0 = { unk_0xCC9FF9C751023D2A(iParam0, unk_0x761660F5CE986DC4(iParam1, 1)) };
	if (unk_0x4F69FBD64CDF125B(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xDAE9D6BA21089B7F(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_234(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (!unk_0xD76674575E7BA743(uParam0->f_3) && func_180(uParam0->f_3, 1) < fParam2)
		{
			if (!func_167(uParam0, 5))
			{
				func_66(uParam0, 5, 0, 0);
			}
		}
		else if (func_167(uParam0, 5))
		{
			func_164(uParam0, 5, 0);
		}
		if (((func_379(uParam0, 5) > IntToFloat(iParam1) && unk_0x2A72627520A107B5(uParam0->f_4) < fParam4) && !unk_0xD76674575E7BA743(uParam0->f_3)) || func_180(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_235(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xFCA9C8367E44D3C2(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xFCA9C8367E44D3C2(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x79CEF243729F54F9(uParam0->f_4, iVar18) };
		Var6 = { unk_0xCC9FF9C751023D2A(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x0AF3D0AB54EA2104(uParam0->f_4, Var6) };
	Var3 = { unk_0x0AF3D0AB54EA2104(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x33DBF622738C10E9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x40E2910BAF39B1C7(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_181(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x36E1A96E1D63ED91((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x96011BB04BED3CD0(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xA3F56DCC3ACBDEC5(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 1 && unk_0x2BBAA45ECDE3DAE2(uParam0->f_3, 242628503) != 0)
			{
				unk_0x56C7B20E11B37066(&(uParam0->f_243));
				unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
				unk_0xB5746603774C4C9D(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0x8F251305F4CAD788(uParam0->f_243, 1);
				unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
				unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x08FC50794202A47C();
			if (uParam0->f_411 != 9)
			{
				if (!func_243(uParam0->f_44, 128))
				{
					func_201(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_153(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x267F7A2DFDFFB077(uParam0->f_3);
			unk_0x6016A20BFEAEFE11(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x56C7B20E11B37066(&(uParam0->f_243));
			unk_0xC8BEB049F3BFC0AB(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xB5746603774C4C9D(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0xAFDA7B8F83B2CA58(uParam0->f_243);
			unk_0x73F69DD57B7E92A9(uParam0->f_3, uParam0->f_243);
			unk_0x56C7B20E11B37066(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x700F262B92196AB4(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

float func_236(var uParam0, int iParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (func_168(uParam0))
		{
			return func_181(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_237(var uParam0)
{
	func_189(uParam0, uParam0->f_3);
	if (func_168(uParam0))
	{
		if (func_167(uParam0, 14))
		{
			func_191(uParam0);
			if (unk_0xE769D9B5158D0F11(uParam0->f_10))
			{
				unk_0x40D517D991458154(&(uParam0->f_10));
			}
		}
	}
	if (!func_167(uParam0, 9))
	{
		if (unk_0xE769D9B5158D0F11(uParam0->f_8))
		{
			unk_0x1DB03C7D3DC49006(uParam0->f_8, 0);
			unk_0x63EECA6600F1090E(uParam0->f_8, 0);
		}
		func_66(uParam0, 9, 0, 0);
		func_238("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_238(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

void func_239(var uParam0, int iParam1)
{
	func_240(uParam0, iParam1);
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_241(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_242(int iParam0)
{
	return Global_104551.f_19067.f_39[iParam0];
}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_244(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_36();
		func_66(uParam0, 16, 4f, 0);
		unk_0x08FC50794202A47C();
	}
}

int func_245(int iParam0, bool bParam1, bool bParam2)
{
	return func_133(iParam0, !bParam1, bParam2);
}

void func_246(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_247(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_124(Param0, func_136(), 0))
	{
		Var0 = { func_30(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_30(Param0, 1f, 30f, 30f, 10f) };
		unk_0x3B4B46A2A779D56E(Var0, Var3, iParam3, 1);
	}
}

void func_248(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x1ABF7AC8776154B1(Param1, 20f, 5f, 0);
}

void func_249(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_14(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

int func_250()
{
	if (func_190(&Local_859))
	{
		if (!unk_0xEDFE27D1AEA0EA7F(iLocal_1564))
		{
			return 0;
		}
		if (!unk_0x5C716BBF766E1C70(Local_1648.f_0))
		{
			return 0;
		}
		if (!func_251(&uLocal_857, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_251(var uParam0, bool bParam1)
{
	if (!unk_0xEDFE27D1AEA0EA7F(func_12()))
	{
		func_227("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", uParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x028356968FDD2DF2("gestures@m@standing@casual"))
		{
			func_227("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", uParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x028356968FDD2DF2("oddjobs@taxi@"))
	{
		func_227("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("oddjobs@towingcome_here"))
	{
		func_227("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x028356968FDD2DF2("misscommon@response"))
	{
		func_227("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x9F22E45F3CF7EACA(2))
	{
		func_227("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", uParam0, 1000);
		return 0;
	}
	return 1;
}

void func_252()
{
	unk_0x9016574B77A748EE(iLocal_1564);
	Local_1648.f_0 = func_254();
	func_253(1);
}

void func_253(bool bParam0)
{
	unk_0x9016574B77A748EE(func_12());
	if (bParam0)
	{
		unk_0x831CD0FBFB26EC7E("gestures@m@standing@casual");
	}
	unk_0x831CD0FBFB26EC7E("oddjobs@taxi@");
	unk_0x831CD0FBFB26EC7E("oddjobs@towingcome_here");
	unk_0x831CD0FBFB26EC7E("misscommon@response");
	unk_0x8E058779F430F4D7("TAXI", 2);
	if (!func_243(Global_104551.f_19067, 128))
	{
		func_239(&(Global_104551.f_19067), 128);
	}
}

var func_254()
{
	return unk_0xBD7D7877C82BE42F("MIDSIZED_MESSAGE");
}

int func_255(var uParam0)
{
	if (unk_0x657B649BA2AD3582(uParam0->f_2, 0))
	{
		uParam0->f_4 = unk_0x5AD687C3474F04B4(uParam0->f_2, 0);
		if (unk_0xE560C15EC5C2F304(uParam0->f_2) || unk_0x4F69FBD64CDF125B(uParam0->f_4) == func_12())
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == uParam0->f_2)
				{
					unk_0x2859D31D18BD568A(uParam0->f_4);
					func_257(uParam0);
					func_39(2, 0);
					bLocal_94 = true;
					func_256(12);
					func_166(&uLocal_90);
					return 1;
				}
				else
				{
					func_290(uParam0, "No Taxi", 21);
					func_241("TAXI_DBG_NTAXI", -1);
				}
			}
			else
			{
				func_290(uParam0, "Taxi is not drivable", 0);
				func_241("TAXI_DBG_NTAXI", -1);
			}
		}
		else if (func_379(uParam0, 3) > 2f)
		{
			func_290(uParam0, "No Taxi", 21);
			func_241("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_256(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		uVar0 = iParam0;
		unk_0x7B7CECD66CFA2F8F(8, &uVar0, 1, 1);
	}
	else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x096B0E6C117BD7BF(8, &cVar1);
	}
}

void func_257(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (func_140())
		{
		}
	}
}

void func_258(var uParam0, int iParam1)
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

int func_259(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	iVar1 = func_263(uParam0, iParam2);
	iVar0 = iVar1;
	func_260(uParam0, iVar0, uParam1, &bVar2, &uVar7);
	if (!bVar2)
	{
		if ((((iVar1 != 0 && iVar1 != 3) && iVar1 != 8) && iVar1 != 13) && iVar1 != 18)
		{
			iVar0 = (iVar1 - 1);
			bVar3 = true;
		}
		if (bVar3)
		{
			func_260(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_260(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_260(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_260(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (bVar2)
	{
	}
	Global_103625[3] = Global_103625[2];
	Global_103625[2] = Global_103625[1];
	Global_103625[1] = Global_103625[0];
	Global_103625[0] = iVar0;
	Global_103620[3] = Global_103620[2];
	Global_103620[2] = Global_103620[1];
	Global_103620[1] = Global_103620[0];
	Global_103620[0] = uVar7;
	if (!Global_103605)
	{
		Global_103605 = 1;
	}
	return 1;
}

void func_260(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < (uParam0[iParam1 /*11*/])->f_1)
	{
		Var1 = { func_262(uParam0, iParam1, iVar0) };
		if (func_209(Var1, 1) < func_209(*uParam2, 1))
		{
			if (Global_103605 && ((((iParam1 == Global_103625[0] && iVar0 == Global_103620[0]) || (iParam1 == Global_103625[1] && iVar0 == Global_103620[1])) || (iParam1 == Global_103625[2] && iVar0 == Global_103620[2])) || (iParam1 == Global_103625[3] && iVar0 == Global_103620[3])))
			{
			}
			else if (func_261(Var1, 1) > 40f)
			{
				*uParam2 = { Var1 };
				*uParam4 = iVar0;
				if (func_209(*uParam2, 1) <= 0.6f)
				{
					*uParam4 = iVar0;
					*bParam3 = 1;
				}
			}
		}
		iVar0++;
	}
}

float func_261(struct<3> Param0, int iParam3)
{
	return func_138(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), Param0, iParam3);
}

Vector3 func_262(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { func_136() };
	if (iParam2 == -1)
	{
		iParam2 = (unk_0x61E9B3BFA06B017B(0, 65535) % (uParam0[iParam1 /*11*/])->f_1);
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

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_264(uParam0);
	if (iParam1 > 1)
	{
		iVar1 = (unk_0x61E9B3BFA06B017B(0, 65535) % 3);
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

int func_264(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (unk_0xF9CD31D0C5E37DE2(unk_0x18F7BE9ACB7D08F4(), (uParam0[iVar0 /*11*/])->f_2, (uParam0[iVar0 /*11*/])->f_5, 0, 0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 22;
}

bool func_265(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_266(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
		{
			if (bParam2)
			{
				if (func_379(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_201(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_201(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_66(uParam0, 10, 0f, 1);
				}
			}
			else if (func_379(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_201(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_201(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_66(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_379(uParam0, 10) > 30f)
		{
			if (!func_38())
			{
				if (uParam0->f_112)
				{
					func_201(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_201(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_66(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_243(uParam0->f_100, 64))
	{
		if (!func_7(&(Local_190[5 /*10*/].f_6)))
		{
			func_166(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_289(uParam0))
			{
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0, 1);
				func_286(5, uParam0);
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 1))
	{
		if (!func_7(&(Local_190[0 /*10*/].f_6)))
		{
			func_166(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_284(uParam0))
			{
				func_288(uParam0, 1);
				func_286(0, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 2))
	{
		if (!func_7(&(Local_190[1 /*10*/].f_6)))
		{
			func_166(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_283(uParam0))
			{
				func_288(uParam0, 1);
				func_286(1, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 2048))
	{
		if (!func_7(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x0A088F357EF627CA(uParam0->f_4);
				func_166(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_93(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_282(uParam0))
			{
				func_288(uParam0, 1);
				func_286(8, uParam0);
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 128))
	{
		if (!func_7(&(Local_190[6 /*10*/].f_6)))
		{
			func_166(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_281(uParam0))
			{
				func_288(uParam0, 1);
				func_286(6, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 32))
	{
		if (!func_7(&(Local_190[4 /*10*/].f_6)))
		{
			func_166(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_280(uParam0))
			{
				func_288(uParam0, 1);
				func_286(4, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 256))
	{
		if (!func_7(&(Local_190[7 /*10*/].f_6)))
		{
			func_166(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_279(uParam0))
			{
				func_286(7, uParam0);
				func_288(uParam0, 1);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 8))
	{
		if (!func_7(&(Local_190[9 /*10*/].f_6)))
		{
			func_166(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
		}
		else if (func_93(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_278(uParam0))
			{
				func_288(uParam0, 1);
				func_286(9, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 16384))
	{
		if (!func_7(&(Local_190[13 /*10*/].f_6)))
		{
			func_166(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_272(uParam0))
			{
				func_288(uParam0, 1);
				func_286(13, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 32768))
	{
		if (!func_7(&(Local_190[14 /*10*/].f_6)))
		{
			func_166(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_271(uParam0))
			{
				func_288(uParam0, 1);
				func_286(14, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 4096))
	{
		if (!func_7(&(Local_190[11 /*10*/].f_6)))
		{
			func_166(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_270(uParam0))
			{
				func_288(uParam0, 1);
				func_286(11, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 8192))
	{
		if (!func_7(&(Local_190[12 /*10*/].f_6)))
		{
			func_166(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_93(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_269(uParam0))
			{
				func_288(uParam0, 1);
				func_286(12, uParam0);
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_285(uParam0);
			}
		}
	}
	if (func_243(uParam0->f_100, 4))
	{
		if (!func_7(&(Local_190[2 /*10*/].f_6)))
		{
			func_268(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_93(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_267(uParam0))
			{
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0, 1);
				func_286(2, uParam0);
				func_285(uParam0);
			}
		}
	}
}

int func_267(var uParam0)
{
	float fVar0;
	
	if (!unk_0x0FAE113CE72ED842(uParam0->f_2))
	{
		if ((!unk_0x647522908459DE3C(uParam0->f_2) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x2A72627520A107B5(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_166(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_93(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x2A72627520A107B5(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_92(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_92(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_268(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_68(uParam0, fParam1);
	}
}

int func_269(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[12 /*10*/].f_3)))
			{
				func_166(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_92(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_270(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[1 /*10*/].f_3))) && !func_7(&(Local_190[5 /*10*/].f_3))) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3))) && !func_7(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (unk_0x36E1A96E1D63ED91(Var0.f_0) > 2.5f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[11 /*10*/].f_3)))
			{
				func_166(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_93(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x36E1A96E1D63ED91(uLocal_342) - unk_0x36E1A96E1D63ED91(Var0.f_0)) < 0f)
			{
				func_92(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_93(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_92(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	if (((((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[8 /*10*/].f_3))) && !func_7(&(Local_190[5 /*10*/].f_3))) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_7(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x048A9E2FC8C538E3(unk_0x761660F5CE986DC4(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x31F12808DC47A9E5(uParam0->f_5))
			{
				if ((unk_0x2A72627520A107B5(uParam0->f_4) > 15f && func_181(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x74C2FE037DFC8B4A(uParam0->f_5, 0) && !unk_0x74B8CA477787A438(uParam0->f_5, -1, 0)))
				{
					func_166(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_93(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_181(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x7F3463BA18B53A3D(uParam0->f_5))
		{
			func_92(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_93(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_92(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x7F3463BA18B53A3D(uParam0->f_5))
		{
			func_92(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_272(var uParam0)
{
	if (((unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3))) && !func_7(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_273(uParam0->f_4) && unk_0x2A72627520A107B5(uParam0->f_4) > 15f)
		{
			if (!func_7(&(Local_190[13 /*10*/].f_3)))
			{
				func_166(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_92(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_273(int iParam0)
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
	
	unk_0xF76F6CDAE27FDDDA(unk_0x761660F5CE986DC4(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0xF76F6CDAE27FDDDA(unk_0x761660F5CE986DC4(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x476830DD71AB24D5(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_277((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_276(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_274(unk_0x761660F5CE986DC4(iParam0, 1), Var15, Var18, Var21);
}

int func_274(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_277(Param6 - Param3) };
	Var3 = { func_277(Param9 - Param3) };
	fVar6 = func_275(Param0, Var0);
	fVar7 = func_275(Param3, Var0);
	fVar8 = func_275(Param6, Var0);
	fVar9 = func_275(Param0, Var3);
	fVar10 = func_275(Param3, Var3);
	fVar11 = func_275(Param9, Var3);
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

float func_275(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_276(struct<3> Param0, int iParam3)
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

Vector3 func_277(struct<3> Param0)
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

int func_278(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_279(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(uParam0->f_4, -1, 0) == unk_0x18F7BE9ACB7D08F4())
		{
			if (unk_0xA8CA97883F68F589(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x9E5922B97DC397E0(uParam0->f_4) <= -145f || unk_0x9E5922B97DC397E0(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x9E5922B97DC397E0(uParam0->f_4) <= 35f && unk_0x9E5922B97DC397E0(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_280(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC132DB93814AA1EB(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_190[4 /*10*/].f_3)))
			{
				func_166(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_92(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_281(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		iVar0 = unk_0x69C5769F62E2EDCB(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_190[6 /*10*/].f_3)))
			{
				func_166(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_92(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x5BEDB1779AE301BA(uParam0->f_4))
		{
			iVar0 = unk_0x0A088F357EF627CA(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xA3F48AA4B6323A62(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_201(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_201(uParam0, 72, 1, 0, 1);
				}
				func_92(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_283(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		Var0 = { unk_0x86C726750D74B03E(uParam0->f_4, 1) };
		if (unk_0x36E1A96E1D63ED91(Var0.f_0) > 3f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[1 /*10*/].f_3)))
			{
				func_166(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_92(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_284(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (!unk_0x19160618B3657F0E(uParam0->f_4) && unk_0x2409C4B1759B2661(uParam0->f_4))
		{
			if (!func_7(&(Local_190[0 /*10*/].f_3)))
			{
				func_166(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_92(&(Local_190[0 /*10*/].f_3));
				func_67(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_285(var uParam0)
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
	unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
}

void func_286(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_287(uParam1, iParam0);
	func_92(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_287(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_288(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_289(var uParam0)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
	{
		if (unk_0x2A72627520A107B5(uParam0->f_4) > 25f)
		{
			if (!func_7(&(Local_190[5 /*10*/].f_3)))
			{
				func_166(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_93(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_92(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_92(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_290(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_195();
	func_65(2);
	Var0 = { func_303() };
	if ((!unk_0xFAFFA408239A026B(&Var0) && func_38()) && !unk_0x9D39145AD645E383(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x08FC50794202A47C();
		unk_0xEFF1F12403847394(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (!func_150(uParam0))
			{
				if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xDFEB6D8BCE2B43F6(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xD68991AB42CA7042(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
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
				func_301(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_153(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_301(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_301(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_301(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_301(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_301(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_150(uParam0))
			{
				if (unk_0xF00EF9585E7FAC26(uParam0->f_4))
				{
					func_134(uParam0, 4096, 0);
				}
				else
				{
					func_134(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_301(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_301(uParam0, &Var0);
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
				func_301(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_153(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_301(uParam0, &Var0);
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_301(uParam0, &Var0);
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
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
				func_301(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_153(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_134(uParam0, 0, 0);
			func_301(uParam0, &Var0);
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
				func_301(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_153(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_301(uParam0, &Var0);
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
				func_301(uParam0, &Var0);
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_153(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_300(&Var0);
			func_291(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_301(uParam0, &Var0);
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
					func_301(uParam0, &Var0);
				}
			}
			else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
			{
				func_153(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_39(3, 0);
		}
		func_66(uParam0, 3, 0f, 1);
	}
}

int func_291(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_299(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_292(sParam2, iParam3, 0);
}

int func_292(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_196();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_298(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_297();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_296();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_295())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_294();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_293();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_196();
	}
	return 0;
}

void func_293()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_294()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_295()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_296()
{
	if (func_64(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_86();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_297()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_299(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_300(char* sParam0)
{
	switch (func_89(unk_0x18F7BE9ACB7D08F4()))
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

void func_301(var uParam0, char* sParam1)
{
	if (func_302(uParam0))
	{
		func_291(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_302(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (func_181(unk_0x18F7BE9ACB7D08F4(), uParam0->f_3, 1) < 40f && !unk_0xD76674575E7BA743(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_303()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		if (iVar6 > -1)
		{
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_304(var uParam0)
{
	return uParam0->f_118;
}

void func_305()
{
	func_339(&Local_859);
	if (func_338(&Local_859, &Local_1566))
	{
		switch (Local_1566.f_27)
		{
			case 0:
				if (Local_859.f_410 == 9)
				{
					if (!func_337(&Local_859))
					{
						if (func_336("TX_OBJ_PRO_DO") || unk_0xE769D9B5158D0F11(Local_859.f_9))
						{
							Local_1566.f_27++;
						}
						else if (func_335(&Local_859) != 10)
						{
							func_201(&Local_859, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_335(&Local_859) > 10 && func_335(&Local_859) != 15) && !func_337(&Local_859))
				{
					if (!unk_0x0FAE113CE72ED842(Local_859.f_3))
					{
						func_153(Local_859.f_3, "PED_RANT", Local_859.f_145, 4);
					}
					Local_1566.f_27++;
					if (bLocal_1565)
					{
					}
				}
				break;
			}
	}
	func_306(&Local_859, &uLocal_1596, &Local_1566, bLocal_1565);
}

int func_306(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_316(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_167(uParam0, 2))
	{
		if (func_315(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x5AFB8ED811F05E4D() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_314(uParam0))
				{
					uParam2->f_7 = { func_313(uParam1) };
					func_291(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_38())
				{
					uParam2->f_13 = { func_204() };
					if (unk_0x9D39145AD645E383(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_240(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_310(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_309(uParam0))
				{
					if (func_38())
					{
						func_66(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_308() };
						if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
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
					uParam2->f_19 = { func_303() };
				}
				else
				{
					func_240(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_310(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_167(uParam0, 14) && !func_38()) && !func_309(uParam0)) && func_379(uParam0, 18) > 1f)
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
					if (func_379(uParam0, 18) > 1f)
					{
						if (!unk_0xFAFFA408239A026B(&(uParam2->f_1)))
						{
							func_307(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
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
					func_240(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_310(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_307(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_299(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_292(sParam2, iParam4, 0);
}

struct<6> func_308()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar7 /*6*/])))
			{
				return Global_14624[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar8 /*6*/])))
					{
						return Global_14624[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_309(var uParam0)
{
	return uParam0->f_110;
}

void func_310(var uParam0)
{
	int iVar0;
	
	iVar0 = func_312(uParam0);
	if (iVar0 > -1)
	{
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_239(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_311(), 24);
	}
}

var func_311()
{
	var uVar0;
	
	return uVar0;
}

int func_312(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_243((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_313(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_243((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_239(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_314(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_175("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_175("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_175("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_175("TX_OBJ_GYB_DO", 0, 0) || func_175("TAXI_OBJ_GYB", 0, 0)) || func_175("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_175("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_175("TX_OBJ_CYI_DO", 0, 0) || func_175("TAXI_OBJ_CYI_01", 0, 0)) || func_175("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_175("TX_OBJ_GYN_DO", 0, 0) || func_175("TAXI_OBJ_GYN", 0, 0)) || func_175("TAXI_OBJ_GYN_TG", 0, 0)) || func_175("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_175("TAXI_OBJ_CC1", 0, 0) || func_175("TAXI_OBJ_CC2", 0, 0)) || func_175("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_175("TAXI_OBJ_FTC1", 0, 0) || func_175("TAXI_OBJ_FTC2", 0, 0)) || func_175("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_175("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_175("TAXI_OBJ_GETRUN", 0, 0) || func_175("TAXI_OBJ_DRIVE", 0, 0)) || func_175("TAXI_OBJ_RETURN", 0, 0)) || func_175("TAXI_OBJ_POL", 0, 0)) || func_175("TAXI_OBJ_RUNOUT", 0, 0)) || func_175("TAXI_OBJ_POL", 0, 0));
}

int func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_243((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_316(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_314(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_167(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_335(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_332(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
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
						func_331(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_328(uParam0, Var0, func_330(uParam0, 2));
				}
				if (func_243(uParam0->f_98, 4))
				{
					func_66(uParam0, 16, 0, 0);
					func_244(uParam0, 0, 0);
				}
				func_186(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_379(uParam0, 16) > 1f)
				{
					func_188(1);
					if (uParam0->f_411 == 9)
					{
						func_238("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_238("TAXI_VIP_RETURN", 7500, 1);
					}
					func_66(uParam0, 16, 0, 0);
					func_244(uParam0, 0, 0);
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
					func_331(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_153(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_379(uParam0, 16) > func_101(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_38()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_335(uParam0))
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
				func_331(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_332(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_291(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_201(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_66(uParam0, 16, 0, 0);
				func_201(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_243(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_334(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_331(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_66(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_238("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_238("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						uParam0->f_9 = func_200(uParam0->f_17, 1);
					}
					else if (unk_0x62FE0DE30E64B492(uParam0->f_9) == 0)
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x466CCEBC4B294723(uParam0->f_9, uParam0->f_17);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
				}
				func_201(uParam0, 10, 1, 0, 0);
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
				func_203(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_153(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE769D9B5158D0F11(uParam0->f_9))
					{
						uParam0->f_9 = func_200(uParam0->f_17, 1);
					}
					else if (unk_0x62FE0DE30E64B492(uParam0->f_9) == 0)
					{
						unk_0x1DB03C7D3DC49006(uParam0->f_9, 255);
						unk_0x466CCEBC4B294723(uParam0->f_9, uParam0->f_17);
						unk_0x63EECA6600F1090E(uParam0->f_9, 1);
					}
				}
				func_201(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_327(uParam0, 33554432, Var0, "", 1, 8);
				func_66(uParam0, 16, 0, 0);
				func_201(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_38())
				{
					func_326(uParam0, 0);
					func_239(&(uParam0->f_44), 4);
					func_66(uParam0, 16, 0, 0);
					func_201(uParam0, 13, 0, 0, 0);
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
				func_203(&Var0);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_379(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_203(&Var0);
					}
					func_324(Var0, uParam1);
					func_239(&(uParam0->f_81), 67108864);
					func_66(uParam0, 16, 0, 0);
					func_66(uParam0, 11, 0, 0);
					func_244(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_379(uParam0, 11) > uParam0->f_36)
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
							func_203(&Var0);
						}
					}
					func_324(Var0, uParam1);
					func_66(uParam0, 11, 0, 0);
					func_66(uParam0, 16, 0, 0);
					func_244(uParam0, 0, 0);
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
					func_203(&Var0);
				}
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
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
				func_203(&Var0);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
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
				func_203(&Var0);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_203(&Var0);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_244(uParam0, 0, 0);
				func_239(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 1, 0, 8);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
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
					func_322(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_322(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_324(Var0, uParam1);
				func_332(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 6, 0f, 1);
				func_244(uParam0, 0, 0);
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
					func_322(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_322(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_324(Var0, uParam1);
				func_332(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 6, 0f, 1);
				func_244(uParam0, 0, 0);
				break;
			
			case 12:
				func_238("TAXI_OBJ_GYB", 3500, 1);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_238("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_238("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_238("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_243(uParam0->f_98, 268435456))
				{
					func_238("TAXI_OBJ_CYI_01", 7500, 1);
					func_239(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_203(&Var0);
				func_324(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_203(&Var0);
				func_324(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_203(&Var0);
				func_324(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 33:
				func_238("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_243(uParam0->f_82, 8192))
				{
					if (func_379(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_203(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_324(Var0, uParam1);
						}
						else
						{
							func_331(uParam0, &Var0, 0, 0, 8);
						}
						func_239(&(uParam0->f_82), 8192);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_244(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_243(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_203(&Var0);
					func_331(uParam0, &Var0, 0, 0, 8);
					func_239(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_243(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_203(&Var0);
					func_331(uParam0, &Var0, 0, 0, 8);
					func_239(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 46, 1, 0, 0);
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
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_244(uParam0, 0, 0);
				break;
			
			case 139:
				func_238("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_201(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x61E9B3BFA06B017B(0, 120);
				if (!func_243(uParam0->f_82, 268435456))
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
					func_239(&(uParam0->f_82), 268435456);
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
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x61E9B3BFA06B017B(0, 100);
				if (!func_243(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_239(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_238("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_244(uParam0, 0, 0);
				func_201(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_38())
				{
					func_238("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_244(uParam0, 0, 0);
					func_201(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_238("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_244(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_243(uParam0->f_81, 1))
				{
					func_321(uParam0, 1, Var0, "_sick1", 8);
					func_13(&(uParam0->f_81), 2);
				}
				else if (!func_243(uParam0->f_81, 2))
				{
					func_321(uParam0, 2, Var0, "_sick2", 8);
					func_13(&(uParam0->f_81), 1);
				}
				func_332(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_243(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_243(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_239(&(uParam0->f_81), 2097152);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_332(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_244(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_332(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_332(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_332(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_243(uParam0->f_81, 4))
				{
					func_321(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_243(uParam0->f_81, 8))
				{
					func_321(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_321(uParam0, 8, Var0, "_turns3", 8);
					func_13(&(uParam0->f_81), 4);
					func_13(&(uParam0->f_81), 8);
				}
				func_332(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_320(uParam0))
				{
					func_328(uParam0, Var0, func_330(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_153(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_291(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_334(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_334(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_332(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_243(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 128);
					func_13(&(uParam0->f_83), 256);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 256);
					func_13(&(uParam0->f_83), 512);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 512);
					func_13(&(uParam0->f_83), 128);
					func_66(uParam0, 16, 0, 0);
				}
				func_244(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_243(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_203(&Var0);
					}
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 1);
					func_13(&(uParam0->f_83), 2);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_203(&Var0);
					}
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 2);
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
				else if (!func_243(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_203(&Var0);
					}
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 4);
					func_13(&(uParam0->f_83), 1);
					func_66(uParam0, 16, 0, 0);
				}
				func_332(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_243(uParam0->f_81, 4096))
				{
					func_327(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_243(uParam0->f_81, 8192))
				{
					func_327(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_332(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_243(uParam0->f_81, 16384))
				{
					func_327(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_243(uParam0->f_81, 32768))
				{
					func_327(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_332(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_243(uParam0->f_82, 8))
					{
						func_319(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_243(uParam0->f_82, 16))
					{
						func_319(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_243(uParam0->f_82, 32))
					{
						func_319(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_332(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_244(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_332(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_66(uParam0, 16, 0, 0);
					func_244(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_243(uParam0->f_81, 65536))
				{
					func_327(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_243(uParam0->f_81, 131072))
				{
					func_327(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_244(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_320(uParam0))
				{
					func_328(uParam0, Var0, func_330(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_153(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_243(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 8);
					func_13(&(uParam0->f_83), 16);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 16);
					func_13(&(uParam0->f_83), 32);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 32);
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
				else if (!func_243(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_239(&(uParam0->f_83), 64);
					func_13(&(uParam0->f_83), 8);
					func_66(uParam0, 16, 0, 0);
				}
				func_332(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
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
					func_331(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_328(uParam0, Var0, func_330(uParam0, 65));
					func_244(uParam0, 0, 0);
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
					func_331(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_328(uParam0, Var0, func_330(uParam0, 66));
					func_244(uParam0, 0, 0);
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
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								func_332(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								func_332(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_334(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_332(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_66(uParam0, 16, 0, 0);
								func_244(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_331(uParam0, &Var0, 0, 0, 8);
									func_66(uParam0, 16, 0, 0);
									func_66(uParam0, 11, 0, 0);
									func_244(uParam0, 0, 0);
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
									func_203(&Var0);
									func_331(uParam0, &Var0, 0, 0, 8);
									func_66(uParam0, 16, 0, 0);
									func_66(uParam0, 11, 0, 0);
									func_244(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_331(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_201(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_243(uParam0->f_82, 1))
				{
					func_319(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_243(uParam0->f_82, 2))
				{
					func_319(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_243(uParam0->f_82, 4))
				{
					func_319(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_244(uParam0, 0, 0);
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
				func_334(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_153(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_66(uParam0, 16, 0, 0);
				func_332(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_320(uParam0))
				{
					func_328(uParam0, Var0, func_330(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_153(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_318(uParam0, Var0, 8);
				}
				func_332(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_243(uParam0->f_83, 1024))
				{
					func_239(&(uParam0->f_83), 1024);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 2048))
				{
					func_239(&(uParam0->f_83), 2048);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_243(uParam0->f_83, 4096))
				{
					func_239(&(uParam0->f_83), 4096);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_203(&Var0);
					func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_244(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_243(uParam0->f_82, 1024))
				{
					func_319(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_13(&(uParam0->f_82), 2048);
				}
				else if (!func_243(uParam0->f_82, 2048))
				{
					func_319(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_244(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_332(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 52, 1, 0, 0);
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
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
				{
					func_153(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_320(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_331(uParam0, &Var0, 0, 0, 8);
						func_201(uParam0, 52, 1, 0, 0);
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
						func_331(uParam0, &Var0, 0, 0, 8);
						func_66(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_66(uParam0, 16, 0, 0);
					func_244(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_332(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xFF3D7D0CFD33DE47(unk_0x0A91D180DDC7A1B8()) >= 1)
				{
					func_238("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_244(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_243(uParam0->f_81, 262144))
				{
					func_327(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_243(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_327(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_327(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_332(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_243(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_317(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_243(uParam0->f_82, 134217728))
				{
					func_317(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_332(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 100:
				func_238("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_244(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_203(&Var0);
				}
				func_239(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_203(&Var0);
				}
				func_239(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
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
					func_203(&Var0);
				}
				func_239(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_243(uParam0->f_82, 65536))
				{
					if (func_379(uParam0, 11) > uParam0->f_36)
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
						func_203(&Var0);
						func_324(Var0, uParam1);
						func_239(&(uParam0->f_82), 65536);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_244(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_243(uParam0->f_82, 131072))
				{
					if (func_379(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_203(&Var0);
						func_324(Var0, uParam1);
						func_239(&(uParam0->f_82), 131072);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_244(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_243(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_239(&(uParam0->f_82), 8388608);
				}
				else if (!func_243(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_239(&(uParam0->f_82), 16777216);
				}
				else if (!func_243(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_239(&(uParam0->f_82), 33554432);
				}
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_334(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_203(&Var0);
					func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_331(uParam0, &Var0, 0, 0, 8);
				}
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_324(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_334(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_333(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_201(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_239(&(uParam0->f_81), 2097152);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_203(&Var0);
				func_324(Var0, uParam1);
				func_239(&(uParam0->f_81), 67108864);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_243(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_327(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
					{
						func_153(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_201(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_243(uParam0->f_81, 268435456))
				{
					func_327(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_201(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_238("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_244(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_243(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_327(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
						{
							func_153(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_327(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_201(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_238("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_244(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_291(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_243(uParam0->f_81, 16777216))
				{
					func_327(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_244(uParam0, 0, 0);
				break;
			
			case 88:
				func_238("TAXI_TIEFLEE", 7500, 1);
				func_244(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_243(uParam0->f_98, 536870912))
				{
					func_238("TAXI_OBJ_CYI_1B", 7500, 1);
					func_239(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_244(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_203(&Var0);
				func_331(uParam0, &Var0, 0, 0, 8);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				func_244(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_331(uParam0, &Var0, 0, 0, 8);
				func_244(uParam0, 0, 0);
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
				func_331(uParam0, &Var0, 0, 0, 8);
				func_244(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_331(uParam0, &Var0, 1, 0, 8);
				func_201(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_238("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_201(uParam0, 0, 0, 0, 0);
				func_244(uParam0, 0, 0);
				break;
			}
	}
}

void func_317(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_239(&(uParam0->f_82), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_203(&Param2);
	}
	func_291(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_318(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_243(uParam0->f_82, 64))
	{
		func_239(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_243(uParam0->f_82, 128))
	{
		func_239(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x61E9B3BFA06B017B(1, 3), 24);
	}
	func_333(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_66(uParam0, 16, 0, 0);
}

void func_319(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_239(&(uParam0->f_82), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_203(&Param2);
		}
	}
	func_291(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_320(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_321(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_239(&(uParam0->f_81), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_291(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_322(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_323(*uParam0, iVar1))
		{
			func_240(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_203(sParam2);
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

bool func_323(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_324(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_325(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_239(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xFAFFA408239A026B(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_326(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_238("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_238("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_238("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_238("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_238("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_238("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_238("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_238("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_238("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_238("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_238("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_238("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_238("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_327(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_239(&(uParam0->f_81), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_203(&Param2);
	}
	func_291(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_328(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_66(uParam0, 16, 0, 0);
	func_66(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x0FAE113CE72ED842(uParam0->f_3))
	{
		unk_0x410B23415DE0EFFE(uParam0->f_3, &cParam1, func_329(uParam0));
	}
}

char* func_329(var uParam0)
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

char* func_330(var uParam0, int iParam1)
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

int func_331(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_66(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_66(uParam0, 17, 0f, 1);
	}
	func_244(uParam0, iParam2, 0);
	return func_291(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_332(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_243(*uParam2, 2))
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
		if (func_243(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_243(*uParam2, 4))
		{
			if (!func_243(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_243(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_243(*uParam2, 512))
		{
			if (!func_243(*uParam2, 4096))
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
		if (func_243(*uParam2, 16))
		{
			if (!func_243(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_243(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_243(*uParam2, 64))
		{
			if (!func_243(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_243(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_243(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_243(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_243(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_243(*uParam2, 8192))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_243(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_243(*uParam2, 16384))
		{
			if (func_243(*uParam2, 4194304))
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
		if (func_243(*uParam2, 32768))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_243(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_243(*uParam2, 65536))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_243(*uParam2, 131072))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_243(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_243(*uParam2, 262144))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_243(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_243(*uParam2, 524288))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_243(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_243(*uParam2, 1048576))
		{
			if (func_243(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_243(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_243(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_243(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_243(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_243(*uParam2, 67108864))
		{
			if (func_243(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_243(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_243(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_243(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_243(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_333(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_299(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_292(sParam2, iParam4, 0);
}

void func_334(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_323(*uParam0, iVar1))
		{
			func_240(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_203(sParam2);
				}
				else
				{
					func_203(sParam2);
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

int func_335(var uParam0)
{
	return uParam0->f_416;
}

int func_336(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		if (func_175(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_337(var uParam0)
{
	if (func_38())
	{
		return 1;
	}
	if (func_167(uParam0, 17))
	{
		return 1;
	}
	if (func_167(uParam0, 14))
	{
		return 1;
	}
	if (func_309(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_338(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_167(uParam0, 9));
}

void func_339(var uParam0)
{
	if (func_167(uParam0, 17))
	{
		if (!func_167(uParam0, 14))
		{
			if (!func_309(uParam0))
			{
				if (!func_38())
				{
					func_164(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_340(var uParam0)
{
	return uParam0->f_117;
}

void func_341(var uParam0, var uParam1, bool bParam2)
{
	if (!func_243(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xFAFFA408239A026B(&(uParam0->f_124)) && func_38())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_38())
				{
					StringCopy(&(uParam0->f_124), func_311(), 24);
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

void func_342(var uParam0)
{
	if (!func_243(uParam0->f_98, 2))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
		{
			if (func_138(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xE54597236B7D8C63(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_239(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_343(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_323(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_323(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_323(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_240(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x5AFB8ED811F05E4D();
							}
						}
						else
						{
							func_14(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_323(Local_343.f_1[iVar0 /*4*/], 4) && !func_323(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_240(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_290(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_344(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_167(uParam0, 27))
	{
		func_165(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_379(uParam0, 27) > 5f)
	{
		if (func_372(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_66(uParam0, 27, 0, 0);
			func_66(uParam0, 10, 0, 0);
			func_370(uParam0, &uVar0, uParam1);
		}
		func_366(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_345(uParam0);
	}
	if ((((!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()) && (unk_0x5400DC5FAEBF30F0(*uParam0) && !unk_0xEFEFF8C622C1C559(*uParam0))) && (unk_0x5400DC5FAEBF30F0(uParam0->f_1) && !unk_0xEFEFF8C622C1C559(uParam0->f_1))) && !unk_0xC45919BF593ACF15()) && !func_38())
	{
		if (func_379(uParam0, 26) > 10f)
		{
			func_164(uParam0, 26, 0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
		}
	}
	else if (func_167(uParam0, 26))
	{
		func_164(uParam0, 26, 0);
	}
	return 0;
}

void func_345(var uParam0)
{
	if (!func_365(uParam0->f_429))
	{
		uParam0->f_429 = func_364();
		func_355(&(uParam0->f_429), 0, 0, unk_0x61E9B3BFA06B017B(4, 7), 0, 0, 0);
	}
	else if (func_346(uParam0->f_429))
	{
		func_290(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_346(int iParam0)
{
	return func_347(func_364(), iParam0);
}

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_365(iParam1) || !func_365(iParam0))
	{
		return 1;
	}
	iVar0 = func_353(iParam0);
	iVar1 = func_353(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_352(iParam0);
	iVar1 = func_352(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_351(iParam0);
	iVar1 = func_351(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_350(iParam0);
	iVar1 = func_350(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_349(iParam0);
	iVar1 = func_349(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_348(iParam0);
	iVar1 = func_348(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_349(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_350(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_351(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_352(int iParam0)
{
	return iParam0 & 15;
}

var func_353(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_354(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_354(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_355(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_353(*uParam0);
	iVar1 = func_352(*uParam0);
	iVar2 = func_351(*uParam0);
	iVar3 = func_350(*uParam0);
	iVar4 = func_349(*uParam0);
	iVar5 = func_348(*uParam0);
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
	iVar6 = func_363(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_363(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_356(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_356(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_362(uParam0, iParam1);
	func_361(uParam0, iParam2);
	func_360(uParam0, iParam3);
	func_359(uParam0, iParam5);
	func_358(uParam0, iParam4);
	func_357(uParam0, iParam6);
}

void func_357(var uParam0, int iParam1)
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

void func_358(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_352(*uParam0);
	iVar1 = func_353(*uParam0);
	if (iParam1 < 1 || iParam1 > func_363(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_359(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_361(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_362(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_363(int iParam0, int iParam1)
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

int func_364()
{
	var uVar0;
	
	func_362(&uVar0, unk_0xB093145A4ED05C87());
	func_361(&uVar0, unk_0x4BF279EB036481A0());
	func_360(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_358(&uVar0, unk_0x518720E0DE404FFC());
	func_359(&uVar0, unk_0x5E3E9A684A609866());
	func_357(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

int func_365(int iParam0)
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
	iVar0 = func_348(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_349(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_350(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_353(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_352(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_351(iParam0);
	if (iVar5 < 1 || iVar5 > func_363(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_366(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_369()) && !func_168(uParam0)) || ((uParam0->f_411 != 9 && func_368(uParam0, 1)) && !func_168(uParam0)))
		{
			uVar0 = func_367(uParam0->f_4);
			unk_0xE13BCCF275C3DEAF(&uVar0);
			uParam0->f_4 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0x337F2213526139E0(uParam0->f_4, 1, 0);
			func_191(uParam0);
			func_182(uParam0, 0);
		}
	}
}

var func_367(var uParam0)
{
	return uParam0;
}

int func_368(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				iVar1 = unk_0x4F69FBD64CDF125B(iVar0);
				bVar2 = func_230(iVar0);
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
				if (unk_0x881022B41FD53CD6(iVar1))
				{
					if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xE4752B503DF3FEC0(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_243(uParam0->f_44, 64))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_241("TX_VIP_DMGD", -1);
							if (func_265("TX_VIP_DMGD"))
							{
								func_239(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_243(uParam0->f_44, 32))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_241("TX_VIP_CAR", -1);
							if (func_265("TX_VIP_CAR"))
							{
								func_239(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_243(uParam0->f_44, 16))
					{
						if (unk_0x9F22E45F3CF7EACA(2))
						{
							func_241("TX_VIP_SMALL", -1);
							if (func_265("TX_VIP_SMALL"))
							{
								func_239(&(uParam0->f_44), 16);
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

int func_369()
{
	int iVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
				{
					if (unk_0x0665EB554F07889E(iVar0, func_12()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_370(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_371(uParam0, 0, 1))
			{
				func_290(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_371(uParam0, 0, 4))
			{
				func_290(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_371(uParam0, 0, 8))
			{
				func_290(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_371(uParam0, 1, 1))
			{
				func_290(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_371(uParam0, 0, 1))
			{
				func_290(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_243(*uParam2, 2) && func_150(uParam0))
			{
				func_290(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_371(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
	{
		if (!unk_0xD76674575E7BA743(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_201(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_201(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_372(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x18F7BE9ACB7D08F4();
	if (!unk_0x74C2FE037DFC8B4A(iVar0, 0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (!func_243(*uParam2, 1))
		{
			if (func_378(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_243(*uParam2, 2))
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_243(*uParam2, 4))
		{
			if (func_376(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_243(*uParam2, 8))
		{
			if (func_375(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_243(*uParam2, 128);
		if (bParam4)
		{
			if (func_373(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_243(*uParam2, 16))
		{
			if (func_373(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (iParam7 && unk_0x1B843A60307EECA4(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x0A088F357EF627CA(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x0A088F357EF627CA(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x952F33F151D40D1A();
		if (!unk_0x74C2FE037DFC8B4A(uVar0, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x952F33F151D40D1A();
		if (!unk_0x74C2FE037DFC8B4A(uVar1, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (unk_0x422DF8890E5A5CBB(iParam0))
			{
				if (unk_0x6D26723515A59351(iParam0) == unk_0x18F7BE9ACB7D08F4())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x8673F2F1802ADEF7(iParam0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x350081E226DF0B5C(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFAF0B14C4EABEC60(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x4DF63D23F735EE44(iParam0))
		{
			return 1;
		}
	}
	if (func_374(unk_0x18F7BE9ACB7D08F4(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x0B90D19A63676F41(iParam0) && func_180(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x657B649BA2AD3582(iParam0, 0))
		{
			if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), unk_0x5AD687C3474F04B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), iParam0))
		{
			return 1;
		}
		if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
		{
			if (unk_0x1B843A60307EECA4(iParam1, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75CE6F8BEC2654E3(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xAADA5865C8BFAE94(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 1), unk_0x761660F5CE986DC4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x3821A75ECC8A0D5B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_375(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9381BBF272130ED6(uParam0, 4))
	{
		if (unk_0xAADA5865C8BFAE94(uParam0) && !unk_0x11879DABC3CC8D46(iParam0))
		{
			if (unk_0x8673F2F1802ADEF7(uParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_376(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	if (unk_0x70832328F090DD95(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x4114A6218866E595(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9381BBF272130ED6(uParam0, 2))
	{
		if (unk_0xAADA5865C8BFAE94(uParam0))
		{
			if (unk_0x8673F2F1802ADEF7(iParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0x3821A75ECC8A0D5B(unk_0x6DE4035D8BAB73B4(iParam1), iParam0, 120f) && unk_0xAAB9BF2904B9E7CE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x657B649BA2AD3582(unk_0x6DE4035D8BAB73B4(iParam1), 0))
			{
				iVar3 = unk_0x5AD687C3474F04B4(unk_0x6DE4035D8BAB73B4(iParam1), 0);
			}
			if (unk_0xEEDFFBA2DC1CCDB0(iParam0) || func_377(iVar3))
			{
				if (unk_0x8673F2F1802ADEF7(iParam1, unk_0x761660F5CE986DC4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0x3821A75ECC8A0D5B(unk_0x6DE4035D8BAB73B4(iParam1), iParam0, 120f) && unk_0xAAB9BF2904B9E7CE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xAB3BDB14DC75494C((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam0, -1, 0) != 0)
			{
				if (unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_181(unk_0x18F7BE9ACB7D08F4(), iParam0, 1) < 40f)
						{
							if (unk_0x8E085EFABAAA911F(unk_0x8CFC7D6E1DA5D304(), &uVar1))
							{
								if ((unk_0x978B4E1292EBBE41(uVar1) && unk_0x00ABCA0241A97143(iVar1) == iParam0) || (unk_0xB6C2454233C8F532(iVar1) && unk_0x6DE4035D8BAB73B4(iVar1) == unk_0x4983F8C51A0C0AF3(iParam0, -1, 0)))
								{
									if ((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && unk_0x02EA7C5633421A0F(0, 24)) || (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0x02EA7C5633421A0F(0, 69)))
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

int func_378(int iParam0, var uParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
		{
			if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				if (unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 90f))
				{
					if (func_180(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x5AFB8ED811F05E4D();
						}
						else if ((unk_0x5AFB8ED811F05E4D() - uParam1->f_1) > uParam1->f_3)
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

float func_379(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_166(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_93(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_380()
{
	func_381(&Local_859);
	func_423();
}

void func_381(var uParam0)
{
	func_2(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_65(2);
	}
}

int func_382(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_38() && func_379(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0))
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
			{
				if (unk_0x88B79D32B518C327(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_50(uParam0) == 0 || func_323(uParam0->f_85, 32))
					{
						if (!unk_0xF00EF9585E7FAC26(uParam0->f_4))
						{
							func_134(uParam0, 4160, 0);
						}
						else
						{
							func_134(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_134(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_134(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_134(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x5AFB8ED811F05E4D() % 1000) < 50)
	{
	}
	return 0;
}

void func_383(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_8))
	{
		unk_0x40D517D991458154(&(uParam0->f_8));
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_9))
	{
		unk_0x40D517D991458154(&(uParam0->f_9));
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_10))
	{
		unk_0x40D517D991458154(&(uParam0->f_10));
	}
}

int func_384(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	Local_343.f_0 = 0;
	func_401(76051, 76026, 1);
	func_401(75787, 75765, 1);
	func_401(75703, 75678, 1);
	func_401(75606, 75582, 1);
	func_401(75472, 75451, 1);
	func_401(75413, 75388, 1);
	func_401(75246, 75224, 1);
}

int func_386(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_290(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_387(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (func_389(uParam0->f_4))
		{
			func_388(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_388(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_389(int iParam0)
{
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5719E0F2FB0A1A07(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x08438F954B83E80B(iParam0, 0, 40000) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_390(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_290(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_391(var uParam0)
{
	if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
	{
		if (func_323(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_392(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_388(uParam0, 11);
	return 1;
}

int func_393(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (unk_0xE1F715CDDC50FD7F(uParam0->f_4) && !unk_0x19160618B3657F0E(uParam0->f_4))
		{
			if (!func_167(uParam0, 25))
			{
				func_66(uParam0, 25, 0, 0);
			}
			else if (func_379(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_167(uParam0, 25))
		{
			func_164(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_394(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_290(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_395(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (unk_0x17D9B02D2AC9770A(uParam0->f_4))
		{
			if (unk_0x08438F954B83E80B(uParam0->f_4, 0, 40000) || unk_0x08438F954B83E80B(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_396(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_290(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_397(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_4, 0))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_4, 0))
		{
			if (unk_0xF00EF9585E7FAC26(uParam0->f_4))
			{
				if (func_323(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_398(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_290(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_399(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_4))
	{
		if (func_400(uParam0->f_4))
		{
			func_388(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5719E0F2FB0A1A07(iParam0) == 0f)
	{
		if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x08438F954B83E80B(iParam0, 0, 40000) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_401(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_240(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_240(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_402(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_290(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_403(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_3))
	{
		if ((unk_0x0FAE113CE72ED842(uParam0->f_3) || unk_0x74C2FE037DFC8B4A(uParam0->f_3, 0)) || unk_0x25A40FAC128F45B0(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_404()
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

void func_405(var uParam0)
{
	func_406();
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

void func_406()
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

void func_407()
{
	iLocal_1564 = func_422();
	Local_859.f_145 = func_421(iLocal_1564);
	func_420(1);
	func_193();
	func_419(&(Local_859.f_244));
	func_418(&Local_859);
	Local_859.f_411 = 9;
	if (!func_243(Global_104551.f_19067, 4))
	{
		func_239(&(Global_104551.f_19067), 4);
		unk_0x116D235ABEF5CE46(func_12(), 1);
	}
	func_413(&Local_859);
	func_412(9);
	func_410(&Local_859);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
	Local_859.f_428 = func_409();
	func_408(&Local_859, 3, 6);
	Local_859.f_6 = 1.45f;
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_409()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_89(unk_0x18F7BE9ACB7D08F4());
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

void func_410(var uParam0)
{
	switch (func_50(uParam0))
	{
		case 0:
			func_411(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_411(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_411(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_411(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_411(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_411(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_411(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_411(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_411(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_411(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_411(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_412(int iParam0)
{
	Global_104551.f_19067.f_39[iParam0]++;
}

void func_413(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_417(uParam0, 3);
			func_416(uParam0, 14);
			break;
		
		case 1:
			func_417(uParam0, 14);
			func_416(uParam0, 8);
			break;
		
		case 2:
			func_417(uParam0, 8);
			func_416(uParam0, 7);
			break;
		
		case 3:
			func_417(uParam0, 15);
			func_416(uParam0, 6);
			break;
		
		case 4:
			func_417(uParam0, 0);
			func_416(uParam0, 3);
			break;
		
		case 5:
			func_417(uParam0, 6);
			func_416(uParam0, 7);
			break;
		
		case 6:
			func_417(uParam0, 8);
			func_416(uParam0, 15);
			break;
		
		case 7:
			func_417(uParam0, 8);
			func_416(uParam0, 14);
			break;
		
		case 8:
			func_417(uParam0, 7);
			func_416(uParam0, 15);
			break;
		
		case 9:
			func_417(uParam0, unk_0x61E9B3BFA06B017B(0, 17));
			iVar0 = func_415((uParam0->f_418.f_2 + unk_0x61E9B3BFA06B017B(1, 17)), 0, 16);
			func_416(uParam0, iVar0);
			func_414(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_414(var uParam0)
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

int func_415(int iParam0, int iParam1, int iParam2)
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

void func_416(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_417(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_418(var uParam0)
{
	uParam0->f_2 = unk_0x18F7BE9ACB7D08F4();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_136() };
	uParam0->f_17 = { func_136() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_164(uParam0, 32, 0);
}

void func_419(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_89(unk_0x18F7BE9ACB7D08F4());
	if (iVar0 == 0)
	{
		func_246(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_246(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_246(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_246(uParam0, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_246(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_420(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_103607, unk_0xFCA64981FEF7C913(), 24);
		Global_103601 = 1;
	}
	else
	{
		StringCopy(&Global_103607, "NULL", 24);
		Global_103601 = 0;
	}
}

char* func_421(int iParam0)
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

int func_422()
{
	switch (unk_0x61E9B3BFA06B017B(0, 5))
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

void func_423()
{
	if (unk_0xA1C84586015AE5DB())
	{
		func_8(9);
	}
	unk_0x810C5D6462DD69E6();
}


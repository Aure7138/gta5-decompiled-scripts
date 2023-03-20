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
	uLocal_77 = unk_0x9531B0A727EDF1BF();
	uLocal_78 = unk_0x0F07D7181C004903();
	Local_83 = { 500f, 500f, 500f };
	bLocal_1646 = true;
	if (unk_0x524AF15206846700(67))
	{
		func_411();
	}
	unk_0x5DB716F779D8C70F(1);
	func_395();
	func_393(&uLocal_1310);
	func_392();
	func_373();
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
	
	if (func_372(&Local_859))
	{
		func_371(&Local_859);
		if (Local_859.f_410 > 0)
		{
			switch (iLocal_858)
			{
				case 0:
					if (func_370(&Local_859, 0))
					{
						iLocal_858 = 1;
					}
					break;
				
				case 1:
					func_368();
					break;
			}
		}
		else if (func_367(&Local_859, 31) > 5f)
		{
			func_411();
		}
	}
	else
	{
		if (Local_859.f_410 <= 9)
		{
			func_332(&Local_859, &uLocal_1637);
			func_331(&Local_859);
		}
		func_330(&Local_859);
		func_329(&Local_859, &uLocal_1644, 0);
		if (Local_859.f_410 > 2)
		{
			if (!func_328(&Local_859))
			{
				func_293();
			}
			else
			{
				func_278(&Local_859, "Taxi Not Driveable", func_292(&Local_859));
			}
		}
		if (Local_859.f_410 == 9)
		{
			func_254(&Local_859, 0, 1);
		}
		if (func_253("TC_HOWTOSTART"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		switch (Local_859.f_410)
		{
			case 2:
				if (func_247(&uLocal_1310, &(Local_859.f_14), 1))
				{
					func_246(&Local_859, 0);
				}
				break;
			
			case 0:
				if (func_243(&Local_859))
				{
					func_240();
					func_246(&Local_859, 1);
				}
				break;
			
			case 1:
				if (func_238())
				{
					func_237(&Local_859);
					func_246(&Local_859, 3);
				}
				break;
			
			case 3:
				if (!unk_0xD2CFFE76B625AE55(Local_859.f_3))
				{
					func_236(&Local_859, Local_859.f_14);
					Local_859.f_11 = { Local_859.f_14 };
					func_235(Local_859.f_14, 0);
					unk_0x90CDF5C9FC20A5BF(Local_859.f_14, 2f, 0);
					Local_859.f_3 = unk_0x91D233CD0204A37F(26, iLocal_1564, Local_859.f_11, 0, 1, 1);
					unk_0x4410225696D7183B(Local_859.f_3, Local_859.f_145);
					func_234(&(Local_859.f_244), 3, Local_859.f_3, "TaxiGeneric", 0, 1);
					unk_0xC908FA7A5EBB2825(Local_859.f_3, 112, 1);
					if (!unk_0xE4F7206742848BAF(Local_859.f_3))
					{
						unk_0x56F64CC9254C2E4F(Local_859.f_3, 32, 0);
						unk_0x56F64CC9254C2E4F(Local_859.f_3, 177, 1);
						unk_0x56F64CC9254C2E4F(Local_859.f_3, 317, 1);
						Local_859.f_8 = func_233(Local_859.f_3, 0, 0);
						unk_0xC5B67A5E18AF2B72(Local_859.f_8, "TAXI_BLIP_PASS");
						unk_0x2BE52B558CE18C4F(1, 0);
						unk_0xAB27F3DE6390C749(Local_859.f_8, 1);
						unk_0x5974EAB5457E93B2("TAXI_Passenger", &(Local_859.f_413));
						unk_0xED5347CD6B7B01FA(1, Local_859.f_413, joaat("player"));
						unk_0xED5347CD6B7B01FA(2, Local_859.f_413, joaat("COP"));
						unk_0x71065DDFF8D7744C(Local_859.f_3, Local_859.f_413);
						unk_0x85FD30B510E7C05E(Local_859.f_3, Local_859.f_4, -1, 2048, 4);
					}
					func_232(&Local_859, 1, 0);
					func_246(&Local_859, 5);
				}
				break;
			
			case 5:
				if (!func_231(Global_101154.f_17787, 2))
				{
					if (func_230(9) >= 2)
					{
						func_229("TAXI_2CANCEL", -1);
						func_227(&(Global_101154.f_17787), 2);
					}
				}
				if (unk_0x5FCAE3F8AEC656AF(0, 86) && !Local_859.f_48 > 0)
				{
					func_278(&Local_859, "Player cancelled on dispatch", 19);
				}
				if (func_201(&Local_859, 0, 1109393408))
				{
					func_246(&Local_859, 15);
				}
				break;
			
			case 15:
				if (func_200(&Local_859))
				{
					func_195(&Local_1297);
					Local_859.f_17 = { func_194(Local_1297.f_1) };
					Local_859.f_29 = { func_193(Local_1297.f_1) };
					func_189(&Local_859, 9, 1, 0, 0);
					if (!unk_0x7B4654D62B7E0E9E(Local_859.f_9))
					{
						Local_859.f_9 = func_188(Local_859.f_17, 1);
					}
					func_187(&Local_859);
					func_186();
					func_246(&Local_859, 9);
				}
				if (unk_0x0B4DDB992C7BCF57(Local_859.f_4, 0))
				{
					if (!unk_0x1C48F76B3D032074(Local_859.f_2, Local_859.f_4, 0))
					{
						func_182(&Local_859);
						func_246(&Local_859, 5);
					}
				}
				break;
			
			case 9:
				if (func_166(&Local_859))
				{
					func_165(&Local_859, &(Local_859.f_43));
					func_160();
					func_157(&Local_859);
					func_151(&Local_859, 1097859072, 1117782016);
					if (func_147(&Local_859, func_150()))
					{
						fLocal_1645 = ((Local_1297.f_12 / func_367(&Local_859, 7)) * 3600f);
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
						unk_0x9403D0F4C7711241(&(Local_859.f_9));
						iVar0 = unk_0x3A5708FEE1B560A9(0, 100);
						if (iVar0 < 10)
						{
							bLocal_1646 = true;
						}
						else
						{
							bLocal_1646 = false;
						}
						func_145(&Local_859);
						func_140(bLocal_1646);
						func_139(&Local_859);
						if (bLocal_1646)
						{
							func_246(&Local_859, 28);
						}
						else
						{
							func_246(&Local_859, 27);
						}
					}
				}
				break;
			
			case 27:
				if (func_130(&Local_859, 1))
				{
					if (!unk_0x2006A8C1BA2AFE80(Local_859.f_3, 0))
					{
						unk_0x433C209504FBC7EE(&uLocal_1647);
						unk_0x33A0CEA494F4C2A3(&uLocal_1647);
						unk_0x7440EFC435CB25D1(0);
						unk_0xF2E2A21DDA5A0DA4(0, 0);
						if (unk_0x35A830607A198ABC(func_193(Local_1297.f_1), 5f, 1))
						{
							unk_0x603D1721FED38663(0, func_193(Local_1297.f_1), 5f, 0);
						}
						else
						{
							unk_0xE4A57337AE998385(0, func_193(Local_1297.f_1), 1f, -1, 1048576000, 0, 1193033728);
							unk_0x4E2F67DAF5750EE5(0, 500);
							unk_0x0603942C851F9C09(0, func_128(func_129(), "WORLD_HUMAN_STAND_MOBILE", "WORLD_HUMAN_AA_SMOKE"), 5000, 1);
							unk_0x89E04CE50E22A89C(0, 1193033728, 0);
						}
						unk_0x33F83FC0F5F458E3(uLocal_1647);
						unk_0x8B8674266D533E9F(Local_859.f_3, uLocal_1647);
						unk_0x94DC76C688E7D222(Local_859.f_3, 1);
					}
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
					func_246(&Local_859, 29);
				}
				break;
			
			case 28:
				if (func_94(&uLocal_1289, &Local_859, &(Local_859.f_3), &uLocal_1290, 1))
				{
					func_246(&Local_859, 29);
				}
				break;
			
			case 29:
				switch (iLocal_168)
				{
					case 0:
						unk_0x954BCDB8FDB0AC0F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
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
						func_246(&Local_859, 30);
						break;
				}
				break;
			
			case 30:
				func_411();
				break;
			}
	}
}

void func_2(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_41(uParam1);
		if (!unk_0xE4F7206742848BAF(uParam1->f_3))
		{
			unk_0x56F64CC9254C2E4F(uParam1->f_3, 317, 1);
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
	func_371(uParam0);
	if (func_38())
	{
		func_36();
	}
	func_34();
	unk_0x8ACEB4FC9E9EE225();
	unk_0x5BD150B52CE8D356(1);
	func_31(0);
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		unk_0x1B7FCBF5F0A9F480(uParam0->f_4, 0);
		unk_0x5C439465C03F116C(uParam0->f_4);
		unk_0xDF8D7E186B39E5F5(uParam0->f_4);
	}
	func_235(uParam0->f_14, 1);
	func_29(uParam0->f_14, 1, 1114636288);
	func_28(&(uParam0->f_244), 3);
	unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 1);
	if (func_25())
	{
		unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
	}
	unk_0x9556B1B52B8D9672(1);
	func_15(0, 1, 1, 0);
	unk_0x83DB85FD25128C55(1);
	unk_0x3DFCFAD590F85BF7(1);
	if (unk_0x54DA78A82349F5AC(*uParam0))
	{
		unk_0x1D1A369233055AEC(*uParam0, 0);
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		unk_0xE736AA7B4B2691FB(1);
	}
	if (func_231(Global_101154.f_17787, 4))
	{
		func_13(&(Global_101154.f_17787), 4);
		unk_0x7C898812896A5304(func_12(), 0);
	}
	if (bParam1)
	{
		func_11(uParam0);
	}
	func_10(uParam0);
	unk_0x651E63BA2F4975EC("gestures@m@standing@casual");
	unk_0x651E63BA2F4975EC("oddjobs@taxi@");
	unk_0x651E63BA2F4975EC("oddjobs@towingcome_here");
	if (unk_0x88E055AE81551426())
	{
		func_8(uParam0->f_411);
	}
	if (!unk_0x170C6E2649B67440(unk_0xB927AFB90873B8C1()))
	{
		unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
	}
	unk_0x70474C6AB0E99EB4(unk_0xF2DB717A73826179((func_4(&uLocal_90) * 1000f)), 12, 0);
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
			return (func_5(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_5(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
	}
	if (unk_0x0E063DDE8855EC52())
	{
		iVar0 = unk_0x20D394965B47B01A();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 1);
}

void func_8(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_9(iParam0)}, 6);
		if (!unk_0x0275404839C0A19A(&uVar0))
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
	unk_0xF1834862BAB064ED(uParam0->f_51[0]);
}

void func_11(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_3))
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
		{
			if (!unk_0x9A4E2270C2271219(uParam0->f_3, 0))
			{
				unk_0x4209353330BDFE40(uParam0->f_3);
			}
			unk_0xA8ED9F72DC442242(uParam0->f_3, 0);
			unk_0xED5347CD6B7B01FA(255, uParam0->f_413, joaat("player"));
			if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x1B1FB642178B8CEE(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x7E8F7C1D05860F53(&(uParam0->f_3));
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
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_24(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_23())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_24(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_20(unk_0x4D29100D094E5511())) && !func_17(unk_0x4D29100D094E5511(), 0)) && !func_16())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_20(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_16()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312747;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_22(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && uParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

int func_25()
{
	if (!func_27() && !func_26())
	{
		if (!unk_0x7DA5060D9E6B91C5(unk_0xB927AFB90873B8C1()))
		{
			return 1;
		}
	}
	return 0;
}

int func_26()
{
	if (unk_0xD32535FA4397160F(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (unk_0xD32535FA4397160F(joaat("appinternet")) > 0)
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
		unk_0x696F8E0D51625508(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x440E2095CD95D710(Var0, Var3, 1);
		unk_0xF557B4BDE99A5E64();
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
	if (Global_14571)
	{
		func_32(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_23())
	{
		Global_14413.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
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
		if (Global_88544[iVar0 /*17*/] && !Global_88544[iVar0 /*17*/].f_1)
		{
			if (Global_88544[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88544[iVar0 /*17*/].f_5 != 88 && Global_88544[iVar0 /*17*/].f_5 != 89) && Global_88544[iVar0 /*17*/].f_5 != 92)
				{
					func_35(Global_88544[iVar0 /*17*/].f_5, 1);
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
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_36()
{
	Global_14578 = 0;
	func_37();
}

void func_37()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
	}
}

int func_38()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
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
			Global_101154.f_17787.f_22[0]++;
			func_40("Fares Completed ++ = ", Global_101154.f_17787.f_22[0]);
			break;
		
		case 1:
			Global_101154.f_17787.f_22[1]++;
			func_40("Fares Failed ++ = ", Global_101154.f_17787.f_22[1]);
			break;
		
		case 2:
			Global_101154.f_17787.f_22[2]++;
			func_40("Fares Accepted ++ ", Global_101154.f_17787.f_22[2]);
			break;
		
		case 3:
			Global_101154.f_17787.f_22[3]++;
			func_40("Fares Expired ++ ", Global_101154.f_17787.f_22[3]);
			break;
		
		case 13:
			Global_101154.f_17787.f_22[13]++;
			func_40("Passengers run ++ = ", Global_101154.f_17787.f_22[13]);
			break;
		
		case 14:
			Global_101154.f_17787.f_22[14]++;
			func_40("Passenger Forced to Pay ++ = ", Global_101154.f_17787.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_101154.f_17787.f_22[4])
				{
					Global_101154.f_17787.f_22[4] = iParam1;
					func_40("This distance ", iParam1);
					func_40(" is longer than current best", Global_101154.f_17787.f_22[4]);
				}
				else
				{
					func_40("Longest Distance Not Beat ", Global_101154.f_17787.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_101154.f_17787.f_22[5] = (Global_101154.f_17787.f_22[5] + iParam1);
			func_40("Total Distance w/ Passenger = ", Global_101154.f_17787.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_101154.f_17787.f_22[6]++;
			}
			else
			{
				Global_101154.f_17787.f_22[6] = (Global_101154.f_17787.f_22[6] + iParam1);
			}
			func_40("Wanted Levels ++ = ", Global_101154.f_17787.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_101154.f_17787.f_22[7] = (Global_101154.f_17787.f_22[7] + iParam1);
			}
			else
			{
				Global_101154.f_17787.f_22[7]++;
			}
			func_40("Wanted Levels Lost = ", Global_101154.f_17787.f_22[7]);
			break;
		
		case 8:
			Global_101154.f_17787.f_22[8]++;
			func_40("Taxis wrecked ++ = ", Global_101154.f_17787.f_22[8]);
			break;
		
		case 9:
			Global_101154.f_17787.f_22[9]++;
			func_40("Horn Honked ++ = ", Global_101154.f_17787.f_22[9]);
			break;
		
		case 10:
			Global_101154.f_17787.f_22[10] = (Global_101154.f_17787.f_22[10] + iParam1);
			func_40("Total Money Earned = ", Global_101154.f_17787.f_22[10]);
			break;
		
		case 11:
			Global_101154.f_17787.f_22[11] = (Global_101154.f_17787.f_22[11] + iParam1);
			func_40("Total Tips Earned = ", Global_101154.f_17787.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_101154.f_17787.f_22[12])
			{
				Global_101154.f_17787.f_22[12] = iParam1;
				func_40("New Highest Tip = ", Global_101154.f_17787.f_22[12]);
			}
			else
			{
				func_40("Highest Tip Not Reached = ", Global_101154.f_17787.f_22[12]);
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
	func_227(&(Global_101154.f_17787), 1024);
	if (!func_231(Global_101154.f_17787, 64))
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
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 = (fVar1 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100891++;
					fVar2 = (fVar2 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100892++;
					fVar3 = (fVar3 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100893++;
					fVar4 = (fVar4 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100894++;
					fVar5 = (fVar5 + (Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100895++;
					fVar6 = (fVar6 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100896++;
					fVar7 = (fVar7 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || (Global_100877 * 10 / Global_100894) < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					unk_0x1C7E45166E04C12C(joaat("num_rndevents_completed"), Global_100877, 0);
					unk_0x26545538B51562AD(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_completed"), Global_100890, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_available"), Global_100873, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_completed"), Global_100891, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_available"), Global_100874, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_completed"), Global_100892, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_available"), Global_100875, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_completed"), Global_100893, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_available"), Global_100876, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_available"), Global_100880, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_completed"), (Global_100896 + Global_100895), 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_available"), (Global_100879 + Global_100878), 1);
	Global_100897 = (Global_100890 * 100 / Global_100873);
	Global_100899 = ((Global_100892 + Global_100891) * 100 / (Global_100875 + Global_100874));
	Global_100898 = ((Global_100893 + iVar9) * 100 / (Global_100876 + Global_100880));
	Global_100900 = ((Global_100895 + Global_100896) * 100 / (Global_100878 + Global_100879));
	unk_0x349899F07A0A435F(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_story_missions"), Global_100897, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_ambient_missions"), Global_100898, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853));
	}
	if (!unk_0x1AB59BFCD46AAD2F())
	{
		if (!Global_69489)
		{
			if (func_46() == 2 == 0 && !unk_0x0E063DDE8855EC52())
			{
				if (unk_0x878E45E8C4AA7963())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
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
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

int func_46()
{
	return Global_25120;
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
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0093FE57B4BFD543((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC5B2C78271F9ACBC((iParam0 - 0)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0093FE57B4BFD543((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC5B2C78271F9ACBC((iParam0 - 192)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0093FE57B4BFD543((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC5B2C78271F9ACBC((iParam0 - 513)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0093FE57B4BFD543((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC5B2C78271F9ACBC((iParam0 - 705)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x86AA01B00A711C0B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC5B2C78271F9ACBC((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x86AA01B00A711C0B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC5B2C78271F9ACBC((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD69CE51110B42B5E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC5B2C78271F9ACBC((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD69CE51110B42B5E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC5B2C78271F9ACBC((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD69CE51110B42B5E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC5B2C78271F9ACBC((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD69CE51110B42B5E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC5B2C78271F9ACBC((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD69CE51110B42B5E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC5B2C78271F9ACBC((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar12, iParam1, iVar1, iParam3);
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
	if (unk_0xB0B3AFA733DD5B94(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return 0;
	}
	if (func_62(&Global_2563627))
	{
		if (func_60(&Global_2563627, iParam0))
		{
			return 0;
		}
		if (func_53(&Global_2563627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD6FCD24FAC19ACBA(iParam0))
		{
			return 0;
		}
		if (unk_0xB0B3AFA733DD5B94(iParam0))
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
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
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
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
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
	func_58(uParam0, (Global_2563626 - 0.5f));
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
	return Global_35711 == iParam0;
}

void func_65(int iParam0)
{
	Global_99866.f_22 = iParam0;
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
	uParam0->f_1 = (func_5(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - fParam1);
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0xF17F4B0641AB2DE1(uParam0, 2);
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
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_71(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD0D748C6C14C0E92(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE2A8B026FA4DDFFF(iVar1, iVar0, 1);
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
					switch (unk_0x45755F80A3E63D8B())
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
	iVar5 = (Global_52923[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] = (Global_52923[iVar2] + iParam3);
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
				if ((Global_52923[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] = (Global_52923[iVar2] - iParam3);
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
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_73(iParam0);
	if (Global_35711 == 15)
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
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!bParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE2A8B026FA4DDFFF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE2A8B026FA4DDFFF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE2A8B026FA4DDFFF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_74(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0) || unk_0xF426A5DE932B3BEE(Global_2097152[func_76() /*10375*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		unk_0xF17F4B0641AB2DE1(&(Global_2097152[func_76() /*10375*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5411F6B456B04A6B("COUP_RED");
		unk_0x2B088D6251C2080D(func_75(iParam0));
		unk_0xE8386CF1E84A5B3D(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x0E063DDE8855EC52())
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0);
	}
	return unk_0xF426A5DE932B3BEE(Global_2097152[func_76() /*10375*/].f_7704.f_10, iParam0);
}

int func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB0B3AFA733DD5B94(27))
	{
		return 0;
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD0D748C6C14C0E92(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE2A8B026FA4DDFFF(joaat("num_cash_spent"), iVar1, 1);
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
	
	unk_0xD0D748C6C14C0E92(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE2A8B026FA4DDFFF(iParam0, iVar0, 1);
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_82()
{
	int iVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

int func_83()
{
	func_84();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_84()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_87(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_86(unk_0x27D769C59BC9D030());
			if (func_85(iVar0) && (!func_64(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_85(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_85(int iParam0)
{
	return iParam0 < 3;
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
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
	unk_0x28981D48C12CB95E(14);
	unk_0x6201690B328DD500(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x117D586920E8F7BA(2, 201) || uParam0->f_8)
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
			return (func_5(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_91(var uParam0, int iParam1)
{
	unk_0x8CED8F78CC31BEF2(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD2DC8221939F80F7(uParam0->f_9);
	unk_0x4ACF99392701B935(iParam1);
	unk_0x7E5FA681CB7A2EF7();
}

void func_92(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_93(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0x8CED8F78CC31BEF2(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x37B602106C6E0E91("STRING");
	unk_0xF4D4BFD98B32BF85(iParam7);
	unk_0x2B088D6251C2080D(sParam1);
	unk_0xD3076D52458B36EF();
	unk_0x37B602106C6E0E91(sParam5);
	unk_0x90805938ADF0F45C(uParam2);
	unk_0x90805938ADF0F45C(uParam3);
	unk_0x90805938ADF0F45C(iParam4);
	unk_0xD3076D52458B36EF();
	unk_0x7E5FA681CB7A2EF7();
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
			if (!unk_0x2006A8C1BA2AFE80(*uParam2, 0))
			{
				func_123(uParam1, 320, bParam4);
				unk_0x0705DFFD1CB9FCA6(*uParam2, unk_0x3A5708FEE1B560A9(100, 300));
				func_121(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_39(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x2006A8C1BA2AFE80(*uParam2, 0))
			{
				if (!unk_0x9A4E2270C2271219(*uParam2, 0))
				{
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x2006A8C1BA2AFE80(*uParam2, 0))
			{
				func_100(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_99(uParam1->f_2, *uParam2))
				{
					if (unk_0x0B4DDB992C7BCF57(uParam1->f_4, 0))
					{
						if (unk_0x77F1B7F6C32990D6(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0x77F1B7F6C32990D6(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x9A4E2270C2271219(uParam1->f_2, 0))
						{
							if (unk_0xC4F9E3DD5445F8E4(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x7C2070521268C99E(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0xC4F9E3DD5445F8E4(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x1D01F222CF5E89FA(uParam1->f_2, 6))
									{
										if (unk_0x32B2DBD1EB9EECE3())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0xC4F9E3DD5445F8E4(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x7C2070521268C99E(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0xC4F9E3DD5445F8E4(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x7C2070521268C99E(uParam1->f_2))
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
			if (!unk_0x2006A8C1BA2AFE80(*uParam2, 0))
			{
				if (unk_0x7B4654D62B7E0E9E(uParam1->f_8))
				{
					unk_0x9403D0F4C7711241(&(uParam1->f_8));
				}
				unk_0xA8ED9F72DC442242(*uParam2, 1);
				unk_0x33A0CEA494F4C2A3(&uVar0);
				unk_0x4F84B4D98F3DA350(0, 5000);
				unk_0x3DA9DFE29006A19F(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0xF2E2A21DDA5A0DA4(0, 0);
				unk_0x33F83FC0F5F458E3(uVar0);
				unk_0x8B8674266D533E9F(*uParam2, uVar0);
				unk_0x433C209504FBC7EE(&uVar0);
				unk_0x94DC76C688E7D222(*uParam2, 1);
				func_189(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0x8ACEB4FC9E9EE225();
			}
			else
			{
				*uParam0 = 4;
				unk_0x8ACEB4FC9E9EE225();
			}
			if (unk_0x7B4654D62B7E0E9E(uParam1->f_8))
			{
				unk_0x9403D0F4C7711241(&(uParam1->f_8));
			}
			func_95(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x5D444D90F0D5FA34(uParam3->f_6))
			{
				if (unk_0x7B4654D62B7E0E9E(uParam3->f_5))
				{
					unk_0x9403D0F4C7711241(&(uParam3->f_5));
				}
				func_145(uParam1);
				func_39(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x2006A8C1BA2AFE80(*uParam2, 0))
			{
				unk_0x7E8F7C1D05860F53(uParam2);
				if (unk_0x7B4654D62B7E0E9E(uParam1->f_8))
				{
					unk_0x9403D0F4C7711241(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xB2758D8199128B65(unk_0xB927AFB90873B8C1(), 2, 0);
				unk_0x774840DEC1F0175E(unk_0xB927AFB90873B8C1(), 0);
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
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		uParam1->f_2 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
		unk_0x0705DFFD1CB9FCA6(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x3A5708FEE1B560A9(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x09EA745D8E133A48(iParam0, 1067030938, 1069547520) };
	}
	unk_0x26545538B51562AD(&(uParam1->f_1), 3);
	unk_0x26545538B51562AD(&(uParam1->f_1), 4);
	Var0 = { unk_0x05BE3B45A415255D(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x826997589D6EDCC7(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0x7B4654D62B7E0E9E(uParam1->f_5))
		{
			uParam1->f_5 = func_96(uParam1->f_6);
			unk_0xC5B67A5E18AF2B72(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0xC5B67A5E18AF2B72(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_96(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB436470ACC226C30(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xFE20115CD3128010(uParam0);
	unk_0xC5B4E9487339A2BB(uVar0, func_97(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
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
	
	if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4429, 26))
		{
			return;
		}
	}
	if (unk_0x2FC8076880D60BD4())
	{
		unk_0x2776343F9772A0A9(iParam2);
		unk_0xBE273B45F8B9F771("FocusIn");
		unk_0x354EC40268FD2071("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xEC04D6F4A1ED71ED("FocusOut", 0, 0);
			unk_0x954BCDB8FDB0AC0F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE736AA7B4B2691FB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x0275404839C0A19A(sVar0))
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x0275404839C0A19A(uParam0->f_3))
	{
		if (func_253(uParam0->f_3))
		{
			unk_0x5BD150B52CE8D356(1);
		}
	}
	if (!unk_0x0275404839C0A19A(sVar0))
	{
		if (func_253(sVar0))
		{
			unk_0x5BD150B52CE8D356(1);
		}
	}
}

int func_99(var uParam0, int iParam1)
{
	if (!unk_0xE4F7206742848BAF(iParam1))
	{
		if (!unk_0xC4F9E3DD5445F8E4(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x3E55FAB19AD423A2(unk_0xA8CFDE65C45F813B(iParam1, 1), 15f))
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
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
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
	
	if (uParam0->f_1 && unk_0x2FC8076880D60BD4())
	{
		if (unk_0xA0F74982C6AAA9D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x0275404839C0A19A(iVar0))
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_253(iVar0))
	{
		func_120();
	}
	if (func_119(iParam1) && unk_0x55D0FF0532D6A513(iParam1))
	{
		iVar1 = 0;
		if (unk_0x54F37403E01EFD97(iParam1))
		{
			unk_0xF94147623DF44CA7(unk_0x97EA5EA3E7FE8500(iParam1));
			unk_0x011F73254F92FBB7(unk_0x97EA5EA3E7FE8500(iParam1), 1);
			if (unk_0xCBE708DF56FAA8AC(unk_0x97EA5EA3E7FE8500(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8F8858152A9B9959(iParam1))
		{
			unk_0xDB3DE7E1A7B673FA(unk_0x35E488C304B2E03E(iParam1));
			if (unk_0xC45666EE8C73F3BA(unk_0x35E488C304B2E03E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xEB9962C184DA6150(iParam1))
		{
			unk_0x2A22125F53415A48(unk_0xF85370D360C5C95C(iParam1));
			if (unk_0x85CDF51DD7146421(unk_0xF85370D360C5C95C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x2FC8076880D60BD4())
		{
			if (func_114(uParam0, bParam7, bParam9, 0))
			{
				func_110(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_107(iVar0))
				{
					if ((unk_0x0275404839C0A19A(uParam0->f_3) && !unk_0x0275404839C0A19A(iVar0)) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if ((iVar1 && !unk_0x46768B1495288824()) && uParam8)
						{
							if (!func_253(iVar0))
							{
								func_229(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xC1C5B83BB6719C6C("CMN_HINT", iVar0))
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
				if (unk_0x0275404839C0A19A(uParam0->f_3) && !unk_0x0275404839C0A19A(iVar0))
				{
					if (((unk_0x4FB9EE3D0706477D(iParam1) && iVar1) && !unk_0x46768B1495288824()) && uParam8)
					{
						if (!func_253(iVar0))
						{
							func_229(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xC1C5B83BB6719C6C("CMN_HINT", iVar0))
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
			if (!unk_0x0275404839C0A19A(sParam5))
			{
				if (func_253(sParam5))
				{
					unk_0x5BD150B52CE8D356(1);
				}
			}
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
			{
				if (unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(3) == 3 || unk_0xD7DDFCF6557D9296(3) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(6) == 3 || unk_0xD7DDFCF6557D9296(6) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(4) == 3 || unk_0xD7DDFCF6557D9296(4) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD88A50C7359222FC(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(5) == 3 || unk_0xD7DDFCF6557D9296(5) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(2) == 3 || unk_0xD7DDFCF6557D9296(2) == 4)
					{
						func_98(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0D1F37E8DD733194() == 3 || unk_0x0D1F37E8DD733194() == 4)
				{
					func_98(uParam0, iVar0, 1);
				}
			}
			if (!func_114(uParam0, bParam7, bParam9, 0))
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
	if (func_119(unk_0x27D769C59BC9D030()))
	{
		unk_0x7440EFC435CB25D1(unk_0x27D769C59BC9D030());
	}
	if (unk_0x2FC8076880D60BD4())
	{
		unk_0xE736AA7B4B2691FB(1);
		unk_0x2776343F9772A0A9(0);
		unk_0x354EC40268FD2071("HINT_CAM_SCENE");
		unk_0xBE273B45F8B9F771("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xEC04D6F4A1ED71ED("FocusOut", 0, 0);
			unk_0x954BCDB8FDB0AC0F(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0xA0F74982C6AAA9D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_106(bool bParam0)
{
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101154.f_8739.f_100++;
			}
			return Global_101154.f_8739.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101154.f_8739.f_101++;
			}
			return Global_101154.f_8739.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101154.f_8739.f_102++;
			}
			return Global_101154.f_8739.f_102;
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
		if ((!unk_0x75CB9E30BA492FF0(sParam0) && func_253(sParam0)) || func_253("CMN_HINT"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		return 0;
	}
	switch (Global_35711)
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
		if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x5D293E404CA20AA5())
	{
		return 0;
	}
	if (func_33(0))
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (unk_0xDEDA6095A64A34C2())
	{
		return 0;
	}
	if (Global_68058)
	{
		return 0;
	}
	if (unk_0xD32535FA4397160F(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52930)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
		{
			if (unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(3) == 3 || unk_0xD7DDFCF6557D9296(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(6) == 3 || unk_0xD7DDFCF6557D9296(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(4) == 3 || unk_0xD7DDFCF6557D9296(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD88A50C7359222FC(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(5) == 3 || unk_0xD7DDFCF6557D9296(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(2) == 3 || unk_0xD7DDFCF6557D9296(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0D1F37E8DD733194() == 3 || unk_0x0D1F37E8DD733194() == 4)
			{
				return 0;
			}
			if (unk_0xAC2BD8E798D43B27())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_109()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

void func_110(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		func_98(uParam0, 0, 0);
	}
	if (func_113(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x54F37403E01EFD97(iParam1))
		{
			iVar0 = unk_0x97EA5EA3E7FE8500(iParam1);
			if (!unk_0x9A4E2270C2271219(iVar0, 0))
			{
				if (unk_0x30D6008994E431E8(iVar0))
				{
					if (!func_111())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xF8E2BA35959FB71C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE736AA7B4B2691FB(0);
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
	unk_0xEE40B5E30309799D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iParam1, -1, iVar3, iVar4);
	unk_0xEC04D6F4A1ED71ED("FocusIn", 0, 0);
	unk_0xF8B012FD1C255840("HINT_CAM_SCENE");
	unk_0x954BCDB8FDB0AC0F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xA0F74982C6AAA9D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_111()
{
	return func_112(unk_0x4D29100D094E5511());
}

int func_112(int iParam0)
{
	if (unk_0x946C63BD9EF05437(unk_0xC834A7C58DEB59B4(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_113(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_114(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xA0F74982C6AAA9D4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					if (func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_117(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_117(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
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
			if ((unk_0xA0F74982C6AAA9D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
					{
						if (!func_118(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
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
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					if (!func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_117(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_117(bParam1, bParam2, bParam3) || unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || unk_0xE4A4201018E7FD55(unk_0x27D769C59BC9D030(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xA0F74982C6AAA9D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
					{
						if (func_116(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || unk_0xE4A4201018E7FD55(unk_0x27D769C59BC9D030(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_116(bParam1, bParam2, bParam3))
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
		func_120();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x102415F9164597E2(unk_0x4D29100D094E5511()))
		{
			unk_0xCFF471245AFEEDCE(0, 140, 1);
			unk_0xCFF471245AFEEDCE(0, 80, 1);
			if (unk_0x7E5B5D3856851E03(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xCFF471245AFEEDCE(0, 80, 1);
		if (unk_0x1C3F8A712337F651())
		{
			if (unk_0x7E5B5D3856851E03(0, 80))
			{
				unk_0xE736AA7B4B2691FB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x102415F9164597E2(unk_0x4D29100D094E5511()))
		{
			unk_0xCFF471245AFEEDCE(0, 140, 1);
			unk_0xCFF471245AFEEDCE(0, 80, 1);
			if (unk_0xC522B453AD5C9D05(0, 80) && unk_0xA0F74982C6AAA9D4() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xCFF471245AFEEDCE(0, 80, 1);
		if (unk_0x1C3F8A712337F651())
		{
			if (unk_0xC522B453AD5C9D05(0, 80) && unk_0xA0F74982C6AAA9D4() > Global_116)
			{
				unk_0xE736AA7B4B2691FB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x8F8858152A9B9959(iParam0))
		{
			if (unk_0x0B4DDB992C7BCF57(unk_0x35E488C304B2E03E(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x54F37403E01EFD97(iParam0))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x97EA5EA3E7FE8500(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xEB9962C184DA6150(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_120()
{
	unk_0x26545538B51562AD(&Global_2284, 4);
}

void func_121(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_371(uParam0);
	}
	if (!unk_0x7B4654D62B7E0E9E(uParam0->f_8))
	{
		uParam0->f_8 = func_122(*uParam1, 0, 0);
	}
	if (!unk_0x0275404839C0A19A(sParam2))
	{
		unk_0xC5B67A5E18AF2B72(uParam0->f_8, sParam2);
	}
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xABF4388EB11AD060(iParam0);
	if (unk_0x8F8858152A9B9959(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_97(unk_0x0E063DDE8855EC52(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD1B211F2EB392B46(uVar0, bParam1);
		}
		else
		{
			unk_0x8D910E607F73E53D(uVar0, 2);
		}
	}
	else if (unk_0x54F37403E01EFD97(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_97(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
		unk_0xD1B211F2EB392B46(uVar0, bParam1);
	}
	else if (unk_0xEB9962C184DA6150(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_97(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_123(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		unk_0xA8ED9F72DC442242(uParam0->f_3, 0);
		unk_0x1393E54C663BBD20(uParam0->f_3);
		unk_0x1545069170501814(uParam0->f_3, 3, 0);
		unk_0x7ED3655E5924C6F4(uParam0->f_3, 17, 1);
		unk_0xF156AA2A744B309E(uParam0->f_3);
		if ((func_127(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_126(uParam0->f_29)) && !bParam2)
		{
			func_124(uParam0);
		}
		else
		{
			unk_0x1545069170501814(uParam0->f_3, 1024, 1);
			unk_0x1545069170501814(uParam0->f_3, 131072, 1);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			unk_0x550B00F01FC4ADF0(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x89E04CE50E22A89C(0, 1193033728, 0);
			}
			else
			{
				unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
			}
			unk_0xF2E2A21DDA5A0DA4(0, 0);
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F(uParam0->f_3, uVar0);
			unk_0x433C209504FBC7EE(&uVar0);
		}
		unk_0x94DC76C688E7D222(uParam0->f_3, 1);
	}
}

void func_124(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (func_113(func_125(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xFBDCF3D5834B58D8(uParam0->f_3, 84.9058f);
				unk_0x94DC76C688E7D222(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xFBDCF3D5834B58D8(uParam0->f_3, 68.3138f);
				unk_0x94DC76C688E7D222(uParam0->f_3, 1);
			}
			else
			{
				unk_0x89E04CE50E22A89C(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xF156AA2A744B309E(uParam0->f_3);
			unk_0x433C209504FBC7EE(&uVar0);
			unk_0x33A0CEA494F4C2A3(&uVar0);
			unk_0x550B00F01FC4ADF0(0, 0, 0);
			unk_0xF2E2A21DDA5A0DA4(0, 0);
			unk_0xE4A57337AE998385(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x0603942C851F9C09(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x10EFF39427987154(0, 1);
				unk_0xE4A57337AE998385(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xD9F9CB5C8842E29C(0, 151.7794f, 0);
				unk_0x0603942C851F9C09(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x603D1721FED38663(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x603D1721FED38663(0, uParam0->f_29, 15f, 20000);
				unk_0x89E04CE50E22A89C(0, 1193033728, 0);
			}
			else
			{
				unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x878D12AEFBF5BAF0(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x35A830607A198ABC(uParam0->f_29, 15f, 1))
			{
				unk_0x603D1721FED38663(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x89E04CE50E22A89C(0, 1193033728, 0);
			}
			unk_0x33F83FC0F5F458E3(uVar0);
			unk_0x8B8674266D533E9F(uParam0->f_3, uVar0);
			unk_0x433C209504FBC7EE(&uVar0);
		}
		unk_0x94DC76C688E7D222(uParam0->f_3, 1);
	}
}

Vector3 func_125()
{
	struct<3> Var0;
	
	return Var0;
}

int func_126(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_127(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(iParam0, 1), Param1, iParam4);
}

char* func_128(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_129()
{
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0, bool bParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (func_138(uParam0) && func_135(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_134(uParam0, 2097152))
				{
					func_131(uParam0);
				}
			}
			else
			{
				func_131(uParam0);
			}
		}
		else if (!func_138(uParam0))
		{
			if (bParam1)
			{
				if (func_134(uParam0, 2097152))
				{
					if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_131(var uParam0)
{
	struct<3> Var0;
	
	if (func_126(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_132(uParam0, Var0);
}

void func_132(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0) && unk_0xDD5B7E23D882DABD(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_133(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x676D4CD42E0837CA(Var0, Param1, 0) < unk_0x676D4CD42E0837CA(Var3, Param1, 0) && unk_0x70083B21A94A4A8C(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x676D4CD42E0837CA(Var0, Param1, 0) >= unk_0x676D4CD42E0837CA(Var3, Param1, 0) && unk_0x70083B21A94A4A8C(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x8BD12B4D2B1648B7(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_133(int iParam0, int iParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0) && !unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		if (unk_0xDD5B7E23D882DABD(iParam0, iParam1))
		{
			if (unk_0x9297C590C99228DC(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0x9297C590C99228DC(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x9297C590C99228DC(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0x9297C590C99228DC(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_134(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_231(uParam0->f_81, iParam1) && !func_38());
	}
	return func_38();
}

int func_135(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_33(1))
			{
				func_31(0);
			}
			if (func_25())
			{
				func_137();
				return 1;
			}
			else if (func_136(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 0, 256);
				}
				else
				{
					unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 0, 0);
				}
			}
			unk_0x5CD1803153799845(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_136(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam5)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	if (!bParam6)
	{
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 138, 1);
	unk_0xCFF471245AFEEDCE(0, 136, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
	unk_0xCFF471245AFEEDCE(0, 131, 1);
	unk_0xCFF471245AFEEDCE(0, 132, 1);
	unk_0xCFF471245AFEEDCE(0, 123, 1);
	unk_0xCFF471245AFEEDCE(0, 126, 1);
	unk_0xCFF471245AFEEDCE(0, 129, 1);
	unk_0xCFF471245AFEEDCE(0, 130, 1);
	unk_0xCFF471245AFEEDCE(0, 133, 1);
	unk_0xCFF471245AFEEDCE(0, 134, 1);
	unk_0xD2707D96EC4B48D3();
	if ((unk_0xA0F74982C6AAA9D4() - Global_29) > 500)
	{
		unk_0x29D71D9710F2540E(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA0F74982C6AAA9D4();
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (unk_0x43698C98CC255554(unk_0xECC01072E61D2F3A(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_137()
{
	if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
	{
		unk_0x69C3634DD9DA38D2(unk_0x4D29100D094E5511());
	}
}

int func_138(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF(uParam0->f_3))
		{
			if (unk_0x1C48F76B3D032074(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139(var uParam0)
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
	if (!func_231(uParam0->f_55, 1))
	{
		func_227(&(uParam0->f_55), 1);
	}
}

void func_140(bool bParam0)
{
	func_143();
	unk_0x8ACEB4FC9E9EE225();
	if (bParam0)
	{
		func_189(&Local_859, 105, 1, 0, 0);
	}
	else if (Local_859.f_56 < Local_859.f_58)
	{
		if (!unk_0xE4F7206742848BAF(Local_859.f_3))
		{
			func_141(Local_859.f_3, "GENERIC_INSULT_MED", Local_859.f_145, 4);
		}
	}
	else if (Local_859.f_56 >= Local_859.f_59)
	{
		if (!unk_0xE4F7206742848BAF(Local_859.f_3))
		{
			func_141(Local_859.f_3, "TAXI_GOOD", Local_859.f_145, 4);
		}
	}
	else if (!unk_0xE4F7206742848BAF(Local_859.f_3))
	{
		func_141(Local_859.f_3, "GENERIC_THANKS", Local_859.f_145, 4);
	}
	func_227(&(Local_859.f_81), 2097152);
	func_66(&Local_859, 16, 4f, 0);
}

void func_141(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x1D6AFE0F8AC2F140(uParam0, sParam1, uParam2, func_142(iParam3), 0);
}

int func_142(int iParam0)
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

void func_143()
{
	Global_14578 = 0;
	func_144();
}

void func_144()
{
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0xF022734652B12EB3();
		Global_16723 = 0;
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_145(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_146(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_39(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_39(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_146(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

int func_147(var uParam0, int iParam1)
{
	if (func_50(uParam0) == 2)
	{
		if (unk_0xB1988D54B2C48CB5(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_149(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1) && func_148(1, 1, 1)) && unk_0xC2331082FBFCB35D(uParam0->f_4))
		{
			return func_135(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0xB1988D54B2C48CB5(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1) && func_148(1, 1, 1)) && unk_0xC2331082FBFCB35D(uParam0->f_4))
	{
		return func_135(uParam0, 1, iParam1);
	}
	return 0;
}

int func_148(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8A4F12025F4EA58F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
		{
			return 0;
		}
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		if (bParam0)
		{
			if (unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				if (unk_0x9297C590C99228DC(iVar0, -1) != unk_0x27D769C59BC9D030())
				{
					return 0;
				}
			}
		}
		if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
		{
			if (unk_0x45492A3571FB6301(iVar0) < 0.95f || unk_0x45492A3571FB6301(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (!unk_0x5E91AC2C8CAC699C(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	return 1;
}

float func_149(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

float func_150()
{
	float fVar0;
	
	fVar0 = unk_0xECC01072E61D2F3A(Local_859.f_4);
	if (fVar0 >= 5f)
	{
		return (fVar0 * 0.5f);
	}
	return 6f;
}

void func_151(var uParam0, float fParam1, float fParam2)
{
	if (func_138(uParam0) && func_231(uParam0->f_44, 4))
	{
		if ((unk_0xFCFE5DE581193020(uParam0->f_4) || unk_0xECC01072E61D2F3A(uParam0->f_4) < 3f) && func_156(uParam0))
		{
			if (!func_155(uParam0, 2))
			{
				func_153(uParam0, 2);
			}
			else if (func_138(uParam0))
			{
				if (func_367(uParam0, 2) > fParam1 && !func_155(uParam0, 14))
				{
					if (func_27())
					{
						func_189(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_189(uParam0, 48, 1, 0, 0);
					}
					func_66(uParam0, 2, 0, 0);
					if (func_155(uParam0, 10))
					{
						func_66(uParam0, 10, 0, 0);
					}
				}
				if (!func_155(uParam0, 3))
				{
					func_66(uParam0, 3, 0, 0);
				}
				else if (func_367(uParam0, 3) >= fParam2)
				{
					func_152(uParam0, 3, 0);
					func_278(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_155(uParam0, 2))
			{
				func_152(uParam0, 2, 0);
			}
			if (func_155(uParam0, 3))
			{
				func_152(uParam0, 3, 0);
			}
		}
	}
}

void func_152(var uParam0, int iParam1, bool bParam2)
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

void func_153(var uParam0, int iParam1)
{
	func_154(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_154(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_67(uParam0);
	}
}

bool func_155(var uParam0, int iParam1)
{
	return func_7(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_156(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == unk_0x27D769C59BC9D030())
		{
			return 1;
		}
	}
	return 0;
}

void func_157(var uParam0)
{
	if (func_159(uParam0))
	{
		func_158(uParam0);
	}
}

void func_158(var uParam0)
{
	if (unk_0x35F02EDB0B3AE3F2() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xB1540336553EB013();
			func_152(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_367(uParam0, 20) > 3f)
				{
					func_189(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_231(uParam0->f_81, 262144) || !func_231(uParam0->f_81, 1048576))
				{
					if (func_367(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_189(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_231(uParam0->f_82, 67108864))
				{
					if (func_367(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_189(uParam0, 85, 1, 0, 0);
						func_152(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_367(uParam0, 20) > 8f)
				{
					func_189(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_231(uParam0->f_81, 262144) || func_231(uParam0->f_82, 67108864))
			{
				if (!func_155(uParam0, 22))
				{
					func_153(uParam0, 22);
				}
			}
			if (func_155(uParam0, 22) && func_367(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_231(uParam0->f_81, 1048576))
					{
						func_189(uParam0, 84, 1, 0, 0);
						func_152(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_231(uParam0->f_82, 134217728))
					{
						func_189(uParam0, 85, 1, 0, 0);
						func_152(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_159(var uParam0)
{
	return uParam0->f_120;
}

void func_160()
{
	if (!func_231(Local_859.f_44, 1))
	{
		switch (Local_859.f_412)
		{
			case 0:
				if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) >= 1)
				{
					if (func_367(&Local_859, 9) > 1f)
					{
						func_164(&Local_859, unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()));
						func_66(&Local_859, 9, 0, 0);
						if (unk_0x7B4654D62B7E0E9E(Local_859.f_9))
						{
							unk_0xB412D79FA1018FF0(Local_859.f_9, 0);
							unk_0xAB27F3DE6390C749(Local_859.f_9, 0);
						}
						Local_859.f_140 = 1;
						Local_859.f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_38() && func_367(&Local_859, 9) > 4f)
				{
					func_189(&Local_859, 52, 1, 0, 0);
					Local_859.f_412 = 2;
				}
				break;
			
			case 2:
				if (func_163("TAXI_OBJ_POL", 0, 0))
				{
					Local_859.f_412 = 3;
				}
				else if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1)
				{
					Local_859.f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x14B5449970A1C2DA(unk_0xB927AFB90873B8C1(), func_162(&Local_859)))
				{
					func_164(&Local_859, unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()));
					func_39(6, 0);
				}
				if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) < 1)
				{
					if (func_163("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x8ACEB4FC9E9EE225();
					}
					if (unk_0x7B4654D62B7E0E9E(Local_859.f_9))
					{
						unk_0xB412D79FA1018FF0(Local_859.f_9, 255);
						unk_0xAB27F3DE6390C749(Local_859.f_9, 1);
					}
					Local_859.f_140 = 0;
					Local_859.f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_38())
				{
					func_39(7, func_162(&Local_859));
					func_164(&Local_859, 0);
					Local_859.f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_38())
				{
					func_161(&Local_1566, -1, 4);
					Local_859.f_412 = 0;
				}
				break;
			}
	}
}

void func_161(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_162(var uParam0)
{
	return uParam0->f_106;
}

bool func_163(char* sParam0, int iParam1, int iParam2)
{
	unk_0x907B9289657244FB(sParam0);
	if (iParam1 == 1)
	{
		unk_0x2B088D6251C2080D(iParam2);
	}
	return unk_0x07B8D9CA22BFDA75();
}

void func_164(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_165(var uParam0, var uParam1)
{
	unk_0xA97D52B97C2B782F(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_166(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF(uParam0->f_3))
		{
			if (!unk_0x1C48F76B3D032074(uParam0->f_3, uParam0->f_4, 1) && !unk_0x0F74EBD810C90005(uParam0->f_3))
			{
				func_278(uParam0, "Passenger left car.", 9);
			}
			else if (func_178(uParam0))
			{
				if (func_163("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x9ED24946DD556448("TAXI_OBJ_PICKUP");
				}
				if (unk_0xCBB243DDC0D132D1())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
				{
				}
				func_167(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_167(var uParam0, bool bParam1)
{
	func_177(uParam0, uParam0->f_3);
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_155(uParam0, 14))
			{
				if (func_38())
				{
					func_176(1);
				}
				func_175(uParam0, 11, 1);
				func_170(uParam0, 1);
				func_66(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_138(uParam0))
				{
					if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
					{
					}
					if (unk_0x9A4E2270C2271219(uParam0->f_2, 0))
					{
						if (func_367(uParam0, 15) > 5f)
						{
							func_66(uParam0, 15, 0f, 1);
						}
					}
					if (func_367(uParam0, 14) > 20f)
					{
						func_278(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_367(uParam0, 14) > 20f)
				{
					if (func_168(uParam0->f_4, 1) > 40f)
					{
						func_278(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_278(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_168(int iParam0, int iParam1)
{
	return func_169(unk_0xC834A7C58DEB59B4(unk_0xB927AFB90873B8C1()), iParam0, iParam1);
}

float func_169(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Var3, iParam2);
}

void func_170(var uParam0, bool bParam1)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_8, 0);
				unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
				func_174(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0x7B4654D62B7E0E9E(uParam0->f_9))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_9, 0);
				unk_0xAB27F3DE6390C749(uParam0->f_9, 0);
				unk_0x8ACEB4FC9E9EE225();
				if (func_138(uParam0))
				{
					func_189(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_174(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_171(uParam0, 0, 0);
		}
		else if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
		{
			unk_0x9403D0F4C7711241(&(uParam0->f_10));
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
			{
				unk_0xB412D79FA1018FF0(uParam0->f_8, 255);
				unk_0xAB27F3DE6390C749(uParam0->f_8, 1);
			}
			else if (unk_0x7B4654D62B7E0E9E(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xB412D79FA1018FF0(uParam0->f_9, 0);
					unk_0xAB27F3DE6390C749(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
					unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
				}
			}
			unk_0x8ACEB4FC9E9EE225();
		}
	}
}

void func_171(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_371(uParam0);
	}
	if (!unk_0x7B4654D62B7E0E9E(uParam0->f_10))
	{
		uParam0->f_10 = func_122(uParam0->f_4, 1, 0);
		unk_0xC5B67A5E18AF2B72(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xAB27F3DE6390C749(uParam0->f_10, 1);
		func_172(uParam0);
		if (bParam2)
		{
			unk_0x8ACEB4FC9E9EE225();
			func_189(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_172(var uParam0)
{
	func_66(uParam0, 14, 0, 0);
	func_173();
}

void func_173()
{
	int iVar0;
	
	iVar0 = unk_0x070841EC2D20AB5A();
	if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
	{
		unk_0x2A5264C35FD91CE4(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_174(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_231(*uParam1, iParam2))
	{
		unk_0x8ACEB4FC9E9EE225();
		func_189(uParam0, iParam3, 1, 0, 0);
		func_227(uParam1, iParam2);
	}
}

void func_175(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_176(int iParam0)
{
	Global_16723 = iParam0;
}

void func_177(var uParam0, int iParam1)
{
	if (unk_0xD2CFFE76B625AE55(iParam1))
	{
		if (!unk_0xE4F7206742848BAF(iParam1))
		{
			if (unk_0x6496E089A686F399(unk_0x4D29100D094E5511()))
			{
				if ((unk_0x9E9ACEFADFDFFEA5(iParam1, joaat("weapon_stungun"), 0) || unk_0x9E9ACEFADFDFFEA5(iParam1, 0, 2)) || unk_0x9E9ACEFADFDFFEA5(iParam1, 0, 1))
				{
					func_278(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
			}
		}
	}
}

int func_178(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_155(uParam0, 14))
			{
				func_179(uParam0);
			}
			func_170(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0)
{
	func_152(uParam0, 14, 0);
	func_152(uParam0, 15, 0);
	func_181();
	if (func_180())
	{
		func_176(0);
	}
}

int func_180()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_181()
{
	var uVar0;
	
	uVar0 = unk_0x070841EC2D20AB5A();
	if (unk_0x0B4DDB992C7BCF57(uVar0, 0))
	{
		unk_0x2A5264C35FD91CE4(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_182(var uParam0)
{
	func_185(uParam0, 1000);
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0) && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0x09D2BE36C9D2B76F(uParam0->f_3);
		unk_0xF14C2AE8A3F59CE0(uParam0->f_3, unk_0x27D769C59BC9D030(), 0);
	}
	func_183();
	func_179(uParam0);
}

void func_183()
{
	Global_14578 = 0;
	func_184();
}

void func_184()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_185(var uParam0, int iParam1)
{
	if (unk_0x54DA78A82349F5AC(*uParam0))
	{
		unk_0x1D1A369233055AEC(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x04E786541E35ECB1(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
	}
}

void func_186()
{
	func_227(&(Local_859.f_55), 2);
	func_227(&(Local_859.f_55), 4);
	func_227(&(Local_859.f_55), 16);
	func_227(&(Local_859.f_55), 64);
	func_227(&(Local_859.f_55), 256);
	func_227(&(Local_859.f_55), 512);
	func_227(&(Local_859.f_55), 1024);
	func_227(&(Local_859.f_55), 2048);
	func_227(&(Local_859.f_55), 4096);
	func_227(&(Local_859.f_55), 1073741824);
	func_227(&(Local_859.f_100), 8);
	func_227(&(Local_859.f_100), 2048);
	func_227(&(Local_859.f_100), 256);
	func_227(&uLocal_1637, 2);
	func_153(&Local_859, 7);
}

void func_187(var uParam0)
{
	unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
	unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
	func_185(uParam0, 1000);
}

var func_188(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0xC5B4E9487339A2BB(uVar0, func_97(unk_0x0E063DDE8855EC52(), 1f, 1f));
	unk_0xAB27F3DE6390C749(uVar0, iParam3);
	return uVar0;
}

void func_189(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_66(uParam0, 16, 4f, 0);
		if (func_190(uParam0))
		{
			func_36();
		}
	}
	func_232(uParam0, iParam2, bParam3);
}

int func_190(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_38())
	{
		Var6 = { func_192() };
		if (!unk_0x75CB9E30BA492FF0(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0xC1C5B83BB6719C6C(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_191(&Var0);
			if (unk_0xC1C5B83BB6719C6C(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_192()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

Vector3 func_193(int iParam0)
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

Vector3 func_194(int iParam0)
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

void func_195(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	func_199(uParam0);
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
			Var0 = { func_194(iVar3) };
			fVar6 = func_197(Var0, 1);
			if (((((fVar6 < fVar5 && fVar6 >= func_196(uParam0->f_10)) && iVar3 != Global_100233[0]) && iVar3 != Global_100233[1]) && iVar3 != Global_100233[2]) && iVar3 != Global_100233[3])
			{
				uParam0->f_2[iVar4] = iVar3;
				iVar4++;
			}
		}
		iVar3++;
	}
	if (iVar4 > 0)
	{
		iVar3 = (unk_0x3A5708FEE1B560A9(0, 65535) % iVar4);
		uParam0->f_1 = uParam0->f_2[iVar3];
		uParam0->f_12 = func_197(func_194(uParam0->f_1), 1);
	}
	else
	{
		uParam0->f_1 = unk_0x3A5708FEE1B560A9(0, 50);
		uParam0->f_12 = func_197(func_194(uParam0->f_1), 1);
	}
	Global_100233[3] = Global_100233[2];
	Global_100233[2] = Global_100233[1];
	Global_100233[1] = Global_100233[0];
	Global_100233[0] = uParam0->f_1;
}

float func_196(int iParam0)
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

float func_197(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	if (bParam3)
	{
		if (unk_0xEBF16A13EEC8F7F7())
		{
			iVar0 = unk_0xB2B392E0C931F068();
		}
		else
		{
			iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_198(unk_0x4D29100D094E5511()), Param0));
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_198(unk_0x4D29100D094E5511()), Param0));
	}
	return func_146(unk_0xBBDA792448DB5A89(iVar0));
}

Vector3 func_198(int iParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

void func_199(var uParam0)
{
	int iVar0;
	
	iVar0 = Global_100238 + 1;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	uParam0->f_10 = iVar0;
	Global_100238 = iVar0;
}

int func_200(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF(uParam0->f_3))
		{
			if ((unk_0x0F74EBD810C90005(uParam0->f_3) && (unk_0xA0F74982C6AAA9D4() - iLocal_89) > 500) || unk_0x1C48F76B3D032074(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
			{
			}
			func_167(uParam0, 1);
			if (func_25())
			{
				unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
			}
			if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 2106541073) == 1 || unk_0x810AFFABCBF31E2D(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x09D2BE36C9D2B76F(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0xF14C2AE8A3F59CE0(uParam0->f_3, unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (unk_0x14B5449970A1C2DA(unk_0xB927AFB90873B8C1(), 0))
		{
			func_225(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x433C209504FBC7EE(&uVar3);
				unk_0x33A0CEA494F4C2A3(&uVar3);
				unk_0xE4A57337AE998385(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4, 0);
				unk_0x33F83FC0F5F458E3(uVar3);
				unk_0x8B8674266D533E9F(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_155(uParam0, 14))
			{
				func_179(uParam0);
				func_170(uParam0, 0);
			}
			if (func_155(uParam0, 9))
			{
				func_152(uParam0, 9, 0);
				unk_0x8ACEB4FC9E9EE225();
				if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
				{
					unk_0xB412D79FA1018FF0(uParam0->f_8, 255);
					unk_0xAB27F3DE6390C749(uParam0->f_8, 1);
				}
			}
			if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xECC01072E61D2F3A(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_224(uParam0, uParam0->f_3) > 300f)
				{
					func_278(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) != 1 || ((func_169(unk_0x27D769C59BC9D030(), uParam0->f_3, 1) < 20f && func_149(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_149(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_223(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_222(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_221(uParam0->f_4, uParam0->f_3);
								iVar0 = func_220(uParam0, &iVar1);
								if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
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
										unk_0x550B00F01FC4ADF0(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x550B00F01FC4ADF0(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x70083B21A94A4A8C(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
											{
												unk_0x550B00F01FC4ADF0(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xF156AA2A744B309E(uParam0->f_3);
							unk_0x835BBE043A81D6DD(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x5ED34B5F21AFF532(unk_0xA8CFDE65C45F813B(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_156(uParam0))
							{
								unk_0xF156AA2A744B309E(uParam0->f_3);
							}
							else if (((unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) != 1 && unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) != 0) && unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) != 7) && func_224(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x433C209504FBC7EE(&(uParam0->f_243));
								unk_0x33A0CEA494F4C2A3(&(uParam0->f_243));
								unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x878D12AEFBF5BAF0(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x878D12AEFBF5BAF0(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x33F83FC0F5F458E3(uParam0->f_243);
								unk_0x8B8674266D533E9F(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x4F42FA30FB1F8CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_169(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_219(uParam0, 1))
								{
									unk_0x09D2BE36C9D2B76F(uParam0->f_3);
									func_278(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_218(uParam0->f_4))
								{
									unk_0x09D2BE36C9D2B76F(uParam0->f_3);
									func_278(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_216(uParam0);
						if (func_224(uParam0, uParam0->f_3) < fVar4 || func_25())
						{
							if (unk_0x1C48F76B3D032074(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_203(uParam0))
								{
									func_202(uParam0);
									iLocal_89 = unk_0xA0F74982C6AAA9D4();
									unk_0x56F64CC9254C2E4F(uParam0->f_3, 26, 1);
									func_152(uParam0, 5, 0);
									unk_0xFC464E30B10AFB48();
									unk_0xA97D52B97C2B782F(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xD0731BD9ADB40FF5(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x5ED34B5F21AFF532(unk_0xA8CFDE65C45F813B(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_202(var uParam0)
{
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
	{
		unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
		unk_0x9403D0F4C7711241(&(uParam0->f_8));
	}
}

int func_203(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_215("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0) && !unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		func_214();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_212(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_135(uParam0, 0, 1084227584) && func_148(1, 1, 1))
			{
				if (func_219(uParam0, 1))
				{
					iLocal_88 = unk_0xA0F74982C6AAA9D4();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_278(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_221(uParam0->f_4, uParam0->f_3);
				iVar9 = func_220(uParam0, &iVar10);
				if (!unk_0x2006A8C1BA2AFE80(iVar9, 0))
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
						unk_0x550B00F01FC4ADF0(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x550B00F01FC4ADF0(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x70083B21A94A4A8C(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x2006A8C1BA2AFE80(iVar9, 0))
						{
							unk_0x550B00F01FC4ADF0(iVar9, 0, 4096);
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
			iVar12 = func_211(&(uParam0->f_409), unk_0xD7C4E2CB0B216852(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xD7C4E2CB0B216852(uParam0->f_4, Var0), 1);
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
				func_210(0, 0, 1);
				unk_0x90CDF5C9FC20A5BF(unk_0xA8CFDE65C45F813B(uParam0->f_4, 1), 3f, 0);
				unk_0xBEE458FA951B0113(unk_0xA8CFDE65C45F813B(uParam0->f_4, 1), 25f, 0);
				unk_0x5BD150B52CE8D356(1);
				unk_0x8ACEB4FC9E9EE225();
				func_143();
				func_232(uParam0, 0, 0);
				Var13 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, Var6) };
				unk_0x4EEE9D9427E70F4E(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0xFBDCF3D5834B58D8(uParam0->f_3, func_208(uParam0));
				func_207(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xA76CE456B0AC525B(*uParam0, unk_0xD7C4E2CB0B216852(uParam0->f_4, Var0));
				unk_0x5281B472766D7E36(*uParam0, uParam0->f_4, Var3, 1);
				unk_0xA931FF68636DF31C(*uParam0, 1);
				unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
				unk_0x8A3D3E40973625F0(uParam0->f_3, 0, 0);
				unk_0x835BBE043A81D6DD(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_215("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0) && !unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
			{
				if (!unk_0x9A4E2270C2271219(uParam0->f_3, 0))
				{
					unk_0xBD875C7680C64C56(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x3AE146F24A3AEEE0(uParam0->f_4, func_206(uParam0->f_7), 1);
				}
				unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
				unk_0x1D1A369233055AEC(*uParam0, 0);
				unk_0x1D1A369233055AEC(uParam0->f_1, 0);
				unk_0x0B28AEB595CB09AF(0);
				unk_0x4523FDDB9926E1D8(0, 1065353216);
				unk_0x4AD174B0D4656163(800);
				unk_0x5BD150B52CE8D356(1);
				unk_0x8ACEB4FC9E9EE225();
				func_143();
				func_232(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xCBB243DDC0D132D1() && !unk_0xF1384D7CDC020749())
			{
				func_204(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
			unk_0x1D1A369233055AEC(*uParam0, 0);
			unk_0x1D1A369233055AEC(uParam0->f_1, 0);
			unk_0x0B28AEB595CB09AF(0);
			unk_0x4523FDDB9926E1D8(0, 1065353216);
			func_204(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0) && !unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
			{
				if (unk_0x0F74EBD810C90005(uParam0->f_3) || unk_0x9A4E2270C2271219(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x810AFFABCBF31E2D(unk_0x27D769C59BC9D030(), -1794415470) != 1 && unk_0x810AFFABCBF31E2D(unk_0x27D769C59BC9D030(), -1794415470) != 0)
				{
					unk_0x835BBE043A81D6DD(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_204(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 1, 0);
	}
	unk_0x9556B1B52B8D9672(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x83DB85FD25128C55(1);
		unk_0x3DFCFAD590F85BF7(1);
	}
	func_205(23, 0);
}

void func_205(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x26545538B51562AD(&Global_25364, iParam0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_25364, iParam0);
	}
}

int func_206(int iParam0)
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

void func_207(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0x54DA78A82349F5AC(*uParam0))
	{
		*uParam0 = unk_0x197AFDD7C344686F(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_208(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_125() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_209(unk_0xA8CFDE65C45F813B(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_209(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xCBE9F57FCC3C2A5A((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 0, iParam0);
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x78856C91417B033E(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 15f);
	}
	unk_0x9556B1B52B8D9672(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0);
	unk_0x83DB85FD25128C55(0);
	unk_0x3DFCFAD590F85BF7(0);
	func_205(23, 1);
}

int func_211(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xE98636CD6C8CB7F8(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0xF196E47C22823C63(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_212(int iParam0)
{
	if (func_213() && unk_0xA0F74982C6AAA9D4() >= iParam0 + 1000)
	{
		unk_0x4E63F662FDE672C3(500);
		while (!unk_0x3934E959DB2478D3())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_31(0);
		func_183();
		return 1;
	}
	return 0;
}

int func_213()
{
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (unk_0x117D586920E8F7BA(0, 18) || unk_0x117D586920E8F7BA(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_214()
{
	if (func_27())
	{
		unk_0x113FDF809A4916C2("appInternet");
	}
	if (func_26())
	{
		unk_0x113FDF809A4916C2("appCamera");
	}
	if (func_33(1))
	{
		func_31(0);
	}
}

void func_215(char* sParam0, var uParam1, int iParam2)
{
	if (unk_0xA0F74982C6AAA9D4() < (*uParam1 + iParam2))
	{
		return;
	}
	*uParam1 = unk_0xA0F74982C6AAA9D4();
}

void func_216(var uParam0)
{
	var uVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xE4F7206742848BAF(uParam0->f_3))
		{
			if (func_168(uParam0->f_3, 1) > 30f || func_217(uParam0))
			{
				if (unk_0x810AFFABCBF31E2D(uParam0->f_3, -1794415470) == 1 || unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) == 1)
				{
					unk_0x433C209504FBC7EE(&uVar0);
					unk_0x33A0CEA494F4C2A3(&uVar0);
					unk_0xF14C2AE8A3F59CE0(0, uParam0->f_4, 0);
					unk_0x878D12AEFBF5BAF0(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xE4A57337AE998385(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x33F83FC0F5F458E3(uVar0);
					unk_0x8B8674266D533E9F(uParam0->f_3, uVar0);
					func_278(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_217(var uParam0)
{
	if ((unk_0xECC01072E61D2F3A(uParam0->f_4) > 3f && func_367(uParam0, 5) > 15f) || unk_0x71A741FE7CE9D57A(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xAB191CE9D0342508(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xAB191CE9D0342508(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xAB191CE9D0342508(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xAB191CE9D0342508(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xA8059F869DFB2747(unk_0x946C63BD9EF05437(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x2FD1F57638D94898(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x2FD1F57638D94898(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x2FD1F57638D94898(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x2FD1F57638D94898(iParam0, 3))
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

int func_219(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x9297C590C99228DC(uParam0->f_4, 1);
		iVar0[1] = unk_0x9297C590C99228DC(uParam0->f_4, 2);
		iVar0[2] = unk_0x9297C590C99228DC(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xD2CFFE76B625AE55(iVar0[iVar4]))
			{
				if (unk_0x2006A8C1BA2AFE80(iVar0[iVar4], 0))
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
		if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_220(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0 = unk_0x9297C590C99228DC(uParam0->f_4, 1);
		if (unk_0xD2CFFE76B625AE55(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x9297C590C99228DC(uParam0->f_4, 2);
			if (unk_0xD2CFFE76B625AE55(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x9297C590C99228DC(uParam0->f_4, 0);
				if (unk_0xD2CFFE76B625AE55(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x1AEADBB0240E0B51(iParam0);
	Var0 = { unk_0x7CECDDECF10DF2AA(iParam0, unk_0xA8CFDE65C45F813B(iParam1, 1)) };
	if (unk_0x946C63BD9EF05437(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x946C63BD9EF05437(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x70083B21A94A4A8C(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x70083B21A94A4A8C(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x70083B21A94A4A8C(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x70083B21A94A4A8C(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_222(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (!unk_0x5EE69620FB6ABC8D(uParam0->f_3) && func_168(uParam0->f_3, 1) < fParam2)
		{
			if (!func_155(uParam0, 5))
			{
				func_66(uParam0, 5, 0, 0);
			}
		}
		else if (func_155(uParam0, 5))
		{
			func_152(uParam0, 5, 0);
		}
		if (((func_367(uParam0, 5) > IntToFloat(iParam1) && unk_0xECC01072E61D2F3A(uParam0->f_4) < fParam4) && !unk_0x5EE69620FB6ABC8D(uParam0->f_3)) || func_168(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_223(var uParam0, float fParam1)
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
	
	iVar18 = unk_0x1060AD708DD56BC7(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x1060AD708DD56BC7(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0xEAE1E838D30BBB88(uParam0->f_4, iVar18) };
		Var6 = { unk_0x7CECDDECF10DF2AA(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xD7C4E2CB0B216852(uParam0->f_4, Var6) };
	Var3 = { unk_0xD7C4E2CB0B216852(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x777175C2C7FD5EA0(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xA8ED9F72DC442242(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_169(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x43698C98CC255554((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xE98636CD6C8CB7F8(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0xF196E47C22823C63(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
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
			else if (unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) != 1 && unk_0x810AFFABCBF31E2D(uParam0->f_3, 242628503) != 0)
			{
				unk_0x433C209504FBC7EE(&(uParam0->f_243));
				unk_0x33A0CEA494F4C2A3(&(uParam0->f_243));
				unk_0x878D12AEFBF5BAF0(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
				unk_0x575C8AF5AF9A9FED(uParam0->f_243, 1);
				unk_0x33F83FC0F5F458E3(uParam0->f_243);
				unk_0x8B8674266D533E9F(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x8ACEB4FC9E9EE225();
			if (uParam0->f_411 != 9)
			{
				if (!func_231(uParam0->f_44, 128))
				{
					func_189(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_141(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xF156AA2A744B309E(uParam0->f_3);
			unk_0x85FD30B510E7C05E(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x433C209504FBC7EE(&(uParam0->f_243));
			unk_0x33A0CEA494F4C2A3(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x878D12AEFBF5BAF0(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x878D12AEFBF5BAF0(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
			unk_0x33F83FC0F5F458E3(uParam0->f_243);
			unk_0x8B8674266D533E9F(uParam0->f_3, uParam0->f_243);
			unk_0x433C209504FBC7EE(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x4F42FA30FB1F8CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

float func_224(var uParam0, int iParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		if (func_156(uParam0))
		{
			return func_169(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_225(var uParam0)
{
	func_177(uParam0, uParam0->f_3);
	if (func_156(uParam0))
	{
		if (func_155(uParam0, 14))
		{
			func_179(uParam0);
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
			{
				unk_0x9403D0F4C7711241(&(uParam0->f_10));
			}
		}
	}
	if (!func_155(uParam0, 9))
	{
		if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
		{
			unk_0xB412D79FA1018FF0(uParam0->f_8, 0);
			unk_0xAB27F3DE6390C749(uParam0->f_8, 0);
		}
		func_66(uParam0, 9, 0, 0);
		func_226("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_226(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0xB1547516FF59A048(iParam1, 1);
}

void func_227(var uParam0, int iParam1)
{
	func_228(uParam0, iParam1);
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_229(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

int func_230(int iParam0)
{
	return Global_101154.f_17787.f_39[iParam0];
}

bool func_231(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_232(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_36();
		func_66(uParam0, 16, 4f, 0);
		unk_0x8ACEB4FC9E9EE225();
	}
}

int func_233(int iParam0, bool bParam1, bool bParam2)
{
	return func_122(iParam0, !bParam1, bParam2);
}

void func_234(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
			}
		}
	}
}

void func_235(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_113(Param0, func_125(), 0))
	{
		Var0 = { func_30(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_30(Param0, 1f, 30f, 30f, 10f) };
		unk_0x5B40EC93D0367189(Var0, Var3, iParam3, 1);
	}
}

void func_236(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x883F8CC56FCEEB11(Param1, 20f, 5f, 0);
}

void func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_14(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

int func_238()
{
	if (func_178(&Local_859))
	{
		if (!unk_0x875098323FCA8FE6(iLocal_1564))
		{
			return 0;
		}
		if (!unk_0x4C3CEC038B6637D7(Local_1648.f_0))
		{
			return 0;
		}
		if (!func_239(&uLocal_857, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_239(var uParam0, bool bParam1)
{
	if (!unk_0x875098323FCA8FE6(func_12()))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", uParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x482101C9B3483958("gestures@m@standing@casual"))
		{
			func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", uParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x482101C9B3483958("oddjobs@taxi@"))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("oddjobs@towingcome_here"))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x482101C9B3483958("misscommon@response"))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x911CCA58116D31F0(2))
	{
		func_215("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", uParam0, 1000);
		return 0;
	}
	return 1;
}

void func_240()
{
	unk_0x97C59C4E8349D15F(iLocal_1564);
	Local_1648.f_0 = func_242();
	func_241(1);
}

void func_241(bool bParam0)
{
	unk_0x97C59C4E8349D15F(func_12());
	if (bParam0)
	{
		unk_0x88172B3983EC5071("gestures@m@standing@casual");
	}
	unk_0x88172B3983EC5071("oddjobs@taxi@");
	unk_0x88172B3983EC5071("oddjobs@towingcome_here");
	unk_0x88172B3983EC5071("misscommon@response");
	unk_0x8378AB3CED5FF44A("TAXI", 2);
	if (!func_231(Global_101154.f_17787, 128))
	{
		func_227(&(Global_101154.f_17787), 128);
	}
}

var func_242()
{
	return unk_0x9A64FC8B83855E3B("MIDSIZED_MESSAGE");
}

int func_243(var uParam0)
{
	if (unk_0x9A4E2270C2271219(uParam0->f_2, 0))
	{
		uParam0->f_4 = unk_0xD9FFE8E1642C81E2(uParam0->f_2, 0);
		if (unk_0x99A6DF927B71E935(uParam0->f_2) || unk_0x946C63BD9EF05437(uParam0->f_4) == func_12())
		{
			if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
			{
				if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == uParam0->f_2)
				{
					unk_0xDD8638B43D499C77(uParam0->f_4);
					func_245(uParam0);
					func_39(2, 0);
					bLocal_94 = true;
					func_244(12);
					func_154(&uLocal_90);
					return 1;
				}
				else
				{
					func_278(uParam0, "No Taxi", 21);
					func_229("TAXI_DBG_NTAXI", -1);
				}
			}
			else
			{
				func_278(uParam0, "Taxi is not drivable", 0);
				func_229("TAXI_DBG_NTAXI", -1);
			}
		}
		else if (func_367(uParam0, 3) > 2f)
		{
			func_278(uParam0, "No Taxi", 21);
			func_229("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_244(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		uVar0 = iParam0;
		unk_0x4392DD4CF5597D9C(8, &uVar0, 1, 1);
	}
	else if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xA5064174B9213E3A(8, &cVar1);
	}
}

void func_245(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		if (func_129())
		{
		}
	}
}

void func_246(var uParam0, int iParam1)
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

int func_247(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	iVar1 = func_251(uParam0, iParam2);
	iVar0 = iVar1;
	func_248(uParam0, iVar0, uParam1, &bVar2, &uVar7);
	if (!bVar2)
	{
		if ((((iVar1 != 0 && iVar1 != 3) && iVar1 != 8) && iVar1 != 13) && iVar1 != 18)
		{
			iVar0 = (iVar1 - 1);
			bVar3 = true;
		}
		if (bVar3)
		{
			func_248(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_248(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_248(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_248(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (bVar2)
	{
	}
	Global_100228[3] = Global_100228[2];
	Global_100228[2] = Global_100228[1];
	Global_100228[1] = Global_100228[0];
	Global_100228[0] = iVar0;
	Global_100223[3] = Global_100223[2];
	Global_100223[2] = Global_100223[1];
	Global_100223[1] = Global_100223[0];
	Global_100223[0] = uVar7;
	if (!Global_100208)
	{
		Global_100208 = 1;
	}
	return 1;
}

void func_248(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < (uParam0[iParam1 /*11*/])->f_1)
	{
		Var1 = { func_250(uParam0, iParam1, iVar0) };
		if (func_197(Var1, 1) < func_197(*uParam2, 1))
		{
			if (Global_100208 && ((((iParam1 == Global_100228[0] && iVar0 == Global_100223[0]) || (iParam1 == Global_100228[1] && iVar0 == Global_100223[1])) || (iParam1 == Global_100228[2] && iVar0 == Global_100223[2])) || (iParam1 == Global_100228[3] && iVar0 == Global_100223[3])))
			{
			}
			else if (func_249(Var1, 1) > 40f)
			{
				*uParam2 = { Var1 };
				*uParam4 = iVar0;
				if (func_197(*uParam2, 1) <= 0.6f)
				{
					*uParam4 = iVar0;
					*bParam3 = 1;
				}
			}
		}
		iVar0++;
	}
}

float func_249(struct<3> Param0, int iParam3)
{
	return func_127(unk_0xC834A7C58DEB59B4(unk_0xB927AFB90873B8C1()), Param0, iParam3);
}

Vector3 func_250(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { func_125() };
	if (iParam2 == -1)
	{
		iParam2 = (unk_0x3A5708FEE1B560A9(0, 65535) % (uParam0[iParam1 /*11*/])->f_1);
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

int func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_252(uParam0);
	if (iParam1 > 1)
	{
		iVar1 = (unk_0x3A5708FEE1B560A9(0, 65535) % 3);
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

int func_252(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (unk_0x4E839ED2046D41A1(unk_0x27D769C59BC9D030(), (uParam0[iVar0 /*11*/])->f_2, (uParam0[iVar0 /*11*/])->f_5, 0, 0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 22;
}

bool func_253(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_254(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
		{
			if (bParam2)
			{
				if (func_367(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_189(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_189(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_66(uParam0, 10, 0f, 1);
				}
			}
			else if (func_367(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_189(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_189(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_66(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_367(uParam0, 10) > 30f)
		{
			if (!func_38())
			{
				if (uParam0->f_112)
				{
					func_189(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_189(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_66(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_231(uParam0->f_100, 64))
	{
		if (!func_7(&(Local_190[5 /*10*/].f_6)))
		{
			func_154(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_277(uParam0))
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_276(uParam0, 1);
				func_274(5, uParam0);
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 1))
	{
		if (!func_7(&(Local_190[0 /*10*/].f_6)))
		{
			func_154(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_272(uParam0))
			{
				func_276(uParam0, 1);
				func_274(0, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 2))
	{
		if (!func_7(&(Local_190[1 /*10*/].f_6)))
		{
			func_154(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_271(uParam0))
			{
				func_276(uParam0, 1);
				func_274(1, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 2048))
	{
		if (!func_7(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x4C3235E6E203703D(uParam0->f_4);
				func_154(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_90(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_270(uParam0))
			{
				func_276(uParam0, 1);
				func_274(8, uParam0);
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 128))
	{
		if (!func_7(&(Local_190[6 /*10*/].f_6)))
		{
			func_154(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_269(uParam0))
			{
				func_276(uParam0, 1);
				func_274(6, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 32))
	{
		if (!func_7(&(Local_190[4 /*10*/].f_6)))
		{
			func_154(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_268(uParam0))
			{
				func_276(uParam0, 1);
				func_274(4, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 256))
	{
		if (!func_7(&(Local_190[7 /*10*/].f_6)))
		{
			func_154(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_267(uParam0))
			{
				func_274(7, uParam0);
				func_276(uParam0, 1);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 8))
	{
		if (!func_7(&(Local_190[9 /*10*/].f_6)))
		{
			func_154(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
		}
		else if (func_90(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_266(uParam0))
			{
				func_276(uParam0, 1);
				func_274(9, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 16384))
	{
		if (!func_7(&(Local_190[13 /*10*/].f_6)))
		{
			func_154(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_260(uParam0))
			{
				func_276(uParam0, 1);
				func_274(13, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 32768))
	{
		if (!func_7(&(Local_190[14 /*10*/].f_6)))
		{
			func_154(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_259(uParam0))
			{
				func_276(uParam0, 1);
				func_274(14, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 4096))
	{
		if (!func_7(&(Local_190[11 /*10*/].f_6)))
		{
			func_154(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_258(uParam0))
			{
				func_276(uParam0, 1);
				func_274(11, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 8192))
	{
		if (!func_7(&(Local_190[12 /*10*/].f_6)))
		{
			func_154(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_90(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_257(uParam0))
			{
				func_276(uParam0, 1);
				func_274(12, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_273(uParam0);
			}
		}
	}
	if (func_231(uParam0->f_100, 4))
	{
		if (!func_7(&(Local_190[2 /*10*/].f_6)))
		{
			func_256(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_90(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_255(uParam0))
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_276(uParam0, 1);
				func_274(2, uParam0);
				func_273(uParam0);
			}
		}
	}
}

int func_255(var uParam0)
{
	float fVar0;
	
	if (!unk_0xE4F7206742848BAF(uParam0->f_2))
	{
		if ((!unk_0xECD82034ED52600B(uParam0->f_2) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xECC01072E61D2F3A(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_154(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_90(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xECC01072E61D2F3A(uParam0->f_2);
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

void func_256(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_68(uParam0, fParam1);
	}
}

int func_257(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		Var0 = { unk_0x936D9EB7E9F75DA2(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[12 /*10*/].f_3)))
			{
				func_154(&(Local_190[12 /*10*/].f_3));
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

int func_258(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[1 /*10*/].f_3))) && !func_7(&(Local_190[5 /*10*/].f_3))) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3))) && !func_7(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x936D9EB7E9F75DA2(uParam0->f_4, 1) };
		if (unk_0x43698C98CC255554(Var0.f_0) > 2.5f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[11 /*10*/].f_3)))
			{
				func_154(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_90(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x43698C98CC255554(uLocal_342) - unk_0x43698C98CC255554(Var0.f_0)) < 0f)
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

int func_259(var uParam0)
{
	if (((((unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0) && !func_7(&(Local_190[0 /*10*/].f_3))) && !func_7(&(Local_190[8 /*10*/].f_3))) && !func_7(&(Local_190[5 /*10*/].f_3))) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_7(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xE02F462DE06D185B(unk_0xA8CFDE65C45F813B(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xD2CFFE76B625AE55(uParam0->f_5))
			{
				if ((unk_0xECC01072E61D2F3A(uParam0->f_4) > 15f && func_169(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x2006A8C1BA2AFE80(uParam0->f_5, 0) && !unk_0x32C6487B93CCAF4F(uParam0->f_5, -1)))
				{
					func_154(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_90(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_169(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x1A82CEBB20BF3F73(uParam0->f_5))
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_90(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x1A82CEBB20BF3F73(uParam0->f_5))
		{
			func_89(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_260(var uParam0)
{
	if (((unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0) && !func_7(&(Local_190[9 /*10*/].f_3))) && !func_7(&(Local_190[7 /*10*/].f_3))) && !func_7(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_261(uParam0->f_4) && unk_0xECC01072E61D2F3A(uParam0->f_4) > 15f)
		{
			if (!func_7(&(Local_190[13 /*10*/].f_3)))
			{
				func_154(&(Local_190[13 /*10*/].f_3));
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

bool func_261(int iParam0)
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
	
	unk_0x73C1A9AD53AC8AD8(unk_0xA8CFDE65C45F813B(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x73C1A9AD53AC8AD8(unk_0xA8CFDE65C45F813B(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xED5F844026C08CB7(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_265((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_264(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_262(unk_0xA8CFDE65C45F813B(iParam0, 1), Var15, Var18, Var21);
}

int func_262(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_265(Param6 - Param3) };
	Var3 = { func_265(Param9 - Param3) };
	fVar6 = func_263(Param0, Var0);
	fVar7 = func_263(Param3, Var0);
	fVar8 = func_263(Param6, Var0);
	fVar9 = func_263(Param0, Var3);
	fVar10 = func_263(Param3, Var3);
	fVar11 = func_263(Param9, Var3);
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

float func_263(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_264(struct<3> Param0, int iParam3)
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

Vector3 func_265(struct<3> Param0)
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

int func_266(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == unk_0x27D769C59BC9D030())
		{
			if (unk_0x6496E089A686F399(unk_0x4D29100D094E5511()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0x9297C590C99228DC(uParam0->f_4, -1) == unk_0x27D769C59BC9D030())
		{
			if (unk_0x71A741FE7CE9D57A(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0x943B0C3F713F51DE(uParam0->f_4) <= -145f || unk_0x943B0C3F713F51DE(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0x943B0C3F713F51DE(uParam0->f_4) <= 35f && unk_0x943B0C3F713F51DE(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_268(var uParam0)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0 = unk_0x3709CB38CF163ACD(unk_0x4D29100D094E5511());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_190[4 /*10*/].f_3)))
			{
				func_154(&(Local_190[4 /*10*/].f_3));
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

int func_269(var uParam0)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		iVar0 = unk_0x4A3FB4BE0A14981D(unk_0x4D29100D094E5511());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_190[6 /*10*/].f_3)))
			{
				func_154(&(Local_190[6 /*10*/].f_3));
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

int func_270(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0xF6E7E32D0D604675(uParam0->f_4))
		{
			iVar0 = unk_0x4C3235E6E203703D(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x1393E54C663BBD20(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, 72, 1, 0, 1);
				}
				func_89(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		Var0 = { unk_0x936D9EB7E9F75DA2(uParam0->f_4, 1) };
		if (unk_0x43698C98CC255554(Var0.f_0) > 3f && !func_7(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_190[1 /*10*/].f_3)))
			{
				func_154(&(Local_190[1 /*10*/].f_3));
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

int func_272(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (!unk_0xC2331082FBFCB35D(uParam0->f_4) && unk_0x0BAF34551BADE6DC(uParam0->f_4))
		{
			if (!func_7(&(Local_190[0 /*10*/].f_3)))
			{
				func_154(&(Local_190[0 /*10*/].f_3));
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

void func_273(var uParam0)
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
	unk_0xF8BD87F4D1FA0B7B(unk_0x4D29100D094E5511());
}

void func_274(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_275(uParam1, iParam0);
	func_89(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_276(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_277(var uParam0)
{
	if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
	{
		if (unk_0xECC01072E61D2F3A(uParam0->f_4) > 25f)
		{
			if (!func_7(&(Local_190[5 /*10*/].f_3)))
			{
				func_154(&(Local_190[5 /*10*/].f_3));
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

void func_278(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_183();
	func_65(2);
	Var0 = { func_291() };
	if ((!unk_0x75CB9E30BA492FF0(&Var0) && func_38()) && !unk_0xC1C5B83BB6719C6C(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x8ACEB4FC9E9EE225();
		unk_0x5BD150B52CE8D356(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
		{
			if (!func_138(uParam0))
			{
				if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0xF4954568C87BA772(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x1B1FB642178B8CEE(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0xF4954568C87BA772(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x1B1FB642178B8CEE(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
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
				func_289(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_141(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_289(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_289(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_289(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_289(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_289(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_138(uParam0))
			{
				if (unk_0xFCFE5DE581193020(uParam0->f_4))
				{
					func_123(uParam0, 4096, 0);
				}
				else
				{
					func_123(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_289(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_289(uParam0, &Var0);
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
				func_289(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_141(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_289(uParam0, &Var0);
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_289(uParam0, &Var0);
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 1, 0);
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
				func_289(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_141(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_123(uParam0, 0, 0);
			func_289(uParam0, &Var0);
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
				func_289(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_141(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_289(uParam0, &Var0);
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
				func_289(uParam0, &Var0);
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_141(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_288(&Var0);
			func_279(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_289(uParam0, &Var0);
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
					func_289(uParam0, &Var0);
				}
			}
			else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
			{
				func_141(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_39(3, 0);
		}
		func_66(uParam0, 3, 0f, 1);
	}
}

int func_279(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_287(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_280(sParam2, iParam3, 0);
}

int func_280(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0x94DA6AACA7F07289(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_184();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1BF2632AED6B5924())
		{
			return 0;
		}
		if (func_286(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_285();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
			if (bParam2)
			{
				func_284();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_283())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_282();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_281();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_184();
	}
	return 0;
}

void func_281()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x94DA6AACA7F07289(0);
	Global_15712 = 1;
}

void func_282()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
}

int func_283()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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

void func_284()
{
	if (func_64(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_83();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_285()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_287(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_288(char* sParam0)
{
	switch (func_86(unk_0x27D769C59BC9D030()))
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

void func_289(var uParam0, char* sParam1)
{
	if (func_290(uParam0))
	{
		func_279(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_290(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (func_169(unk_0x27D769C59BC9D030(), uParam0->f_3, 1) < 40f && !unk_0x5EE69620FB6ABC8D(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_291()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_292(var uParam0)
{
	return uParam0->f_118;
}

void func_293()
{
	func_327(&Local_859);
	if (func_326(&Local_859, &Local_1566))
	{
		switch (Local_1566.f_27)
		{
			case 0:
				if (Local_859.f_410 == 9)
				{
					if (!func_325(&Local_859))
					{
						if (func_324("TX_OBJ_PRO_DO") || unk_0x7B4654D62B7E0E9E(Local_859.f_9))
						{
							Local_1566.f_27++;
						}
						else if (func_323(&Local_859) != 10)
						{
							func_189(&Local_859, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_323(&Local_859) > 10 && func_323(&Local_859) != 15) && !func_325(&Local_859))
				{
					if (!unk_0xE4F7206742848BAF(Local_859.f_3))
					{
						func_141(Local_859.f_3, "PED_RANT", Local_859.f_145, 4);
					}
					Local_1566.f_27++;
					if (bLocal_1565)
					{
					}
				}
				break;
			}
	}
	func_294(&Local_859, &uLocal_1596, &Local_1566, bLocal_1565);
}

int func_294(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_304(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_155(uParam0, 2))
	{
		if (func_303(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xA0F74982C6AAA9D4() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_302(uParam0))
				{
					uParam2->f_7 = { func_301(uParam1) };
					func_279(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_38())
				{
					uParam2->f_13 = { func_192() };
					if (unk_0xC1C5B83BB6719C6C(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_228(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_298(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_297(uParam0))
				{
					if (func_38())
					{
						func_66(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_296() };
						if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) >= 1)
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
					uParam2->f_19 = { func_291() };
				}
				else
				{
					func_228(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_298(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_155(uParam0, 14) && !func_38()) && !func_297(uParam0)) && func_367(uParam0, 18) > 1f)
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
					if (func_367(uParam0, 18) > 1f)
					{
						if (!unk_0x75CB9E30BA492FF0(&(uParam2->f_1)))
						{
							func_295(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
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
					func_228(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_298(uParam1);
					func_66(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_295(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_287(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_280(sParam2, iParam4, 0);
}

struct<6> func_296()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x2A19A119886EC3BF(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x2A19A119886EC3BF(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_297(var uParam0)
{
	return uParam0->f_110;
}

void func_298(var uParam0)
{
	int iVar0;
	
	iVar0 = func_300(uParam0);
	if (iVar0 > -1)
	{
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_227(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_299(), 24);
	}
}

var func_299()
{
	var uVar0;
	
	return uVar0;
}

int func_300(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_231((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_301(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_231((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_227(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_302(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_163("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_163("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_163("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_163("TX_OBJ_GYB_DO", 0, 0) || func_163("TAXI_OBJ_GYB", 0, 0)) || func_163("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_163("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_163("TX_OBJ_CYI_DO", 0, 0) || func_163("TAXI_OBJ_CYI_01", 0, 0)) || func_163("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_163("TX_OBJ_GYN_DO", 0, 0) || func_163("TAXI_OBJ_GYN", 0, 0)) || func_163("TAXI_OBJ_GYN_TG", 0, 0)) || func_163("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_163("TAXI_OBJ_CC1", 0, 0) || func_163("TAXI_OBJ_CC2", 0, 0)) || func_163("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_163("TAXI_OBJ_FTC1", 0, 0) || func_163("TAXI_OBJ_FTC2", 0, 0)) || func_163("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_163("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_163("TAXI_OBJ_GETRUN", 0, 0) || func_163("TAXI_OBJ_DRIVE", 0, 0)) || func_163("TAXI_OBJ_RETURN", 0, 0)) || func_163("TAXI_OBJ_POL", 0, 0)) || func_163("TAXI_OBJ_RUNOUT", 0, 0)) || func_163("TAXI_OBJ_POL", 0, 0));
}

int func_303(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_231((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_304(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_302(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_155(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_323(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_320(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
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
						func_319(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_316(uParam0, Var0, func_318(uParam0, 2));
				}
				if (func_231(uParam0->f_98, 4))
				{
					func_66(uParam0, 16, 0, 0);
					func_232(uParam0, 0, 0);
				}
				func_174(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_367(uParam0, 16) > 1f)
				{
					func_176(1);
					if (uParam0->f_411 == 9)
					{
						func_226("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_226("TAXI_VIP_RETURN", 7500, 1);
					}
					func_66(uParam0, 16, 0, 0);
					func_232(uParam0, 0, 0);
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
					func_319(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
				{
					func_141(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_367(uParam0, 16) > func_97(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_38()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_323(uParam0))
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
				func_319(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_320(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_279(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_189(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_66(uParam0, 16, 0, 0);
				func_189(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_231(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_322(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_319(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_66(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_226("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_226("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x7B4654D62B7E0E9E(uParam0->f_9))
					{
						uParam0->f_9 = func_188(uParam0->f_17, 1);
					}
					else if (unk_0xD033DA403C7AE3E6(uParam0->f_9) == 0)
					{
						unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
						unk_0x1651233EBDC5526E(uParam0->f_9, uParam0->f_17);
						unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
					}
				}
				func_189(uParam0, 10, 1, 0, 0);
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
				func_191(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_141(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0x7B4654D62B7E0E9E(uParam0->f_9))
					{
						uParam0->f_9 = func_188(uParam0->f_17, 1);
					}
					else if (unk_0xD033DA403C7AE3E6(uParam0->f_9) == 0)
					{
						unk_0xB412D79FA1018FF0(uParam0->f_9, 255);
						unk_0x1651233EBDC5526E(uParam0->f_9, uParam0->f_17);
						unk_0xAB27F3DE6390C749(uParam0->f_9, 1);
					}
				}
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_315(uParam0, 33554432, Var0, "", 1, 8);
				func_66(uParam0, 16, 0, 0);
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_38())
				{
					func_314(uParam0, 0);
					func_227(&(uParam0->f_44), 4);
					func_66(uParam0, 16, 0, 0);
					func_189(uParam0, 13, 0, 0, 0);
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
				func_191(&Var0);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_367(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_191(&Var0);
					}
					func_312(Var0, uParam1);
					func_227(&(uParam0->f_81), 67108864);
					func_66(uParam0, 16, 0, 0);
					func_66(uParam0, 11, 0, 0);
					func_232(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_367(uParam0, 11) > uParam0->f_36)
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
							func_191(&Var0);
						}
					}
					func_312(Var0, uParam1);
					func_66(uParam0, 11, 0, 0);
					func_66(uParam0, 16, 0, 0);
					func_232(uParam0, 0, 0);
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
					func_191(&Var0);
				}
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
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
				func_191(&Var0);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
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
				func_191(&Var0);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_191(&Var0);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_232(uParam0, 0, 0);
				func_227(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 1, 0, 8);
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
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
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
					func_310(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_310(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_312(Var0, uParam1);
				func_320(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 6, 0f, 1);
				func_232(uParam0, 0, 0);
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
					func_310(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_310(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_312(Var0, uParam1);
				func_320(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 6, 0f, 1);
				func_232(uParam0, 0, 0);
				break;
			
			case 12:
				func_226("TAXI_OBJ_GYB", 3500, 1);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_226("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_226("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_226("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
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
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_231(uParam0->f_98, 268435456))
				{
					func_226("TAXI_OBJ_CYI_01", 7500, 1);
					func_227(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_191(&Var0);
				func_312(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_191(&Var0);
				func_312(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_191(&Var0);
				func_312(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 33:
				func_226("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_231(uParam0->f_82, 8192))
				{
					if (func_367(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_191(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_312(Var0, uParam1);
						}
						else
						{
							func_319(uParam0, &Var0, 0, 0, 8);
						}
						func_227(&(uParam0->f_82), 8192);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_232(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_231(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_191(&Var0);
					func_319(uParam0, &Var0, 0, 0, 8);
					func_227(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_231(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_191(&Var0);
					func_319(uParam0, &Var0, 0, 0, 8);
					func_227(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 46, 1, 0, 0);
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
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_232(uParam0, 0, 0);
				break;
			
			case 139:
				func_226("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_189(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x3A5708FEE1B560A9(0, 120);
				if (!func_231(uParam0->f_82, 268435456))
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
					func_227(&(uParam0->f_82), 268435456);
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
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x3A5708FEE1B560A9(0, 100);
				if (!func_231(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_227(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_226("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_232(uParam0, 0, 0);
				func_189(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_38())
				{
					func_226("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_232(uParam0, 0, 0);
					func_189(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_226("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_232(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_231(uParam0->f_81, 1))
				{
					func_309(uParam0, 1, Var0, "_sick1", 8);
					func_13(&(uParam0->f_81), 2);
				}
				else if (!func_231(uParam0->f_81, 2))
				{
					func_309(uParam0, 2, Var0, "_sick2", 8);
					func_13(&(uParam0->f_81), 1);
				}
				func_320(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_231(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_231(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_227(&(uParam0->f_81), 2097152);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 16, 0, 0);
				func_320(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_232(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_320(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_320(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_320(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_231(uParam0->f_81, 4))
				{
					func_309(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_231(uParam0->f_81, 8))
				{
					func_309(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_309(uParam0, 8, Var0, "_turns3", 8);
					func_13(&(uParam0->f_81), 4);
					func_13(&(uParam0->f_81), 8);
				}
				func_320(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_308(uParam0))
				{
					func_316(uParam0, Var0, func_318(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_141(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_322(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_279(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_322(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_322(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_320(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_231(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 128);
					func_13(&(uParam0->f_83), 256);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 256);
					func_13(&(uParam0->f_83), 512);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 512);
					func_13(&(uParam0->f_83), 128);
					func_66(uParam0, 16, 0, 0);
				}
				func_232(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_231(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_191(&Var0);
					}
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 1);
					func_13(&(uParam0->f_83), 2);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_191(&Var0);
					}
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 2);
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
				else if (!func_231(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_191(&Var0);
					}
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 4);
					func_13(&(uParam0->f_83), 1);
					func_66(uParam0, 16, 0, 0);
				}
				func_320(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_231(uParam0->f_81, 4096))
				{
					func_315(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_231(uParam0->f_81, 8192))
				{
					func_315(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_320(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_231(uParam0->f_81, 16384))
				{
					func_315(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_231(uParam0->f_81, 32768))
				{
					func_315(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_320(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_231(uParam0->f_82, 8))
					{
						func_307(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_231(uParam0->f_82, 16))
					{
						func_307(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_231(uParam0->f_82, 32))
					{
						func_307(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_320(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_232(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_322(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_320(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_66(uParam0, 16, 0, 0);
					func_232(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_320(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_320(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_231(uParam0->f_81, 65536))
				{
					func_315(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_231(uParam0->f_81, 131072))
				{
					func_315(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_232(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_308(uParam0))
				{
					func_316(uParam0, Var0, func_318(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_141(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_231(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 8);
					func_13(&(uParam0->f_83), 16);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 16);
					func_13(&(uParam0->f_83), 32);
					func_66(uParam0, 16, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 32);
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
				else if (!func_231(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_227(&(uParam0->f_83), 64);
					func_13(&(uParam0->f_83), 8);
					func_66(uParam0, 16, 0, 0);
				}
				func_320(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
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
					func_319(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_316(uParam0, Var0, func_318(uParam0, 65));
					func_232(uParam0, 0, 0);
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
					func_319(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_316(uParam0, Var0, func_318(uParam0, 66));
					func_232(uParam0, 0, 0);
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
								func_319(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_319(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_319(uParam0, &Var0, 0, 0, 8);
								func_320(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_319(uParam0, &Var0, 0, 0, 8);
								func_320(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_319(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_322(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_320(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_66(uParam0, 16, 0, 0);
								func_232(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_319(uParam0, &Var0, 0, 0, 8);
									func_66(uParam0, 16, 0, 0);
									func_66(uParam0, 11, 0, 0);
									func_232(uParam0, 0, 0);
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
									func_191(&Var0);
									func_319(uParam0, &Var0, 0, 0, 8);
									func_66(uParam0, 16, 0, 0);
									func_66(uParam0, 11, 0, 0);
									func_232(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_319(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_189(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_320(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_231(uParam0->f_82, 1))
				{
					func_307(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_231(uParam0->f_82, 2))
				{
					func_307(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_231(uParam0->f_82, 4))
				{
					func_307(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_232(uParam0, 0, 0);
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
				func_322(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
				{
					func_141(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_66(uParam0, 16, 0, 0);
				func_320(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_308(uParam0))
				{
					func_316(uParam0, Var0, func_318(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_141(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_306(uParam0, Var0, 8);
				}
				func_320(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_231(uParam0->f_83, 1024))
				{
					func_227(&(uParam0->f_83), 1024);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 2048))
				{
					func_227(&(uParam0->f_83), 2048);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_231(uParam0->f_83, 4096))
				{
					func_227(&(uParam0->f_83), 4096);
					func_66(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_191(&Var0);
					func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_232(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_231(uParam0->f_82, 1024))
				{
					func_307(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_13(&(uParam0->f_82), 2048);
				}
				else if (!func_231(uParam0->f_82, 2048))
				{
					func_307(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_232(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_320(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 52, 1, 0, 0);
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
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xE4F7206742848BAF(uParam0->f_3))
				{
					func_141(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_308(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_319(uParam0, &Var0, 0, 0, 8);
						func_189(uParam0, 52, 1, 0, 0);
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
						func_319(uParam0, &Var0, 0, 0, 8);
						func_66(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_322(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_66(uParam0, 16, 0, 0);
					func_232(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_320(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_66(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xC6861DC0B749762A(unk_0xB927AFB90873B8C1()) >= 1)
				{
					func_226("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_232(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_231(uParam0->f_81, 262144))
				{
					func_315(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_231(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_315(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_315(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_320(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_231(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_305(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_231(uParam0->f_82, 134217728))
				{
					func_305(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_320(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 100:
				func_226("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_232(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_191(&Var0);
				}
				func_227(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_191(&Var0);
				}
				func_227(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_319(uParam0, &Var0, 0, 0, 8);
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
					func_191(&Var0);
				}
				func_227(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_231(uParam0->f_82, 65536))
				{
					if (func_367(uParam0, 11) > uParam0->f_36)
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
						func_191(&Var0);
						func_312(Var0, uParam1);
						func_227(&(uParam0->f_82), 65536);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_232(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_231(uParam0->f_82, 131072))
				{
					if (func_367(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_191(&Var0);
						func_312(Var0, uParam1);
						func_227(&(uParam0->f_82), 131072);
						func_66(uParam0, 16, 0, 0);
						func_66(uParam0, 11, 0, 0);
						func_232(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_231(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_227(&(uParam0->f_82), 8388608);
				}
				else if (!func_231(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_227(&(uParam0->f_82), 16777216);
				}
				else if (!func_231(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_227(&(uParam0->f_82), 33554432);
				}
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_322(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_191(&Var0);
					func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_319(uParam0, &Var0, 0, 0, 8);
				}
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_312(Var0, uParam1);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_322(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_321(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_189(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_227(&(uParam0->f_81), 2097152);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_191(&Var0);
				func_312(Var0, uParam1);
				func_227(&(uParam0->f_81), 67108864);
				func_66(uParam0, 16, 0, 0);
				func_66(uParam0, 11, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_231(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_315(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xE4F7206742848BAF(uParam0->f_3))
					{
						func_141(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_189(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_231(uParam0->f_81, 268435456))
				{
					func_315(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_189(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_226("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_232(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_231(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_315(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xE4F7206742848BAF(uParam0->f_3))
						{
							func_141(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_315(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_189(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_226("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_232(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_279(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_66(uParam0, 16, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_231(uParam0->f_81, 16777216))
				{
					func_315(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_232(uParam0, 0, 0);
				break;
			
			case 88:
				func_226("TAXI_TIEFLEE", 7500, 1);
				func_232(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_231(uParam0->f_98, 536870912))
				{
					func_226("TAXI_OBJ_CYI_1B", 7500, 1);
					func_227(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_232(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_191(&Var0);
				func_319(uParam0, &Var0, 0, 0, 8);
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
				func_319(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_319(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 0, 0);
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
				func_319(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_319(uParam0, &Var0, 1, 0, 8);
				func_189(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_226("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_189(uParam0, 0, 0, 0, 0);
				func_232(uParam0, 0, 0);
				break;
			}
	}
}

void func_305(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_227(&(uParam0->f_82), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_191(&Param2);
	}
	func_279(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_306(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_231(uParam0->f_82, 64))
	{
		func_227(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_231(uParam0->f_82, 128))
	{
		func_227(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x3A5708FEE1B560A9(1, 3), 24);
	}
	func_321(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_66(uParam0, 16, 0, 0);
}

void func_307(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_227(&(uParam0->f_82), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_191(&Param2);
		}
	}
	func_279(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_308(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_309(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_227(&(uParam0->f_81), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_279(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_310(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_311(*uParam0, iVar1))
		{
			func_228(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_191(sParam2);
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

bool func_311(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_312(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_313(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_227(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_313(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x75CB9E30BA492FF0(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_314(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_226("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_226("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_226("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_226("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_226("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_226("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_226("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_226("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_226("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_226("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_226("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_226("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_226("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_315(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_227(&(uParam0->f_81), iParam1);
	func_66(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_191(&Param2);
	}
	func_279(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_316(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_66(uParam0, 16, 0, 0);
	func_66(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xE4F7206742848BAF(uParam0->f_3))
	{
		unk_0x00C2B9392B0A0B43(uParam0->f_3, &cParam1, func_317(uParam0));
	}
}

char* func_317(var uParam0)
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

char* func_318(var uParam0, int iParam1)
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

int func_319(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_66(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_66(uParam0, 17, 0f, 1);
	}
	func_232(uParam0, iParam2, 0);
	return func_279(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_320(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_231(*uParam2, 2))
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
		if (func_231(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_231(*uParam2, 4))
		{
			if (!func_231(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_231(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_231(*uParam2, 512))
		{
			if (!func_231(*uParam2, 4096))
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
		if (func_231(*uParam2, 16))
		{
			if (!func_231(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_231(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_231(*uParam2, 64))
		{
			if (!func_231(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_231(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_231(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_231(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_231(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_231(*uParam2, 8192))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_231(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_231(*uParam2, 16384))
		{
			if (func_231(*uParam2, 4194304))
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
		if (func_231(*uParam2, 32768))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_231(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_231(*uParam2, 65536))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_231(*uParam2, 131072))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_231(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_231(*uParam2, 262144))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_231(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_231(*uParam2, 524288))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_231(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_231(*uParam2, 1048576))
		{
			if (func_231(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_231(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_231(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_231(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_231(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_231(*uParam2, 67108864))
		{
			if (func_231(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_231(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_231(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_231(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_231(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_321(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_287(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_280(sParam2, iParam4, 0);
}

void func_322(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_311(*uParam0, iVar1))
		{
			func_228(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_191(sParam2);
				}
				else
				{
					func_191(sParam2);
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

int func_323(var uParam0)
{
	return uParam0->f_416;
}

int func_324(char* sParam0)
{
	if (!unk_0x0275404839C0A19A(sParam0))
	{
		if (func_163(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_325(var uParam0)
{
	if (func_38())
	{
		return 1;
	}
	if (func_155(uParam0, 17))
	{
		return 1;
	}
	if (func_155(uParam0, 14))
	{
		return 1;
	}
	if (func_297(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_326(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_155(uParam0, 9));
}

void func_327(var uParam0)
{
	if (func_155(uParam0, 17))
	{
		if (!func_155(uParam0, 14))
		{
			if (!func_297(uParam0))
			{
				if (!func_38())
				{
					func_152(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_328(var uParam0)
{
	return uParam0->f_117;
}

void func_329(var uParam0, var uParam1, bool bParam2)
{
	if (!func_231(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x75CB9E30BA492FF0(&(uParam0->f_124)) && func_38())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_38())
				{
					StringCopy(&(uParam0->f_124), func_299(), 24);
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

void func_330(var uParam0)
{
	if (!func_231(uParam0->f_98, 2))
	{
		if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
		{
			if (func_127(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xC972AA2C9F94741D(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_227(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_331(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_311(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_311(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_311(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_228(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xA0F74982C6AAA9D4();
							}
						}
						else
						{
							func_14(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_311(Local_343.f_1[iVar0 /*4*/], 4) && !func_311(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_228(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_278(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_332(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_155(uParam0, 27))
	{
		func_153(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_367(uParam0, 27) > 5f)
	{
		if (func_360(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_66(uParam0, 27, 0, 0);
			func_66(uParam0, 10, 0, 0);
			func_358(uParam0, &uVar0, uParam1);
		}
		func_354(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_333(uParam0);
	}
	if ((((!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()) && (unk_0x54DA78A82349F5AC(*uParam0) && !unk_0xF92D82BAF297B579(*uParam0))) && (unk_0x54DA78A82349F5AC(uParam0->f_1) && !unk_0xF92D82BAF297B579(uParam0->f_1))) && !unk_0x45252A58A2BF9751()) && !func_38())
	{
		if (func_367(uParam0, 26) > 10f)
		{
			func_152(uParam0, 26, 0);
			unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
		}
	}
	else if (func_155(uParam0, 26))
	{
		func_152(uParam0, 26, 0);
	}
	return 0;
}

void func_333(var uParam0)
{
	if (!func_353(uParam0->f_429))
	{
		uParam0->f_429 = func_352();
		func_343(&(uParam0->f_429), 0, 0, unk_0x3A5708FEE1B560A9(4, 7), 0, 0, 0);
	}
	else if (func_334(uParam0->f_429))
	{
		func_278(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_334(int iParam0)
{
	return func_335(func_352(), iParam0);
}

int func_335(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_353(iParam1) || !func_353(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_336(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_337(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_338(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_339(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_340(int iParam0)
{
	return iParam0 & 15;
}

var func_341(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_342(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_342(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_343(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_341(*uParam0);
	iVar1 = func_340(*uParam0);
	iVar2 = func_339(*uParam0);
	iVar3 = func_338(*uParam0);
	iVar4 = func_337(*uParam0);
	iVar5 = func_336(*uParam0);
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
	iVar6 = func_351(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_351(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_344(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_344(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_350(uParam0, iParam1);
	func_349(uParam0, iParam2);
	func_348(uParam0, iParam3);
	func_347(uParam0, iParam5);
	func_346(uParam0, iParam4);
	func_345(uParam0, iParam6);
}

void func_345(var uParam0, int iParam1)
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

void func_346(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_340(*uParam0);
	iVar1 = func_341(*uParam0);
	if (iParam1 < 1 || iParam1 > func_351(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_349(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_350(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_351(int iParam0, int iParam1)
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

int func_352()
{
	var uVar0;
	
	func_350(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_349(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_348(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_346(&uVar0, unk_0x388418AD39C0F4DE());
	func_347(&uVar0, unk_0xE3911478C9FE04B2());
	func_345(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

int func_353(int iParam0)
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
	iVar0 = func_336(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_337(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_338(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_341(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_340(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_339(iParam0);
	if (iVar5 < 1 || iVar5 > func_351(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_354(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_357()) && !func_156(uParam0)) || ((uParam0->f_411 != 9 && func_356(uParam0, 1)) && !func_156(uParam0)))
		{
			uVar0 = func_355(uParam0->f_4);
			unk_0x87EFF3C203462E60(&uVar0);
			uParam0->f_4 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			unk_0xAF3355298F537BB0(uParam0->f_4, 1, 0);
			func_179(uParam0);
			func_170(uParam0, 0);
		}
	}
}

var func_355(var uParam0)
{
	return uParam0;
}

int func_356(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				iVar1 = unk_0x946C63BD9EF05437(iVar0);
				bVar2 = func_218(iVar0);
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
				if (unk_0xA8059F869DFB2747(iVar1))
				{
					if (unk_0x9297C590C99228DC(iVar0, -1) == unk_0x27D769C59BC9D030())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x1AEADBB0240E0B51(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_231(uParam0->f_44, 64))
					{
						if (unk_0x911CCA58116D31F0(2))
						{
							func_229("TX_VIP_DMGD", -1);
							if (func_253("TX_VIP_DMGD"))
							{
								func_227(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_231(uParam0->f_44, 32))
					{
						if (unk_0x911CCA58116D31F0(2))
						{
							func_229("TX_VIP_CAR", -1);
							if (func_253("TX_VIP_CAR"))
							{
								func_227(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_231(uParam0->f_44, 16))
					{
						if (unk_0x911CCA58116D31F0(2))
						{
							func_229("TX_VIP_SMALL", -1);
							if (func_253("TX_VIP_SMALL"))
							{
								func_227(&(uParam0->f_44), 16);
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

int func_357()
{
	int iVar0;
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				if (unk_0x9297C590C99228DC(iVar0, -1) == unk_0x27D769C59BC9D030())
				{
					if (unk_0x753C14DD45ABE554(iVar0, func_12()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_358(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_359(uParam0, 0, 1))
			{
				func_278(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_359(uParam0, 0, 4))
			{
				func_278(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_359(uParam0, 0, 8))
			{
				func_278(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_359(uParam0, 1, 1))
			{
				func_278(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_359(uParam0, 0, 1))
			{
				func_278(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_231(*uParam2, 2) && func_138(uParam0))
			{
				func_278(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_359(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
	{
		if (!unk_0x5EE69620FB6ABC8D(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_189(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_189(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_360(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x27D769C59BC9D030();
	if (!unk_0x2006A8C1BA2AFE80(iVar0, 0) && !unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (!func_231(*uParam2, 1))
		{
			if (func_366(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_231(*uParam2, 2))
		{
			if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_231(*uParam2, 4))
		{
			if (func_364(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_231(*uParam2, 8))
		{
			if (func_363(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_231(*uParam2, 128);
		if (bParam4)
		{
			if (func_361(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_231(*uParam2, 16))
		{
			if (func_361(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (iParam7 && unk_0x77F1B7F6C32990D6(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_361(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x4C3235E6E203703D(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x4C3235E6E203703D(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0x070841EC2D20AB5A();
		if (!unk_0x2006A8C1BA2AFE80(uVar0, 0))
		{
			if (unk_0x77F1B7F6C32990D6(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x77F1B7F6C32990D6(iParam0, unk_0x27D769C59BC9D030(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x77F1B7F6C32990D6(iParam0, unk_0x27D769C59BC9D030(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x070841EC2D20AB5A();
		if (!unk_0x2006A8C1BA2AFE80(uVar1, 0))
		{
			if (unk_0x77F1B7F6C32990D6(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			if (unk_0x9426D57129B5B113(iParam0))
			{
				if (unk_0x0F12B5F9C73EBD42(iParam0) == unk_0x27D769C59BC9D030())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xB1988D54B2C48CB5(iParam0, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0x6496E089A686F399(unk_0x4D29100D094E5511()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xDA95459038DD8A59(unk_0x27D769C59BC9D030()))
	{
		if (unk_0x586F22790D5E436F(iParam0))
		{
			return 1;
		}
	}
	if (func_362(unk_0x27D769C59BC9D030(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xBD036012AF60D938(iParam0) && func_168(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x9A4E2270C2271219(iParam0, 0))
		{
			if (unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), unk_0xD9FFE8E1642C81E2(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), iParam0))
		{
			return 1;
		}
		if (!unk_0x2006A8C1BA2AFE80(uParam1, 0))
		{
			if (unk_0x77F1B7F6C32990D6(iParam1, unk_0x27D769C59BC9D030(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x4CF6F4DF2C64D299(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7C2070521268C99E(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(iParam0, 1), unk_0xA8CFDE65C45F813B(iParam1, 1)) < 2.5f)
			{
				if (unk_0xB1D18B06E0525A9E(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_363(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x1D01F222CF5E89FA(uParam0, 4))
	{
		if (unk_0x7C2070521268C99E(uParam0) && !unk_0x32A33034ED29B524(iParam0))
		{
			if (unk_0xB1988D54B2C48CB5(uParam1, unk_0xA8CFDE65C45F813B(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_364(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x2006A8C1BA2AFE80(uParam1, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	if (unk_0xFFA15D908A6FDCD4(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x667CDB48DB7744AA(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x1D01F222CF5E89FA(uParam0, 2))
	{
		if (unk_0x7C2070521268C99E(uParam0))
		{
			if (unk_0xB1988D54B2C48CB5(iParam1, unk_0xA8CFDE65C45F813B(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xB1D18B06E0525A9E(unk_0x97EA5EA3E7FE8500(iParam1), iParam0, 120f) && unk_0xDE7DE56F6FF55B6A(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x9A4E2270C2271219(unk_0x97EA5EA3E7FE8500(iParam1), 0))
			{
				iVar3 = unk_0xD9FFE8E1642C81E2(unk_0x97EA5EA3E7FE8500(iParam1), 0);
			}
			if (unk_0xB0821632434D6AED(iParam0) || func_365(iVar3))
			{
				if (unk_0xB1988D54B2C48CB5(iParam1, unk_0xA8CFDE65C45F813B(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xB1D18B06E0525A9E(unk_0x97EA5EA3E7FE8500(iParam1), iParam0, 120f) && unk_0xDE7DE56F6FF55B6A(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x92C13FDA105016D1((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (unk_0x9297C590C99228DC(iParam0, -1) != 0)
			{
				if (unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_169(unk_0x27D769C59BC9D030(), iParam0, 1) < 40f)
						{
							if (unk_0x8C4BD6734BEF3418(unk_0x4D29100D094E5511(), &uVar1))
							{
								if ((unk_0x8F8858152A9B9959(uVar1) && unk_0x35E488C304B2E03E(iVar1) == iParam0) || (unk_0x54F37403E01EFD97(iVar1) && unk_0x97EA5EA3E7FE8500(iVar1) == unk_0x9297C590C99228DC(iParam0, -1)))
								{
									if ((unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()) && unk_0x5FCAE3F8AEC656AF(0, 24)) || (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0x5FCAE3F8AEC656AF(0, 69)))
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

int func_366(int iParam0, var uParam1)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		if (unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
		{
			if (unk_0xC542D24D363306EC(unk_0x4D29100D094E5511(), iParam0) || unk_0x3FB18423318A562B(unk_0x4D29100D094E5511(), iParam0))
			{
				if (unk_0xB1D18B06E0525A9E(iParam0, unk_0x27D769C59BC9D030(), 90f))
				{
					if (func_168(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xA0F74982C6AAA9D4();
						}
						else if ((unk_0xA0F74982C6AAA9D4() - uParam1->f_1) > uParam1->f_3)
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

float func_367(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_154(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_90(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_368()
{
	func_369(&Local_859);
	func_411();
}

void func_369(var uParam0)
{
	func_2(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_65(2);
	}
}

int func_370(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_38() && func_367(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0))
		{
			if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
			{
				if (unk_0x1C48F76B3D032074(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_50(uParam0) == 0 || func_311(uParam0->f_85, 32))
					{
						if (!unk_0xFCFE5DE581193020(uParam0->f_4))
						{
							func_123(uParam0, 4160, 0);
						}
						else
						{
							func_123(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_123(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_123(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_123(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xA0F74982C6AAA9D4() % 1000) < 50)
	{
	}
	return 0;
}

void func_371(var uParam0)
{
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_8))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_8));
	}
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_9))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_9));
	}
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_10))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_10));
	}
}

int func_372(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_373()
{
	Local_343.f_0 = 0;
	func_389(73795, 73770, 1);
	func_389(73531, 73509, 1);
	func_389(73447, 73422, 1);
	func_389(73350, 73326, 1);
	func_389(73216, 73195, 1);
	func_389(73157, 73132, 1);
	func_389(72990, 72968, 1);
}

int func_374(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_278(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_375(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		if (func_377(uParam0->f_4))
		{
			func_376(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_376(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_377(int iParam0)
{
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB23CB7DBBE38B63C(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xE06C11511DE39267(iParam0, 0, 40000) || unk_0xE06C11511DE39267(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_378(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_278(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_379(var uParam0)
{
	if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
	{
		if (func_311(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_380(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_376(uParam0, 11);
	return 1;
}

int func_381(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		if (unk_0xA8ED23ED7AA60A97(uParam0->f_4) && !unk_0xC2331082FBFCB35D(uParam0->f_4))
		{
			if (!func_155(uParam0, 25))
			{
				func_66(uParam0, 25, 0, 0);
			}
			else if (func_367(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_155(uParam0, 25))
		{
			func_152(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_382(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_278(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_383(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		if (unk_0xE52FA253BAE3E498(uParam0->f_4))
		{
			if (unk_0xE06C11511DE39267(uParam0->f_4, 0, 40000) || unk_0xE06C11511DE39267(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_384(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_278(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_385(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(uParam0->f_4, 0))
	{
		if (unk_0x0B4DDB992C7BCF57(uParam0->f_4, 0))
		{
			if (unk_0xFCFE5DE581193020(uParam0->f_4))
			{
				if (func_311(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_386(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_278(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_387(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_4))
	{
		if (func_388(uParam0->f_4))
		{
			func_376(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB23CB7DBBE38B63C(iParam0) == 0f)
	{
		if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xE06C11511DE39267(iParam0, 0, 40000) || unk_0xE06C11511DE39267(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_389(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_228(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_228(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_390(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_278(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_391(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0->f_3))
	{
		if ((unk_0xE4F7206742848BAF(uParam0->f_3) || unk_0x2006A8C1BA2AFE80(uParam0->f_3, 0)) || unk_0xFA7888B344869306(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_392()
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

void func_393(var uParam0)
{
	func_394();
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

void func_394()
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

void func_395()
{
	iLocal_1564 = func_410();
	Local_859.f_145 = func_409(iLocal_1564);
	func_408(1);
	func_181();
	func_407(&(Local_859.f_244));
	func_406(&Local_859);
	Local_859.f_411 = 9;
	if (!func_231(Global_101154.f_17787, 4))
	{
		func_227(&(Global_101154.f_17787), 4);
		unk_0x7C898812896A5304(func_12(), 1);
	}
	func_401(&Local_859);
	func_400(9);
	func_398(&Local_859);
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 0);
	}
	Local_859.f_428 = func_397();
	func_396(&Local_859, 3, 6);
	Local_859.f_6 = 1.45f;
}

void func_396(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_397()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_86(unk_0x27D769C59BC9D030());
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

void func_398(var uParam0)
{
	switch (func_50(uParam0))
	{
		case 0:
			func_399(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_399(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_399(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_399(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_399(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_399(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_399(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_399(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_399(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_399(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_399(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_400(int iParam0)
{
	Global_101154.f_17787.f_39[iParam0]++;
}

void func_401(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_405(uParam0, 3);
			func_404(uParam0, 14);
			break;
		
		case 1:
			func_405(uParam0, 14);
			func_404(uParam0, 8);
			break;
		
		case 2:
			func_405(uParam0, 8);
			func_404(uParam0, 7);
			break;
		
		case 3:
			func_405(uParam0, 15);
			func_404(uParam0, 6);
			break;
		
		case 4:
			func_405(uParam0, 0);
			func_404(uParam0, 3);
			break;
		
		case 5:
			func_405(uParam0, 6);
			func_404(uParam0, 7);
			break;
		
		case 6:
			func_405(uParam0, 8);
			func_404(uParam0, 15);
			break;
		
		case 7:
			func_405(uParam0, 8);
			func_404(uParam0, 14);
			break;
		
		case 8:
			func_405(uParam0, 7);
			func_404(uParam0, 15);
			break;
		
		case 9:
			func_405(uParam0, unk_0x3A5708FEE1B560A9(0, 17));
			iVar0 = func_403((uParam0->f_418.f_2 + unk_0x3A5708FEE1B560A9(1, 17)), 0, 16);
			func_404(uParam0, iVar0);
			func_402(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_402(var uParam0)
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

int func_403(int iParam0, int iParam1, int iParam2)
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

void func_404(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_405(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_406(var uParam0)
{
	uParam0->f_2 = unk_0x27D769C59BC9D030();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_125() };
	uParam0->f_17 = { func_125() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_152(uParam0, 32, 0);
}

void func_407(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_86(unk_0x27D769C59BC9D030());
	if (iVar0 == 0)
	{
		func_234(uParam0, 0, unk_0x27D769C59BC9D030(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_234(uParam0, 0, unk_0x27D769C59BC9D030(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_234(uParam0, 0, unk_0x27D769C59BC9D030(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_234(uParam0, 0, unk_0x27D769C59BC9D030(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_234(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_408(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100210, unk_0x3AA961419D971CB2(), 24);
		Global_100204 = 1;
	}
	else
	{
		StringCopy(&Global_100210, "NULL", 24);
		Global_100204 = 0;
	}
}

char* func_409(int iParam0)
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

int func_410()
{
	switch (unk_0x3A5708FEE1B560A9(0, 5))
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

void func_411()
{
	if (unk_0x88E055AE81551426())
	{
		func_8(9);
	}
	unk_0x7C3AA2D27E16E2AD();
}


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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	int iLocal_56[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int* iLocal_89 = NULL;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 1132396544;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 0;
	var uLocal_103 = -1082130432;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 8;
	var uLocal_107 = 0;
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
	var uLocal_163 = -1;
	var uLocal_164 = 1092616192;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 5;
	var uLocal_173 = 0;
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
	struct<10> Local_189[15];
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	struct<2> Local_342 = { 0, 16 } ;
	var uLocal_344 = 0;
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
	struct<3> Local_408[8];
	struct<3> Local_433[12];
	struct<3> Local_470[6];
	struct<3> Local_489[5];
	struct<3> Local_505[20];
	struct<3> Local_566[11];
	struct<3> Local_600[3];
	struct<3> Local_610[3];
	struct<3> Local_620[4];
	struct<3> Local_633[7];
	struct<3> Local_655[3];
	struct<3> Local_665[4];
	struct<3> Local_678[2];
	struct<3> Local_685[4];
	struct<3> Local_698[7];
	struct<3> Local_720[7];
	struct<3> Local_742[8];
	struct<3> Local_767[5];
	struct<3> Local_783[5];
	struct<3> Local_799[6];
	struct<3> Local_818[6];
	struct<3> Local_837[6];
	var uLocal_856 = 0;
	int iLocal_857 = 0;
	struct<429> Local_858 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	struct<13> Local_1296 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1309 = 23;
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
	int iLocal_1563 = 0;
	bool bLocal_1564 = 0;
	struct<28> Local_1565 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 5;
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
	var uLocal_1638 = 1097859072;
	var uLocal_1639 = 1500;
	var uLocal_1640 = 45;
	var uLocal_1641 = 1103626240;
	var uLocal_1642 = 5;
	var uLocal_1643 = 0;
	float fLocal_1644 = 0f;
	bool bLocal_1645 = 0;
	int iLocal_1646 = 0;
	struct<2> Local_1647 = { 0, 0 } ;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_76 = unk_0x4A9923385BDB9DAD();
	iLocal_77 = unk_0x186E5D252FA50E7D();
	Local_82 = { 500f, 500f, 500f };
	bLocal_1645 = true;
	if (unk_0xC968670BFACE42D9(67))
	{
		func_407();
	}
	unk_0xC4301E5121A0ED73(true);
	func_391();
	func_389(&uLocal_1309);
	func_388();
	func_369();
	Local_858.f_14 = { 4186.797f, -3657.349f, -0.5762f };
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (func_368(&Local_858))
	{
		func_367(&Local_858);
		if (Local_858.f_410 > 0)
		{
			switch (iLocal_857)
			{
				case 0:
					if (func_366(&Local_858, 0))
					{
						iLocal_857 = 1;
					}
					break;
				
				case 1:
					func_364();
					break;
			}
		}
		else if (func_363(&Local_858, 31) > 5f)
		{
			func_407();
		}
	}
	else
	{
		if (Local_858.f_410 <= 9)
		{
			func_328(&Local_858, &uLocal_1636);
			func_327(&Local_858);
		}
		func_326(&Local_858);
		func_325(&Local_858, &uLocal_1643, 0);
		if (Local_858.f_410 > 2)
		{
			if (!func_324(&Local_858))
			{
				func_289();
			}
			else
			{
				func_274(&Local_858, "Taxi Not Driveable", func_288(&Local_858));
			}
		}
		if (Local_858.f_410 == 9)
		{
			func_250(&Local_858, 0, 1);
		}
		if (func_249("TC_HOWTOSTART"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		switch (Local_858.f_410)
		{
			case 2:
				if (func_243(&uLocal_1309, &(Local_858.f_14), 1))
				{
					func_242(&Local_858, 0);
				}
				break;
			
			case 0:
				if (func_239(&Local_858))
				{
					func_236();
					func_242(&Local_858, 1);
				}
				break;
			
			case 1:
				if (func_234())
				{
					func_233(&Local_858);
					func_242(&Local_858, 3);
				}
				break;
			
			case 3:
				if (!unk_0x7239B21A38F536BA(Local_858.f_3))
				{
					func_232(&Local_858, Local_858.f_14);
					Local_858.f_11 = { Local_858.f_14 };
					func_231(Local_858.f_14, 0);
					unk_0xBE31FD6CE464AC59(Local_858.f_14, 2f, 0);
					Local_858.f_3 = unk_0xD49F9B0955C367DE(26, iLocal_1563, Local_858.f_11, 0f, true, true);
					unk_0x6C8065A3B780185B(Local_858.f_3, Local_858.f_145);
					func_230(&(Local_858.f_244), 3, Local_858.f_3, "TaxiGeneric", 0, 1);
					unk_0xC1E8A365BF3B29F2(Local_858.f_3, 112, true);
					if (!unk_0x84A2DD9AC37C35C1(Local_858.f_3))
					{
						unk_0x1913FE4CBF41C463(Local_858.f_3, 32, false);
						unk_0x1913FE4CBF41C463(Local_858.f_3, 177, true);
						unk_0x1913FE4CBF41C463(Local_858.f_3, 317, true);
						Local_858.f_8 = func_229(Local_858.f_3, 0, 0);
						unk_0xEAA0FFE120D92784(Local_858.f_8, "TAXI_BLIP_PASS");
						unk_0x5B440763A4C8D15B(1, 0f);
						unk_0x4F7D8A9BFB0B43E9(Local_858.f_8, true);
						unk_0xF372BC22FCB88606("TAXI_Passenger", &(Local_858.f_413));
						unk_0xBF25EB89375A37AD(1, Local_858.f_413, joaat("player"));
						unk_0xBF25EB89375A37AD(2, Local_858.f_413, joaat("COP"));
						unk_0xC80A74AC829DDD92(Local_858.f_3, Local_858.f_413);
						unk_0x69F4BE8C8CC4796C(Local_858.f_3, Local_858.f_4, -1, 2048, 4);
					}
					func_228(&Local_858, 1, 0);
					func_242(&Local_858, 5);
				}
				break;
			
			case 5:
				if (!func_227(Global_97173.f_17318, 2))
				{
					if (func_226(9) >= 2)
					{
						func_225("TAXI_2CANCEL", -1);
						func_223(&(Global_97173.f_17318), 2);
					}
				}
				if (unk_0xF3A21BCD95725A4A(0, 86) && !Local_858.f_48 > 0)
				{
					func_274(&Local_858, "Player cancelled on dispatch", 19);
				}
				if (func_197(&Local_858, 0, 1109393408))
				{
					func_242(&Local_858, 15);
				}
				break;
			
			case 15:
				if (func_196(&Local_858))
				{
					func_191(&Local_1296);
					Local_858.f_17 = { func_190(Local_1296.f_1) };
					Local_858.f_29 = { func_189(Local_1296.f_1) };
					func_185(&Local_858, 9, 1, 0, 0);
					if (!unk_0xA6DB27D19ECBB7DA(Local_858.f_9))
					{
						Local_858.f_9 = func_184(Local_858.f_17, 1);
					}
					func_183(&Local_858);
					func_182();
					func_242(&Local_858, 9);
				}
				if (unk_0x4C241E39B23DF959(Local_858.f_4, false))
				{
					if (!unk_0xA3EE4A07279BB9DB(Local_858.f_2, Local_858.f_4, false))
					{
						func_178(&Local_858);
						func_242(&Local_858, 5);
					}
				}
				break;
			
			case 9:
				if (func_162(&Local_858))
				{
					func_161(&Local_858, &(Local_858.f_43));
					func_156();
					func_153(&Local_858);
					func_147(&Local_858, 1097859072, 1117782016);
					if (func_143(&Local_858, func_146()))
					{
						fLocal_1644 = ((Local_1296.f_12 / func_363(&Local_858, 7)) * 3600f);
						if (fLocal_1644 > 40f)
						{
							Local_858.f_56 = Local_858.f_59;
						}
						else if (fLocal_1644 > 30f)
						{
							Local_858.f_56 = Local_858.f_58;
						}
						else
						{
							Local_858.f_56 = 0;
						}
						unk_0x86A652570E5F25DD(&(Local_858.f_9));
						iVar0 = unk_0xD53343AA4FB7DD28(0, 100);
						if (iVar0 < 10)
						{
							bLocal_1645 = true;
						}
						else
						{
							bLocal_1645 = false;
						}
						func_141(&Local_858);
						func_136(bLocal_1645);
						func_135(&Local_858);
						if (bLocal_1645)
						{
							func_242(&Local_858, 28);
						}
						else
						{
							func_242(&Local_858, 27);
						}
					}
				}
				break;
			
			case 27:
				if (func_126(&Local_858, 1))
				{
					if (!unk_0x5F9532F3B5CC2551(Local_858.f_3))
					{
						unk_0x3841422E9C488D8C(&iLocal_1646);
						unk_0xE8854A4326B9E12B(&iLocal_1646);
						unk_0x0F804F1DB19B9689(0);
						unk_0x90D2156198831D69(0, false);
						if (unk_0x5A59271FFADD33C1(func_189(Local_1296.f_1), 5f, true))
						{
							unk_0x277F471BA9DB000B(0, func_189(Local_1296.f_1), 5f, 0);
						}
						else
						{
							unk_0x15D3A79D4E44B913(0, func_189(Local_1296.f_1), 1f, -1, 0.25f, false, 40000f);
							unk_0x919BE13EED931959(0, 500);
							unk_0x142A02425FF02BD9(0, func_124(func_125(), "WORLD_HUMAN_STAND_MOBILE", "WORLD_HUMAN_AA_SMOKE"), 5000, true);
							unk_0xBB9CE077274F6A1B(0, 40000f, 0);
						}
						unk_0x39E72BC99E6360CB(iLocal_1646);
						unk_0x5ABA3986D90D8A3B(Local_858.f_3, iLocal_1646);
						unk_0x971D38760FBC02EF(Local_858.f_3, true);
					}
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_242(&Local_858, 29);
				}
				break;
			
			case 28:
				if (func_90(&uLocal_1288, &Local_858, &(Local_858.f_3), &uLocal_1289, 1))
				{
					func_242(&Local_858, 29);
				}
				break;
			
			case 29:
				switch (iLocal_167)
				{
					case 0:
						unk_0x67C540AA08E4A6F5(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", true);
						func_89(&Local_1647, "TAXI_FARE_FIN", Local_858.f_50, Local_858.f_56, (Local_858.f_50 + Local_858.f_56), "TAXI_FARE_DET", 4000, 1);
						Local_1647.f_1 = 4000;
						func_88(1);
						iLocal_167 = 6;
						break;
					
					case 6:
						if (!func_84(&Local_1647, 1))
						{
							func_64(&Local_858);
							func_62(&Local_858, 0, 0, 0);
							func_88(0);
							iLocal_167 = 7;
						}
						break;
					
					case 7:
						func_2(1, &Local_858, 1);
						func_242(&Local_858, 30);
						break;
				}
				break;
			
			case 30:
				func_407();
				break;
			}
	}
}

void func_2(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_40(uParam1);
		if (!unk_0x84A2DD9AC37C35C1(uParam1->f_3))
		{
			unk_0x1913FE4CBF41C463(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_38(1, 0);
	}
	func_3(uParam1, bParam2);
}

void func_3(var uParam0, bool bParam1)
{
	func_367(uParam0);
	if (func_37())
	{
		func_35();
	}
	func_33();
	unk_0xCC33FA791322B9D9();
	unk_0x8DFCED7A656F8802(true);
	func_30(0);
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		unk_0x92F0CF722BC4202F(uParam0->f_4, false);
		unk_0x8386BFB614D06749(uParam0->f_4);
		unk_0xC53EB42A499A7E90(uParam0->f_4);
	}
	func_231(uParam0->f_14, 1);
	func_28(uParam0->f_14, 1, 1114636288);
	func_27(&(uParam0->f_244), 3);
	unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, true);
	if (func_24())
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	unk_0xC61B86C9F61EB404(true);
	func_15(0, 1, 1, 0);
	unk_0xA0EBB943C300E693(true);
	unk_0xA6294919E56FF02A(true);
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		unk_0x865908C81A2C22E9(*uParam0, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x51669F7D1FB53D9F(true);
	}
	if (func_227(Global_97173.f_17318, 4))
	{
		func_13(&(Global_97173.f_17318), 4);
		unk_0x0FC2D89AC25A5814(func_12(), false);
	}
	if (bParam1)
	{
		func_11(uParam0);
	}
	func_10(uParam0);
	unk_0xF66A602F829E2A06("gestures@m@standing@casual");
	unk_0xF66A602F829E2A06("oddjobs@taxi@");
	unk_0xF66A602F829E2A06("oddjobs@towingcome_here");
	if (unk_0x1077788E268557C2())
	{
		func_8(uParam0->f_411);
	}
	if (!unk_0x49C32D60007AFA47(unk_0xA5EDC40EF369B48D()))
	{
		unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	}
	unk_0x69DEA3E9DB727B4C(unk_0xF2DB717A73826179((func_4(&iLocal_89) * 1000f)), 12, 0);
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
			return (func_5() - uParam0->f_1);
		}
	}
	return 0f;
}

float func_5()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
}

void func_8(int iParam0)
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_9(iParam0)}, 6);
		if (!unk_0xF22B6C47C6EAB066(&uVar0))
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
	unk_0x1033371FC8E842A7(uParam0->f_51[0]);
}

void func_11(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_3))
	{
		if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
		{
			if (!unk_0x997ABD671D25CA0B(uParam0->f_3, false))
			{
				unk_0xBB8DE8CF6A8DD8BB(uParam0->f_3);
			}
			unk_0x9F8AA94D6D97DBF4(uParam0->f_3, false);
			unk_0xBF25EB89375A37AD(255, uParam0->f_413, joaat("player"));
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x97FF36A1D40EA00A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x2595DD4236549CE3(&(uParam0->f_3));
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

void func_15(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_23(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_22())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_21(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_23(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_21(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_16(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_17()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_20()
{
	return Global_1312736;
}

int func_21(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_22()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

int func_24()
{
	if (!func_26() && !func_25())
	{
		if (!unk_0x8A876A65283DD7D7(unk_0xA5EDC40EF369B48D()))
		{
			return 1;
		}
	}
	return 0;
}

int func_25()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_28(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_29(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_29(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xBF1A602B5BA52FEE(Var0, Var3, false, true);
	}
	else
	{
		unk_0x1EE7063B80FFC77C(Var0, Var3, 1);
		unk_0x2E05208086BA0651();
	}
}

Vector3 func_29(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_30(int iParam0)
{
	if (Global_14551)
	{
		func_31(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_22())
	{
		Global_14393.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87122[iVar0 /*17*/] && !Global_87122[iVar0 /*17*/].f_1)
		{
			if (Global_87122[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87122[iVar0 /*17*/].f_5 != 88 && Global_87122[iVar0 /*17*/].f_5 != 89) && Global_87122[iVar0 /*17*/].f_5 != 92)
				{
					func_34(Global_87122[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_34(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

void func_35()
{
	Global_14558 = 0;
	func_36();
}

void func_36()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

int func_37()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_97173.f_17318.f_22[0]++;
			func_39("Fares Completed ++ = ", Global_97173.f_17318.f_22[0]);
			break;
		
		case 1:
			Global_97173.f_17318.f_22[1]++;
			func_39("Fares Failed ++ = ", Global_97173.f_17318.f_22[1]);
			break;
		
		case 2:
			Global_97173.f_17318.f_22[2]++;
			func_39("Fares Accepted ++ ", Global_97173.f_17318.f_22[2]);
			break;
		
		case 3:
			Global_97173.f_17318.f_22[3]++;
			func_39("Fares Expired ++ ", Global_97173.f_17318.f_22[3]);
			break;
		
		case 13:
			Global_97173.f_17318.f_22[13]++;
			func_39("Passengers run ++ = ", Global_97173.f_17318.f_22[13]);
			break;
		
		case 14:
			Global_97173.f_17318.f_22[14]++;
			func_39("Passenger Forced to Pay ++ = ", Global_97173.f_17318.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_97173.f_17318.f_22[4])
				{
					Global_97173.f_17318.f_22[4] = iParam1;
					func_39("This distance ", iParam1);
					func_39(" is longer than current best", Global_97173.f_17318.f_22[4]);
				}
				else
				{
					func_39("Longest Distance Not Beat ", Global_97173.f_17318.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_97173.f_17318.f_22[5] = (Global_97173.f_17318.f_22[5] + iParam1);
			func_39("Total Distance w/ Passenger = ", Global_97173.f_17318.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_97173.f_17318.f_22[6]++;
			}
			else
			{
				Global_97173.f_17318.f_22[6] = (Global_97173.f_17318.f_22[6] + iParam1);
			}
			func_39("Wanted Levels ++ = ", Global_97173.f_17318.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_97173.f_17318.f_22[7] = (Global_97173.f_17318.f_22[7] + iParam1);
			}
			else
			{
				Global_97173.f_17318.f_22[7]++;
			}
			func_39("Wanted Levels Lost = ", Global_97173.f_17318.f_22[7]);
			break;
		
		case 8:
			Global_97173.f_17318.f_22[8]++;
			func_39("Taxis wrecked ++ = ", Global_97173.f_17318.f_22[8]);
			break;
		
		case 9:
			Global_97173.f_17318.f_22[9]++;
			func_39("Horn Honked ++ = ", Global_97173.f_17318.f_22[9]);
			break;
		
		case 10:
			Global_97173.f_17318.f_22[10] = (Global_97173.f_17318.f_22[10] + iParam1);
			func_39("Total Money Earned = ", Global_97173.f_17318.f_22[10]);
			break;
		
		case 11:
			Global_97173.f_17318.f_22[11] = (Global_97173.f_17318.f_22[11] + iParam1);
			func_39("Total Tips Earned = ", Global_97173.f_17318.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_97173.f_17318.f_22[12])
			{
				Global_97173.f_17318.f_22[12] = iParam1;
				func_39("New Highest Tip = ", Global_97173.f_17318.f_22[12]);
			}
			else
			{
				func_39("Highest Tip Not Reached = ", Global_97173.f_17318.f_22[12]);
			}
			break;
	}
}

void func_39(char* sParam0, int iParam1)
{
}

void func_40(var uParam0)
{
	func_38(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_61(1);
		func_50(15, 1);
	}
	func_223(&(Global_97173.f_17318), 1024);
	if (!func_227(Global_97173.f_17318, 64))
	{
		func_41(func_48(func_49(uParam0)), 0, 0);
	}
}

void func_41(int iParam0, int iParam1, int iParam2)
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
		func_47((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_42();
	}
}

void func_42()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_46(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_45() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_43();
				}
			}
		}
	}
}

int func_43()
{
	if (func_44(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_45()
{
	return Global_24444;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_48(int iParam0)
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

int func_49(var uParam0)
{
	return uParam0->f_411;
}

int func_50(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_51(iParam0, iParam1);
}

int func_51(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_60(&Global_2543745))
	{
		if (func_58(&Global_2543745, iParam0))
		{
			return 0;
		}
		if (func_52(&Global_2543745, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_52(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	func_55(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_53(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_53(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_54(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_54(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_55(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_57(uParam0, iVar0);
		iVar0++;
	}
	func_56(&(uParam0->f_62), (8f - 0.5f));
}

void func_56(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_5() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_57(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_58(var uParam0, int iParam1)
{
	return func_59(uParam0, iParam1) != -1;
}

int func_59(var uParam0, int iParam1)
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

bool func_60(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_61(int iParam0)
{
	Global_95887.f_22 = iParam0;
}

void func_62(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_56(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_63(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_56(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_63(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_63(int* iParam0)
{
	func_56(iParam0, 0f);
}

void func_64(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_65(func_78(), 21, iVar0, 0, 0);
		func_38(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_65(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_66(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x767FBC2AC802EF3D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB3271D7AB655B441(iVar1, iVar0, true);
	}
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_77();
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
					func_76(99, 1);
					func_75(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_75(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_75(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_74(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_73(5))
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
							func_75(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_73(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
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
					switch (iParam0)
					{
						case 0:
							func_75(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_75(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_75(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_73(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_75(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_75(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_72(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_69(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_69(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_75(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_75(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_75(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_68(iParam0);
	if (Global_34909 == 15)
	{
		func_67(0);
	}
	return 1;
}

void func_67(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_69(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_71() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_71() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_70(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_70(int iParam0)
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

int func_71()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_72(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_73(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_71() /*8053*/].f_5756.f_10, iParam0);
}

int func_74(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
		func_46(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_50(27, 1);
	return 1;
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_77()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_78()
{
	func_79();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_79()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_83(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_82(unk_0xD80958FC74E988A6());
			if (func_81(iVar0) && (!func_80(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_81(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_80(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_83(int iParam0)
{
	if (func_81(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_84(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_63(&(uParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x580417101DDB492F(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_63(&(uParam0->f_5));
				func_87(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_86(&(uParam0->f_5)) > 0.33f)
			{
				func_85(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_86(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_63(&(uParam0->f_5));
			func_87(uParam0, 1051260355);
		}
		else if (func_86(&(uParam0->f_5)) > 0.33f)
		{
			func_85(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_85(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_86(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_87(var uParam0, float fParam1)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xC3D0841A0CC546A6(uParam0->f_9);
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xC6796A8FFA375E53();
}

void func_88(int iParam0)
{
	Global_68327 = iParam0;
	Global_68328 = iParam0;
}

void func_89(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0xF6E48914C7A8694E(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x80338406F3475E55("STRING");
	unk_0x39BBF623FC803EAC(iParam7);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x362E2D3FE93A9959();
	unk_0x80338406F3475E55(sParam5);
	unk_0x03B504CF259931BC(iParam2);
	unk_0x03B504CF259931BC(iParam3);
	unk_0x03B504CF259931BC(iParam4);
	unk_0x362E2D3FE93A9959();
	unk_0xC6796A8FFA375E53();
	func_63(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

int func_90(var uParam0, var uParam1, int* iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x5F9532F3B5CC2551(*iParam2))
			{
				func_119(uParam1, 320, bParam4);
				unk_0xA9C8960E8684C1B5(*iParam2, unk_0xD53343AA4FB7DD28(100, 300));
				func_117(uParam1, iParam2, "TAXI_BLIP_PASS", 1);
				func_38(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x5F9532F3B5CC2551(*iParam2))
			{
				if (!unk_0x997ABD671D25CA0B(*iParam2, false))
				{
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5F9532F3B5CC2551(*iParam2))
			{
				func_96(&uLocal_44, *iParam2, 0, 0, 1, 1, 1);
				if (!func_95(uParam1->f_2, *iParam2))
				{
					if (unk_0x4C241E39B23DF959(uParam1->f_4, false))
					{
						if (unk_0xC86D67D52A707CF8(*iParam2, uParam1->f_4, true))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0xC86D67D52A707CF8(*iParam2, uParam1->f_2, true))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x997ABD671D25CA0B(uParam1->f_2, false))
						{
							if (unk_0x751B70C3D034E187(uParam1->f_2, *iParam2, 20f, 20f, 10f, false, true, 0))
							{
								if (unk_0x34616828CD07F1A1(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0x751B70C3D034E187(uParam1->f_2, *iParam2, 2f, 2f, 10f, false, true, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x475768A975D5AD17(uParam1->f_2, 6))
									{
										if (unk_0x68EDDA28A5976D07())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x751B70C3D034E187(uParam1->f_2, *iParam2, 50f, 50f, 10f, false, true, 0))
							{
								if (unk_0x34616828CD07F1A1(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0x751B70C3D034E187(uParam1->f_2, *iParam2, 50f, 50f, 25f, false, true, 0))
						{
							if (unk_0x34616828CD07F1A1(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_94(&uLocal_44, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_94(&uLocal_44, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_94(&uLocal_44, 0, 0);
			if (!unk_0x5F9532F3B5CC2551(*iParam2))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_8))
				{
					unk_0x86A652570E5F25DD(&(uParam1->f_8));
				}
				unk_0x9F8AA94D6D97DBF4(*iParam2, true);
				unk_0xE8854A4326B9E12B(&iVar0);
				unk_0x3EB1FE9E8E908E15(0, 5000);
				unk_0x22B0D0E37CCB840D(0, uParam1->f_2, 1000f, -1, false, false);
				unk_0x90D2156198831D69(0, false);
				unk_0x39E72BC99E6360CB(iVar0);
				unk_0x5ABA3986D90D8A3B(*iParam2, iVar0);
				unk_0x3841422E9C488D8C(&iVar0);
				unk_0x971D38760FBC02EF(*iParam2, true);
				func_185(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0xCC33FA791322B9D9();
			}
			else
			{
				*uParam0 = 4;
				unk_0xCC33FA791322B9D9();
			}
			if (unk_0xA6DB27D19ECBB7DA(uParam1->f_8))
			{
				unk_0x86A652570E5F25DD(&(uParam1->f_8));
			}
			func_91(*iParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x80EC48E6679313F9(uParam3->f_6))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam3->f_5))
				{
					unk_0x86A652570E5F25DD(&(uParam3->f_5));
				}
				func_141(uParam1);
				func_38(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x5F9532F3B5CC2551(*iParam2))
			{
				unk_0x2595DD4236549CE3(iParam2);
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_8))
				{
					unk_0x86A652570E5F25DD(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0x340E61DE7F471565(unk_0xA5EDC40EF369B48D(), 2, false);
				unk_0xE0A7D1E497FFCD6F(unk_0xA5EDC40EF369B48D(), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_91(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		uParam1->f_2 = { unk_0x3FEF770D40960D5A(iParam0, true) };
		unk_0xA9C8960E8684C1B5(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0xD53343AA4FB7DD28(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0xCD5003B097200F36(iParam0, 1.2f, 1.5f) };
	}
	unk_0x933D6A9EEC1BACD0(&(uParam1->f_1), 3);
	unk_0x933D6A9EEC1BACD0(&(uParam1->f_1), 4);
	Var0 = { unk_0x6E16BC2503FF1FF0(uParam1->f_2, 1.2f, 1.5f) };
	uParam1->f_6 = unk_0xFBA08C503DD5FA58(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, true, 0);
	if (bParam2)
	{
		if (!unk_0xA6DB27D19ECBB7DA(uParam1->f_5))
		{
			uParam1->f_5 = func_92(uParam1->f_6);
			unk_0xEAA0FFE120D92784(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0xEAA0FFE120D92784(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_92(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xBE339365C863BD36(iParam0);
	unk_0xD38744167B2FA257(iVar0, func_93(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	return iVar0;
}

float func_93(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_94(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_2446208.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_249(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (func_249(sVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

int func_95(int iParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam1))
	{
		if (!unk_0x751B70C3D034E187(iParam0, iParam1, 100f, 100f, 50f, false, true, 0))
		{
			if (!unk_0xE33D59DA70B58FDF(unk_0x3FEF770D40960D5A(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_96(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_97(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_97(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_98(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_98(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_94(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_99(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_99(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_249(iVar0))
	{
		func_116();
	}
	if (func_115(iParam1) && unk_0x47D6F43D77935C75(iParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(iParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(iParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(iParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(iParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(iParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
		{
			if (func_110(uParam0, bParam7, bParam9, 0))
			{
				func_106(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_103(iVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam8)
						{
							if (!func_249(iVar0))
							{
								func_225(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
								{
									func_102(1);
								}
							}
						}
					}
				}
			}
			else if (func_103(iVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
				{
					if (((unk_0xE659E47AF827484B(iParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam8)
					{
						if (!func_249(iVar0))
						{
							func_225(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
							{
								func_102(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xF22B6C47C6EAB066(sParam5))
			{
				if (func_249(sParam5))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_94(uParam0, iVar0, 1);
				}
			}
			if (!func_110(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_101(uParam0))
				{
					func_100(uParam0);
				}
			}
		}
	}
	else
	{
		func_94(uParam0, iVar0, 0);
	}
}

void func_100(var uParam0)
{
	if (func_115(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_101(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_102(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_103(char* sParam0)
{
	if (!func_104(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(sParam0) && func_249(sParam0)) || func_249("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (func_102(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_102(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_102(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_104(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_32(0))
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_105()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

void func_106(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
		func_94(uParam0, 0, 0);
	}
	if (func_109(Param2, 0f, 0f, 0f))
	{
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			iVar0 = unk_0x04A2A40C73395041(iParam1);
			if (!unk_0x997ABD671D25CA0B(iVar0, false))
			{
				if (unk_0x12534C348C6CB68B(iVar0))
				{
					if (!func_107())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
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
	unk_0x189E955A8313E298(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_107()
{
	return func_108(unk_0x4F8644AF03D0E0D6());
}

int func_108(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_109(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_110(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_114(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_113(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_113(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_114(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_101(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_114(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_114(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_114(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_113(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_113(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_114(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_112(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_111(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_112(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_101(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_104(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_116();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_111(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_104(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_116()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 4);
}

void func_117(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_367(uParam0);
	}
	if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
	{
		uParam0->f_8 = func_118(*uParam1, 0, 0);
	}
	if (!unk_0xF22B6C47C6EAB066(sParam2))
	{
		unk_0xEAA0FFE120D92784(uParam0->f_8, sParam2);
	}
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_93(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_93(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_93(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_119(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		unk_0x9F8AA94D6D97DBF4(uParam0->f_3, false);
		unk_0xA72CD9CA74A5ECBA(uParam0->f_3);
		unk_0x70A2D1137C8ED7C9(uParam0->f_3, 3, false);
		unk_0x9F7794730795E019(uParam0->f_3, 17, true);
		unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
		if ((func_123(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_122(uParam0->f_29)) && !bParam2)
		{
			func_120(uParam0);
		}
		else
		{
			unk_0x70A2D1137C8ED7C9(uParam0->f_3, 1024, true);
			unk_0x70A2D1137C8ED7C9(uParam0->f_3, 131072, true);
			unk_0xE8854A4326B9E12B(&iVar0);
			unk_0x504D54DF3F6F2247(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
			}
			else
			{
				unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
			}
			unk_0x90D2156198831D69(0, false);
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
		}
		unk_0x971D38760FBC02EF(uParam0->f_3, true);
	}
}

void func_120(var uParam0)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (func_109(func_121(), uParam0->f_29))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x8E2530AA8ADA980E(uParam0->f_3, 84.9058f);
				unk_0x971D38760FBC02EF(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x8E2530AA8ADA980E(uParam0->f_3, 68.3138f);
				unk_0x971D38760FBC02EF(uParam0->f_3, true);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
			unk_0x3841422E9C488D8C(&iVar0);
			unk_0xE8854A4326B9E12B(&iVar0);
			unk_0x504D54DF3F6F2247(0, 0, 0);
			unk_0x90D2156198831D69(0, false);
			unk_0x15D3A79D4E44B913(0, uParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (uParam0->f_411 == 2)
			{
				unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xB6C987F9285A3814(0, 1);
				unk_0x15D3A79D4E44B913(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				unk_0x93B93A37987F1F3D(0, 151.7794f, 0);
				unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x277F471BA9DB000B(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x277F471BA9DB000B(0, uParam0->f_29, 15f, 20000);
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
			}
			else
			{
				unk_0xEA47FE3719165B94(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (unk_0x5A59271FFADD33C1(uParam0->f_29, 15f, true))
			{
				unk_0x277F471BA9DB000B(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(0, 40000f, 0);
			}
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
		}
		unk_0x971D38760FBC02EF(uParam0->f_3, true);
	}
}

Vector3 func_121()
{
	struct<3> Var0;
	
	return Var0;
}

int func_122(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_123(int iParam0, struct<3> Param1, bool bParam4)
{
	if (unk_0x5F9532F3B5CC2551(iParam0))
	{
		return -1f;
	}
	return unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iParam0, true), Param1, bParam4);
}

char* func_124(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_125()
{
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, bool bParam1)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (func_134(uParam0) && func_131(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_130(uParam0, 2097152))
				{
					func_127(uParam0);
				}
			}
			else
			{
				func_127(uParam0);
			}
		}
		else if (!func_134(uParam0))
		{
			if (bParam1)
			{
				if (func_130(uParam0, 2097152))
				{
					if (unk_0x77F1BEB8863288D5(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x77F1BEB8863288D5(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127(var uParam0)
{
	struct<3> Var0;
	
	if (func_122(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_128(uParam0, Var0);
}

void func_128(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x5F9532F3B5CC2551(uParam0->f_3) && unk_0xA808AA1D79230FC2(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x1899F328B0E12848(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x1899F328B0E12848(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_129(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xD3DBCE61A490BE02(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xF1B760881820C952(Var0, Param1, false) < unk_0xF1B760881820C952(Var3, Param1, false) && unk_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				unk_0xD3DBCE61A490BE02(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xF1B760881820C952(Var0, Param1, false) >= unk_0xF1B760881820C952(Var3, Param1, false) && unk_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				unk_0xD3DBCE61A490BE02(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xD3DBCE61A490BE02(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_129(int iParam0, int iParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0) && !unk_0x5F9532F3B5CC2551(iParam1))
	{
		if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
		{
			if (unk_0xBB40DD2270B65366(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_130(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_227(uParam0->f_81, iParam1) && !func_37());
	}
	return func_37();
}

int func_131(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xA3EE4A07279BB9DB(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_32(1))
			{
				func_30(0);
			}
			if (func_24())
			{
				func_133();
				return 1;
			}
			else if (func_132(uParam0->f_4, fParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, 256);
				}
				else
				{
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, 0);
				}
			}
			unk_0x92B35082E0B42F66(uParam0->f_4, true);
		}
	}
	return 0;
}

int func_132(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6());
	}
}

int func_134(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			if (unk_0xA3EE4A07279BB9DB(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_135(var uParam0)
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
	if (!func_227(uParam0->f_55, 1))
	{
		func_223(&(uParam0->f_55), 1);
	}
}

void func_136(bool bParam0)
{
	func_139();
	unk_0xCC33FA791322B9D9();
	if (bParam0)
	{
		func_185(&Local_858, 105, 1, 0, 0);
	}
	else if (Local_858.f_56 < Local_858.f_58)
	{
		if (!unk_0x84A2DD9AC37C35C1(Local_858.f_3))
		{
			func_137(Local_858.f_3, "GENERIC_INSULT_MED", Local_858.f_145, 4);
		}
	}
	else if (Local_858.f_56 >= Local_858.f_59)
	{
		if (!unk_0x84A2DD9AC37C35C1(Local_858.f_3))
		{
			func_137(Local_858.f_3, "TAXI_GOOD", Local_858.f_145, 4);
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(Local_858.f_3))
	{
		func_137(Local_858.f_3, "GENERIC_THANKS", Local_858.f_145, 4);
	}
	func_223(&(Local_858.f_81), 2097152);
	func_62(&Local_858, 16, 4f, 0);
}

void func_137(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_138(iParam3), false);
}

int func_138(int iParam0)
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

void func_139()
{
	Global_14558 = 0;
	func_140();
}

void func_140()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_141(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_142(fVar0);
	iLocal_56[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_56[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_38(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_38(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_142(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

int func_143(var uParam0, float fParam1)
{
	if (func_49(uParam0) == 2)
	{
		if (unk_0x20B60995556D004F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_145(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1) && func_144(1, 1, 1)) && unk_0xB104CD1BABF302E2(uParam0->f_4))
		{
			return func_131(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x20B60995556D004F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1) && func_144(1, 1, 1)) && unk_0xB104CD1BABF302E2(uParam0->f_4))
	{
		return func_131(uParam0, 1, fParam1);
	}
	return 0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

float func_145(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

float func_146()
{
	float fVar0;
	
	fVar0 = unk_0xD5037BA82E12416F(Local_858.f_4);
	if (fVar0 >= 5f)
	{
		return (fVar0 * 0.5f);
	}
	return 6f;
}

void func_147(var uParam0, float fParam1, float fParam2)
{
	if (func_134(uParam0) && func_227(uParam0->f_44, 4))
	{
		if ((unk_0x5721B434AD84D57A(uParam0->f_4) || unk_0xD5037BA82E12416F(uParam0->f_4) < 3f) && func_152(uParam0))
		{
			if (!func_151(uParam0, 2))
			{
				func_149(uParam0, 2);
			}
			else if (func_134(uParam0))
			{
				if (func_363(uParam0, 2) > fParam1 && !func_151(uParam0, 14))
				{
					if (func_26())
					{
						func_185(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_185(uParam0, 48, 1, 0, 0);
					}
					func_62(uParam0, 2, 0, 0);
					if (func_151(uParam0, 10))
					{
						func_62(uParam0, 10, 0, 0);
					}
				}
				if (!func_151(uParam0, 3))
				{
					func_62(uParam0, 3, 0, 0);
				}
				else if (func_363(uParam0, 3) >= fParam2)
				{
					func_148(uParam0, 3, 0);
					func_274(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_151(uParam0, 2))
			{
				func_148(uParam0, 2, 0);
			}
			if (func_151(uParam0, 3))
			{
				func_148(uParam0, 3, 0);
			}
		}
	}
}

void func_148(var uParam0, int iParam1, bool bParam2)
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
			func_85(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_85(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_149(var uParam0, int iParam1)
{
	func_150(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_150(int* iParam0)
{
	if (!func_7(iParam0))
	{
		func_63(iParam0);
	}
}

bool func_151(var uParam0, int iParam1)
{
	return func_7(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_152(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == unk_0xD80958FC74E988A6())
		{
			return 1;
		}
	}
	return 0;
}

void func_153(var uParam0)
{
	if (func_155(uParam0))
	{
		func_154(uParam0);
	}
}

void func_154(var uParam0)
{
	if (unk_0xA151A7394A214E65() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xE8AF77C4C06ADC93();
			func_148(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_363(uParam0, 20) > 3f)
				{
					func_185(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_227(uParam0->f_81, 262144) || !func_227(uParam0->f_81, 1048576))
				{
					if (func_363(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_185(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_227(uParam0->f_82, 67108864))
				{
					if (func_363(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_185(uParam0, 85, 1, 0, 0);
						func_148(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_363(uParam0, 20) > 8f)
				{
					func_185(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_227(uParam0->f_81, 262144) || func_227(uParam0->f_82, 67108864))
			{
				if (!func_151(uParam0, 22))
				{
					func_149(uParam0, 22);
				}
			}
			if (func_151(uParam0, 22) && func_363(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_227(uParam0->f_81, 1048576))
					{
						func_185(uParam0, 84, 1, 0, 0);
						func_148(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_227(uParam0->f_82, 134217728))
					{
						func_185(uParam0, 85, 1, 0, 0);
						func_148(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_155(var uParam0)
{
	return uParam0->f_120;
}

void func_156()
{
	if (!func_227(Local_858.f_44, 1))
	{
		switch (Local_858.f_412)
		{
			case 0:
				if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) >= 1)
				{
					if (func_363(&Local_858, 9) > 1f)
					{
						func_160(&Local_858, unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()));
						func_62(&Local_858, 9, 0, 0);
						if (unk_0xA6DB27D19ECBB7DA(Local_858.f_9))
						{
							unk_0x45FF974EEE1C8734(Local_858.f_9, 0);
							unk_0x4F7D8A9BFB0B43E9(Local_858.f_9, false);
						}
						Local_858.f_140 = 1;
						Local_858.f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_37() && func_363(&Local_858, 9) > 4f)
				{
					func_185(&Local_858, 52, 1, 0, 0);
					Local_858.f_412 = 2;
				}
				break;
			
			case 2:
				if (func_159("TAXI_OBJ_POL", 0, 0))
				{
					Local_858.f_412 = 3;
				}
				else if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1)
				{
					Local_858.f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x238DB2A2C23EE9EF(unk_0xA5EDC40EF369B48D(), func_158(&Local_858)))
				{
					func_160(&Local_858, unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()));
					func_38(6, 0);
				}
				if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < 1)
				{
					if (func_159("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xCC33FA791322B9D9();
					}
					if (unk_0xA6DB27D19ECBB7DA(Local_858.f_9))
					{
						unk_0x45FF974EEE1C8734(Local_858.f_9, 255);
						unk_0x4F7D8A9BFB0B43E9(Local_858.f_9, true);
					}
					Local_858.f_140 = 0;
					Local_858.f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_37())
				{
					func_38(7, func_158(&Local_858));
					func_160(&Local_858, 0);
					Local_858.f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_37())
				{
					func_157(&Local_1565, -1, 4);
					Local_858.f_412 = 0;
				}
				break;
			}
	}
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_158(var uParam0)
{
	return uParam0->f_106;
}

bool func_159(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC63CD5D2920ACBE7(sParam2);
	}
	return unk_0x8A9BA1AB3E237613();
}

void func_160(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_161(var uParam0, float* fParam1)
{
	unk_0xD7AE6C9C9C6AC54C(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

int func_162(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			if (!unk_0xA3EE4A07279BB9DB(uParam0->f_3, uParam0->f_4, true) && !unk_0xBB062B2B5722478E(uParam0->f_3))
			{
				func_274(uParam0, "Passenger left car.", 9);
			}
			else if (func_174(uParam0))
			{
				if (func_159("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xCF708001E1E536DD("TAXI_OBJ_PICKUP");
				}
				if (unk_0x5A859503B0C08678())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x9CD27B0045628463() % 1000) < 50)
				{
				}
				func_163(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_163(var uParam0, bool bParam1)
{
	func_173(uParam0, uParam0->f_3);
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_151(uParam0, 14))
			{
				if (func_37())
				{
					func_172(1);
				}
				func_171(uParam0, 11, 1);
				func_166(uParam0, 1);
				func_62(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_134(uParam0))
				{
					if ((unk_0x9CD27B0045628463() % 1000) < 50)
					{
					}
					if (unk_0x997ABD671D25CA0B(uParam0->f_2, false))
					{
						if (func_363(uParam0, 15) > 5f)
						{
							func_62(uParam0, 15, 0f, 1);
						}
					}
					if (func_363(uParam0, 14) > 20f)
					{
						func_274(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_363(uParam0, 14) > 20f)
				{
					if (func_164(uParam0->f_4, 1) > 40f)
					{
						func_274(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_274(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_164(int iParam0, bool bParam1)
{
	return func_165(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), iParam0, bParam1);
}

float func_165(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

void func_166(var uParam0, bool bParam1)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
			{
				unk_0x45FF974EEE1C8734(uParam0->f_8, 0);
				unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, false);
				func_170(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
			{
				unk_0x45FF974EEE1C8734(uParam0->f_9, 0);
				unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, false);
				unk_0xCC33FA791322B9D9();
				if (func_134(uParam0))
				{
					func_185(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_170(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_167(uParam0, 0, 0);
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
		{
			unk_0x86A652570E5F25DD(&(uParam0->f_10));
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
			{
				unk_0x45FF974EEE1C8734(uParam0->f_8, 255);
				unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, true);
			}
			else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x45FF974EEE1C8734(uParam0->f_9, 0);
					unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x45FF974EEE1C8734(uParam0->f_9, 255);
					unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, true);
				}
			}
			unk_0xCC33FA791322B9D9();
		}
	}
}

void func_167(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_367(uParam0);
	}
	if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
	{
		uParam0->f_10 = func_118(uParam0->f_4, 1, 0);
		unk_0xEAA0FFE120D92784(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x4F7D8A9BFB0B43E9(uParam0->f_10, true);
		func_168(uParam0);
		if (bParam2)
		{
			unk_0xCC33FA791322B9D9();
			func_185(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_168(var uParam0)
{
	func_62(uParam0, 14, 0, 0);
	func_169();
}

void func_169()
{
	int iVar0;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x4C241E39B23DF959(iVar0, false))
	{
		unk_0xE65F427EB70AB1ED(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_170(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_227(*uParam1, iParam2))
	{
		unk_0xCC33FA791322B9D9();
		func_185(uParam0, iParam3, 1, 0, 0);
		func_223(uParam1, iParam2);
	}
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_172(int iParam0)
{
	Global_16703 = iParam0;
}

void func_173(var uParam0, int iParam1)
{
	if (unk_0x7239B21A38F536BA(iParam1))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam1))
		{
			if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
			{
				if ((unk_0x2D343D2219CD027A(iParam1, joaat("weapon_stungun"), 0) || unk_0x2D343D2219CD027A(iParam1, 0, 2)) || unk_0x2D343D2219CD027A(iParam1, 0, 1))
				{
					func_274(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
			}
		}
	}
}

int func_174(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_151(uParam0, 14))
			{
				func_175(uParam0);
			}
			func_166(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_175(var uParam0)
{
	func_148(uParam0, 14, 0);
	func_148(uParam0, 15, 0);
	func_177();
	if (func_176())
	{
		func_172(0);
	}
}

int func_176()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	int iVar0;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x4C241E39B23DF959(iVar0, false))
	{
		unk_0xE65F427EB70AB1ED(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_178(var uParam0)
{
	func_181(uParam0, 1000);
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xAAA34F8A7CB32098(uParam0->f_3);
		unk_0x5AD23D40115353AC(uParam0->f_3, unk_0xD80958FC74E988A6(), 0);
	}
	func_179();
	func_175(uParam0);
}

void func_179()
{
	Global_14558 = 0;
	func_180();
}

void func_180()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_181(var uParam0, int iParam1)
{
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		unk_0x865908C81A2C22E9(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		unk_0x07E5B515DB0636FC(false, true, iParam1, true, false, 0);
	}
	else
	{
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	}
}

void func_182()
{
	func_223(&(Local_858.f_55), 2);
	func_223(&(Local_858.f_55), 4);
	func_223(&(Local_858.f_55), 16);
	func_223(&(Local_858.f_55), 64);
	func_223(&(Local_858.f_55), 256);
	func_223(&(Local_858.f_55), 512);
	func_223(&(Local_858.f_55), 1024);
	func_223(&(Local_858.f_55), 2048);
	func_223(&(Local_858.f_55), 4096);
	func_223(&(Local_858.f_55), 1073741824);
	func_223(&(Local_858.f_100), 8);
	func_223(&(Local_858.f_100), 2048);
	func_223(&(Local_858.f_100), 256);
	func_223(&uLocal_1636, 2);
	func_149(&Local_858, 7);
}

void func_183(var uParam0)
{
	unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	func_181(uParam0, 1000);
}

int func_184(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_93(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

void func_185(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_62(uParam0, 16, 4f, 0);
		if (func_186(uParam0))
		{
			func_35();
		}
	}
	func_228(uParam0, iParam2, bParam3);
}

int func_186(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_37())
	{
		Var6 = { func_188() };
		if (!unk_0xCA042B6957743895(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x0C515FAB3FF9EA92(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_187(&Var0);
			if (unk_0x0C515FAB3FF9EA92(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_188()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

Vector3 func_189(int iParam0)
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

Vector3 func_190(int iParam0)
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

void func_191(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	func_195(uParam0);
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
			Var0 = { func_190(iVar3) };
			fVar6 = func_193(Var0, 1);
			if (((((fVar6 < fVar5 && fVar6 >= func_192(uParam0->f_10)) && iVar3 != Global_96252[0]) && iVar3 != Global_96252[1]) && iVar3 != Global_96252[2]) && iVar3 != Global_96252[3])
			{
				uParam0->f_2[iVar4] = iVar3;
				iVar4++;
			}
		}
		iVar3++;
	}
	if (iVar4 > 0)
	{
		iVar3 = (unk_0xD53343AA4FB7DD28(0, 65535) % iVar4);
		uParam0->f_1 = uParam0->f_2[iVar3];
		uParam0->f_12 = func_193(func_190(uParam0->f_1), 1);
	}
	else
	{
		uParam0->f_1 = unk_0xD53343AA4FB7DD28(0, 50);
		uParam0->f_12 = func_193(func_190(uParam0->f_1), 1);
	}
	Global_96252[3] = Global_96252[2];
	Global_96252[2] = Global_96252[1];
	Global_96252[1] = Global_96252[0];
	Global_96252[0] = uParam0->f_1;
}

float func_192(int iParam0)
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

float func_193(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	if (bParam3)
	{
		if (unk_0x869DAACBBE9FA006())
		{
			iVar0 = unk_0xBBB45C3CF5C8AA85();
		}
		else
		{
			iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_194(unk_0x4F8644AF03D0E0D6()), Param0));
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x2A488C176D52CCA5(func_194(unk_0x4F8644AF03D0E0D6()), Param0));
	}
	return func_142(unk_0xBBDA792448DB5A89(iVar0));
}

Vector3 func_194(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

void func_195(var uParam0)
{
	int iVar0;
	
	iVar0 = Global_96257 + 1;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	uParam0->f_10 = iVar0;
	Global_96257 = iVar0;
}

int func_196(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			if ((unk_0xBB062B2B5722478E(uParam0->f_3) && (unk_0x9CD27B0045628463() - iLocal_88) > 500) || unk_0xA3EE4A07279BB9DB(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_197(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(uParam0->f_2, uParam0->f_4, false))
		{
			if ((unk_0x9CD27B0045628463() % 1000) < 50)
			{
			}
			func_163(uParam0, 1);
			if (func_24())
			{
				unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
			}
			if (unk_0x77F1BEB8863288D5(uParam0->f_3, 2106541073) == 1 || unk_0x77F1BEB8863288D5(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xAAA34F8A7CB32098(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_86 = 0;
				unk_0x5AD23D40115353AC(uParam0->f_3, unk_0xD80958FC74E988A6(), 0);
			}
		}
		else if (unk_0x238DB2A2C23EE9EF(unk_0xA5EDC40EF369B48D(), 0))
		{
			func_221(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x3841422E9C488D8C(&iVar3);
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0x15D3A79D4E44B913(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
				unk_0x5AD23D40115353AC(0, uParam0->f_4, 0);
				unk_0x39E72BC99E6360CB(iVar3);
				unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_151(uParam0, 14))
			{
				func_175(uParam0);
				func_166(uParam0, 0);
			}
			if (func_151(uParam0, 9))
			{
				func_148(uParam0, 9, 0);
				unk_0xCC33FA791322B9D9();
				if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
				{
					unk_0x45FF974EEE1C8734(uParam0->f_8, 255);
					unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, true);
				}
			}
			if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
			{
				fVar4 = ((unk_0xD5037BA82E12416F(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_220(uParam0, uParam0->f_3) > 300f)
				{
					func_274(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 1 || ((func_165(unk_0xD80958FC74E988A6(), uParam0->f_3, 1) < 20f && func_145(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_145(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_219(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_218(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_93)
							{
								uParam0->f_7 = func_217(uParam0->f_4, uParam0->f_3);
								iVar0 = func_216(uParam0, &iVar1);
								if (!unk_0x5F9532F3B5CC2551(iVar0))
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
										unk_0x504D54DF3F6F2247(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x504D54DF3F6F2247(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x5F9532F3B5CC2551(iVar0))
											{
												unk_0x504D54DF3F6F2247(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
							unk_0xC20E50AA46D09CA8(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0xAAD68E1AB39DA632(unk_0x3FEF770D40960D5A(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_152(uParam0))
							{
								unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
							}
							else if (((unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 1 && unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 0) && unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 7) && func_220(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x3841422E9C488D8C(&(uParam0->f_243));
								unk_0xE8854A4326B9E12B(&(uParam0->f_243));
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xEA47FE3719165B94(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									unk_0xEA47FE3719165B94(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								unk_0x39E72BC99E6360CB(uParam0->f_243);
								unk_0x5ABA3986D90D8A3B(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x28D1A16553C51776(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_93)
						{
							if (func_165(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_215(uParam0, 1))
								{
									unk_0xAAA34F8A7CB32098(uParam0->f_3);
									func_274(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_214(uParam0->f_4))
								{
									unk_0xAAA34F8A7CB32098(uParam0->f_3);
									func_274(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_212(uParam0);
						if (func_220(uParam0, uParam0->f_3) < fVar4 || func_24())
						{
							if (unk_0xA3EE4A07279BB9DB(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_199(uParam0))
								{
									func_198(uParam0);
									iLocal_88 = unk_0x9CD27B0045628463();
									unk_0x1913FE4CBF41C463(uParam0->f_3, 26, true);
									func_148(uParam0, 5, 0);
									unk_0x21986729D6A3A830();
									unk_0xD7AE6C9C9C6AC54C(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0x0EB0585D15254740(uParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0xAAD68E1AB39DA632(unk_0x3FEF770D40960D5A(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_198(var uParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
	{
		unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, false);
		unk_0x86A652570E5F25DD(&(uParam0->f_8));
	}
}

int func_199(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_211("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3) && !unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		func_210();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (func_208(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (func_131(uParam0, 0, 1084227584) && func_144(1, 1, 1))
			{
				if (func_215(uParam0, 1))
				{
					iLocal_87 = unk_0x9CD27B0045628463();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_85 = 1;
				}
				else
				{
					func_274(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_217(uParam0->f_4, uParam0->f_3);
				iVar9 = func_216(uParam0, &iVar10);
				if (!unk_0x5F9532F3B5CC2551(iVar9))
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
						unk_0x504D54DF3F6F2247(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x504D54DF3F6F2247(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, false, false))
					{
						uParam0->f_7 = 0;
						if (!unk_0x5F9532F3B5CC2551(iVar9))
						{
							unk_0x504D54DF3F6F2247(iVar9, 0, 4096);
						}
					}
				}
				iLocal_85 = 2;
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
			iVar12 = func_207(&(uParam0->f_409), unk_0x1899F328B0E12848(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x1899F328B0E12848(uParam0->f_4, Var0), 1);
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
				func_206(0, 0, 1);
				unk_0xBE31FD6CE464AC59(unk_0x3FEF770D40960D5A(uParam0->f_4, true), 3f, 0);
				unk_0xDD9B9B385AAC7F5B(unk_0x3FEF770D40960D5A(uParam0->f_4, true), 25f, 0);
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				func_139();
				func_228(uParam0, 0, 0);
				Var13 = { unk_0x1899F328B0E12848(uParam0->f_4, Var6) };
				unk_0x06843DA7060A026B(uParam0->f_3, Var13, true, false, false, true);
				unk_0x8E2530AA8ADA980E(uParam0->f_3, func_204(uParam0));
				func_203(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x4D41783FB745E42E(*uParam0, unk_0x1899F328B0E12848(uParam0->f_4, Var0));
				unk_0x5640BFF86B16E8DC(*uParam0, uParam0->f_4, Var3, true);
				unk_0x026FB97D0A425F84(*uParam0, true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				unk_0x2208438012482A1A(uParam0->f_3, false, false);
				unk_0xC20E50AA46D09CA8(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_85 = 5;
			}
			break;
		
		case 5:
			func_211("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_85 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x5F9532F3B5CC2551(uParam0->f_3) && !unk_0x5F9532F3B5CC2551(uParam0->f_4))
			{
				if (!unk_0x997ABD671D25CA0B(uParam0->f_3, false))
				{
					unk_0xF75B0D629E1C063D(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x93D9BD300D7789E5(uParam0->f_4, func_202(uParam0->f_7), true);
				}
				unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				unk_0x865908C81A2C22E9(*uParam0, false);
				unk_0x865908C81A2C22E9(uParam0->f_1, false);
				unk_0xB4EC2312F4E5B1F1(0f);
				unk_0x6D0858B8EDFD2B7D(0f, 1f);
				unk_0xD4E8E24955024033(800);
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				func_139();
				func_228(uParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575())
			{
				func_200(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0x865908C81A2C22E9(*uParam0, false);
			unk_0x865908C81A2C22E9(uParam0->f_1, false);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			func_200(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x5F9532F3B5CC2551(uParam0->f_3) && !unk_0x5F9532F3B5CC2551(uParam0->f_4))
			{
				if (unk_0xBB062B2B5722478E(uParam0->f_3) || unk_0x997ABD671D25CA0B(uParam0->f_3, true))
				{
					return 1;
				}
				else if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -1794415470) != 1 && unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -1794415470) != 0)
				{
					unk_0xC20E50AA46D09CA8(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_200(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	}
	unk_0xC61B86C9F61EB404(true);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA0EBB943C300E693(true);
		unk_0xA6294919E56FF02A(true);
	}
	func_201(23, 0);
}

void func_201(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24688, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24688, iParam0);
	}
}

int func_202(int iParam0)
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

void func_203(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	if (!unk_0xA7A932170592B50E(*uParam0))
	{
		*uParam0 = unk_0x6ABFA3E16460F22D(26379945, Param1, Param4, fParam7, false, 2);
	}
}

float func_204(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_121() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x1899F328B0E12848(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x1899F328B0E12848(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_205(unk_0x3FEF770D40960D5A(uParam0->f_3, true), Var1);
	return fVar0;
}

float func_205(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_206(int iParam0, bool bParam1, int iParam2)
{
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, iParam0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
	}
	unk_0xC61B86C9F61EB404(bParam1);
	func_30(0);
	func_15(1, 1, iParam2, 0);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_201(23, 1);
}

int func_207(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x7EE9F5D83DD4F90E(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x3D87450E15D98694(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

int func_208(int iParam0)
{
	if (func_209() && unk_0x9CD27B0045628463() >= iParam0 + 1000)
	{
		unk_0x891B5B39AC6302AF(500);
		while (!unk_0xB16FCE9DDC7BA182())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_30(0);
		func_179();
		return 1;
	}
	return 0;
}

int func_209()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	if (func_26())
	{
		unk_0x9DC711BC69C548DF("appInternet");
	}
	if (func_25())
	{
		unk_0x9DC711BC69C548DF("appCamera");
	}
	if (func_32(1))
	{
		func_30(0);
	}
}

void func_211(char* sParam0, var uParam1, int iParam2)
{
	if (unk_0x9CD27B0045628463() < (*uParam1 + iParam2))
	{
		return;
	}
	*uParam1 = unk_0x9CD27B0045628463();
}

void func_212(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
		{
			if (func_164(uParam0->f_3, 1) > 30f || func_213(uParam0))
			{
				if (unk_0x77F1BEB8863288D5(uParam0->f_3, -1794415470) == 1 || unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) == 1)
				{
					unk_0x3841422E9C488D8C(&iVar0);
					unk_0xE8854A4326B9E12B(&iVar0);
					unk_0x5AD23D40115353AC(0, uParam0->f_4, 0);
					unk_0xEA47FE3719165B94(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					unk_0x15D3A79D4E44B913(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
					unk_0x39E72BC99E6360CB(iVar0);
					unk_0x5ABA3986D90D8A3B(uParam0->f_3, iVar0);
					func_274(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_213(var uParam0)
{
	if ((unk_0xD5037BA82E12416F(uParam0->f_4) > 3f && func_363(uParam0, 5) > 15f) || unk_0x1DBD58820FA61D71(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xBA291848A0815CA9(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!unk_0xBA291848A0815CA9(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!unk_0xBA291848A0815CA9(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!unk_0xBA291848A0815CA9(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xB8E181E559464527(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xB8E181E559464527(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xB8E181E559464527(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xB8E181E559464527(iParam0, 3))
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

int func_215(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0[0] = unk_0xBB40DD2270B65366(uParam0->f_4, 1);
		iVar0[1] = unk_0xBB40DD2270B65366(uParam0->f_4, 2);
		iVar0[2] = unk_0xBB40DD2270B65366(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x7239B21A38F536BA(iVar0[iVar4]))
			{
				if (unk_0x5F9532F3B5CC2551(iVar0[iVar4]))
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
		if ((unk_0x9CD27B0045628463() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_216(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0 = unk_0xBB40DD2270B65366(uParam0->f_4, 1);
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xBB40DD2270B65366(uParam0->f_4, 2);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xBB40DD2270B65366(uParam0->f_4, 0);
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xA7C4F2C6E744A550(iParam0);
	Var0 = { unk_0x2274BC1C4885E333(iParam0, unk_0x3FEF770D40960D5A(iParam1, true)) };
	if (unk_0x9F47B058362C84B5(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x9F47B058362C84B5(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
		{
			iVar3 = 2;
		}
		else if (unk_0x639431E895B9AA57(iParam1, iParam0, 1, false, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x639431E895B9AA57(iParam1, iParam0, 1, false, false))
	{
		iVar3 = 1;
	}
	else if (unk_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_218(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (!unk_0xE31C2C72B8692B64(uParam0->f_3) && func_164(uParam0->f_3, 1) < fParam2)
		{
			if (!func_151(uParam0, 5))
			{
				func_62(uParam0, 5, 0, 0);
			}
		}
		else if (func_151(uParam0, 5))
		{
			func_148(uParam0, 5, 0);
		}
		if (((func_363(uParam0, 5) > IntToFloat(iParam1) && unk_0xD5037BA82E12416F(uParam0->f_4) < fParam4) && !unk_0xE31C2C72B8692B64(uParam0->f_3)) || func_164(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_219(var uParam0, float fParam1)
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
	
	iVar18 = unk_0xFB71170B7E76ACBA(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xFB71170B7E76ACBA(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x44A8FCB8ED227738(uParam0->f_4, iVar18) };
		Var6 = { unk_0x2274BC1C4885E333(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x1899F328B0E12848(uParam0->f_4, Var6) };
	Var3 = { unk_0x1899F328B0E12848(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x7FDFADE676AA3CB0(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			unk_0x9F8AA94D6D97DBF4(uParam0->f_3, true);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((func_165(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x73D57CFFDD12C355((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x7EE9F5D83DD4F90E(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x3D87450E15D98694(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_86 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 1 && unk_0x77F1BEB8863288D5(uParam0->f_3, 242628503) != 0)
			{
				unk_0x3841422E9C488D8C(&(uParam0->f_243));
				unk_0xE8854A4326B9E12B(&(uParam0->f_243));
				unk_0xEA47FE3719165B94(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
				unk_0x58C70CF3A41E4AE7(uParam0->f_243, true);
				unk_0x39E72BC99E6360CB(uParam0->f_243);
				unk_0x5ABA3986D90D8A3B(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0xCC33FA791322B9D9();
			if (uParam0->f_411 != 9)
			{
				if (!func_227(uParam0->f_44, 128))
				{
					func_185(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_137(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xE1EF3C1216AFF2CD(uParam0->f_3);
			unk_0x69F4BE8C8CC4796C(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x3841422E9C488D8C(&(uParam0->f_243));
			unk_0xE8854A4326B9E12B(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xEA47FE3719165B94(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				unk_0xEA47FE3719165B94(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
			unk_0x39E72BC99E6360CB(uParam0->f_243);
			unk_0x5ABA3986D90D8A3B(uParam0->f_3, uParam0->f_243);
			unk_0x3841422E9C488D8C(&(uParam0->f_243));
			iLocal_86 = 3;
			break;
		
		case 3:
			iLocal_86 = 0;
			if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x28D1A16553C51776(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

float func_220(var uParam0, int iParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		if (func_152(uParam0))
		{
			return func_165(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_221(var uParam0)
{
	func_173(uParam0, uParam0->f_3);
	if (func_152(uParam0))
	{
		if (func_151(uParam0, 14))
		{
			func_175(uParam0);
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
			{
				unk_0x86A652570E5F25DD(&(uParam0->f_10));
			}
		}
	}
	if (!func_151(uParam0, 9))
	{
		if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
		{
			unk_0x45FF974EEE1C8734(uParam0->f_8, 0);
			unk_0x4F7D8A9BFB0B43E9(uParam0->f_8, false);
		}
		func_62(uParam0, 9, 0, 0);
		func_222("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_222(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

void func_223(var uParam0, int iParam1)
{
	func_224(uParam0, iParam1);
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_225(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_226(int iParam0)
{
	return Global_97173.f_17318.f_39[iParam0];
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_228(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_35();
		func_62(uParam0, 16, 4f, 0);
		unk_0xCC33FA791322B9D9();
	}
}

int func_229(int iParam0, bool bParam1, bool bParam2)
{
	return func_118(iParam0, !bParam1, bParam2);
}

void func_230(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_231(struct<3> Param0, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_109(Param0, func_121()))
	{
		Var0 = { func_29(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_29(Param0, 1f, 30f, 30f, 10f) };
		unk_0xC12321827687FE4D(Var0, Var3, bParam3, true);
	}
}

void func_232(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x2CE544C68FB812A0(Param1, 20f, 5f, false);
}

void func_233(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_14(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

int func_234()
{
	if (func_174(&Local_858))
	{
		if (!unk_0x98A4EB5D89A0C952(iLocal_1563))
		{
			return 0;
		}
		if (!unk_0x85F01B8D5B90570E(Local_1647.f_0))
		{
			return 0;
		}
		if (!func_235(&uLocal_856, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_235(var uParam0, bool bParam1)
{
	if (!unk_0x98A4EB5D89A0C952(func_12()))
	{
		func_211("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", uParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xD031A9162D01088C("gestures@m@standing@casual"))
		{
			func_211("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", uParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xD031A9162D01088C("oddjobs@taxi@"))
	{
		func_211("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xD031A9162D01088C("oddjobs@towingcome_here"))
	{
		func_211("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xD031A9162D01088C("misscommon@response"))
	{
		func_211("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0x02245FE4BED318B8(2))
	{
		func_211("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", uParam0, 1000);
		return 0;
	}
	return 1;
}

void func_236()
{
	unk_0x963D27A58DF860AC(iLocal_1563);
	Local_1647.f_0 = func_238();
	func_237(1);
}

void func_237(bool bParam0)
{
	unk_0x963D27A58DF860AC(func_12());
	if (bParam0)
	{
		unk_0xD3BD40951412FEF6("gestures@m@standing@casual");
	}
	unk_0xD3BD40951412FEF6("oddjobs@taxi@");
	unk_0xD3BD40951412FEF6("oddjobs@towingcome_here");
	unk_0xD3BD40951412FEF6("misscommon@response");
	unk_0x71A78003C8E71424("TAXI", 2);
	if (!func_227(Global_97173.f_17318, 128))
	{
		func_223(&(Global_97173.f_17318), 128);
	}
}

int func_238()
{
	return unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
}

int func_239(var uParam0)
{
	if (unk_0x997ABD671D25CA0B(uParam0->f_2, false))
	{
		uParam0->f_4 = unk_0x9A9112A0FE9A4713(uParam0->f_2, false);
		if (unk_0x6E575D6A898AB852(uParam0->f_2) || unk_0x9F47B058362C84B5(uParam0->f_4) == func_12())
		{
			if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
			{
				if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == uParam0->f_2)
				{
					unk_0xB72E26D81006005B(uParam0->f_4);
					func_241(uParam0);
					func_38(2, 0);
					bLocal_93 = true;
					func_240(12);
					func_150(&iLocal_89);
					return 1;
				}
				else
				{
					func_274(uParam0, "No Taxi", 21);
					func_225("TAXI_DBG_NTAXI", -1);
				}
			}
			else
			{
				func_274(uParam0, "Taxi is not drivable", 0);
				func_225("TAXI_DBG_NTAXI", -1);
			}
		}
		else if (func_363(uParam0, 3) > 2f)
		{
			func_274(uParam0, "No Taxi", 21);
			func_225("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_240(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_241(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		if (func_125())
		{
		}
	}
}

void func_242(var uParam0, int iParam1)
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

int func_243(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	iVar1 = func_247(uParam0, iParam2);
	iVar0 = iVar1;
	func_244(uParam0, iVar0, uParam1, &bVar2, &uVar7);
	if (!bVar2)
	{
		if ((((iVar1 != 0 && iVar1 != 3) && iVar1 != 8) && iVar1 != 13) && iVar1 != 18)
		{
			iVar0 = (iVar1 - 1);
			bVar3 = true;
		}
		if (bVar3)
		{
			func_244(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_244(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_244(uParam0, iVar0, uParam1, &bVar2, &uVar7);
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
			func_244(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (bVar2)
	{
	}
	Global_96247[3] = Global_96247[2];
	Global_96247[2] = Global_96247[1];
	Global_96247[1] = Global_96247[0];
	Global_96247[0] = iVar0;
	Global_96242[3] = Global_96242[2];
	Global_96242[2] = Global_96242[1];
	Global_96242[1] = Global_96242[0];
	Global_96242[0] = uVar7;
	if (!Global_96227)
	{
		Global_96227 = 1;
	}
	return 1;
}

void func_244(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < (uParam0[iParam1 /*11*/])->f_1)
	{
		Var1 = { func_246(uParam0, iParam1, iVar0) };
		if (func_193(Var1, 1) < func_193(*uParam2, 1))
		{
			if (Global_96227 && ((((iParam1 == Global_96247[0] && iVar0 == Global_96242[0]) || (iParam1 == Global_96247[1] && iVar0 == Global_96242[1])) || (iParam1 == Global_96247[2] && iVar0 == Global_96242[2])) || (iParam1 == Global_96247[3] && iVar0 == Global_96242[3])))
			{
			}
			else if (func_245(Var1, 1) > 40f)
			{
				*uParam2 = { Var1 };
				*uParam4 = iVar0;
				if (func_193(*uParam2, 1) <= 0.6f)
				{
					*uParam4 = iVar0;
					*bParam3 = 1;
				}
			}
		}
		iVar0++;
	}
}

float func_245(struct<3> Param0, bool bParam3)
{
	return func_123(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), Param0, bParam3);
}

Vector3 func_246(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { func_121() };
	if (iParam2 == -1)
	{
		iParam2 = (unk_0xD53343AA4FB7DD28(0, 65535) % (uParam0[iParam1 /*11*/])->f_1);
	}
	switch (iParam1)
	{
		case 0:
			Var0 = { Local_408[iParam2 /*3*/] };
			break;
		
		case 1:
			Var0 = { Local_433[iParam2 /*3*/] };
			break;
		
		case 2:
			Var0 = { Local_470[iParam2 /*3*/] };
			break;
		
		case 3:
			Var0 = { Local_489[iParam2 /*3*/] };
			break;
		
		case 4:
			Var0 = { Local_505[iParam2 /*3*/] };
			break;
		
		case 5:
			Var0 = { Local_566[iParam2 /*3*/] };
			break;
		
		case 6:
			Var0 = { Local_600[iParam2 /*3*/] };
			break;
		
		case 7:
			Var0 = { Local_610[iParam2 /*3*/] };
			break;
		
		case 8:
			Var0 = { Local_620[iParam2 /*3*/] };
			break;
		
		case 9:
			Var0 = { Local_633[iParam2 /*3*/] };
			break;
		
		case 10:
			Var0 = { Local_655[iParam2 /*3*/] };
			break;
		
		case 11:
			Var0 = { Local_665[iParam2 /*3*/] };
			break;
		
		case 12:
			Var0 = { Local_678[iParam2 /*3*/] };
			break;
		
		case 13:
			Var0 = { Local_685[iParam2 /*3*/] };
			break;
		
		case 14:
			Var0 = { Local_698[iParam2 /*3*/] };
			break;
		
		case 15:
			Var0 = { Local_720[iParam2 /*3*/] };
			break;
		
		case 16:
			Var0 = { Local_742[iParam2 /*3*/] };
			break;
		
		case 17:
			Var0 = { Local_767[iParam2 /*3*/] };
			break;
		
		case 18:
			Var0 = { Local_783[iParam2 /*3*/] };
			break;
		
		case 19:
			Var0 = { Local_799[iParam2 /*3*/] };
			break;
		
		case 20:
			Var0 = { Local_818[iParam2 /*3*/] };
			break;
		
		case 21:
			Var0 = { Local_837[iParam2 /*3*/] };
			break;
	}
	return Var0;
}

int func_247(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_248(uParam0);
	if (iParam1 > 1)
	{
		iVar1 = (unk_0xD53343AA4FB7DD28(0, 65535) % 3);
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

int func_248(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (unk_0x54736AA40E271165(unk_0xD80958FC74E988A6(), (uParam0[iVar0 /*11*/])->f_2, (uParam0[iVar0 /*11*/])->f_5, false, false, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 22;
}

bool func_249(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_250(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
		{
			if (bParam2)
			{
				if (func_363(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_185(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_185(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_62(uParam0, 10, 0f, 1);
				}
			}
			else if (func_363(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_185(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_185(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_62(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_363(uParam0, 10) > 30f)
		{
			if (!func_37())
			{
				if (uParam0->f_112)
				{
					func_185(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_185(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_62(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_227(uParam0->f_100, 64))
	{
		if (!func_7(&(Local_189[5 /*10*/].f_6)))
		{
			func_150(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_273(uParam0))
			{
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_272(uParam0, 1);
				func_270(5, uParam0);
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 1))
	{
		if (!func_7(&(Local_189[0 /*10*/].f_6)))
		{
			func_150(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_268(uParam0))
			{
				func_272(uParam0, 1);
				func_270(0, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 2))
	{
		if (!func_7(&(Local_189[1 /*10*/].f_6)))
		{
			func_150(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_267(uParam0))
			{
				func_272(uParam0, 1);
				func_270(1, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 2048))
	{
		if (!func_7(&(Local_189[8 /*10*/].f_6)))
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xEEF059FAD016D209(uParam0->f_4);
				func_150(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_86(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_266(uParam0))
			{
				func_272(uParam0, 1);
				func_270(8, uParam0);
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 128))
	{
		if (!func_7(&(Local_189[6 /*10*/].f_6)))
		{
			func_150(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_265(uParam0))
			{
				func_272(uParam0, 1);
				func_270(6, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 32))
	{
		if (!func_7(&(Local_189[4 /*10*/].f_6)))
		{
			func_150(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_264(uParam0))
			{
				func_272(uParam0, 1);
				func_270(4, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 256))
	{
		if (!func_7(&(Local_189[7 /*10*/].f_6)))
		{
			func_150(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_263(uParam0))
			{
				func_270(7, uParam0);
				func_272(uParam0, 1);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 8))
	{
		if (!func_7(&(Local_189[9 /*10*/].f_6)))
		{
			func_150(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
		}
		else if (func_86(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_262(uParam0))
			{
				func_272(uParam0, 1);
				func_270(9, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 16384))
	{
		if (!func_7(&(Local_189[13 /*10*/].f_6)))
		{
			func_150(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_256(uParam0))
			{
				func_272(uParam0, 1);
				func_270(13, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 32768))
	{
		if (!func_7(&(Local_189[14 /*10*/].f_6)))
		{
			func_150(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_255(uParam0))
			{
				func_272(uParam0, 1);
				func_270(14, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 4096))
	{
		if (!func_7(&(Local_189[11 /*10*/].f_6)))
		{
			func_150(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_254(uParam0))
			{
				func_272(uParam0, 1);
				func_270(11, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 8192))
	{
		if (!func_7(&(Local_189[12 /*10*/].f_6)))
		{
			func_150(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_86(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_253(uParam0))
			{
				func_272(uParam0, 1);
				func_270(12, uParam0);
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_269(uParam0);
			}
		}
	}
	if (func_227(uParam0->f_100, 4))
	{
		if (!func_7(&(Local_189[2 /*10*/].f_6)))
		{
			func_252(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_86(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_251(uParam0))
			{
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_272(uParam0, 1);
				func_270(2, uParam0);
				func_269(uParam0);
			}
		}
	}
}

int func_251(var uParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(uParam0->f_2))
	{
		if ((!unk_0x530944F6F4B8A214(uParam0->f_2) && !func_7(&(Local_189[0 /*10*/].f_3))) && !func_7(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_7(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xD5037BA82E12416F(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_150(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_86(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xD5037BA82E12416F(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_85(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_85(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_252(int* iParam0, float fParam1)
{
	if (!func_7(iParam0))
	{
		func_56(iParam0, fParam1);
	}
}

int func_253(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_7(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_189[12 /*10*/].f_3)))
			{
				func_150(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_85(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_254(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0x4C241E39B23DF959(uParam0->f_4, false) && !func_7(&(Local_189[0 /*10*/].f_3))) && !func_7(&(Local_189[1 /*10*/].f_3))) && !func_7(&(Local_189[5 /*10*/].f_3))) && !func_7(&(Local_189[9 /*10*/].f_3))) && !func_7(&(Local_189[7 /*10*/].f_3))) && !func_7(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(uParam0->f_4, true) };
		if (unk_0x73D57CFFDD12C355(Var0.f_0) > 2.5f && !func_7(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_189[11 /*10*/].f_3)))
			{
				func_150(&(Local_189[11 /*10*/].f_3));
				fLocal_341 = Var0.f_0;
			}
			else if (func_86(&(Local_189[11 /*10*/].f_3)) < 1.5f && (unk_0x73D57CFFDD12C355(fLocal_341) - unk_0x73D57CFFDD12C355(Var0.f_0)) < 0f)
			{
				func_85(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_86(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_85(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_255(var uParam0)
{
	if (((((unk_0x4C241E39B23DF959(uParam0->f_4, false) && !func_7(&(Local_189[0 /*10*/].f_3))) && !func_7(&(Local_189[8 /*10*/].f_3))) && !func_7(&(Local_189[5 /*10*/].f_3))) && !func_7(&(Local_189[9 /*10*/].f_3))) && !func_7(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_7(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0x7239B21A38F536BA(uParam0->f_5))
			{
				if ((unk_0xD5037BA82E12416F(uParam0->f_4) > 15f && func_165(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x5F9532F3B5CC2551(uParam0->f_5) && !unk_0x22AC59A870E6A669(uParam0->f_5, -1)))
				{
					func_150(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_86(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_165(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xDFD5033FDBA0A9C8(uParam0->f_5))
		{
			func_85(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_86(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_85(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xDFD5033FDBA0A9C8(uParam0->f_5))
		{
			func_85(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_256(var uParam0)
{
	if (((unk_0x4C241E39B23DF959(uParam0->f_4, false) && !func_7(&(Local_189[9 /*10*/].f_3))) && !func_7(&(Local_189[7 /*10*/].f_3))) && !func_7(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_257(uParam0->f_4) && unk_0xD5037BA82E12416F(uParam0->f_4) > 15f)
		{
			if (!func_7(&(Local_189[13 /*10*/].f_3)))
			{
				func_150(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_85(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_257(int iParam0)
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
	
	unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(iParam0, true), 1, &Var0, 1, 1077936128, 0);
	unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(iParam0, true), 2, &Var3, 1, 1077936128, 0);
	unk_0x16F46FB18C8009E4(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_261((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_260(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_258(unk_0x3FEF770D40960D5A(iParam0, true), Var15, Var18, Var21);
}

int func_258(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_261(Param6 - Param3) };
	Var3 = { func_261(Param9 - Param3) };
	fVar6 = func_259(Param0, Var0);
	fVar7 = func_259(Param3, Var0);
	fVar8 = func_259(Param6, Var0);
	fVar9 = func_259(Param0, Var3);
	fVar10 = func_259(Param3, Var3);
	fVar11 = func_259(Param9, Var3);
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

float func_259(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_260(struct<3> Param0, int iParam3)
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

Vector3 func_261(struct<3> Param0)
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

int func_262(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == unk_0xD80958FC74E988A6())
		{
			if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xBB40DD2270B65366(uParam0->f_4, -1) == unk_0xD80958FC74E988A6())
		{
			if (unk_0x1DBD58820FA61D71(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (unk_0x831E0242595560DF(uParam0->f_4) <= -145f || unk_0x831E0242595560DF(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (unk_0x831E0242595560DF(uParam0->f_4) <= 35f && unk_0x831E0242595560DF(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_264(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0 = unk_0xD559D2BE9E37853B(unk_0x4F8644AF03D0E0D6());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_189[4 /*10*/].f_3)))
			{
				func_150(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_85(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_265(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		iVar0 = unk_0xDB89591E290D9182(unk_0x4F8644AF03D0E0D6());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_189[6 /*10*/].f_3)))
			{
				func_150(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_85(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0x8BAD02F0368D9E14(uParam0->f_4))
		{
			iVar0 = unk_0xEEF059FAD016D209(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xA72CD9CA74A5ECBA(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_185(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_185(uParam0, 72, 1, 0, 1);
				}
				func_85(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		Var0 = { unk_0x9A8D700A51CB7B0D(uParam0->f_4, true) };
		if (unk_0x73D57CFFDD12C355(Var0.f_0) > 3f && !func_7(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_189[1 /*10*/].f_3)))
			{
				func_150(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_85(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_268(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (!unk_0xB104CD1BABF302E2(uParam0->f_4) && unk_0x886E37EC497200B6(uParam0->f_4))
		{
			if (!func_7(&(Local_189[0 /*10*/].f_3)))
			{
				func_150(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_85(&(Local_189[0 /*10*/].f_3));
				func_63(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_269(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_7(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_63(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_62(uParam0, 10, 0f, 1);
	unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
}

void func_270(int iParam0, var uParam1)
{
	Local_189[iParam0 /*10*/].f_1++;
	func_271(uParam1, iParam0);
	func_85(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_272(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_273(var uParam0)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
	{
		if (unk_0xD5037BA82E12416F(uParam0->f_4) > 25f)
		{
			if (!func_7(&(Local_189[5 /*10*/].f_3)))
			{
				func_150(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_86(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_85(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_85(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_274(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_179();
	func_61(2);
	Var0 = { func_287() };
	if ((!unk_0xCA042B6957743895(&Var0) && func_37()) && !unk_0x0C515FAB3FF9EA92(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0xCC33FA791322B9D9();
		unk_0x8DFCED7A656F8802(true);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
		{
			if (!func_134(uParam0))
			{
				if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x97FF36A1D40EA00A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0x1F0B79228E461EC9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x97FF36A1D40EA00A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0x1F0B79228E461EC9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x97FF36A1D40EA00A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_62(uParam0, 3, 0, 0);
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
				func_285(uParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
			{
				func_137(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_134(uParam0))
			{
				if (unk_0x5721B434AD84D57A(uParam0->f_4))
				{
					func_119(uParam0, 4096, 0);
				}
				else
				{
					func_119(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_285(uParam0, &Var0);
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
				func_285(uParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
			{
				func_137(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_285(uParam0, &Var0);
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_285(uParam0, &Var0);
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_38(8, 0);
			iLocal_56[3] = 1;
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
				func_285(uParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
			{
				func_137(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_119(uParam0, 0, 0);
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_38(8, 0);
			iLocal_56[3] = 1;
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
				func_285(uParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
			{
				func_137(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_285(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_38(8, 0);
			iLocal_56[3] = 1;
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
				func_285(uParam0, &Var0);
			}
			else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
			{
				func_137(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_284(&Var0);
			func_275(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_285(uParam0, &Var0);
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
					func_285(uParam0, &Var0);
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
			{
				func_137(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_38(3, 0);
		}
		func_62(uParam0, 3, 0f, 1);
	}
}

int func_275(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_283(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_276(sParam2, iParam3, 0);
}

int func_276(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_180();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_282(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_281();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_280();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_279())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_22())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_278();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_277();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_180();
	}
	return 0;
}

void func_277()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_278()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_279()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_280()
{
	if (func_80(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_78();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_281()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_283(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_284(char* sParam0)
{
	switch (func_82(unk_0xD80958FC74E988A6()))
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

void func_285(var uParam0, char* sParam1)
{
	if (func_286(uParam0))
	{
		func_275(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_286(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (func_165(unk_0xD80958FC74E988A6(), uParam0->f_3, 1) < 40f && !unk_0xE31C2C72B8692B64(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_287()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x480357EE890C295A();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_288(var uParam0)
{
	return uParam0->f_118;
}

void func_289()
{
	func_323(&Local_858);
	if (func_322(&Local_858, &Local_1565))
	{
		switch (Local_1565.f_27)
		{
			case 0:
				if (Local_858.f_410 == 9)
				{
					if (!func_321(&Local_858))
					{
						if (func_320("TX_OBJ_PRO_DO") || unk_0xA6DB27D19ECBB7DA(Local_858.f_9))
						{
							Local_1565.f_27++;
						}
						else if (func_319(&Local_858) != 10)
						{
							func_185(&Local_858, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_319(&Local_858) > 10 && func_319(&Local_858) != 15) && !func_321(&Local_858))
				{
					if (!unk_0x84A2DD9AC37C35C1(Local_858.f_3))
					{
						func_137(Local_858.f_3, "PED_RANT", Local_858.f_145, 4);
					}
					Local_1565.f_27++;
					if (bLocal_1564)
					{
					}
				}
				break;
			}
	}
	func_290(&Local_858, &uLocal_1595, &Local_1565, bLocal_1564);
}

int func_290(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_300(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_151(uParam0, 2))
	{
		if (func_299(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x9CD27B0045628463() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_298(uParam0))
				{
					uParam2->f_7 = { func_297(uParam1) };
					func_275(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_37())
				{
					uParam2->f_13 = { func_188() };
					if (unk_0x0C515FAB3FF9EA92(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_224(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_294(uParam1);
					func_62(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_293(uParam0))
				{
					if (func_37())
					{
						func_62(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_292() };
						if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_37())
				{
					uParam2->f_19 = { func_287() };
				}
				else
				{
					func_224(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_294(uParam1);
					func_62(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_151(uParam0, 14) && !func_37()) && !func_293(uParam0)) && func_363(uParam0, 18) > 1f)
				{
					func_62(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_37())
				{
					if (func_363(uParam0, 18) > 1f)
					{
						if (!unk_0xCA042B6957743895(&(uParam2->f_1)))
						{
							func_291(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_37())
				{
					func_224(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_294(uParam1);
					func_62(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_291(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_283(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_276(sParam2, iParam4, 0);
}

struct<6> func_292()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x480357EE890C295A();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xAC09CA973C564252(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xAC09CA973C564252(&(Global_14560[iVar8 /*6*/])))
					{
						return Global_14560[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_293(var uParam0)
{
	return uParam0->f_110;
}

void func_294(var uParam0)
{
	int iVar0;
	
	iVar0 = func_296(uParam0);
	if (iVar0 > -1)
	{
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_223(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_295(), 24);
	}
}

var func_295()
{
	var uVar0;
	
	return uVar0;
}

int func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_227((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_297(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_227((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_223(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_298(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_159("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_159("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_159("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_159("TX_OBJ_GYB_DO", 0, 0) || func_159("TAXI_OBJ_GYB", 0, 0)) || func_159("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_159("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_159("TX_OBJ_CYI_DO", 0, 0) || func_159("TAXI_OBJ_CYI_01", 0, 0)) || func_159("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_159("TX_OBJ_GYN_DO", 0, 0) || func_159("TAXI_OBJ_GYN", 0, 0)) || func_159("TAXI_OBJ_GYN_TG", 0, 0)) || func_159("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_159("TAXI_OBJ_CC1", 0, 0) || func_159("TAXI_OBJ_CC2", 0, 0)) || func_159("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_159("TAXI_OBJ_FTC1", 0, 0) || func_159("TAXI_OBJ_FTC2", 0, 0)) || func_159("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_159("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_159("TAXI_OBJ_GETRUN", 0, 0) || func_159("TAXI_OBJ_DRIVE", 0, 0)) || func_159("TAXI_OBJ_RETURN", 0, 0)) || func_159("TAXI_OBJ_POL", 0, 0)) || func_159("TAXI_OBJ_RUNOUT", 0, 0)) || func_159("TAXI_OBJ_POL", 0, 0));
}

int func_299(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_227((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_300(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_298(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_151(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_319(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_316(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_37())
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
						func_315(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_312(uParam0, Var0, func_314(uParam0, 2));
				}
				if (func_227(uParam0->f_98, 4))
				{
					func_62(uParam0, 16, 0, 0);
					func_228(uParam0, 0, 0);
				}
				func_170(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_363(uParam0, 16) > 1f)
				{
					func_172(1);
					if (uParam0->f_411 == 9)
					{
						func_222("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_222("TAXI_VIP_RETURN", 7500, 1);
					}
					func_62(uParam0, 16, 0, 0);
					func_228(uParam0, 0, 0);
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
					func_315(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
				{
					func_137(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_363(uParam0, 16) > func_93(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_37()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_319(uParam0))
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
				func_315(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_316(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_275(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_185(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_62(uParam0, 16, 0, 0);
				func_185(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_227(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_318(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_315(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_62(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_222("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_222("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
					{
						uParam0->f_9 = func_184(uParam0->f_17, 1);
					}
					else if (unk_0x970F608F0EE6C885(uParam0->f_9) == 0)
					{
						unk_0x45FF974EEE1C8734(uParam0->f_9, 255);
						unk_0xAE2AF67E9D9AF65D(uParam0->f_9, uParam0->f_17);
						unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, true);
					}
				}
				func_185(uParam0, 10, 1, 0, 0);
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
				func_187(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_137(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
					{
						uParam0->f_9 = func_184(uParam0->f_17, 1);
					}
					else if (unk_0x970F608F0EE6C885(uParam0->f_9) == 0)
					{
						unk_0x45FF974EEE1C8734(uParam0->f_9, 255);
						unk_0xAE2AF67E9D9AF65D(uParam0->f_9, uParam0->f_17);
						unk_0x4F7D8A9BFB0B43E9(uParam0->f_9, true);
					}
				}
				func_185(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_311(uParam0, 33554432, Var0, "", 1, 8);
				func_62(uParam0, 16, 0, 0);
				func_185(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_37())
				{
					func_310(uParam0, 0);
					func_223(&(uParam0->f_44), 4);
					func_62(uParam0, 16, 0, 0);
					func_185(uParam0, 13, 0, 0, 0);
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
				func_187(&Var0);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 11, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_363(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_187(&Var0);
					}
					func_308(Var0, uParam1);
					func_223(&(uParam0->f_81), 67108864);
					func_62(uParam0, 16, 0, 0);
					func_62(uParam0, 11, 0, 0);
					func_228(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_363(uParam0, 11) > uParam0->f_36)
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
							func_187(&Var0);
						}
					}
					func_308(Var0, uParam1);
					func_62(uParam0, 11, 0, 0);
					func_62(uParam0, 16, 0, 0);
					func_228(uParam0, 0, 0);
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
					func_187(&Var0);
				}
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
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
				func_187(&Var0);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
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
				func_187(&Var0);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_187(&Var0);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 11, 0, 0);
				func_228(uParam0, 0, 0);
				func_223(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 1, 0, 8);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
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
					func_306(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_306(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_308(Var0, uParam1);
				func_316(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 6, 0f, 1);
				func_228(uParam0, 0, 0);
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
					func_306(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_306(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_308(Var0, uParam1);
				func_316(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 6, 0f, 1);
				func_228(uParam0, 0, 0);
				break;
			
			case 12:
				func_222("TAXI_OBJ_GYB", 3500, 1);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_222("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_222("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_222("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_227(uParam0->f_98, 268435456))
				{
					func_222("TAXI_OBJ_CYI_01", 7500, 1);
					func_223(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_187(&Var0);
				func_308(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_187(&Var0);
				func_308(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_187(&Var0);
				func_308(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 33:
				func_222("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_227(uParam0->f_82, 8192))
				{
					if (func_363(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_187(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_308(Var0, uParam1);
						}
						else
						{
							func_315(uParam0, &Var0, 0, 0, 8);
						}
						func_223(&(uParam0->f_82), 8192);
						func_62(uParam0, 16, 0, 0);
						func_62(uParam0, 11, 0, 0);
						func_228(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_227(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_187(&Var0);
					func_315(uParam0, &Var0, 0, 0, 8);
					func_223(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_227(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_187(&Var0);
					func_315(uParam0, &Var0, 0, 0, 8);
					func_223(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 46, 1, 0, 0);
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
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_228(uParam0, 0, 0);
				break;
			
			case 139:
				func_222("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_185(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xD53343AA4FB7DD28(0, 120);
				if (!func_227(uParam0->f_82, 268435456))
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
					func_223(&(uParam0->f_82), 268435456);
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
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0xD53343AA4FB7DD28(0, 100);
				if (!func_227(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_223(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_222("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_228(uParam0, 0, 0);
				func_185(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_37())
				{
					func_222("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_228(uParam0, 0, 0);
					func_185(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_222("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_228(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_227(uParam0->f_81, 1))
				{
					func_305(uParam0, 1, Var0, "_sick1", 8);
					func_13(&(uParam0->f_81), 2);
				}
				else if (!func_227(uParam0->f_81, 2))
				{
					func_305(uParam0, 2, Var0, "_sick2", 8);
					func_13(&(uParam0->f_81), 1);
				}
				func_316(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_227(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_227(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_223(&(uParam0->f_81), 2097152);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_62(uParam0, 16, 0, 0);
				func_316(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_228(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_316(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_316(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_316(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_227(uParam0->f_81, 4))
				{
					func_305(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_227(uParam0->f_81, 8))
				{
					func_305(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_305(uParam0, 8, Var0, "_turns3", 8);
					func_13(&(uParam0->f_81), 4);
					func_13(&(uParam0->f_81), 8);
				}
				func_316(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_304(uParam0))
				{
					func_312(uParam0, Var0, func_314(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_137(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_275(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_318(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_318(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_316(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_227(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 128);
					func_13(&(uParam0->f_83), 256);
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 256);
					func_13(&(uParam0->f_83), 512);
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 512);
					func_13(&(uParam0->f_83), 128);
					func_62(uParam0, 16, 0, 0);
				}
				func_228(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_227(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_187(&Var0);
					}
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 1);
					func_13(&(uParam0->f_83), 2);
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_187(&Var0);
					}
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 4);
					}
					else
					{
						func_13(&(uParam0->f_83), 1);
					}
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_187(&Var0);
					}
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 4);
					func_13(&(uParam0->f_83), 1);
					func_62(uParam0, 16, 0, 0);
				}
				func_316(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_227(uParam0->f_81, 4096))
				{
					func_311(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_227(uParam0->f_81, 8192))
				{
					func_311(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_316(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_227(uParam0->f_81, 16384))
				{
					func_311(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_227(uParam0->f_81, 32768))
				{
					func_311(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_316(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_227(uParam0->f_82, 8))
					{
						func_303(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_227(uParam0->f_82, 16))
					{
						func_303(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_227(uParam0->f_82, 32))
					{
						func_303(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_316(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_228(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_316(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_62(uParam0, 16, 0, 0);
					func_228(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_227(uParam0->f_81, 65536))
				{
					func_311(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_227(uParam0->f_81, 131072))
				{
					func_311(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_228(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_304(uParam0))
				{
					func_312(uParam0, Var0, func_314(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_137(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_227(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 8);
					func_13(&(uParam0->f_83), 16);
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 16);
					func_13(&(uParam0->f_83), 32);
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 64);
					}
					else
					{
						func_13(&(uParam0->f_83), 8);
					}
					func_62(uParam0, 16, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_223(&(uParam0->f_83), 64);
					func_13(&(uParam0->f_83), 8);
					func_62(uParam0, 16, 0, 0);
				}
				func_316(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_37())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_315(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_312(uParam0, Var0, func_314(uParam0, 65));
					func_228(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_37())
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
					func_315(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_312(uParam0, Var0, func_314(uParam0, 66));
					func_228(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_37())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								func_316(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								func_316(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_318(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_316(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_62(uParam0, 16, 0, 0);
								func_228(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_315(uParam0, &Var0, 0, 0, 8);
									func_62(uParam0, 16, 0, 0);
									func_62(uParam0, 11, 0, 0);
									func_228(uParam0, 0, 0);
									if (!iLocal_65)
									{
										iLocal_63 = 1;
									}
								}
								else
								{
									if (!iLocal_64)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_64 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_65 = 1;
									}
									func_187(&Var0);
									func_315(uParam0, &Var0, 0, 0, 8);
									func_62(uParam0, 16, 0, 0);
									func_62(uParam0, 11, 0, 0);
									func_228(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_315(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_185(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_227(uParam0->f_82, 1))
				{
					func_303(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_227(uParam0->f_82, 2))
				{
					func_303(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_227(uParam0->f_82, 4))
				{
					func_303(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_228(uParam0, 0, 0);
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
				func_318(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
				{
					func_137(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_62(uParam0, 16, 0, 0);
				func_316(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_304(uParam0))
				{
					func_312(uParam0, Var0, func_314(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_137(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_302(uParam0, Var0, 8);
				}
				func_316(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_227(uParam0->f_83, 1024))
				{
					func_223(&(uParam0->f_83), 1024);
					func_62(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 2048))
				{
					func_223(&(uParam0->f_83), 2048);
					func_62(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_227(uParam0->f_83, 4096))
				{
					func_223(&(uParam0->f_83), 4096);
					func_62(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_187(&Var0);
					func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_228(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_227(uParam0->f_82, 1024))
				{
					func_303(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_13(&(uParam0->f_82), 2048);
				}
				else if (!func_227(uParam0->f_82, 2048))
				{
					func_303(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_228(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_316(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 52, 1, 0, 0);
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
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
				{
					func_137(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_304(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_315(uParam0, &Var0, 0, 0, 8);
						func_185(uParam0, 52, 1, 0, 0);
						func_62(uParam0, 16, 0, 0);
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
						func_315(uParam0, &Var0, 0, 0, 8);
						func_62(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_62(uParam0, 16, 0, 0);
					func_228(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_316(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_62(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) >= 1)
				{
					func_222("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_228(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_227(uParam0->f_81, 262144))
				{
					func_311(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_227(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_311(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_311(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_316(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_227(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_301(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_227(uParam0->f_82, 134217728))
				{
					func_301(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_316(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 100:
				func_222("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_228(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_187(&Var0);
				}
				func_223(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_187(&Var0);
				}
				func_223(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
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
					func_187(&Var0);
				}
				func_223(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_227(uParam0->f_82, 65536))
				{
					if (func_363(uParam0, 11) > uParam0->f_36)
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
						func_187(&Var0);
						func_308(Var0, uParam1);
						func_223(&(uParam0->f_82), 65536);
						func_62(uParam0, 16, 0, 0);
						func_62(uParam0, 11, 0, 0);
						func_228(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_227(uParam0->f_82, 131072))
				{
					if (func_363(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_187(&Var0);
						func_308(Var0, uParam1);
						func_223(&(uParam0->f_82), 131072);
						func_62(uParam0, 16, 0, 0);
						func_62(uParam0, 11, 0, 0);
						func_228(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_227(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_223(&(uParam0->f_82), 8388608);
				}
				else if (!func_227(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_223(&(uParam0->f_82), 16777216);
				}
				else if (!func_227(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_223(&(uParam0->f_82), 33554432);
				}
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_318(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_187(&Var0);
					func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_315(uParam0, &Var0, 0, 0, 8);
				}
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 11, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 11, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_308(Var0, uParam1);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 11, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_318(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_317(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_185(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_223(&(uParam0->f_81), 2097152);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_187(&Var0);
				func_308(Var0, uParam1);
				func_223(&(uParam0->f_81), 67108864);
				func_62(uParam0, 16, 0, 0);
				func_62(uParam0, 11, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_227(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_311(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
					{
						func_137(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_185(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_227(uParam0->f_81, 268435456))
				{
					func_311(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_185(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_222("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_228(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_227(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_311(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
						{
							func_137(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_311(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_185(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_222("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_228(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_275(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_62(uParam0, 16, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_227(uParam0->f_81, 16777216))
				{
					func_311(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_228(uParam0, 0, 0);
				break;
			
			case 88:
				func_222("TAXI_TIEFLEE", 7500, 1);
				func_228(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_227(uParam0->f_98, 536870912))
				{
					func_222("TAXI_OBJ_CYI_1B", 7500, 1);
					func_223(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_228(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_187(&Var0);
				func_315(uParam0, &Var0, 0, 0, 8);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_315(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 0, 0);
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
				func_315(uParam0, &Var0, 0, 0, 8);
				func_228(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_315(uParam0, &Var0, 1, 0, 8);
				func_185(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_222("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_185(uParam0, 0, 0, 0, 0);
				func_228(uParam0, 0, 0);
				break;
			}
	}
}

void func_301(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_223(&(uParam0->f_82), iParam1);
	func_62(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_187(&Param2);
	}
	func_275(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_302(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_227(uParam0->f_82, 64))
	{
		func_223(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_227(uParam0->f_82, 128))
	{
		func_223(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xD53343AA4FB7DD28(1, 3), 24);
	}
	func_317(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_62(uParam0, 16, 0, 0);
}

void func_303(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_223(&(uParam0->f_82), iParam1);
	func_62(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_187(&Param2);
		}
	}
	func_275(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_304(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_305(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_223(&(uParam0->f_81), iParam1);
	func_62(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_275(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_306(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_307(*uParam0, iVar1))
		{
			func_224(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_187(sParam2);
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

bool func_307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_308(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_309(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_223(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_309(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xCA042B6957743895(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_310(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_222("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_222("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_222("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_222("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_222("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_222("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_222("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_222("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_222("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_222("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_222("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_222("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_222("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_311(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_223(&(uParam0->f_81), iParam1);
	func_62(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_187(&Param2);
	}
	func_275(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_312(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_62(uParam0, 16, 0, 0);
	func_62(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x84A2DD9AC37C35C1(uParam0->f_3))
	{
		unk_0xA018A12E5C5C2FA6(uParam0->f_3, &cParam1, func_313(uParam0));
	}
}

char* func_313(var uParam0)
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

char* func_314(var uParam0, int iParam1)
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

int func_315(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_62(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_62(uParam0, 17, 0f, 1);
	}
	func_228(uParam0, iParam2, 0);
	return func_275(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_316(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_227(*uParam2, 2))
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
		if (func_227(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_227(*uParam2, 4))
		{
			if (!func_227(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_227(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_227(*uParam2, 512))
		{
			if (!func_227(*uParam2, 4096))
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
		if (func_227(*uParam2, 16))
		{
			if (!func_227(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_227(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_227(*uParam2, 64))
		{
			if (!func_227(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_227(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_227(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_227(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_227(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_227(*uParam2, 8192))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_227(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_227(*uParam2, 16384))
		{
			if (func_227(*uParam2, 4194304))
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
		if (func_227(*uParam2, 32768))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_227(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_227(*uParam2, 65536))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_227(*uParam2, 131072))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_227(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_227(*uParam2, 262144))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_227(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_227(*uParam2, 524288))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_227(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_227(*uParam2, 1048576))
		{
			if (func_227(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_227(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_227(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_227(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_227(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_227(*uParam2, 67108864))
		{
			if (func_227(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_227(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_227(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_227(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_227(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_317(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_283(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_276(sParam2, iParam4, 0);
}

void func_318(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_307(*uParam0, iVar1))
		{
			func_224(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_187(sParam2);
				}
				else
				{
					func_187(sParam2);
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

int func_319(var uParam0)
{
	return uParam0->f_416;
}

int func_320(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (func_159(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	if (func_37())
	{
		return 1;
	}
	if (func_151(uParam0, 17))
	{
		return 1;
	}
	if (func_151(uParam0, 14))
	{
		return 1;
	}
	if (func_293(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_322(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_151(uParam0, 9));
}

void func_323(var uParam0)
{
	if (func_151(uParam0, 17))
	{
		if (!func_151(uParam0, 14))
		{
			if (!func_293(uParam0))
			{
				if (!func_37())
				{
					func_148(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_324(var uParam0)
{
	return uParam0->f_117;
}

void func_325(var uParam0, var uParam1, bool bParam2)
{
	if (!func_227(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xCA042B6957743895(&(uParam0->f_124)) && func_37())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_37())
				{
					StringCopy(&(uParam0->f_124), func_295(), 24);
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

void func_326(var uParam0)
{
	if (!func_227(uParam0->f_98, 2))
	{
		if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
		{
			if (func_123(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x01C7B9B38428AEB6(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_223(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_327(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_4))
		{
			if (Local_342.f_0 > 0 && !func_307(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342.f_0 - 1))
				{
					if (func_307(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_307(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_224(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = unk_0x9CD27B0045628463();
							}
						}
						else
						{
							func_14(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_307(Local_342.f_1[iVar0 /*4*/], 4) && !func_307(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_224(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_274(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_328(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_151(uParam0, 27))
	{
		func_149(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_363(uParam0, 27) > 5f)
	{
		if (func_356(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_62(uParam0, 27, 0, 0);
			func_62(uParam0, 10, 0, 0);
			func_354(uParam0, &uVar0, uParam1);
		}
		func_350(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_329(uParam0);
	}
	if ((((!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()) && (unk_0xA7A932170592B50E(*uParam0) && !unk_0xDFB2B516207D3534(*uParam0))) && (unk_0xA7A932170592B50E(uParam0->f_1) && !unk_0xDFB2B516207D3534(uParam0->f_1))) && !unk_0x7984C03AA5CC2F41()) && !func_37())
	{
		if (func_363(uParam0, 26) > 10f)
		{
			func_148(uParam0, 26, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		}
	}
	else if (func_151(uParam0, 26))
	{
		func_148(uParam0, 26, 0);
	}
	return 0;
}

void func_329(var uParam0)
{
	if (!func_349(uParam0->f_429))
	{
		uParam0->f_429 = func_348();
		func_339(&(uParam0->f_429), 0, 0, unk_0xD53343AA4FB7DD28(4, 7), 0, 0, 0);
	}
	else if (func_330(uParam0->f_429))
	{
		func_274(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_330(int iParam0)
{
	return func_331(func_348(), iParam0);
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_349(iParam1) || !func_349(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	iVar1 = func_334(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_333(iParam0);
	iVar1 = func_333(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_332(iParam0);
	iVar1 = func_332(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_333(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_334(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_335(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_336(int iParam0)
{
	return iParam0 & 15;
}

var func_337(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_338(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_338(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_339(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_337(*uParam0);
	iVar1 = func_336(*uParam0);
	iVar2 = func_335(*uParam0);
	iVar3 = func_334(*uParam0);
	iVar4 = func_333(*uParam0);
	iVar5 = func_332(*uParam0);
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
	iVar6 = func_347(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_347(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_340(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_346(uParam0, iParam1);
	func_345(uParam0, iParam2);
	func_344(uParam0, iParam3);
	func_343(uParam0, iParam4);
	func_342(uParam0, iParam5);
	func_341(uParam0, iParam6);
}

void func_341(var uParam0, int iParam1)
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

void func_342(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_343(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_336(*uParam0);
	iVar1 = func_337(*uParam0);
	if (iParam1 < 1 || iParam1 > func_347(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_344(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_347(int iParam0, int iParam1)
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

int func_348()
{
	var uVar0;
	
	func_346(&uVar0, unk_0x494E97C2EF27C470());
	func_345(&uVar0, unk_0x13D2B8ADD79640F2());
	func_344(&uVar0, unk_0x25223CA6B4D20B7F());
	func_343(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_342(&uVar0, unk_0xBBC72712E80257A1());
	func_341(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

int func_349(int iParam0)
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
	iVar0 = func_332(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_333(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_334(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_337(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_336(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_335(iParam0);
	if (iVar5 < 1 || iVar5 > func_347(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_350(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_353()) && !func_152(uParam0)) || ((uParam0->f_411 != 9 && func_352(uParam0, 1)) && !func_152(uParam0)))
		{
			uVar0 = func_351(uParam0->f_4);
			unk_0xB736A491E64A32CF(&uVar0);
			uParam0->f_4 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			unk_0xAD738C3085FE7E11(uParam0->f_4, true, false);
			func_175(uParam0);
			func_166(uParam0, 0);
		}
	}
}

var func_351(var uParam0)
{
	return uParam0;
}

int func_352(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				iVar1 = unk_0x9F47B058362C84B5(iVar0);
				bVar2 = func_214(iVar0);
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
				if (unk_0x7F6DB52EEFC96DF8(iVar1))
				{
					if (unk_0xBB40DD2270B65366(iVar0, -1) == unk_0xD80958FC74E988A6())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xA7C4F2C6E744A550(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_227(uParam0->f_44, 64))
					{
						func_225("TX_VIP_DMGD", -1);
						if (func_249("TX_VIP_DMGD"))
						{
							func_223(&(uParam0->f_44), 64);
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_227(uParam0->f_44, 32))
					{
						func_225("TX_VIP_CAR", -1);
						if (func_249("TX_VIP_CAR"))
						{
							func_223(&(uParam0->f_44), 32);
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_227(uParam0->f_44, 16))
					{
						func_225("TX_VIP_SMALL", -1);
						if (func_249("TX_VIP_SMALL"))
						{
							func_223(&(uParam0->f_44), 16);
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

int func_353()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) == unk_0xD80958FC74E988A6())
				{
					if (unk_0x423E8DE37D934D89(iVar0, func_12()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_354(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_355(uParam0, 0, 1))
			{
				func_274(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_355(uParam0, 0, 4))
			{
				func_274(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_355(uParam0, 0, 8))
			{
				func_274(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_355(uParam0, 1, 1))
			{
				func_274(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_355(uParam0, 0, 1))
			{
				func_274(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_227(*uParam2, 2) && func_134(uParam0))
			{
				func_274(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_355(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
	{
		if (!unk_0xE31C2C72B8692B64(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_185(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_185(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_356(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xD80958FC74E988A6();
	if (!unk_0x5F9532F3B5CC2551(iVar0) && !unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (!func_227(*uParam2, 1))
		{
			if (func_362(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_227(*uParam2, 2))
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_227(*uParam2, 4))
		{
			if (func_360(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_227(*uParam2, 8))
		{
			if (func_359(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_227(*uParam2, 128);
		if (bParam4)
		{
			if (func_357(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_227(*uParam2, 16))
		{
			if (func_357(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (iParam7 && unk_0xC86D67D52A707CF8(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_357(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = unk_0xEEF059FAD016D209(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = unk_0xEEF059FAD016D209(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0xC86D67D52A707CF8(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(iVar1))
		{
			if (unk_0xC86D67D52A707CF8(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			if (unk_0x9A497FE2DF198913(iParam0))
			{
				if (unk_0x9B128DC36C1E04CF(iParam0) == unk_0xD80958FC74E988A6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x20B60995556D004F(iParam0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFD4CCDBCC59941B7(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF9800AA1A771B000(iParam0))
		{
			return 1;
		}
	}
	if (func_358(unk_0xD80958FC74E988A6(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x47E4E977581C5B55(iParam0) && func_164(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iParam0, false)))
			{
				return 1;
			}
		}
		else if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iParam0))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(iParam1))
		{
			if (unk_0xC86D67D52A707CF8(iParam1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_358(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x34616828CD07F1A1(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x3FEF770D40960D5A(iParam1, true)) < 2.5f)
			{
				if (unk_0xD71649DB0A545AA3(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_359(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x475768A975D5AD17(iParam0, 4))
	{
		if (unk_0x34616828CD07F1A1(iParam0) && !unk_0x65F0C5AE05943EC7(iParam0))
		{
			if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_360(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	if (unk_0x3F2023999AD51C1F(Var0, 4f, true))
	{
		return 1;
	}
	if (unk_0x9870ACFB89A90995(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (unk_0x475768A975D5AD17(iParam0, 2))
	{
		if (unk_0x34616828CD07F1A1(iParam0))
		{
			if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(iParam1), iParam0, 120f) && unk_0xFCDFF7B72D23A1AC(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x997ABD671D25CA0B(unk_0x04A2A40C73395041(iParam1), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0x04A2A40C73395041(iParam1), false);
			}
			if (unk_0xC70B5FAE151982D8(iParam0) || func_361(iVar3))
			{
				if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(iParam1), iParam0, 120f) && unk_0xFCDFF7B72D23A1AC(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x5270A8FBC098C3F8((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (unk_0xBB40DD2270B65366(iParam0, -1) != 0)
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_165(unk_0xD80958FC74E988A6(), iParam0, 1) < 40f)
						{
							if (unk_0x2975C866E6713290(unk_0x4F8644AF03D0E0D6(), &iVar1))
							{
								if ((unk_0x6AC7003FA6E5575E(iVar1) && unk_0x4B53F92932ADFAC0(iVar1) == iParam0) || (unk_0x524AC5ECEA15343E(iVar1) && unk_0x04A2A40C73395041(iVar1) == unk_0xBB40DD2270B65366(iParam0, -1)))
								{
									if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0xF3A21BCD95725A4A(0, 24)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xF3A21BCD95725A4A(0, 69)))
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

int func_362(int iParam0, var uParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0))
			{
				if (unk_0xD71649DB0A545AA3(iParam0, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_164(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9CD27B0045628463();
						}
						else if ((unk_0x9CD27B0045628463() - uParam1->f_1) > uParam1->f_3)
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

float func_363(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_150(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_86(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_364()
{
	func_365(&Local_858);
	func_407();
}

void func_365(var uParam0)
{
	func_2(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_61(2);
	}
}

int func_366(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_37() && func_363(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x5F9532F3B5CC2551(uParam0->f_3))
		{
			if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
			{
				if (unk_0xA3EE4A07279BB9DB(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_49(uParam0) == 0 || func_307(uParam0->f_85, 32))
					{
						if (!unk_0x5721B434AD84D57A(uParam0->f_4))
						{
							func_119(uParam0, 4160, 0);
						}
						else
						{
							func_119(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_119(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_119(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_119(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x9CD27B0045628463() % 1000) < 50)
	{
	}
	return 0;
}

void func_367(var uParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_8))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_8));
	}
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_9))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_9));
	}
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_10))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_10));
	}
}

int func_368(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_369()
{
	Local_342.f_0 = 0;
	func_385(72758, 72733, 1);
	func_385(72494, 72472, 1);
	func_385(72411, 72386, 1);
	func_385(72315, 72291, 1);
	func_385(72181, 72160, 1);
	func_385(72122, 72097, 1);
	func_385(71955, 71933, 1);
}

int func_370(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_371(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_4))
	{
		if (func_373(uParam0->f_4))
		{
			func_372(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_372(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_373(int iParam0)
{
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 1;
	}
	if (unk_0xC45D23BAF168AAB8(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x679BE1DAF71DA874(iParam0, 0, 40000) || unk_0x679BE1DAF71DA874(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_374(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_375(var uParam0)
{
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		if (func_307(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_376(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_372(uParam0, 11);
	return 1;
}

int func_377(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_4))
	{
		if (unk_0xCFB0A0D8EDD145A3(uParam0->f_4) && !unk_0xB104CD1BABF302E2(uParam0->f_4))
		{
			if (!func_151(uParam0, 25))
			{
				func_62(uParam0, 25, 0, 0);
			}
			else if (func_363(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_151(uParam0, 25))
		{
			func_148(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_378(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_379(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		if (unk_0x57E4C39DE5EE8470(uParam0->f_4))
		{
			if (unk_0x679BE1DAF71DA874(uParam0->f_4, 0, 40000) || unk_0x679BE1DAF71DA874(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_380(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_381(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(uParam0->f_4))
	{
		if (unk_0x4C241E39B23DF959(uParam0->f_4, false))
		{
			if (unk_0x5721B434AD84D57A(uParam0->f_4))
			{
				if (func_307(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_382(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_383(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_4))
	{
		if (func_384(uParam0->f_4))
		{
			func_372(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 1;
	}
	if (unk_0xC45D23BAF168AAB8(iParam0) == 0f)
	{
		if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
		}
		return 1;
	}
	else if (unk_0x679BE1DAF71DA874(iParam0, 0, 40000) || unk_0x679BE1DAF71DA874(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_385(int iParam0, int iParam1, bool bParam2)
{
	if (Local_342.f_0 >= 16)
	{
		Local_342.f_0 = 16;
		return;
	}
	Local_342.f_1[Local_342.f_0 /*4*/] = 0;
	func_224(&(Local_342.f_1[Local_342.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_224(&(Local_342.f_1[Local_342.f_0 /*4*/]), 2);
	}
	Local_342.f_1[Local_342.f_0 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342.f_0 /*4*/].f_3 = iParam1;
	Local_342.f_0++;
}

int func_386(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_274(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_387(var uParam0)
{
	if (unk_0x7239B21A38F536BA(uParam0->f_3))
	{
		if ((unk_0x84A2DD9AC37C35C1(uParam0->f_3) || unk_0x5F9532F3B5CC2551(uParam0->f_3)) || unk_0x28D3FED7190D3A0B(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_388()
{
	Local_189[5 /*10*/] = 5;
	Local_189[5 /*10*/].f_1 = 0;
	Local_189[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_189[5 /*10*/].f_9 = 78;
	Local_189[0 /*10*/] = 5;
	Local_189[0 /*10*/].f_1 = 0;
	Local_189[0 /*10*/].f_2 = "TX_AIR_N";
	Local_189[0 /*10*/].f_9 = 76;
	Local_189[2 /*10*/] = 5;
	Local_189[2 /*10*/].f_1 = 0;
	Local_189[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_189[2 /*10*/].f_9 = 21;
	Local_189[1 /*10*/] = 10;
	Local_189[1 /*10*/].f_1 = 0;
	Local_189[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_189[1 /*10*/].f_9 = 71;
	Local_189[4 /*10*/] = 10;
	Local_189[4 /*10*/].f_1 = 0;
	Local_189[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_189[4 /*10*/].f_9 = 79;
	Local_189[6 /*10*/] = 10;
	Local_189[6 /*10*/].f_1 = 0;
	Local_189[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_189[6 /*10*/].f_9 = 80;
	Local_189[9 /*10*/] = 15;
	Local_189[9 /*10*/].f_1 = 0;
	Local_189[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_189[9 /*10*/].f_9 = 82;
	Local_189[8 /*10*/] = 15;
	Local_189[8 /*10*/].f_1 = 0;
	Local_189[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_189[8 /*10*/].f_9 = 72;
	Local_189[7 /*10*/] = 15;
	Local_189[7 /*10*/].f_1 = 0;
	Local_189[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_189[7 /*10*/].f_9 = 74;
	Local_189[11 /*10*/] = 5;
	Local_189[11 /*10*/].f_1 = 0;
	Local_189[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_189[11 /*10*/].f_9 = 70;
	Local_189[12 /*10*/] = 5;
	Local_189[12 /*10*/].f_1 = 0;
	Local_189[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_189[12 /*10*/].f_9 = 69;
	Local_189[13 /*10*/] = 10;
	Local_189[13 /*10*/].f_1 = 0;
	Local_189[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_189[13 /*10*/].f_9 = 67;
	Local_189[14 /*10*/] = 10;
	Local_189[14 /*10*/].f_1 = 0;
	Local_189[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_189[14 /*10*/].f_9 = 75;
}

void func_389(var uParam0)
{
	func_390();
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

void func_390()
{
	Local_408[0 /*3*/] = { -939.6133f, -1523.37f, 4.1764f };
	Local_408[1 /*3*/] = { -1161.53f, -1492.471f, 3.3139f };
	Local_408[2 /*3*/] = { -1037.172f, -2730.923f, 19.1697f };
	Local_408[3 /*3*/] = { -1204.591f, -1377.74f, 3.1844f };
	Local_408[4 /*3*/] = { -939.6133f, -1523.37f, 4.1764f };
	Local_408[5 /*3*/] = { -91.6341f, -1328.155f, 28.3373f };
	Local_408[6 /*3*/] = { -900.3735f, -2690.014f, 12.9447f };
	Local_408[7 /*3*/] = { -1012.786f, -2468.602f, 12.8384f };
	Local_433[0 /*3*/] = { 87.0014f, -1402.448f, 28.2549f };
	Local_433[1 /*3*/] = { 146.5773f, -1426.882f, 28.2915f };
	Local_433[2 /*3*/] = { 435.1445f, -1462.779f, 28.2915f };
	Local_433[3 /*3*/] = { 135.1209f, -1302.604f, 28.1936f };
	Local_433[4 /*3*/] = { 112.2743f, -1947.214f, 19.6826f };
	Local_433[5 /*3*/] = { 65.3804f, -1568.944f, 28.6028f };
	Local_433[6 /*3*/] = { 137.8282f, -1724.227f, 28.2079f };
	Local_433[7 /*3*/] = { 132.9427f, -2009.911f, 17.2055f };
	Local_433[8 /*3*/] = { -184.5559f, -1438.031f, 30.3049f };
	Local_433[9 /*3*/] = { 153.5036f, -1451.892f, 28.1418f };
	Local_433[10 /*3*/] = { 50.2007f, -1379.729f, 32f };
	Local_433[11 /*3*/] = { -297.4216f, -1848.188f, 24.7217f };
	Local_470[0 /*3*/] = { 768.2622f, -2371.747f, 21.6783f };
	Local_470[1 /*3*/] = { 1188.841f, -3249.505f, 5.0276f };
	Local_470[2 /*3*/] = { 770.0794f, -2991.976f, 5.0203f };
	Local_470[3 /*3*/] = { 946.5765f, -2453.436f, 27.5512f };
	Local_470[4 /*3*/] = { 957.6567f, -2097.351f, 29.6646f };
	Local_470[5 /*3*/] = { 926.1091f, -1749.836f, 29.9898f };
	Local_489[0 /*3*/] = { -2075.602f, -330.3965f, 12.3162f };
	Local_489[1 /*3*/] = { -1994.446f, -545.3368f, 10.7213f };
	Local_489[2 /*3*/] = { -3171.321f, 918.0819f, 13.4239f };
	Local_489[3 /*3*/] = { -1918.183f, -370.5667f, 48.1919f };
	Local_489[4 /*3*/] = { -1938.766f, -441.2331f, 18.7351f };
	Local_505[0 /*3*/] = { -1392.673f, -179.0173f, 46.3472f };
	Local_505[1 /*3*/] = { -1428.562f, -195.809f, 46.4109f };
	Local_505[2 /*3*/] = { -385.7066f, -403.3985f, 30.5014f };
	Local_505[3 /*3*/] = { -486.7284f, -389.6814f, 33.2888f };
	Local_505[4 /*3*/] = { -583.0761f, -446.2154f, 33.299f };
	Local_505[5 /*3*/] = { -496.0706f, 236.211f, 82.0245f };
	Local_505[6 /*3*/] = { -536.2413f, -679.3174f, 32.2419f };
	Local_505[7 /*3*/] = { -1156.046f, -1418.88f, 3.7969f };
	Local_505[8 /*3*/] = { -856.6715f, -1148.855f, 5.2178f };
	Local_505[9 /*3*/] = { -696.4865f, -823.45f, 22.8254f };
	Local_505[10 /*3*/] = { -1142.855f, -933.465f, 1.6658f };
	Local_505[11 /*3*/] = { -1281.353f, -882.9135f, 10.3152f };
	Local_505[12 /*3*/] = { -1099.791f, -1702.432f, 3.37f };
	Local_505[13 /*3*/] = { -1270.749f, -1159.347f, 5.2547f };
	Local_505[14 /*3*/] = { -1130.542f, -1195.19f, 1.2757f };
	Local_505[15 /*3*/] = { -1076.003f, -1011.876f, 1.1503f };
	Local_505[16 /*3*/] = { -1035.184f, -1252.296f, 5.197f };
	Local_505[17 /*3*/] = { -1006.773f, -1106.055f, 1.1484f };
	Local_505[18 /*3*/] = { -1847.2f, -602.4301f, 10.4091f };
	Local_505[19 /*3*/] = { -597.1105f, -304.0766f, 33.9632f };
	Local_566[0 /*3*/] = { -272.7684f, 248.4368f, 89.1359f };
	Local_566[1 /*3*/] = { 56.3248f, 288.189f, 109.281f };
	Local_566[2 /*3*/] = { 415.2359f, 103.9472f, 99.8247f };
	Local_566[3 /*3*/] = { 394.9993f, -200.0683f, 58.3083f };
	Local_566[4 /*3*/] = { 253.857f, -378.6688f, 43.6252f };
	Local_566[5 /*3*/] = { 223.6173f, -50.8911f, 68.2267f };
	Local_566[6 /*3*/] = { 544.0235f, 202.5245f, 100.61f };
	Local_566[7 /*3*/] = { -264.7876f, -1062.839f, 24.8463f };
	Local_566[8 /*3*/] = { -234.3063f, -732.1405f, 32.5016f };
	Local_566[9 /*3*/] = { -84.3683f, 241.2898f, 99.4509f };
	Local_566[10 /*3*/] = { 346.413f, -960.6713f, 28.4297f };
	Local_600[0 /*3*/] = { 898.7972f, 56.0888f, 78.0298f };
	Local_600[1 /*3*/] = { 832.3909f, -191.5166f, 71.6695f };
	Local_600[2 /*3*/] = { 790.4477f, -734.7306f, 26.5794f };
	Local_610[0 /*3*/] = { 2590.337f, -293.4442f, 92.0786f };
	Local_610[1 /*3*/] = { 2531.404f, -600.4139f, 63.2007f };
	Local_610[2 /*3*/] = { 2604.217f, 375.1005f, 107.472f };
	Local_620[0 /*3*/] = { -3233.263f, 953.5733f, 12.2187f };
	Local_620[1 /*3*/] = { -3078.346f, 675.666f, 12.9159f };
	Local_620[2 /*3*/] = { -2647.83f, 1504.821f, 117.968f };
	Local_620[3 /*3*/] = { -2564.214f, 2318.03f, 32.2153f };
	Local_633[0 /*3*/] = { -1314.019f, 2483.44f, 22.774f };
	Local_633[1 /*3*/] = { -409.0888f, 1172.897f, 324.6412f };
	Local_633[2 /*3*/] = { -1506.186f, 1473.57f, 116.8286f };
	Local_633[3 /*3*/] = { -518.6162f, 1995.393f, 205.0397f };
	Local_633[4 /*3*/] = { -742.0004f, 2320.376f, 70.661f };
	Local_633[5 /*3*/] = { -1851.372f, -602.5151f, 10.4741f };
	Local_633[6 /*3*/] = { -1666.413f, -538.9609f, 34.2561f };
	Local_655[0 /*3*/] = { -139.8096f, 1872.378f, 197.166f };
	Local_655[1 /*3*/] = { 695.1385f, 2297.118f, 49.9406f };
	Local_655[2 /*3*/] = { 167.7863f, 782.6042f, 208.0805f };
	Local_665[0 /*3*/] = { 1498.546f, 774.8596f, 76.4493f };
	Local_665[1 /*3*/] = { 1309.908f, 1090.133f, 104.561f };
	Local_665[2 /*3*/] = { 1510.705f, 1712.529f, 109.2625f };
	Local_665[3 /*3*/] = { 1070.393f, 2038.015f, 52.5529f };
	Local_678[0 /*3*/] = { 2509.309f, 1601.622f, 30.0754f };
	Local_678[1 /*3*/] = { 2546.551f, 1971.305f, 19.0362f };
	Local_685[0 /*3*/] = { -2339.021f, 3424.616f, 28.7394f };
	Local_685[1 /*3*/] = { -2494.466f, 3644.748f, 12.9216f };
	Local_685[2 /*3*/] = { -2223.443f, 4335.251f, 48.4857f };
	Local_685[3 /*3*/] = { -2369.652f, 4033.362f, 27.9193f };
	Local_698[0 /*3*/] = { -1578.525f, 3005.025f, 32.3629f };
	Local_698[1 /*3*/] = { -1441.716f, 4224.607f, 49.0816f };
	Local_698[2 /*3*/] = { -637.3727f, 4014.45f, 124.2407f };
	Local_698[3 /*3*/] = { -1092.599f, 2696.029f, 18.9957f };
	Local_698[4 /*3*/] = { -482.845f, 2853.052f, 32.7909f };
	Local_698[5 /*3*/] = { -1280.543f, 2543.44f, 17.3096f };
	Local_698[6 /*3*/] = { -435.9443f, 3039.766f, 27.85744f };
	Local_720[0 /*3*/] = { 322.4791f, 2624.685f, 43.4903f };
	Local_720[1 /*3*/] = { -118.0555f, 2831.105f, 49.9236f };
	Local_720[2 /*3*/] = { 8.32642f, 3036.625f, 39.93201f };
	Local_720[3 /*3*/] = { 486.82f, 3094.723f, 39.68279f };
	Local_720[4 /*3*/] = { 355.6632f, 3465.564f, 34.46225f };
	Local_720[5 /*3*/] = { 73.93981f, 3597.899f, 38.72102f };
	Local_720[6 /*3*/] = { -223.5336f, 3914.409f, 36.4796f };
	Local_742[0 /*3*/] = { 914.0446f, 3641.2f, 31.4356f };
	Local_742[1 /*3*/] = { 1713.807f, 3786.299f, 33.6656f };
	Local_742[2 /*3*/] = { 1798.266f, 3773.496f, 32.6142f };
	Local_742[3 /*3*/] = { 2008.204f, 3771.954f, 31.1457f };
	Local_742[4 /*3*/] = { 1860.152f, 3675.656f, 32.669f };
	Local_742[5 /*3*/] = { 1974.862f, 3855.369f, 31.162f };
	Local_742[6 /*3*/] = { 1841.707f, 3799.654f, 32.219f };
	Local_742[7 /*3*/] = { 1775.659f, 3335.493f, 40.2247f };
	Local_767[0 /*3*/] = { 2506.683f, 4104.038f, 37.3903f };
	Local_767[1 /*3*/] = { 2902.443f, 4428.438f, 47.2892f };
	Local_767[2 /*3*/] = { 2338.391f, 3146.762f, 47.1288f };
	Local_767[3 /*3*/] = { 2756.396f, 3396.395f, 55.5796f };
	Local_767[4 /*3*/] = { 2560.313f, 2619.59f, 36.7532f };
	Local_783[0 /*3*/] = { -1499.354f, 4980.817f, 61.8513f };
	Local_783[1 /*3*/] = { -686.7758f, 5841.241f, 15.7987f };
	Local_783[2 /*3*/] = { -547.5048f, 5405.471f, 64.2441f };
	Local_783[3 /*3*/] = { -411.6347f, 6050.651f, 30.4916f };
	Local_783[4 /*3*/] = { -860.8704f, 5421.505f, 33.9464f };
	Local_799[0 /*3*/] = { 331.2503f, 6586.893f, 27.8962f };
	Local_799[1 /*3*/] = { -37.7542f, 6319.74f, 30.3761f };
	Local_799[2 /*3*/] = { -115.5213f, 6456.377f, 30.4546f };
	Local_799[3 /*3*/] = { -145.1629f, 6442.393f, 30.4404f };
	Local_799[4 /*3*/] = { -46.1561f, 6475.15f, 30.4923f };
	Local_799[5 /*3*/] = { 533.2067f, 6537.78f, 26.6048f };
	Local_818[0 /*3*/] = { 1592.815f, 6427.924f, 24.2329f };
	Local_818[1 /*3*/] = { 1664.341f, 4845.467f, 41.0121f };
	Local_818[2 /*3*/] = { 1705.225f, 4713.161f, 41.4366f };
	Local_818[3 /*3*/] = { 1731.809f, 6387.005f, 33.5953f };
	Local_818[4 /*3*/] = { 1082.483f, 6503.538f, 20.0265f };
	Local_818[5 /*3*/] = { 1996.321f, 5148.716f, 44.2356f };
	Local_837[0 /*3*/] = { 2172.52f, 4759.795f, 40.0044f };
	Local_837[1 /*3*/] = { 2451.021f, 4953.289f, 43.9633f };
	Local_837[2 /*3*/] = { 2245.155f, 5562.862f, 51.4367f };
	Local_837[3 /*3*/] = { 2456.187f, 4596.741f, 35.8278f };
	Local_837[4 /*3*/] = { 3336.815f, 5464.448f, 18.5259f };
	Local_837[5 /*3*/] = { 3491.209f, 4707.075f, 50.1144f };
}

void func_391()
{
	iLocal_1563 = func_406();
	Local_858.f_145 = func_405(iLocal_1563);
	func_404(1);
	func_177();
	func_403(&(Local_858.f_244));
	func_402(&Local_858);
	Local_858.f_411 = 9;
	if (!func_227(Global_97173.f_17318, 4))
	{
		func_223(&(Global_97173.f_17318), 4);
		unk_0x0FC2D89AC25A5814(func_12(), true);
	}
	func_397(&Local_858);
	func_396(9);
	func_394(&Local_858);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
	Local_858.f_428 = func_393();
	func_392(&Local_858, 3, 6);
	Local_858.f_6 = 1.45f;
}

void func_392(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_393()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_82(unk_0xD80958FC74E988A6());
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

void func_394(var uParam0)
{
	switch (func_49(uParam0))
	{
		case 0:
			func_395(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_395(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_395(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_395(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_395(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_395(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_395(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_395(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_395(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_395(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_395(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_396(int iParam0)
{
	Global_97173.f_17318.f_39[iParam0]++;
}

void func_397(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_401(uParam0, 3);
			func_400(uParam0, 14);
			break;
		
		case 1:
			func_401(uParam0, 14);
			func_400(uParam0, 8);
			break;
		
		case 2:
			func_401(uParam0, 8);
			func_400(uParam0, 7);
			break;
		
		case 3:
			func_401(uParam0, 15);
			func_400(uParam0, 6);
			break;
		
		case 4:
			func_401(uParam0, 0);
			func_400(uParam0, 3);
			break;
		
		case 5:
			func_401(uParam0, 6);
			func_400(uParam0, 7);
			break;
		
		case 6:
			func_401(uParam0, 8);
			func_400(uParam0, 15);
			break;
		
		case 7:
			func_401(uParam0, 8);
			func_400(uParam0, 14);
			break;
		
		case 8:
			func_401(uParam0, 7);
			func_400(uParam0, 15);
			break;
		
		case 9:
			func_401(uParam0, unk_0xD53343AA4FB7DD28(0, 17));
			iVar0 = func_399((uParam0->f_418.f_2 + unk_0xD53343AA4FB7DD28(1, 17)), 0, 16);
			func_400(uParam0, iVar0);
			func_398(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_398(var uParam0)
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

int func_399(int iParam0, int iParam1, int iParam2)
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

void func_400(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_401(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_402(var uParam0)
{
	uParam0->f_2 = unk_0xD80958FC74E988A6();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_121() };
	uParam0->f_17 = { func_121() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_148(uParam0, 32, 0);
}

void func_403(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_82(unk_0xD80958FC74E988A6());
	if (iVar0 == 0)
	{
		func_230(uParam0, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_230(uParam0, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_230(uParam0, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_230(uParam0, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_230(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96229, unk_0x442E0A7EDE4A738A(), 24);
		Global_96223 = 1;
	}
	else
	{
		StringCopy(&Global_96229, "NULL", 24);
		Global_96223 = 0;
	}
}

char* func_405(int iParam0)
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

int func_406()
{
	switch (unk_0xD53343AA4FB7DD28(0, 5))
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

void func_407()
{
	if (unk_0x1077788E268557C2())
	{
		func_8(9);
	}
	unk_0x1090044AD1DA76FA();
}


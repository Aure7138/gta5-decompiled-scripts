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
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109[65];
	float fLocal_305 = 0f;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_315 = { 0, 0, 0 } ;
	float fLocal_318 = 0f;
	var uLocal_319 = 0;
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
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	float fLocal_339 = 0f;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	struct<3> Local_353[65];
	var uLocal_549[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_615[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	var uLocal_629[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	struct<68> Local_642 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_710 = 0;
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
	struct<533> Local_730 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1263 = -1;
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
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = -1082130432;
	var uLocal_1286 = 3;
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
	var uLocal_1302 = -1;
	var uLocal_1303 = 0;
	var uLocal_1304 = -1;
	var uLocal_1305 = -1;
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
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1082130432;
	var uLocal_1328 = 3;
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
	var uLocal_1344 = -1;
	var uLocal_1345 = 0;
	var uLocal_1346 = -1;
	var uLocal_1347 = -1;
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
	var uLocal_1369 = -1082130432;
	var uLocal_1370 = 3;
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
	var uLocal_1386 = -1;
	var uLocal_1387 = 0;
	var uLocal_1388 = -1;
	var uLocal_1389 = -1;
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
	var uLocal_1411 = -1082130432;
	var uLocal_1412 = 3;
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
	var uLocal_1428 = -1;
	var uLocal_1429 = 0;
	var uLocal_1430 = -1;
	var uLocal_1431 = -1;
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
	var uLocal_1453 = -1082130432;
	var uLocal_1454 = 3;
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
	var uLocal_1470 = -1;
	var uLocal_1471 = 0;
	var uLocal_1472 = -1;
	var uLocal_1473 = -1;
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
	var uLocal_1495 = -1082130432;
	var uLocal_1496 = 3;
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
	var uLocal_1512 = -1;
	var uLocal_1513 = 0;
	var uLocal_1514 = -1;
	var uLocal_1515 = -1;
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
	var uLocal_1537 = -1082130432;
	var uLocal_1538 = 3;
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
	var uLocal_1554 = -1;
	var uLocal_1555 = 0;
	var uLocal_1556 = -1;
	var uLocal_1557 = -1;
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
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = -1082130432;
	var uLocal_1580 = 3;
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
	var uLocal_1596 = -1;
	var uLocal_1597 = 0;
	var uLocal_1598 = -1;
	var uLocal_1599 = -1;
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
	var uLocal_1621 = -1082130432;
	var uLocal_1622 = 3;
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
	var uLocal_1638 = -1;
	var uLocal_1639 = 0;
	var uLocal_1640 = -1;
	var uLocal_1641 = -1;
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
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = -1082130432;
	var uLocal_1664 = 3;
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
	var uLocal_1679 = 0;
	var uLocal_1680 = -1;
	var uLocal_1681 = 0;
	var uLocal_1682 = -1;
	var uLocal_1683 = -1;
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
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = -1082130432;
	var uLocal_1706 = 3;
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
	var uLocal_1722 = -1;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1;
	var uLocal_1725 = -1;
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
	var uLocal_1747 = -1082130432;
	var uLocal_1748 = 3;
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
	var uLocal_1763 = 0;
	var uLocal_1764 = -1;
	var uLocal_1765 = 0;
	var uLocal_1766 = -1;
	var uLocal_1767 = -1;
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
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = -1082130432;
	var uLocal_1790 = 3;
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
	var uLocal_1805 = 0;
	var uLocal_1806 = -1;
	var uLocal_1807 = 0;
	var uLocal_1808 = -1;
	var uLocal_1809 = -1;
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
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = -1082130432;
	var uLocal_1832 = 3;
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
	var uLocal_1847 = 0;
	var uLocal_1848 = -1;
	var uLocal_1849 = 0;
	var uLocal_1850 = -1;
	var uLocal_1851 = -1;
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
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = -1082130432;
	var uLocal_1874 = 3;
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
	var uLocal_1890 = -1;
	var uLocal_1891 = 0;
	var uLocal_1892 = -1;
	var uLocal_1893 = -1;
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
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = -1082130432;
	var uLocal_1916 = 3;
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
	var uLocal_1931 = 0;
	var uLocal_1932 = -1;
	var uLocal_1933 = 0;
	var uLocal_1934 = -1;
	var uLocal_1935 = -1;
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
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = -1082130432;
	var uLocal_1958 = 3;
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
	var uLocal_1973 = 0;
	var uLocal_1974 = -1;
	var uLocal_1975 = 0;
	var uLocal_1976 = -1;
	var uLocal_1977 = -1;
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
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = -1082130432;
	var uLocal_2000 = 3;
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
	var uLocal_2016 = -1;
	var uLocal_2017 = 0;
	var uLocal_2018 = -1;
	var uLocal_2019 = -1;
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
	var uLocal_2041 = -1082130432;
	var uLocal_2042 = 3;
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
	var uLocal_2057 = 0;
	var uLocal_2058 = -1;
	var uLocal_2059 = 0;
	var uLocal_2060 = -1;
	var uLocal_2061 = -1;
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
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = -1082130432;
	var uLocal_2084 = 3;
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
	var uLocal_2099 = 0;
	var uLocal_2100 = -1;
	var uLocal_2101 = 0;
	var uLocal_2102 = -1;
	var uLocal_2103 = -1;
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
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = -1082130432;
	var uLocal_2126 = 3;
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
	var uLocal_2141 = 0;
	var uLocal_2142 = -1;
	var uLocal_2143 = 0;
	var uLocal_2144 = -1;
	var uLocal_2145 = -1;
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
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = -1082130432;
	var uLocal_2168 = 3;
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
	var uLocal_2184 = -1;
	var uLocal_2185 = 0;
	var uLocal_2186 = -1;
	var uLocal_2187 = -1;
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
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = -1082130432;
	var uLocal_2210 = 3;
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
	var uLocal_2225 = 0;
	var uLocal_2226 = -1;
	var uLocal_2227 = 0;
	var uLocal_2228 = -1;
	var uLocal_2229 = -1;
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
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = -1082130432;
	var uLocal_2252 = 3;
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
	var uLocal_2267 = 0;
	var uLocal_2268 = -1;
	var uLocal_2269 = 0;
	var uLocal_2270 = -1;
	var uLocal_2271 = -1;
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
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = -1082130432;
	var uLocal_2294 = 3;
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
	var uLocal_2310 = -1;
	var uLocal_2311 = 0;
	var uLocal_2312 = -1;
	var uLocal_2313 = -1;
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
	var uLocal_2335 = -1082130432;
	var uLocal_2336 = 3;
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
	var uLocal_2351 = 0;
	var uLocal_2352 = -1;
	var uLocal_2353 = 0;
	var uLocal_2354 = -1;
	var uLocal_2355 = -1;
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
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = -1082130432;
	var uLocal_2378 = 3;
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
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
	var uLocal_2395 = 0;
	var uLocal_2396 = -1;
	var uLocal_2397 = -1;
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
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = -1082130432;
	var uLocal_2420 = 3;
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
	var uLocal_2435 = 0;
	var uLocal_2436 = -1;
	var uLocal_2437 = 0;
	var uLocal_2438 = -1;
	var uLocal_2439 = -1;
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
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = -1082130432;
	var uLocal_2462 = 3;
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
	var uLocal_2478 = -1;
	var uLocal_2479 = 0;
	var uLocal_2480 = -1;
	var uLocal_2481 = -1;
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
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = -1082130432;
	var uLocal_2504 = 3;
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
	var uLocal_2519 = 0;
	var uLocal_2520 = -1;
	var uLocal_2521 = 0;
	var uLocal_2522 = -1;
	var uLocal_2523 = -1;
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
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = -1082130432;
	var uLocal_2546 = 3;
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
	var uLocal_2561 = 0;
	var uLocal_2562 = -1;
	var uLocal_2563 = 0;
	var uLocal_2564 = -1;
	var uLocal_2565 = -1;
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
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = -1082130432;
	var uLocal_2588 = 3;
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
	var uLocal_2604 = -1;
	var uLocal_2605 = 0;
	var uLocal_2606 = -1;
	struct<12> Local_2607[32];
	struct<12> Local_2992 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_305 = 40000f;
	iLocal_341 = unk_0xD0CA83418A236CB4();
	iLocal_342 = unk_0xD0CA83418A236CB4();
	iLocal_343 = -1;
	iLocal_344 = -1;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_711(ScriptParam_0))
		{
			func_674();
		}
	}
	while (true)
	{
		func_673();
		if (func_666() || func_664())
		{
			func_674();
		}
		if (func_662())
		{
			func_674();
		}
		func_636();
		switch (func_635(unk_0xF19B3230511B7F9F()))
		{
			case 0:
				if (func_634() == 1)
				{
					if (func_633())
					{
						func_632(unk_0xF19B3230511B7F9F(), 1);
					}
				}
				break;
			
			case 1:
				if (func_634() == 1)
				{
					func_128();
					func_116();
				}
				else if (func_634() == 3)
				{
					func_632(unk_0xF19B3230511B7F9F(), 3);
				}
				break;
			
			case 3:
				func_674();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_634())
			{
				case 0:
					if (func_103())
					{
						func_102(1);
					}
					break;
				
				case 1:
					if (Local_642.f_37 == 6)
					{
						func_102(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_319, 1000, 0))
					{
						func_102(3);
					}
					break;
				
				case 3:
					func_674();
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
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_642.f_2, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Local_642.f_2), 0);
			Local_642.f_1 = unk_0xD1952A425B78FFC0();
		}
	}
	switch (Local_642.f_37)
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
			if (func_1(&(Local_642.f_43), func_29(), 0) || unk_0xC80D31E4B587871C(Local_642.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_642.f_38 = unk_0xD1952A425B78FFC0();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_642.f_39), func_28(0), 0) || unk_0xC80D31E4B587871C(Local_642.f_2, 0))
			{
				if (!unk_0xC80D31E4B587871C(Local_642.f_2, 1))
				{
					Local_642.f_1 = unk_0xD1952A425B78FFC0();
					unk_0x872F1C1F8587CCC7(&(Local_642.f_2), 1);
					func_27(&(Local_642.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_344, &iLocal_343);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_642.f_41), 20000, 0) || Local_642.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_642.f_3))
				{
					func_27(&(Local_642.f_45), 0, 0);
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
		if (unk_0x918CA1BFFAA03556(Local_642.f_67[iVar0 /*2*/].f_1) && !unk_0x191BE1BC8F26F3C1(unk_0x29AB7D6D0DE18055(Local_642.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xC80D31E4B587871C(Local_2607[iVar1 /*12*/].f_1, 1) || Local_2607[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xC80D31E4B587871C(Local_2607[iVar1 /*12*/].f_1, 0))
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
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 1793822106;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam14 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
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
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
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
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			unk_0x872F1C1F8587CCC7(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0xC80D31E4B587871C(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x872F1C1F8587CCC7(&(Local_642.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
				if (unk_0x552F39AE86E07792(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_642.f_50)
	{
		Local_642.f_50 = iVar1;
	}
	else
	{
		Local_642.f_66 = (Local_642.f_50 - iVar1);
	}
	if (iVar2 > Local_642.f_51)
	{
		Local_642.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
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
		fVar0 = unk_0xBBDA792448DB5A89(Local_2607[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4);
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
	switch (Local_642.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10280)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10281)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10282)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10283)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10284)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10285)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10286 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10287)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10288)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10289)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10290)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10291))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10292))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_10404)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_10405)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10295))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10297))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10298))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10299))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_642.f_3)
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
		if (Local_642.f_4[iParam0] == unk_0x622FF3AE4B1D07C3() && func_21(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4, 0))
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
	switch (Local_642.f_3)
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
	
	iVar0 = Local_2607[iParam0 /*12*/].f_4;
	iVar1 = Local_2607[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xC80D31E4B587871C(Local_642.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_642.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_642.f_49++;
			unk_0x872F1C1F8587CCC7(&(Local_642.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_642.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_642.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_642.f_4[iVar3] < 0 || func_21(iVar0, Local_2607[Local_642.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2607[Local_642.f_4[iVar3] /*12*/].f_4, iVar1, Local_2607[Local_642.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_642.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_343 = iVar3;
				iLocal_344 = iParam0;
			}
			Local_642.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_642.f_4[iVar5] == iParam0)
				{
					Local_642.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_642.f_3 == 2)
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
	
	if (unk_0xC80D31E4B587871C(Local_642.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_642.f_4[iVar0] == iParam0)
			{
				Local_642.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x0EE72DB1CD8A3B86(&(Local_642.f_48), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Local_642.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			*uParam0 = unk_0xEBD55014C579F626();
		}
	}
	else
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xC80D31E4B587871C(Local_642.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_642.f_3)
	{
		case 0:
			return Global_262145.f_9600;
		
		case 8:
			return Global_262145.f_9602;
		
		case 3:
			return Global_262145.f_9603;
		
		case 1:
			return Global_262145.f_10390;
		
		case 6:
			return Global_262145.f_10391;
		
		case 10:
			return Global_262145.f_10393;
		
		case 11:
			return Global_262145.f_10395;
		
		case 12:
			return Global_262145.f_10396;
		
		case 15:
			return Global_262145.f_10400;
		
		case 16:
			return Global_262145.f_10401;
		
		case 17:
			return Global_262145.f_10402;
		
		case 18:
			return Global_262145.f_10403;
		
		case 13:
			return Global_262145.f_10394;
		
		case 14:
			return Global_262145.f_10397;
		
		case 2:
			return Global_262145.f_9605;
		
		case 7:
			return Global_262145.f_10392;
		
		case 9:
			return Global_262145.f_10398;
		
		case 5:
			return Global_262145.f_9606;
		
		case 4:
			return Global_262145.f_9604;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_10360;
}

void func_30(int iParam0)
{
	Local_642.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_642.f_37 == 0 || func_5(Local_642.f_3)) || Local_642.f_54 < 10))
	{
		Var0 = { Local_642.f_67[iLocal_338 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0x93C304998B457C45(Var0.f_1))
			{
				if (func_38(Local_642.f_3, iLocal_338, &Var2, &uVar5))
				{
					Local_642.f_55[iLocal_338] = func_34(iLocal_338);
					if (unk_0xC80D31E4B587871C(Local_2607[Local_642.f_55[iLocal_338] /*12*/].f_2, iLocal_338))
					{
						if (func_33(&(Local_642.f_67[iLocal_338 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0xC45B8A0B35DD8552(unk_0x29AB7D6D0DE18055(Local_642.f_67[iLocal_338 /*2*/].f_1), 1, 1);
							unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							unk_0x9D160A2C23D47EBA(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), 0);
							func_32(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							if (unk_0x6C5223DB5E5CFD9B("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
							{
								if (unk_0xB80A4DA4C06A76F1(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x2786E663D1846FFC(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), "MPBitset");
								}
								unk_0x872F1C1F8587CCC7(&iVar6, 10);
								unk_0x872F1C1F8587CCC7(&iVar6, 11);
								unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_338 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_642.f_55[iLocal_338] = -1;
							Local_642.f_54++;
						}
					}
				}
			}
		}
		iLocal_338++;
		if (iLocal_338 >= 10)
		{
			iLocal_338 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&uVar0, 13);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&uVar0, 13);
		}
		unk_0xD91ED8E8618A1DEF(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
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
		unk_0x9B8406983378711E(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam15)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam10);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam8)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, iParam9);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
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
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				iVar8 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
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
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
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
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

bool func_41()
{
	return (func_5(Local_642.f_3) || func_39(Local_642.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_101(unk_0x9EB17624F44A8DA4(), 0) || func_98(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (func_97(unk_0x9EB17624F44A8DA4()) || func_95(unk_0x9EB17624F44A8DA4()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x8AB67E33BD002BAC() < iParam0)
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
	if (func_45(&(Global_1574409.f_18)))
	{
		if (!func_1(&(Global_1574409.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1574409.f_18));
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
	if (iParam1 && unk_0x5C6098C2BAD00378() < iParam0)
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
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 0);
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
			unk_0xD1EA64C8648E82BA(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(uVar1);
			if (unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x0EE72DB1CD8A3B86(&iVar0, iParam0);
				unk_0xD1EA64C8648E82BA(iVar0, iParam1);
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
	uVar1 = unk_0x496616BFA56C89EB(uVar0);
	return unk_0xC80D31E4B587871C(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xC80D31E4B587871C(Global_1574409.f_1, 2) && !func_8(unk_0x9EB17624F44A8DA4())) && !func_7(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xAB019B170BF1309C(sParam1))
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
		func_50(66, sParam0, sParam1, 1, -1, 2);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_94(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_51(&Var0);
}

int func_51(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_65(uParam0, uParam0->f_16);
	func_62(uParam0);
	if (func_61())
	{
		func_62(uParam0);
	}
	if (func_60(uParam0->f_1))
	{
		func_53();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
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
				unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_52(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
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
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_54();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_54()
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_58(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_55(&(Global_2436181.f_2912.f_1));
}

void func_55(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(0);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_57(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
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
	return Global_2447174.f_16;
}

void func_62(var uParam0)
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_71 = func_63();
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
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_93() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_66(iParam1, -2, 0, 0);
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
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_91(unk_0x9EB17624F44A8DA4()) || (func_90() && func_89())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		uVar1 = func_88();
		if (unk_0x6ADD12BF4D6D2587(uVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_12(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_86(iParam1, iParam0, 0);
							}
							else
							{
								return func_74(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_86(iParam1, iParam0, 0);
		}
		else
		{
			return func_74(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	return func_68(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
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
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
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
	if (func_70(Global_4456448.f_122309))
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

int func_70(int iParam0)
{
	int iVar0;
	
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
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
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
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
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
			if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_73(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_72(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
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
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
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
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_93())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_80(iParam0)];
		}
	}
	return -1;
}

int func_80(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
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
	return Global_1627537[iParam0 /*532*/].f_11 != func_93();
}

int func_82(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
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
	return Global_2447174.f_15;
}

var func_85()
{
	return Global_2447174.f_14;
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
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_93())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_87(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
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
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
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
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_90()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_91(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_93()
{
	return -1;
}

void func_94(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_93();
	uParam1->f_17 = func_93();
	uParam1->f_18 = func_93();
	uParam1->f_19 = func_93();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

bool func_95(int iParam0)
{
	return func_96(iParam0, 20);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
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
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_99(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_99(Global_1627537[iParam0 /*532*/].f_11.f_32))
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
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)
{
	Local_642.f_0 = iParam0;
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_642.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_642.f_39));
	func_108();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_642.f_55[iVar0] = func_34(iVar0);
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
		if (func_39(Local_642.f_3))
		{
			Local_642.f_67[iVar0 /*2*/] = func_107();
		}
		else
		{
			Local_642.f_67[iVar0 /*2*/] = func_105();
		}
		iVar0++;
	}
}

int func_105()
{
	int iVar0;
	
	switch (Local_642.f_3)
	{
		case 12:
			return func_106();
			break;
	}
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
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
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
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
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
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
	Local_642.f_3 = iVar0;
	func_109(func_111(133, iVar0, 0, 0));
}

void func_109(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1107039707;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam0;
	iVar3 = func_110(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
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
	
	iVar0[0] = Global_262145.f_10689;
	iVar0[1] = Global_262145.f_10362;
	iVar0[2] = Global_262145.f_10693;
	iVar0[3] = Global_262145.f_10691;
	iVar0[4] = Global_262145.f_10692;
	iVar0[5] = Global_262145.f_10694;
	iVar0[6] = Global_262145.f_10363;
	iVar0[7] = Global_262145.f_10364;
	iVar0[8] = Global_262145.f_10690;
	iVar0[9] = Global_262145.f_10370;
	iVar0[10] = Global_262145.f_10365;
	iVar0[11] = Global_262145.f_10367;
	iVar0[12] = Global_262145.f_10368;
	iVar0[13] = Global_262145.f_10366;
	iVar0[14] = Global_262145.f_10369;
	iVar0[15] = Global_262145.f_10372;
	iVar0[16] = Global_262145.f_10373;
	iVar0[17] = Global_262145.f_10374;
	iVar0[18] = Global_262145.f_10375;
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
	fVar22 = unk_0x5B811202FCBE9E9D(0f, fVar20);
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
			return 0;
		
		default:
	}
	iVar1 = func_114(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_7501)
		{
			if (Global_2486819.f_124[iVar0 /*2*/] == iVar1 && Global_2486819.f_124[iVar0 /*2*/].f_1 == func_111(iParam0, iParam1, iParam2, iParam3))
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
		
		default:
	}
	return -1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9594;
		
		case 1:
			return Global_262145.f_10376;
		
		case 6:
			return Global_262145.f_10377;
		
		case 7:
			return Global_262145.f_10378;
		
		case 8:
			return Global_262145.f_9595;
		
		case 3:
			return Global_262145.f_9596;
		
		case 4:
			return Global_262145.f_9597;
		
		case 2:
			return Global_262145.f_9598;
		
		case 5:
			return Global_262145.f_9599;
		
		case 9:
			return Global_262145.f_10384;
		
		case 10:
			return Global_262145.f_10379;
		
		case 11:
			return Global_262145.f_10381;
		
		case 12:
			return Global_262145.f_10382;
		
		case 15:
			return Global_262145.f_10386;
		
		case 16:
			return Global_262145.f_10387;
		
		case 17:
			return Global_262145.f_10388;
		
		case 18:
			return Global_262145.f_10389;
		
		case 13:
			return Global_262145.f_10380;
		
		case 14:
			return Global_262145.f_10383;
		
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
			if (Local_642.f_55[iVar0] == unk_0x622FF3AE4B1D07C3())
			{
				if (func_117(iVar0))
				{
					if (!unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_2, iVar0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_2, iVar0))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_2, iVar0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_2), iVar0);
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
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x0D3330EAF6340496(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x0D3330EAF6340496(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xAA0BDFF32B6BC02A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_123(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
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
	Global_2405047.f_2++;
	return 1;
}

int func_119(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xBE3C4023003180FC(func_121(unk_0x9EB17624F44A8DA4()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9E06F0EE20F58CED(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_120(iVar1) || !bParam10) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_121(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam8 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_121(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
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
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

Vector3 func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1595693[iVar0 /*680*/].f_673) && !func_122(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
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
		if ((iParam8 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam7 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_120(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam9) && bParam6) && func_124(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_36(iVar1), Param0, 1) < fParam3)
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
	if (func_127(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_126(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_125(unk_0x9EB17624F44A8DA4(), iParam0))
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
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_127(int iParam0, int iParam1)
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_126(iParam0) };
		Global_2492170 = { func_126(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
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
	
	func_629();
	func_628();
	if (func_626())
	{
		func_517();
	}
	if (!func_7(unk_0x9EB17624F44A8DA4()))
	{
		if (func_495())
		{
			if (unk_0xC80D31E4B587871C(iLocal_333, 6))
			{
				unk_0x0EE72DB1CD8A3B86(&iLocal_333, 6);
			}
			switch (Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_3)
			{
				case 0:
					if (Local_642.f_37 < 2)
					{
						if (Local_642.f_37 > 0)
						{
							if (Local_642.f_3 != -1)
							{
								func_494(1);
								func_493(1);
							}
						}
					}
					else
					{
						func_493(2);
					}
					break;
				
				case 1:
					func_487(9);
					if (Local_2992.f_8 == 0)
					{
						Local_2992.f_8 = unk_0xE3CCAFB1555348DF();
					}
					if (Local_642.f_37 >= 2)
					{
						func_493(2);
						Local_2992.f_9 = unk_0xE3CCAFB1555348DF();
					}
					if (func_41())
					{
						func_487(0);
					}
					func_485((func_29() - func_486(&(Local_642.f_43), 0, 0)));
					func_482(func_484((func_29() - func_486(&(Local_642.f_43), 0, 0)), 0), func_483(Local_642.f_3));
					func_443(0, func_481());
					func_425();
					func_402();
					if (func_401())
					{
						func_400();
					}
					break;
				
				case 2:
					if (Local_642.f_37 > 2)
					{
						func_494(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_399())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_382(133, fVar0, fVar1, 0, 0, 0, 0);
						func_381(Local_642.f_3, 1);
						func_380(23, 1);
						if (Local_2992.f_8 == 0)
						{
							Local_2992.f_8 = unk_0xE3CCAFB1555348DF();
						}
						if (Local_2992.f_9 == 0)
						{
							Local_2992.f_9 = unk_0xE3CCAFB1555348DF();
						}
						func_376();
						unk_0x44EBEB4322278F78(1);
						if (func_399())
						{
							unk_0x94BD6F0436473406(0f);
							unk_0xC0EBC1452FCAB15C(0);
						}
						if (Local_642.f_3 == 14)
						{
							func_375(&Local_353);
						}
						func_374();
						if (!func_7(unk_0x9EB17624F44A8DA4()))
						{
							func_50(63, "AMCH_STARTED", func_373(Local_642.f_3), func_63(), -1, func_63());
							if (func_370("AMCH_WARN", func_372(Local_642.f_3), func_371(Local_642.f_3)))
							{
								unk_0x3E80C2F7BC665259(1);
							}
						}
						if (func_41())
						{
							func_353(678f, 794f, 206f, 8f, 0);
							func_353(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_353(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_493(3);
					}
					break;
				
				case 3:
					if (Local_642.f_37 > 3)
					{
						iLocal_335 = 0;
						func_493(4);
					}
					else
					{
						if (!unk_0xC80D31E4B587871C(Local_642.f_2, 1))
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
					if (func_399())
					{
						unk_0x74A0059E573C5694(unk_0x9EB17624F44A8DA4());
					}
					func_312();
					func_289();
					func_517();
					func_443(0, 1);
					func_425();
					func_402();
					func_487(2);
					func_487(5);
					func_487(7);
					break;
				
				case 4:
					if (func_278(&uLocal_345, !unk_0xC80D31E4B587871C(Local_642.f_2, 0)) || unk_0xC80D31E4B587871C(Local_642.f_2, 0))
					{
						if (func_5(Local_642.f_3))
						{
							if (Local_642.f_37 == 5)
							{
								func_493(5);
							}
						}
						else
						{
							func_493(6);
						}
					}
					func_265();
					func_160();
					func_289();
					func_517();
					func_443(1, 1);
					func_374();
					break;
				
				case 5:
					if (Local_642.f_37 > 5)
					{
						func_493(6);
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
		Var0 = { Local_642.f_67[iLocal_352 /*2*/] };
		if (unk_0x93C304998B457C45(Var0.f_1))
		{
			iVar2 = unk_0xF32FBF2453AC1753(Var0.f_1);
			if (unk_0xA0BF73C5030D3F60(iVar2))
			{
				if (!unk_0xB8DE76287EDC4957(iVar2, 0))
				{
					unk_0x5380482A432E314E(&iVar2);
				}
			}
		}
		iLocal_352++;
		if (iLocal_352 >= 10)
		{
			iLocal_352 = 0;
			iLocal_641 = iLocal_640;
			iLocal_640 = 0;
		}
	}
}

void func_130()
{
	if (Local_642.f_37 == 5)
	{
		if (unk_0x93C304998B457C45(Local_642.f_67[iLocal_352 /*2*/].f_1))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_352 /*2*/].f_1), 0))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_628, iLocal_352))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_628, iLocal_352);
					uLocal_629[iLocal_352] = unk_0xD0CA83418A236CB4();
					unk_0x7CC4363AEEF7EF34(uLocal_629[iLocal_352], "Explosion_Countdown", unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_352 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x922FC70048B5A79D(uLocal_629[iLocal_352], "Time", 30f);
				}
				if ((30000 - func_486(&(Local_642.f_45), 0, 0)) >= 0)
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_352 /*2*/].f_1), 0))
					{
						func_487(1);
						iLocal_640 = 1;
					}
				}
				else if (unk_0xE53FD7AF7F25C0A8(Local_642.f_67[iLocal_352 /*2*/].f_1))
				{
					unk_0x2B0DDE3D071497AD(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_352 /*2*/].f_1));
					unk_0x512FEE935C79BFCF(unk_0xF32FBF2453AC1753(Local_642.f_67[iLocal_352 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xC80D31E4B587871C(iLocal_628, iLocal_352) && !unk_0xCCCA18C9A006FF83(uLocal_629[iLocal_352]))
			{
				unk_0x0B9D04994D02CC2F(uLocal_629[iLocal_352]);
			}
		}
		if (iLocal_641)
		{
			if (!func_91(unk_0x9EB17624F44A8DA4()))
			{
				func_132(func_484((30000 - func_486(&(Local_642.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_131();
			}
		}
	}
}

void func_131()
{
	Global_1359035.f_1088 = 1;
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
		Global_1359035.f_1 = 1;
		func_133(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_133(int iParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_135()
{
	if (((func_12(unk_0x9EB17624F44A8DA4(), 1, 1) && !func_7(unk_0x9EB17624F44A8DA4())) && !func_151(unk_0x9EB17624F44A8DA4())) && func_495())
	{
		if (Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 == 1)
		{
			func_148(func_150(Local_642.f_3), func_372(Local_642.f_3), 0, 0);
		}
		else if (Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 == 3)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_333, 10))
			{
				func_136(func_371(Local_642.f_3), 0);
			}
			else
			{
				func_136("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_374();
		}
	}
	else
	{
		func_374();
	}
}

void func_136(char* sParam0, bool bParam1)
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_146(sParam0))
	{
		return;
	}
	func_140();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_139()
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

void func_140()
{
	func_142();
	func_141(0);
}

void func_141(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x3A711520F83BAE98();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xD1952A425B78FFC0();
		Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
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
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_143();
		unk_0x0BD2F1A526F1459A();
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
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			unk_0x6223D539BCD39E76(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
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
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_143();
	return unk_0xC20F7134D3568246();
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
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_147(char* sParam0)
{
	if (!func_144())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

int func_148(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (func_149(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_140();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
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
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

char* func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502())) || unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
					iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
					if (unk_0x125CDF69FA6EF560(iVar1) && unk_0x622CEE94AF3A0B32(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_sniperrifle"), 0) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_heavysniper"), 0)) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
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
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1574409.f_13)))
		{
			if (!func_1(&(Global_1574409.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1574409.f_13));
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9);
}

bool func_152(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
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
	if (!unk_0xC80D31E4B587871C(iLocal_333, 6))
	{
		unk_0xBC79F7D5230CA7E8();
		func_443(1, 1);
		unk_0x0B9D04994D02CC2F(iLocal_341);
		unk_0x0EE72DB1CD8A3B86(&iLocal_333, 4);
		func_159();
		func_157();
		unk_0x2DEDE82792FFFD0B(0f, 0, 21);
		unk_0x872F1C1F8587CCC7(&iLocal_333, 6);
		func_156();
	}
}

void func_156()
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = 0;
}

void func_157()
{
	if (Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
	{
		func_158();
	}
}

void func_158()
{
	struct<28> Var0;
	
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413426 = { Var0 };
	Global_2413426.f_6 = -1;
}

void func_159()
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 0);
			return;
		}
		if (func_151(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 0);
			return;
		}
		func_225(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_2992.f_6 = (Local_2992.f_6 + iVar0);
			if (!Global_262145.f_10841)
			{
				func_224(10, Local_2992.f_6);
			}
			Global_2459022 = iVar0;
			if (func_223())
			{
				func_214(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x432E164230431523(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_2992.f_7 = (Local_2992.f_7 + iVar1);
			func_213();
			func_161(0, unk_0xFC1458A37D98B502(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 0);
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
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				uVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_168(unk_0xD0E00576168D19BB(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
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
	if (iParam0 == func_165(unk_0xFC1458A37D98B502()))
	{
		func_164(1);
	}
	func_168(Var0, iParam1, 0, sParam2, uParam3);
}

void func_164(int iParam0)
{
	Global_2436181.f_1774 = iParam0;
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
	
	if (unk_0x4AA5DF29899B96D6())
	{
		Var3 = { unk_0xEDD96F31411FBD87(2) };
	}
	if (iParam0 == func_167(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		Var0 = { unk_0x3F90543934DCD7E6(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar6 = unk_0xF0371FE6E2BF9599(iParam0);
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x9EA50C5EC175E58E(Var0, fVar6, 0f, 0f, fVar13) };
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
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { Param0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_171(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam3;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam4;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_170();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_169();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), uParam6);
		}
	}
}

int func_169()
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_170()
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_171(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), Param0, 1);
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
	
	if (func_212(unk_0x9EB17624F44A8DA4()) || func_211(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_209() || func_206(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
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
		if (iVar1 > Global_1677772)
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
			func_194(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_183((func_193(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_194(1162, iVar1, -1);
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
				func_174((func_176(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_174((func_176(unk_0x9EB17624F44A8DA4()) + iParam6));
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
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_175(joaat("mpply_globalxp"), iParam0);
	}
}

void func_175(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, uParam1, 1);
	}
}

int func_176(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_177(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
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
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_178(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_126(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar13 = func_181(func_182(&Var0));
			if (iVar13 == 0)
			{
				func_180(&Global_1368098, iParam0);
				func_179(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar13 == 1)
			{
				func_180(&Global_1368099, iParam0);
				func_179(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar13 == 2)
			{
				func_180(&Global_1368100, iParam0);
				func_179(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar13 == 3)
			{
				func_180(&Global_1368101, iParam0);
				func_179(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar13 == 4)
			{
				func_180(&Global_1368102, iParam0);
				func_179(joaat("mpply_crew_local_xp_4"), Global_1368102);
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
		unk_0xBFFF62F75445099D(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = uParam1;
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
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
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
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	if (func_204())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_192(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_192(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_191(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_189(iParam0, 1);
		}
		func_188(636, iParam0, -1, 1);
		func_187(637, func_189(iParam0, 1), -1, 1, 0);
		Global_1368213[func_192(-1)] = iParam0;
		func_184(7, 0);
	}
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185();
		Global_2456735[iVar0] = iParam0;
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
		if (Global_2456735[iVar1] == 0)
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
	iVar0 = Global_2523060[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_192(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_192(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_192(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_192(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_192(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_192(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_192(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_192(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_192(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_192(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_192(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_192(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_192(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_192(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_192(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_192(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_192(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_192(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_192(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_192(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_192(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_192(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_192(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_192(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_192(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_192(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_192(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_192(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_192(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_192(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_192(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_192(iParam2)] = iParam1;
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
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
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
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
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
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
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
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_192(-1)];
			}
			else if (func_191(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_192(-1)];
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
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
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
	uVar0 = Global_2523060[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
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
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_73(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_127(unk_0x9EB17624F44A8DA4(), iVar5))
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
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_127(unk_0x9EB17624F44A8DA4(), iVar4))
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
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_200(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_127(unk_0x9EB17624F44A8DA4(), iVar4))
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
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
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
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_193(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_193(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_203(8000, 0, 0) > 0)
	{
		if (func_203(8000, 0, 0) < (iParam0 + func_193(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_203(8000, 0, 0) - func_193(unk_0x9EB17624F44A8DA4()));
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
	return Global_285062[iParam0];
}

int func_204()
{
	return 1;
}

int func_205(var uParam0)
{
	if (unk_0x8C1C362CA8299475(uParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398(uParam0, "") || unk_0x74C475EB8E73D398(uParam0, "0"))
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
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

bool func_209()
{
	if (unk_0x4916190900E76373())
	{
		return func_61();
	}
	return func_210(Global_4456448.f_122309);
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
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_212(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_213()
{
	Global_2458364 = 1;
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
		if (!unk_0x02404400A68A3D5B(func_16()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_222(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_221(1, iParam4);
			Global_4262414 = 0;
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
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
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
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_218(&(Global_4261865[iParam0 /*80*/]));
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
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_221(int iParam0, var uParam1)
{
	Global_2459156 = uParam1;
	Global_2459155 = iParam0;
}

int func_222(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_223())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_223()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_224(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!unk_0xB9D80B12FE4456A5() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
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
	
	if (func_17(unk_0x622FF3AE4B1D07C3(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_642.f_1 - iLocal_331)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_10776)
		{
			iVar1 = Global_262145.f_10776;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_264() * iVar1);
		*uParam1 = (func_263() * iVar1);
		fVar2 = func_262();
		if (fVar2 > 0f && !unk_0xC80D31E4B587871C(Local_642.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_261())
			{
				iVar3 = func_261();
			}
			iVar4 = Local_642.f_51;
			if (iVar4 > func_260())
			{
				iVar4 = func_260();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_253(func_259(), func_258(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_262145.f_10789)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_253(func_252(), func_251(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_262145.f_10790)));
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
					if (unk_0x552F39AE86E07792(func_242()))
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
		Var0.f_0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_230(iParam0);
		func_229(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_228(iParam0));
	}
}

var func_228(int iParam0)
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_229(var uParam0, var uParam1)
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_230(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_232(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(func_66(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_237(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_233(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_233(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_236() || !unk_0x4916190900E76373()) || !func_14(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_234(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_235(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_236()
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
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
	return Global_262145.f_11730;
}

int func_241()
{
	return Global_262145.f_11729;
}

int func_242()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_243(bool bParam0)
{
	return func_244(unk_0x9EB17624F44A8DA4(), bParam0);
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
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_93() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 != func_93())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_247(bool bParam0)
{
	return func_81(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_248()
{
	return func_82(unk_0x9EB17624F44A8DA4());
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		if (func_250(1))
		{
			unk_0x872F1C1F8587CCC7(&Global_1574434, 1);
		}
	}
	else if (func_250(2))
	{
		unk_0x872F1C1F8587CCC7(&Global_1574434, 2);
	}
}

int func_250(int iParam0)
{
	var uVar0;
	
	uVar0 = func_196(2523, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xC80D31E4B587871C(uVar0, 0) && unk_0xC80D31E4B587871C(iVar0, 1)) && unk_0xC80D31E4B587871C(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 3) && unk_0xC80D31E4B587871C(iVar0, 4)) && unk_0xC80D31E4B587871C(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 6) && unk_0xC80D31E4B587871C(iVar0, 7)) && unk_0xC80D31E4B587871C(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 9) && unk_0xC80D31E4B587871C(iVar0, 10)) && unk_0xC80D31E4B587871C(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_251()
{
	return Global_262145.f_10276;
}

int func_252()
{
	return Global_262145.f_10274;
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
	return Global_262145.f_10279;
}

float func_256()
{
	return Global_262145.f_10278;
}

float func_257()
{
	return Global_262145.f_10277;
}

int func_258()
{
	return Global_262145.f_10275;
}

int func_259()
{
	return Global_262145.f_10273;
}

int func_260()
{
	return Global_262145.f_10681;
}

int func_261()
{
	return Global_262145.f_10680;
}

var func_262()
{
	if (func_20(0))
	{
		return Global_262145.f_10300;
	}
	if (func_20(1))
	{
		return Global_262145.f_10301;
	}
	if (func_20(2))
	{
		return Global_262145.f_10302;
	}
	return Global_262145.f_10303;
}

int func_263()
{
	return Global_262145.f_10272;
}

int func_264()
{
	return Global_262145.f_10271;
}

void func_265()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1, 1) && (func_277() || unk_0xC80D31E4B587871C(Local_642.f_2, 0)))
	{
		if (func_64(func_276()))
		{
			func_275();
		}
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0xC80D31E4B587871C(Local_642.f_2, 0))
			{
				if (func_314(0))
				{
					iVar2 = Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4;
					func_271(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_269(64, func_270(Local_642.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_372(Local_642.f_3), 1, 2);
						}
						else if (func_268())
						{
							func_269(69, func_270(Local_642.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_372(Local_642.f_3), 1, 2);
						}
						else
						{
							func_269(64, func_270(Local_642.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_372(Local_642.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_642.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_372(Local_642.f_3), 1, 2);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_642.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_642.f_3), 1, 2);
						}
						else
						{
							func_269(67, func_270(Local_642.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_642.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_642.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_372(Local_642.f_3), 1, 2);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_642.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_642.f_3), 1, 2);
						}
						else
						{
							func_269(67, func_270(Local_642.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_642.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0x2B957AC89DEBA5B6(Local_642.f_4[0]);
						if (unk_0x012BC3F18B8C7807(uVar3))
						{
							iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
							if (Local_2607[Local_642.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2607[Local_642.f_4[0] /*12*/].f_4;
							func_271(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_267(76, func_93(), func_270(Local_642.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_372(Local_642.f_3), -1, fVar1, 1, 2, unk_0xDE2D3B9654C31EB3(iVar4));
							}
							else if (func_268())
							{
								func_267(77, func_93(), func_270(Local_642.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_372(Local_642.f_3), iVar0, -1082130432, 1, 2, unk_0xDE2D3B9654C31EB3(iVar4));
							}
							else
							{
								func_267(76, func_93(), func_270(Local_642.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_372(Local_642.f_3), iVar0, -1082130432, 1, 2, unk_0xDE2D3B9654C31EB3(iVar4));
							}
						}
					}
				}
				else
				{
					func_50(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2);
				}
			}
			else
			{
				func_49("", "", 1);
			}
			unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 1);
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
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_94(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_16 = iParam1;
	StringCopy(&(Var0.f_56), sParam2, 16);
	StringCopy(&(Var0.f_60), sParam6, 16);
	StringCopy(&(Var0.f_24), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_70 = iParam9;
	Var0.f_71 = iParam10;
	return func_51(&Var0);
}

int func_268()
{
	return 0;
}

int func_269(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_94(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_56), sParam1, 16);
	StringCopy(&(Var0.f_60), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_70 = iParam8;
	Var0.f_71 = iParam9;
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
			if (unk_0x485A7F3B0AD1A79D())
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
			if (unk_0x485A7F3B0AD1A79D())
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
			*fParam1 = (func_272(Local_642.f_3, iParam2) / 10f);
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
			if (unk_0x485A7F3B0AD1A79D())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_274(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
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
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

int func_276()
{
	return Global_2436181.f_2592[0 /*79*/].f_1;
}

bool func_277()
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 25);
}

int func_278(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_288()) && !(func_101(unk_0x9EB17624F44A8DA4(), 0) && (func_97(unk_0x9EB17624F44A8DA4()) || func_287(unk_0x9EB17624F44A8DA4())))) && !func_285(unk_0x9EB17624F44A8DA4()))
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
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 25);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
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
					unk_0x3E80C2F7BC665259(1);
				}
				func_283(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				func_283(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			return 1;
	}
	return 0;
}

bool func_279(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_280()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173())
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_282("AMEV_LBD_HELP", -1);
			func_281(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_281(int iParam0)
{
	unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
	if (iParam0 && !func_288())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_282(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam1);
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_284()
{
	Global_2458365 = 1;
}

int func_285(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
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
	}
	return -1;
}

bool func_287(int iParam0)
{
	return func_96(iParam0, 19);
}

bool func_288()
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
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
	
	if (Local_642.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_311() && !func_91(unk_0x9EB17624F44A8DA4()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_93();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_642.f_4[iVar16] > -1)
			{
				uVar30 = unk_0x2B957AC89DEBA5B6(Local_642.f_4[iVar16]);
				if (unk_0x012BC3F18B8C7807(uVar30))
				{
					iVar4 = unk_0x43E1A43A1AA9E0BE(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2607[Local_642.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_271(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2607[Local_642.f_4[iVar16] /*12*/].f_4, 1);
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
		iVar17 = unk_0x622FF3AE4B1D07C3();
		if (func_91(unk_0x9EB17624F44A8DA4()))
		{
			uVar31 = func_309();
			iVar32 = unk_0xDF35170AEEFB473B(uVar31);
			if (unk_0x552F39AE86E07792(iVar32))
			{
				iVar33 = unk_0x87678BB8392EFD41(iVar32);
				if (unk_0x012BC3F18B8C7807(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_271(&iVar13, &fVar18, iLocal_335, 1);
		func_271(&iVar14, &fVar19, Local_2607[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_486(&(Local_642.f_39), 0, 0);
		iVar15 = func_484(0, (iVar34 - iVar35));
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
		if (unk_0xC80D31E4B587871C(iLocal_333, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_311() || Local_642.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_642.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_304(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_270(Local_642.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_305(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_268())
		{
			func_303(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_305(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_294(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_270(Local_642.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_305(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
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
		if (Local_642.f_37 == 3)
		{
			if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iVar1, 0))
					{
						func_292(iVar1, &fLocal_339);
						fVar2 = (fVar0 + fLocal_339);
						unk_0x2DEDE82792FFFD0B(fVar2, 1, 21);
						func_291(fVar0);
						return;
					}
				}
			}
		}
		if (func_279("AMCH_FLYLOW"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (unk_0xC80D31E4B587871C(iLocal_333, 4))
		{
			unk_0x0B9D04994D02CC2F(iLocal_341);
			unk_0x0EE72DB1CD8A3B86(&iLocal_333, 4);
		}
		unk_0x2DEDE82792FFFD0B(0f, 0, 21);
	}
}

void func_291(float fParam0)
{
	float fVar0;
	
	if (unk_0xE7DB469922CDD348(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_487(6);
			if (!unk_0xC80D31E4B587871C(iLocal_333, 4))
			{
				unk_0x4AFBCBFDE748D4E0(iLocal_341, "Altitude_Warning", "EXILE_1", 1);
				unk_0x872F1C1F8587CCC7(&iLocal_333, 4);
			}
		}
		else
		{
			if (func_279("AMCH_FLYLOW"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			if (unk_0xC80D31E4B587871C(iLocal_333, 4))
			{
				unk_0x0B9D04994D02CC2F(iLocal_341);
				unk_0x0EE72DB1CD8A3B86(&iLocal_333, 4);
			}
		}
	}
}

float func_292(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	unk_0x7367FB97975F1E29(Var1, uParam1, 1, 0);
	unk_0x7367FB97975F1E29(Var1, &uVar4, 0, 0);
	if (unk_0x92FE3C543957BEC7())
	{
		func_487(3);
		unk_0x872F1C1F8587CCC7(&iLocal_333, 10);
		func_27(&uLocal_329, 0, 0);
	}
	else if (unk_0xC80D31E4B587871C(iLocal_333, 10))
	{
		if (func_1(&uLocal_329, 2000, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_333, 10);
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
	switch (Local_642.f_3)
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
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_295(iParam3, &(Global_2457899[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_295(iParam4, &(Global_2457899[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_295(iParam5, &(Global_2457899[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_93())
			{
				if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_295(iParam7, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_295(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
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
		Global_1359035.f_1 = 1;
		func_133(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = fParam8;
		Global_1359035.f_3770.f_497[iVar0] = iParam9;
		Global_1359035.f_3770.f_508[iVar0] = iParam10;
		Global_1359035.f_3770.f_205[iVar0] = iParam11;
		Global_1359035.f_3770.f_216[iVar0] = iParam12;
		Global_1359035.f_3770.f_227[iVar0] = iParam13;
		Global_1359035.f_3770.f_238[iVar0] = iParam14;
		Global_1359035.f_3770.f_249[iVar0] = iParam15;
		Global_1359035.f_3770.f_519[iVar0] = iParam16;
		Global_1359035.f_3770.f_530[iVar0] = iParam17;
		Global_1359035.f_3770.f_541[iVar0] = iParam18;
		Global_1359035.f_3770.f_552[iVar0] = iParam19;
		Global_1359035.f_3770.f_563[iVar0] = iParam20;
		Global_1359035.f_3770.f_574[iVar0] = iParam21;
		Global_1359035.f_3770.f_585[iVar0] = iParam22;
		Global_1359035.f_3770.f_596[iVar0] = iParam23;
		Global_1359035.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_297())
		{
			Global_1359035.f_1088 = 1;
		}
		if (unk_0xB9D80B12FE4456A5())
		{
			iVar2 = 0;
			unk_0x5113D2C928A121B2(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1359035.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1359035.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1359035.f_1088 = 1;
			}
			if (func_296())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_296()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x5113D2C928A121B2(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_297()
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
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
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_299()
{
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	Global_2458368 = 1;
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
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_301()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_302()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 12);
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
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_132(iParam3, &(Global_2457899[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_2457893[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_132(iParam4, &(Global_2457899[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_2457893[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_132(iParam5, &(Global_2457899[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_132(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_93())
			{
				if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_132(iParam7, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_132(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
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
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_295(-1, &(Global_2457899[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_295(-1, &(Global_2457899[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_295(-1, &(Global_2457899[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_93())
			{
				if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_295(-1, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_295(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
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
	switch (func_307(unk_0x9EB17624F44A8DA4()))
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
	if (func_307(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

int func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

void func_308(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x46C19C2753391FBF())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			if (!unk_0xAB019B170BF1309C(&(Global_2512808.f_4695)))
			{
				unk_0x1D4B7CAF5F26DD3E(&(Global_2512808.f_4695));
			}
			unk_0x22456E02F195550C(1);
			unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
			unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
			unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
			if (Global_2512808.f_4703 > -1)
			{
				unk_0xB94964861C6B4D3C(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
			Global_2512808.f_4693 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 4))
			{
				if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 2))
				{
					if (unk_0x4395F3F89845A398())
					{
						if ((!unk_0x74C475EB8E73D398(unk_0xC45B242943C8D6AD(unk_0x832CFDD4BD296987()), "OFF") && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0xAB019B170BF1309C(&(Global_2512808.f_4695)))
						{
							StringCopy(&(Global_2512808.f_4695), "", 32);
							unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
							unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
							unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
							unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
							unk_0x22456E02F195550C(1);
							unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
						}
					}
				}
				else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xC80D31E4B587871C(Global_2512808.f_4693, 5))
				{
					unk_0x1D4B7CAF5F26DD3E("OFF");
				}
			}
			else if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_30S");
				}
				unk_0xE859EF37EA7362D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 1);
			}
			else if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x8D0D3BB074DAEB2C() != 0)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x94F5A25C597E9666())
						{
							StringCopy(&(Global_2512808.f_4695), unk_0x046EF496879E839B(), 32);
							unk_0x1D4B7CAF5F26DD3E("OFF");
						}
						unk_0x22456E02F195550C(1);
						unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 3))
				{
					Global_2512808.f_4703 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(Global_2512808.f_4703, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
			{
				Global_2512808.f_4693 = 0;
				Global_2512808.f_4703 = -1;
				unk_0xAAB7D68F04F8C8BA("FM_COUNTDOWN_30S_KILL");
				unk_0x22456E02F195550C(0);
				unk_0x8810DC630928B398("FM_PRE_COUNTDOWN_30S");
				unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
				unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
				unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 0);
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xC80D31E4B587871C(Global_2512808.f_4693, 2))
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 5);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 5);
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			Global_2512808.f_4693 = 0;
			Global_2512808.f_4703 = -1;
			unk_0xAAB7D68F04F8C8BA("FM_COUNTDOWN_30S_KILL");
			unk_0x22456E02F195550C(0);
			unk_0x8810DC630928B398("FM_PRE_COUNTDOWN_30S");
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
			unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 0);
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 5);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 2);
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 5);
			}
		}
	}
}

var func_309()
{
	if (unk_0x6ADD12BF4D6D2587(func_310()))
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
	switch (Local_642.f_3)
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
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		Local_730.f_532[iVar0 /*42*/] = { Var1 };
		Local_730.f_532[iVar0 /*42*/].f_1 = func_93();
		if (Local_642.f_4[iVar0] > -1)
		{
			uVar44 = unk_0x2B957AC89DEBA5B6(Local_642.f_4[iVar0]);
			if (unk_0x012BC3F18B8C7807(uVar44))
			{
				iVar43 = unk_0x43E1A43A1AA9E0BE(iVar44);
				if (!func_14(iVar43, 0))
				{
					Local_730.f_532[iVar0 /*42*/] = Local_642.f_4[iVar0];
					Local_730.f_532[iVar0 /*42*/].f_1 = iVar43;
					Local_730.f_532[iVar0 /*42*/].f_9 = Local_2607[Local_642.f_4[iVar0] /*12*/].f_4;
					Local_730.f_532[iVar0 /*42*/].f_31 = -1;
					Local_730.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_313()
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 19);
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_642.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2607[iVar0 /*12*/].f_4, 0))
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
	
	func_271(&iVar1, &fVar2, iLocal_335, 1);
	switch (Local_642.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_318(sVar0, fVar2 >= 70f);
			if (unk_0x771D0F8F56A5FE6C(sVar0))
			{
				fVar2 = func_317(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x7141949B801AEE10(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x3A9A044699CCEF85();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_318(sVar0, bVar3);
			if (unk_0x771D0F8F56A5FE6C(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_317(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_317(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x7141949B801AEE10(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_340 != iLocal_335)
			{
				if (iLocal_335 > 0)
				{
					unk_0x4AFBCBFDE748D4E0(iLocal_342, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x922FC70048B5A79D(iLocal_342, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_340 = iLocal_335;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_333, 3))
		{
			if (func_243(1))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x872F1C1F8587CCC7(&iLocal_333, 3);
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_333, 3))
	{
		if (func_243(1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_333, 3);
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
		if (!unk_0x771D0F8F56A5FE6C(sParam0))
		{
			unk_0xE859EF37EA7362D3(sParam0);
		}
	}
	else if (unk_0x771D0F8F56A5FE6C(sParam0))
	{
		unk_0xE02E32C69260FBB7(sParam0);
	}
}

void func_319()
{
	int iVar0;
	
	if ((!func_151(unk_0x9EB17624F44A8DA4()) && !func_14(unk_0x9EB17624F44A8DA4(), 0)) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		iVar0 = func_337();
		if (iVar0 != Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_332) || func_336(iVar0, iLocal_332))
			{
				if (!func_335() || func_1(&uLocal_321, 1000, 0))
				{
					func_27(&uLocal_321, 0, 0);
					iLocal_332 = iVar0;
					Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4 = iVar0;
					func_322();
					if (iLocal_331 == 0)
					{
						iLocal_331 = unk_0xD1952A425B78FFC0();
					}
					if (Local_2992.f_11 == 0)
					{
						Local_2992.f_11 = unk_0xE3CCAFB1555348DF();
					}
				}
			}
		}
		iLocal_335 = func_320();
	}
}

int func_320()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_642.f_3)
	{
		case 0:
			fVar1 = unk_0x5249AFE23503DD05();
			break;
		
		case 1:
			fVar1 = unk_0x04B720F906900217();
			break;
		
		case 2:
			fVar1 = unk_0x3A9A044699CCEF85();
			break;
		
		case 3:
			fVar1 = unk_0x3682ED984C450F9F();
			break;
		
		case 4:
			fVar1 = unk_0x729402EB709E710E();
			break;
		
		case 5:
			fVar1 = unk_0xF103830CA9DBB44D();
			break;
		
		case 8:
			iVar0 = unk_0x338887B2D3371198();
			break;
		
		case 9:
			fVar1 = unk_0xCC9AACF142ADCD92();
			break;
		
		case 11:
			fVar1 = unk_0x2620512698D563B1();
			break;
		
		case 12:
			fVar1 = unk_0x2620512698D563B1();
			break;
		
		case 13:
			fVar1 = unk_0xC0B8128D694DABAA();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0xB89BB11E0945F6F0(iVar0);
	func_321(&iVar2);
	if (iVar2 == iLocal_334)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_333, 1))
			{
				func_27(&uLocal_323, 0, 0);
				Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4.f_2 = func_486(&uLocal_323, 0, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_333, 1);
			}
			else if ((func_486(&uLocal_323, 0, 0) % 1000) == 0)
			{
				Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4.f_2 = func_486(&uLocal_323, 0, 0);
			}
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_333, 1);
	}
	if ((func_21(iLocal_334, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_325, 2000, 0))
	{
		iVar2 = iLocal_334;
		unk_0x872F1C1F8587CCC7(&iLocal_333, 2);
	}
	else
	{
		iLocal_334 = iVar2;
		func_44(&uLocal_325);
		unk_0x0EE72DB1CD8A3B86(&iLocal_333, 2);
	}
	return iVar2;
}

void func_321(int iParam0)
{
	switch (Local_642.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((((unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
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
	if (!unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1, 2))
	{
		unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 2);
		func_323(1);
	}
}

void func_323(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
		{
			if (func_154())
			{
				func_328(0);
				func_327();
			}
			if (func_326(0))
			{
				uVar0 = func_196(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, 0);
				func_327();
			}
			if (func_326(func_325(func_307(unk_0x9EB17624F44A8DA4()))))
			{
				uVar0 = func_196(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, func_325(func_307(unk_0x9EB17624F44A8DA4())));
				func_327();
			}
			if (func_324())
			{
				func_327();
			}
			if (func_307(unk_0x9EB17624F44A8DA4()) > -1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 7);
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 7);
	}
}

int func_324()
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_325(int iParam0)
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
	return 14;
}

bool func_326(int iParam0)
{
	var uVar0;
	
	uVar0 = func_196(2469, -1, 0);
	return unk_0xC80D31E4B587871C(uVar0, iParam0);
}

void func_327()
{
	if (func_324())
	{
		Global_2436181.f_1040.f_16 = 1;
	}
}

void func_328(int iParam0)
{
	if (func_154())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_27(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_27(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_334(1);
		}
		if ((!unk_0x4916190900E76373() && !func_333()) && !func_329(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_329(int iParam0)
{
	if (func_330(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_331(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_331(int iParam0)
{
	return func_332(iParam0);
}

bool func_332(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_333()
{
	return Global_2447174.f_727;
}

void func_334(bool bParam0)
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_154())
		{
			if (func_12(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, 0);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, 0);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, 1);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(0);
		}
	}
}

int func_335()
{
	switch (Local_642.f_3)
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

int func_336(int iParam0, int iParam1)
{
	if (Local_642.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_337()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_352())
	{
		if (Local_642.f_3 == 14)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_351(unk_0xFC1458A37D98B502(), 0) == -1)
			{
				iVar2 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if ((!func_350(&iVar2, 0) || unk_0x82FF3DFBC3965CC0(iVar2) != joaat("dodo")) && unk_0x0ACC2116170FA204(iVar2))
				{
					func_343(Local_642.f_3 != 14, 1, 0);
					if (func_342())
					{
						iVar3 = func_341();
						if (iVar3 >= 0)
						{
							if (!unk_0xC80D31E4B587871C(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_8[func_340(iVar3)], func_339(iVar3)))
							{
								iLocal_336++;
								unk_0x872F1C1F8587CCC7(&(Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_8[func_340(iVar3)]), func_339(iVar3));
							}
						}
					}
					iVar0 = iLocal_336;
				}
			}
		}
		else
		{
			iVar0 = func_338();
		}
	}
	else
	{
		unk_0xD705126DBAD7A0C6(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0xB89BB11E0945F6F0(iVar0);
}

int func_338()
{
	switch (Local_642.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_339(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_340(iParam0) * 31);
}

int func_340(int iParam0)
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

int func_341()
{
	return iLocal_98;
}

int func_342()
{
	if (iLocal_105 == 1)
	{
		iLocal_105 = 0;
		return 1;
	}
	return 0;
}

void func_343(bool bParam0, bool bParam1, int iParam2)
{
	func_345(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_306.f_2 < Local_309.f_2)
		{
			Local_306.f_2 = 0f;
		}
		else
		{
			Local_309.f_2 = 0f;
		}
		if (Local_312.f_2 < Local_315.f_2)
		{
			Local_312.f_2 = 0f;
		}
		else
		{
			Local_315.f_2 = 0f;
		}
	}
	switch (iLocal_99)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Local_109[iLocal_98 /*3*/]) < fLocal_305)
				{
					if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
					{
						if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
						{
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0))
							{
								bLocal_100 = true;
								iLocal_99 = 1;
							}
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
							{
								bLocal_101 = true;
								iLocal_99 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) && !unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					func_344();
				}
				else if (!unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
				{
					func_344();
				}
				else if (!unk_0x0ACC2116170FA204(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && !bParam1)
				{
					func_344();
				}
				if (bLocal_100)
				{
					if (iLocal_104)
					{
						if (iLocal_103)
						{
							if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
							{
								func_344();
								iLocal_105 = 1;
							}
						}
						else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							iLocal_103 = 1;
						}
						else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							func_344();
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						func_344();
					}
				}
				else if (bLocal_101)
				{
					if (iLocal_104)
					{
						if (iLocal_102)
						{
							if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
							{
								func_344();
								iLocal_105 = 1;
							}
						}
						else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							iLocal_102 = 1;
						}
						else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							func_344();
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						func_344();
					}
				}
			}
			break;
	}
}

void func_344()
{
	bLocal_100 = false;
	bLocal_101 = false;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_99 = 0;
}

void func_345(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_106 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_349(iVar0)) && (uParam1 || !func_348(iVar0)))
		{
			if (func_347(Local_106, Local_109[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_106, Local_109[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_98 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_346(iLocal_98);
}

void func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_306 = { 1103.014f, -233.0374f, 56.13004f };
			Local_309 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_318 = 30f;
			Local_312 = { 1093.589f, -248.5926f, 56.88639f };
			Local_315 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_306 = { 1044.182f, -324.5904f, 49.33408f };
			Local_309 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_318 = 30f;
			Local_312 = { 1007.983f, -320.6159f, 48.4543f };
			Local_315 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_306 = { 916.599f, -419.8782f, 35.62748f };
			Local_309 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_318 = 7f;
			Local_312 = { 912.1362f, -420.5161f, 35.38034f };
			Local_315 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_306 = { 757.7189f, -472.924f, 19.2535f };
			Local_309 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_318 = 20.75f;
			Local_312 = { 744.9114f, -480.7373f, 19.06514f };
			Local_315 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_306 = { 680.3677f, -581.1792f, 14.2145f };
			Local_309 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_318 = 45f;
			Local_312 = { 667.3692f, -610.5356f, 13.85401f };
			Local_315 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_306 = { 644.2497f, -844.7504f, 12.36707f };
			Local_309 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_318 = 25f;
			Local_312 = { 644.3659f, -859.3878f, 12.59677f };
			Local_315 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_306 = { 634.972f, -1011.64f, 10.92594f };
			Local_309 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_318 = 25f;
			Local_312 = { 634.9612f, -1029.123f, 10.61846f };
			Local_315 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_306 = { 645.7223f, -1191.215f, 10.45198f };
			Local_309 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_318 = 50f;
			Local_312 = { 645.7223f, -1228.966f, 10.98015f };
			Local_315 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_306 = { 642.1216f, -1295.73f, 9.005976f };
			Local_309 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_318 = 7f;
			Local_312 = { 644.7772f, -1298.168f, 9.128529f };
			Local_315 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_306 = { 686.5675f, -1444.71f, 9.065001f };
			Local_309 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_318 = 25f;
			Local_312 = { 682.3027f, -1429.872f, 9.890836f };
			Local_315 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_306 = { 718.7617f, -1734.313f, 9.082874f };
			Local_309 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_318 = 30f;
			Local_312 = { 717.5355f, -1748.646f, 9.363478f };
			Local_315 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_306 = { 694.3165f, -2049.806f, 0.009695f };
			Local_309 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_318 = 30f;
			Local_312 = { 693.1836f, -2063.225f, 0.429037f };
			Local_315 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_306 = { 642.6671f, -2494.551f, 0.468485f };
			Local_309 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_318 = 20f;
			Local_312 = { 647.0339f, -2506.202f, 0.583701f };
			Local_315 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_306 = { 691.8235f, -2558.219f, 0.363352f };
			Local_309 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_318 = 10.25f;
			Local_312 = { 695.7928f, -2561.034f, 0.346731f };
			Local_315 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_306 = { 723.6254f, -2562.171f, 0.255647f };
			Local_309 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_318 = 15f;
			Local_312 = { 735.765f, -2561.935f, 0.311182f };
			Local_315 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_306 = { 891.4387f, -2603.12f, 0f };
			Local_309 = { 704.4932f, -2634.793f, 45f };
			fLocal_318 = 20f;
			Local_312 = { 893.2578f, -2616.235f, 0f };
			Local_315 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_306 = { -2669.587f, 2491.96f, 2.043799f };
			Local_309 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_318 = 26.5f;
			Local_312 = { -2687.606f, 2494.868f, 2.608733f };
			Local_315 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_306 = { -1986.173f, 4521.799f, 0f };
			Local_309 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_318 = 17f;
			Local_312 = { -1995.668f, 4531.259f, 0f };
			Local_315 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_306 = { -526.0265f, 4472.442f, 0f };
			Local_309 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_318 = 10f;
			Local_312 = { -519.9281f, 4476.346f, 0f };
			Local_315 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_306 = { 98.1615f, 3384.489f, 45.45169f };
			Local_309 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_318 = 8f;
			Local_312 = { 152.6802f, 3346.793f, 45.02156f };
			Local_315 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_306 = { 147.8606f, 3406.796f, 38.03672f };
			Local_309 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_318 = 14.5f;
			Local_312 = { 130.0916f, 3425.417f, 38.05672f };
			Local_315 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_306 = { 2830.972f, 4967.14f, 34.56013f };
			Local_309 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_318 = 10f;
			Local_312 = { 2826.767f, 4964.185f, 34.10636f };
			Local_315 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_306 = { -151.5764f, 4264.417f, 31.04735f };
			Local_309 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_318 = 10f;
			Local_312 = { -148.3842f, 4261.071f, 31.57409f };
			Local_315 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_306 = { -426.6919f, 2964.272f, 14.848f };
			Local_309 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_318 = 7f;
			Local_312 = { -425.0283f, 2967.861f, 15.22699f };
			Local_315 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_306 = { -192.3414f, 2864.916f, 30.72595f };
			Local_309 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_318 = 10f;
			Local_312 = { -192.0129f, 2871.603f, 29.99943f };
			Local_315 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_306 = { 2539.185f, 2228.772f, 18.6102f };
			Local_309 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_318 = 10f;
			Local_312 = { 2543.708f, 2231.402f, 18.331f };
			Local_315 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_306 = { 2954.087f, 815.7209f, 0.037901f };
			Local_309 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_318 = 35f;
			Local_312 = { 2966.123f, 806.8889f, 0.544056f };
			Local_315 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_306 = { 2329.673f, -459.6648f, 70.24277f };
			Local_309 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_318 = 12f;
			Local_312 = { 2324.752f, -455.5238f, 70.25145f };
			Local_315 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_306 = { 1943.428f, -753.251f, 80.17905f };
			Local_309 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_318 = 7f;
			Local_312 = { 1943.366f, -758.287f, 80.32291f };
			Local_315 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_306 = { -271.2849f, -2414.993f, -10f };
			Local_309 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_318 = 30f;
			Local_312 = { -279.8399f, -2427.212f, -10f };
			Local_315 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_306 = { -1483f, 2691.428f, -10f };
			Local_309 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_318 = 12f;
			Local_312 = { -1478.152f, 2696.688f, -10f };
			Local_315 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_306 = { 222.1519f, -2343.487f, 0.039199f };
			Local_309 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_318 = 12f;
			Local_312 = { 216.959f, -2343.487f, 0.207734f };
			Local_315 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_306 = { 346.4622f, -2244.374f, 0.159779f };
			Local_309 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_318 = 20f;
			Local_312 = { 359.609f, -2244.468f, 0.129684f };
			Local_315 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_306 = { -1859.68f, -322.6357f, 56.16368f };
			Local_309 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_318 = 7.5f;
			Local_312 = { -1860.27f, -327.8634f, 57.543f };
			Local_315 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_306 = { -680.2632f, -600.818f, 69.11289f };
			Local_309 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_318 = 31.5f;
			Local_312 = { -680.6077f, -618.3658f, 69.27496f };
			Local_315 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_306 = { -1468.096f, -591.7158f, 67.05518f };
			Local_309 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_318 = 11.75f;
			Local_312 = { -1474.903f, -591.1215f, 67.08091f };
			Local_315 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_306 = { -1544.958f, -537.1475f, 72.44347f };
			Local_309 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_318 = 11.75f;
			Local_312 = { -1541.008f, -541.5494f, 71.61972f };
			Local_315 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_306 = { 333.2108f, -2727.274f, 20.71663f };
			Local_309 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_318 = 20f;
			Local_312 = { 343.1127f, -2727.236f, 20.23613f };
			Local_315 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_306 = { 1928.071f, 6228.355f, 43.49398f };
			Local_309 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_318 = 13f;
			Local_312 = { 1931.82f, 6235.634f, 43.37382f };
			Local_315 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_306 = { -736.4309f, -1590.921f, 10.80892f };
			Local_309 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_318 = 15f;
			Local_312 = { -727.2307f, -1585.221f, 11.78027f };
			Local_315 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_306 = { -676.3775f, -1548.553f, 12.33747f };
			Local_309 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_318 = 25f;
			Local_312 = { -654.203f, -1536.146f, 9.191055f };
			Local_315 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_306 = { -624.2344f, -1537.045f, 12.60193f };
			Local_309 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_318 = 8f;
			Local_312 = { -615.4003f, -1536.65f, 12.40271f };
			Local_315 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_306 = { -492.5057f, -1632.457f, 24.3307f };
			Local_309 = { -418.2088f, -1487.452f, 0f };
			fLocal_318 = 25f;
			Local_312 = { -486.2016f, -1636.095f, 24.20805f };
			Local_315 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_306 = { -359.3541f, -1639.693f, 13.13455f };
			Local_309 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_318 = 25f;
			Local_312 = { -378.1518f, -1705.66f, 12.47196f };
			Local_315 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_306 = { -243.4436f, -1814.623f, 25.69465f };
			Local_309 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_318 = 25f;
			Local_312 = { -235.1319f, -1822.094f, 25.86542f };
			Local_315 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_306 = { 84.55537f, -2046.159f, 13.30767f };
			Local_309 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_318 = 25f;
			Local_312 = { 17.90788f, -2035.773f, 12.62706f };
			Local_315 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_306 = { 221.5029f, -2232.766f, 9.88676f };
			Local_309 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_318 = 8f;
			Local_312 = { 218.583f, -2232.766f, 9.886198f };
			Local_315 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_306 = { 221.6518f, -2184.635f, 11.66457f };
			Local_309 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_318 = 8f;
			Local_312 = { 217.8995f, -2184.635f, 11.5405f };
			Local_315 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_306 = { 2326.57f, 1096.031f, 76.31458f };
			Local_309 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_318 = 21f;
			Local_312 = { 2334.453f, 1103.067f, 76.26603f };
			Local_315 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_306 = { 2379.442f, 1150.776f, 58.79632f };
			Local_309 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_318 = 12f;
			Local_312 = { 2374.064f, 1146.282f, 58.83331f };
			Local_315 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_306 = { -1179.405f, -355.2554f, 56.53003f };
			Local_309 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_318 = 12.5f;
			Local_312 = { -1178.385f, -361.8784f, 56.15081f };
			Local_315 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_306 = { -921.3846f, -384.94f, 137.0181f };
			Local_309 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_318 = 16f;
			Local_312 = { -914.1658f, -387.9444f, 137.0794f };
			Local_315 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_306 = { -740.2564f, 246.4529f, 132.2922f };
			Local_309 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_318 = 22f;
			Local_312 = { -726.6429f, 253.0676f, 132.3319f };
			Local_315 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_306 = { -771.2068f, 268.2729f, 132.1689f };
			Local_309 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_318 = 16f;
			Local_312 = { -770.8035f, 310.8625f, 137.4161f };
			Local_315 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_306 = { 259.2205f, 135.4146f, 136.7083f };
			Local_309 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_318 = 16f;
			Local_312 = { 261.9694f, 142.9676f, 136.6889f };
			Local_315 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_306 = { 393.548f, -30.87166f, 152.6635f };
			Local_309 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_318 = 8f;
			Local_312 = { 390.5358f, -36.08882f, 152.7813f };
			Local_315 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_306 = { 114.3139f, -648.4297f, 261.8488f };
			Local_309 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_318 = 20f;
			Local_312 = { 124.8467f, -646.6575f, 261.8488f };
			Local_315 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_306 = { -215.919f, -823.8436f, 126.0224f };
			Local_309 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_318 = 20f;
			Local_312 = { -225.397f, -820.3937f, 126.0812f };
			Local_315 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_306 = { -296.4725f, -802.0815f, 95.40108f };
			Local_309 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_318 = 20f;
			Local_312 = { -305.4602f, -798.8369f, 95.48194f };
			Local_315 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_306 = { -292.3034f, -823.3569f, 95.37621f };
			Local_309 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_318 = 20f;
			Local_312 = { -288.9206f, -814.022f, 95.37556f };
			Local_315 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_306 = { -256.3589f, -714.7838f, 110.1617f };
			Local_309 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_318 = 20f;
			Local_312 = { -253.7723f, -705.6632f, 110.1736f };
			Local_315 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_306 = { 1808.214f, 1949.246f, 71.73707f };
			Local_309 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_318 = 9.75f;
			Local_312 = { 1802.786f, 1950.262f, 71.74002f };
			Local_315 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_306 = { 2388.733f, 2931.941f, 46.62681f };
			Local_309 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_318 = 10f;
			Local_312 = { 2392.547f, 2934.867f, 46.6268f };
			Local_315 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_306 = { 2700.056f, 4836.381f, 42.07854f };
			Local_309 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_318 = 20.75f;
			Local_312 = { 2685.672f, 4821.653f, 42.18471f };
			Local_315 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_306 = { -1053.446f, 4766.245f, 234.3251f };
			Local_309 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_318 = 5f;
			Local_312 = { -1051.414f, 4767.193f, 234.4293f };
			Local_315 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_347(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE97272C977DEADD3((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
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

int func_349(int iParam0)
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

int func_350(var uParam0, int iParam1)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*uParam0, 0) || iParam1)
		{
			if (unk_0x0BA31FF7931F3DD3(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
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

int func_352()
{
	switch (Local_642.f_3)
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

int func_353(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_369() < 10)
	{
		iVar0 = func_368();
		func_354(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_354(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_355(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_355(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_364(unk_0x9EB17624F44A8DA4()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_363(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_358(Var0))
		{
			Global_2405047.f_44.f_64 = func_357(unk_0x9EB17624F44A8DA4());
			func_356(Var0, iParam8);
		}
	}
}

void func_356(struct<12> Param0, int iParam12)
{
	Global_2405047.f_361[iParam12 /*12*/] = { Param0 };
	Global_2405047.f_361[iParam12 /*12*/].f_9 = 1;
}

int func_357(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_358(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405047.f_44[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_359(Global_2405047.f_44[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_359(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_362(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_360(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_362(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_360(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_360(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_361(Param0, Param3, Var0, Var3);
}

int func_361(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_362(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_363(var uParam0, var uParam1)
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

int func_364(int iParam0)
{
	if (((func_367(iParam0, 1) || func_366(iParam0)) || func_101(iParam0, 0)) || func_365(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

int func_366(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

bool func_367(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_357(iParam0) != 0;
	}
	return func_330(iParam0, bParam1);
}

int func_368()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_369()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_370(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	return unk_0x0683D2027E169355(0);
}

char* func_371(int iParam0)
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

char* func_372(int iParam0)
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

char* func_373(int iParam0)
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

void func_374()
{
	if (!func_144())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_140();
}

void func_375(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_349(iVar0) && !func_348(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_109[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_376()
{
	if (!func_352())
	{
		if (Local_642.f_3 == 14)
		{
			func_379();
		}
		Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4.f_1 = func_338();
	}
	else if ((!unk_0xC80D31E4B587871C(Global_1574409.f_1, 4) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 5)) && !func_378(unk_0x9EB17624F44A8DA4()))
	{
		func_377();
	}
}

void func_377()
{
	switch (Local_642.f_3)
	{
		case 0:
			unk_0x24A693BA506F94EC(8, 2);
			break;
		
		case 1:
			unk_0x24A693BA506F94EC(13, 2);
			break;
		
		case 2:
			unk_0x24A693BA506F94EC(4, 2);
			break;
		
		case 4:
			unk_0x24A693BA506F94EC(1, 2);
			break;
		
		case 3:
			unk_0x24A693BA506F94EC(2, 2);
			break;
		
		case 5:
			unk_0x24A693BA506F94EC(3, 2);
			break;
		
		case 6:
			unk_0x24A693BA506F94EC(11, 3);
			break;
		
		case 7:
			unk_0x24A693BA506F94EC(14, 1);
			break;
		
		case 8:
			unk_0x24A693BA506F94EC(29, 2);
			break;
		
		case 9:
			unk_0x24A693BA506F94EC(12, 2);
			break;
		
		case 10:
			unk_0x24A693BA506F94EC(10, 2);
			break;
		
		case 11:
			unk_0x24A693BA506F94EC(18, 2);
			break;
		
		case 12:
			unk_0x24A693BA506F94EC(20, 2);
			break;
		
		case 13:
			unk_0x24A693BA506F94EC(27, 2);
			break;
		
		case 15:
			unk_0x24A693BA506F94EC(26, 1);
			break;
		
		case 16:
			unk_0x24A693BA506F94EC(25, 1);
			break;
		
		case 17:
			unk_0x24A693BA506F94EC(22, 1);
			break;
		
		case 18:
			unk_0x24A693BA506F94EC(24, 1);
			break;
	}
	unk_0x872F1C1F8587CCC7(&iLocal_333, 8);
}

bool func_378(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_379()
{
	Local_109[0 /*3*/] = { 1083f, -231f, 60f };
	Local_109[1 /*3*/] = { 1024f, -325f, 60f };
	Local_109[2 /*3*/] = { 910f, -401f, 43f };
	Local_109[3 /*3*/] = { 721f, -457f, 26f };
	Local_109[4 /*3*/] = { 643f, -579f, 26f };
	Local_109[5 /*3*/] = { 590f, -851f, 26f };
	Local_109[6 /*3*/] = { 590f, -1023f, 16f };
	Local_109[7 /*3*/] = { 582f, -1205f, 24f };
	Local_109[8 /*3*/] = { 608f, -1335f, 16f };
	Local_109[9 /*3*/] = { 640f, -1434f, 16f };
	Local_109[10 /*3*/] = { 671f, -1742f, 20f };
	Local_109[11 /*3*/] = { 651f, -2046f, 16f };
	Local_109[12 /*3*/] = { 603f, -2505f, 9f };
	Local_109[13 /*3*/] = { 673f, -2582f, 4f };
	Local_109[14 /*3*/] = { 728f, -2594f, 10f };
	Local_109[15 /*3*/] = { 794f, -2624f, 27f };
	Local_109[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_109[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_109[18 /*3*/] = { -513f, 4427f, 40f };
	Local_109[19 /*3*/] = { 126f, 3366f, 40f };
	Local_109[20 /*3*/] = { 143f, 3418f, 36f };
	Local_109[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_109[22 /*3*/] = { -162f, 4249f, 40f };
	Local_109[23 /*3*/] = { -408f, 2964f, 20f };
	Local_109[24 /*3*/] = { -181f, 2862f, 38f };
	Local_109[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_109[26 /*3*/] = { 2950f, 803f, 8f };
	Local_109[27 /*3*/] = { 2369f, -409f, 80f };
	Local_109[28 /*3*/] = { 1906f, -755f, 84f };
	Local_109[29 /*3*/] = { -403f, -2333f, 40f };
	Local_109[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_109[31 /*3*/] = { 219f, -2315f, 5f };
	Local_109[32 /*3*/] = { 350f, -2315f, 5f };
	Local_109[33 /*3*/] = { -1848f, -333f, 75f };
	Local_109[34 /*3*/] = { -693f, -608f, 69f };
	Local_109[35 /*3*/] = { -1461f, -582f, 53f };
	Local_109[36 /*3*/] = { -1553f, -546f, 59f };
	Local_109[37 /*3*/] = { 338f, -2758f, 23f };
	Local_109[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_109[39 /*3*/] = { -713f, -1538f, 13f };
	Local_109[40 /*3*/] = { -659f, -1518f, 13f };
	Local_109[41 /*3*/] = { -620f, -1502f, 16f };
	Local_109[42 /*3*/] = { -445f, -1575f, 26f };
	Local_109[43 /*3*/] = { -373f, -1680f, 19f };
	Local_109[44 /*3*/] = { -212f, -1805f, 29f };
	Local_109[45 /*3*/] = { 47f, -2040f, 18f };
	Local_109[46 /*3*/] = { 223f, -2240f, 6f };
	Local_109[47 /*3*/] = { 218f, -2189f, 6f };
	Local_109[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_109[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_109[50 /*3*/] = { -1186f, -365f, 46f };
	Local_109[51 /*3*/] = { -916f, -407f, 93f };
	Local_109[52 /*3*/] = { -726f, 235f, 105f };
	Local_109[53 /*3*/] = { -774f, 286f, 112f };
	Local_109[54 /*3*/] = { 271f, 134f, 125f };
	Local_109[55 /*3*/] = { 377f, -28f, 125f };
	Local_109[56 /*3*/] = { 121f, -703f, 150f };
	Local_109[57 /*3*/] = { -204f, -784f, 74f };
	Local_109[58 /*3*/] = { -287f, -774f, 72f };
	Local_109[59 /*3*/] = { -272f, -824f, 71f };
	Local_109[60 /*3*/] = { -230f, -723f, 80f };
	Local_109[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_109[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_109[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_109[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_380(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
	}
}

void func_381(var uParam0, int iParam1)
{
	if (func_307(unk_0x9EB17624F44A8DA4()) == 133 && iParam1)
	{
		Global_2512808.f_4777 = uParam0;
	}
	else
	{
		Global_2512808.f_4777 = -1;
	}
}

void func_382(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
	}
	Global_2512808.f_4703 = -1;
	bVar0 = (func_101(unk_0x9EB17624F44A8DA4(), 0) && func_97(unk_0x9EB17624F44A8DA4()));
	if (bParam6)
	{
		func_380(21, 1);
	}
	else
	{
		func_398(iParam0, -1);
		if (func_8(unk_0x9EB17624F44A8DA4()))
		{
			Global_1574409.f_3 = iParam0;
		}
		else
		{
			func_397(iParam0);
		}
		Global_1574409.f_4 = -1;
		if (func_8(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 5);
		}
		if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 4);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 20);
		if (func_396(iParam0))
		{
			func_395();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_392(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x94BD6F0436473406(fParam2);
			if (iParam0 == 146)
			{
				unk_0xC0EBC1452FCAB15C(0);
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			}
		}
		if (func_390(iParam0))
		{
			unk_0xC0EBC1452FCAB15C(0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_388(1);
				if (func_250(0))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_386(1);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (bParam5)
		{
			func_385();
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_383(iParam0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
			}
		}
	}
	Global_2492048 = 1;
}

int func_383(int iParam0)
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
	if (func_384())
	{
		return 1;
	}
	return 0;
}

int func_384()
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

void func_385()
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4694), 0);
}

void func_386(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92885.f_8 = 1;
	}
	else
	{
		Global_92885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_387(iVar0);
		iVar0++;
	}
}

void func_387(int iParam0)
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_388(int iParam0)
{
	if (func_389() && iParam0)
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

int func_389()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_391(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_391(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

void func_392(float fParam0)
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_393())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && unk_0xE97272C977DEADD3(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = unk_0xBBA15366508D1BDE();
}

int func_393()
{
	switch (func_394())
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

int func_394()
{
	return Global_25233;
}

void func_395()
{
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_215 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4529), 1);
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_397(int iParam0)
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/] = iParam0;
}

void func_398(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_326(0) || func_326(func_325(iVar0)))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
	}
}

int func_399()
{
	switch (Local_642.f_3)
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

void func_400()
{
	Global_1665283 = 1;
	if (!unk_0xC80D31E4B587871C(Global_2520777, 0))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 0);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 0);
	}
	if (!unk_0xC80D31E4B587871C(Global_2520777, 1))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 1);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 1);
	}
	if (!unk_0xC80D31E4B587871C(Global_2520777, 5))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 5);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 5);
	}
	if (unk_0x546F10CBA6C484DA(-355737150))
	{
		unk_0xB94AAB49E0BB01DB(-355737150, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-580979506))
	{
		unk_0xB94AAB49E0BB01DB(-580979506, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1426452475))
	{
		unk_0xB94AAB49E0BB01DB(-1426452475, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(745417724))
	{
		unk_0xB94AAB49E0BB01DB(745417724, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1305304906))
	{
		unk_0xB94AAB49E0BB01DB(-1305304906, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1543175077))
	{
		unk_0xB94AAB49E0BB01DB(-1543175077, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-811770997))
	{
		unk_0xB94AAB49E0BB01DB(-811770997, 0, 0, 0);
	}
}

int func_401()
{
	switch (Local_642.f_3)
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

void func_402()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_642.f_3))
	{
		if (Local_642.f_3 == 1 || Local_642.f_3 == 6)
		{
			iVar0 = func_424(unk_0x9EB17624F44A8DA4(), 1);
			iVar1 = func_189(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
				{
					unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), 1, 0, 0);
					func_403(1);
				}
			}
			else
			{
				unk_0xCB6210AD9EF51115(unk_0x9EB17624F44A8DA4(), 1);
			}
		}
	}
}

void func_403(bool bParam0)
{
	int iVar0;
	
	if (unk_0x4CDD2D1D66ED1DE4(unk_0xFC1458A37D98B502(), 5) != 0)
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, 1);
		unk_0x3830636EEBFFD9EA(unk_0x9EB17624F44A8DA4(), func_196(582, -1, 0));
		if (func_423())
		{
			unk_0x0262CAB1EA8E94F7(unk_0x9EB17624F44A8DA4(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_422())
		{
			unk_0x0262CAB1EA8E94F7(unk_0x9EB17624F44A8DA4(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_419(3610, -1, -1))
		{
		}
		iVar0 = func_196(2037, -1, 0);
		unk_0xE1D0F0036E01DD8A(unk_0x9EB17624F44A8DA4(), func_418(unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4()), iVar0));
		if (func_247(0))
		{
			unk_0x3830636EEBFFD9EA(unk_0x9EB17624F44A8DA4(), func_196(582, -1, 0));
		}
		else
		{
			unk_0x3830636EEBFFD9EA(unk_0x9EB17624F44A8DA4(), func_417(Global_2521061));
		}
		func_416(unk_0x9EB17624F44A8DA4(), iVar0);
		unk_0x440777357A46FCC8(unk_0x9EB17624F44A8DA4(), 5, func_409(unk_0xFC1458A37D98B502(), iVar0), func_408(unk_0xFC1458A37D98B502(), iVar0), 0);
		func_407(func_196(2037, -1, 0), 1);
		Global_2512808.f_276 = 1;
		func_404(unk_0x9EB17624F44A8DA4(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_404(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3A711520F83BAE98())
	{
		func_406();
		if (iParam2 == -1)
		{
			iParam2 = func_196(2037, -1, 0);
		}
		unk_0x440777357A46FCC8(iParam0, 5, func_409(unk_0x25D049AAC4603E65(iParam0), iParam2), func_408(unk_0x25D049AAC4603E65(iParam0), iParam2), 0);
		unk_0xE1D0F0036E01DD8A(iParam0, func_418(unk_0x25D049AAC4603E65(iParam0), iParam2));
		unk_0x03924C68EFCBC511(unk_0x25D049AAC4603E65(iParam0), 5, func_409(unk_0x25D049AAC4603E65(iParam0), iParam2), func_408(unk_0x25D049AAC4603E65(iParam0), iParam2), func_418(unk_0x25D049AAC4603E65(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_196(582, -1, 0);
		}
		if (func_247(1) && func_405(iParam0))
		{
			unk_0x3830636EEBFFD9EA(iParam0, func_417(Global_2521061));
		}
		else
		{
			unk_0x3830636EEBFFD9EA(iParam0, iParam1);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_28, 4))
		{
			unk_0x3830636EEBFFD9EA(iParam0, Global_1574339);
			unk_0x0262CAB1EA8E94F7(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_416(iParam0, iParam2);
		unk_0x2217C45231E6A537(unk_0x25D049AAC4603E65(iParam0), 177, 1);
	}
}

bool func_405(int iParam0)
{
	return func_96(iParam0, 10);
}

void func_406()
{
	Global_70832 = 0;
	Global_70833 = -1;
	Global_70834 = -1;
	Global_70835 = -1;
	Global_70836 = -1;
	Global_70837 = -1;
}

void func_407(int iParam0, int iParam1)
{
	if (unk_0x3A711520F83BAE98())
	{
		func_406();
		func_187(2037, iParam0, -1, 1, 0);
		unk_0x440777357A46FCC8(unk_0x9EB17624F44A8DA4(), 5, func_409(unk_0xFC1458A37D98B502(), iParam0), func_408(unk_0xFC1458A37D98B502(), iParam0), 0);
		func_416(unk_0x9EB17624F44A8DA4(), iParam0);
		unk_0xE1D0F0036E01DD8A(unk_0x9EB17624F44A8DA4(), func_418(unk_0xFC1458A37D98B502(), iParam0));
		if ((iParam1 && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && unk_0x4CDD2D1D66ED1DE4(unk_0xFC1458A37D98B502(), 5) != 0)
		{
			func_404(unk_0x9EB17624F44A8DA4(), -1, -1);
		}
	}
}

int func_408(var uParam0, int iParam1)
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

var func_409(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x4CDD2D1D66ED1DE4(uParam0, 9) != false;
	iVar1 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
	iVar2 = unk_0xE1AE92097550A727(iParam0, 11, unk_0x4CDD2D1D66ED1DE4(iParam0, 11), unk_0xDCC2BD4C56470D10(iParam0, 11));
	iVar3 = unk_0xE1AE92097550A727(iParam0, 4, unk_0x4CDD2D1D66ED1DE4(iParam0, 4), unk_0xDCC2BD4C56470D10(iParam0, 4));
	if ((((!bVar0 == Global_70832 || !iParam1 == Global_70833) || !iVar1 == Global_70834) || !iVar2 == Global_70835) || !iVar3 == Global_70836)
	{
		Global_70832 = bVar0;
		Global_70833 = iParam1;
		Global_70834 = iVar1;
		Global_70835 = iVar2;
		Global_70836 = iVar3;
		Global_70837 = func_410(iParam0, iParam1);
	}
	return Global_70837;
}

int func_410(int iParam0, int iParam1)
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
	
	iVar0 = unk_0x4CDD2D1D66ED1DE4(uParam0, 11);
	if (unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x82FF3DFBC3965CC0(iParam0);
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
	uVar4 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
	if (unk_0x6C297174CFC8C5B2(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		return func_415(iParam0, iParam1);
	}
	if (func_414(iParam0))
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
		iVar5 = unk_0xE1AE92097550A727(iParam0, 11, iVar0, unk_0xDCC2BD4C56470D10(iParam0, 11));
		if (unk_0x6C297174CFC8C5B2(iVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("DRESS"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("HOODED_JACKET"), 0))
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
			else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_415(iParam0, iParam1) + 15;
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x6C297174CFC8C5B2(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_413(iVar5, 0);
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
						iVar0 = func_412(iVar5);
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
						iVar0 = func_412(iVar5);
						break;
					}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_411(iVar5, 0);
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
					iVar0 = func_412(iVar5);
					break;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x6C297174CFC8C5B2(iVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x6C297174CFC8C5B2(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x6C297174CFC8C5B2(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_415(iParam0, iParam1) + 15;
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x6C297174CFC8C5B2(iVar5, -1086258388, 0) || unk_0x6C297174CFC8C5B2(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_415(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, -872449705, 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, 144417099, 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, -102825006, 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_21"), 0))
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
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x6C297174CFC8C5B2(iVar5, joaat("AIR_DRAW_0"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return func_415(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return func_415(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, 970679185, 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, 83294665, 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, 382246252, 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("IE_DRAW_5"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("ASSAULT_DRAW_0"), 0))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x6C297174CFC8C5B2(iVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0x6C297174CFC8C5B2(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x6C297174CFC8C5B2(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x6C297174CFC8C5B2(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_412(iVar5);
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

int func_411(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_413(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x6C297174CFC8C5B2(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_414(int iParam0)
{
	if (unk_0x6C297174CFC8C5B2(unk_0xE1AE92097550A727(uParam0, 4, unk_0x4CDD2D1D66ED1DE4(uParam0, 4), unk_0xDCC2BD4C56470D10(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_415(var uParam0, int iParam1)
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

void func_416(int iParam0, int iParam1)
{
	if (func_423())
	{
		if (iParam1 > 51)
		{
			unk_0x9925526A3F4F2570(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else if (iParam1 > 46)
		{
			unk_0x9925526A3F4F2570(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x9925526A3F4F2570(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x9925526A3F4F2570(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x7FC5A62030D9EF74(iParam0);
		}
	}
	else if (func_422())
	{
		if (iParam1 > 0)
		{
			unk_0x9925526A3F4F2570(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x7FC5A62030D9EF74(iParam0);
		}
	}
}

int func_417(var uParam0)
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

int func_418(var uParam0, int iParam1)
{
	return 0;
}

int func_419(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_421(iParam0, iParam1);
	uVar2 = func_420(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_420(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_421(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

bool func_422()
{
	return unk_0x21EA5D4DC72DE119(joaat("mppilot"));
}

bool func_423()
{
	return unk_0x21EA5D4DC72DE119(joaat("mplts"));
}

int func_424(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_193(iParam0);
}

void func_425()
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
	
	if ((((!func_7(unk_0x9EB17624F44A8DA4()) && !func_151(unk_0x9EB17624F44A8DA4())) && !func_301()) && !func_436(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1)) && !func_435(unk_0x9EB17624F44A8DA4()))
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			bVar11 = func_5(Local_642.f_3);
			bVar12 = unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0);
			bVar13 = func_433();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_642.f_67[iVar4 /*2*/].f_1;
				if (unk_0x918CA1BFFAA03556(uVar14) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == unk_0xF32FBF2453AC1753(uVar14))
						{
							func_323(1);
						}
					}
					unk_0x872F1C1F8587CCC7(&uVar5, iVar4);
					if (bVar11 && func_38(Local_642.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(uVar14), 1) };
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
			if (func_39(Local_642.f_3))
			{
				unk_0x872F1C1F8587CCC7(&uVar5, 31);
			}
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = uVar5;
			if (func_5(Local_642.f_3))
			{
				if ((unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()) || (unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502()) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_642.f_3, iVar7, &Var0, &uVar3))
						{
							func_432(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_431(Var0, 1, 0);
							func_427(10, 0, 0, 0, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_333, 5);
						}
					}
				}
				else
				{
					func_426();
				}
			}
		}
	}
	else
	{
		func_426();
	}
}

void func_426()
{
	if (unk_0xC80D31E4B587871C(iLocal_333, 5))
	{
		func_159();
		func_157();
		unk_0x0EE72DB1CD8A3B86(&iLocal_333, 5);
		func_156();
	}
}

void func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436181.f_1777.f_690.f_16 != func_93())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_428())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_428()
{
	if (((func_208(unk_0x9EB17624F44A8DA4()) == 229 || func_208(unk_0x9EB17624F44A8DA4()) == 191) || func_430()) || func_429())
	{
		return 0;
	}
	return 1;
}

bool func_429()
{
	return Global_1574307;
}

int func_430()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_431(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405047.f_44.f_49 = { Param0 };
	Global_2405047.f_44.f_52 = iParam3;
	Global_2405047.f_44.f_53 = iParam4;
}

void func_432(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	else
	{
		Global_2413426.f_6 = unk_0xBBA15366508D1BDE();
	}
	Var0.f_6 = Global_2413426.f_6;
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
	if (func_364(unk_0x9EB17624F44A8DA4()))
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
	Global_2413426 = { Var0 };
}

int func_433()
{
	if (((((func_434(unk_0x9EB17624F44A8DA4()) || func_154()) || func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21)) || func_8(unk_0x9EB17624F44A8DA4())) || func_7(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_434(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_435(int iParam0)
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
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
		if (func_442(iParam0))
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
		if (func_441(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_440(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_439(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_438(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_437(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_93())
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_438(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_439(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_440(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
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
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
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
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_443(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_480())
	{
		if (bParam1)
		{
			iVar0 = unk_0x622FF3AE4B1D07C3();
			if (func_91(unk_0x9EB17624F44A8DA4()))
			{
				uVar1 = func_309();
				iVar2 = unk_0xDF35170AEEFB473B(uVar1);
				if (unk_0x552F39AE86E07792(iVar2))
				{
					iVar3 = unk_0x87678BB8392EFD41(iVar2);
					if (unk_0x012BC3F18B8C7807(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_479())
				{
					switch (Local_642.f_3)
					{
						case 14:
							if (!func_349(iVar4) && !func_348(iVar4))
							{
								func_448("AMCH_BRIDGE", bParam0, iVar0, iVar4);
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
			if (((!bParam0 && unk_0x918CA1BFFAA03556(Local_642.f_67[iVar5 /*2*/].f_1)) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_642.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_642.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(uLocal_615[iVar5]))
				{
					uLocal_615[iVar5] = unk_0xCA43F0FC44D9B846(unk_0x29AB7D6D0DE18055(Local_642.f_67[iVar5 /*2*/].f_1));
					unk_0x4B4040A0EC7DBA81(uLocal_615[iVar5], func_447(iVar5));
					unk_0xF27F72CA15E148EE(uLocal_615[iVar5], 9);
					unk_0x62BD54E491535B76(uLocal_615[iVar5], func_446(iVar5));
					func_444(&(uLocal_615[iVar5]), 9);
				}
				else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					Var6 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					if (unk_0x2A488C176D52CCA5(Var6, unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_642.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x9C27373CC69ECF87(uLocal_615[iVar5], 1);
					}
					else
					{
						unk_0x9C27373CC69ECF87(uLocal_615[iVar5], 0);
					}
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(uLocal_615[iVar5]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_615[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_444(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		uVar0 = func_445(iParam1);
		unk_0x0C71C8E276E3EC54(*uParam0, uVar0);
	}
}

int func_445(int iParam0)
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
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_446(int iParam0)
{
	if (unk_0xF9DDB1C0875FD9E0(Local_642.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x849A8CFD71854E02(Local_642.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x125CDF69FA6EF560(Local_642.f_67[iParam0 /*2*/]) && !unk_0x49A1CABC032F7E16(Local_642.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_447(int iParam0)
{
	if (unk_0xF9DDB1C0875FD9E0(Local_642.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x849A8CFD71854E02(Local_642.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x125CDF69FA6EF560(Local_642.f_67[iParam0 /*2*/]) && !unk_0x49A1CABC032F7E16(Local_642.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_448(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xC80D31E4B587871C(Local_2607[iParam2 /*12*/].f_8[func_340(iParam3)], func_339(iParam3)) && !bParam1)
	{
		Var0 = { func_478(iParam3) };
		if (!unk_0xA6DECE14FC9A8C51(uLocal_549[iParam3]))
		{
			if (!func_477(Var0, 0f, 0f, 0f, 0) && !func_477(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_549[iParam3] = unk_0x6F4378873333A0C2(Var0);
				unk_0xF27F72CA15E148EE(uLocal_549[iParam3], 9);
				unk_0x62BD54E491535B76(uLocal_549[iParam3], sParam0);
				func_449(uLocal_549[iParam3], 25, 1152319488, 1137180672);
				func_444(&(uLocal_549[iParam3]), 12);
				unk_0x9C27373CC69ECF87(uLocal_549[iParam3], 1);
			}
		}
		else if (unk_0x0F30C1F1717A6437())
		{
			unk_0xF20857E4CB32A2B7(uLocal_549[iParam3], 255);
		}
		else
		{
			func_449(uLocal_549[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(uLocal_549[iParam3]))
	{
		unk_0xE30CF11C0EE14316(&(uLocal_549[iParam3]));
		if (!bParam1)
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_449(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xF20857E4CB32A2B7(uParam0, func_450(uParam0, iParam1, fParam2, fParam3));
}

int func_450(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_476(Global_2436181))
	{
		fVar0 = func_452(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_451();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_451()
{
	if (func_367(Global_2436181, 1))
	{
		return 50;
	}
	return 0;
}

float func_452(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2436181;
	Var2 = { unk_0x67247AA13B7486A3(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1316741)
	{
		if (func_475(iVar0))
		{
			Var5 = { func_455(iVar0) };
		}
		else if (func_454(iVar0))
		{
			Var5 = { func_453(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar0), 0) };
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

Vector3 func_453(int iParam0)
{
	var uVar0;
	
	if (func_454(iParam0))
	{
		uVar0 = unk_0x25D049AAC4603E65(iParam0);
		if (unk_0x6ADD12BF4D6D2587(uVar0))
		{
			return unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_454(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x25D049AAC4603E65(iParam0);
			if (unk_0x6ADD12BF4D6D2587(uVar0))
			{
				if (unk_0x0C88267282FD588F(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == func_93())
	{
	}
	if (func_474(iParam0))
	{
		iVar0 = func_473(iParam0);
		if (iVar0 != func_93())
		{
			if (!func_472(iVar0))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_644[iVar0 /*3*/][1]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_644[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2422736[func_473(iParam0) /*420*/].f_324.f_5;
				}
			}
			else
			{
				iVar1 = func_468(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1669535.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_467(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_293))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_293, 0);
		}
	}
	else if (func_440(iParam0) && !func_466(iParam0))
	{
		iVar2 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar2 != func_93())
		{
			iVar3 = func_468(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1669535.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_438(iParam0) && !func_465(iParam0))
	{
		if (func_475(iParam0) && func_464())
		{
			return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
		}
		iVar4 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar4 != func_93())
		{
			if (func_463(iVar4))
			{
				iVar5 = func_459(iVar4);
				if (iVar5 != -1)
				{
					return Global_1669535.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_437(iParam0))
	{
		iVar6 = func_458(iParam0);
		if (iVar6 != func_93())
		{
			if (!func_457(iVar6))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_741[iVar6]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_741[iVar6], 0);
				}
				else
				{
					return Global_2422736[func_458(iParam0) /*420*/].f_324.f_14;
				}
			}
			else
			{
				iVar7 = func_459(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1669535.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_456(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_295))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_295, 0);
		}
	}
	return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
}

int func_456(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)
{
	if (iParam0 != func_93())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

int func_458(int iParam0)
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_459(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_462(iParam0);
	if (!iVar0 == 0)
	{
		return func_460(iVar0);
	}
	return -1;
}

int func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_286(iVar0) == 9)
		{
			if (func_461(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_461(int iParam0)
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

int func_462(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_248;
}

int func_463(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

int func_464()
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_2916, 13) || Global_1669535.f_1815)
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_438(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_440(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_471(iParam0);
	if (!iVar0 == 0)
	{
		return func_469(iVar0);
	}
	return -1;
}

int func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_470(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_470(int iParam0)
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

int func_471(int iParam0)
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

int func_472(int iParam0)
{
	if (iParam0 != func_93())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

int func_473(int iParam0)
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_474(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_93())
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_12(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	if ((unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 9) && !(unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 6) && unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 7))) || ((unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 6) && !unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 7)) && !unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_477(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_478(int iParam0)
{
	switch (Local_642.f_3)
	{
		case 14:
			return Local_353[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_479()
{
	switch (Local_642.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_480()
{
	switch (Local_642.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_481()
{
	switch (Local_642.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_482(var uParam0, char* sParam1)
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

char* func_483(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x436287B7DB306165();
	return "HUD_STARTING";
	if (unk_0x74C475EB8E73D398(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "am_challenges"))
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
	else if (unk_0x74C475EB8E73D398(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_484(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_485(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x46C19C2753391FBF())
	{
		Global_2512808.f_4693 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2512808.f_4693 = 0;
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 1);
		}
	}
}

int func_486(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0);
		}
		else
		{
			return unk_0x38F6270C9AE5FE40(unk_0xEBD55014C579F626(), *uParam0);
		}
	}
	return unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0);
}

void func_487(int iParam0)
{
	if (!unk_0x2918F48A30D03841() && !unk_0x3E9CABD07B829173())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E())
					{
						if (func_5(Local_642.f_3))
						{
							if (Local_642.f_3 == 12)
							{
								func_282("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_282("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_642.f_3))
						{
							func_282("AMCH_BIKEAV", 30000);
						}
						func_281(1);
						unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						func_282("AMCH_BLOW", 30000);
						func_281(1);
						unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !func_492(63))
					{
						switch (Local_642.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
									{
										func_282("AMCH_ALTI", 30000);
										func_281(1);
										unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_NMIS", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_FRFALL", -1);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_PVPO1", -1);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_PVPO2", -1);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_WHEELIE", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_STOPPIE", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_LFALL", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_LPARA", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
					{
						switch (Local_642.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
									{
										if (func_1(&uLocal_327, 1000, 0))
										{
											func_282("AMCH_OCEAN", 30000);
											func_281(1);
											func_44(&uLocal_327);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !func_492(63))
					{
						switch (Local_642.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
									{
										if (func_476(unk_0x9EB17624F44A8DA4()) && !func_489(unk_0x9EB17624F44A8DA4()))
										{
											func_282("AMCH_ALTIEXP", 30000);
											func_281(1);
											unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
					{
						if (func_1(&uLocal_327, 1000, 0))
						{
							func_282("AMCH_FLYLOW", 30000);
							func_281(1);
							func_44(&uLocal_327);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if (Local_642.f_3 == 7)
					{
						if (iLocal_627 == 0)
						{
							if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
							{
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_MVS1", 30000);
									func_281(1);
									iLocal_627 = 1;
								}
							}
						}
						else if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
						{
							if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
							{
								func_282("AMCH_MVS2", 30000);
								func_281(1);
								unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
							}
						}
					}
					if (Local_642.f_3 == 14)
					{
						if (iLocal_627 == 0)
						{
							if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
							{
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_BRBL", 30000);
									func_281(1);
									iLocal_627 = 1;
								}
							}
						}
						else if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
						{
							if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
							{
								func_282("AMCH_BRBL2", 30000);
								func_281(1);
								unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xC80D31E4B587871C(iLocal_626, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E())
					{
						func_488("AMCH_WARN", func_372(Local_642.f_3), func_371(Local_642.f_3), 30000);
						func_281(0);
						Local_2992.f_8 = unk_0xE3CCAFB1555348DF();
						unk_0x4AFBCBFDE748D4E0(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x872F1C1F8587CCC7(&iLocal_626, iParam0);
					}
				}
				break;
			}
	}
}

void func_488(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam3);
}

bool func_489(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1357530.f_241.f_136[func_491(9) /*33*/][iParam0], func_490(9));
}

int func_490(int iParam0)
{
	return (iParam0 % 32);
}

int func_491(int iParam0)
{
	return (iParam0 / 32);
}

bool func_492(int iParam0)
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_493(int iParam0)
{
	Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 = iParam0;
}

void func_494(bool bParam0)
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 4);
	}
}

int func_495()
{
	if (func_516(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_152(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if (unk_0xB01117EF93F91860())
	{
		return 0;
	}
	if (unk_0x78E929955680CA05())
	{
		return 0;
	}
	if (func_329(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_515())
	{
		return 0;
	}
	if (func_514(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_513())
	{
		return 0;
	}
	if (func_506(unk_0x9EB17624F44A8DA4()) == 3)
	{
		return 0;
	}
	if (func_505(func_276()))
	{
		return 0;
	}
	if (func_504())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_331(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	if (func_152(unk_0x9EB17624F44A8DA4(), 0) || func_152(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_152(unk_0x9EB17624F44A8DA4(), 12) || func_152(unk_0x9EB17624F44A8DA4(), 14)) || func_152(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_436(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (func_501(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_365(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_499())
	{
		return 0;
	}
	if (func_497(unk_0x9EB17624F44A8DA4()) && Global_1595343.f_171)
	{
		return 0;
	}
	if (((((func_440(unk_0x9EB17624F44A8DA4()) || func_474(unk_0x9EB17624F44A8DA4())) || func_439(unk_0x9EB17624F44A8DA4())) || func_437(unk_0x9EB17624F44A8DA4())) || func_438(unk_0x9EB17624F44A8DA4())) || func_496())
	{
		return 0;
	}
	return 1;
}

var func_496()
{
	return Global_1669535.f_28;
}

int func_497(int iParam0)
{
	if (func_498(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)
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

int func_499()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_500()
{
	return Global_92885.f_316 > 0;
}

bool func_501(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11);
}

int func_502()
{
	if (func_503() == 0)
	{
		return 1;
	}
	return 0;
}

int func_503()
{
	return Global_1312466.f_18;
}

bool func_504()
{
	return Global_1312854;
}

int func_505(int iParam0)
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

int func_506(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_366(iParam0) && !func_8(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_95(iParam0);
	uVar3 = func_154();
	uVar4 = func_507();
	if ((bVar1 && (func_434(iParam0) || func_391(iParam0))) || uVar4)
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
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

int func_507()
{
	if ((func_96(unk_0x9EB17624F44A8DA4(), 21) || func_96(unk_0x9EB17624F44A8DA4(), 22)) || func_511())
	{
		return 1;
	}
	if (func_509())
	{
		func_508(22);
		return 1;
	}
	return 0;
}

void func_508(int iParam0)
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_509()
{
	if (func_101(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_510(27);
		}
	}
	return 0;
}

void func_510(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_511()
{
	return func_512(306, -1);
}

int func_512(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_513()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

int func_514(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_515()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

bool func_516(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

void func_517()
{
	func_518(&(Local_730.f_532), &Local_730, 26, &(Local_730.f_1), &(Local_730.f_115), Local_642.f_3, 0);
}

void func_518(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_625(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_623() || iParam2 == 27)
	{
		if (func_580(uParam1, iParam2, uParam3, Global_1574123, 0, func_626()))
		{
			func_579(1);
			if ((!func_578() && !func_577()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_576())
				{
					func_575();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_574(1);
						Global_1574123 = 0;
						iVar54 = -1;
						if (Global_1574308 != 1)
						{
							func_573(uParam1);
							if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
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
								if (func_12(unk_0xF6A72924028F588B(iVar52), 0, 1))
								{
									iVar35 = unk_0xF6A72924028F588B(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_572(iVar35) || Global_2422736[iVar35 /*420*/].f_251 != -1) || func_571(iVar35))
										{
											iVar44 = iVar35;
											if (func_82(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_568(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_98(unk_0x9EB17624F44A8DA4(), 0) && func_208(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_567())
							{
								if (func_12(unk_0xF6A72924028F588B(iVar52), 0, 1))
								{
									iVar35 = unk_0xF6A72924028F588B(iVar52);
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
							if ((func_566(iVar35) && func_563(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1595693[iVar44 /*680*/].f_211.f_6;
								Var38 = { func_558(iVar35) };
								if (iVar35 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_126(iVar35) };
								iVar37 = func_552(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xF85532D53BDB3017(iVar37);
								}
								Global_1574123++;
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
									if (!func_567())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_550(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
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
								iVar51 = func_549(iVar35, 0);
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
								if (func_548(iParam5))
								{
									func_547(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_547(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0x872F1C1F8587CCC7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0xF6A72924028F588B(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xC80D31E4B587871C(iVar49, iVar35))
							{
								iVar35 = unk_0xF6A72924028F588B(iVar52);
							}
							else
							{
								iVar35 = func_93();
							}
							if (func_566(iVar35))
							{
								if (func_12(unk_0xF6A72924028F588B(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1595693[iVar44 /*680*/].f_211.f_6;
									Var38 = { func_558(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_126(iVar35) };
									iVar37 = func_552(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xF85532D53BDB3017(iVar37);
									}
									Global_1574123++;
									iVar51 = func_549(iVar35, 1);
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
									func_531(iVar35, unk_0xDE2D3B9654C31EB3(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_528(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_527();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_526(uParam3, uParam1);
							func_525(uParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_526(uParam3, uParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_521(uParam3))
						{
							Global_1574308 = 1;
						}
						func_519(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x34D11AB5BA7922C2(*uParam1))
					{
						unk_0x5A66A86A47AC3B57(7);
						unk_0x0EB9853DF8BC0D87(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x5A66A86A47AC3B57(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_527();
			func_574(0);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 10))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x189EEBAACC5D380A();
}

void func_519(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_520(0);
	}
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_521(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar15 != func_93() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_126(iVar15) };
		iVar1 = func_524(uParam0, uParam0->f_37);
		if (func_523(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar16 = 1;
							func_522(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar16 = 1;
						func_522(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar16 = 1;
							func_522(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_522(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar16 = 1;
							func_522(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar16 = 1;
						func_522(uParam0, iVar0, 0);
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

void func_522(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_523(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_524(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_525(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x008F3E3CC076EA0E(*uParam0, "COLLAPSE"))
	{
		unk_0x1869584A8A72FEDD(iParam1);
		unk_0x271AA5469AF471B3();
	}
	if (iParam2 == 1)
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_526(var uParam0, var uParam1)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*uParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_527()
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_528(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_93())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_530(uParam0->f_38[iVar0 /*2*/], 0);
					func_529(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_529(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_ICON"))
		{
			unk_0xD07D5CD276368D36(iParam1);
			unk_0xD07D5CD276368D36(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD07D5CD276368D36(iParam3);
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

int func_530(int iParam0, bool bParam1)
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

void func_531(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_546() && iParam4 < func_545())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x008F3E3CC076EA0E(*uParam2, sVar1))
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_544("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_544(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_544("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_544("");
			if (uParam3->f_108 == 6)
			{
				func_544("");
			}
			else
			{
				func_544(&sParam5);
			}
			func_536(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_535(uParam3))
			{
				func_534("DPAD_FRIEND");
			}
			else if (func_533(uParam3))
			{
				func_534("DPAD_FRIEND");
			}
			else if (func_532(uParam3))
			{
				func_534("DPAD_CREW");
			}
			else
			{
				func_534("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_532(var uParam0)
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_533(var uParam0)
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_534(char* sParam0)
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_535(var uParam0)
{
	if (func_533(uParam0) && func_532(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_536(var uParam0, int iParam1)
{
	if (func_543(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_540(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_537())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_537()
{
	if (unk_0x4916190900E76373())
	{
		if (func_538() || func_85())
		{
			return 1;
		}
	}
	return 0;
}

int func_538()
{
	if (unk_0x4916190900E76373())
	{
		return func_85();
	}
	return func_539(Global_4456448.f_122309);
}

int func_539(int iParam0)
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

int func_540(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_541()) && func_244(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_541()
{
	if (func_366(unk_0x9EB17624F44A8DA4()) || func_542())
	{
		return 0;
	}
	return 1;
}

int func_542()
{
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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

int func_543(int iParam0)
{
	if (func_537())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_541()) && func_246(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_544(char* sParam0)
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_545()
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_546()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_547(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_546() && iParam3 < func_545())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
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
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x34D11AB5BA7922C2(*uParam1))
		{
			if (unk_0x008F3E3CC076EA0E(*uParam1, sVar1))
			{
				unk_0xD07D5CD276368D36(iParam3);
				if (unk_0xC80D31E4B587871C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_544("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_534(sParam16);
				}
				else
				{
					func_544(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_544("");
				}
				else
				{
					unk_0xD07D5CD276368D36(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD07D5CD276368D36(iVar0);
				}
				else
				{
					unk_0xD07D5CD276368D36(-1);
				}
				if (func_567())
				{
					func_544("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_TWO_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
				{
					unk_0x7E099EB35339C80D("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6223D539BCD39E76(iParam10);
					}
					unk_0xA6D2B267C377D7B2(&(uParam2->f_104));
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7E099EB35339C80D("FM_AE_CASH");
					unk_0xC4DA7D522991B465(iParam10, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7E099EB35339C80D("FM_AE_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
					else
					{
						unk_0x7E099EB35339C80D("FM_NG_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
					{
						func_534(&(uParam2->f_104));
					}
					else
					{
						func_544("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam14, 6);
					unk_0x9748595E4799A2CF();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7E099EB35339C80D("NUMBER");
					unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (iParam10 != -1)
				{
					unk_0xD07D5CD276368D36(iParam10);
				}
				else
				{
					func_544("");
				}
				if (uParam2->f_108 == 6)
				{
					func_544("");
				}
				else
				{
					func_544(&sParam4);
				}
				func_536(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_544("");
					func_544("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_535(uParam2))
				{
					func_534("DPAD_FRIEND");
				}
				else if (func_533(uParam2))
				{
					func_534("DPAD_FRIEND");
				}
				else if (func_532(uParam2))
				{
					func_534("DPAD_CREW");
				}
				else
				{
					func_534("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_548(int iParam0)
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

int func_549(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_366(iParam0)) && !func_95(iParam0))
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

int func_550(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_551(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_548(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_551(int iParam0)
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

int func_552(int iParam0)
{
	int iVar0;
	
	iVar0 = func_555(iParam0);
	if (iVar0 == -1)
	{
		func_553(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_553(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_555(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_554(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_555(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_556(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_556(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1369337)
	{
		Global_1369176[iVar32 /*5*/] = { Global_1369176[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_557(&(Global_1369176[iVar32 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_557(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_93();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_558(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2492157 = { func_126(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_523(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return Var0;
		}
		if (func_562(&Global_2492157))
		{
			Global_2492087 = { func_560(iParam0) };
			func_559(&Global_2492087, &Var0);
		}
	}
	return Var0;
}

void func_559(var uParam0, var uParam1)
{
	unk_0x22889E844C3772CE(uParam0, 35, uParam1);
}

struct<35> func_560(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_561(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_126(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var13, 35, &Var0);
	return Var13;
}

int func_561(int iParam0)
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_562(var uParam0)
{
	if (unk_0x5616476F69B90F14())
	{
		if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_563(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_565(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_564(iParam0))
	{
		return 0;
	}
	if ((!func_572(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_571(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_564(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_565(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_566(int iParam0)
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
		if (unk_0xC80D31E4B587871C(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_567()
{
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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
	switch (func_307(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_95(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_208(unk_0x9EB17624F44A8DA4()))
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

void func_568(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_572(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_571(iVar1))
				{
					if (func_569(iVar1, iParam1, 0))
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

int func_569(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_93())
	{
		if (!bParam2)
		{
			if (func_570(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_570(int iParam0, int iParam1)
{
	if (iParam1 != func_93())
	{
		if (iParam0 != func_93())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_571(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_572(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_208(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_573(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_574(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_575()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_288())
		{
			func_275();
		}
	}
}

int func_576()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_288())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_288())
	{
		return 1;
	}
	return 0;
}

int func_577()
{
	if (func_288())
	{
		if (func_52(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_578()
{
	if (func_288())
	{
		if (func_64(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_579(int iParam0)
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_580(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_622(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_621();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_620())
		{
			if (func_619() > 0 && Global_1574125)
			{
				unk_0x0467A3C1EFB3B8F0();
				unk_0xA3E8E2D0F73E92C5(fVar7);
				unk_0x553231E7FC3C570D(18);
				if (unk_0xF491DD47B88AA84E())
				{
					unk_0x873070BEE2844FE5();
				}
				unk_0x553231E7FC3C570D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_610())
		{
			func_609(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_609(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_619() == 1)
		{
			func_608(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_609(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_619() == 0 && !bParam5))
		{
			func_609(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_607();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x0467A3C1EFB3B8F0();
				}
				unk_0x553231E7FC3C570D(18);
			}
			if (!unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_607();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar7);
				if (func_608(bVar6, uParam0, 0))
				{
					func_573(uParam0);
					uVar4 = func_605(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_603(iParam1) };
					if (bParam4)
					{
						func_600(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_594(uParam0, func_597(uParam2), func_595(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_586(uParam0, func_588(uParam2), func_587(), -1);
					}
					else if (func_537())
					{
						uParam2->f_34 = Global_1574124;
						func_600(uParam0, uVar4, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574124;
						func_600(uParam0, uVar4, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar8 = func_581(iParam1);
						func_600(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x872F1C1F8587CCC7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				unk_0xA3E8E2D0F73E92C5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_585())
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
			if (func_584(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_583(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_582(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_209())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_582(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_583(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_584(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_585()
{
	return Global_4456448.f_1 == 0;
}

void func_586(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_534(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_534("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_587()
{
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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

char* func_588(var uParam0)
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
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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
			if (func_590())
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
			if (func_589(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_589(int iParam0)
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

bool func_590()
{
	return (func_593() && func_591(func_592()));
}

int func_591(int iParam0)
{
	return func_246(iParam0, 1);
}

int func_592()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

bool func_593()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

void func_594(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(uParam2))
		{
			func_534(uParam1);
		}
		else if (func_307(unk_0x9EB17624F44A8DA4()) == 133)
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT_C");
			unk_0xA6D2B267C377D7B2(uParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_534("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_595(var uParam0)
{
	int iVar0;
	
	iVar0 = func_307(unk_0x9EB17624F44A8DA4());
	if (func_596())
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

bool func_596()
{
	return Global_1595566;
}

char* func_597(var uParam0)
{
	int iVar0;
	
	iVar0 = func_307(unk_0x9EB17624F44A8DA4());
	if (func_596())
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
			if (func_599() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_599() == 1)
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
			if (func_598() == 1)
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

int func_598()
{
	return Global_2512808.f_4780;
}

int func_599()
{
	if (func_307(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_600(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_544(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(uParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_534(sParam1);
		}
		if (func_620() && iParam6)
		{
			if (func_602())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7E099EB35339C80D("LBD_DPD_CNT");
			unk_0x6223D539BCD39E76(iVar0);
			unk_0x6223D539BCD39E76(iVar1);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_534(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_601(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_61())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_601(int iParam0)
{
	if (func_584(iParam0) || func_583(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_602()
{
	return Global_1574125;
}

struct<4> func_603(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_604(unk_0x9EB17624F44A8DA4()) || func_582(unk_0x9EB17624F44A8DA4()))
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
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_537() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_604(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_605(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_537() || unk_0xAB019B170BF1309C(uParam1)))
	{
		uVar0 = func_606();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB019B170BF1309C(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
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

char* func_606()
{
	if (unk_0x6EFC1E00D9BE5932())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xA5DB684112875CA2())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x20D255A405234ABB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x1AD32FD15A40AB57())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_607()
{
	Global_36765 = 1;
}

bool func_608(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xD704C81492296A37("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xD704C81492296A37("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xD704C81492296A37("mp_matchmaking_card");
	}
	return unk_0x34D11AB5BA7922C2(*uParam1);
}

void func_609(var uParam0, var uParam1, bool bParam2)
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_527();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
		}
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0xA68F7B004463AB6F(uParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam1->f_33, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 0);
	}
	unk_0xA3E8E2D0F73E92C5(0f);
}

int func_610()
{
	if (func_618())
	{
		return 0;
	}
	if (func_513())
	{
		return 0;
	}
	if (!func_616())
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	if (func_615(8, -1))
	{
		return 0;
	}
	if (func_619() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	else if (!func_330(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_614(1) || func_612(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_91(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_611(0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_611(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

int func_612(bool bParam0)
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_613(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_613(int iParam0)
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_614(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_615(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

int func_616()
{
	if (func_617())
	{
		return 1;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076())
	{
		return 0;
	}
	if (unk_0x0C200A19C058463C())
	{
		return 0;
	}
	return 1;
}

bool func_617()
{
	return Global_1312438;
}

bool func_618()
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_619()
{
	return Global_1357530.f_68;
}

int func_620()
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_621()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_622(int iParam0)
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

int func_623()
{
	if (func_626())
	{
		return 1;
	}
	if (func_7(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_596())
	{
		return 1;
	}
	if (func_366(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_307(unk_0x9EB17624F44A8DA4()))
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
				if (!func_624(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_624(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_624(unk_0x9EB17624F44A8DA4()))
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

bool func_624(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_625(int iParam0)
{
	if ((iParam0 == 27 && func_366(unk_0x9EB17624F44A8DA4())) && !func_95(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_101(unk_0x9EB17624F44A8DA4(), 0) && func_95(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_506(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_626()
{
	if (func_627(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_627(int iParam0)
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

void func_628()
{
	if (Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 == 3)
	{
		if (!unk_0xC80D31E4B587871C(iLocal_333, 8))
		{
			if ((!func_7(unk_0x9EB17624F44A8DA4()) && !func_151(unk_0x9EB17624F44A8DA4())) && !func_378(unk_0x9EB17624F44A8DA4()))
			{
				func_377();
			}
		}
		else if (!unk_0xC80D31E4B587871C(iLocal_333, 9))
		{
			if ((func_7(unk_0x9EB17624F44A8DA4()) || func_151(unk_0x9EB17624F44A8DA4())) || func_378(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xE59086BE3BFA6F19();
				Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4 = 0;
				unk_0x872F1C1F8587CCC7(&iLocal_333, 9);
			}
		}
	}
}

void func_629()
{
	int iVar0;
	
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_337)))
	{
		iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_337));
		if (unk_0x552F39AE86E07792(iVar0))
		{
			func_630(iVar0, 2);
		}
	}
	iLocal_337++;
	if (iLocal_337 >= unk_0xB72D370CB7ABC3EF())
	{
		iLocal_337 = 0;
	}
}

void func_630(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1574409.f_18)))
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_2, iParam0))
	{
		if (Global_1574409 < iParam1 && unk_0xC80D31E4B587871C(Global_1574409.f_1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 0);
			return;
		}
		if (Global_1574409 != 0)
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 1);
		}
		Global_1574409 = 0;
		Global_1574409.f_2 = 0;
	}
	unk_0x872F1C1F8587CCC7(&(Global_1574409.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_631(iParam0))
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
		Global_1574409++;
	}
}

bool func_631(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10);
}

void func_632(int iParam0, int iParam1)
{
	Local_2607[iParam0 /*12*/] = iParam1;
}

int func_633()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_730.f_532[iVar0 /*42*/].f_1 = func_93();
		iVar0++;
	}
	return 1;
}

int func_634()
{
	return Local_642.f_0;
}

int func_635(int iParam0)
{
	return Local_2607[iParam0 /*12*/];
}

void func_636()
{
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 6))
	{
		func_659();
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 6);
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 7))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 4) || unk_0xC80D31E4B587871C(Global_1574409.f_1, 16))
		{
			if (((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_288()) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 7);
				func_282("FME_PASINT", 30000);
				func_281(1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 17))
		{
			if (func_154() && !func_153())
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 23))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0xF491DD47B88AA84E())
		{
			if (func_657())
			{
				func_282("AMEV_GA_RP", -1);
				if (func_208(unk_0x9EB17624F44A8DA4()) != 200)
				{
					func_281(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 23);
			}
		}
	}
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_391(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x6D93C18E2EF22A46(1344549371))
			{
				unk_0xAC101DB143C83824(1344549371);
			}
		}
		else if (unk_0x6D93C18E2EF22A46(1344549371))
		{
			unk_0x4C5AB0B8B9B71C4B(1344549371);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 9))
	{
		if ((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_288()) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && !func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 9);
			func_656(0);
			func_282("FME_TBL00", -1);
			func_281(1);
		}
	}
	if (func_366(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if ((func_152(unk_0x9EB17624F44A8DA4(), 21) && unk_0xC80D31E4B587871C(Global_1574409.f_1, 20)) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 19))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 18);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if (((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_288()) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && unk_0x9F7B586A14398C40()) && !Global_2512808.f_4789)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 18);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 19);
				func_282("AMTT_RPAS", -1);
				func_281(1);
			}
		}
	}
	if (((((func_366(unk_0x9EB17624F44A8DA4()) && !func_8(unk_0x9EB17624F44A8DA4())) && func_307(unk_0x9EB17624F44A8DA4()) != 146) && !func_7(unk_0x9EB17624F44A8DA4())) && !func_151(unk_0x9EB17624F44A8DA4())) && !func_646())
	{
		if (func_390(func_307(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x74A0059E573C5694(unk_0x9EB17624F44A8DA4());
		}
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 22))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 22);
		}
		if (func_434(unk_0x9EB17624F44A8DA4()) || func_384())
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 10))
			{
				if (func_645(func_307(unk_0x9EB17624F44A8DA4())))
				{
					if (func_250(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_388(1);
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					}
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 10);
			}
		}
		if (func_391(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 11))
			{
				if (!Global_92885.f_8)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
					func_386(1);
				}
				if (!func_644())
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 13);
					func_385();
				}
				if (!Global_2391045)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					if (func_250(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					func_388(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 11);
			}
		}
		else
		{
			func_642(0);
		}
	}
	else
	{
		func_642(1);
	}
	func_637();
	if (func_383(func_307(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
	}
	if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 10))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 10))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 10);
	}
}

void func_637()
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
			if (func_492(iVar2))
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
				if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 26);
				}
				func_638(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
	{
		func_44(&(Global_1574409.f_22));
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 26);
	}
}

void func_638(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1574409.f_22)))
	{
		func_2(&(Global_1574409.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574409.f_22), iParam1, 0))
	{
		if (func_619() > 0)
		{
			func_641(iParam0);
			if (func_279("AMEV_LBD_HELP"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			func_44(&(Global_1574409.f_22));
		}
	}
	else
	{
		func_640(0);
		func_639();
	}
}

void func_639()
{
	Global_2512808.f_4500 = 0;
}

void func_640(int iParam0)
{
	Global_1357530.f_68 = iParam0;
}

void func_641(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_1 == iParam0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

void func_642(int iParam0)
{
	if ((unk_0xC80D31E4B587871C(Global_1574409.f_1, 11) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 10) && iParam0)) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 22) && iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 12))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 12);
			func_386(0);
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 13);
			func_643();
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_101(unk_0x9EB17624F44A8DA4(), 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 14);
			func_388(0);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 11);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 10);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 22);
	}
}

void func_643()
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4694), 0);
}

bool func_644()
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4694, 0);
}

int func_645(int iParam0)
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
			return func_391(unk_0x9EB17624F44A8DA4());
		
		case 133:
			return (func_384() || func_5(func_306()));
		
		default:
	}
	return 0;
}

int func_646()
{
	if (((((((((func_655() || func_654()) || func_653()) || func_301()) || (func_652() && !unk_0x4916190900E76373())) || (func_649() && !func_648())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_647() == 2 && !unk_0x4916190900E76373()))
	{
		return 1;
	}
	return 0;
}

int func_647()
{
	return Global_979886;
}

bool func_648()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 27);
}

int func_649()
{
	if (func_651() || func_650())
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_650()
{
	return Global_2447174.f_622;
}

bool func_651()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

bool func_652()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 5);
}

bool func_653()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_654()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

bool func_655()
{
	return Global_2447174.f_586;
}

void func_656(int iParam0)
{
	int iVar0;
	
	iVar0 = func_196(2523, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 0))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 0);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 1))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 1);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 2))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 3))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 3);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 4))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 4);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 5))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 6))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 6);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 7))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 7);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 8))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 9))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 9);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 10))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 10);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 11))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 11);
		}
	}
	func_187(2523, iVar0, -1, 1, 0);
}

int func_657()
{
	int iVar0;
	
	if (!func_45(&(Global_1574409.f_15)))
	{
		func_2(&(Global_1574409.f_15), 0, 0);
		Global_1574409.f_17 = 0;
	}
	else if (func_1(&(Global_1574409.f_15), 1000, 0))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17)))
		{
			iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17));
			if (unk_0x552F39AE86E07792(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_658(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0x9EB17624F44A8DA4()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574409.f_17++;
		if (Global_1574409.f_17 >= 32)
		{
			Global_1574409.f_17 = 0;
			func_44(&(Global_1574409.f_15));
		}
	}
	return 0;
}

int func_658(int iParam0, int iParam1)
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
	if (Global_1595693[iVar0 /*680*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_659()
{
	unk_0xC0EBC1452FCAB15C(5);
	func_661();
	unk_0x94BD6F0436473406(1f);
	unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 8);
	func_660();
}

void func_660()
{
	if (Global_1665283)
	{
		if (unk_0xC80D31E4B587871C(Global_1665284, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_1665284, 1))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 1);
		}
		if (unk_0xC80D31E4B587871C(Global_1665284, 5))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 5);
		}
		if (unk_0x546F10CBA6C484DA(-355737150))
		{
			unk_0xB94AAB49E0BB01DB(-355737150, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-580979506))
		{
			unk_0xB94AAB49E0BB01DB(-580979506, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1426452475))
		{
			unk_0xB94AAB49E0BB01DB(-1426452475, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(745417724))
		{
			unk_0xB94AAB49E0BB01DB(745417724, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1305304906))
		{
			unk_0xB94AAB49E0BB01DB(-1305304906, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1543175077))
		{
			unk_0xB94AAB49E0BB01DB(-1543175077, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-811770997))
		{
			unk_0xB94AAB49E0BB01DB(-811770997, 1, 0, 0);
		}
		Global_1665284 = 0;
	}
	Global_1665283 = 0;
}

void func_661()
{
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

int func_662()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2512808.f_4692)
	{
		return 0;
	}
	if ((!func_45(&(Local_642.f_39)) && !func_45(&(Local_642.f_41))) && !func_45(&(Local_642.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0xD1952A425B78FFC0();
	if (func_45(&(Local_642.f_41)))
	{
		iVar0 = func_663(&uVar2, &(Local_642.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_642.f_39)))
	{
		iVar0 = func_663(&uVar2, &(Local_642.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_642.f_43)))
	{
		iVar0 = func_663(&uVar2, &(Local_642.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_663(var uParam0, var uParam1)
{
	return unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*uParam0, *uParam1));
}

int func_664()
{
	if (func_665())
	{
		return 1;
	}
	return 0;
}

bool func_665()
{
	return Global_1574409.f_24;
}

int func_666()
{
	var uVar0;
	
	func_670(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_669())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_668())
	{
		return 1;
	}
	if (func_667(157))
	{
		if (!func_655())
		{
			return 1;
		}
	}
	if (func_667(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_393() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_393()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_667(int iParam0)
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_668()
{
	return Global_2456830;
}

bool func_669()
{
	return Global_2447174.f_581;
}

void func_670(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_671(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_671(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x25D049AAC4603E65(Var0.f_1);
			if (unk_0x6ADD12BF4D6D2587(uVar3))
			{
				if (unk_0x88DDBE9908752BF0(iVar3, 0))
				{
					uVar4 = unk_0xDFD115BB10FE46A9(iVar3, 0);
					if (unk_0x1FE6625767FB8CBF(uVar4, Var0.f_2) && unk_0x8C504A60C2F379BD())
					{
						if (func_672(uVar4, &bVar5))
						{
							unk_0x38CCEC620E3BB265(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x5380482A432E314E(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_672(int iParam0, var uParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_673()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_674()
{
	int iVar0;
	
	if (func_666())
	{
		Local_2992.f_5 = 5;
	}
	else if (unk_0xC80D31E4B587871C(Local_642.f_2, 0))
	{
		Local_2992.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_2992.f_5 = 1;
	}
	else
	{
		Local_2992.f_5 = 2;
	}
	Local_2992.f_0 = Local_642.f_52;
	Local_2992.f_1 = Local_642.f_53;
	Local_2992.f_4 = Local_642.f_66;
	Local_2992.f_3 = Local_642.f_51;
	Local_2992.f_10 = (unk_0xE3CCAFB1555348DF() - Local_2992.f_9);
	if (!Global_262145.f_10841)
	{
		if (Local_2992.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		func_710(Local_2992, Local_642.f_3, Local_2607[unk_0x622FF3AE4B1D07C3() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xC80D31E4B587871C(iLocal_333, 4))
	{
		unk_0x0B9D04994D02CC2F(iLocal_341);
		unk_0x0EE72DB1CD8A3B86(&iLocal_333, 4);
	}
	unk_0xB94964861C6B4D3C(iLocal_341);
	unk_0xB94964861C6B4D3C(iLocal_342);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC80D31E4B587871C(iLocal_628, iVar0) && !unk_0xCCCA18C9A006FF83(uLocal_629[iVar0]))
		{
			unk_0x0B9D04994D02CC2F(uLocal_629[iVar0]);
			unk_0xB94964861C6B4D3C(uLocal_629[iVar0]);
		}
		iVar0++;
	}
	func_374();
	func_443(1, 1);
	unk_0x44EBEB4322278F78(0);
	func_494(0);
	func_381(Local_642.f_3, 0);
	func_675(133, 0, Local_642.f_37 == 6);
	func_380(23, 0);
	if (func_293() >= 0f)
	{
		unk_0x2DEDE82792FFFD0B(0f, 0, 21);
	}
	if (!unk_0xC80D31E4B587871C(iLocal_333, 9))
	{
		unk_0xE59086BE3BFA6F19();
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_675(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 13);
		}
		if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 14))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 14);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 21);
	}
	func_706();
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
	unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_705(func_307(unk_0x9EB17624F44A8DA4()));
		func_380(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x9EB17624F44A8DA4() != -1) && func_704(unk_0x9EB17624F44A8DA4()) >= 12)
		{
			func_703(2535, -1);
			iVar1 = func_196(2535, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 5);
			}
		}
		func_702();
		func_701();
		func_700();
		if ((!func_97(unk_0x9EB17624F44A8DA4()) && !func_287(unk_0x9EB17624F44A8DA4())) && !func_429())
		{
			func_684();
		}
		func_683();
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 0) && !unk_0xC80D31E4B587871C(Global_1667858.f_3, 1))
		{
			func_659();
		}
		func_682();
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1717), 2);
		func_681();
		func_156();
	}
	if (unk_0x6D93C18E2EF22A46(1344549371))
	{
		unk_0x4C5AB0B8B9B71C4B(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x9EB17624F44A8DA4() != -1 && !func_152(unk_0x9EB17624F44A8DA4(), 21)) && !func_101(unk_0x9EB17624F44A8DA4(), 0))
		{
			func_388(0);
			func_386(0);
			func_680();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2458997 = -1;
			func_46(26, -1);
		}
	}
	if (!func_676())
	{
		Global_2492048 = 1;
	}
}

int func_676()
{
	if (((((!func_601(unk_0x9EB17624F44A8DA4()) && !func_582(unk_0x9EB17624F44A8DA4())) && func_307(unk_0x9EB17624F44A8DA4()) != 146) && !func_679()) && !func_678()) && !func_677(Global_4456448.f_143970))
	{
		return 0;
	}
	return 1;
}

bool func_677(int iParam0)
{
	return iParam0 == 57;
}

int func_678()
{
	if (Global_4456448.f_122309 == Global_262145.f_8940)
	{
		return 1;
	}
	return 0;
}

int func_679()
{
	if ((Global_4456448 == 0 && unk_0x4916190900E76373()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_143970 > 0) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 15)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 18)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 19)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 29)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 28)) || unk_0xC80D31E4B587871C(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_680()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xC80D31E4B587871C(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xC80D31E4B587871C(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_681()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 1);
	}
	if (Global_2512808.f_4693 > 0)
	{
		unk_0x8810DC630928B398("FM_COUNTDOWN_30S_KILL");
		unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
		unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x22456E02F195550C(1);
		Global_2512808.f_4693 = 0;
		unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
		unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
		if (!unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "am_pi_menu"))
		{
			if (Global_2512808.f_4703 > -1)
			{
				unk_0xB94964861C6B4D3C(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
		}
	}
}

void func_682()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574409 = { Var0 };
}

void func_683()
{
	var uVar0;
	
	Global_1316732 = uVar0;
}

void func_684()
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_698();
	func_687(1, 1, 0);
	func_685();
}

void func_685()
{
	func_686(0, 0);
}

void func_686(int iParam0, int iParam1)
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_687(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_697();
	}
	if (!bParam2)
	{
		func_689(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_688(0);
	func_159();
}

void func_688(bool bParam0)
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_689(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_696())
		{
			func_695();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_693();
		func_427(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_690();
	}
}

void func_690()
{
	if (func_696() && !func_692())
	{
		func_695();
	}
	if (func_692())
	{
		func_691();
	}
	else
	{
		func_693();
		func_427(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_691()
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_692()
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_693()
{
	if (func_696() && !func_692())
	{
		func_695();
	}
	func_694();
	Global_2405047.f_687 = 0;
}

void func_694()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_695()
{
	if (func_692())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_696()
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_697()
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_698()
{
	func_699();
	Global_2405047.f_2229 = 0;
}

void func_699()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_700()
{
	Global_2512808.f_4694 = 0;
}

void func_701()
{
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1 = 0;
	}
}

void func_702()
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (iVar0 != -1)
	{
		Global_1627537[iVar0 /*532*/] = -1;
	}
}

void func_703(int iParam0, int iParam1)
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

int func_704(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

int func_705(int iParam0)
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
			if (func_391(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_706()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 3) || unk_0xC80D31E4B587871C(Global_2512808.f_1710, 4))
	{
		if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
		{
			unk_0x59C3AC31C7544A28(800);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 5);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 3);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 4);
	}
	func_709(0);
	func_708(0);
	func_707(0);
}

void func_707(int iParam0)
{
	if (Global_2512808.f_4488 != iParam0)
	{
		Global_2512808.f_4488 = iParam0;
	}
}

void func_708(bool bParam0)
{
	if (Global_2512808.f_4487 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2512808.f_4487 = bParam0;
	}
}

void func_709(int iParam0)
{
	if (Global_2512808.f_4485 != iParam0)
	{
		Global_2512808.f_4485 = iParam0;
	}
}

void func_710(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x436287B7DB306165();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_70856)
	{
		if (unk_0x74C475EB8E73D398(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0xF5313B601E24BF7B(&Var1);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xC14C67D924E1E69C(&Var14);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xC4D3EEED6C3F8ADA(&Var28);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xC974B07411EB8324(&Var52);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_penned_in"))
		{
			unk_0x297070538A176AF4(&Param0);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xA34510BC030C442D(&Var66);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x0010AF0738AEEA04(&Var79);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xEC67EBB574994291(&Var93);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x1EA7DB32B287B5E7(&Var107);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x0BE67F6CCA3921AB(&Var123);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x0F1BB63E018B9385(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x3B0F813F59E79370(&Var150);
			}
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x6E89CDB65828F219(&Var164);
		}
	}
}

int func_711(struct<21> Param0)
{
	func_720(func_721(Param0.f_0), Param0);
	unk_0xB66EA47EE710E67F(func_719(9));
	unk_0x7BC094E5B24A760D(func_718(9));
	func_715(0, -1, 0);
	func_713(133);
	unk_0x6E3ED3AE1C20445F(&Local_642, 88);
	unk_0xE7BC983D1386C9EE(&Local_2607, 385);
	if (!func_712())
	{
		func_674();
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		unk_0x29723B8B6E11E8F2(&(Local_642.f_52), &(Local_642.f_53));
	}
	Local_2992.f_2 = unk_0x8AB67E33BD002BAC();
	unk_0x941BE77305BB5695(0);
	return 1;
}

int func_712()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_669())
		{
			return 0;
		}
		if (func_667(155))
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

void func_713(int iParam0)
{
	func_682();
	func_714();
	func_700();
	Global_1574409.f_4 = iParam0;
	Global_1574409.f_5 = iParam0;
	func_398(iParam0, -1);
	func_27(&(Global_1574409.f_18), 0, 0);
	Global_2512808.f_4553 = 0;
	Global_2457893[0] = func_93();
	Global_2457893[1] = func_93();
	Global_2457893[2] = func_93();
	Global_2457893[3] = func_93();
	Global_2457893[4] = func_93();
	func_156();
	if (!func_505(func_276()))
	{
		func_275();
	}
	if (func_154() && !func_153())
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 17);
	}
}

void func_714()
{
	var uVar0;
	
	Global_1574434 = uVar0;
}

int func_715(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_717();
			}
			else
			{
				return 0;
			}
		}
		if (!func_716())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_717();
					}
					else
					{
						return 0;
					}
				}
				if (func_669())
				{
					if (!bParam2)
					{
						func_717();
					}
					else
					{
						return 0;
					}
				}
				if (func_667(155))
				{
					if (!bParam2)
					{
						func_717();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_717();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_717();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_717();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_716()
{
	return Global_1312831;
}

void func_717()
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_718(int iParam0)
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
		
		default:
	}
	return 0;
}

int func_719(int iParam0)
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
		
		default:
	}
	return 0;
}

void func_720(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_717();
	}
	unk_0xAEA89A7E72415961(uParam0, 0, Param1.f_16);
}

int func_721(int iParam0)
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}


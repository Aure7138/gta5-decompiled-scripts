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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
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
	struct<528> Local_730 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1258 = -1;
	var uLocal_1259 = 0;
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
	var uLocal_1280 = -1082130432;
	var uLocal_1281 = 3;
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
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
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
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = -1;
	var uLocal_1352 = -1;
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
	var uLocal_1374 = -1082130432;
	var uLocal_1375 = 3;
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
	var uLocal_1398 = -1;
	var uLocal_1399 = -1;
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
	var uLocal_1421 = -1082130432;
	var uLocal_1422 = 3;
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
	var uLocal_1445 = -1;
	var uLocal_1446 = -1;
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
	var uLocal_1468 = -1082130432;
	var uLocal_1469 = 3;
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
	var uLocal_1492 = -1;
	var uLocal_1493 = -1;
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
	var uLocal_1515 = -1082130432;
	var uLocal_1516 = 3;
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
	var uLocal_1539 = -1;
	var uLocal_1540 = -1;
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
	var uLocal_1562 = -1082130432;
	var uLocal_1563 = 3;
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
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = -1;
	var uLocal_1587 = -1;
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
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = -1082130432;
	var uLocal_1610 = 3;
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
	var uLocal_1633 = -1;
	var uLocal_1634 = -1;
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
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = -1082130432;
	var uLocal_1657 = 3;
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
	var uLocal_1679 = 0;
	var uLocal_1680 = -1;
	var uLocal_1681 = -1;
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
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = -1082130432;
	var uLocal_1704 = 3;
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
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = -1;
	var uLocal_1728 = -1;
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
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = -1082130432;
	var uLocal_1751 = 3;
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
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
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
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = -1;
	var uLocal_1822 = -1;
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
	var uLocal_1844 = -1082130432;
	var uLocal_1845 = 3;
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
	var uLocal_1868 = -1;
	var uLocal_1869 = -1;
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
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = -1082130432;
	var uLocal_1892 = 3;
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
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = -1;
	var uLocal_1916 = -1;
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
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = -1082130432;
	var uLocal_1939 = 3;
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
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = -1;
	var uLocal_1963 = -1;
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
	var uLocal_1985 = -1082130432;
	var uLocal_1986 = 3;
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
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = -1;
	var uLocal_2010 = -1;
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
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = -1082130432;
	var uLocal_2033 = 3;
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
	var uLocal_2055 = 0;
	var uLocal_2056 = -1;
	var uLocal_2057 = -1;
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
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = -1082130432;
	var uLocal_2080 = 3;
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
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = -1;
	var uLocal_2104 = -1;
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
	var uLocal_2125 = 0;
	var uLocal_2126 = -1082130432;
	var uLocal_2127 = 3;
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
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = -1;
	var uLocal_2151 = -1;
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
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = -1082130432;
	var uLocal_2174 = 3;
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
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = -1;
	var uLocal_2198 = -1;
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
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = -1082130432;
	var uLocal_2221 = 3;
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
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
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
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = -1;
	var uLocal_2292 = -1;
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
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = -1082130432;
	var uLocal_2315 = 3;
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
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = -1;
	var uLocal_2339 = -1;
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
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = -1082130432;
	var uLocal_2362 = 3;
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
	var uLocal_2432 = -1;
	var uLocal_2433 = -1;
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
	var uLocal_2455 = -1082130432;
	var uLocal_2456 = 3;
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
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = -1;
	var uLocal_2480 = -1;
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
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = -1082130432;
	var uLocal_2503 = 3;
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
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = -1;
	var uLocal_2527 = -1;
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
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = -1082130432;
	var uLocal_2550 = 3;
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
	var uLocal_2573 = -1;
	var uLocal_2574 = -1;
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
	var uLocal_2595 = 0;
	var uLocal_2596 = -1082130432;
	var uLocal_2597 = 3;
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
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = -1;
	var uLocal_2621 = -1;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
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
	var uLocal_2643 = -1082130432;
	var uLocal_2644 = 3;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
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
	var uLocal_2667 = -1;
	var uLocal_2668 = -1;
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
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = -1082130432;
	var uLocal_2691 = 3;
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
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
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
	var uLocal_2714 = -1;
	var uLocal_2715 = -1;
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
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = -1082130432;
	var uLocal_2738 = 3;
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
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = -1;
	struct<11> Local_2762[32];
	struct<12> Local_3115 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	fLocal_305 = 40000f;
	iLocal_341 = unk_0x83E9D86E63672B9A();
	iLocal_342 = unk_0x83E9D86E63672B9A();
	iLocal_343 = -1;
	iLocal_344 = -1;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!func_615(ScriptParam_0))
		{
			func_586();
		}
	}
	while (true)
	{
		func_585();
		if (func_578() || func_576())
		{
			func_586();
		}
		if (func_574())
		{
			func_586();
		}
		func_548();
		switch (func_547(unk_0x141F0E5D020B2DB5()))
		{
			case 0:
				if (func_546() == 1)
				{
					if (func_545())
					{
						func_544(unk_0x141F0E5D020B2DB5(), 1);
					}
				}
				break;
			
			case 1:
				if (func_546() == 1)
				{
					func_107();
					func_97();
				}
				else if (func_546() == 3)
				{
					func_544(unk_0x141F0E5D020B2DB5(), 3);
				}
				break;
			
			case 3:
				func_586();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			switch (func_546())
			{
				case 0:
					if (func_84())
					{
						func_83(1);
					}
					break;
				
				case 1:
					if (Local_642.f_37 == 6)
					{
						func_83(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_319, 1000, 0))
					{
						func_83(3);
					}
					break;
				
				case 3:
					func_586();
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
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xDCC86F723E82125E(Local_642.f_2, 0))
		{
			unk_0x59A0729D503ED758(&(Local_642.f_2), 0);
			Local_642.f_1 = unk_0x2AA13A84EE2D3B24();
		}
	}
	switch (Local_642.f_37)
	{
		case 0:
			if (func_41())
			{
				if (func_31())
				{
					func_30(1);
				}
			}
			else
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_642.f_43), func_29(), 0) || unk_0xDCC86F723E82125E(Local_642.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_642.f_38 = unk_0x2AA13A84EE2D3B24();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_642.f_39), func_28(0), 0) || unk_0xDCC86F723E82125E(Local_642.f_2, 0))
			{
				if (!unk_0xDCC86F723E82125E(Local_642.f_2, 1))
				{
					Local_642.f_1 = unk_0x2AA13A84EE2D3B24();
					unk_0x59A0729D503ED758(&(Local_642.f_2), 1);
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
		if (unk_0x691BFDC1728FD714(Local_642.f_67[iVar0 /*2*/].f_1) && !unk_0xB6900B8CB0ABBD2B(unk_0x6622BC2FDC6DBB0E(Local_642.f_67[iVar0 /*2*/].f_1)))
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
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xDCC86F723E82125E(Local_2762[iVar1 /*11*/].f_1, 1) || Local_2762[iVar1 /*11*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xDCC86F723E82125E(Local_2762[iVar1 /*11*/].f_1, 0))
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
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(*iParam0));
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
	Param0.f_1 = unk_0xA34E7C2A5118D638();
	if (!iParam14 == 0)
	{
		unk_0x74A5559828D3116B(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar2);
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
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
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
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			unk_0x59A0729D503ED758(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0xDCC86F723E82125E(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x59A0729D503ED758(&(Local_642.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
				if (unk_0xDF73DA5E2287C499(iVar4) && !func_14(iVar4, 0))
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
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312746;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2762[iParam0 /*11*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4);
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
			if (fVar0 >= Global_262145.f_8849)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_8850)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_8851)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_8852)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_8853)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_8854)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_8855 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_8856)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_8857)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_8858)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_8859)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_8860))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_8861))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_8973)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_8974)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_8864))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_8866))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_8867))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_8868))
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
		if (Local_642.f_4[iParam0] == unk_0x935FA14EDA695A82() && func_21(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4, 0))
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
	
	iVar0 = Local_2762[iParam0 /*11*/].f_4;
	iVar1 = Local_2762[iParam0 /*11*/].f_4.f_1;
	if (!unk_0xDCC86F723E82125E(Local_642.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_642.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_642.f_49++;
			unk_0x59A0729D503ED758(&(Local_642.f_48), iParam0);
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
		else if ((Local_642.f_4[iVar3] < 0 || func_21(iVar0, Local_2762[Local_642.f_4[iVar3] /*11*/].f_4)) || func_24(iVar0, Local_2762[Local_642.f_4[iVar3] /*11*/].f_4, iVar1, Local_2762[Local_642.f_4[iVar3] /*11*/].f_4.f_1))
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
	
	if (unk_0xDCC86F723E82125E(Local_642.f_47, iParam0))
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
		unk_0x77621132305B133B(&(Local_642.f_48), iParam0);
		unk_0x77621132305B133B(&(Local_642.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2AA13A84EE2D3B24();
		}
		else
		{
			*uParam0 = unk_0x3BC33547A5F418E8();
		}
	}
	else
	{
		*uParam0 = unk_0x693EBB4F13506457();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xDCC86F723E82125E(Local_642.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_642.f_3)
	{
		case 0:
			return Global_262145.f_8172;
		
		case 8:
			return Global_262145.f_8173;
		
		case 3:
			return Global_262145.f_8174;
		
		case 1:
			return Global_262145.f_8959;
		
		case 6:
			return Global_262145.f_8960;
		
		case 10:
			return Global_262145.f_8962;
		
		case 11:
			return Global_262145.f_8964;
		
		case 12:
			return Global_262145.f_8965;
		
		case 15:
			return Global_262145.f_8969;
		
		case 16:
			return Global_262145.f_8970;
		
		case 17:
			return Global_262145.f_8971;
		
		case 18:
			return Global_262145.f_8972;
		
		case 13:
			return Global_262145.f_8963;
		
		case 14:
			return Global_262145.f_8966;
		
		case 2:
			return Global_262145.f_8176;
		
		case 7:
			return Global_262145.f_8961;
		
		case 9:
			return Global_262145.f_8967;
		
		case 5:
			return Global_262145.f_8177;
		
		case 4:
			return Global_262145.f_8175;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_8929;
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
			if (!unk_0x1BDB4A81F7EE9BE6(Var0.f_1))
			{
				if (func_38(Local_642.f_3, iLocal_338, &Var2, &uVar5))
				{
					Local_642.f_55[iLocal_338] = func_34(iLocal_338);
					if (unk_0xDCC86F723E82125E(Local_2762[Local_642.f_55[iLocal_338] /*11*/].f_2, iLocal_338))
					{
						if (func_33(&(Local_642.f_67[iLocal_338 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0))
						{
							unk_0x77A10AB6D4288EA1(unk_0x6622BC2FDC6DBB0E(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							unk_0x0782F0CAEA719452(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							unk_0x3907D4738A2C8ABD(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							unk_0xAB5D9565F49A6333(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), 0);
							func_32(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), 1);
							if (unk_0x9F7DDFEF511FDBD8("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x99230E3785E2C923(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x9F7DDFEF511FDBD8("MPBitset", 3))
							{
								if (unk_0x3D32B80EFC48A92D(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0xFE76479AD91F5A0A(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), "MPBitset");
								}
								unk_0x59A0729D503ED758(&iVar6, 10);
								unk_0x59A0729D503ED758(&iVar6, 11);
								unk_0x99230E3785E2C923(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_338 /*2*/].f_1), "MPBitset", iVar6);
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
	
	if (unk_0x9F7DDFEF511FDBD8("MPBitset", 3))
	{
		if (unk_0x3D32B80EFC48A92D(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xFE76479AD91F5A0A(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x59A0729D503ED758(&uVar0, 13);
		}
		else
		{
			unk_0x77621132305B133B(&uVar0, 13);
		}
		unk_0x99230E3785E2C923(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x0B3DCCE96DC81466(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3FC9316FEF4E4720(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xD53B4DCC7B2C8551(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xBE16446E4B20EFE2(uVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(uVar0, iParam10);
		if (unk_0x6061DFC4D87F4B3E(iVar0))
		{
			if (bParam8)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
			else
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 0);
			}
		}
		unk_0x59CE4F88873CD573(iVar0, iParam9);
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
		while (iVar0 <= (unk_0x55191629F1199760() - 1))
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
			{
				iVar8 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
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
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
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
	unk_0x7567CEA8E6B5340B(iParam0);
	return unk_0x0845149A26DABBA5(iParam0);
}

bool func_41()
{
	return (func_5(Local_642.f_3) || func_39(Local_642.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x19EE47A00B170BB8() < iParam0)
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
	if (func_45(&(Global_1573879.f_18)))
	{
		if (!func_1(&(Global_1573879.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1573879.f_18));
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
	if (iParam1 && unk_0xEE9C884FC3CB6070() < iParam0)
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
	return unk_0xDCC86F723E82125E(Global_1573879.f_1, 0);
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
			unk_0x793E1948527089BB(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			if (unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x77621132305B133B(&iVar0, iParam0);
				unk_0x793E1948527089BB(iVar0, iParam1);
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
	uVar1 = unk_0x11BD984A2A4EF9A7(uVar0);
	return unk_0xDCC86F723E82125E(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xDCC86F723E82125E(Global_1573879.f_1, 2) && !func_8(unk_0xA34E7C2A5118D638())) && !func_7(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB8A06E7E729EED0A(sParam1))
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
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 2);
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
		if (Global_2426867.f_2428)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_16);
	func_54(uParam0);
	if (func_53(uParam0->f_1))
	{
		if (Global_2426867.f_2138[0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426867.f_2138[0 /*72*/].f_1 == 13 || Global_2426867.f_2138[0 /*72*/].f_1 == 52) || Global_2426867.f_2138[0 /*72*/].f_1 == 53) || Global_2426867.f_2138[0 /*72*/].f_1 == 57)
		{
			Global_2426867.f_2138[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426867.f_2138[iVar0 + 1 /*72*/] = { Global_2426867.f_2138[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426867.f_2138[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 1);
				Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_52(Global_2426867.f_2138[iVar0 /*72*/].f_1))
				{
					Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
					unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
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
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
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
	var uVar0;
	
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
	if (func_79(unk_0xA34E7C2A5118D638()) || (func_78() && func_77()))
	{
		uVar0 = func_76();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(iVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(iVar0) != -1)
				{
					if (func_12(unk_0x8ACC9D9AC6076DCB(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_75(iParam1, iParam0, 0);
							}
							else
							{
								return func_66(iParam0, unk_0x8ACC9D9AC6076DCB(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_66(iParam0, unk_0x8ACC9D9AC6076DCB(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_75(iParam1, iParam0, 0);
		}
		else
		{
			return func_66(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_66(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)
{
	return func_60(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_65(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
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
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
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
	if (func_62(Global_1613622.f_68788))
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
		if (iParam0 == Global_262145.f_7331[iVar0])
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
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
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
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_74(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_65(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_64(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_73(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
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
		
		default:
	}
	return 12;
}

var func_68(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_69(int iParam0)
{
	if (!iParam0 == func_81())
	{
		if (func_71(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_70(int iParam0)
{
	if (iParam0 != func_81())
	{
		return Global_1608811[iParam0 /*109*/].f_9;
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
	return Global_1608811[iParam0 /*109*/].f_9 != func_81();
}

int func_72(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_81())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
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
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
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
			iVar0 = Global_1613622.f_65200[iParam0];
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
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

bool func_78()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

int func_79(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_80())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
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
	Local_642.f_0 = iParam0;
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_642.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_642.f_39));
	func_89();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_642.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_85();
	}
	return 1;
}

void func_85()
{
	int iVar0;
	
	if (func_39(Local_642.f_3))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_642.f_67[iVar0 /*2*/] = func_88();
			iVar0++;
		}
	}
	else if (Local_642.f_3 == 12)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_642.f_67[iVar0 /*2*/] = func_87();
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_642.f_67[iVar0 /*2*/] = func_86();
			iVar0++;
		}
	}
}

int func_86()
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 2);
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
	
	iVar0 = unk_0x531444754C426278(0, 2);
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
	
	iVar0 = unk_0x531444754C426278(0, 2);
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
	Local_642.f_3 = iVar0;
	func_90(func_92(133, iVar0, 0, 0));
}

void func_90(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 401;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam0;
	iVar3 = func_91(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0x20A20BF765914E37(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
			{
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
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
	
	iVar0[0] = Global_262145.f_9258;
	iVar0[1] = Global_262145.f_8931;
	iVar0[2] = Global_262145.f_9262;
	iVar0[3] = Global_262145.f_9260;
	iVar0[4] = Global_262145.f_9261;
	iVar0[5] = Global_262145.f_9263;
	iVar0[6] = Global_262145.f_8932;
	iVar0[7] = Global_262145.f_8933;
	iVar0[8] = Global_262145.f_9259;
	iVar0[9] = Global_262145.f_8939;
	iVar0[10] = Global_262145.f_8934;
	iVar0[11] = Global_262145.f_8936;
	iVar0[12] = Global_262145.f_8937;
	iVar0[13] = Global_262145.f_8935;
	iVar0[14] = Global_262145.f_8938;
	iVar0[15] = Global_262145.f_8941;
	iVar0[16] = Global_262145.f_8942;
	iVar0[17] = Global_262145.f_8943;
	iVar0[18] = Global_262145.f_8944;
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
	fVar22 = unk_0xC6D38B918E72181E(0f, fVar20);
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
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6473)
		{
			if (Global_2452665.f_124[iVar0 /*2*/] == iVar1 && Global_2452665.f_124[iVar0 /*2*/].f_1 == func_92(iParam0, iParam1, iParam2, iParam3))
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
			return Global_262145.f_8166;
		
		case 1:
			return Global_262145.f_8945;
		
		case 6:
			return Global_262145.f_8946;
		
		case 7:
			return Global_262145.f_8947;
		
		case 8:
			return Global_262145.f_8167;
		
		case 3:
			return Global_262145.f_8168;
		
		case 4:
			return Global_262145.f_8169;
		
		case 2:
			return Global_262145.f_8170;
		
		case 5:
			return Global_262145.f_8171;
		
		case 9:
			return Global_262145.f_8953;
		
		case 10:
			return Global_262145.f_8948;
		
		case 11:
			return Global_262145.f_8950;
		
		case 12:
			return Global_262145.f_8951;
		
		case 15:
			return Global_262145.f_8955;
		
		case 16:
			return Global_262145.f_8956;
		
		case 17:
			return Global_262145.f_8957;
		
		case 18:
			return Global_262145.f_8958;
		
		case 13:
			return Global_262145.f_8949;
		
		case 14:
			return Global_262145.f_8952;
		
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
			if (Local_642.f_55[iVar0] == unk_0x935FA14EDA695A82())
			{
				if (func_98(iVar0))
				{
					if (!unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_2, iVar0))
					{
						unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_2), iVar0);
					}
				}
				else if (unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_2, iVar0))
				{
					unk_0x77621132305B133B(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_2), iVar0);
				}
			}
			else if (unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_2, iVar0))
			{
				unk_0x77621132305B133B(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_2), iVar0);
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
		if (func_99(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB3E60341E58EA2CF(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x7F49B0A4EC76092E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x7F49B0A4EC76092E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDF38DD44307A8523(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x2E895CA0C4A6EC85(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_102(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
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
	Global_2404919++;
	return 1;
}

int func_100(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (!unk_0xD5DFCA69ACAA20E3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4F982ED5336EA899(func_36(unk_0xA34E7C2A5118D638()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8EBAC9BC4005929D(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xA34E7C2A5118D638()))
				{
					if ((func_101(iVar1) || !bParam10) && !Global_2417071[iVar1 /*306*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x07CBE0ED3114C7D8(iVar1) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x07CBE0ED3114C7D8(iVar1) != unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))) || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x4F982ED5336EA899(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x07CBE0ED3114C7D8(iVar1) != iParam8 || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
						{
							if (unk_0x4F982ED5336EA899(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
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
	if (unk_0x06FCE440581B1EC5(unk_0xCF4C00513A86E840(iParam0)) || Global_2417071[iParam0 /*306*/].f_241)
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
		if ((iParam8 == 1 && unk_0xA34E7C2A5118D638() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DC9BA2299B45EA6(unk_0xCF4C00513A86E840(iVar1)) && func_101(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) != unk_0x07CBE0ED3114C7D8(iVar1))) || unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
						{
							if (((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && uParam9) && bParam6) && func_103(iVar1))
							{
							}
							else if (unk_0x95CCECA3948CFE7B(unk_0xCF4C00513A86E840(iVar1)))
							{
								if (unk_0x4F982ED5336EA899(func_36(iVar1), Param0, 1) < fParam3)
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
	if (func_106(unk_0xA34E7C2A5118D638(), iParam0))
	{
		return 1;
	}
	Global_2457104 = { func_105(iParam0) };
	if (unk_0x45C7D789894EAE64(&Global_2457104))
	{
		return 1;
	}
	if (func_104(unk_0xA34E7C2A5118D638(), iParam0))
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
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_105(iParam0) };
		Global_2457117 = { func_105(iParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
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
	
	func_541();
	func_540();
	if (func_538())
	{
		func_439();
	}
	if (!func_7(unk_0xA34E7C2A5118D638()))
	{
		if (func_420())
		{
			if (unk_0xDCC86F723E82125E(iLocal_333, 6))
			{
				unk_0x77621132305B133B(&iLocal_333, 6);
			}
			switch (Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_3)
			{
				case 0:
					if (Local_642.f_37 < 2)
					{
						if (Local_642.f_3 != -1)
						{
							func_419(1);
							func_418(1);
						}
					}
					else
					{
						func_418(2);
					}
					break;
				
				case 1:
					func_412(9);
					if (Local_3115.f_8 == 0)
					{
						Local_3115.f_8 = unk_0x20F8506526D25CE0();
					}
					if (Local_642.f_37 >= 2)
					{
						func_418(2);
						Local_3115.f_9 = unk_0x20F8506526D25CE0();
					}
					if (func_41())
					{
						func_412(0);
					}
					func_410((func_29() - func_411(&(Local_642.f_43), 0, 0)));
					func_407(func_409((func_29() - func_411(&(Local_642.f_43), 0, 0)), 0), func_408(Local_642.f_3));
					func_396(0, 0);
					func_387();
					func_368();
					if (func_367())
					{
						func_366();
					}
					break;
				
				case 2:
					if (Local_642.f_37 > 2)
					{
						func_419(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_365())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_349(133, fVar0, fVar1, 0, 0, 0, 0);
						func_348(Local_642.f_3, 1);
						func_347(23, 1);
						if (Local_3115.f_8 == 0)
						{
							Local_3115.f_8 = unk_0x20F8506526D25CE0();
						}
						if (Local_3115.f_9 == 0)
						{
							Local_3115.f_9 = unk_0x20F8506526D25CE0();
						}
						func_343();
						unk_0x4D474CD3B45E1BCE(1);
						if (func_365())
						{
							unk_0xFD62177C7242216E(0f);
							unk_0x60B57BC5E51D2074(0);
						}
						if (Local_642.f_3 == 14)
						{
							func_342(&Local_353);
						}
						func_341();
						if (!func_7(unk_0xA34E7C2A5118D638()))
						{
							func_50(62, "AMCH_STARTED", func_340(Local_642.f_3), func_55(), -1, func_55());
							if (func_337("AMCH_WARN", func_339(Local_642.f_3), func_338(Local_642.f_3)))
							{
								unk_0x9F4AA6F234E8A860(1);
							}
						}
						if (func_41())
						{
							func_321(678f, 794f, 206f, 8f, 0);
							func_321(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_321(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_418(3);
					}
					break;
				
				case 3:
					if (Local_642.f_37 > 3)
					{
						iLocal_335 = 0;
						func_418(4);
					}
					else
					{
						if (!unk_0xDCC86F723E82125E(Local_642.f_2, 1))
						{
							func_287();
							func_284();
						}
						if (func_283(0) && !func_20(0))
						{
							func_282();
						}
					}
					if (func_365())
					{
						unk_0x30A4F7E00272A0F5(unk_0xA34E7C2A5118D638());
					}
					func_281();
					func_258();
					func_439();
					func_396(0, 1);
					func_387();
					func_368();
					func_412(2);
					func_412(5);
					func_412(7);
					break;
				
				case 4:
					if (func_246(&uLocal_345, !unk_0xDCC86F723E82125E(Local_642.f_2, 0)) || unk_0xDCC86F723E82125E(Local_642.f_2, 0))
					{
						if (func_5(Local_642.f_3))
						{
							if (Local_642.f_37 == 5)
							{
								func_418(5);
							}
						}
						else
						{
							func_418(6);
						}
					}
					func_233();
					func_139();
					func_258();
					func_439();
					func_396(1, 1);
					func_341();
					break;
				
				case 5:
					if (Local_642.f_37 > 5)
					{
						func_418(6);
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
		Var0 = { Local_642.f_67[iLocal_352 /*2*/] };
		if (unk_0x1BDB4A81F7EE9BE6(Var0.f_1))
		{
			iVar2 = unk_0xF8A3C382964380BC(Var0.f_1);
			if (unk_0xFE7BCFB02217DCDF(iVar2))
			{
				if (!unk_0x5D42322C7DB888D0(iVar2, 0))
				{
					unk_0xEF84021B2AB5E334(&iVar2);
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

void func_109()
{
	if (Local_642.f_37 == 5)
	{
		if (unk_0x1BDB4A81F7EE9BE6(Local_642.f_67[iLocal_352 /*2*/].f_1))
		{
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_352 /*2*/].f_1)))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_628, iLocal_352))
				{
					unk_0x59A0729D503ED758(&iLocal_628, iLocal_352);
					uLocal_629[iLocal_352] = unk_0x83E9D86E63672B9A();
					unk_0x90EA80826C00FB10(uLocal_629[iLocal_352], "Explosion_Countdown", unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_352 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x19EF487B6B6C1F0B(uLocal_629[iLocal_352], "Time", 30f);
				}
				if ((30000 - func_411(&(Local_642.f_45), 0, 0)) >= 0)
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_352 /*2*/].f_1), 0))
					{
						func_412(1);
						iLocal_640 = 1;
					}
				}
				else if (unk_0xFEA25F5BCFDBD741(Local_642.f_67[iLocal_352 /*2*/].f_1))
				{
					unk_0x0CBE045BBBA5CFDE(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_352 /*2*/].f_1));
					unk_0xE0FE625F16A0E489(unk_0xF8A3C382964380BC(Local_642.f_67[iLocal_352 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xDCC86F723E82125E(iLocal_628, iLocal_352) && !unk_0x6108F37F12ABC27B(uLocal_629[iLocal_352]))
			{
				unk_0x7A2D5FC5F94932AA(uLocal_629[iLocal_352]);
			}
		}
		if (iLocal_641)
		{
			if (!func_79(unk_0xA34E7C2A5118D638()))
			{
				func_111(func_409((30000 - func_411(&(Local_642.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0);
				func_110();
			}
		}
	}
}

void func_110()
{
	Global_1339929.f_941 = 1;
}

void func_111(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
		Global_1339929.f_1 = 1;
		func_112(7, iVar0);
		Global_1339929.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = iParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = iParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_112(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
}

void func_114()
{
	if (((func_12(unk_0xA34E7C2A5118D638(), 1, 1) && !func_7(unk_0xA34E7C2A5118D638())) && !func_130(unk_0xA34E7C2A5118D638())) && func_420())
	{
		if (Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_3 == 1)
		{
			func_127(func_129(Local_642.f_3), func_339(Local_642.f_3), 0);
		}
		else if (Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_3 == 3)
		{
			if (!unk_0xDCC86F723E82125E(iLocal_333, 10))
			{
				func_115(func_338(Local_642.f_3), 0);
			}
			else
			{
				func_115("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_341();
		}
	}
	else
	{
		func_341();
	}
}

void func_115(char* sParam0, bool bParam1)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (func_125(sParam0))
	{
		return;
	}
	func_119();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_118();
	func_117(bParam1);
	func_116();
}

void func_116()
{
	unk_0x59A0729D503ED758(&(Global_1312577.f_56), 1);
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0x77621132305B133B(&(Global_1312577.f_56), 0);
}

void func_118()
{
	Global_1312577.f_8 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 86400000);
	Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
}

void func_119()
{
	func_121();
	func_120(0);
}

void func_120(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xBBAE3E0C60A8AD4B();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x2AA13A84EE2D3B24();
		Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
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
		unk_0x9793A6B024AF02EF(&(Global_1312577.f_10));
		func_122();
		unk_0x8C79EF3DED0E80D0();
	}
}

void func_122()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			unk_0x6DC80A902A91958F(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_55);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_123()
{
	if (Global_1312577 == 19)
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
	unk_0xF932A8699EA66642(&(Global_1312577.f_10));
	func_122();
	return unk_0xD6AFC45B1375A9DD();
}

bool func_125(char* sParam0)
{
	if (!func_123())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_126(sParam0);
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10));
}

bool func_126(char* sParam0)
{
	if (!func_123())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

void func_127(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam1) > 23)
	{
		return;
	}
	if (func_128(sParam0, sParam1))
	{
		return;
	}
	func_119();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_118();
	func_117(bParam2);
	func_116();
}

bool func_128(char* sParam0, char* sParam1)
{
	if (!func_123())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam1) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

char* func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288())) || unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288())) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288())) || unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288())) || unk_0x317B32CC600C880A(unk_0xC8B93D94F8954288()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288())) || unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288())) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288())) || unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288())) || unk_0x317B32CC600C880A(unk_0xC8B93D94F8954288())) || unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
					iVar1 = unk_0x6D5BB810CC209E15(iVar0);
					if (unk_0xE6CB12C10EE5D793(iVar1) && unk_0x7F43378ECD4F3CCD(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0xB93A114562263226(unk_0xC8B93D94F8954288()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_sniperrifle"), 0) && !unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_heavysniper"), 0)) && !unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288())) || unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288())) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288())) || unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288())) || unk_0x317B32CC600C880A(unk_0xC8B93D94F8954288()))
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
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		if ((func_133() && !func_132()) || func_131(unk_0xA34E7C2A5118D638(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1573879.f_13)))
		{
			if (!func_1(&(Global_1573879.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1573879.f_13));
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9);
}

bool func_131(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

bool func_132()
{
	return Global_1312416.f_1;
}

bool func_133()
{
	return Global_1312416;
}

void func_134()
{
	if (!unk_0xDCC86F723E82125E(iLocal_333, 6))
	{
		unk_0xF4C9DB13E4CF9A58();
		func_396(1, 1);
		unk_0x7A2D5FC5F94932AA(iLocal_341);
		unk_0x77621132305B133B(&iLocal_333, 4);
		func_138();
		func_136();
		unk_0x0CBFCEC485013807(0f, 0);
		unk_0x59A0729D503ED758(&iLocal_333, 6);
		func_135();
	}
}

void func_135()
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_6 = 0;
}

void func_136()
{
	if (Global_2409446.f_6 == unk_0x46CF50E0E5A24635())
	{
		func_137();
	}
}

void func_137()
{
	struct<25> Var0;
	
	if (unk_0xC2DCA35AE2EC9DC4(Global_2409446.f_6))
	{
		if (!Global_2409446.f_6 == unk_0x46CF50E0E5A24635())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2409446 = { Var0 };
	Global_2409446.f_6 = -1;
}

void func_138()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x46CF50E0E5A24635())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_139()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1, 0))
	{
		if (func_7(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1), 0);
			return;
		}
		if (func_130(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1), 0);
			return;
		}
		func_199(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3115.f_6 = (Local_3115.f_6 + iVar0);
			if (!Global_262145.f_9409)
			{
				func_198(10, Local_3115.f_6);
			}
			Global_2443261 = iVar0;
			if (func_197())
			{
				func_188(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x7AF7488EF897601F(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3115.f_7 = (Local_3115.f_7 + iVar1);
			func_187();
			func_140(0, unk_0xC8B93D94F8954288(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
		}
		unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1), 0);
	}
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_141(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_141(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_151(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x96209AADF56E8FE8(iParam1))
			{
				uVar1 = unk_0x4D3C2AC8339BFB4F(iParam1);
				func_147(unk_0xB867FC7DBA46C0F1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_142(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_145(iParam0, 1) };
	if (iParam0 == func_144(unk_0xC8B93D94F8954288()))
	{
		func_143(1);
	}
	func_147(Var0, iParam1, 0, sParam2);
}

void func_143(int iParam0)
{
	Global_2426867.f_1322 = iParam0;
}

int func_144(int iParam0)
{
	return iParam0;
}

Vector3 func_145(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_146(unk_0xC8B93D94F8954288()) && unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
	{
		Var0 = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar3 = unk_0x59DD203239FBDCAD(iParam0);
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xE79F1883B253E5B8(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_146(int iParam0)
{
	return iParam0;
}

void func_147(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426867.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426867.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426867.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426867.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426867.f_741[iVar1 /*29*/].f_4 = func_150(Global_2426867.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426867.f_741[iVar1 /*29*/].f_7 = unk_0x2AA13A84EE2D3B24();
			Global_2426867.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426867.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426867.f_741[iVar1 /*29*/].f_9 = func_149();
			Global_2426867.f_741[iVar1 /*29*/].f_10 = func_148();
			StringCopy(&(Global_2426867.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_148()
{
	if (Global_2426867.f_1322)
	{
		Global_2426867.f_1322 = 0;
		return 1;
	}
	Global_2426867.f_1322 = 0;
	return 0;
}

var func_149()
{
	var uVar0;
	
	uVar0 = Global_2426867.f_1324;
	Global_2426867.f_1324 = 1;
	return uVar0;
}

float func_150(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4F982ED5336EA899(unk_0xE81835FB046A7978(), Param0, 1);
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
	
	if (func_186(unk_0xA34E7C2A5118D638()) || func_185(unk_0xA34E7C2A5118D638()))
	{
		if (Global_262145.f_7555 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7555;
		}
	}
	else if (Global_262145.f_5033 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5033;
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
			func_173(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_162((func_172(unk_0xA34E7C2A5118D638()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xEF84C5FA6302A771(iVar1, iParam8, iParam9);
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_2 != -1)
				{
					func_173(1155, iVar1, -1);
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
				func_153((func_155(unk_0xA34E7C2A5118D638()) + iVar1));
			}
			else
			{
				func_153((func_155(unk_0xA34E7C2A5118D638()) + iParam6));
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
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_5 = iParam0;
		func_154(joaat("mpply_globalxp"), iParam0);
	}
}

void func_154(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
}

int func_155(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return func_156(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_5;
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
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_157(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_105(unk_0xA34E7C2A5118D638()) };
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(&Var0))
		{
			iVar13 = func_160(func_161(&Var0));
			if (iVar13 == 0)
			{
				func_159(&Global_1347498, iParam0);
				func_158(joaat("mpply_crew_local_xp_0"), Global_1347498);
			}
			else if (iVar13 == 1)
			{
				func_159(&Global_1347499, iParam0);
				func_158(joaat("mpply_crew_local_xp_1"), Global_1347499);
			}
			else if (iVar13 == 2)
			{
				func_159(&Global_1347500, iParam0);
				func_158(joaat("mpply_crew_local_xp_2"), Global_1347500);
			}
			else if (iVar13 == 3)
			{
				func_159(&Global_1347501, iParam0);
				func_158(joaat("mpply_crew_local_xp_3"), Global_1347501);
			}
			else if (iVar13 == 4)
			{
				func_159(&Global_1347502, iParam0);
				func_158(joaat("mpply_crew_local_xp_4"), Global_1347502);
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
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347493 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347496 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347497 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347498 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347499 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347500 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347501 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347502 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347503 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347504 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347505 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347506 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347507 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347508 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347509 = uParam1;
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
	if (iParam0 == Global_1347493)
	{
		return 0;
	}
	else if (iParam0 == Global_1347494)
	{
		return 1;
	}
	else if (iParam0 == Global_1347495)
	{
		return 2;
	}
	else if (iParam0 == Global_1347496)
	{
		return 3;
	}
	else if (iParam0 == Global_1347497)
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
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return Global_2441309;
		}
	}
	return Global_2441309;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	if (func_183())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7530 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347613[func_171(-1)])
				{
					unk_0xEF84C5FA6302A771(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347613[func_171(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_170(unk_0xA34E7C2A5118D638()))
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_1 = iParam0;
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_6 = func_168(iParam0, 1);
		}
		func_167(629, iParam0, -1, 1);
		func_166(630, func_168(iParam0, 1), -1, 1);
		Global_1347613[func_171(-1)] = iParam0;
		func_163(7, 0);
	}
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_165(iParam0, iParam1))
	{
		iVar0 = func_164();
		Global_2441286[iVar0] = iParam0;
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
		if (Global_2441286[iVar1] == 0)
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
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_171(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_171(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_171(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_171(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_171(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_171(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_171(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_171(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_171(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_171(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_171(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_171(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_171(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_171(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_171(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_171(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_171(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_171(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_171(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_171(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_171(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_171(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_171(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_171(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_171(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_171(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_171(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_171(iParam2)] = iParam1;
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
		if (Global_273943[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273943[iVar3] < iParam0)
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
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
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
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_172(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return Global_1347613[func_171(-1)];
			}
			else if (func_170(iParam0))
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347613[func_171(-1)];
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
		func_166(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_167(iParam0, iVar0, iParam2, 1);
	}
}

int func_174(int iParam0)
{
	if (Global_1347492)
	{
		switch (iParam0)
		{
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
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3732:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
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
	uVar0 = Global_2466774[iParam0 /*5*/][func_171(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
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
	
	iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		iVar4 = unk_0xD9BFAEBB04416B09(iVar0);
		if (unk_0x784B3253F40F728C(iVar4))
		{
			iVar5 = unk_0x8F765930684A893F(iVar4);
			if (unk_0x07CBE0ED3114C7D8(iVar5) != -1)
			{
				if (unk_0x07CBE0ED3114C7D8(iVar5) == iVar1 || func_65(unk_0x07CBE0ED3114C7D8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xA34E7C2A5118D638())
					{
						if (func_106(unk_0xA34E7C2A5118D638(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_177(*iParam0, 100) * (20f * Global_262145.f_4202)));
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
		while (iVar0 < unk_0x55191629F1199760())
		{
			iVar3 = iVar0;
			if (unk_0x784B3253F40F728C(iVar3))
			{
				iVar4 = unk_0x8F765930684A893F(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xA34E7C2A5118D638())
					{
						iVar1++;
						if (func_106(unk_0xA34E7C2A5118D638(), iVar4))
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
				if (iVar4 != unk_0xA34E7C2A5118D638())
				{
					if (func_179(unk_0xA34E7C2A5118D638(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_106(unk_0xA34E7C2A5118D638(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_177(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_177(*iParam1, 100) * (20f * Global_262145.f_4202)));
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
	
	if (unk_0xBAEDEB596C4FA2C5() != 3)
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
		if (unk_0xA1836B70A59643DD(iParam0) > func_172(unk_0xA34E7C2A5118D638()))
		{
			iParam0 = -func_172(unk_0xA34E7C2A5118D638());
		}
	}
	if (func_182(8000, 0, 0) > 0)
	{
		if (func_182(8000, 0, 0) < (iParam0 + func_172(unk_0xA34E7C2A5118D638())))
		{
			iParam0 = (func_182(8000, 0, 0) - func_172(unk_0xA34E7C2A5118D638()));
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
	return Global_273943[iParam0];
}

int func_183()
{
	return 1;
}

int func_184(var uParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_185(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_186(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

void func_187()
{
	Global_2442431 = 1;
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
		if (!unk_0x9A07DDC8D6013A35(func_16()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_196(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_195(1, iParam4);
			Global_2555081 = 0;
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
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
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
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_192(&(Global_2554598[iParam0 /*72*/]));
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
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
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
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_196(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_197())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_197()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2458121.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4983)
		{
			iParam1 = Global_262145.f_4983;
		}
		Global_2458121.f_270 = iParam1;
		Global_2458121.f_271 = 0;
	}
}

void func_199(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x935FA14EDA695A82(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_642.f_1 - iLocal_331)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_9344)
		{
			iVar1 = Global_262145.f_9344;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_232() * iVar1);
		*uParam1 = (func_231() * iVar1);
		fVar2 = func_230();
		if (fVar2 > 0f && !unk_0xDCC86F723E82125E(Local_642.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_229())
			{
				iVar3 = func_229();
			}
			iVar4 = Local_642.f_51;
			if (iVar4 > func_228())
			{
				iVar4 = func_228();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_221(func_227(), func_226(), iVar3, fVar2, func_225(), func_224(), func_223(), iVar4)) * Global_262145.f_9357)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_221(func_220(), func_219(), iVar3, fVar2, func_225(), func_224(), func_223(), iVar4)) * Global_262145.f_9358)));
		}
		else
		{
			func_217(1);
		}
	}
	else
	{
		func_217(0);
	}
	func_200(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_216())
		{
			if (func_215(0))
			{
				if (unk_0xDF73DA5E2287C499(func_214()))
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
					func_211(&iVar0);
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

void func_201(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = 433;
		Var0.f_1 = unk_0xA34E7C2A5118D638();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x74A5559828D3116B(1, &Var0, 5, func_202(iParam0));
	}
}

var func_202(int iParam0)
{
	var uVar0;
	
	unk_0x59A0729D503ED758(&uVar0, iParam0);
	return uVar0;
}

void func_203(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_7), iParam0);
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(func_58(iParam1, -2, 1, 0));
		unk_0x2DED6C1306496257(func_209(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x1AE578B67805BFB7(iParam3);
		}
		unk_0x6DC80A902A91958F(iParam2);
		iVar0 = unk_0xC754466C15BD85AC(0, 1);
		func_205(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_205(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_208() || !unk_0xDC9A5ADFE0C41DD2()) || !func_14(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = func_206(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1718883.f_5[iVar0 /*53*/] = iParam0;
		Global_1718883.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1718883.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1718883.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1718883.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1718883.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1718883.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1718883 - 1))
	{
		if (iParam0 > Global_1718883.f_5[iVar0 /*53*/].f_1)
		{
			func_207(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1718883++;
	if (Global_1718883 > 5)
	{
		Global_1718883 = 5;
		return Global_1718883;
	}
	return (Global_1718883 - 1);
}

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1718883.f_5[iVar0 /*53*/] = { Global_1718883.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_208()
{
	return unk_0x9F37711843A20114(-1762644250);
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

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_212();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_212()
{
	return Global_262145.f_10288;
}

int func_213()
{
	return Global_262145.f_10287;
}

int func_214()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

bool func_215(bool bParam0)
{
	return func_71(unk_0xA34E7C2A5118D638(), bParam0);
}

bool func_216()
{
	return func_72(unk_0xA34E7C2A5118D638());
}

void func_217(bool bParam0)
{
	if (bParam0)
	{
		if (func_218(1))
		{
			unk_0x59A0729D503ED758(&Global_1573903, 1);
		}
	}
	else if (func_218(2))
	{
		unk_0x59A0729D503ED758(&Global_1573903, 2);
	}
}

int func_218(int iParam0)
{
	var uVar0;
	
	uVar0 = func_175(2507, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xDCC86F723E82125E(uVar0, 0) && unk_0xDCC86F723E82125E(iVar0, 1)) && unk_0xDCC86F723E82125E(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 3) && unk_0xDCC86F723E82125E(iVar0, 4)) && unk_0xDCC86F723E82125E(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 6) && unk_0xDCC86F723E82125E(iVar0, 7)) && unk_0xDCC86F723E82125E(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 9) && unk_0xDCC86F723E82125E(iVar0, 10)) && unk_0xDCC86F723E82125E(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_219()
{
	return Global_262145.f_8845;
}

int func_220()
{
	return Global_262145.f_8843;
}

int func_221(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_222(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_222(int iParam0, int iParam1, int iParam2)
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

float func_223()
{
	return Global_262145.f_8848;
}

float func_224()
{
	return Global_262145.f_8847;
}

float func_225()
{
	return Global_262145.f_8846;
}

int func_226()
{
	return Global_262145.f_8844;
}

int func_227()
{
	return Global_262145.f_8842;
}

int func_228()
{
	return Global_262145.f_9250;
}

int func_229()
{
	return Global_262145.f_9249;
}

var func_230()
{
	if (func_20(0))
	{
		return Global_262145.f_8869;
	}
	if (func_20(1))
	{
		return Global_262145.f_8870;
	}
	if (func_20(2))
	{
		return Global_262145.f_8871;
	}
	return Global_262145.f_8872;
}

int func_231()
{
	return Global_262145.f_8841;
}

int func_232()
{
	return Global_262145.f_8840;
}

void func_233()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1, 1) && (func_245() || unk_0xDCC86F723E82125E(Local_642.f_2, 0)))
	{
		if (func_56(func_244()))
		{
			func_243();
		}
		if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (!unk_0xDCC86F723E82125E(Local_642.f_2, 0))
			{
				if (func_283(0))
				{
					iVar2 = Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4;
					func_239(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_237(63, func_238(Local_642.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_339(Local_642.f_3), 1, 2);
						}
						else if (func_236())
						{
							func_237(68, func_238(Local_642.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_339(Local_642.f_3), 1, 2);
						}
						else
						{
							func_237(63, func_238(Local_642.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_339(Local_642.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_237(66, func_238(Local_642.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_339(Local_642.f_3), 1, 2);
						}
						else if (func_236())
						{
							func_237(74, func_238(Local_642.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_642.f_3), 1, 2);
						}
						else
						{
							func_237(66, func_238(Local_642.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_642.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_237(66, func_238(Local_642.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_339(Local_642.f_3), 1, 2);
						}
						else if (func_236())
						{
							func_237(74, func_238(Local_642.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_642.f_3), 1, 2);
						}
						else
						{
							func_237(66, func_238(Local_642.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_339(Local_642.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0xD9BFAEBB04416B09(Local_642.f_4[0]);
						if (unk_0x784B3253F40F728C(uVar3))
						{
							iVar4 = unk_0x8F765930684A893F(iVar3);
							if (Local_2762[Local_642.f_4[0] /*11*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2762[Local_642.f_4[0] /*11*/].f_4;
							func_239(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_235(75, func_81(), func_238(Local_642.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_339(Local_642.f_3), -1, fVar1, 1, 2, unk_0x74C5CB21CF9F1178(iVar4));
							}
							else if (func_236())
							{
								func_235(76, func_81(), func_238(Local_642.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_339(Local_642.f_3), iVar0, -1082130432, 1, 2, unk_0x74C5CB21CF9F1178(iVar4));
							}
							else
							{
								func_235(75, func_81(), func_238(Local_642.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_339(Local_642.f_3), iVar0, -1082130432, 1, 2, unk_0x74C5CB21CF9F1178(iVar4));
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
			unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1), 1);
			func_234(133);
		}
	}
}

void func_234(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_235(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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

int func_236()
{
	return 0;
}

int func_237(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)
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

char* func_238(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xC3D849E6E05C31A7())
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
			if (unk_0xC3D849E6E05C31A7())
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

int func_239(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_240(Local_642.f_3, iParam2) / 10f);
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

float func_240(int iParam0, int iParam1)
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
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_242(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_241(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_241(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_242(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_243()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 != 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_244()
{
	return Global_2426867.f_2138[0 /*72*/].f_1;
}

bool func_245()
{
	return unk_0xDCC86F723E82125E(Global_1573879.f_1, 25);
}

int func_246(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((*uParam0 > 0 && !func_257()) && !(func_256(unk_0xA34E7C2A5118D638(), 0) && (func_255(unk_0xA34E7C2A5118D638()) || func_253(unk_0xA34E7C2A5118D638()))))
	{
		func_252();
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
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 25);
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_251(uParam0, 1);
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
				func_248();
				func_251(uParam0, 2);
			}
			break;
		
		case 2:
			func_248();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_247("AMEV_LBD_HELP"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				func_251(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
				func_251(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
			return 1;
	}
	return 0;
}

bool func_247(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_248()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0))
	{
		if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_12(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 1);
			func_250("AMEV_LBD_HELP", -1);
			func_249(1);
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 0);
		}
	}
}

void func_249(int iParam0)
{
	unk_0xAC5554624B8FE548(3, 21, 200, 0, 0);
	if (iParam0 && !func_257())
	{
		unk_0xC4EE38A4CFF7544C(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_250(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam1);
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_252()
{
	Global_2442432 = 1;
}

bool func_253(int iParam0)
{
	return func_254(iParam0, 19);
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_254(iParam0, 9);
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_257()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

void func_258()
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
		bVar21 = (func_280() && !func_79(unk_0xA34E7C2A5118D638()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_81();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_642.f_4[iVar16] > -1)
			{
				uVar30 = unk_0xD9BFAEBB04416B09(Local_642.f_4[iVar16]);
				if (unk_0x784B3253F40F728C(uVar30))
				{
					iVar4 = unk_0x8F765930684A893F(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2762[Local_642.f_4[iVar16] /*11*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_239(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2762[Local_642.f_4[iVar16] /*11*/].f_4, 1);
								iVar24++;
								if (func_215(1))
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
		iVar17 = unk_0x935FA14EDA695A82();
		if (func_79(unk_0xA34E7C2A5118D638()))
		{
			uVar31 = func_278();
			iVar32 = unk_0x8ACC9D9AC6076DCB(uVar31);
			if (unk_0xDF73DA5E2287C499(iVar32))
			{
				iVar33 = unk_0xB916365AA117A9F4(iVar32);
				if (unk_0x784B3253F40F728C(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_239(&iVar13, &fVar18, iLocal_335, 1);
		func_239(&iVar14, &fVar19, Local_2762[iVar17 /*11*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_411(&(Local_642.f_39), 0, 0);
		iVar15 = func_409(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_277(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xDCC86F723E82125E(iLocal_333, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_280() || Local_642.f_3 == 6)
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
			func_273(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_238(Local_642.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_274(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_236())
		{
			func_272(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_274(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_263(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_238(Local_642.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_274(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_259();
	}
}

void func_259()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_262();
	if (fVar0 >= 0f)
	{
		if (Local_642.f_37 == 3)
		{
			if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
				{
					iVar1 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
					if (unk_0x5D42322C7DB888D0(iVar1, 0))
					{
						func_261(iVar1, &fLocal_339);
						fVar2 = (fVar0 + fLocal_339);
						unk_0x0CBFCEC485013807(fVar2, 1);
						func_260(fVar0);
						return;
					}
				}
			}
		}
		if (func_247("AMCH_FLYLOW"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		if (unk_0xDCC86F723E82125E(iLocal_333, 4))
		{
			unk_0x7A2D5FC5F94932AA(iLocal_341);
			unk_0x77621132305B133B(&iLocal_333, 4);
		}
		unk_0x0CBFCEC485013807(0f, 0);
	}
}

void func_260(float fParam0)
{
	float fVar0;
	
	if (unk_0x98C1A853350F0AC5(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_412(6);
			if (!unk_0xDCC86F723E82125E(iLocal_333, 4))
			{
				unk_0xC4EE38A4CFF7544C(iLocal_341, "Altitude_Warning", "EXILE_1", 1);
				unk_0x59A0729D503ED758(&iLocal_333, 4);
			}
		}
		else
		{
			if (func_247("AMCH_FLYLOW"))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
			if (unk_0xDCC86F723E82125E(iLocal_333, 4))
			{
				unk_0x7A2D5FC5F94932AA(iLocal_341);
				unk_0x77621132305B133B(&iLocal_333, 4);
			}
		}
	}
}

float func_261(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	unk_0x32B7B9548CC32D81(Var1, uParam1, 1);
	unk_0x32B7B9548CC32D81(Var1, &uVar4, 0);
	if (unk_0xA94EBB7700AF16A8())
	{
		func_412(3);
		unk_0x59A0729D503ED758(&iLocal_333, 10);
		func_27(&uLocal_329, 0, 0);
	}
	else if (unk_0xDCC86F723E82125E(iLocal_333, 10))
	{
		if (func_1(&uLocal_329, 2000, 0))
		{
			unk_0x77621132305B133B(&iLocal_333, 10);
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

float func_262()
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

void func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_269(0) == 0)
	{
		return;
	}
	func_268();
	iVar1 = 0;
	if (((Global_2442022[0] != iParam0 || Global_2442022[1] != iParam1) || Global_2442022[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2442022[0] = iParam0;
	Global_2442022[1] = iParam1;
	Global_2442022[2] = iParam2;
	Global_2442022[3] = 0;
	Global_2442022[4] = 0;
	if (Global_2442022[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[0]);
			Global_2442028[0 /*16*/] = { func_267(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_264(iParam3, &(Global_2442028[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16);
		}
	}
	if (Global_2442022[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[1]);
			Global_2442028[1 /*16*/] = { func_267(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_264(iParam4, &(Global_2442028[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17);
		}
	}
	if (Global_2442022[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[2]);
			Global_2442028[2 /*16*/] = { func_267(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_264(iParam5, &(Global_2442028[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18);
		}
	}
	if (bParam12)
	{
		func_264(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xA34E7C2A5118D638() != func_81())
			{
				if (func_130(unk_0xA34E7C2A5118D638()) == 0)
				{
					func_264(iParam7, unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_264(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_264(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0);
	*iParam10 = 0;
	func_110();
}

void func_264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
		Global_1339929.f_1 = 1;
		func_112(6, iVar0);
		Global_1339929.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3436.f_183[iVar0] = iParam3;
		Global_1339929.f_3436.f_172[iVar0] = iParam2;
		Global_1339929.f_3436.f_260[iVar0] = iParam4;
		Global_1339929.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339929.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339929.f_3436.f_443[iVar0] = iParam7;
		Global_1339929.f_3436.f_454[iVar0] = fParam8;
		Global_1339929.f_3436.f_497[iVar0] = iParam9;
		Global_1339929.f_3436.f_508[iVar0] = iParam10;
		Global_1339929.f_3436.f_205[iVar0] = iParam11;
		Global_1339929.f_3436.f_216[iVar0] = iParam12;
		Global_1339929.f_3436.f_227[iVar0] = iParam13;
		Global_1339929.f_3436.f_238[iVar0] = iParam14;
		Global_1339929.f_3436.f_249[iVar0] = iParam15;
		Global_1339929.f_3436.f_519[iVar0] = iParam16;
		Global_1339929.f_3436.f_530[iVar0] = iParam17;
		Global_1339929.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_266())
		{
			Global_1339929.f_941 = 1;
		}
		if (unk_0x68B0A67658F2D9C2())
		{
			iVar2 = 0;
			unk_0x94AEC7924AE05010(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339929.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339929.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339929.f_941 = 1;
			}
			if (func_265())
			{
				Global_1339929.f_945 = 1;
			}
		}
	}
}

int func_265()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x94AEC7924AE05010(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_266()
{
	if ((unk_0x884056BD9590BF29() == 8 || unk_0x884056BD9590BF29() == 9) || unk_0x884056BD9590BF29() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_267(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_268()
{
	unk_0x68A38902ADFD05FE(8);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(7);
	Global_2442435 = 1;
}

int func_269(bool bParam0)
{
	if (func_271())
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xA34E7C2A5118D638(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_270()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

bool func_271()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 12);
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_269(0) == 0)
	{
		return;
	}
	func_268();
	iVar1 = 0;
	if (((Global_2442022[0] != iParam0 || Global_2442022[1] != iParam1) || Global_2442022[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2442022[0] = iParam0;
	Global_2442022[1] = iParam1;
	Global_2442022[2] = iParam2;
	Global_2442022[3] = 0;
	Global_2442022[4] = 0;
	if (Global_2442022[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[0]);
			Global_2442028[0 /*16*/] = { func_267(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_111(iParam3, &(Global_2442028[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15);
		}
	}
	if (Global_2442022[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[1]);
			Global_2442028[1 /*16*/] = { func_267(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_111(iParam4, &(Global_2442028[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16);
		}
	}
	if (Global_2442022[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[2]);
			Global_2442028[2 /*16*/] = { func_267(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_111(iParam5, &(Global_2442028[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17);
		}
	}
	if (bParam11)
	{
		func_111(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0xA34E7C2A5118D638() != func_81())
			{
				if (func_130(unk_0xA34E7C2A5118D638()) == 0)
				{
					func_111(iParam7, unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_111(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_111(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0);
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
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0);
	*iParam9 = 0;
	func_110();
}

void func_273(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_269(0) == 0)
	{
		return;
	}
	func_268();
	iVar1 = 0;
	if (((Global_2442022[0] != iParam0 || Global_2442022[1] != iParam1) || Global_2442022[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2442022[0] = iParam0;
	Global_2442022[1] = iParam1;
	Global_2442022[2] = iParam2;
	Global_2442022[3] = 0;
	Global_2442022[4] = 0;
	if (Global_2442022[0] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[0]);
			Global_2442028[0 /*16*/] = { func_267(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_264(-1, &(Global_2442028[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16);
		}
	}
	if (Global_2442022[1] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[1]);
			Global_2442028[1 /*16*/] = { func_267(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_264(-1, &(Global_2442028[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17);
		}
	}
	if (Global_2442022[2] != func_81())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[2]);
			Global_2442028[2 /*16*/] = { func_267(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_264(-1, &(Global_2442028[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18);
		}
	}
	if (bParam12)
	{
		func_264(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xA34E7C2A5118D638() != func_81())
			{
				if (func_130(unk_0xA34E7C2A5118D638()) == 0)
				{
					func_264(-1, unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_130(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_264(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_130(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_264(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
	func_111(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0);
	*iParam10 = 0;
	func_110();
}

char* func_274()
{
	return "HUD_COUNTDOWN";
	switch (func_276(unk_0xA34E7C2A5118D638()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_275())
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

int func_275()
{
	if (func_276(unk_0xA34E7C2A5118D638()) == 133)
	{
		return Global_2458121.f_4635;
	}
	return -1;
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/];
	}
	return -1;
}

void func_277(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6CE7EDC8B5C46819())
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_2458121.f_4553)))
			{
				unk_0xEAB6899170047615(&(Global_2458121.f_4553));
			}
			unk_0x384EC102F362C893(1);
			unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
			unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
			unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
			if (Global_2458121.f_4561 > -1)
			{
				unk_0x279EB90079F76860(Global_2458121.f_4561);
				Global_2458121.f_4561 = -1;
			}
			Global_2458121.f_4551 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 4))
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 2))
				{
					if (unk_0x5BA0531C8F1DEF29())
					{
						if ((!unk_0xF8D041B05C3D1FD4(unk_0xC067EFDA9FF8398B(unk_0x50421F238A334931()), "OFF") && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && !unk_0xB8A06E7E729EED0A(&(Global_2458121.f_4553)))
						{
							StringCopy(&(Global_2458121.f_4553), "", 32);
							unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
							unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
							unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
							unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
							unk_0x384EC102F362C893(1);
							unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
						}
					}
				}
				else if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0xDCC86F723E82125E(Global_2458121.f_4551, 5))
				{
					unk_0xEAB6899170047615("OFF");
				}
			}
			else if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x233432976E597324("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x233432976E597324("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x233432976E597324("FM_COUNTDOWN_30S");
				}
				unk_0x925AE2E6F6E41362("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 1);
			}
			else if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x326F40CE5DA0E863() != 0)
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && !unk_0x66D013F030E3FDD1())
						{
							StringCopy(&(Global_2458121.f_4553), unk_0x8AD9ED202F7B5553(), 32);
							unk_0xEAB6899170047615("OFF");
						}
						unk_0x384EC102F362C893(1);
						unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 3))
				{
					Global_2458121.f_4561 = unk_0x83E9D86E63672B9A();
					unk_0xC4EE38A4CFF7544C(Global_2458121.f_4561, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
			{
				Global_2458121.f_4551 = 0;
				Global_2458121.f_4561 = -1;
				unk_0xE685497EA92333FF("FM_COUNTDOWN_30S_KILL");
				unk_0x384EC102F362C893(0);
				unk_0x233432976E597324("FM_PRE_COUNTDOWN_30S");
				unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
				unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
				unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 0);
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || unk_0xDCC86F723E82125E(Global_2458121.f_4551, 2))
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 5);
				}
				else
				{
					unk_0x77621132305B133B(&(Global_2458121.f_4551), 5);
					unk_0x77621132305B133B(&(Global_2458121.f_4551), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			Global_2458121.f_4551 = 0;
			Global_2458121.f_4561 = -1;
			unk_0xE685497EA92333FF("FM_COUNTDOWN_30S_KILL");
			unk_0x384EC102F362C893(0);
			unk_0x233432976E597324("FM_PRE_COUNTDOWN_30S");
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
			unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
			unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 0);
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 5);
			}
			else
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4551), 2);
				unk_0x77621132305B133B(&(Global_2458121.f_4551), 5);
			}
		}
	}
}

var func_278()
{
	if (unk_0x95CCECA3948CFE7B(func_279()))
	{
		return func_279();
	}
	return func_76();
}

var func_279()
{
	return Global_2359301.f_3;
}

int func_280()
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

void func_281()
{
	int iVar0;
	struct<47> Var1;
	int iVar48;
	var uVar49;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_46 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		Local_730.f_527[iVar0 /*47*/] = { Var1 };
		Local_730.f_527[iVar0 /*47*/].f_1 = func_81();
		if (Local_642.f_4[iVar0] > -1)
		{
			uVar49 = unk_0xD9BFAEBB04416B09(Local_642.f_4[iVar0]);
			if (unk_0x784B3253F40F728C(uVar49))
			{
				iVar48 = unk_0x8F765930684A893F(iVar49);
				if (!func_14(iVar48, 0))
				{
					Local_730.f_527[iVar0 /*47*/] = Local_642.f_4[iVar0];
					Local_730.f_527[iVar0 /*47*/].f_1 = iVar48;
					Local_730.f_527[iVar0 /*47*/].f_9 = Local_2762[Local_642.f_4[iVar0] /*11*/].f_4;
					Local_730.f_527[iVar0 /*47*/].f_30 = -1;
					Local_730.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_282()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 19);
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_642.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2762[iVar0 /*11*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_284()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_239(&iVar1, &fVar2, iLocal_335, 1);
	switch (Local_642.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_286(sVar0, fVar2 >= 70f);
			if (unk_0xB5F5536784683C33(sVar0))
			{
				fVar2 = func_285(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xB5DF1DC3EA53A4FC(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x15F17AFC317F87D8();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_286(sVar0, bVar3);
			if (unk_0xB5F5536784683C33(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_285(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_285(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xB5DF1DC3EA53A4FC(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_340 != iLocal_335)
			{
				if (iLocal_335 > 0)
				{
					unk_0xC4EE38A4CFF7544C(iLocal_342, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x19EF487B6B6C1F0B(iLocal_342, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xC4EE38A4CFF7544C(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_340 = iLocal_335;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xDCC86F723E82125E(iLocal_333, 3))
		{
			unk_0xC4EE38A4CFF7544C(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0x59A0729D503ED758(&iLocal_333, 3);
		}
	}
	else if (unk_0xDCC86F723E82125E(iLocal_333, 3))
	{
		unk_0xC4EE38A4CFF7544C(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0x77621132305B133B(&iLocal_333, 3);
	}
}

float func_285(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_286(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB5F5536784683C33(sParam0))
		{
			unk_0x925AE2E6F6E41362(sParam0);
		}
	}
	else if (unk_0xB5F5536784683C33(sParam0))
	{
		unk_0xDB9D78E5137EE7AD(sParam0);
	}
}

void func_287()
{
	int iVar0;
	
	if ((!func_130(unk_0xA34E7C2A5118D638()) && !func_14(unk_0xA34E7C2A5118D638(), 0)) && func_12(unk_0xA34E7C2A5118D638(), 1, 1))
	{
		iVar0 = func_305();
		if (iVar0 != Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4)
		{
			if (func_21(iVar0, iLocal_332) || func_304(iVar0, iLocal_332))
			{
				if (!func_303() || func_1(&uLocal_321, 1000, 0))
				{
					func_27(&uLocal_321, 0, 0);
					iLocal_332 = iVar0;
					Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4 = iVar0;
					func_290();
					if (iLocal_331 == 0)
					{
						iLocal_331 = unk_0x2AA13A84EE2D3B24();
					}
					if (Local_3115.f_11 == 0)
					{
						Local_3115.f_11 = unk_0x20F8506526D25CE0();
					}
				}
			}
		}
		iLocal_335 = func_288();
	}
}

int func_288()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_642.f_3)
	{
		case 0:
			fVar1 = unk_0x36E675227860DA84();
			break;
		
		case 1:
			fVar1 = unk_0x4329743F06BAB753();
			break;
		
		case 2:
			fVar1 = unk_0x15F17AFC317F87D8();
			break;
		
		case 3:
			fVar1 = unk_0x2C1FBB0186BBE9C4();
			break;
		
		case 4:
			fVar1 = unk_0x428A215EEF7FC8B7();
			break;
		
		case 5:
			fVar1 = unk_0xBE26D67824B020C8();
			break;
		
		case 8:
			iVar0 = unk_0x6BCCB375CC416C58();
			break;
		
		case 9:
			fVar1 = unk_0x4EE3F6431CBE1BA8();
			break;
		
		case 11:
			fVar1 = unk_0x50A298ED423BBA94();
			break;
		
		case 12:
			fVar1 = unk_0x50A298ED423BBA94();
			break;
		
		case 13:
			fVar1 = unk_0x03388BD113343F72();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0xA1836B70A59643DD(iVar0);
	func_289(&iVar2);
	if (iVar2 == iLocal_334)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_333, 1))
			{
				func_27(&uLocal_323, 0, 0);
				Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4.f_1 = func_411(&uLocal_323, 0, 0);
				unk_0x59A0729D503ED758(&iLocal_333, 1);
			}
			else if ((func_411(&uLocal_323, 0, 0) % 1000) == 0)
			{
				Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4.f_1 = func_411(&uLocal_323, 0, 0);
			}
		}
	}
	else
	{
		unk_0x77621132305B133B(&iLocal_333, 1);
	}
	if ((func_21(iLocal_334, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_325, 2000, 0))
	{
		iVar2 = iLocal_334;
		unk_0x59A0729D503ED758(&iLocal_333, 2);
	}
	else
	{
		iLocal_334 = iVar2;
		func_44(&uLocal_325);
		unk_0x77621132305B133B(&iLocal_333, 2);
	}
	return iVar2;
}

void func_289(int iParam0)
{
	switch (Local_642.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if ((((unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288()) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288())) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288())) || unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288())) || unk_0x317B32CC600C880A(unk_0xC8B93D94F8954288()))
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

void func_290()
{
	if (!unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1, 2))
	{
		unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_1), 2);
		func_291(1);
	}
}

void func_291(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_133())
		{
			func_296(0);
			func_295();
		}
		if (func_294(0))
		{
			uVar0 = func_175(2453, -1, 0);
			unk_0x77621132305B133B(&uVar0, 0);
			func_295();
		}
		if (func_294(func_293(func_276(unk_0xA34E7C2A5118D638()))))
		{
			uVar0 = func_175(2453, -1, 0);
			unk_0x77621132305B133B(&uVar0, func_293(func_276(unk_0xA34E7C2A5118D638())));
			func_295();
		}
		if (func_292())
		{
			func_295();
		}
		if (func_276(unk_0xA34E7C2A5118D638()) > -1)
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 7);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 7);
	}
}

int func_292()
{
	if (Global_2426867.f_615.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)
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
	return 19;
}

bool func_294(int iParam0)
{
	var uVar0;
	
	uVar0 = func_175(2453, -1, 0);
	return unk_0xDCC86F723E82125E(uVar0, iParam0);
}

void func_295()
{
	if (func_292())
	{
		Global_2426867.f_615.f_16 = 1;
	}
}

void func_296(int iParam0)
{
	if (func_133())
	{
		if (iParam0 == 1)
		{
			if (Global_2458121.f_4247 == -1)
			{
				Global_2458121.f_4247 = 60000;
			}
			func_27(&(Global_2458121.f_4245), 0, 0);
			if (Global_2458121.f_4250 == -1)
			{
				Global_2458121.f_4250 = 10000;
			}
			func_27(&(Global_2458121.f_4248), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_302();
		}
		if ((!unk_0xDC9A5ADFE0C41DD2() && !func_301()) && !func_297(unk_0xA34E7C2A5118D638()))
		{
			Global_976340 = 0;
		}
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_7 = 0;
	}
}

int func_297(int iParam0)
{
	if (func_298(iParam0, 1))
	{
		if (Global_1587175[iParam0 /*410*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_299(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_299(int iParam0)
{
	return func_300(iParam0);
}

bool func_300(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

bool func_301()
{
	return Global_2433098.f_713;
}

void func_302()
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!func_133())
		{
			if (func_12(unk_0xA34E7C2A5118D638(), 1, 0))
			{
				unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 342, 0);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 122, 0);
			}
			unk_0x7C53F209D14EAB83(unk_0xA34E7C2A5118D638(), 1f);
			unk_0x00AF6DC1F221C0A3(0);
			unk_0x3FAC4C670EE704C9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xB2D9791D33CC8156(0);
			}
		}
		else
		{
			if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 0);
				unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 342, 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 122, 1);
				unk_0x7C53F209D14EAB83(unk_0xA34E7C2A5118D638(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xB2D9791D33CC8156(1);
				}
			}
			unk_0x00AF6DC1F221C0A3(1);
			unk_0x3FAC4C670EE704C9(0);
		}
	}
}

int func_303()
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

int func_304(int iParam0, int iParam1)
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

int func_305()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_320())
	{
		if (Local_642.f_3 == 14)
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && func_319(unk_0xC8B93D94F8954288(), 0) == -1)
			{
				iVar2 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
				if ((!func_318(&iVar2, 0) || unk_0x6D5BB810CC209E15(iVar2) != joaat("dodo")) && unk_0x25011B7D08ACD328(iVar2))
				{
					func_311(0, 1, 0);
					if (func_310())
					{
						iVar3 = func_309();
						if (iVar3 >= 0)
						{
							if (!unk_0xDCC86F723E82125E(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_7[func_308(iVar3)], func_307(iVar3)))
							{
								iLocal_336++;
								unk_0x59A0729D503ED758(&(Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_7[func_308(iVar3)]), func_307(iVar3));
							}
						}
					}
					iVar0 = iLocal_336;
				}
			}
		}
		else
		{
			iVar0 = func_306();
		}
	}
	else
	{
		unk_0x839E891FD773A550(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0xA1836B70A59643DD(iVar0);
}

int func_306()
{
	switch (Local_642.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return func_175(137, -1, 0);
		
		default:
	}
	return -1;
}

int func_307(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_308(iParam0) * 31);
}

int func_308(int iParam0)
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

int func_309()
{
	return iLocal_98;
}

int func_310()
{
	if (iLocal_105 == 1)
	{
		iLocal_105 = 0;
		return 1;
	}
	return 0;
}

void func_311(int iParam0, bool bParam1, int iParam2)
{
	func_313(iParam0, iParam2);
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
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Local_109[iLocal_98 /*3*/]) < fLocal_305)
				{
					if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
						{
							if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0))
							{
								bLocal_100 = true;
								iLocal_99 = 1;
							}
							if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
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
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()) && !unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
				{
					func_312();
				}
				else if (!unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
				{
					func_312();
				}
				else if (!unk_0x25011B7D08ACD328(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) && !bParam1)
				{
					func_312();
				}
				if (bLocal_100)
				{
					if (iLocal_104)
					{
						if (iLocal_103)
						{
							if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
							{
								func_312();
								iLocal_105 = 1;
							}
						}
						else if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							iLocal_103 = 1;
						}
						else if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							func_312();
						}
					}
					else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						func_312();
					}
				}
				else if (bLocal_101)
				{
					if (iLocal_104)
					{
						if (iLocal_102)
						{
							if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
							{
								func_312();
								iLocal_105 = 1;
							}
						}
						else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							iLocal_102 = 1;
						}
						else if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
						{
							func_312();
						}
					}
					else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_306, Local_309, fLocal_318, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Local_312, Local_315, fLocal_318, 0, 1, 0))
					{
						func_312();
					}
				}
			}
			break;
	}
}

void func_312()
{
	bLocal_100 = false;
	bLocal_101 = false;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_99 = 0;
}

void func_313(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_106 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_317(iVar0)) && (uParam1 || !func_316(iVar0)))
		{
			if (func_315(Local_106, Local_109[iVar0 /*3*/], 100f, 0))
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
	func_314(iLocal_98);
}

void func_314(int iParam0)
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
			fLocal_318 = 16f;
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

int func_315(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_316(int iParam0)
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

int func_317(int iParam0)
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

int func_318(var uParam0, int iParam1)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(*uParam0) || iParam1)
		{
			if (unk_0xEE473B4B88D6F842(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x277ECDA23D8CCEB4(iParam0, iParam1))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam0, iParam1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iVar0))
				{
					iVar1 = unk_0x66B735F5B005FAD7(unk_0x6D5BB810CC209E15(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x74CAAD9E721B315D(iVar0, iVar3))
						{
							if (unk_0xC0ADAF0814175B68(iVar0, iVar3) == iParam0)
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

int func_320()
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

int func_321(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_336() < 10)
	{
		iVar0 = func_335();
		func_322(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_322(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_323(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_323(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_332(unk_0xA34E7C2A5118D638()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_331(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_326(Var0))
		{
			Global_2404919.f_39.f_64 = func_325(unk_0xA34E7C2A5118D638());
			func_324(Var0, iParam8);
		}
	}
}

void func_324(struct<12> Param0, int iParam12)
{
	Global_2404919.f_347[iParam12 /*12*/] = { Param0 };
	Global_2404919.f_347[iParam12 /*12*/].f_9 = 1;
}

int func_325(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2417071[iParam0 /*306*/].f_1;
	}
	return 0;
}

int func_326(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404919.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_327(Global_2404919.f_39[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_327(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_330(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_328(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_330(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_328(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_328(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_329(Param0, Param3, Var0, Var3);
}

int func_329(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_330(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
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

int func_332(int iParam0)
{
	if ((func_334(iParam0, 1) || func_333(iParam0)) || func_256(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/] != -1;
	}
	return 0;
}

bool func_334(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_325(iParam0) != 0;
	}
	return func_298(iParam0, bParam1);
}

int func_335()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_336()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_337(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	unk_0xCE59E3E42586D52D(sParam1);
	unk_0xCE59E3E42586D52D(sParam2);
	return unk_0x699790DC9A5E5D9A(0);
}

char* func_338(int iParam0)
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

char* func_339(int iParam0)
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

char* func_340(int iParam0)
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

void func_341()
{
	if (!func_123())
	{
		return;
	}
	if (!unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == Global_1312577.f_7)
	{
		return;
	}
	func_119();
}

void func_342(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_317(iVar0) && !func_316(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_109[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_343()
{
	if (!func_320())
	{
		if (Local_642.f_3 == 14)
		{
			func_346();
		}
	}
	else if ((!unk_0xDCC86F723E82125E(Global_1573879.f_1, 4) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 5)) && !func_345(unk_0xA34E7C2A5118D638()))
	{
		func_344();
	}
}

void func_344()
{
	switch (Local_642.f_3)
	{
		case 0:
			unk_0x0D5B2C1EE1622E45(8, 2);
			break;
		
		case 1:
			unk_0x0D5B2C1EE1622E45(13, 2);
			break;
		
		case 2:
			unk_0x0D5B2C1EE1622E45(4, 2);
			break;
		
		case 4:
			unk_0x0D5B2C1EE1622E45(1, 2);
			break;
		
		case 3:
			unk_0x0D5B2C1EE1622E45(2, 2);
			break;
		
		case 5:
			unk_0x0D5B2C1EE1622E45(3, 2);
			break;
		
		case 6:
			unk_0x0D5B2C1EE1622E45(11, 3);
			break;
		
		case 7:
			unk_0x0D5B2C1EE1622E45(14, 1);
			break;
		
		case 8:
			unk_0x0D5B2C1EE1622E45(29, 2);
			break;
		
		case 9:
			unk_0x0D5B2C1EE1622E45(12, 2);
			break;
		
		case 10:
			unk_0x0D5B2C1EE1622E45(10, 2);
			break;
		
		case 11:
			unk_0x0D5B2C1EE1622E45(18, 2);
			break;
		
		case 12:
			unk_0x0D5B2C1EE1622E45(20, 2);
			break;
		
		case 13:
			unk_0x0D5B2C1EE1622E45(27, 2);
			break;
		
		case 15:
			unk_0x0D5B2C1EE1622E45(26, 1);
			break;
		
		case 16:
			unk_0x0D5B2C1EE1622E45(25, 1);
			break;
		
		case 17:
			unk_0x0D5B2C1EE1622E45(22, 1);
			break;
		
		case 18:
			unk_0x0D5B2C1EE1622E45(24, 1);
			break;
	}
	unk_0x59A0729D503ED758(&iLocal_333, 8);
}

bool func_345(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_346()
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

void func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
	{
		unk_0x77621132305B133B(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
	}
}

void func_348(var uParam0, int iParam1)
{
	if (func_276(unk_0xA34E7C2A5118D638()) == 133 && iParam1)
	{
		Global_2458121.f_4635 = uParam0;
	}
	else
	{
		Global_2458121.f_4635 = -1;
	}
}

void func_349(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
	}
	Global_2458121.f_4561 = -1;
	bVar0 = (func_256(unk_0xA34E7C2A5118D638(), 0) && func_255(unk_0xA34E7C2A5118D638()));
	if (bParam6)
	{
		func_347(21, 1);
	}
	else
	{
		func_364(iParam0, -1);
		if (func_8(unk_0xA34E7C2A5118D638()))
		{
			Global_1573879.f_3 = iParam0;
		}
		else
		{
			func_363(iParam0);
		}
		Global_1573879.f_4 = -1;
		if (func_8(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 5);
		}
		if ((func_133() && !func_132()) || func_131(unk_0xA34E7C2A5118D638(), 21))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 4);
		}
		unk_0x77621132305B133B(&(Global_1573879.f_1), 17);
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 20);
		if (func_362(iParam0))
		{
			func_361();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_358(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xFD62177C7242216E(fParam2);
			if (iParam0 == 146)
			{
				unk_0x60B57BC5E51D2074(0);
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
				unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
			}
		}
		if (func_356(iParam0))
		{
			unk_0x60B57BC5E51D2074(0);
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
			unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 8);
		}
		if (bParam3)
		{
			func_355(1);
			if (func_218(0))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
			}
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
		}
		if (bParam4)
		{
			func_353(1);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
		}
		if (bParam5)
		{
			func_352();
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_350(iParam0))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 21);
			}
		}
	}
	Global_2457030 = 1;
}

int func_350(int iParam0)
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
	if (func_351())
	{
		return 1;
	}
	return 0;
}

int func_351()
{
	switch (func_275())
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

void func_352()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4552), 0);
}

void func_353(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91158.f_8 = 1;
	}
	else
	{
		Global_91158.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_354(iVar0);
		iVar0++;
	}
}

void func_354(int iParam0)
{
	Global_91158.f_156[iParam0] = 1;
	Global_91158.f_155 = 1;
}

void func_355(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_357(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

void func_358(float fParam0)
{
	float fVar0;
	
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_359())
	{
		return;
	}
	fVar0 = (Global_2458121.f_4643 - fParam0);
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && unk_0xA3C5926D6E5619AE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2458121.f_4643 = fParam0;
	Global_2458121.f_4644 = unk_0x46CF50E0E5A24635();
}

int func_359()
{
	switch (func_360())
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

int func_360()
{
	return Global_25115;
}

void func_361()
{
	Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_198 = 0;
	unk_0x77621132305B133B(&(Global_2458121.f_4413), 1);
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_363(int iParam0)
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/] = iParam0;
}

void func_364(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_294(0) || func_294(func_293(iVar0)))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 2);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 2);
		}
	}
}

int func_365()
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

void func_366()
{
	Global_1719525 = 1;
	if (!unk_0xDCC86F723E82125E(Global_2464686, 0))
	{
		unk_0x59A0729D503ED758(&Global_2464686, 0);
		unk_0x59A0729D503ED758(&Global_1719526, 0);
	}
	if (!unk_0xDCC86F723E82125E(Global_2464686, 1))
	{
		unk_0x59A0729D503ED758(&Global_2464686, 1);
		unk_0x59A0729D503ED758(&Global_1719526, 1);
	}
	if (!unk_0xDCC86F723E82125E(Global_2464686, 5))
	{
		unk_0x59A0729D503ED758(&Global_2464686, 5);
		unk_0x59A0729D503ED758(&Global_1719526, 5);
	}
	if (unk_0x42277337DA18A497(-355737150))
	{
		unk_0x130F0C5AE7B52B7A(-355737150, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-580979506))
	{
		unk_0x130F0C5AE7B52B7A(-580979506, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-1426452475))
	{
		unk_0x130F0C5AE7B52B7A(-1426452475, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(745417724))
	{
		unk_0x130F0C5AE7B52B7A(745417724, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-1305304906))
	{
		unk_0x130F0C5AE7B52B7A(-1305304906, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-1543175077))
	{
		unk_0x130F0C5AE7B52B7A(-1543175077, 0, 0, 0);
	}
	if (unk_0x42277337DA18A497(-811770997))
	{
		unk_0x130F0C5AE7B52B7A(-811770997, 0, 0, 0);
	}
}

int func_367()
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

void func_368()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_642.f_3))
	{
		if (Local_642.f_3 == 1 || Local_642.f_3 == 6)
		{
			iVar0 = func_386(unk_0xA34E7C2A5118D638(), 1);
			iVar1 = func_168(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0xB93A114562263226(unk_0xC8B93D94F8954288()))
				{
					unk_0x640290651A86938B(unk_0xC8B93D94F8954288(), joaat("gadget_parachute"), 1, 0, 0);
					func_369(1);
				}
			}
			else
			{
				unk_0xDD68D667C935E884(unk_0xA34E7C2A5118D638(), 1);
			}
		}
	}
}

void func_369(bool bParam0)
{
	int iVar0;
	
	if (unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 5) != 0)
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
		unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_175(575, -1, 0));
		if (func_385())
		{
			unk_0xEACA2903193F00BA(unk_0xA34E7C2A5118D638(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_384())
		{
			unk_0xEACA2903193F00BA(unk_0xA34E7C2A5118D638(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_381(3610, -1, -1))
		{
		}
		iVar0 = func_175(2029, -1, 0);
		unk_0xB097B46113B38749(unk_0xA34E7C2A5118D638(), func_380(unk_0xCF4C00513A86E840(unk_0xA34E7C2A5118D638()), iVar0));
		if (func_215(0))
		{
			unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_175(575, -1, 0));
		}
		else
		{
			unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_379(Global_2464911));
		}
		func_378(unk_0xA34E7C2A5118D638(), iVar0);
		unk_0x2E9F709E6BB1D74A(unk_0xA34E7C2A5118D638(), 5, func_374(unk_0xC8B93D94F8954288(), iVar0), func_373(unk_0xC8B93D94F8954288(), iVar0), 0);
		func_372(func_175(2029, -1, 0), 1);
		Global_2458121.f_273 = 1;
		func_370(unk_0xA34E7C2A5118D638(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_370(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (iParam2 == -1)
		{
			iParam2 = func_175(2029, -1, 0);
		}
		unk_0x2E9F709E6BB1D74A(iParam0, 5, func_374(unk_0xCF4C00513A86E840(iParam0), iParam2), func_373(unk_0xCF4C00513A86E840(iParam0), iParam2), 0);
		func_378(iParam0, iParam2);
		unk_0xB097B46113B38749(iParam0, func_380(unk_0xCF4C00513A86E840(iParam0), iParam2));
		unk_0x8C245572EDB27776(unk_0xCF4C00513A86E840(iParam0), 5, func_374(unk_0xCF4C00513A86E840(iParam0), iParam2), func_373(unk_0xCF4C00513A86E840(iParam0), iParam2), func_380(unk_0xCF4C00513A86E840(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_175(575, -1, 0);
		}
		if (func_215(1) && func_371(unk_0xA34E7C2A5118D638()))
		{
			unk_0x9B6C7136336F942B(unk_0xA34E7C2A5118D638(), func_379(Global_2464911));
		}
		else
		{
			unk_0x9B6C7136336F942B(iParam0, iParam1);
		}
		if (func_385())
		{
			unk_0xEACA2903193F00BA(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_384())
		{
			unk_0xEACA2903193F00BA(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x1F64302AA4F597A7(unk_0xCF4C00513A86E840(iParam0), 177, 1);
	}
}

bool func_371(int iParam0)
{
	return func_254(iParam0, 10);
}

void func_372(int iParam0, int iParam1)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		func_166(2029, iParam0, -1, 1);
		unk_0x2E9F709E6BB1D74A(unk_0xA34E7C2A5118D638(), 5, func_374(unk_0xC8B93D94F8954288(), iParam0), func_373(unk_0xC8B93D94F8954288(), iParam0), 0);
		func_378(unk_0xA34E7C2A5118D638(), iParam0);
		unk_0xB097B46113B38749(unk_0xA34E7C2A5118D638(), func_380(unk_0xC8B93D94F8954288(), iParam0));
		if ((iParam1 && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) && unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 5) != 0)
		{
			func_370(unk_0xA34E7C2A5118D638(), -1, -1);
		}
	}
}

int func_373(var uParam0, int iParam1)
{
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

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x3A59BCC40A12FD28(uParam0, 11);
	if (unk_0x3A59BCC40A12FD28(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6D5BB810CC209E15(iParam0);
	uVar3 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
	if (unk_0xED5E7EEE0DB220EF(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
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
		uVar5 = unk_0x4D4C7C54C2E89DDF(iParam0, 11, iVar0, unk_0x268F3DC177BF5D38(iParam0, 11));
		if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("DRESS"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_377(uVar5, 0);
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
						iVar0 = func_376(uVar5);
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
						iVar0 = func_376(uVar5);
						break;
					}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_375(uVar5, 0);
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
					iVar0 = func_376(uVar5);
					break;
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_7"), 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_8"), 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("JAN_DRAW_2"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0xED5E7EEE0DB220EF(uVar5, -1086258388, 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_0"), 0))
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
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_2"), 0))
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
				return (4 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					if (iParam1 > 51)
					{
						return 51;
					}
					else if (iParam1 > 46)
					{
						return 51;
					}
					else if (iParam1 > 26)
					{
						return 50;
					}
					else if (iParam1 > 0)
					{
						return 49;
					}
					else
					{
						return 48;
					}
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xED5E7EEE0DB220EF(uVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0xED5E7EEE0DB220EF(uVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xED5E7EEE0DB220EF(uVar5, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(uVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_376(uVar5);
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

int func_375(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_376(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_377(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

void func_378(int iParam0, int iParam1)
{
	if (func_385())
	{
		if (iParam1 > 46)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x06470EB9AAE2FC33(iParam0);
		}
	}
	else if (func_384())
	{
		if (iParam1 > 0)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x06470EB9AAE2FC33(iParam0);
		}
	}
}

int func_379(var uParam0)
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

int func_380(var uParam0, int iParam1)
{
	return 0;
}

int func_381(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_383(iParam0, iParam1);
	uVar2 = func_382(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F9C325BC5873651(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_382(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
	}
	return iVar0;
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		iVar0 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

bool func_384()
{
	return unk_0x9F37711843A20114(joaat("mppilot"));
}

bool func_385()
{
	return unk_0x9F37711843A20114(joaat("mplts"));
}

int func_386(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_172(iParam0);
}

void func_387()
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
	
	if ((((!func_7(unk_0xA34E7C2A5118D638()) && !func_130(unk_0xA34E7C2A5118D638())) && !func_270()) && !func_395(unk_0xA34E7C2A5118D638(), 0)) && !func_394(unk_0xA34E7C2A5118D638()))
	{
		if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
			bVar11 = func_5(Local_642.f_3);
			bVar12 = unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0);
			bVar13 = func_392();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_642.f_67[iVar4 /*2*/].f_1;
				if (unk_0x691BFDC1728FD714(uVar14) && unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0) == unk_0xF8A3C382964380BC(uVar14))
						{
							func_291(1);
						}
					}
					unk_0x59A0729D503ED758(&uVar5, iVar4);
					if (bVar11 && func_38(Local_642.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(uVar14), 1) };
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
				unk_0x59A0729D503ED758(&uVar5, 31);
			}
			Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_6 = uVar5;
			if (func_5(Local_642.f_3))
			{
				if ((unk_0xB93A114562263226(unk_0xC8B93D94F8954288()) || (unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288()) && !unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_642.f_3, iVar7, &Var0, &uVar3))
						{
							func_391(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
							func_390(Var0, 1, 0);
							func_389(10, 0, 0);
							unk_0x59A0729D503ED758(&iLocal_333, 5);
						}
					}
				}
				else
				{
					func_388();
				}
			}
		}
	}
	else
	{
		func_388();
	}
}

void func_388()
{
	if (unk_0xDCC86F723E82125E(iLocal_333, 5))
	{
		func_138();
		func_136();
		unk_0x77621132305B133B(&iLocal_333, 5);
		func_135();
	}
}

void func_389(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409431 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x46CF50E0E5A24635();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_390(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

void func_391(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0xC2DCA35AE2EC9DC4(Global_2409446.f_6))
	{
		if (!Global_2409446.f_6 == unk_0x46CF50E0E5A24635())
		{
			return;
		}
	}
	else
	{
		Global_2409446.f_6 = unk_0x46CF50E0E5A24635();
	}
	Var0.f_6 = Global_2409446.f_6;
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
	if (func_332(unk_0xA34E7C2A5118D638()))
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
	Global_2409446 = { Var0 };
}

int func_392()
{
	if (((((func_393(unk_0xA34E7C2A5118D638()) || func_133()) || func_132()) || func_131(unk_0xA34E7C2A5118D638(), 21)) || func_8(unk_0xA34E7C2A5118D638())) || func_7(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 7);
	}
	return 0;
}

int func_394(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 14))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0, bool bParam1)
{
	if (Global_1587175[iParam0 /*410*/].f_247.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_396(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	struct<3> Var9;
	
	if (Local_642.f_3 == 14 && iParam1)
	{
		iVar0 = unk_0x935FA14EDA695A82();
		if (func_79(unk_0xA34E7C2A5118D638()))
		{
			uVar1 = func_278();
			iVar2 = unk_0x8ACC9D9AC6076DCB(uVar1);
			if (unk_0xDF73DA5E2287C499(iVar2))
			{
				iVar3 = unk_0xB916365AA117A9F4(iVar2);
				if (unk_0x784B3253F40F728C(iVar3))
				{
					iVar0 = iVar3;
				}
			}
		}
		if (iVar0 >= 0)
		{
			iVar4 = 0;
			while (iVar4 < 65)
			{
				if (!func_317(iVar4) && !func_316(iVar4))
				{
					if (!unk_0xDCC86F723E82125E(Local_2762[iVar0 /*11*/].f_7[func_308(iVar4)], func_307(iVar4)) && !bParam0)
					{
						Var5 = { Local_353[iVar4 /*3*/] };
						if (!unk_0x6B4865E08E90ACC5(uLocal_549[iVar4]))
						{
							if (!func_406(Var5, 0f, 0f, 0f, 0) && !func_406(Var5, 0f, 0f, -2000f, 0))
							{
								uLocal_549[iVar4] = unk_0xDF811B9EAB020A4D(Var5);
								unk_0xEB19FBC5156AAE3A(uLocal_549[iVar4], 9);
								unk_0x8755DAC584918BF9(uLocal_549[iVar4], "AMCH_BRIDGE");
								func_401(uLocal_549[iVar4], 25);
								func_399(&(uLocal_549[iVar4]), 12);
								unk_0xEBA460B665086587(uLocal_549[iVar4], 1);
							}
						}
						else if (unk_0x2BF05095F2389894())
						{
							unk_0x7DF168F8439ABF1A(uLocal_549[iVar4], 255);
						}
						else
						{
							func_401(uLocal_549[iVar4], 25);
						}
					}
					else if (unk_0x6B4865E08E90ACC5(uLocal_549[iVar4]))
					{
						unk_0x5356E82C1E5E0C44(&(uLocal_549[iVar4]));
						if (!bParam0)
						{
							unk_0xC4EE38A4CFF7544C(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
						}
					}
				}
				iVar4++;
			}
		}
	}
	if (func_41())
	{
		iVar8 = 0;
		while (iVar8 < 10)
		{
			if (((!bParam0 && unk_0x691BFDC1728FD714(Local_642.f_67[iVar8 /*2*/].f_1)) && unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(Local_642.f_67[iVar8 /*2*/].f_1), 0)) && unk_0x74CAAD9E721B315D(unk_0xF8A3C382964380BC(Local_642.f_67[iVar8 /*2*/].f_1), -1))
			{
				if (!unk_0x6B4865E08E90ACC5(uLocal_615[iVar8]))
				{
					uLocal_615[iVar8] = unk_0x361E437CE4AD5532(unk_0x6622BC2FDC6DBB0E(Local_642.f_67[iVar8 /*2*/].f_1));
					unk_0x31FDDAFCCFEFA478(uLocal_615[iVar8], func_398(iVar8));
					unk_0xEB19FBC5156AAE3A(uLocal_615[iVar8], 9);
					unk_0x8755DAC584918BF9(uLocal_615[iVar8], func_397(iVar8));
					func_399(&(uLocal_615[iVar8]), 9);
				}
				else if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					Var9 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
					if (unk_0x2A488C176D52CCA5(Var9, unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_642.f_67[iVar8 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0xEBA460B665086587(uLocal_615[iVar8], 1);
					}
					else
					{
						unk_0xEBA460B665086587(uLocal_615[iVar8], 0);
					}
				}
			}
			else if (unk_0x6B4865E08E90ACC5(uLocal_615[iVar8]))
			{
				unk_0x5356E82C1E5E0C44(&(uLocal_615[iVar8]));
			}
			iVar8++;
		}
	}
}

char* func_397(int iParam0)
{
	switch (Local_642.f_67[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return "AMCH_AC";
		
		case joaat("mammatus"):
		case joaat("stunt"):
		case joaat("besra"):
			return "AMCH_AC";
		
		case joaat("sanchez"):
		case joaat("pcj"):
			return "AMCH_BIKE";
		
		default:
	}
	return "";
}

int func_398(int iParam0)
{
	switch (Local_642.f_67[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
		case joaat("stunt"):
		case joaat("besra"):
			return 423;
		
		case joaat("sanchez"):
		case joaat("pcj"):
			return 348;
		
		default:
	}
	return -1;
}

void func_399(var uParam0, int iParam1)
{
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x32546F91F646B246(*uParam0, func_400(iParam1));
	}
}

int func_400(int iParam0)
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
	unk_0x7068E8DB78AD0A08(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_401(var uParam0, int iParam1)
{
	unk_0x7DF168F8439ABF1A(uParam0, func_402(uParam0, iParam1));
}

int func_402(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_405(Global_2426867))
	{
		fVar0 = func_404(uParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_403();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_403()
{
	if (func_334(Global_2426867, 1))
	{
		return 50;
	}
	return 0;
}

float func_404(var uParam0, float fParam1, float fParam2)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	uVar0 = Global_2426867;
	Var2 = { unk_0xEACB9E183BFE83FD(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(uVar0), 0) };
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

int func_405(int iParam0)
{
	if ((unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_69.f_2, 15) && !(unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_69.f_2, 6) && unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_69.f_2, 7))) || ((unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_69.f_2, 6) && !unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_69.f_2, 7)) && !unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_69.f_2, 15)))
	{
		return 1;
	}
	return 0;
}

bool func_406(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_407(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_269(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_184(sParam1))
	{
		sVar0 = sParam1;
	}
	func_111(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0);
}

char* func_408(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
	return "HUD_STARTING";
	if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_challenges"))
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
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_409(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_410(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6CE7EDC8B5C46819())
	{
		Global_2458121.f_4551 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
		{
			unk_0xC4EE38A4CFF7544C(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2458121.f_4551 = 0;
			unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 1);
		}
	}
}

int func_411(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0);
		}
		else
		{
			return unk_0x2F4EBE92EB266B70(unk_0x3BC33547A5F418E8(), *uParam0);
		}
	}
	return unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0);
}

void func_412(int iParam0)
{
	if (!unk_0xDA64C07A3B5D886D() && !unk_0xD5DFCA69ACAA20E3())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if (!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D())
					{
						if (func_5(Local_642.f_3))
						{
							if (Local_642.f_3 == 12)
							{
								func_250("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_250("AMCH_AIRAV", 30000);
							}
						}
						else
						{
							func_250("AMCH_BIKEAV", 30000);
						}
						func_249(1);
						unk_0x59A0729D503ED758(&iLocal_626, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if (!unk_0x2BF05095F2389894())
					{
						func_250("AMCH_BLOW", 30000);
						func_249(1);
						unk_0x59A0729D503ED758(&iLocal_626, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if (!unk_0x2BF05095F2389894() && !func_417(62))
					{
						switch (Local_642.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									if (unk_0xB93A114562263226(unk_0xC8B93D94F8954288()))
									{
										func_250("AMCH_ALTI", 30000);
										func_249(1);
										unk_0x59A0729D503ED758(&iLocal_626, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_NMIS", 30000);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_FRFALL", -1);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_PVPO1", -1);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_PVPO2", -1);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_WHEELIE", 30000);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_STOPPIE", 30000);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_LFALL", 30000);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_LPARA", 30000);
									func_249(1);
									unk_0x59A0729D503ED758(&iLocal_626, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if ((!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D()) && !func_417(62))
					{
						switch (Local_642.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									if (unk_0xB93A114562263226(unk_0xC8B93D94F8954288()))
									{
										if (func_1(&uLocal_327, 1000, 0))
										{
											func_250("AMCH_OCEAN", 30000);
											func_249(1);
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
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if (!unk_0x2BF05095F2389894() && !func_417(62))
					{
						switch (Local_642.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									if (unk_0xB93A114562263226(unk_0xC8B93D94F8954288()))
									{
										if (func_405(unk_0xA34E7C2A5118D638()) && !func_414(unk_0xA34E7C2A5118D638()))
										{
											func_250("AMCH_ALTIEXP", 30000);
											func_249(1);
											unk_0x59A0729D503ED758(&iLocal_626, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if ((!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D()) && !func_417(62))
					{
						if (func_1(&uLocal_327, 1000, 0))
						{
							func_250("AMCH_FLYLOW", 30000);
							func_249(1);
							func_44(&uLocal_327);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if (Local_642.f_3 == 7)
					{
						if (iLocal_627 == 0)
						{
							if ((!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D()) && !func_417(62))
							{
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_MVS1", 30000);
									func_249(1);
									iLocal_627 = 1;
								}
							}
						}
						else if ((!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D()) && !func_417(62))
						{
							if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
							{
								func_250("AMCH_MVS2", 30000);
								func_249(1);
								unk_0x59A0729D503ED758(&iLocal_626, iParam0);
							}
						}
					}
					if (Local_642.f_3 == 14)
					{
						if (iLocal_627 == 0)
						{
							if ((!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D()) && !func_417(62))
							{
								if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
								{
									func_250("AMCH_BRBL", 30000);
									func_249(1);
									iLocal_627 = 1;
								}
							}
						}
						else if ((!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D()) && !func_417(62))
						{
							if (func_12(unk_0xA34E7C2A5118D638(), 1, 1))
							{
								func_250("AMCH_BRBL2", 30000);
								func_249(1);
								unk_0x59A0729D503ED758(&iLocal_626, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xDCC86F723E82125E(iLocal_626, iParam0))
				{
					if (!unk_0x2BF05095F2389894() && !unk_0xB45DF29A98EEAD5D())
					{
						func_413("AMCH_WARN", func_339(Local_642.f_3), func_338(Local_642.f_3), 30000);
						func_249(0);
						Local_3115.f_8 = unk_0x20F8506526D25CE0();
						unk_0xC4EE38A4CFF7544C(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x59A0729D503ED758(&iLocal_626, iParam0);
					}
				}
				break;
			}
	}
}

void func_413(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0xCE59E3E42586D52D(sParam1);
	unk_0xCE59E3E42586D52D(sParam2);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam3);
}

bool func_414(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1338611.f_241.f_136[func_416(9) /*33*/][iParam0], func_415(9));
}

int func_415(int iParam0)
{
	return (iParam0 % 32);
}

int func_416(int iParam0)
{
	return (iParam0 / 32);
}

bool func_417(int iParam0)
{
	return Global_2426867.f_2138[0 /*72*/].f_1 == iParam0;
}

void func_418(int iParam0)
{
	Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_3 = iParam0;
}

void func_419(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 4);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 4);
	}
}

int func_420()
{
	if (func_131(unk_0xA34E7C2A5118D638(), 21))
	{
		return 0;
	}
	if (unk_0xE21B8C41C187AA64())
	{
		return 0;
	}
	if (unk_0x547823CBA92EEF50())
	{
		return 0;
	}
	if (func_297(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (func_437(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (func_428(unk_0xA34E7C2A5118D638()) == 3)
	{
		return 0;
	}
	if (func_427(func_244()))
	{
		return 0;
	}
	if (func_426())
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	if (unk_0xDC9A5ADFE0C41DD2())
	{
		return 0;
	}
	if (func_299(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!func_424())
	{
		return 0;
	}
	if (func_131(unk_0xA34E7C2A5118D638(), 0) || func_131(unk_0xA34E7C2A5118D638(), 3))
	{
		return 0;
	}
	if ((func_131(unk_0xA34E7C2A5118D638(), 12) || func_131(unk_0xA34E7C2A5118D638(), 14)) || func_131(unk_0xA34E7C2A5118D638(), 13))
	{
		return 0;
	}
	if (func_395(unk_0xA34E7C2A5118D638(), 0))
	{
		return 0;
	}
	if (func_423())
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (func_422(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	return 1;
}

int func_421()
{
	if (Global_2549001.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587175[iParam0 /*410*/].f_35;
}

bool func_423()
{
	return Global_91158.f_297 > 0;
}

int func_424()
{
	if (func_425() == 0)
	{
		return 1;
	}
	return 0;
}

int func_425()
{
	return Global_1312466.f_18;
}

bool func_426()
{
	return Global_1315911;
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 86:
		case 87:
			return 1;
		
		default:
	}
	return 0;
}

int func_428(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_333(iParam0) && !func_8(iParam0)) && !unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8));
	bVar2 = func_435(iParam0);
	uVar3 = func_133();
	uVar4 = func_429();
	if ((bVar1 && (func_393(iParam0) || func_357(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_255(iParam0)) && !func_253(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2458121.f_4648.f_18 != iVar0)
	{
		Global_2458121.f_4648.f_18 = iVar0;
	}
	return iVar0;
}

int func_429()
{
	if ((func_254(unk_0xA34E7C2A5118D638(), 21) || func_254(unk_0xA34E7C2A5118D638(), 22)) || func_433())
	{
		return 1;
	}
	if (func_431())
	{
		func_430(22);
		return 1;
	}
	return 0;
}

void func_430(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

int func_431()
{
	if (func_256(unk_0xA34E7C2A5118D638(), 0))
	{
		if ((func_133() && !func_132()) || func_131(unk_0xA34E7C2A5118D638(), 21))
		{
			if (!func_254(unk_0xA34E7C2A5118D638(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_432(27);
		}
	}
	return 0;
}

void func_432(int iParam0)
{
	unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

int func_433()
{
	return func_434(267, -1);
}

int func_434(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_171(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_435(int iParam0)
{
	return func_254(iParam0, 20);
}

bool func_436()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 5;
}

int func_437(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_257.f_4 != 0 || Global_2417071[iParam0 /*306*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_438()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

void func_439()
{
	func_440(&(Local_730.f_527), &Local_730, 23, &(Local_730.f_1), &(Local_730.f_110), Local_642.f_3, 0);
}

void func_440(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_537(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_535() || iParam2 == 24)
	{
		if (func_497(uParam1, iParam2, uParam3, Global_1573681, 0, func_538()))
		{
			func_496(1);
			if ((!func_495() && !func_494()) || unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
			{
				if (func_493())
				{
					func_492();
				}
				else
				{
					unk_0xF799955FDE53592F(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_491(1);
						Global_1573681 = 0;
						iVar54 = -1;
						if (Global_1573829 != 1)
						{
							func_490(uParam1);
							if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
							{
								unk_0x77621132305B133B(&(uParam3->f_33), 7);
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
								if (func_12(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((unk_0x139A9C4D61DFD52E(iVar35, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar35 /*306*/].f_232 != -1) || func_489(iVar35))
										{
											iVar44 = iVar35;
											if (func_72(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_486(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_484(unk_0xA34E7C2A5118D638(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_482())
							{
								if (func_12(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
								}
								else
								{
									iVar35 = func_81();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_481(iVar35) && func_477(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
								Var38 = { func_472(iVar35) };
								if (iVar35 == unk_0xA34E7C2A5118D638())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x74C5CB21CF9F1178(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_105(iVar35) };
								iVar37 = func_466(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
								}
								Global_1573681++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_482())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_464(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_238(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_463(iVar35, 0);
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
								if (func_462(iParam5))
								{
									func_461(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_461(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x59A0729D503ED758(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x20A20BF765914E37(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xDCC86F723E82125E(iVar49, iVar35))
							{
								iVar35 = unk_0x20A20BF765914E37(iVar52);
							}
							else
							{
								iVar35 = func_81();
							}
							if (func_481(iVar35))
							{
								if (func_12(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
									Var38 = { func_472(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_105(iVar35) };
									iVar37 = func_466(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
									}
									Global_1573681++;
									iVar51 = func_463(iVar35, 1);
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
									func_453(unk_0x74C5CB21CF9F1178(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							func_450(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_449();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 7))
						{
							func_448(uParam3, uParam1);
							func_447(uParam1, 0, 1);
							unk_0x59A0729D503ED758(&(uParam3->f_33), 7);
						}
						func_448(uParam3, uParam1);
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							unk_0x59A0729D503ED758(&(uParam3->f_33), 11);
						}
						if (func_443(uParam3))
						{
							Global_1573829 = 1;
						}
						func_441(uParam3);
						if (Global_1573829 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573829 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xF518F3C7FACD43B7(*uParam1))
					{
						unk_0x7F1F2564B5CE06AF(7);
						unk_0x06D856499865F31F(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F1F2564B5CE06AF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_449();
			func_491(0);
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 7);
			}
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 10))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xFA99CE7438CDE58B();
}

void func_441(var uParam0)
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_442(0);
	}
}

void func_442(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573829 != 2)
		{
			Global_1573829 = 2;
		}
	}
	else
	{
		switch (Global_1573829)
		{
			case 0:
				Global_1573829 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_443(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x20A20BF765914E37(uParam0->f_37);
	if (iVar15 != func_81() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_105(iVar15) };
		iVar1 = func_446(uParam0, uParam0->f_37);
		if (func_445(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_444(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_444(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_444(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_444(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x186143F44A45035A(&Var2))
						{
							iVar16 = 1;
							func_444(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_444(uParam0, iVar0, 0);
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

void func_444(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_445(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xB622E0FF38C89E7E(&uParam0, 13);
}

var func_446(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_447(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7C38F93AF52620B1(*uParam0, "COLLAPSE"))
	{
		unk_0x0139C89EE907A315(iParam1);
		unk_0xD013AC29829DDC02();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_448(var uParam0, var uParam1)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_33, 10))
	{
		unk_0x7C38F93AF52620B1(*uParam1, "SET_HIGHLIGHT");
		unk_0x65960B4E2ADC9F6D(uParam0->f_35);
		unk_0xD013AC29829DDC02();
		unk_0x59A0729D503ED758(&(uParam0->f_33), 10);
	}
}

void func_449()
{
	if (Global_1573829 != 0)
	{
		Global_1573829 = 0;
	}
}

void func_450(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar0);
		if (iVar2 != func_81())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_452(uParam0->f_38[iVar0 /*2*/], 0);
					func_451(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587175[iVar0 /*410*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_451(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "SET_ICON"))
		{
			unk_0x65960B4E2ADC9F6D(iParam1);
			unk_0x65960B4E2ADC9F6D(iParam2);
			if (iParam2 == 65)
			{
				unk_0x65960B4E2ADC9F6D(iParam3);
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

int func_452(int iParam0, bool bParam1)
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

void func_453(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_460() && iParam3 < func_459())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7C38F93AF52620B1(*uParam1, sVar1))
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_458("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(iParam9);
			}
			func_458(sParam0);
			unk_0x65960B4E2ADC9F6D(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_458("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(65);
			}
			unk_0x65960B4E2ADC9F6D(-1);
			func_458("");
			if (uParam2->f_108 == 6)
			{
				func_458("");
			}
			else
			{
				func_458(&sParam4);
			}
			unk_0x0139C89EE907A315(uParam2->f_36);
			unk_0x36D5E26AC42570A3(sParam8);
			unk_0x36D5E26AC42570A3(sParam8);
			if (func_457(uParam2))
			{
				func_456("DPAD_FRIEND");
			}
			else if (func_455(uParam2))
			{
				func_456("DPAD_FRIEND");
			}
			else if (func_454(uParam2))
			{
				func_456("DPAD_CREW");
			}
			else
			{
				func_456("");
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

bool func_454(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 6);
}

bool func_455(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 5);
}

void func_456(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

int func_457(var uParam0)
{
	if (func_455(uParam0) && func_454(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_458(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(sParam0);
}

int func_459()
{
	int iVar0;
	
	if (Global_1573683)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_460()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573683)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_461(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_460() && iParam2 < func_459())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			if (unk_0x7C38F93AF52620B1(*uParam0, sVar1))
			{
				unk_0x65960B4E2ADC9F6D(iParam2);
				if (unk_0xDCC86F723E82125E(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_458("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					func_456(sParam15);
				}
				else
				{
					func_458(&(uParam1->f_1));
				}
				unk_0x65960B4E2ADC9F6D(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_458("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(65);
				}
				if (iParam11 == 1)
				{
					unk_0x65960B4E2ADC9F6D(iVar0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(-1);
				}
				if (func_482())
				{
					func_458("");
				}
				else if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 5 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if ((uParam1->f_108 == 7 && !unk_0xB8A06E7E729EED0A(sParam15)) && !unk_0xB8A06E7E729EED0A(sParam16))
				{
					unk_0x276F16E002D00C0C("FM_AE_TWO_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0xCE59E3E42586D52D(sParam16);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 8 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
				{
					unk_0x276F16E002D00C0C("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x36E8D9048E194806(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6DC80A902A91958F(iParam9);
					}
					unk_0xCE59E3E42586D52D(&(uParam1->f_104));
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x276F16E002D00C0C("FM_AE_CASH");
					unk_0x5CDA8F588F01C361(iParam9, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
					{
						func_456(&(uParam1->f_104));
					}
					else
					{
						func_458("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam13, 6);
					unk_0x354E2E7AA52E941F();
				}
				else if (fParam12 != -1f)
				{
					unk_0x276F16E002D00C0C("NUMBER");
					unk_0x36E8D9048E194806(fParam12, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam9 != -1)
				{
					unk_0x65960B4E2ADC9F6D(iParam9);
				}
				else
				{
					func_458("");
				}
				if (uParam1->f_108 == 6)
				{
					func_458("");
				}
				else
				{
					func_458(&sParam3);
				}
				unk_0x0139C89EE907A315(uParam1->f_36);
				if (iParam11 == 1 || unk_0xB8A06E7E729EED0A(sParam7))
				{
					func_458("");
					func_458("");
				}
				else
				{
					unk_0x36D5E26AC42570A3(sParam7);
					unk_0x36D5E26AC42570A3(sParam7);
				}
				if (func_457(uParam1))
				{
					func_456("DPAD_FRIEND");
				}
				else if (func_455(uParam1))
				{
					func_456("DPAD_FRIEND");
				}
				else if (func_454(uParam1))
				{
					func_456("DPAD_CREW");
				}
				else
				{
					func_456("");
				}
				unk_0xD013AC29829DDC02();
			}
		}
	}
}

int func_462(int iParam0)
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

int func_463(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_333(iParam0)) && !func_435(iParam0))
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

int func_464(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_465(iParam3))
	{
		*fParam1 = (func_240(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_462(iParam3))
	{
		*fParam1 = (func_240(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_465(int iParam0)
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

int func_466(int iParam0)
{
	int iVar0;
	
	iVar0 = func_469(iParam0);
	if (iVar0 == -1)
	{
		func_467(iParam0, 1);
		return 0;
	}
	Global_1348409[iVar0 /*5*/].f_4 = 1;
	return Global_1348409[iVar0 /*5*/].f_2;
}

void func_467(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_469(iParam0) != -1)
	{
		return;
	}
	if (Global_1348572)
	{
		if (iParam0 == Global_1348572.f_1)
		{
			return;
		}
	}
	if (func_468(iParam0))
	{
		return;
	}
	if (Global_1348610 >= 32)
	{
		return;
	}
	Global_1348577[Global_1348610] = iParam0;
	Global_1348610++;
	if (bParam1)
	{
	}
}

int func_468(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348610)
	{
		if (Global_1348577[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348570 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348570)
	{
		if (Global_1348409[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x09EE7867D5A6100E(Global_1348409[iVar0 /*5*/].f_2) && unk_0x1A48755EDAA1BFA6(Global_1348409[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_470(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_470(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348570)
	{
		return;
	}
	if (unk_0x09EE7867D5A6100E(Global_1348409[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348409[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xC607197AF4E3A5B7(Global_1348409[iParam0 /*5*/].f_2), 64);
			unk_0xE0F13AAF9FB19B4B(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0AF52A8B5613FE81(Global_1348409[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348570)
	{
		Global_1348409[iVar32 /*5*/] = { Global_1348409[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_471(&(Global_1348409[iVar32 /*5*/]));
	Global_1348570 = (Global_1348570 - 1);
}

void func_471(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_81();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uParam0->f_3 = unk_0x2AA13A84EE2D3B24();
	}
}

struct<4> func_472(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2457104 = { func_105(iParam0) };
		if (unk_0xF7FE713C9F786F8C())
		{
			if (func_445(Global_2457104))
			{
				if (!unk_0x3084526A863D7966(&Global_2457104))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE028438B8B6A57B6(0))
		{
			return Var0;
		}
		if (func_476(&Global_2457104))
		{
			Global_2457034 = { func_474(iParam0) };
			func_473(&Global_2457034, &Var0);
		}
	}
	return Var0;
}

void func_473(var uParam0, var uParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, uParam1);
}

struct<35> func_474(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_475(iParam0))
	{
		return Global_1315945[unk_0xA34E7C2A5118D638() /*35*/];
	}
	Var0 = { func_105(iParam0) };
	unk_0x59E0C66A4FA07806(&Var13, 35, &Var0);
	return Var13;
}

int func_475(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return 1;
	}
	return 0;
}

int func_476(var uParam0)
{
	if (unk_0x5AA202D345A0E889())
	{
		if (unk_0x14F2268F2CD21E48() && unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_8(iParam0) || func_480(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_479(iParam0))
	{
		return 0;
	}
	if ((!func_478(iParam0) && Global_2417071[iParam0 /*306*/].f_232 == -1) && !func_489(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_478(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0xA34E7C2A5118D638(), 0, 1))
		{
			if (unk_0x139A9C4D61DFD52E(iParam0, unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_479(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_128, 22);
}

int func_480(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10) || unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9));
	}
	return 0;
}

int func_481(int iParam0)
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
		if (unk_0xDCC86F723E82125E(Global_1587175[iVar0 /*410*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_482()
{
	switch (func_276(unk_0xA34E7C2A5118D638()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_435(unk_0xA34E7C2A5118D638()))
	{
		switch (func_483(unk_0xA34E7C2A5118D638()))
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

int func_483(int iParam0)
{
	if (func_256(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_28;
	}
	return -1;
}

int func_484(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 && func_485(Global_1608811[iParam0 /*109*/].f_9.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1)
	{
		if (func_485(Global_1608811[iParam0 /*109*/].f_9.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_485(int iParam0)
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
	return 0;
}

void func_486(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			iVar1 = unk_0x20A20BF765914E37(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((unk_0x139A9C4D61DFD52E(iVar1, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar1 /*306*/].f_232 != -1) || func_489(iVar1))
				{
					if (func_487(iVar1, iParam1, 0))
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

int func_487(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_81())
	{
		if (!bParam2)
		{
			if (func_488(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608811[iParam0 /*109*/].f_9 != func_81())
		{
			return iParam1 == Global_1608811[iParam0 /*109*/].f_9;
		}
	}
	return 0;
}

int func_488(int iParam0, int iParam1)
{
	if (iParam1 != func_81())
	{
		if (iParam0 != func_81())
		{
			if (Global_1608811[iParam0 /*109*/].f_9 != func_81())
			{
				if (Global_1608811[iParam0 /*109*/].f_9 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_489(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_177 != 0;
}

void func_490(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x65960B4E2ADC9F6D(0);
		unk_0xD013AC29829DDC02();
	}
}

void func_491(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338608.f_2 == 0)
		{
			Global_1338608.f_2 = 1;
		}
	}
	else if (Global_1338608.f_2 == 1)
	{
		Global_1338608.f_2 = 0;
	}
}

void func_492()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
	{
		if (func_257())
		{
			func_243();
		}
	}
}

int func_493()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0) && func_257())
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1) && func_257())
	{
		return 1;
	}
	return 0;
}

int func_494()
{
	if (func_257())
	{
		if (func_52(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_495()
{
	if (func_257())
	{
		if (func_56(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_496(int iParam0)
{
	Global_1338608.f_1 = Global_1338608;
	Global_1338608 = iParam0;
}

int func_497(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_534(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_533();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_532())
		{
			if (func_531() > 0 && Global_1573683)
			{
				unk_0x7662B6FB19655462();
				unk_0x416AE03EAAA9AE80(fVar7);
				unk_0x68A38902ADFD05FE(18);
				if (unk_0xB45DF29A98EEAD5D())
				{
					unk_0x0CD0751316BC99F7();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_522())
		{
			func_521(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
	{
		func_521(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_531() == 1)
		{
			func_520(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_521(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xB45DF29A98EEAD5D())
		{
			unk_0x0CD0751316BC99F7();
		}
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_531() == 0 && !bParam5))
		{
			func_521(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_519();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x7662B6FB19655462();
				}
				unk_0x68A38902ADFD05FE(18);
			}
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 0))
			{
				Global_1573681 = uParam3;
				Global_1573680 = 1;
				unk_0x416AE03EAAA9AE80(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573682)
					{
						unk_0x77621132305B133B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_519();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x7662B6FB19655462();
					}
					unk_0x68A38902ADFD05FE(18);
				}
				unk_0x416AE03EAAA9AE80(fVar7);
				if (func_520(bVar6, uParam0, 0))
				{
					func_490(uParam0);
					uVar4 = func_517(iParam1, &(Global_1613622.f_68795), bParam4);
					if (bParam4)
					{
						func_514(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_508(uParam0, func_511(uParam2), func_509(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_505(uParam0, func_507(), func_506(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573682;
						func_514(uParam0, uVar4, "", 0, -1, Global_1573682, 1);
					}
					else
					{
						Var0 = { func_503(iParam1) };
						iVar8 = func_498(iParam1);
						func_514(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x59A0729D503ED758(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_502())
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
			if (func_501(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 20;
			}
			if (func_500(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_499(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_499(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 4;
}

bool func_500(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

bool func_501(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_502()
{
	return Global_1613622.f_1 == 0;
}

struct<4> func_503(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_504(unk_0xA34E7C2A5118D638()) || func_499(unk_0xA34E7C2A5118D638()))
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
			StringIntConCat(&Var0, Global_1613622.f_22, 16);
			break;
	}
	return Var0;
}

bool func_504(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 5;
}

void func_505(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_456(sParam1);
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_456("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_506()
{
	switch (func_483(unk_0xA34E7C2A5118D638()))
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

char* func_507()
{
	switch (func_483(unk_0xA34E7C2A5118D638()))
	{
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
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
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
	}
	return "";
}

void func_508(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(uParam2))
		{
			func_456(uParam1);
		}
		else if (func_276(unk_0xA34E7C2A5118D638()) == 133)
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT_C");
			unk_0xCE59E3E42586D52D(uParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_456("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_509(var uParam0)
{
	int iVar0;
	
	iVar0 = func_276(unk_0xA34E7C2A5118D638());
	if (func_510())
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
			switch (func_275())
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

bool func_510()
{
	return Global_1587174;
}

char* func_511(var uParam0)
{
	int iVar0;
	
	iVar0 = func_276(unk_0xA34E7C2A5118D638());
	if (func_510())
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
			if (func_513() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_513() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_275())
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
			if (func_512() == 1)
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

int func_512()
{
	return Global_2458121.f_4638;
}

int func_513()
{
	if (func_276(unk_0xA34E7C2A5118D638()) == 132)
	{
		return Global_2458121.f_4633;
	}
	return -1;
}

void func_514(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_458(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x276F16E002D00C0C(uParam1);
			unk_0x6DC80A902A91958F(iParam5);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_456(sParam1);
		}
		if (func_532() && iParam6)
		{
			if (func_516())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x276F16E002D00C0C("LBD_DPD_CNT");
			unk_0x6DC80A902A91958F(iVar0);
			unk_0x6DC80A902A91958F(iVar1);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_456(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam4);
			if (func_515(unk_0xA34E7C2A5118D638()))
			{
				unk_0x65960B4E2ADC9F6D(166);
			}
		}
		unk_0xD013AC29829DDC02();
	}
}

int func_515(int iParam0)
{
	if (func_501(iParam0) || func_500(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_516()
{
	return Global_1573683;
}

char* func_517(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_518();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB8A06E7E729EED0A(uParam1))
	{
		if (Global_1573847 == 1)
		{
			Global_1573847 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
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

char* func_518()
{
	if (unk_0x94D4FEDA7822E39D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x59F25675A261768C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6CD7F99044C6563E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x70620CD9F8A7C758())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_519()
{
	Global_36522 = 1;
}

bool func_520(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_matchmaking_card");
	}
	return unk_0xF518F3C7FACD43B7(*uParam1);
}

void func_521(var uParam0, var uParam1, bool bParam2)
{
	unk_0x77621132305B133B(&(uParam1->f_33), 7);
	Global_1573681 = 0;
	func_449();
	Global_1573680 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
		}
	}
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0xEF145906684E3D72(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam1->f_33, 0))
	{
		unk_0x77621132305B133B(&(uParam1->f_33), 0);
	}
	unk_0x416AE03EAAA9AE80(0f);
}

int func_522()
{
	if (func_530())
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (!func_528())
	{
		return 0;
	}
	if (!func_424())
	{
		return 0;
	}
	if (func_527(8, -1))
	{
		return 0;
	}
	if (func_531() == 2)
	{
		return 0;
	}
	if (Global_2458121.f_4397)
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	else if (!func_298(unk_0xA34E7C2A5118D638(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_526(1) || func_524(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (func_79(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (Global_1710055)
	{
		return 0;
	}
	if (func_523(0))
	{
		return 0;
	}
	return 1;
}

bool func_523(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4648.f_16, iParam0);
}

int func_524(bool bParam0)
{
	if (unk_0x5E9D81C7387C86AE())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (func_525(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0139E142C27412BC(0, 25) || unk_0x0139E142C27412BC(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0x0139E142C27412BC(0, 19) || (!bParam0 && unk_0x69ED83B6DEBA60F9(0, 19)))
	{
		return 1;
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (((unk_0x0139E142C27412BC(0, 166) || unk_0x0139E142C27412BC(0, 167)) || unk_0x0139E142C27412BC(0, 168)) || unk_0x0139E142C27412BC(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x69ED83B6DEBA60F9(0, 166) || unk_0x69ED83B6DEBA60F9(0, 167)) || unk_0x69ED83B6DEBA60F9(0, 168)) || unk_0x69ED83B6DEBA60F9(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_525(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C0EF9FA1B336D64())
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0))
		{
			unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_526(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_527(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

int func_528()
{
	if (func_529())
	{
		return 1;
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 0;
	}
	if (unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240())
	{
		return 0;
	}
	if (unk_0x0B7B1F8E572996A4())
	{
		return 0;
	}
	return 1;
}

bool func_529()
{
	return Global_1312438;
}

bool func_530()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_531()
{
	return Global_1338611.f_68;
}

int func_532()
{
	if (Global_1573682 > 16)
	{
		return 1;
	}
	return 0;
}

float func_533()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5EC483EC6D05F31E()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_534(int iParam0)
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

int func_535()
{
	if (func_538())
	{
		return 1;
	}
	if (func_7(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_510())
	{
		return 1;
	}
	if (func_333(unk_0xA34E7C2A5118D638()))
	{
		switch (func_276(unk_0xA34E7C2A5118D638()))
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
				if (!func_536(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_536(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_536(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 4);
}

int func_537(int iParam0)
{
	if ((iParam0 == 24 && func_333(unk_0xA34E7C2A5118D638())) && !func_435(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_256(unk_0xA34E7C2A5118D638(), 0) && func_435(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
		if (func_428(unk_0xA34E7C2A5118D638()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_538()
{
	if (func_539(unk_0xA34E7C2A5118D638()))
	{
		return Global_1318847;
	}
	return 0;
}

int func_539(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x1E3906AEA0BF5747(iParam0);
		}
	}
	return 0;
}

void func_540()
{
	if (Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_3 == 3)
	{
		if (!unk_0xDCC86F723E82125E(iLocal_333, 8))
		{
			if ((!func_7(unk_0xA34E7C2A5118D638()) && !func_130(unk_0xA34E7C2A5118D638())) && !func_345(unk_0xA34E7C2A5118D638()))
			{
				func_344();
			}
		}
		else if (!unk_0xDCC86F723E82125E(iLocal_333, 9))
		{
			if ((func_7(unk_0xA34E7C2A5118D638()) || func_130(unk_0xA34E7C2A5118D638())) || func_345(unk_0xA34E7C2A5118D638()))
			{
				unk_0x64A638ABC8DF57F0();
				Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4 = 0;
				unk_0x59A0729D503ED758(&iLocal_333, 9);
			}
		}
	}
}

void func_541()
{
	int iVar0;
	
	if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iLocal_337)))
	{
		iVar0 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iLocal_337));
		if (unk_0xDF73DA5E2287C499(iVar0))
		{
			func_542(iVar0, 2);
		}
	}
	iLocal_337++;
	if (iLocal_337 >= unk_0x55191629F1199760())
	{
		iLocal_337 = 0;
	}
}

void func_542(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1573879.f_18)))
	{
		return;
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_2, iParam0))
	{
		if (Global_1573879 < iParam1 && unk_0xDCC86F723E82125E(Global_1573879.f_1, 1))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 0);
			return;
		}
		if (Global_1573879 != 0)
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 1);
		}
		Global_1573879 = 0;
		Global_1573879.f_2 = 0;
	}
	unk_0x59A0729D503ED758(&(Global_1573879.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_543(iParam0))
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
		Global_1573879++;
	}
}

bool func_543(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10);
}

void func_544(int iParam0, int iParam1)
{
	Local_2762[iParam0 /*11*/] = iParam1;
}

int func_545()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_730.f_527[iVar0 /*47*/].f_1 = func_81();
		iVar0++;
	}
	return 1;
}

int func_546()
{
	return Local_642.f_0;
}

int func_547(int iParam0)
{
	return Local_2762[iParam0 /*11*/];
}

void func_548()
{
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 6))
	{
		func_571();
		unk_0x77621132305B133B(&(Global_1573879.f_1), 6);
	}
	if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 7))
	{
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 4) || unk_0xDCC86F723E82125E(Global_1573879.f_1, 16))
		{
			if (((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_257()) && func_12(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 7);
				func_250("FME_PASINT", 30000);
				func_249(1);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 17))
		{
			if (func_133() && !func_132())
			{
				unk_0x77621132305B133B(&(Global_1573879.f_1), 17);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 16);
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 23))
	{
		if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_12(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xB45DF29A98EEAD5D())
		{
			if (func_569())
			{
				func_250("AMEV_GA_RP", -1);
				func_249(1);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 23);
			}
		}
	}
	if (unk_0x2BF05095F2389894() && unk_0x45D1BEB329799891() == 15)
	{
		if (func_357(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0x997F946EBE927086(1344549371))
			{
				unk_0xDB617B399FCCE424(1344549371);
			}
		}
		else if (unk_0x997F946EBE927086(1344549371))
		{
			unk_0x7876EF2FBBB49635(1344549371);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 9))
	{
		if ((((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_257()) && func_12(unk_0xA34E7C2A5118D638(), 1, 1)) && !func_131(unk_0xA34E7C2A5118D638(), 21))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 9);
			func_568(0);
			func_250("FME_TBL00", -1);
			func_249(1);
		}
	}
	if (func_333(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 18))
		{
			if ((func_131(unk_0xA34E7C2A5118D638(), 21) && unk_0xDCC86F723E82125E(Global_1573879.f_1, 20)) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 19))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 18);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 18))
		{
			if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_257()) && func_12(unk_0xA34E7C2A5118D638(), 1, 1)) && unk_0xB66DD474AA9E764E()) && !Global_2458121.f_4642)
			{
				unk_0x77621132305B133B(&(Global_1573879.f_1), 18);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 19);
				func_250("AMTT_RPAS", -1);
				func_249(1);
			}
		}
	}
	if (((((func_333(unk_0xA34E7C2A5118D638()) && !func_8(unk_0xA34E7C2A5118D638())) && func_276(unk_0xA34E7C2A5118D638()) != 146) && !func_7(unk_0xA34E7C2A5118D638())) && !func_130(unk_0xA34E7C2A5118D638())) && !func_558())
	{
		if (func_356(func_276(unk_0xA34E7C2A5118D638())))
		{
			unk_0x30A4F7E00272A0F5(unk_0xA34E7C2A5118D638());
		}
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 22))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 22);
		}
		if (func_393(unk_0xA34E7C2A5118D638()) || func_351())
		{
			if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 10))
			{
				if (func_557(func_276(unk_0xA34E7C2A5118D638())))
				{
					if (func_218(0) && !Global_2391042)
					{
						unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
					}
					func_355(1);
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 10);
			}
		}
		if (func_357(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 11))
			{
				if (!Global_91158.f_8)
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
					func_353(1);
				}
				if (!func_556())
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 13);
					func_352();
				}
				if (!Global_2391042)
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
					if (func_218(0) && !Global_2391042)
					{
						unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
					}
					func_355(1);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 11);
			}
		}
		else
		{
			func_554(0);
		}
	}
	else
	{
		func_554(1);
	}
	func_549();
	if (func_350(func_276(unk_0xA34E7C2A5118D638())) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 21))
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 21);
	}
	if ((func_133() && !func_132()) || func_131(unk_0xA34E7C2A5118D638(), 21))
	{
		if (!unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 10))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 10);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 10))
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 10);
	}
}

void func_549()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_257())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_417(iVar2))
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
				if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 26))
				{
					unk_0x77621132305B133B(&(Global_1573879.f_1), 26);
				}
				func_550(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 26))
	{
		func_44(&(Global_1573879.f_21));
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 26);
	}
}

void func_550(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1573879.f_21)))
	{
		func_2(&(Global_1573879.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573879.f_21), iParam1, 0))
	{
		if (func_531() > 0)
		{
			func_553(iParam0);
			if (func_247("AMEV_LBD_HELP"))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
			func_44(&(Global_1573879.f_21));
		}
	}
	else
	{
		func_552(0);
		func_551();
	}
}

void func_551()
{
	Global_2458121.f_4384 = 0;
}

void func_552(int iParam0)
{
	Global_1338611.f_68 = iParam0;
}

void func_553(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_554(int iParam0)
{
	if ((unk_0xDCC86F723E82125E(Global_1573879.f_1, 11) || (unk_0xDCC86F723E82125E(Global_1573879.f_1, 10) && iParam0)) || (unk_0xDCC86F723E82125E(Global_1573879.f_1, 22) && iParam0))
	{
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 12))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 12);
			func_353(0);
		}
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 13))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 13);
			func_555();
		}
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 14) && !func_256(unk_0xA34E7C2A5118D638(), 0))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 14);
			func_355(0);
		}
		unk_0x77621132305B133B(&(Global_1573879.f_1), 11);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 10);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 22);
	}
}

void func_555()
{
	unk_0x77621132305B133B(&(Global_2458121.f_4552), 0);
}

bool func_556()
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4552, 0);
}

int func_557(int iParam0)
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
			return func_357(unk_0xA34E7C2A5118D638());
		
		case 133:
			return (func_351() || func_5(func_275()));
		
		default:
	}
	return 0;
}

int func_558()
{
	if (((((((((func_567() || func_566()) || func_565()) || func_270()) || (func_564() && !unk_0xDC9A5ADFE0C41DD2())) || (func_561() && !func_560())) || Global_2394609) || Global_2394609.f_1 != 0) || Global_2394682 != 0) || (func_559() == 2 && !unk_0xDC9A5ADFE0C41DD2()))
	{
		return 1;
	}
	return 0;
}

int func_559()
{
	return Global_976341;
}

bool func_560()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 27);
}

int func_561()
{
	if (func_563() || func_562())
	{
		return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_84 == 8;
	}
	return 0;
}

var func_562()
{
	return Global_2433098.f_610;
}

bool func_563()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

bool func_564()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 5);
}

bool func_565()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 2);
}

bool func_566()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 20);
}

bool func_567()
{
	return Global_2433098.f_574;
}

void func_568(int iParam0)
{
	int iVar0;
	
	iVar0 = func_175(2507, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 0))
		{
			unk_0x59A0729D503ED758(&iVar0, 0);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 1))
		{
			unk_0x59A0729D503ED758(&iVar0, 1);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 2))
		{
			unk_0x59A0729D503ED758(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 3))
		{
			unk_0x59A0729D503ED758(&iVar0, 3);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 4))
		{
			unk_0x59A0729D503ED758(&iVar0, 4);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 5))
		{
			unk_0x59A0729D503ED758(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 6))
		{
			unk_0x59A0729D503ED758(&iVar0, 6);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 7))
		{
			unk_0x59A0729D503ED758(&iVar0, 7);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 8))
		{
			unk_0x59A0729D503ED758(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 9))
		{
			unk_0x59A0729D503ED758(&iVar0, 9);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 10))
		{
			unk_0x59A0729D503ED758(&iVar0, 10);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 11))
		{
			unk_0x59A0729D503ED758(&iVar0, 11);
		}
	}
	func_166(2507, iVar0, -1, 1);
}

int func_569()
{
	int iVar0;
	
	if (!func_45(&(Global_1573879.f_15)))
	{
		func_2(&(Global_1573879.f_15), 0, 0);
		Global_1573879.f_17 = 0;
	}
	else if (func_1(&(Global_1573879.f_15), 1000, 0))
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(Global_1573879.f_17)))
		{
			iVar0 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(Global_1573879.f_17));
			if (unk_0xDF73DA5E2287C499(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_570(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0xA34E7C2A5118D638()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573879.f_17++;
		if (Global_1573879.f_17 >= 32)
		{
			Global_1573879.f_17 = 0;
			func_44(&(Global_1573879.f_15));
		}
	}
	return 0;
}

int func_570(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_170(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1587175[iVar0 /*410*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_571()
{
	unk_0x60B57BC5E51D2074(5);
	func_573();
	unk_0xFD62177C7242216E(1f);
	unk_0x77621132305B133B(&(Global_1573879.f_1), 8);
	func_572();
}

void func_572()
{
	if (Global_1719525)
	{
		if (unk_0xDCC86F723E82125E(Global_1719526, 0))
		{
			unk_0x77621132305B133B(&Global_2464686, 0);
		}
		if (unk_0xDCC86F723E82125E(Global_1719526, 1))
		{
			unk_0x77621132305B133B(&Global_2464686, 1);
		}
		if (unk_0xDCC86F723E82125E(Global_1719526, 5))
		{
			unk_0x77621132305B133B(&Global_2464686, 5);
		}
		if (unk_0x42277337DA18A497(-355737150))
		{
			unk_0x130F0C5AE7B52B7A(-355737150, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-580979506))
		{
			unk_0x130F0C5AE7B52B7A(-580979506, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1426452475))
		{
			unk_0x130F0C5AE7B52B7A(-1426452475, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(745417724))
		{
			unk_0x130F0C5AE7B52B7A(745417724, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1305304906))
		{
			unk_0x130F0C5AE7B52B7A(-1305304906, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1543175077))
		{
			unk_0x130F0C5AE7B52B7A(-1543175077, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-811770997))
		{
			unk_0x130F0C5AE7B52B7A(-811770997, 1, 0, 0);
		}
		Global_1719526 = 0;
	}
	Global_1719525 = 0;
}

void func_573()
{
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && Global_2458121.f_4643 < 1f)
		{
			return;
		}
	}
	Global_2458121.f_4644 = -1;
	Global_2458121.f_4643 = 1f;
}

int func_574()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2458121.f_4550)
	{
		return 0;
	}
	if ((!func_45(&(Local_642.f_39)) && !func_45(&(Local_642.f_41))) && !func_45(&(Local_642.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x2AA13A84EE2D3B24();
	if (func_45(&(Local_642.f_41)))
	{
		iVar0 = func_575(&uVar2, &(Local_642.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_642.f_39)))
	{
		iVar0 = func_575(&uVar2, &(Local_642.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_642.f_43)))
	{
		iVar0 = func_575(&uVar2, &(Local_642.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_575(var uParam0, var uParam1)
{
	return unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(*uParam0, *uParam1));
}

int func_576()
{
	if (func_577())
	{
		return 1;
	}
	return 0;
}

bool func_577()
{
	return Global_1573879.f_23;
}

int func_578()
{
	bool bVar0;
	
	func_582(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_581())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_580())
	{
		return 1;
	}
	if (func_579(157))
	{
		if (!func_567())
		{
			return 1;
		}
	}
	if (func_579(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_359() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_359()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_579(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_580()
{
	return Global_2441381;
}

bool func_581()
{
	return Global_2433098.f_569;
}

void func_582(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_583(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_583(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_584(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_584(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_585()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_586()
{
	int iVar0;
	
	if (func_578())
	{
		Local_3115.f_5 = 5;
	}
	else if (unk_0xDCC86F723E82125E(Local_642.f_2, 0))
	{
		Local_3115.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3115.f_5 = 1;
	}
	else
	{
		Local_3115.f_5 = 2;
	}
	Local_3115.f_0 = Local_642.f_52;
	Local_3115.f_1 = Local_642.f_53;
	Local_3115.f_4 = Local_642.f_66;
	Local_3115.f_3 = Local_642.f_51;
	Local_3115.f_10 = (unk_0x20F8506526D25CE0() - Local_3115.f_9);
	if (!Global_262145.f_9409)
	{
		if (Local_3115.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x935FA14EDA695A82() != -1)
	{
		func_614(Local_3115, Local_642.f_3, Local_2762[unk_0x935FA14EDA695A82() /*11*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xDCC86F723E82125E(iLocal_333, 4))
	{
		unk_0x7A2D5FC5F94932AA(iLocal_341);
		unk_0x77621132305B133B(&iLocal_333, 4);
	}
	unk_0x279EB90079F76860(iLocal_341);
	unk_0x279EB90079F76860(iLocal_342);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xDCC86F723E82125E(iLocal_628, iVar0) && !unk_0x6108F37F12ABC27B(uLocal_629[iVar0]))
		{
			unk_0x7A2D5FC5F94932AA(uLocal_629[iVar0]);
			unk_0x279EB90079F76860(uLocal_629[iVar0]);
		}
		iVar0++;
	}
	func_341();
	func_396(1, 1);
	unk_0x4D474CD3B45E1BCE(0);
	func_419(0);
	func_348(Local_642.f_3, 0);
	func_587(133, 0, Local_642.f_37 == 6);
	func_347(23, 0);
	if (func_262() >= 0f)
	{
		unk_0x0CBFCEC485013807(0f, 0);
	}
	unk_0x64A638ABC8DF57F0();
	unk_0xA4E0D8FD51F2A6F7();
}

void func_587(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 13))
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 13);
		}
		if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 14))
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 14);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 21))
	{
		unk_0x77621132305B133B(&(Global_1573879.f_1), 21);
	}
	func_610();
	unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
	unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_609(func_276(unk_0xA34E7C2A5118D638()));
		func_347(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xA34E7C2A5118D638() != -1) && func_608(unk_0xA34E7C2A5118D638()) >= 12)
		{
			func_607(2519, -1);
			iVar1 = func_175(2519, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 5);
			}
		}
		func_606();
		func_605();
		func_604();
		if ((!func_255(unk_0xA34E7C2A5118D638()) && !func_253(unk_0xA34E7C2A5118D638())) && !func_603())
		{
			func_594();
		}
		func_593();
		if (!unk_0xDCC86F723E82125E(Global_1722044.f_3, 0) && !unk_0xDCC86F723E82125E(Global_1722044.f_3, 1))
		{
			func_571();
		}
		func_592();
		unk_0x77621132305B133B(&(Global_2458121.f_1638), 2);
		func_591();
		func_135();
	}
	if (unk_0x997F946EBE927086(1344549371))
	{
		unk_0x7876EF2FBBB49635(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xA34E7C2A5118D638() != -1 && !func_131(unk_0xA34E7C2A5118D638(), 21)) && !func_256(unk_0xA34E7C2A5118D638(), 0))
		{
			func_355(0);
			func_353(0);
			func_590();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2443244 = -1;
			func_46(26, -1);
		}
	}
	if (!func_588())
	{
		Global_2457030 = 1;
	}
}

int func_588()
{
	if (((!func_515(unk_0xA34E7C2A5118D638()) && !func_499(unk_0xA34E7C2A5118D638())) && func_276(unk_0xA34E7C2A5118D638()) != 146) && !func_589())
	{
		return 0;
	}
	return 1;
}

int func_589()
{
	if ((Global_1613622 == 0 && unk_0xDC9A5ADFE0C41DD2()) && (((((Global_1613622.f_5 != 0 || unk_0xDCC86F723E82125E(Global_1613622.f_4, 15)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 18)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 19)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 28)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 27)))
	{
		return 1;
	}
	return 0;
}

void func_590()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xDCC86F723E82125E(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xDCC86F723E82125E(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0x77621132305B133B(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_591()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4551), 1);
	}
	if (Global_2458121.f_4551 > 0)
	{
		unk_0x233432976E597324("FM_COUNTDOWN_30S_KILL");
		unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
		unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x384EC102F362C893(1);
		Global_2458121.f_4551 = 0;
		unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
		unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
		unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
		if (!unk_0xF8D041B05C3D1FD4(unk_0xC4E68AF0B559FAC4(), "am_pi_menu"))
		{
			if (Global_2458121.f_4561 > -1)
			{
				unk_0x279EB90079F76860(Global_2458121.f_4561);
				Global_2458121.f_4561 = -1;
			}
		}
	}
}

void func_592()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573879 = { Var0 };
}

void func_593()
{
	var uVar0;
	
	Global_1318847 = uVar0;
}

void func_594()
{
	Global_2404919.f_20 = { Global_2406723 };
	Global_2404919.f_22 = { Global_2406725 };
	func_601();
	func_595(1, 1);
}

void func_595(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406742 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406742 };
		Global_2404919.f_39.f_49 = { Global_2406742.f_49 };
		Global_2404919.f_39.f_52 = Global_2406742.f_52;
		Global_2404919.f_39.f_53 = Global_2406742.f_53;
	}
	if (bParam0)
	{
		func_600();
	}
	func_597(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
	func_596(0);
	func_138();
}

void func_596(bool bParam0)
{
	if (bParam0)
	{
		Global_2404919.f_629 = 0;
	}
	else
	{
		Global_2404919.f_629 = 1;
	}
}

void func_597(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		Global_2404919.f_1137 = iParam10;
		func_598();
		func_389(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1140 = iParam3;
		Global_2404919.f_1141 = iParam4;
		Global_2404919.f_1138 = iParam5;
		Global_2404919.f_1139 = iParam6;
		Global_2404919.f_1142 = iParam7;
		Global_2404919.f_1143 = iParam8;
		Global_2404919.f_1144 = iParam9;
	}
	else
	{
		func_598();
		func_389(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_598()
{
	func_599();
	Global_2404919.f_631 = 0;
}

void func_599()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404919.f_632[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_600()
{
	Global_2404919.f_347 = { Global_2407050 };
}

void func_601()
{
	func_602();
	Global_2404919.f_1275 = 0;
}

void func_602()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404919.f_1276[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_603()
{
	return Global_1573828;
}

void func_604()
{
	Global_2458121.f_4552 = 0;
}

void func_605()
{
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1 = 0;
	}
}

void func_606()
{
	int iVar0;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	if (iVar0 != -1)
	{
		Global_1608811[iVar0 /*109*/] = -1;
	}
}

void func_607(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_175(iParam0, func_171(iParam1), 0);
	iVar0++;
	if (!func_174(iParam0))
	{
		func_166(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_167(iParam0, iVar0, iParam1, 1);
	}
}

int func_608(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_192.f_6;
}

int func_609(int iParam0)
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
			if (func_357(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_610()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 3) || unk_0xDCC86F723E82125E(Global_2458121.f_1636, 4))
	{
		if (unk_0xD5DFCA69ACAA20E3() || unk_0xE71FCE10773CF7B0())
		{
			unk_0x31E6EB2040318451(800);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 5))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 5);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 3))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 3);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 4))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 4);
	}
	func_613(0);
	func_612(0);
	func_611(0);
}

void func_611(int iParam0)
{
	if (Global_2458121.f_4372 != iParam0)
	{
		Global_2458121.f_4372 = iParam0;
	}
}

void func_612(bool bParam0)
{
	if (Global_2458121.f_4371 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2458121.f_4371 = bParam0;
	}
}

void func_613(int iParam0)
{
	if (Global_2458121.f_4369 != iParam0)
	{
		Global_2458121.f_4369 = iParam0;
	}
}

void func_614(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69317)
	{
		if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x6483456300B637A2(&Var1);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xC3F52FE7E766CF71(&Var14);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x01451F2BA643A1A3(&Var28);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x12226DEF09574124(&Var52);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_penned_in"))
		{
			unk_0xA7330A116146362C(&Param0);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x288A17BAB1853D87(&Var66);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x394AF500F69538DA(&Var79);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xD9E663B83CF84644(&Var93);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0xF4D6757401B12AC1(&Var107);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xC382FB77214E8E89(&Var123);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x2FB576B2B4703629(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x533E1F35BAEA394D(&Var150);
			}
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x9987C8881E457B06(&Var164);
		}
	}
}

int func_615(struct<20> Param0)
{
	func_623(func_624(Param0.f_0), Param0);
	unk_0x898BA9C42084F452(0);
	unk_0xC908ABD9A1B6E6E6(func_622(9));
	func_619(0, -1, 0);
	func_617(133);
	unk_0xFE7B095449D5F053(&Local_642, 88);
	unk_0x99592530153DB318(&Local_2762, 353);
	if (!func_616())
	{
		func_586();
	}
	if (unk_0x736DBE187CFCC863())
	{
		unk_0x3A7FF4BAFC26BDFD(&(Local_642.f_52), &(Local_642.f_53));
	}
	Local_3115.f_2 = unk_0x19EE47A00B170BB8();
	unk_0x6ECAEE4901F465A1(0);
	return 1;
}

int func_616()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_581())
		{
			return 0;
		}
		if (func_579(155))
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

void func_617(int iParam0)
{
	func_592();
	func_618();
	func_604();
	Global_1573879.f_4 = iParam0;
	Global_1573879.f_5 = iParam0;
	func_364(iParam0, -1);
	func_27(&(Global_1573879.f_18), 0, 0);
	Global_2458121.f_4414 = 0;
	Global_2442022[0] = func_81();
	Global_2442022[1] = func_81();
	Global_2442022[2] = func_81();
	Global_2442022[3] = func_81();
	Global_2442022[4] = func_81();
	func_135();
	func_243();
	if (func_133() && !func_132())
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 16);
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 17);
	}
}

void func_618()
{
	var uVar0;
	
	Global_1573903 = uVar0;
}

int func_619(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_621();
			}
			else
			{
				return 0;
			}
		}
		if (!func_620())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_621();
					}
					else
					{
						return 0;
					}
				}
				if (func_581())
				{
					if (!bParam2)
					{
						func_621();
					}
					else
					{
						return 0;
					}
				}
				if (func_579(155))
				{
					if (!bParam2)
					{
						func_621();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_621();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_621();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_621();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_620()
{
	return Global_1315886;
}

void func_621()
{
	unk_0xA4E0D8FD51F2A6F7();
}

int func_622(int iParam0)
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

void func_623(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_621();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_624(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}


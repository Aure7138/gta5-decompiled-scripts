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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105[65];
	float fLocal_301 = 0f;
	struct<3> Local_302 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	float fLocal_314 = 0f;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	float fLocal_335 = 0f;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	int iLocal_347 = 0;
	struct<3> Local_348[65];
	var uLocal_544[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_610[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	struct<68> Local_637 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
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
	struct<527> Local_725 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1252 = -1;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
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
	var uLocal_1273 = -1082130432;
	var uLocal_1274 = 3;
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
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = -1;
	var uLocal_1298 = -1;
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
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = -1082130432;
	var uLocal_1320 = 3;
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
	var uLocal_1343 = -1;
	var uLocal_1344 = -1;
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
	var uLocal_1365 = -1082130432;
	var uLocal_1366 = 3;
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
	var uLocal_1389 = -1;
	var uLocal_1390 = -1;
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
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = -1;
	var uLocal_1436 = -1;
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
	var uLocal_1457 = -1082130432;
	var uLocal_1458 = 3;
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
	var uLocal_1481 = -1;
	var uLocal_1482 = -1;
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
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = -1;
	var uLocal_1528 = -1;
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
	var uLocal_1549 = -1082130432;
	var uLocal_1550 = 3;
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
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = -1;
	var uLocal_1574 = -1;
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
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = -1;
	var uLocal_1620 = -1;
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
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = -1082130432;
	var uLocal_1642 = 3;
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
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = -1;
	var uLocal_1666 = -1;
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
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = -1082130432;
	var uLocal_1688 = 3;
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
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = -1;
	var uLocal_1712 = -1;
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
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = -1082130432;
	var uLocal_1734 = 3;
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
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = -1;
	var uLocal_1758 = -1;
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
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = -1082130432;
	var uLocal_1780 = 3;
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
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = -1;
	var uLocal_1804 = -1;
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
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = -1082130432;
	var uLocal_1826 = 3;
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
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = -1;
	var uLocal_1850 = -1;
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
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = -1082130432;
	var uLocal_1872 = 3;
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
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = -1;
	var uLocal_1896 = -1;
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
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = -1082130432;
	var uLocal_1918 = 3;
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
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = -1;
	var uLocal_1942 = -1;
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
	var uLocal_1962 = 0;
	var uLocal_1963 = -1082130432;
	var uLocal_1964 = 3;
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
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = -1;
	var uLocal_1988 = -1;
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
	var uLocal_2009 = -1082130432;
	var uLocal_2010 = 3;
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
	var uLocal_2032 = 0;
	var uLocal_2033 = -1;
	var uLocal_2034 = -1;
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
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = -1;
	var uLocal_2080 = -1;
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
	var uLocal_2101 = -1082130432;
	var uLocal_2102 = 3;
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
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = -1;
	var uLocal_2126 = -1;
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
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = -1082130432;
	var uLocal_2148 = 3;
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
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = -1;
	var uLocal_2172 = -1;
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
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = -1082130432;
	var uLocal_2194 = 3;
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
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = -1;
	var uLocal_2218 = -1;
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
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = -1082130432;
	var uLocal_2240 = 3;
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
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = -1;
	var uLocal_2264 = -1;
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
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = -1082130432;
	var uLocal_2286 = 3;
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
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = -1;
	var uLocal_2310 = -1;
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
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = -1082130432;
	var uLocal_2332 = 3;
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
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = -1;
	var uLocal_2356 = -1;
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
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = -1;
	var uLocal_2402 = -1;
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
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = -1082130432;
	var uLocal_2424 = 3;
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
	var uLocal_2447 = -1;
	var uLocal_2448 = -1;
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
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = -1;
	var uLocal_2494 = -1;
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
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = -1082130432;
	var uLocal_2516 = 3;
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
	var uLocal_2539 = -1;
	var uLocal_2540 = -1;
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
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = -1;
	var uLocal_2586 = -1;
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
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = -1082130432;
	var uLocal_2608 = 3;
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
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = -1;
	var uLocal_2632 = -1;
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
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = -1082130432;
	var uLocal_2654 = 3;
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
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = -1;
	var uLocal_2678 = -1;
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
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = -1082130432;
	var uLocal_2700 = 3;
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
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = -1;
	struct<11> Local_2724[32];
	struct<12> Local_3077 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	fLocal_89 = -0.05f;
	fLocal_90 = 0.92f;
	fLocal_91 = 1.94f;
	fLocal_92 = 2.99f;
	fLocal_93 = 3.7f;
	fLocal_301 = 40000f;
	iLocal_337 = unk_0xEDDCCC3D357A50F8();
	iLocal_338 = -1;
	iLocal_339 = -1;
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_530(ScriptParam_0))
		{
			func_506();
		}
	}
	while (true)
	{
		func_505();
		if (func_497() || func_495())
		{
			func_506();
		}
		if (func_493())
		{
			func_506();
		}
		func_476();
		switch (func_475(unk_0x04EFA8D3BE8500E7()))
		{
			case 0:
				if (func_474() == 1)
				{
					if (func_473())
					{
						func_472(unk_0x04EFA8D3BE8500E7(), 1);
					}
				}
				break;
			
			case 1:
				if (func_474() == 1)
				{
					func_82();
					func_73();
				}
				else if (func_474() == 3)
				{
					func_472(unk_0x04EFA8D3BE8500E7(), 3);
				}
				break;
			
			case 3:
				func_506();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_474())
			{
				case 0:
					if (func_60())
					{
						func_59(1);
					}
					break;
				
				case 1:
					if (Local_637.f_37 == 6)
					{
						func_59(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_315, 1000, 0))
					{
						func_59(3);
					}
					break;
				
				case 3:
					func_506();
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
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_637.f_2), 0);
			Local_637.f_1 = unk_0xD74C7D8D2E5E43D2();
		}
	}
	switch (Local_637.f_37)
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
			if (func_1(&(Local_637.f_43), func_29(), 0) || unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_637.f_38 = unk_0xD74C7D8D2E5E43D2();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_637.f_39), func_28(0), 0) || unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
			{
				if (!unk_0x236D8AD7EE179F46(Local_637.f_2, 1))
				{
					Local_637.f_1 = unk_0xD74C7D8D2E5E43D2();
					unk_0xF3148AAF69AF9CBC(&(Local_637.f_2), 1);
					func_27(&(Local_637.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_339, &iLocal_338);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_637.f_41), 20000, 0) || Local_637.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_637.f_3))
				{
					func_27(&(Local_637.f_45), 0, 0);
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
		if (unk_0x335F574AD77E59CE(Local_637.f_67[iVar0 /*2*/].f_1) && !unk_0x930F8FBB8E9537CC(unk_0x262EBD0AA0ED1D6D(Local_637.f_67[iVar0 /*2*/].f_1)))
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
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0x236D8AD7EE179F46(Local_2724[iVar1 /*11*/].f_1, 1) || Local_2724[iVar1 /*11*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0x236D8AD7EE179F46(Local_2724[iVar1 /*11*/].f_1, 0))
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
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(*iParam0));
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
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1329891157A54C63() || iParam0)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar2);
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
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
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
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			unk_0xF3148AAF69AF9CBC(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0x236D8AD7EE179F46(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xF3148AAF69AF9CBC(&(Local_637.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0));
				if (unk_0xA89AE5060232966A(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_637.f_50)
	{
		Local_637.f_50 = iVar1;
	}
	else
	{
		Local_637.f_66 = (Local_637.f_50 - iVar1);
	}
	if (iVar2 > Local_637.f_51)
	{
		Local_637.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312729;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2724[iParam0 /*11*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4);
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
	switch (Local_637.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_8708)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_8709)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_8710)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_8711)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_8712)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_8713)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_8714 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_8715)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_8716)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_8717)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_8718)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_8719))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_8720))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_8832)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_8833)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_8723))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_8725))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_8726))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_8727))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_637.f_3)
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
		if (Local_637.f_4[iParam0] == unk_0x519AAFF77CC141DF() && func_21(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4, 0))
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
	switch (Local_637.f_3)
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
	
	iVar0 = Local_2724[iParam0 /*11*/].f_4;
	iVar1 = Local_2724[iParam0 /*11*/].f_4.f_1;
	if (!unk_0x236D8AD7EE179F46(Local_637.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_637.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_637.f_49++;
			unk_0xF3148AAF69AF9CBC(&(Local_637.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_637.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_637.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_637.f_4[iVar3] < 0 || func_21(iVar0, Local_2724[Local_637.f_4[iVar3] /*11*/].f_4)) || func_24(iVar0, Local_2724[Local_637.f_4[iVar3] /*11*/].f_4, iVar1, Local_2724[Local_637.f_4[iVar3] /*11*/].f_4.f_1))
		{
			iVar4 = Local_637.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_338 = iVar3;
				iLocal_339 = iParam0;
			}
			Local_637.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_637.f_4[iVar5] == iParam0)
				{
					Local_637.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_637.f_3 == 2)
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
	
	if (unk_0x236D8AD7EE179F46(Local_637.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_637.f_4[iVar0] == iParam0)
			{
				Local_637.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xC69E84EBBD7166E6(&(Local_637.f_48), iParam0);
		unk_0xC69E84EBBD7166E6(&(Local_637.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD74C7D8D2E5E43D2();
		}
		else
		{
			*uParam0 = unk_0xE36DF6414E5CCBBF();
		}
	}
	else
	{
		*uParam0 = unk_0x48E480685981C7D4();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0x236D8AD7EE179F46(Local_637.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_637.f_3)
	{
		case 0:
			return Global_262145.f_8036;
		
		case 8:
			return Global_262145.f_8037;
		
		case 3:
			return Global_262145.f_8038;
		
		case 1:
			return Global_262145.f_8818;
		
		case 6:
			return Global_262145.f_8819;
		
		case 10:
			return Global_262145.f_8821;
		
		case 11:
			return Global_262145.f_8823;
		
		case 12:
			return Global_262145.f_8824;
		
		case 15:
			return Global_262145.f_8828;
		
		case 16:
			return Global_262145.f_8829;
		
		case 17:
			return Global_262145.f_8830;
		
		case 18:
			return Global_262145.f_8831;
		
		case 13:
			return Global_262145.f_8822;
		
		case 14:
			return Global_262145.f_8825;
		
		case 2:
			return Global_262145.f_8040;
		
		case 7:
			return Global_262145.f_8820;
		
		case 9:
			return Global_262145.f_8826;
		
		case 5:
			return Global_262145.f_8041;
		
		case 4:
			return Global_262145.f_8039;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_8788;
}

void func_30(int iParam0)
{
	Local_637.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_637.f_37 == 0 || func_5(Local_637.f_3)) || Local_637.f_54 < 10))
	{
		Var0 = { Local_637.f_67[iLocal_334 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0x250A8F68F67CA19A(Var0.f_1))
			{
				if (func_38(Local_637.f_3, iLocal_334, &Var2, &uVar5))
				{
					Local_637.f_55[iLocal_334] = func_34(iLocal_334);
					if (unk_0x236D8AD7EE179F46(Local_2724[Local_637.f_55[iLocal_334] /*11*/].f_2, iLocal_334))
					{
						if (func_33(&(Local_637.f_67[iLocal_334 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0))
						{
							unk_0x4B9126AEF0E84DA7(unk_0x262EBD0AA0ED1D6D(Local_637.f_67[iLocal_334 /*2*/].f_1), 1);
							unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), 1);
							unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), 1);
							unk_0x51A5B56EA7D7B0BF(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), 0);
							func_32(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), 1);
							if (unk_0x9C1418C53B05D47B("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x9C1418C53B05D47B("MPBitset", 3))
							{
								if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), "MPBitset");
								}
								unk_0xF3148AAF69AF9CBC(&iVar6, 10);
								unk_0xF3148AAF69AF9CBC(&iVar6, 11);
								unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_334 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_637.f_55[iLocal_334] = -1;
							Local_637.f_54++;
						}
					}
				}
			}
		}
		iLocal_334++;
		if (iLocal_334 >= 10)
		{
			iLocal_334 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x9C1418C53B05D47B("MPBitset", 3))
	{
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x8B4662A1D2DF932C(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xF3148AAF69AF9CBC(&uVar0, 13);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&uVar0, 13);
		}
		unk_0xEAE276D4D897C5F4(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(iVar0, iParam9);
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
		while (iVar0 <= (unk_0x945535897333587B() - 1))
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
			{
				iVar8 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0));
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
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
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
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

bool func_41()
{
	return (func_5(Local_637.f_3) || func_39(Local_637.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x8C283330B889AF48() < iParam0)
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
	if (func_45(&(Global_1573867.f_18)))
	{
		if (!func_1(&(Global_1573867.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1573867.f_18));
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
	if (iParam1 && unk_0xD49F8CA46CF1D5B3() < iParam0)
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
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0);
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
			unk_0x59C26149DF458387(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xC69E84EBBD7166E6(&iVar0, iParam0);
				unk_0x59C26149DF458387(iVar0, iParam1);
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
	uVar1 = unk_0xE19FDB171CBF814A(uVar0);
	return unk_0x236D8AD7EE179F46(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 2) && !func_8(unk_0x1329891157A54C63()))
	{
		if (unk_0xB318FDA0D1ABDB20(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB318FDA0D1ABDB20(sParam1))
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
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_57(iParam0, &Var0, -1, sParam2, sParam1);
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
		if (Global_2422670.f_2419)
		{
			return 0;
		}
	}
	func_56(uParam0);
	func_53(uParam0);
	if (func_52(uParam0->f_1))
	{
		if (Global_2422670.f_2137[0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422670.f_2137[0 /*70*/].f_1 == 13 || Global_2422670.f_2137[0 /*70*/].f_1 == 52) || Global_2422670.f_2137[0 /*70*/].f_1 == 53) || Global_2422670.f_2137[0 /*70*/].f_1 == 57)
		{
			Global_2422670.f_2137[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422670.f_2137[iVar0 + 1 /*70*/] = { Global_2422670.f_2137[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422670.f_2137[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 1);
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0)
{
	if (func_55(uParam0->f_1))
	{
		uParam0->f_66 = func_54();
	}
}

int func_54()
{
	return 21;
}

int func_55(int iParam0)
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

void func_56(var uParam0)
{
	if (func_55(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
}

void func_57(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_58();
	uParam1->f_17 = func_58();
	uParam1->f_18 = func_58();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_58()
{
	return -1;
}

void func_59(int iParam0)
{
	Local_637.f_0 = iParam0;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_637.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_637.f_39));
	func_65();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_637.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_61();
	}
	return 1;
}

void func_61()
{
	int iVar0;
	
	if (func_39(Local_637.f_3))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_637.f_67[iVar0 /*2*/] = func_64();
			iVar0++;
		}
	}
	else if (Local_637.f_3 == 12)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_637.f_67[iVar0 /*2*/] = func_63();
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_637.f_67[iVar0 /*2*/] = func_62();
			iVar0++;
		}
	}
}

int func_62()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 2);
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

int func_63()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 2);
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

int func_64()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 2);
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

void func_65()
{
	int iVar0;
	
	iVar0 = func_69();
	Local_637.f_3 = iVar0;
	func_66(func_68(133, iVar0, 0, 0));
}

void func_66(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 386;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam0;
	iVar3 = func_67(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iVar3);
	}
}

var func_67(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_69()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_9117;
	iVar0[1] = Global_262145.f_8790;
	iVar0[2] = Global_262145.f_9121;
	iVar0[3] = Global_262145.f_9119;
	iVar0[4] = Global_262145.f_9120;
	iVar0[5] = Global_262145.f_9122;
	iVar0[6] = Global_262145.f_8791;
	iVar0[7] = Global_262145.f_8792;
	iVar0[8] = Global_262145.f_9118;
	iVar0[9] = Global_262145.f_8798;
	iVar0[10] = Global_262145.f_8793;
	iVar0[11] = Global_262145.f_8795;
	iVar0[12] = Global_262145.f_8796;
	iVar0[13] = Global_262145.f_8794;
	iVar0[14] = Global_262145.f_8797;
	iVar0[15] = Global_262145.f_8800;
	iVar0[16] = Global_262145.f_8801;
	iVar0[17] = Global_262145.f_8802;
	iVar0[18] = Global_262145.f_8803;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_72(iVar21) || func_70(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x3ECD26BA4F631EE2(0f, fVar20);
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
	return func_69();
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_71(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6441)
		{
			if (Global_2446446.f_124[iVar0 /*2*/] == iVar1 && Global_2446446.f_124[iVar0 /*2*/].f_1 == func_68(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
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

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8030;
		
		case 1:
			return Global_262145.f_8804;
		
		case 6:
			return Global_262145.f_8805;
		
		case 7:
			return Global_262145.f_8806;
		
		case 8:
			return Global_262145.f_8031;
		
		case 3:
			return Global_262145.f_8032;
		
		case 4:
			return Global_262145.f_8033;
		
		case 2:
			return Global_262145.f_8034;
		
		case 5:
			return Global_262145.f_8035;
		
		case 9:
			return Global_262145.f_8812;
		
		case 10:
			return Global_262145.f_8807;
		
		case 11:
			return Global_262145.f_8809;
		
		case 12:
			return Global_262145.f_8810;
		
		case 15:
			return Global_262145.f_8814;
		
		case 16:
			return Global_262145.f_8815;
		
		case 17:
			return Global_262145.f_8816;
		
		case 18:
			return Global_262145.f_8817;
		
		case 13:
			return Global_262145.f_8808;
		
		case 14:
			return Global_262145.f_8811;
		
		default:
	}
	return 1;
}

void func_73()
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_637.f_55[iVar0] == unk_0x519AAFF77CC141DF())
			{
				if (func_74(iVar0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_2, iVar0))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_2), iVar0);
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_2, iVar0))
				{
					unk_0xC69E84EBBD7166E6(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_2), iVar0);
				}
			}
			else if (unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_2, iVar0))
			{
				unk_0xC69E84EBBD7166E6(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_74(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_37(iParam0, &Var0, &uVar3))
	{
		if (func_75(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_78(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_76(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_76(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_36(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_77(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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

int func_77(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_78(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_77(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_79(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_36(iVar1), Param0, 1) < fParam3)
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

int func_79(int iParam0)
{
	if (func_81(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_80(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_80(iParam0) };
		Global_2450514 = { func_80(iParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_82()
{
	float fVar0;
	float fVar1;
	
	func_469();
	func_468();
	if (func_466())
	{
		func_380();
	}
	if (!func_7(unk_0x1329891157A54C63()))
	{
		if (func_371())
		{
			if (unk_0x236D8AD7EE179F46(iLocal_329, 6))
			{
				unk_0xC69E84EBBD7166E6(&iLocal_329, 6);
			}
			switch (Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_3)
			{
				case 0:
					if (Local_637.f_37 < 2)
					{
						if (Local_637.f_3 != -1)
						{
							func_370(1);
							func_369(1);
						}
					}
					else
					{
						func_369(2);
					}
					break;
				
				case 1:
					func_363(9);
					if (Local_3077.f_8 == 0)
					{
						Local_3077.f_8 = unk_0xC7224E4F41E00BE3();
					}
					if (Local_637.f_37 >= 2)
					{
						func_369(2);
						Local_3077.f_9 = unk_0xC7224E4F41E00BE3();
					}
					if (func_41())
					{
						func_363(0);
					}
					func_361((func_29() - func_362(&(Local_637.f_43), 0, 0)));
					func_358(func_360((func_29() - func_362(&(Local_637.f_43), 0, 0)), 0), func_359(Local_637.f_3));
					func_347(0, 0);
					func_338();
					func_321();
					if (func_320())
					{
						func_319();
					}
					break;
				
				case 2:
					if (Local_637.f_37 > 2)
					{
						func_370(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_318())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_303(133, fVar0, fVar1, 0, 0, 0, 0);
						func_302(Local_637.f_3, 1);
						func_301(23, 1);
						if (Local_3077.f_8 == 0)
						{
							Local_3077.f_8 = unk_0xC7224E4F41E00BE3();
						}
						if (Local_3077.f_9 == 0)
						{
							Local_3077.f_9 = unk_0xC7224E4F41E00BE3();
						}
						func_297();
						unk_0x78FC0556E1FBFA0F(1);
						if (func_318())
						{
							unk_0x5B6D37392F5991C3(0f);
							unk_0x9BAE0FF806E5C2E5(0);
						}
						if (Local_637.f_3 == 14)
						{
							func_296(&Local_348);
						}
						func_295();
						if (!func_7(unk_0x1329891157A54C63()))
						{
							func_50(62, "AMCH_STARTED", func_294(Local_637.f_3), func_54(), -1, func_54());
							if (func_291("AMCH_WARN", func_293(Local_637.f_3), func_292(Local_637.f_3)))
							{
								unk_0xB8BB626315D394F5(1);
							}
						}
						if (func_41())
						{
							func_276(678f, 794f, 206f, 8f, 0);
							func_276(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_276(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_369(3);
					}
					break;
				
				case 3:
					if (Local_637.f_37 > 3)
					{
						iLocal_331 = 0;
						func_369(4);
					}
					else
					{
						if (!unk_0x236D8AD7EE179F46(Local_637.f_2, 1))
						{
							func_242();
							func_239();
						}
						if (func_238(0) && !func_20(0))
						{
							func_237();
						}
					}
					if (func_318())
					{
						unk_0xF637D39758718565(unk_0x1329891157A54C63());
					}
					func_236();
					func_212();
					func_380();
					func_347(0, 1);
					func_338();
					func_321();
					func_363(2);
					func_363(5);
					func_363(7);
					break;
				
				case 4:
					if (func_204(&uLocal_340, !unk_0x236D8AD7EE179F46(Local_637.f_2, 0)) || unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
					{
						if (func_5(Local_637.f_3))
						{
							if (Local_637.f_37 == 5)
							{
								func_369(5);
							}
						}
						else
						{
							func_369(6);
						}
					}
					func_192();
					func_116();
					func_212();
					func_380();
					func_347(1, 1);
					func_295();
					break;
				
				case 5:
					if (Local_637.f_37 > 5)
					{
						func_369(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_111();
		}
	}
	else
	{
		func_111();
	}
	func_91();
	func_84();
	func_83();
}

void func_83()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_41())
	{
		Var0 = { Local_637.f_67[iLocal_347 /*2*/] };
		if (unk_0x250A8F68F67CA19A(Var0.f_1))
		{
			iVar2 = unk_0x1D1DAF7F94D5FE77(Var0.f_1);
			if (unk_0x4D2386673BCED434(iVar2))
			{
				if (!unk_0x7404950238A154C2(iVar2, 0))
				{
					unk_0xE0913C01F5C0CC3D(&iVar2);
				}
			}
		}
		iLocal_347++;
		if (iLocal_347 >= 10)
		{
			iLocal_347 = 0;
			iLocal_636 = iLocal_635;
			iLocal_635 = 0;
		}
	}
}

void func_84()
{
	if (Local_637.f_37 == 5)
	{
		if (unk_0x250A8F68F67CA19A(Local_637.f_67[iLocal_347 /*2*/].f_1))
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_347 /*2*/].f_1)))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_623, iLocal_347))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_623, iLocal_347);
					uLocal_624[iLocal_347] = unk_0xEDDCCC3D357A50F8();
					unk_0x058526005957A956(uLocal_624[iLocal_347], "Explosion_Countdown", unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_347 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xBAF887AF0EAEA412(uLocal_624[iLocal_347], "Time", 30f);
				}
				if ((30000 - func_362(&(Local_637.f_45), 0, 0)) >= 0)
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_347 /*2*/].f_1), 0))
					{
						func_363(1);
						iLocal_635 = 1;
					}
				}
				else if (unk_0x402F3F19221FF696(Local_637.f_67[iLocal_347 /*2*/].f_1))
				{
					unk_0xD24EA1F9FB501BB5(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_347 /*2*/].f_1));
					unk_0x893021E5A96D97BA(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iLocal_347 /*2*/].f_1), 1, 0, 0);
				}
			}
			else if (unk_0x236D8AD7EE179F46(iLocal_623, iLocal_347) && !unk_0xBDC7EB9D855C9610(uLocal_624[iLocal_347]))
			{
				unk_0x98A5E5B909F1B162(uLocal_624[iLocal_347]);
			}
		}
		if (iLocal_636)
		{
			if (!func_89(unk_0x1329891157A54C63()))
			{
				func_86(func_360((30000 - func_362(&(Local_637.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
				func_85();
			}
		}
	}
}

void func_85()
{
	Global_1336084.f_941 = 1;
}

void func_86(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_88(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_87(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_87(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_89(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_90())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

void func_91()
{
	if (((func_12(unk_0x1329891157A54C63(), 1, 1) && !func_7(unk_0x1329891157A54C63())) && !func_107(unk_0x1329891157A54C63())) && func_371())
	{
		if (Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_3 == 1)
		{
			func_104(func_106(Local_637.f_3), func_293(Local_637.f_3), 0);
		}
		else if (Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_3 == 3)
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_329, 10))
			{
				func_92(func_292(Local_637.f_3), 0);
			}
			else
			{
				func_92("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_295();
		}
	}
	else
	{
		func_295();
	}
}

void func_92(char* sParam0, bool bParam1)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (func_102(sParam0))
	{
		return;
	}
	func_96();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_95();
	func_94(bParam1);
	func_93();
}

void func_93()
{
	unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 1);
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_1312577.f_39), 0);
}

void func_95()
{
	Global_1312577.f_8 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 86400000);
	Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
}

void func_96()
{
	func_98();
	func_97(0);
}

void func_97(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xD74C7D8D2E5E43D2();
		Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_98()
{
	if (!func_101())
	{
	}
	if (func_100())
	{
		unk_0x10F61CB44B66BBDE(&(Global_1312577.f_10));
		func_99();
		unk_0x311B25F9901AB37A();
	}
}

void func_99()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			unk_0x6D55FF05D62B91BC(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_100()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

int func_101()
{
	if (!func_100())
	{
		return 0;
	}
	unk_0x35C3DC3A3BE08CC1(&(Global_1312577.f_10));
	func_99();
	return unk_0x8BF06EFC37AF94F0();
}

bool func_102(char* sParam0)
{
	if (!func_100())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_103(sParam0);
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
}

bool func_103(char* sParam0)
{
	if (!func_100())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

void func_104(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam1))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam1) > 23)
	{
		return;
	}
	if (func_105(sParam0, sParam1))
	{
		return;
	}
	func_96();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_95();
	func_94(bParam2);
	func_93();
}

bool func_105(char* sParam0, char* sParam1)
{
	if (!func_100())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam1))
	{
		return 0;
	}
	if (!unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam1) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

char* func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE())) || unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE())) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) || unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) || unk_0x193403916286AA4E(unk_0x81873881071CD9FE()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE())) || unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE())) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) || unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) || unk_0x193403916286AA4E(unk_0x81873881071CD9FE())) || unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
					iVar1 = unk_0x14B7103DBD149FFE(iVar0);
					if (unk_0xC5ABD699DDC9D5A0(iVar1) && unk_0xD382045D1EFD12D3(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_sniperrifle"), 0) && !unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_heavysniper"), 0)) && !unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE())) || unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE())) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) || unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) || unk_0x193403916286AA4E(unk_0x81873881071CD9FE()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_107(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		if ((func_110() && !func_109()) || func_108(unk_0x1329891157A54C63(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1573867.f_13)))
		{
			if (!func_1(&(Global_1573867.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1573867.f_13));
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9);
}

bool func_108(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

bool func_109()
{
	return Global_1312416.f_1;
}

bool func_110()
{
	return Global_1312416;
}

void func_111()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_329, 6))
	{
		unk_0x90312EB2231FB786();
		func_347(1, 1);
		unk_0x98A5E5B909F1B162(iLocal_337);
		unk_0xC69E84EBBD7166E6(&iLocal_329, 4);
		func_115();
		func_113();
		unk_0xF3148AAF69AF9CBC(&iLocal_329, 6);
		func_112();
	}
}

void func_112()
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/].f_6 = 0;
}

void func_113()
{
	if (Global_2408786.f_6 == unk_0x8F56512BDA9F6921())
	{
		func_114();
	}
}

void func_114()
{
	struct<25> Var0;
	
	if (unk_0x64AD45A6264810A8(Global_2408786.f_6))
	{
		if (!Global_2408786.f_6 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2408786 = { Var0 };
	Global_2408786.f_6 = -1;
}

void func_115()
{
	struct<4> Var0;
	
	if (Global_2404607.f_466.f_1 == unk_0x8F56512BDA9F6921())
	{
		Global_2404607.f_466 = { Var0 };
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1, 0))
	{
		if (func_7(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1), 0);
			return;
		}
		if (func_107(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1), 0);
			return;
		}
		func_175(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_3077.f_6 = (Local_3077.f_6 + iVar0);
			if (!Global_262145.f_9262)
			{
				func_174(10, Local_3077.f_6);
			}
			Global_2438858 = iVar0;
			if (func_173())
			{
				func_166(-1468524125, iVar0, &uVar6, 0, 1);
			}
			else
			{
				unk_0xFEF1B8BDBF81B2E4(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_3077.f_7 = (Local_3077.f_7 + iVar1);
			func_165();
			func_117(0, unk_0x81873881071CD9FE(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
		}
		unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1), 0);
	}
}

int func_117(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_118(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_118(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_128(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0xCF0C46D719D5302C(iParam1))
			{
				uVar1 = unk_0x8F1CCE5AF629C4D3(iParam1);
				func_124(unk_0xC91EFAB304EB7DE6(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_119(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_119(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_122(iParam0, 1) };
	if (iParam0 == func_121(unk_0x81873881071CD9FE()))
	{
		func_120(1);
	}
	func_124(Var0, iParam1, 0, sParam2);
}

void func_120(int iParam0)
{
	Global_2422670.f_1321 = iParam0;
}

int func_121(int iParam0)
{
	return iParam0;
}

Vector3 func_122(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_123(unk_0x81873881071CD9FE()) && unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
	{
		Var0 = { unk_0xB07F27EC3B05E4EA(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		fVar3 = unk_0x3306AAAFE3B25098(iParam0);
	}
	unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x957F1AE07A974C5E(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_123(int iParam0)
{
	return iParam0;
}

void func_124(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422670.f_740[iVar0 /*29*/].f_6 == 0 || Global_2422670.f_740[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422670.f_740[iVar1 /*29*/] = { Param0 };
			Global_2422670.f_740[iVar1 /*29*/].f_6 = 1;
			Global_2422670.f_740[iVar1 /*29*/].f_4 = func_127(Global_2422670.f_740[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422670.f_740[iVar1 /*29*/].f_7 = unk_0xD74C7D8D2E5E43D2();
			Global_2422670.f_740[iVar1 /*29*/].f_3 = iParam3;
			Global_2422670.f_740[iVar1 /*29*/].f_8 = iParam4;
			Global_2422670.f_740[iVar1 /*29*/].f_9 = func_126();
			Global_2422670.f_740[iVar1 /*29*/].f_10 = func_125();
			StringCopy(&(Global_2422670.f_740[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_125()
{
	if (Global_2422670.f_1321)
	{
		Global_2422670.f_1321 = 0;
		return 1;
	}
	Global_2422670.f_1321 = 0;
	return 0;
}

var func_126()
{
	var uVar0;
	
	uVar0 = Global_2422670.f_1323;
	Global_2422670.f_1323 = 1;
	return uVar0;
}

float func_127(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0D6E79537424BACE(unk_0xF37444D33840484C(), Param0, 1);
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

var func_128(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_129(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_129(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_164(unk_0x1329891157A54C63()) || func_163(unk_0x1329891157A54C63()))
	{
		if (Global_262145.f_7419 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7419;
		}
	}
	else if (Global_262145.f_5001 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5001;
	}
	if (func_162(uParam2))
	{
	}
	if (func_161())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_159(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_158(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_156(0, &iVar1);
					break;
				
				case 3:
					func_156(1, &iVar1);
					break;
				
				case 1:
					func_153(&iVar1);
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
			func_150(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_139((func_149(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_150(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_134(iVar1);
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
				func_130((func_132(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_130((func_132(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_130(int iParam0)
{
	if (func_161())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_131(joaat("mpply_globalxp"), iParam0);
	}
}

void func_131(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
}

int func_132(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_133(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_133(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_80(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_137(func_138(&Var0));
			if (iVar13 == 0)
			{
				func_136(&Global_1343557, iParam0);
				func_135(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_136(&Global_1343558, iParam0);
				func_135(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_136(&Global_1343559, iParam0);
				func_135(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_136(&Global_1343560, iParam0);
				func_135(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_136(&Global_1343561, iParam0);
				func_135(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_135(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_137(int iParam0)
{
	if (iParam0 == Global_1343552)
	{
		return 0;
	}
	else if (iParam0 == Global_1343553)
	{
		return 1;
	}
	else if (iParam0 == Global_1343554)
	{
		return 2;
	}
	else if (iParam0 == Global_1343555)
	{
		return 3;
	}
	else if (iParam0 == Global_1343556)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_138(var uParam0)
{
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(uParam0))
		{
			return Global_2436916;
		}
	}
	return Global_2436916;
}

void func_139(int iParam0, int iParam1, int iParam2)
{
	if (func_161())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_148(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_148(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_147(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_145(iParam0, 1);
		}
		func_144(629, iParam0, -1, 1);
		func_143(630, func_145(iParam0, 1), -1, 1);
		Global_1343672[func_148(-1)] = iParam0;
		func_140(7, 0);
	}
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_142(iParam0, iParam1))
	{
		iVar0 = func_141();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_142(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_148(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_148(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_148(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_148(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_148(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_148(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_148(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_148(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_148(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_148(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_148(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_148(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_148(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_148(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_148(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_148(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_148(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_148(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_148(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_148(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_148(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_146(iParam0, 0);
}

int func_146(int iParam0, int iParam1)
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
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
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

int func_147(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
	}
	return 1;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_149(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_148(-1)];
			}
			else if (func_147(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_148(-1)];
	}
	return 0;
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_152(iParam0, func_148(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_151(iParam0))
	{
		func_143(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_144(iParam0, iVar0, iParam2, 1);
	}
}

int func_151(int iParam0)
{
	if (Global_1343551)
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
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_148(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		iVar4 = unk_0xC3904F8771F37B7F(iVar0);
		if (unk_0xC4FEBC724D547D78(iVar4))
		{
			iVar5 = unk_0x29A638E7EEEE6B16(iVar4);
			if (unk_0xCCFDB2B968281FE8(iVar5) != -1)
			{
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_155(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_81(unk_0x1329891157A54C63(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_154(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_154(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_154(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_155(int iParam0, int iParam1, int iParam2)
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
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_156(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x945535897333587B())
		{
			iVar3 = iVar0;
			if (unk_0xC4FEBC724D547D78(iVar3))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_81(unk_0x1329891157A54C63(), iVar4))
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
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_157(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(unk_0x1329891157A54C63(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_154(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_154(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_157(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_154(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_159(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x013F97B9D88B92CA(iParam0) > func_149(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_149(unk_0x1329891157A54C63());
		}
	}
	if (func_160(8000, 0, 0) > 0)
	{
		if (func_160(8000, 0, 0) < (iParam0 + func_149(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_160(8000, 0, 0) - func_149(unk_0x1329891157A54C63()));
		}
	}
	return iParam0;
}

int func_160(int iParam0, bool bParam1, int iParam2)
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
	return Global_272182[iParam0];
}

int func_161()
{
	return 1;
}

int func_162(var uParam0)
{
	if (unk_0x4357449749A521B1(uParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5(uParam0, "") || unk_0xD994929E13CC1ED5(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_163(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_164(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

void func_165()
{
	Global_2438030 = 1;
}

void func_166(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_173())
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
			if (iParam1 > 0)
			{
				func_167(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_167(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_173())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_16()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_172(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_171(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_168(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_168(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_169(iParam0);
	}
}

void func_169(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_173())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_170(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_170(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_171(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_172(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_173())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_173()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_174(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2451473.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4951)
		{
			iParam1 = Global_262145.f_4951;
		}
		Global_2451473.f_270 = iParam1;
		Global_2451473.f_271 = 0;
	}
}

void func_175(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_17(unk_0x519AAFF77CC141DF(), 1))
	{
		iVar0 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_637.f_1 - iLocal_327)) / 60f) / 1000f));
		if (iVar0 > Global_262145.f_9203)
		{
			iVar0 = Global_262145.f_9203;
		}
		else if (iVar0 < 1)
		{
			iVar0 = 1;
		}
		*uParam0 = (func_191() * iVar0);
		*uParam1 = (func_190() * iVar0);
		fVar1 = func_189();
		if (fVar1 > 0f && !unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
		{
			iVar2 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar2 > func_188())
			{
				iVar2 = func_188();
			}
			iVar3 = Local_637.f_51;
			if (iVar3 > func_187())
			{
				iVar3 = func_187();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_180(func_186(), func_185(), iVar2, fVar1, func_184(), func_183(), func_182(), iVar3)) * Global_262145.f_9216)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_180(func_179(), func_178(), iVar2, fVar1, func_184(), func_183(), func_182(), iVar3)) * Global_262145.f_9217)));
		}
		else
		{
			func_176(1);
		}
	}
	else
	{
		func_176(0);
	}
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		if (func_177(1))
		{
			unk_0xF3148AAF69AF9CBC(&Global_1573891, 1);
		}
	}
	else if (func_177(2))
	{
		unk_0xF3148AAF69AF9CBC(&Global_1573891, 2);
	}
}

int func_177(int iParam0)
{
	var uVar0;
	
	uVar0 = func_152(2506, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x236D8AD7EE179F46(uVar0, 0) && unk_0x236D8AD7EE179F46(iVar0, 1)) && unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 3) && unk_0x236D8AD7EE179F46(iVar0, 4)) && unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 6) && unk_0x236D8AD7EE179F46(iVar0, 7)) && unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 9) && unk_0x236D8AD7EE179F46(iVar0, 10)) && unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_178()
{
	return Global_262145.f_8704;
}

int func_179()
{
	return Global_262145.f_8702;
}

int func_180(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_181(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_181(int iParam0, int iParam1, int iParam2)
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

float func_182()
{
	return Global_262145.f_8707;
}

float func_183()
{
	return Global_262145.f_8706;
}

float func_184()
{
	return Global_262145.f_8705;
}

int func_185()
{
	return Global_262145.f_8703;
}

int func_186()
{
	return Global_262145.f_8701;
}

int func_187()
{
	return Global_262145.f_9109;
}

int func_188()
{
	return Global_262145.f_9108;
}

var func_189()
{
	if (func_20(0))
	{
		return Global_262145.f_8728;
	}
	if (func_20(1))
	{
		return Global_262145.f_8729;
	}
	if (func_20(2))
	{
		return Global_262145.f_8730;
	}
	return Global_262145.f_8731;
}

int func_190()
{
	return Global_262145.f_8700;
}

int func_191()
{
	return Global_262145.f_8699;
}

void func_192()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (!unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1, 1) && (func_203() || unk_0x236D8AD7EE179F46(Local_637.f_2, 0)))
	{
		func_202();
		if (func_12(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
			{
				if (func_238(0))
				{
					iVar2 = Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4;
					func_198(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_196(63, func_197(Local_637.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_293(Local_637.f_3), 1, 2);
						}
						else if (func_195())
						{
							func_196(68, func_197(Local_637.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_293(Local_637.f_3), 1, 2);
						}
						else
						{
							func_196(63, func_197(Local_637.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_293(Local_637.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_196(66, func_197(Local_637.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_293(Local_637.f_3), 1, 2);
						}
						else if (func_195())
						{
							func_196(74, func_197(Local_637.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_637.f_3), 1, 2);
						}
						else
						{
							func_196(66, func_197(Local_637.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_637.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_196(66, func_197(Local_637.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_293(Local_637.f_3), 1, 2);
						}
						else if (func_195())
						{
							func_196(74, func_197(Local_637.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_637.f_3), 1, 2);
						}
						else
						{
							func_196(66, func_197(Local_637.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_637.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0xC3904F8771F37B7F(Local_637.f_4[0]);
						if (unk_0xC4FEBC724D547D78(uVar3))
						{
							iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
							if (Local_2724[Local_637.f_4[0] /*11*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2724[Local_637.f_4[0] /*11*/].f_4;
							func_198(&iVar0, &fVar1, iVar2, 1);
							if (func_18())
							{
								func_194(75, func_58(), func_197(Local_637.f_3, 0, 0, 0), "AMCH_LOSE", "AMCH_OVER", 15000, func_293(Local_637.f_3), -1, fVar1, 1, 2, unk_0xB67DF8F35744CF60(iVar4));
							}
							else if (func_195())
							{
								func_194(76, func_58(), func_197(Local_637.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_293(Local_637.f_3), iVar0, -1082130432, 1, 2, unk_0xB67DF8F35744CF60(iVar4));
							}
							else
							{
								func_194(75, func_58(), func_197(Local_637.f_3, 0, 0, iVar0), "AMCH_LOSE", "AMCH_OVER", 15000, func_293(Local_637.f_3), iVar0, -1082130432, 1, 2, unk_0xB67DF8F35744CF60(iVar4));
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
			unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1), 1);
			func_193(133);
		}
	}
}

void func_193(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_194(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_57(iParam0, &Var0, iParam7, sParam3, sParam4);
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

int func_195()
{
	return 0;
}

int func_196(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_57(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_55), sParam1, 16);
	StringCopy(&(Var0.f_59), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_65 = iParam8;
	Var0.f_66 = iParam9;
	return func_51(&Var0);
}

char* func_197(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x32D4891AD2E2D140())
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
			if (unk_0x32D4891AD2E2D140())
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

int func_198(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_199(Local_637.f_3, iParam2) / 10f);
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

float func_199(int iParam0, int iParam1)
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
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_201(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_200(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_200(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_201(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_202()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 != 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_203()
{
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 25);
}

int func_204(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (*uParam0 > 0 && !func_211())
	{
		func_210();
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
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 25);
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_209(uParam0, 1);
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
				func_206();
				func_209(uParam0, 2);
			}
			break;
		
		case 2:
			func_206();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_205("AMEV_LBD_HELP"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				func_209(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
				func_209(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
			return 1;
	}
	return 0;
}

bool func_205(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_206()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_12(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0x29AFA2493D7C23D0())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 1);
			func_208("AMEV_LBD_HELP", -1);
			func_207(1);
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 0);
		}
	}
}

void func_207(int iParam0)
{
	unk_0x1F14EC098854F746(3, 21, 200, 0, 0);
	if (iParam0 && !func_211())
	{
		unk_0x35D7948F61AA3FEC(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_208(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam1);
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_210()
{
	Global_2438031 = 1;
}

bool func_211()
{
	return Global_2422670.f_2137[0 /*70*/].f_1 != 0;
}

void func_212()
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
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	
	if (Local_637.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_235() && !func_89(unk_0x1329891157A54C63()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_58();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_637.f_4[iVar16] > -1)
			{
				uVar26 = unk_0xC3904F8771F37B7F(Local_637.f_4[iVar16]);
				if (unk_0xC4FEBC724D547D78(uVar26))
				{
					iVar4 = unk_0x29A638E7EEEE6B16(iVar26);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2724[Local_637.f_4[iVar16] /*11*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_198(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2724[Local_637.f_4[iVar16] /*11*/].f_4, 1);
								iVar24++;
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x519AAFF77CC141DF();
		if (func_89(unk_0x1329891157A54C63()))
		{
			uVar27 = func_232();
			iVar28 = unk_0x1B503E81E3B3D65F(uVar27);
			if (unk_0xA89AE5060232966A(iVar28))
			{
				iVar29 = unk_0x563980A76107BC80(iVar28);
				if (unk_0xC4FEBC724D547D78(iVar29))
				{
					iVar17 = iVar29;
				}
			}
		}
		func_198(&iVar13, &fVar18, iLocal_331, 1);
		func_198(&iVar14, &fVar19, Local_2724[iVar17 /*11*/].f_4, 1);
		iVar30 = func_28(0);
		iVar31 = func_362(&(Local_637.f_39), 0, 0);
		iVar15 = func_360(0, (iVar30 - iVar31));
		if (func_17(-1, 0))
		{
			func_231(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0x236D8AD7EE179F46(iLocal_329, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_235() || Local_637.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_637.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_227(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_197(Local_637.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_228(), iVar25);
		}
		else if (func_195())
		{
			func_226(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_228(), iVar25);
		}
		else
		{
			func_217(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_197(Local_637.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_228(), iVar25);
		}
		func_213();
	}
}

void func_213()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_216();
	if (fVar0 >= 0f)
	{
		if (Local_637.f_37 == 3)
		{
			if (func_12(unk_0x1329891157A54C63(), 1, 1))
			{
				if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()) || unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					iVar1 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iVar1, 0))
					{
						func_215(iVar1, &fLocal_335);
						fVar2 = (fVar0 + fLocal_335);
						unk_0xEFC0B8BE1535B071(fVar2, 1);
						func_214(fVar0);
						return;
					}
				}
			}
		}
		if (func_205("AMCH_FLYLOW"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		if (unk_0x236D8AD7EE179F46(iLocal_329, 4))
		{
			unk_0x98A5E5B909F1B162(iLocal_337);
			unk_0xC69E84EBBD7166E6(&iLocal_329, 4);
		}
		unk_0xEFC0B8BE1535B071(0f, 0);
	}
}

void func_214(float fParam0)
{
	float fVar0;
	
	if (unk_0x592B50FFDB8A1F75(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_363(6);
			if (!unk_0x236D8AD7EE179F46(iLocal_329, 4))
			{
				unk_0x35D7948F61AA3FEC(iLocal_337, "Altitude_Warning", "EXILE_1", 1);
				unk_0xF3148AAF69AF9CBC(&iLocal_329, 4);
			}
		}
		else
		{
			if (func_205("AMCH_FLYLOW"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			if (unk_0x236D8AD7EE179F46(iLocal_329, 4))
			{
				unk_0x98A5E5B909F1B162(iLocal_337);
				unk_0xC69E84EBBD7166E6(&iLocal_329, 4);
			}
		}
	}
}

float func_215(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	unk_0x84426D0C9AE7A434(Var1, uParam1, 1);
	unk_0x84426D0C9AE7A434(Var1, &uVar4, 0);
	if (unk_0xF9F2922717B819EC())
	{
		func_363(3);
		unk_0xF3148AAF69AF9CBC(&iLocal_329, 10);
		func_27(&uLocal_325, 0, 0);
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_329, 10))
	{
		if (func_1(&uLocal_325, 2000, 0))
		{
			unk_0xC69E84EBBD7166E6(&iLocal_329, 10);
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

float func_216()
{
	switch (Local_637.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_223(0) == 0)
	{
		return;
	}
	func_222();
	iVar1 = 0;
	if (((Global_2437628[0] != iParam0 || Global_2437628[1] != iParam1) || Global_2437628[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2437628[0] = iParam0;
	Global_2437628[1] = iParam1;
	Global_2437628[2] = iParam2;
	Global_2437628[3] = 0;
	Global_2437628[4] = 0;
	if (Global_2437628[0] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[0]);
			Global_2437634[0 /*16*/] = { func_221(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_218(iParam3, &(Global_2437634[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[1] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[1]);
			Global_2437634[1 /*16*/] = { func_221(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_218(iParam4, &(Global_2437634[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[2] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[2]);
			Global_2437634[2 /*16*/] = { func_221(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_218(iParam5, &(Global_2437634[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	if (bParam12)
	{
		func_218(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x1329891157A54C63() != func_58())
			{
				if (func_107(unk_0x1329891157A54C63()) == 0)
				{
					func_218(iParam7, unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_107(unk_0x1329891157A54C63()) == 0)
			{
				func_218(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_107(unk_0x1329891157A54C63()) == 0)
			{
				func_218(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_162(sParam14))
	{
		sVar2 = sParam14;
	}
	func_86(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0);
	*iParam10 = 0;
	func_85();
}

void func_218(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_88(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_87(6, iVar0);
		Global_1336084.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3370.f_183[iVar0] = iParam3;
		Global_1336084.f_3370.f_172[iVar0] = iParam2;
		Global_1336084.f_3370.f_260[iVar0] = iParam4;
		Global_1336084.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_3370.f_443[iVar0] = iParam7;
		Global_1336084.f_3370.f_454[iVar0] = fParam8;
		Global_1336084.f_3370.f_497[iVar0] = iParam9;
		Global_1336084.f_3370.f_508[iVar0] = iParam10;
		Global_1336084.f_3370.f_205[iVar0] = iParam11;
		Global_1336084.f_3370.f_216[iVar0] = iParam12;
		Global_1336084.f_3370.f_227[iVar0] = iParam13;
		Global_1336084.f_3370.f_238[iVar0] = iParam14;
		Global_1336084.f_3370.f_249[iVar0] = iParam15;
		Global_1336084.f_3370.f_519[iVar0] = iParam16;
		Global_1336084.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_220())
		{
			Global_1336084.f_941 = 1;
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			iVar2 = 0;
			unk_0x510185F6AA2AE89F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1336084.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1336084.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1336084.f_941 = 1;
			}
			if (func_219())
			{
				Global_1336084.f_945 = 1;
			}
		}
	}
}

int func_219()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x510185F6AA2AE89F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_220()
{
	if ((unk_0x45EDE682E0EE8FDF() == 8 || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_221(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_222()
{
	unk_0xC9A352663D97EFC3(8);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(6);
	unk_0xC9A352663D97EFC3(7);
	Global_2438034 = 1;
}

int func_223(bool bParam0)
{
	if (func_225())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x1329891157A54C63(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_224()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

bool func_225()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 12);
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_223(0) == 0)
	{
		return;
	}
	func_222();
	iVar1 = 0;
	if (((Global_2437628[0] != iParam0 || Global_2437628[1] != iParam1) || Global_2437628[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2437628[0] = iParam0;
	Global_2437628[1] = iParam1;
	Global_2437628[2] = iParam2;
	Global_2437628[3] = 0;
	Global_2437628[4] = 0;
	if (Global_2437628[0] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[0]);
			Global_2437634[0 /*16*/] = { func_221(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_86(iParam3, &(Global_2437634[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0);
		}
	}
	if (Global_2437628[1] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[1]);
			Global_2437634[1 /*16*/] = { func_221(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_86(iParam4, &(Global_2437634[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0);
		}
	}
	if (Global_2437628[2] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[2]);
			Global_2437634[2 /*16*/] = { func_221(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_86(iParam5, &(Global_2437634[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0);
		}
	}
	if (bParam11)
	{
		func_86(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x1329891157A54C63() != func_58())
			{
				if (func_107(unk_0x1329891157A54C63()) == 0)
				{
					func_86(iParam7, unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_107(unk_0x1329891157A54C63()) == 0)
			{
				func_86(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_107(unk_0x1329891157A54C63()) == 0)
			{
				func_86(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0);
			}
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_162(sParam13))
	{
		sVar2 = sParam13;
	}
	func_86(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0);
	*iParam9 = 0;
	func_85();
}

void func_227(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_223(0) == 0)
	{
		return;
	}
	func_222();
	iVar1 = 0;
	if (((Global_2437628[0] != iParam0 || Global_2437628[1] != iParam1) || Global_2437628[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2437628[0] = iParam0;
	Global_2437628[1] = iParam1;
	Global_2437628[2] = iParam2;
	Global_2437628[3] = 0;
	Global_2437628[4] = 0;
	if (Global_2437628[0] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[0]);
			Global_2437634[0 /*16*/] = { func_221(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_218(-1, &(Global_2437634[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[1] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[1]);
			Global_2437634[1 /*16*/] = { func_221(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_218(-1, &(Global_2437634[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[2] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[2]);
			Global_2437634[2 /*16*/] = { func_221(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_218(-1, &(Global_2437634[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	if (bParam12)
	{
		func_218(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x1329891157A54C63() != func_58())
			{
				if (func_107(unk_0x1329891157A54C63()) == 0)
				{
					func_218(-1, unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_107(unk_0x1329891157A54C63()) == 0)
			{
				func_218(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_107(unk_0x1329891157A54C63()) == 0)
			{
				func_218(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_162(sParam14))
	{
		sVar2 = sParam14;
	}
	func_86(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0);
	*iParam10 = 0;
	func_85();
}

char* func_228()
{
	return "HUD_COUNTDOWN";
	switch (func_230(unk_0x1329891157A54C63()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_229())
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

int func_229()
{
	if (func_230(unk_0x1329891157A54C63()) == 133)
	{
		return Global_2451473.f_4624;
	}
	return -1;
}

int func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/];
	}
	return -1;
}

void func_231(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
			{
				unk_0xE3131684E8191AA9(&(Global_2451473.f_4542));
			}
			unk_0x094B864326B5FE96(1);
			unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
			unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
			Global_2451473.f_4540 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					if (unk_0x0C66FFD2F3913C49())
					{
						if ((!unk_0xD994929E13CC1ED5(unk_0x41899D9898B4EEE4(unk_0x2595B211F055F9FB()), "OFF") && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && !unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
						{
							StringCopy(&(Global_2451473.f_4542), "", 32);
							unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
							unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
							unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
							unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
							unk_0x094B864326B5FE96(1);
							unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
						}
					}
				}
				else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 5))
				{
					unk_0xE3131684E8191AA9("OFF");
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_30S");
				}
				unk_0xF2A6D4C99549CA85("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x71994BFA37D418F5() != 0)
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x75D6577FC39B6697())
						{
							StringCopy(&(Global_2451473.f_4542), unk_0x85C45E5EB4792D9B(), 32);
							unk_0xE3131684E8191AA9("OFF");
						}
						unk_0x094B864326B5FE96(1);
						unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 3))
				{
					Global_2451473.f_4550 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(Global_2451473.f_4550, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
			{
				Global_2451473.f_4540 = 0;
				Global_2451473.f_4550 = -1;
				unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
				unk_0x094B864326B5FE96(0);
				unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
				unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
				unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
				unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			Global_2451473.f_4540 = 0;
			Global_2451473.f_4550 = -1;
			unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
			unk_0x094B864326B5FE96(0);
			unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
			}
		}
	}
}

var func_232()
{
	if (unk_0x86CCCD2FAE9D5E65(func_234()))
	{
		return func_234();
	}
	return func_233();
}

var func_233()
{
	return Global_2359301.f_2;
}

var func_234()
{
	return Global_2359301.f_3;
}

int func_235()
{
	switch (Local_637.f_3)
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

void func_236()
{
	int iVar0;
	struct<46> Var1;
	int iVar47;
	var uVar48;
	
	Var1 = -1;
	Var1.f_21 = -1082130432;
	Var1.f_22 = 3;
	Var1.f_45 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		Local_725.f_526[iVar0 /*46*/] = { Var1 };
		Local_725.f_526[iVar0 /*46*/].f_1 = func_58();
		if (Local_637.f_4[iVar0] > -1)
		{
			uVar48 = unk_0xC3904F8771F37B7F(Local_637.f_4[iVar0]);
			if (unk_0xC4FEBC724D547D78(uVar48))
			{
				iVar47 = unk_0x29A638E7EEEE6B16(iVar48);
				if (!func_14(iVar47, 0))
				{
					Local_725.f_526[iVar0 /*46*/] = Local_637.f_4[iVar0];
					Local_725.f_526[iVar0 /*46*/].f_1 = iVar47;
					Local_725.f_526[iVar0 /*46*/].f_8 = Local_2724[Local_637.f_4[iVar0] /*11*/].f_4;
					Local_725.f_526[iVar0 /*46*/].f_29 = -1;
					Local_725.f_1.f_107 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_237()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 19);
}

int func_238(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_637.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2724[iVar0 /*11*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_239()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	func_198(&iVar1, &fVar2, iLocal_331, 1);
	switch (Local_637.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_241(sVar0, fVar2 >= 70f);
			if (unk_0x12F24A1A22BF90A7(sVar0))
			{
				fVar2 = func_240(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xE545AD5FACF90B21(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x15D1187047D93DFB();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_241(sVar0, bVar3);
			if (unk_0x12F24A1A22BF90A7(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_240(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_240(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xE545AD5FACF90B21(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_336 != iLocal_331)
			{
				if (iLocal_331 > 0)
				{
					unk_0x35D7948F61AA3FEC(iVar5, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0xBAF887AF0EAEA412(iVar5, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0x35D7948F61AA3FEC(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_336 = iLocal_331;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_329, 3))
		{
			unk_0x35D7948F61AA3FEC(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0xF3148AAF69AF9CBC(&iLocal_329, 3);
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_329, 3))
	{
		unk_0x35D7948F61AA3FEC(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0xC69E84EBBD7166E6(&iLocal_329, 3);
	}
}

float func_240(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_241(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x12F24A1A22BF90A7(sParam0))
		{
			unk_0xF2A6D4C99549CA85(sParam0);
		}
	}
	else if (unk_0x12F24A1A22BF90A7(sParam0))
	{
		unk_0x0C22E352114F699C(sParam0);
	}
}

void func_242()
{
	int iVar0;
	
	if ((!func_107(unk_0x1329891157A54C63()) && !func_14(unk_0x1329891157A54C63(), 0)) && func_12(unk_0x1329891157A54C63(), 1, 1))
	{
		iVar0 = func_260();
		if (iVar0 != Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4)
		{
			if (func_21(iVar0, iLocal_328) || func_259(iVar0, iLocal_328))
			{
				if (!func_258() || func_1(&uLocal_317, 1000, 0))
				{
					func_27(&uLocal_317, 0, 0);
					iLocal_328 = iVar0;
					Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4 = iVar0;
					func_245();
					if (iLocal_327 == 0)
					{
						iLocal_327 = unk_0xD74C7D8D2E5E43D2();
					}
					if (Local_3077.f_11 == 0)
					{
						Local_3077.f_11 = unk_0xC7224E4F41E00BE3();
					}
				}
			}
		}
		iLocal_331 = func_243();
	}
}

int func_243()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_637.f_3)
	{
		case 0:
			fVar1 = unk_0x3750B63176B658A5();
			break;
		
		case 1:
			fVar1 = unk_0x10774FB8AF52EE04();
			break;
		
		case 2:
			fVar1 = unk_0x15D1187047D93DFB();
			break;
		
		case 3:
			fVar1 = unk_0x06FF5F65A8838481();
			break;
		
		case 4:
			fVar1 = unk_0x85BFB9799319DFF8();
			break;
		
		case 5:
			fVar1 = unk_0x7894B3E14F0E13AA();
			break;
		
		case 8:
			iVar0 = unk_0x19533923A08E1521();
			break;
		
		case 9:
			fVar1 = unk_0x0A1BC8B851D92FEA();
			break;
		
		case 11:
			fVar1 = unk_0x91B9BBB40FEF1635();
			break;
		
		case 12:
			fVar1 = unk_0x91B9BBB40FEF1635();
			break;
		
		case 13:
			fVar1 = unk_0xA9EF3E46F32353AF();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x013F97B9D88B92CA(iVar0);
	func_244(&iVar2);
	if (iVar2 == iLocal_330)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_329, 1))
			{
				func_27(&uLocal_319, 0, 0);
				Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4.f_1 = func_362(&uLocal_319, 0, 0);
				unk_0xF3148AAF69AF9CBC(&iLocal_329, 1);
			}
			else if ((func_362(&uLocal_319, 0, 0) % 1000) == 0)
			{
				Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4.f_1 = func_362(&uLocal_319, 0, 0);
			}
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&iLocal_329, 1);
	}
	if ((func_21(iLocal_330, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_321, 2000, 0))
	{
		iVar2 = iLocal_330;
		unk_0xF3148AAF69AF9CBC(&iLocal_329, 2);
	}
	else
	{
		iLocal_330 = iVar2;
		func_44(&uLocal_321);
		unk_0xC69E84EBBD7166E6(&iLocal_329, 2);
	}
	return iVar2;
}

void func_244(int iParam0)
{
	switch (Local_637.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x1329891157A54C63(), 1, 1))
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((((unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()) || unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE())) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) || unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) || unk_0x193403916286AA4E(unk_0x81873881071CD9FE()))
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

void func_245()
{
	if (!unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1, 2))
	{
		unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_1), 2);
		func_246(1);
	}
}

void func_246(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_110())
		{
			func_251(0);
			func_250();
		}
		if (func_249(0))
		{
			uVar0 = func_152(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, 0);
			func_250();
		}
		if (func_249(func_248(func_230(unk_0x1329891157A54C63()))))
		{
			uVar0 = func_152(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, func_248(func_230(unk_0x1329891157A54C63())));
			func_250();
		}
		if (func_247())
		{
			func_250();
		}
		if (func_230(unk_0x1329891157A54C63()) > -1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
	}
}

int func_247()
{
	if (Global_2422670.f_614.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_248(int iParam0)
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

bool func_249(int iParam0)
{
	var uVar0;
	
	uVar0 = func_152(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

void func_250()
{
	if (func_247())
	{
		Global_2422670.f_614.f_16 = 1;
	}
}

void func_251(int iParam0)
{
	if (func_110())
	{
		if (iParam0 == 1)
		{
			if (Global_2451473.f_4237 == -1)
			{
				Global_2451473.f_4237 = 60000;
			}
			func_27(&(Global_2451473.f_4235), 0, 0);
			if (Global_2451473.f_4240 == -1)
			{
				Global_2451473.f_4240 = 10000;
			}
			func_27(&(Global_2451473.f_4238), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_257();
		}
		if ((!unk_0x726DA50057167075() && !func_256()) && !func_252(unk_0x1329891157A54C63()))
		{
			Global_975760 = 0;
		}
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_7 = 0;
	}
}

int func_252(int iParam0)
{
	if (func_253(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_254(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_254(int iParam0)
{
	return func_255(iParam0);
}

bool func_255(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_256()
{
	return Global_2428865.f_712;
}

void func_257()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_110())
		{
			if (func_12(unk_0x1329891157A54C63(), 1, 0))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 0);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 0);
			}
			unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 1f);
			unk_0xD547C5EA6ACA33EA(0);
			unk_0x96BED0459085F7E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xC1A3EEFD7C446E1D(0);
			}
		}
		else
		{
			if (func_12(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 0);
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 1);
				unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC1A3EEFD7C446E1D(1);
				}
			}
			unk_0xD547C5EA6ACA33EA(1);
			unk_0x96BED0459085F7E9(0);
		}
	}
}

int func_258()
{
	switch (Local_637.f_3)
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

int func_259(int iParam0, int iParam1)
{
	if (Local_637.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_260()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_275())
	{
		if (Local_637.f_3 == 14)
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_274(unk_0x81873881071CD9FE(), 0) == -1)
			{
				iVar2 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
				if ((!func_273(&iVar2, 0) || unk_0x14B7103DBD149FFE(iVar2) != joaat("dodo")) && unk_0x0752B24E8A13FF0E(iVar2))
				{
					func_266(0, 1, 0);
					if (func_265())
					{
						iVar3 = func_264();
						if (iVar3 >= 0)
						{
							if (!unk_0x236D8AD7EE179F46(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_7[func_263(iVar3)], func_262(iVar3)))
							{
								iLocal_332++;
								unk_0xF3148AAF69AF9CBC(&(Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_7[func_263(iVar3)]), func_262(iVar3));
							}
						}
					}
					iVar0 = iLocal_332;
				}
			}
		}
		else
		{
			iVar0 = func_261();
		}
	}
	else
	{
		unk_0x7F490C48299343E8(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x013F97B9D88B92CA(iVar0);
}

int func_261()
{
	switch (Local_637.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return func_152(137, -1, 0);
		
		default:
	}
	return -1;
}

int func_262(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_263(iParam0) * 31);
}

int func_263(int iParam0)
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

int func_264()
{
	return iLocal_94;
}

int func_265()
{
	if (iLocal_101 == 1)
	{
		iLocal_101 = 0;
		return 1;
	}
	return 0;
}

void func_266(int iParam0, bool bParam1, int iParam2)
{
	func_268(iParam0, iParam2);
	if (bParam1)
	{
		if (Local_302.f_2 < Local_305.f_2)
		{
			Local_302.f_2 = 0f;
		}
		else
		{
			Local_305.f_2 = 0f;
		}
		if (Local_308.f_2 < Local_311.f_2)
		{
			Local_308.f_2 = 0f;
		}
		else
		{
			Local_311.f_2 = 0f;
		}
	}
	switch (iLocal_95)
	{
		case 0:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Local_105[iLocal_94 /*3*/]) < fLocal_301)
				{
					if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
					{
						if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
						{
							if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0))
							{
								bLocal_96 = true;
								iLocal_95 = 1;
							}
							if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
							{
								bLocal_97 = true;
								iLocal_95 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (!unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()) && !unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					func_267();
				}
				else if (!unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
				{
					func_267();
				}
				else if (!unk_0x0752B24E8A13FF0E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) && !bParam1)
				{
					func_267();
				}
				if (bLocal_96)
				{
					if (iLocal_100)
					{
						if (iLocal_99)
						{
							if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
							{
								func_267();
								iLocal_101 = 1;
							}
						}
						else if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
						{
							iLocal_99 = 1;
						}
						else if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
						{
							func_267();
						}
					}
					else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
					{
						iLocal_100 = 1;
					}
					else if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
					{
						func_267();
					}
				}
				else if (bLocal_97)
				{
					if (iLocal_100)
					{
						if (iLocal_98)
						{
							if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
							{
								func_267();
								iLocal_101 = 1;
							}
						}
						else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
						{
							iLocal_98 = 1;
						}
						else if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
						{
							func_267();
						}
					}
					else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
					{
						iLocal_100 = 1;
					}
					else if (!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_302, Local_305, fLocal_314, 0, 1, 0) && !unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_308, Local_311, fLocal_314, 0, 1, 0))
					{
						func_267();
					}
				}
			}
			break;
	}
}

void func_267()
{
	bLocal_96 = false;
	bLocal_97 = false;
	iLocal_98 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_95 = 0;
}

void func_268(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_102 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_272(iVar0)) && (uParam1 || !func_271(iVar0)))
		{
			if (func_270(Local_102, Local_105[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_102, Local_105[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_94 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_269(iLocal_94);
}

void func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_302 = { 1103.014f, -233.0374f, 56.13004f };
			Local_305 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_314 = 30f;
			Local_308 = { 1093.589f, -248.5926f, 56.88639f };
			Local_311 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_302 = { 1044.182f, -324.5904f, 49.33408f };
			Local_305 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_314 = 30f;
			Local_308 = { 1007.983f, -320.6159f, 48.4543f };
			Local_311 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_302 = { 916.599f, -419.8782f, 35.62748f };
			Local_305 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_314 = 7f;
			Local_308 = { 912.1362f, -420.5161f, 35.38034f };
			Local_311 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_302 = { 757.7189f, -472.924f, 19.2535f };
			Local_305 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_314 = 20.75f;
			Local_308 = { 744.9114f, -480.7373f, 19.06514f };
			Local_311 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_302 = { 680.3677f, -581.1792f, 14.2145f };
			Local_305 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_314 = 45f;
			Local_308 = { 667.3692f, -610.5356f, 13.85401f };
			Local_311 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_302 = { 644.2497f, -844.7504f, 12.36707f };
			Local_305 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_314 = 25f;
			Local_308 = { 644.3659f, -859.3878f, 12.59677f };
			Local_311 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_302 = { 634.972f, -1011.64f, 10.92594f };
			Local_305 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_314 = 25f;
			Local_308 = { 634.9612f, -1029.123f, 10.61846f };
			Local_311 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_302 = { 645.7223f, -1191.215f, 10.45198f };
			Local_305 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_314 = 50f;
			Local_308 = { 645.7223f, -1228.966f, 10.98015f };
			Local_311 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_302 = { 642.1216f, -1295.73f, 9.005976f };
			Local_305 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_314 = 7f;
			Local_308 = { 644.7772f, -1298.168f, 9.128529f };
			Local_311 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_302 = { 686.5675f, -1444.71f, 9.065001f };
			Local_305 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_314 = 25f;
			Local_308 = { 682.3027f, -1429.872f, 9.890836f };
			Local_311 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_302 = { 718.7617f, -1734.313f, 9.082874f };
			Local_305 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_314 = 30f;
			Local_308 = { 717.5355f, -1748.646f, 9.363478f };
			Local_311 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_302 = { 694.3165f, -2049.806f, 0.009695f };
			Local_305 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_314 = 30f;
			Local_308 = { 693.1836f, -2063.225f, 0.429037f };
			Local_311 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_302 = { 642.6671f, -2494.551f, 0.468485f };
			Local_305 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_314 = 20f;
			Local_308 = { 647.0339f, -2506.202f, 0.583701f };
			Local_311 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_302 = { 691.8235f, -2558.219f, 0.363352f };
			Local_305 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_314 = 10.25f;
			Local_308 = { 695.7928f, -2561.034f, 0.346731f };
			Local_311 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_302 = { 723.6254f, -2562.171f, 0.255647f };
			Local_305 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_314 = 15f;
			Local_308 = { 735.765f, -2561.935f, 0.311182f };
			Local_311 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_302 = { 891.4387f, -2603.12f, 0f };
			Local_305 = { 704.4932f, -2634.793f, 45f };
			fLocal_314 = 20f;
			Local_308 = { 893.2578f, -2616.235f, 0f };
			Local_311 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_302 = { -2669.587f, 2491.96f, 2.043799f };
			Local_305 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_314 = 26.5f;
			Local_308 = { -2687.606f, 2494.868f, 2.608733f };
			Local_311 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_302 = { -1986.173f, 4521.799f, 0f };
			Local_305 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_314 = 17f;
			Local_308 = { -1995.668f, 4531.259f, 0f };
			Local_311 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_302 = { -526.0265f, 4472.442f, 0f };
			Local_305 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_314 = 10f;
			Local_308 = { -519.9281f, 4476.346f, 0f };
			Local_311 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_302 = { 98.1615f, 3384.489f, 45.45169f };
			Local_305 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_314 = 8f;
			Local_308 = { 152.6802f, 3346.793f, 45.02156f };
			Local_311 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_302 = { 147.8606f, 3406.796f, 38.03672f };
			Local_305 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_314 = 14.5f;
			Local_308 = { 130.0916f, 3425.417f, 38.05672f };
			Local_311 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_302 = { 2830.972f, 4967.14f, 34.56013f };
			Local_305 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_314 = 10f;
			Local_308 = { 2826.767f, 4964.185f, 34.10636f };
			Local_311 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_302 = { -151.5764f, 4264.417f, 31.04735f };
			Local_305 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_314 = 10f;
			Local_308 = { -148.3842f, 4261.071f, 31.57409f };
			Local_311 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_302 = { -426.6919f, 2964.272f, 14.848f };
			Local_305 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_314 = 7f;
			Local_308 = { -425.0283f, 2967.861f, 15.22699f };
			Local_311 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_302 = { -192.3414f, 2864.916f, 30.72595f };
			Local_305 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_314 = 10f;
			Local_308 = { -192.0129f, 2871.603f, 29.99943f };
			Local_311 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_302 = { 2539.185f, 2228.772f, 18.6102f };
			Local_305 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_314 = 10f;
			Local_308 = { 2543.708f, 2231.402f, 18.331f };
			Local_311 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_302 = { 2954.087f, 815.7209f, 0.037901f };
			Local_305 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_314 = 35f;
			Local_308 = { 2966.123f, 806.8889f, 0.544056f };
			Local_311 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_302 = { 2329.673f, -459.6648f, 70.24277f };
			Local_305 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_314 = 12f;
			Local_308 = { 2324.752f, -455.5238f, 70.25145f };
			Local_311 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_302 = { 1943.428f, -753.251f, 80.17905f };
			Local_305 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_314 = 7f;
			Local_308 = { 1943.366f, -758.287f, 80.32291f };
			Local_311 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_302 = { -271.2849f, -2414.993f, -10f };
			Local_305 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_314 = 30f;
			Local_308 = { -279.8399f, -2427.212f, -10f };
			Local_311 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_302 = { -1483f, 2691.428f, -10f };
			Local_305 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_314 = 12f;
			Local_308 = { -1478.152f, 2696.688f, -10f };
			Local_311 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_302 = { 222.1519f, -2343.487f, 0.039199f };
			Local_305 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_314 = 12f;
			Local_308 = { 216.959f, -2343.487f, 0.207734f };
			Local_311 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_302 = { 346.4622f, -2244.374f, 0.159779f };
			Local_305 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_314 = 20f;
			Local_308 = { 359.609f, -2244.468f, 0.129684f };
			Local_311 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_302 = { -1859.68f, -322.6357f, 56.16368f };
			Local_305 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_314 = 7.5f;
			Local_308 = { -1860.27f, -327.8634f, 57.543f };
			Local_311 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_302 = { -680.2632f, -600.818f, 69.11289f };
			Local_305 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_314 = 31.5f;
			Local_308 = { -680.6077f, -618.3658f, 69.27496f };
			Local_311 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_302 = { -1468.096f, -591.7158f, 67.05518f };
			Local_305 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_314 = 11.75f;
			Local_308 = { -1474.903f, -591.1215f, 67.08091f };
			Local_311 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_302 = { -1544.958f, -537.1475f, 72.44347f };
			Local_305 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_314 = 11.75f;
			Local_308 = { -1541.008f, -541.5494f, 71.61972f };
			Local_311 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_302 = { 333.2108f, -2727.274f, 20.71663f };
			Local_305 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_314 = 20f;
			Local_308 = { 343.1127f, -2727.236f, 20.23613f };
			Local_311 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_302 = { 1928.071f, 6228.355f, 43.49398f };
			Local_305 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_314 = 13f;
			Local_308 = { 1931.82f, 6235.634f, 43.37382f };
			Local_311 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_302 = { -736.4309f, -1590.921f, 10.80892f };
			Local_305 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_314 = 15f;
			Local_308 = { -727.2307f, -1585.221f, 11.78027f };
			Local_311 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_302 = { -676.3775f, -1548.553f, 12.33747f };
			Local_305 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_314 = 25f;
			Local_308 = { -654.203f, -1536.146f, 9.191055f };
			Local_311 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_302 = { -624.2344f, -1537.045f, 12.60193f };
			Local_305 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_314 = 8f;
			Local_308 = { -615.4003f, -1536.65f, 12.40271f };
			Local_311 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_302 = { -492.5057f, -1632.457f, 24.3307f };
			Local_305 = { -418.2088f, -1487.452f, 0f };
			fLocal_314 = 25f;
			Local_308 = { -486.2016f, -1636.095f, 24.20805f };
			Local_311 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_302 = { -359.3541f, -1639.693f, 13.13455f };
			Local_305 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_314 = 25f;
			Local_308 = { -378.1518f, -1705.66f, 12.47196f };
			Local_311 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_302 = { -243.4436f, -1814.623f, 25.69465f };
			Local_305 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_314 = 25f;
			Local_308 = { -235.1319f, -1822.094f, 25.86542f };
			Local_311 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_302 = { 84.55537f, -2046.159f, 13.30767f };
			Local_305 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_314 = 25f;
			Local_308 = { 17.90788f, -2035.773f, 12.62706f };
			Local_311 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_302 = { 221.5029f, -2232.766f, 9.88676f };
			Local_305 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_314 = 8f;
			Local_308 = { 218.583f, -2232.766f, 9.886198f };
			Local_311 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_302 = { 221.6518f, -2184.635f, 11.66457f };
			Local_305 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_314 = 8f;
			Local_308 = { 217.8995f, -2184.635f, 11.5405f };
			Local_311 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_302 = { 2326.57f, 1096.031f, 76.31458f };
			Local_305 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_314 = 21f;
			Local_308 = { 2334.453f, 1103.067f, 76.26603f };
			Local_311 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_302 = { 2379.442f, 1150.776f, 58.79632f };
			Local_305 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_314 = 12f;
			Local_308 = { 2374.064f, 1146.282f, 58.83331f };
			Local_311 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_302 = { -1179.405f, -355.2554f, 56.53003f };
			Local_305 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_314 = 12.5f;
			Local_308 = { -1178.385f, -361.8784f, 56.15081f };
			Local_311 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_302 = { -921.3846f, -384.94f, 137.0181f };
			Local_305 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_314 = 16f;
			Local_308 = { -914.1658f, -387.9444f, 137.0794f };
			Local_311 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_302 = { -740.2564f, 246.4529f, 132.2922f };
			Local_305 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_314 = 16f;
			Local_308 = { -726.6429f, 253.0676f, 132.3319f };
			Local_311 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_302 = { -771.2068f, 268.2729f, 132.1689f };
			Local_305 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_314 = 16f;
			Local_308 = { -770.8035f, 310.8625f, 137.4161f };
			Local_311 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_302 = { 259.2205f, 135.4146f, 136.7083f };
			Local_305 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_314 = 16f;
			Local_308 = { 261.9694f, 142.9676f, 136.6889f };
			Local_311 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_302 = { 393.548f, -30.87166f, 152.6635f };
			Local_305 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_314 = 8f;
			Local_308 = { 390.5358f, -36.08882f, 152.7813f };
			Local_311 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_302 = { 114.3139f, -648.4297f, 261.8488f };
			Local_305 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_314 = 20f;
			Local_308 = { 124.8467f, -646.6575f, 261.8488f };
			Local_311 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_302 = { -215.919f, -823.8436f, 126.0224f };
			Local_305 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_314 = 20f;
			Local_308 = { -225.397f, -820.3937f, 126.0812f };
			Local_311 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_302 = { -296.4725f, -802.0815f, 95.40108f };
			Local_305 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_314 = 20f;
			Local_308 = { -305.4602f, -798.8369f, 95.48194f };
			Local_311 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_302 = { -292.3034f, -823.3569f, 95.37621f };
			Local_305 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_314 = 20f;
			Local_308 = { -288.9206f, -814.022f, 95.37556f };
			Local_311 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_302 = { -256.3589f, -714.7838f, 110.1617f };
			Local_305 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_314 = 20f;
			Local_308 = { -253.7723f, -705.6632f, 110.1736f };
			Local_311 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_302 = { 1808.214f, 1949.246f, 71.73707f };
			Local_305 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_314 = 9.75f;
			Local_308 = { 1802.786f, 1950.262f, 71.74002f };
			Local_311 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_302 = { 2388.733f, 2931.941f, 46.62681f };
			Local_305 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_314 = 10f;
			Local_308 = { 2392.547f, 2934.867f, 46.6268f };
			Local_311 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_302 = { 2700.056f, 4836.381f, 42.07854f };
			Local_305 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_314 = 20.75f;
			Local_308 = { 2685.672f, 4821.653f, 42.18471f };
			Local_311 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_302 = { -1053.446f, 4766.245f, 234.3251f };
			Local_305 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_314 = 5f;
			Local_308 = { -1051.414f, 4767.193f, 234.4293f };
			Local_311 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_270(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)
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

int func_272(int iParam0)
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

int func_273(var uParam0, int iParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(*uParam0) || iParam1)
		{
			if (unk_0x2C237D28F05F0008(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (unk_0xE5AB05962FA1FF3F(iParam0, iParam1))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(iParam0, iParam1);
			if (unk_0x86CCCD2FAE9D5E65(iVar0))
			{
				if (!unk_0x930F8FBB8E9537CC(iVar0))
				{
					iVar1 = unk_0x56F6C62C27F50DCB(unk_0x14B7103DBD149FFE(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xBEB00EB4ADDC2A33(iVar0, iVar3))
						{
							if (unk_0xB0B9E53CEFDB16AA(iVar0, iVar3) == iParam0)
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

int func_275()
{
	switch (Local_637.f_3)
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

int func_276(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_290() < 10)
	{
		iVar0 = func_289();
		func_277(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_277(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_278(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_278(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if ((func_288(unk_0x1329891157A54C63(), 1) || func_287(unk_0x1329891157A54C63())) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_286(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_281(Var0))
		{
			Global_2404607.f_39.f_64 = func_280(unk_0x1329891157A54C63());
			func_279(Var0, iParam8);
		}
	}
}

void func_279(struct<12> Param0, int iParam12)
{
	Global_2404607.f_344[iParam12 /*12*/] = { Param0 };
	Global_2404607.f_344[iParam12 /*12*/].f_9 = 1;
}

int func_280(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2414506[iParam0 /*255*/].f_1;
	}
	return 0;
}

int func_281(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404607.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_282(Global_2404607.f_39[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_282(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_285(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_283(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_285(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_283(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_283(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_284(Param0, Param3, Var0, Var3);
}

int func_284(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_285(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_286(var uParam0, var uParam1)
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

int func_287(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/] != -1;
	}
	return 0;
}

bool func_288(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_280(iParam0) != 0;
	}
	return func_253(iParam0, bParam1);
}

int func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404607.f_344[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_290()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404607.f_344[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_291(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	unk_0x072D7B028D6C7A05(sParam1);
	unk_0x072D7B028D6C7A05(sParam2);
	return unk_0xEF468B98099969A5(0);
}

char* func_292(int iParam0)
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

char* func_293(int iParam0)
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

char* func_294(int iParam0)
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

void func_295()
{
	if (!func_100())
	{
		return;
	}
	if (!unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == Global_1312577.f_7)
	{
		return;
	}
	func_96();
}

void func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_272(iVar0) && !func_271(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_105[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_297()
{
	if (!func_275())
	{
		if (Local_637.f_3 == 14)
		{
			func_300();
		}
	}
	else if ((!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 4) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 5)) && !func_299(unk_0x1329891157A54C63()))
	{
		func_298();
	}
}

void func_298()
{
	switch (Local_637.f_3)
	{
		case 0:
			unk_0xC0EAD091F427A71A(8, 2);
			break;
		
		case 1:
			unk_0xC0EAD091F427A71A(13, 2);
			break;
		
		case 2:
			unk_0xC0EAD091F427A71A(4, 2);
			break;
		
		case 4:
			unk_0xC0EAD091F427A71A(1, 2);
			break;
		
		case 3:
			unk_0xC0EAD091F427A71A(2, 2);
			break;
		
		case 5:
			unk_0xC0EAD091F427A71A(3, 2);
			break;
		
		case 6:
			unk_0xC0EAD091F427A71A(11, 3);
			break;
		
		case 7:
			unk_0xC0EAD091F427A71A(14, 1);
			break;
		
		case 8:
			unk_0xC0EAD091F427A71A(29, 2);
			break;
		
		case 9:
			unk_0xC0EAD091F427A71A(12, 2);
			break;
		
		case 10:
			unk_0xC0EAD091F427A71A(10, 2);
			break;
		
		case 11:
			unk_0xC0EAD091F427A71A(18, 2);
			break;
		
		case 12:
			unk_0xC0EAD091F427A71A(20, 2);
			break;
		
		case 13:
			unk_0xC0EAD091F427A71A(27, 2);
			break;
		
		case 15:
			unk_0xC0EAD091F427A71A(26, 1);
			break;
		
		case 16:
			unk_0xC0EAD091F427A71A(25, 1);
			break;
		
		case 17:
			unk_0xC0EAD091F427A71A(22, 1);
			break;
		
		case 18:
			unk_0xC0EAD091F427A71A(24, 1);
			break;
	}
	unk_0xF3148AAF69AF9CBC(&iLocal_329, 8);
}

bool func_299(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_300()
{
	Local_105[0 /*3*/] = { 1083f, -231f, 60f };
	Local_105[1 /*3*/] = { 1024f, -325f, 60f };
	Local_105[2 /*3*/] = { 910f, -401f, 43f };
	Local_105[3 /*3*/] = { 721f, -457f, 26f };
	Local_105[4 /*3*/] = { 643f, -579f, 26f };
	Local_105[5 /*3*/] = { 590f, -851f, 26f };
	Local_105[6 /*3*/] = { 590f, -1023f, 16f };
	Local_105[7 /*3*/] = { 582f, -1205f, 24f };
	Local_105[8 /*3*/] = { 608f, -1335f, 16f };
	Local_105[9 /*3*/] = { 640f, -1434f, 16f };
	Local_105[10 /*3*/] = { 671f, -1742f, 20f };
	Local_105[11 /*3*/] = { 651f, -2046f, 16f };
	Local_105[12 /*3*/] = { 603f, -2505f, 9f };
	Local_105[13 /*3*/] = { 673f, -2582f, 4f };
	Local_105[14 /*3*/] = { 728f, -2594f, 10f };
	Local_105[15 /*3*/] = { 794f, -2624f, 27f };
	Local_105[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_105[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_105[18 /*3*/] = { -513f, 4427f, 40f };
	Local_105[19 /*3*/] = { 126f, 3366f, 40f };
	Local_105[20 /*3*/] = { 143f, 3418f, 36f };
	Local_105[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_105[22 /*3*/] = { -162f, 4249f, 40f };
	Local_105[23 /*3*/] = { -408f, 2964f, 20f };
	Local_105[24 /*3*/] = { -181f, 2862f, 38f };
	Local_105[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_105[26 /*3*/] = { 2950f, 803f, 8f };
	Local_105[27 /*3*/] = { 2369f, -409f, 80f };
	Local_105[28 /*3*/] = { 1906f, -755f, 84f };
	Local_105[29 /*3*/] = { -403f, -2333f, 40f };
	Local_105[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_105[31 /*3*/] = { 219f, -2315f, 5f };
	Local_105[32 /*3*/] = { 350f, -2315f, 5f };
	Local_105[33 /*3*/] = { -1848f, -333f, 75f };
	Local_105[34 /*3*/] = { -693f, -608f, 69f };
	Local_105[35 /*3*/] = { -1461f, -582f, 53f };
	Local_105[36 /*3*/] = { -1553f, -546f, 59f };
	Local_105[37 /*3*/] = { 338f, -2758f, 23f };
	Local_105[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_105[39 /*3*/] = { -713f, -1538f, 13f };
	Local_105[40 /*3*/] = { -659f, -1518f, 13f };
	Local_105[41 /*3*/] = { -620f, -1502f, 16f };
	Local_105[42 /*3*/] = { -445f, -1575f, 26f };
	Local_105[43 /*3*/] = { -373f, -1680f, 19f };
	Local_105[44 /*3*/] = { -212f, -1805f, 29f };
	Local_105[45 /*3*/] = { 47f, -2040f, 18f };
	Local_105[46 /*3*/] = { 223f, -2240f, 6f };
	Local_105[47 /*3*/] = { 218f, -2189f, 6f };
	Local_105[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_105[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_105[50 /*3*/] = { -1186f, -365f, 46f };
	Local_105[51 /*3*/] = { -916f, -407f, 93f };
	Local_105[52 /*3*/] = { -726f, 235f, 105f };
	Local_105[53 /*3*/] = { -774f, 286f, 112f };
	Local_105[54 /*3*/] = { 271f, 134f, 125f };
	Local_105[55 /*3*/] = { 377f, -28f, 125f };
	Local_105[56 /*3*/] = { 121f, -703f, 150f };
	Local_105[57 /*3*/] = { -204f, -784f, 74f };
	Local_105[58 /*3*/] = { -287f, -774f, 72f };
	Local_105[59 /*3*/] = { -272f, -824f, 71f };
	Local_105[60 /*3*/] = { -230f, -723f, 80f };
	Local_105[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_105[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_105[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_105[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_301(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
	}
}

void func_302(var uParam0, int iParam1)
{
	if (func_230(unk_0x1329891157A54C63()) == 133 && iParam1)
	{
		Global_2451473.f_4624 = uParam0;
	}
	else
	{
		Global_2451473.f_4624 = -1;
	}
}

void func_303(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
	}
	Global_2451473.f_4550 = -1;
	if (bParam6)
	{
		func_301(21, 1);
	}
	else
	{
		func_317(iParam0, -1);
		if (func_8(unk_0x1329891157A54C63()))
		{
			Global_1573867.f_3 = iParam0;
		}
		else
		{
			func_316(iParam0);
		}
		Global_1573867.f_4 = -1;
		if (func_8(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 5);
		}
		if ((func_110() && !func_109()) || func_108(unk_0x1329891157A54C63(), 21))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 4);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 20);
		if (func_315(iParam0))
		{
			func_314();
		}
	}
	if (fParam1 != 1f)
	{
		func_311(fParam1);
	}
	if (fParam2 != 1f)
	{
		unk_0x5B6D37392F5991C3(fParam2);
		if (iParam0 == 146)
		{
			unk_0x9BAE0FF806E5C2E5(0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		}
	}
	if (func_310(iParam0))
	{
		unk_0x9BAE0FF806E5C2E5(0);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 8);
	}
	if (bParam3)
	{
		func_309(1);
		if (func_177(0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
		}
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
	}
	if (bParam4)
	{
		func_307(1);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (bParam5)
	{
		func_306();
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (!bParam6)
	{
		if (func_304(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
		}
	}
	Global_2450427 = 1;
}

int func_304(int iParam0)
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
	if (func_305())
	{
		return 1;
	}
	return 0;
}

int func_305()
{
	switch (func_229())
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

void func_306()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4541), 0);
}

void func_307(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90861.f_8 = 1;
	}
	else
	{
		Global_90861.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_308(iVar0);
		iVar0++;
	}
}

void func_308(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

void func_309(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		default:
	}
	return 0;
}

void func_311(float fParam0)
{
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_312())
	{
		return;
	}
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4632 = fParam0;
	Global_2451473.f_4633 = unk_0x8F56512BDA9F6921();
}

int func_312()
{
	switch (func_313())
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

int func_313()
{
	return Global_24946;
}

void func_314()
{
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_198 = 0;
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4402), 1);
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_316(int iParam0)
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/] = iParam0;
}

void func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_249(0) || func_249(func_248(iVar0)))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
	}
}

int func_318()
{
	switch (Local_637.f_3)
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

void func_319()
{
	Global_1708196 = 1;
	if (!unk_0x236D8AD7EE179F46(Global_2457846, 0))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2457846, 0);
		unk_0xF3148AAF69AF9CBC(&Global_1708197, 0);
	}
	if (!unk_0x236D8AD7EE179F46(Global_2457846, 1))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2457846, 1);
		unk_0xF3148AAF69AF9CBC(&Global_1708197, 1);
	}
	if (!unk_0x236D8AD7EE179F46(Global_2457846, 5))
	{
		unk_0xF3148AAF69AF9CBC(&Global_2457846, 5);
		unk_0xF3148AAF69AF9CBC(&Global_1708197, 5);
	}
	if (unk_0x0017826B6757A11F(-355737150))
	{
		unk_0xFF3E86C4D581F64B(-355737150, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-580979506))
	{
		unk_0xFF3E86C4D581F64B(-580979506, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-1426452475))
	{
		unk_0xFF3E86C4D581F64B(-1426452475, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(745417724))
	{
		unk_0xFF3E86C4D581F64B(745417724, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-1305304906))
	{
		unk_0xFF3E86C4D581F64B(-1305304906, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-1543175077))
	{
		unk_0xFF3E86C4D581F64B(-1543175077, 0, 0, 0);
	}
	if (unk_0x0017826B6757A11F(-811770997))
	{
		unk_0xFF3E86C4D581F64B(-811770997, 0, 0, 0);
	}
}

int func_320()
{
	switch (Local_637.f_3)
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

void func_321()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_637.f_3))
	{
		if (Local_637.f_3 == 1 || Local_637.f_3 == 6)
		{
			iVar0 = func_337(unk_0x1329891157A54C63(), 1);
			iVar1 = func_145(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
				{
					unk_0x8E4A427F5C43E416(unk_0x81873881071CD9FE(), joaat("gadget_parachute"), 1, 0, 0);
					func_322(1);
				}
			}
			else
			{
				unk_0xDED35A5AF7118B82(unk_0x1329891157A54C63(), 1);
			}
		}
	}
}

void func_322(bool bParam0)
{
	int iVar0;
	
	if (unk_0x1CFC95A2D6BABBA2(unk_0x81873881071CD9FE(), 5) != 0)
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
		unk_0x307D7E924B919DB5(unk_0x1329891157A54C63(), func_152(575, -1, 0));
		if (func_336())
		{
			unk_0xD14AB154F9686410(unk_0x1329891157A54C63(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_335())
		{
			unk_0xD14AB154F9686410(unk_0x1329891157A54C63(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_332(3610, -1, -1))
		{
		}
		iVar0 = func_152(2028, -1, 0);
		unk_0x9D22CEF854DC2B26(unk_0x1329891157A54C63(), func_331(unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63()), iVar0));
		unk_0x307D7E924B919DB5(unk_0x1329891157A54C63(), func_152(575, -1, 0));
		func_330(unk_0x1329891157A54C63(), iVar0);
		unk_0xEE8AF954BD703F55(unk_0x1329891157A54C63(), 5, func_326(unk_0x81873881071CD9FE(), iVar0), func_325(unk_0x81873881071CD9FE(), iVar0), 0);
		func_324(func_152(2028, -1, 0), 1);
		Global_2451473.f_273 = 1;
		func_323(unk_0x1329891157A54C63());
		if (bParam0)
		{
		}
	}
}

void func_323(int iParam0)
{
	int iVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = func_152(2028, -1, 0);
		unk_0xEE8AF954BD703F55(iParam0, 5, func_326(unk_0xE495E987CB2BE7EF(iParam0), iVar0), func_325(unk_0xE495E987CB2BE7EF(iParam0), iVar0), 0);
		func_330(iParam0, iVar0);
		unk_0x9D22CEF854DC2B26(iParam0, func_331(unk_0xE495E987CB2BE7EF(iParam0), iVar0));
		unk_0x03F73D35E5AC583A(unk_0xE495E987CB2BE7EF(iParam0), 5, func_326(unk_0xE495E987CB2BE7EF(iParam0), iVar0), func_325(unk_0xE495E987CB2BE7EF(iParam0), iVar0), func_331(unk_0xE495E987CB2BE7EF(iParam0), iVar0));
		unk_0x307D7E924B919DB5(iParam0, func_152(575, -1, 0));
		if (func_336())
		{
			unk_0xD14AB154F9686410(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_335())
		{
			unk_0xD14AB154F9686410(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x0B895A812F665A52(unk_0xE495E987CB2BE7EF(iParam0), 177, 1);
	}
}

void func_324(int iParam0, int iParam1)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_143(2028, iParam0, -1, 1);
		unk_0xEE8AF954BD703F55(unk_0x1329891157A54C63(), 5, func_326(unk_0x81873881071CD9FE(), iParam0), func_325(unk_0x81873881071CD9FE(), iParam0), 0);
		func_330(unk_0x1329891157A54C63(), iParam0);
		unk_0x9D22CEF854DC2B26(unk_0x1329891157A54C63(), func_331(unk_0x81873881071CD9FE(), iParam0));
		if ((iParam1 && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) && unk_0x1CFC95A2D6BABBA2(unk_0x81873881071CD9FE(), 5) != 0)
		{
			func_323(unk_0x1329891157A54C63());
		}
	}
}

int func_325(var uParam0, int iParam1)
{
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

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x1CFC95A2D6BABBA2(uParam0, 11);
	if (unk_0x1CFC95A2D6BABBA2(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x14B7103DBD149FFE(iParam0);
	uVar3 = unk_0x630D604241EC3A6A(iParam0, 8, unk_0x1CFC95A2D6BABBA2(iParam0, 8), unk_0x2933140C98919EB1(iParam0, 8));
	if (unk_0x3FFA0207A02FD5C0(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 46)
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
	if (iParam1 > 46)
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
		uVar5 = unk_0x630D604241EC3A6A(iParam0, 11, iVar0, unk_0x2933140C98919EB1(iParam0, 11));
		if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_329(uVar5, 0);
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
						iVar0 = func_328(uVar5);
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
						iVar0 = func_328(uVar5);
						break;
					}
			}
		}
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_327(uVar5, 0);
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
					iVar0 = func_328(uVar5);
					break;
			}
		}
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_7"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_8"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0x3FFA0207A02FD5C0(uVar5, -1086258388, 0) || unk_0x3FFA0207A02FD5C0(uVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x3FFA0207A02FD5C0(uVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x3FFA0207A02FD5C0(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
			iVar0 = func_328(uVar5);
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

int func_327(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_329(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x3FFA0207A02FD5C0(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

void func_330(int iParam0, int iParam1)
{
	if (func_336())
	{
		if (iParam1 > 46)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0xB034712F32ACC3A8(iParam0);
		}
	}
	else if (func_335())
	{
		if (iParam1 > 0)
		{
			unk_0x71D08B96940BB71D(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0xB034712F32ACC3A8(iParam0);
		}
	}
}

int func_331(var uParam0, int iParam1)
{
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_334(iParam0, iParam1);
	uVar2 = func_333(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x864ED3213B1F4AED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
	}
	return iVar0;
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_335()
{
	return unk_0x2D6859674806FDCE(joaat("mppilot"));
}

bool func_336()
{
	return unk_0x2D6859674806FDCE(joaat("mplts"));
}

int func_337(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_149(iParam0);
}

void func_338()
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
	
	if ((((!func_7(unk_0x1329891157A54C63()) && !func_107(unk_0x1329891157A54C63())) && !func_224()) && !func_346(unk_0x1329891157A54C63(), 0)) && !func_345(unk_0x1329891157A54C63()))
	{
		if (func_12(unk_0x1329891157A54C63(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			bVar11 = func_5(Local_637.f_3);
			bVar12 = unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0);
			bVar13 = func_343();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_637.f_67[iVar4 /*2*/].f_1;
				if (unk_0x335F574AD77E59CE(uVar14) && unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0) == unk_0x1D1DAF7F94D5FE77(uVar14))
						{
							func_246(1);
						}
					}
					unk_0xF3148AAF69AF9CBC(&uVar5, iVar4);
					if (bVar11 && func_38(Local_637.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(uVar14), 1) };
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
			if (func_39(Local_637.f_3))
			{
				unk_0xF3148AAF69AF9CBC(&uVar5, 31);
			}
			Global_1606167[unk_0x1329891157A54C63() /*12*/].f_6 = uVar5;
			if (func_5(Local_637.f_3))
			{
				if ((unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()) || (unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE()) && !unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_637.f_3, iVar7, &Var0, &uVar3))
						{
							func_342(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
							func_341(Var0, 1, 0);
							func_340(10, 0, 0);
							unk_0xF3148AAF69AF9CBC(&iLocal_329, 5);
						}
					}
				}
				else
				{
					func_339();
				}
			}
		}
	}
	else
	{
		func_339();
	}
}

void func_339()
{
	if (unk_0x236D8AD7EE179F46(iLocal_329, 5))
	{
		func_115();
		func_113();
		unk_0xC69E84EBBD7166E6(&iLocal_329, 5);
		func_112();
	}
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408771 = 0;
	}
	Global_2404607.f_466 = iParam0;
	Global_2404607.f_466.f_1 = unk_0x8F56512BDA9F6921();
	Global_2404607.f_466.f_2 = iParam1;
	Global_2404607.f_466.f_3 = iParam2;
}

void func_341(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404607.f_39.f_49 = { Param0 };
	Global_2404607.f_39.f_52 = iParam3;
	Global_2404607.f_39.f_53 = iParam4;
}

void func_342(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x64AD45A6264810A8(Global_2408786.f_6))
	{
		if (!Global_2408786.f_6 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	else
	{
		Global_2408786.f_6 = unk_0x8F56512BDA9F6921();
	}
	Var0.f_6 = Global_2408786.f_6;
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
	if (func_288(unk_0x1329891157A54C63(), 1) || func_287(unk_0x1329891157A54C63()))
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
	Global_2408786 = { Var0 };
}

int func_343()
{
	if (((((func_344(unk_0x1329891157A54C63()) || func_110()) || func_109()) || func_108(unk_0x1329891157A54C63(), 21)) || func_8(unk_0x1329891157A54C63())) || func_7(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

int func_345(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 14))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 11))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0, bool bParam1)
{
	if (Global_1585045[iParam0 /*400*/].f_248.f_7 > 0)
	{
		if (bParam1)
		{
			if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
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

void func_347(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	struct<3> Var9;
	
	if (Local_637.f_3 == 14 && iParam1)
	{
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (!func_272(iVar0) && !func_271(iVar0))
			{
				iVar1 = unk_0x519AAFF77CC141DF();
				if (func_89(unk_0x1329891157A54C63()))
				{
					uVar2 = func_232();
					iVar3 = unk_0x1B503E81E3B3D65F(uVar2);
					if (unk_0xA89AE5060232966A(iVar3))
					{
						iVar4 = unk_0x563980A76107BC80(iVar3);
						if (unk_0xC4FEBC724D547D78(iVar4))
						{
							iVar1 = iVar4;
						}
					}
				}
				if (!unk_0x236D8AD7EE179F46(Local_2724[iVar1 /*11*/].f_7[func_263(iVar0)], func_262(iVar0)) && !bParam0)
				{
					Var5 = { Local_348[iVar0 /*3*/] };
					if (!unk_0xFBACB273AA628CC5(uLocal_544[iVar0]))
					{
						if (!func_357(Var5, 0f, 0f, 0f, 0) && !func_357(Var5, 0f, 0f, -2000f, 0))
						{
							uLocal_544[iVar0] = unk_0xA949BE56543040D2(Var5);
							unk_0xCB015C3E2E01CA1C(uLocal_544[iVar0], 9);
							unk_0x2AB7C42FF2AF476D(uLocal_544[iVar0], "AMCH_BRIDGE");
							func_352(uLocal_544[iVar0], 25);
							func_350(&(uLocal_544[iVar0]), 12);
							unk_0x3C8D013C840ADA0A(uLocal_544[iVar0], 1);
						}
					}
					else if (unk_0xDB10DED5ABC4AA20())
					{
						unk_0x9DA87A96BDB876EC(uLocal_544[iVar0], 255);
					}
					else
					{
						func_352(uLocal_544[iVar0], 25);
					}
				}
				else if (unk_0xFBACB273AA628CC5(uLocal_544[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_544[iVar0]));
					if (!bParam0)
					{
						unk_0x35D7948F61AA3FEC(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_41())
	{
		iVar8 = 0;
		while (iVar8 < 10)
		{
			if (((!bParam0 && unk_0x335F574AD77E59CE(Local_637.f_67[iVar8 /*2*/].f_1)) && unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iVar8 /*2*/].f_1), 0)) && unk_0xBEB00EB4ADDC2A33(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iVar8 /*2*/].f_1), -1))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_610[iVar8]))
				{
					uLocal_610[iVar8] = unk_0xE122DDAE9E94767B(unk_0x262EBD0AA0ED1D6D(Local_637.f_67[iVar8 /*2*/].f_1));
					unk_0x8F827BB0F6ED7AA8(uLocal_610[iVar8], func_349(iVar8));
					unk_0xCB015C3E2E01CA1C(uLocal_610[iVar8], 9);
					unk_0x2AB7C42FF2AF476D(uLocal_610[iVar8], func_348(iVar8));
					func_350(&(uLocal_610[iVar8]), 9);
				}
				else if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					Var9 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
					if (unk_0x2A488C176D52CCA5(Var9, unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_637.f_67[iVar8 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x3C8D013C840ADA0A(uLocal_610[iVar8], 1);
					}
					else
					{
						unk_0x3C8D013C840ADA0A(uLocal_610[iVar8], 0);
					}
				}
			}
			else if (unk_0xFBACB273AA628CC5(uLocal_610[iVar8]))
			{
				unk_0x0A8175F24237A3D4(&(uLocal_610[iVar8]));
			}
			iVar8++;
		}
	}
}

char* func_348(int iParam0)
{
	switch (Local_637.f_67[iParam0 /*2*/])
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

int func_349(int iParam0)
{
	switch (Local_637.f_67[iParam0 /*2*/])
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

void func_350(var uParam0, int iParam1)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, func_351(iParam1));
	}
}

int func_351(int iParam0)
{
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
	return 0;
}

void func_352(var uParam0, int iParam1)
{
	unk_0x9DA87A96BDB876EC(uParam0, func_353(uParam0, iParam1));
}

int func_353(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_356(Global_2422670))
	{
		fVar0 = func_355(uParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_354();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_354()
{
	if (func_288(Global_2422670, 1))
	{
		return 50;
	}
	return 0;
}

float func_355(var uParam0, float fParam1, float fParam2)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	uVar0 = Global_2422670;
	Var2 = { unk_0x3BB744083EDD3FF5(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uVar0), 0) };
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

int func_356(int iParam0)
{
	if ((unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_69.f_2, 15) && !(unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_69.f_2, 6) && unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_69.f_2, 7))) || ((unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_69.f_2, 6) && !unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_69.f_2, 7)) && !unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_69.f_2, 15)))
	{
		return 1;
	}
	return 0;
}

bool func_357(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_358(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_223(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_162(sParam1))
	{
		sVar0 = sParam1;
	}
	func_86(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

char* func_359(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x11CA2334E341B424();
	return "HUD_STARTING";
	if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_challenges"))
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
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xD994929E13CC1ED5(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_360(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_361(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		Global_2451473.f_4540 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
		{
			unk_0x35D7948F61AA3FEC(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2451473.f_4540 = 0;
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
		}
	}
}

int func_362(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0);
		}
		else
		{
			return unk_0x996F735E5C03B101(unk_0xE36DF6414E5CCBBF(), *uParam0);
		}
	}
	return unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0);
}

void func_363(int iParam0)
{
	if (!unk_0x2DD54246D4BB0A20() && !unk_0x29AFA2493D7C23D0())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if (!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30())
					{
						if (func_5(Local_637.f_3))
						{
							if (Local_637.f_3 == 12)
							{
								func_208("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_208("AMCH_AIRAV", 30000);
							}
						}
						else
						{
							func_208("AMCH_BIKEAV", 30000);
						}
						func_207(1);
						unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if (!unk_0xDB10DED5ABC4AA20())
					{
						func_208("AMCH_BLOW", 30000);
						func_207(1);
						unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if (!unk_0xDB10DED5ABC4AA20() && !func_368(62))
					{
						switch (Local_637.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
									{
										func_208("AMCH_ALTI", 30000);
										func_207(1);
										unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_NMIS", 30000);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_FRFALL", -1);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_PVPO1", -1);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_PVPO2", -1);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_WHEELIE", 30000);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_STOPPIE", 30000);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_LFALL", 30000);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_LPARA", 30000);
									func_207(1);
									unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if ((!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30()) && !func_368(62))
					{
						switch (Local_637.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
									{
										if (func_1(&uLocal_323, 1000, 0))
										{
											func_208("AMCH_OCEAN", 30000);
											func_207(1);
											func_44(&uLocal_323);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if (!unk_0xDB10DED5ABC4AA20() && !func_368(62))
					{
						switch (Local_637.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
									{
										if (func_356(unk_0x1329891157A54C63()) && !func_365(unk_0x1329891157A54C63()))
										{
											func_208("AMCH_ALTIEXP", 30000);
											func_207(1);
											unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if ((!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30()) && !func_368(62))
					{
						if (func_1(&uLocal_323, 1000, 0))
						{
							func_208("AMCH_FLYLOW", 30000);
							func_207(1);
							func_44(&uLocal_323);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if (Local_637.f_3 == 7)
					{
						if (iLocal_622 == 0)
						{
							if ((!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30()) && !func_368(62))
							{
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_MVS1", 30000);
									func_207(1);
									iLocal_622 = 1;
								}
							}
						}
						else if ((!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30()) && !func_368(62))
						{
							if (func_12(unk_0x1329891157A54C63(), 1, 1))
							{
								func_208("AMCH_MVS2", 30000);
								func_207(1);
								unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
							}
						}
					}
					if (Local_637.f_3 == 14)
					{
						if (iLocal_622 == 0)
						{
							if ((!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30()) && !func_368(62))
							{
								if (func_12(unk_0x1329891157A54C63(), 1, 1))
								{
									func_208("AMCH_BRBL", 30000);
									func_207(1);
									iLocal_622 = 1;
								}
							}
						}
						else if ((!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30()) && !func_368(62))
						{
							if (func_12(unk_0x1329891157A54C63(), 1, 1))
							{
								func_208("AMCH_BRBL2", 30000);
								func_207(1);
								unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0x236D8AD7EE179F46(iLocal_621, iParam0))
				{
					if (!unk_0xDB10DED5ABC4AA20() && !unk_0xA83A609D74168B30())
					{
						func_364("AMCH_WARN", func_293(Local_637.f_3), func_292(Local_637.f_3), 30000);
						func_207(0);
						Local_3077.f_8 = unk_0xC7224E4F41E00BE3();
						unk_0x35D7948F61AA3FEC(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xF3148AAF69AF9CBC(&iLocal_621, iParam0);
					}
				}
				break;
			}
	}
}

void func_364(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x072D7B028D6C7A05(sParam1);
	unk_0x072D7B028D6C7A05(sParam2);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam3);
}

bool func_365(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1334766.f_241.f_136[func_367(9) /*33*/][iParam0], func_366(9));
}

int func_366(int iParam0)
{
	return (iParam0 % 32);
}

int func_367(int iParam0)
{
	return (iParam0 / 32);
}

bool func_368(int iParam0)
{
	return Global_2422670.f_2137[0 /*70*/].f_1 == iParam0;
}

void func_369(int iParam0)
{
	Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_3 = iParam0;
}

void func_370(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
}

int func_371()
{
	if (func_108(unk_0x1329891157A54C63(), 21))
	{
		return 0;
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		return 0;
	}
	if (unk_0xD10899F3A1372292())
	{
		return 0;
	}
	if (func_252(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (func_377())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (unk_0x726DA50057167075())
	{
		return 0;
	}
	if (func_254(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!func_375())
	{
		return 0;
	}
	if (func_108(unk_0x1329891157A54C63(), 0) || func_108(unk_0x1329891157A54C63(), 3))
	{
		return 0;
	}
	if ((func_108(unk_0x1329891157A54C63(), 12) || func_108(unk_0x1329891157A54C63(), 14)) || func_108(unk_0x1329891157A54C63(), 13))
	{
		return 0;
	}
	if (func_346(unk_0x1329891157A54C63(), 0))
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (func_373(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	return 1;
}

int func_372()
{
	if (Global_2539917.f_796 > -1)
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
	return Global_1585045[iParam0 /*400*/].f_35;
}

bool func_374()
{
	return Global_90861.f_297 > 0;
}

int func_375()
{
	if (func_376() == 0)
	{
		return 1;
	}
	return 0;
}

int func_376()
{
	return Global_1312466.f_18;
}

bool func_377()
{
	return Global_1315892;
}

bool func_378()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/] == 5;
}

bool func_379()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

void func_380()
{
	func_381(&(Local_725.f_526), &Local_725, 23, &(Local_725.f_1), &(Local_725.f_109), Local_637.f_3, 0);
}

void func_381(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_37 = 0;
	if (func_464())
	{
		if (func_430(uParam1, iParam2, uParam3, Global_1573670, 0, func_466()))
		{
			func_429(1);
			if (!func_428() || unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
			{
				if (func_427())
				{
					func_426();
				}
				else
				{
					unk_0x700CD125EC59941D(76, 84);
					if (uParam3->f_28 == 0)
					{
						func_425(1);
						Global_1573670 = 0;
						iVar18 = -1;
						if (Global_1573818 != 1)
						{
							func_424(uParam1);
							if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
							{
								unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
							}
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							if (func_423())
							{
								if (func_12(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar0 = unk_0x6528B1497E4313F1(iVar16);
								}
								else
								{
									iVar0 = func_58();
								}
							}
							else
							{
								iVar0 = (uParam0[iVar16 /*46*/])->f_1;
							}
							if ((func_422(iVar0) && func_417(iVar0)) && func_12(iVar0, 0, 1))
							{
								iVar9 = iVar0;
								uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
								iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
								Var3 = { func_412(iVar0) };
								if (iVar0 == unk_0x1329891157A54C63())
								{
									uParam3->f_36 = iVar17;
								}
								StringCopy(&(uParam3->f_1), unk_0xB67DF8F35744CF60(iVar0), 64);
								*(uParam4[iVar16 /*13*/]) = { func_80(iVar0) };
								if (func_411(*(uParam4[iVar16 /*13*/])))
								{
								}
								iVar2 = func_405(iVar0);
								sVar1 = "";
								if (iVar2 != 0)
								{
									sVar1 = unk_0xD23DF626788C30FE(iVar2);
								}
								Global_1573670++;
								if ((uParam0[iVar16 /*46*/])->f_21 != -1f)
								{
									fVar10 = (uParam0[iVar16 /*46*/])->f_21;
								}
								if ((uParam0[iVar16 /*46*/])->f_29 != -1)
								{
									iVar11 = (uParam0[iVar16 /*46*/])->f_29;
								}
								if ((uParam0[iVar16 /*46*/])->f_45 != -1)
								{
									iVar12 = (uParam0[iVar16 /*46*/])->f_45;
								}
								iVar8 = (uParam0[iVar16 /*46*/])->f_8;
								if (((uParam0[iVar16 /*46*/])->f_8 != -1 || (uParam0[iVar16 /*46*/])->f_21 != -1f) || (uParam0[iVar16 /*46*/])->f_29 != -1)
								{
									if (!func_423())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_403(&iVar8, &fVar10, (uParam0[iVar16 /*46*/])->f_8, iParam5);
									uParam3->f_104 = func_197(iParam5, 1, 0, 0);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar16 /*46*/])->f_2 + 1;
									if (iVar18 != iVar13)
									{
										iVar18 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								if (func_402(iParam5))
								{
									func_401(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_54(), iVar15, fVar10, iVar8, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								else
								{
									func_401(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_54(), iVar15, fVar10, iVar11, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								unk_0xF3148AAF69AF9CBC(&iVar14, iVar0);
								iVar17++;
							}
							iVar16++;
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							iVar0 = unk_0x6528B1497E4313F1(iVar16);
							if (func_12(iVar0, 0, 1) && !unk_0x236D8AD7EE179F46(iVar14, iVar0))
							{
								iVar0 = unk_0x6528B1497E4313F1(iVar16);
							}
							else
							{
								iVar0 = func_58();
							}
							if (func_422(iVar0))
							{
								if (func_12(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar9 = iVar0;
									uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
									iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
									Var3 = { func_412(iVar0) };
									*(uParam4[iVar16 /*13*/]) = { func_80(iVar0) };
									iVar2 = func_405(iVar0);
									sVar1 = "";
									if (iVar2 != 0)
									{
										sVar1 = unk_0xD23DF626788C30FE(iVar2);
									}
									Global_1573670++;
									func_393(unk_0xB67DF8F35744CF60(iVar0), uParam1, uParam3, iVar17, Var3, sVar1, iVar7, 116, iVar15);
									iVar17++;
								}
							}
							iVar16++;
						}
						if (unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							func_390(uParam3, uParam1);
						}
						func_44(&(uParam3->f_22));
						func_389();
						uParam3->f_28 = 2;
					}
					if (uParam3->f_28 == 2)
					{
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
						{
							func_388(uParam3, uParam1);
							func_387(uParam1, 0, 1);
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 7);
						}
						func_388(uParam3, uParam1);
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 11);
						}
						if (func_384(uParam3))
						{
							Global_1573818 = 1;
						}
						func_382(uParam3);
						if (Global_1573818 == 1)
						{
							uParam3->f_28 = 0;
						}
						if (Global_1573818 == 2)
						{
							uParam3->f_28 = 0;
						}
					}
					if (unk_0xCC8E3BAC62A29F42(*uParam1))
					{
						unk_0x7F3AA121397DEEC9(7);
						unk_0xD45896EF84BD41C8(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F3AA121397DEEC9(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_28 = 0;
			func_389();
			func_425(0);
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
			}
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 10))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 10);
			}
		}
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_382(var uParam0)
{
	if (!func_45(&(uParam0->f_22)))
	{
		func_2(&(uParam0->f_22), 0, 0);
	}
	else if (func_1(&(uParam0->f_22), 250, 0))
	{
		func_44(&(uParam0->f_22));
		func_383(0);
	}
}

void func_383(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573818 != 2)
		{
			Global_1573818 = 2;
		}
	}
	else
	{
		switch (Global_1573818)
		{
			case 0:
				Global_1573818 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_384(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_38;
	iVar15 = unk_0x6528B1497E4313F1(uParam0->f_38);
	if (iVar15 != func_58() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_80(iVar15) };
		iVar1 = func_386(uParam0, uParam0->f_38);
		if (func_411(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_385(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_385(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_385(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_385(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x6E5E82D7E6363134(&Var2))
						{
							iVar16 = 1;
							func_385(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_385(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_38++;
	if (uParam0->f_38 >= 32)
	{
		uParam0->f_38 = 0;
	}
	return iVar16;
}

void func_385(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*2*/] = iParam2;
}

var func_386(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*2*/];
}

void func_387(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x21ED0FC9B5CC748B(*uParam0, "COLLAPSE"))
	{
		unk_0x75A2A42ADE12FD0E(iParam1);
		unk_0xBA9BA6181F2B6111();
	}
	if (iParam2 == 1)
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBA9BA6181F2B6111();
		}
	}
}

void func_388(var uParam0, var uParam1)
{
	if (!unk_0x236D8AD7EE179F46(uParam0->f_34, 10))
	{
		unk_0x21ED0FC9B5CC748B(*uParam1, "SET_HIGHLIGHT");
		unk_0xBD0C54D89298454E(uParam0->f_36);
		unk_0xBA9BA6181F2B6111();
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_34), 10);
	}
}

void func_389()
{
	if (Global_1573818 != 0)
	{
		Global_1573818 = 0;
	}
}

void func_390(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar0);
		if (iVar2 != func_58())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_39[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_392(uParam0->f_39[iVar0 /*2*/]);
					func_391(uParam1, uParam0->f_39[iVar0 /*2*/].f_1, iVar1, Global_1585045[iVar0 /*400*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_391(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "SET_ICON"))
		{
			unk_0xBD0C54D89298454E(iParam1);
			unk_0xBD0C54D89298454E(iParam2);
			if (iParam2 == 65)
			{
				unk_0xBD0C54D89298454E(iParam3);
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

int func_392(int iParam0)
{
	int iVar0;
	
	iVar0 = 65;
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

void func_393(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_400() && iParam3 < func_399())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573672)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x21ED0FC9B5CC748B(*uParam1, sVar1))
		{
			unk_0xBD0C54D89298454E(iParam3);
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 8) || uParam2->f_107 == 6)
			{
				func_398("");
			}
			else
			{
				unk_0xBD0C54D89298454E(iParam9);
			}
			func_398(sParam0);
			unk_0xBD0C54D89298454E(iParam10);
			if (uParam2->f_107 == 6)
			{
				func_398("");
			}
			else
			{
				unk_0xBD0C54D89298454E(65);
			}
			unk_0xBD0C54D89298454E(-1);
			func_398("");
			if (uParam2->f_107 == 6)
			{
				func_398("");
			}
			else
			{
				func_398(&sParam4);
			}
			unk_0x75A2A42ADE12FD0E(uParam2->f_37);
			unk_0x19A855A370EE563C(sParam8);
			unk_0x19A855A370EE563C(sParam8);
			if (func_397(uParam2))
			{
				func_396("DPAD_FRIEND");
			}
			else if (func_395(uParam2))
			{
				func_396("DPAD_FRIEND");
			}
			else if (func_394(uParam2))
			{
				func_396("DPAD_CREW");
			}
			else
			{
				func_396("");
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

bool func_394(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 6);
}

bool func_395(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 5);
}

void func_396(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

int func_397(var uParam0)
{
	if (func_395(uParam0) && func_394(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_398(char* sParam0)
{
	unk_0x1F704997074F9C16(sParam0);
}

int func_399()
{
	int iVar0;
	
	if (Global_1573672)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_400()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573672)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_401(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_400() && iParam2 < func_399())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573672)
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
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			if (unk_0x21ED0FC9B5CC748B(*uParam0, sVar1))
			{
				unk_0xBD0C54D89298454E(iParam2);
				if (unk_0x236D8AD7EE179F46(uParam1->f_34, 8) || uParam1->f_107 == 6)
				{
					func_398("");
				}
				else
				{
					unk_0xBD0C54D89298454E(iParam8);
				}
				if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					func_396(sParam15);
				}
				else
				{
					func_398(&(uParam1->f_1));
				}
				unk_0xBD0C54D89298454E(iParam10);
				if (uParam1->f_107 == 6)
				{
					func_398("");
				}
				else
				{
					unk_0xBD0C54D89298454E(65);
				}
				if (iParam11 == 1)
				{
					unk_0xBD0C54D89298454E(iVar0);
				}
				else
				{
					unk_0xBD0C54D89298454E(-1);
				}
				if (func_423())
				{
					func_398("");
				}
				else if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 5 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if ((uParam1->f_107 == 7 && !unk_0xB318FDA0D1ABDB20(sParam15)) && !unk_0xB318FDA0D1ABDB20(sParam16))
				{
					unk_0x6CE839BF5D87A428("FM_AE_TWO_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x072D7B028D6C7A05(sParam16);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 8 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
				{
					unk_0x6CE839BF5D87A428("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xB6F6A8755E3C6180(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6D55FF05D62B91BC(iParam9);
					}
					unk_0x072D7B028D6C7A05(uParam1->f_104);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 9)
				{
					unk_0x6CE839BF5D87A428("FM_AE_CASH");
					unk_0x849D5F6ABEAF5CC2(iParam9, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
					{
						func_396(uParam1->f_104);
					}
					else
					{
						func_398("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam13, 6);
					unk_0xC3822F70D0E7940B();
				}
				else if (fParam12 != -1f)
				{
					unk_0x6CE839BF5D87A428("NUMBER");
					unk_0xB6F6A8755E3C6180(fParam12, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam9 != -1)
				{
					unk_0xBD0C54D89298454E(iParam9);
				}
				else
				{
					func_398("");
				}
				if (uParam1->f_107 == 6)
				{
					func_398("");
				}
				else
				{
					func_398(&sParam3);
				}
				unk_0x75A2A42ADE12FD0E(uParam1->f_37);
				if (iParam11 == 1 || unk_0xB318FDA0D1ABDB20(sParam7))
				{
					func_398("");
					func_398("");
				}
				else
				{
					unk_0x19A855A370EE563C(sParam7);
					unk_0x19A855A370EE563C(sParam7);
				}
				if (func_397(uParam1))
				{
					func_396("DPAD_FRIEND");
				}
				else if (func_395(uParam1))
				{
					func_396("DPAD_FRIEND");
				}
				else if (func_394(uParam1))
				{
					func_396("DPAD_CREW");
				}
				else
				{
					func_396("");
				}
				unk_0xBA9BA6181F2B6111();
			}
		}
	}
}

int func_402(int iParam0)
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

int func_403(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_404(iParam3))
	{
		*fParam1 = (func_199(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_402(iParam3))
	{
		*fParam1 = (func_199(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_404(int iParam0)
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

int func_405(int iParam0)
{
	int iVar0;
	
	iVar0 = func_408(iParam0);
	if (iVar0 == -1)
	{
		func_406(iParam0, 1);
		return 0;
	}
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
}

void func_406(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_408(iParam0) != -1)
	{
		return;
	}
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_407(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_407(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_408(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_409(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_409(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_410(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_410(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_58();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

bool func_411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

struct<4> func_412(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2450501 = { func_80(iParam0) };
		if (unk_0x3F0C224D3CC05EF2())
		{
			if (func_411(Global_2450501))
			{
				if (!unk_0x02F6979593134AF6(&Global_2450501))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xBEC1291D6B41868E(0))
		{
			return Var0;
		}
		if (func_416(&Global_2450501))
		{
			Global_2450431 = { func_414(iParam0) };
			func_413(&Global_2450431, &Var0);
		}
	}
	return Var0;
}

void func_413(var uParam0, var uParam1)
{
	unk_0x99C56C4A7747183E(uParam0, 35, uParam1);
}

struct<35> func_414(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_415(iParam0))
	{
		return Global_1315926[unk_0x1329891157A54C63() /*35*/];
	}
	Var0 = { func_80(iParam0) };
	unk_0xEF956A1EC046AA4A(&Var13, 35, &Var0);
	return Var13;
}

int func_415(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		return 1;
	}
	return 0;
}

int func_416(var uParam0)
{
	if (unk_0x98465343DD18A1F7())
	{
		if (unk_0x80622F5ED5957337() && unk_0x464883E45616A088(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (func_8(iParam0) || func_421(iParam0))
	{
		return 0;
	}
	if (!func_420(iParam0))
	{
		return 0;
	}
	if ((!func_419(iParam0) && Global_2414506[iParam0 /*255*/].f_230 == -1) && !func_418(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_418(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

int func_419(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x1329891157A54C63(), 0, 1))
		{
			if (unk_0x4F5BEB9A4097F301(iParam0, unk_0x1329891157A54C63()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_420(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 22);
}

int func_421(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10) || unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9));
	}
	return 0;
}

int func_422(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_58())
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
		if (unk_0x236D8AD7EE179F46(Global_1585045[iVar0 /*400*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_423()
{
	switch (func_230(unk_0x1329891157A54C63()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	return 0;
}

void func_424(var uParam0)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xBD0C54D89298454E(0);
		unk_0xBA9BA6181F2B6111();
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		Global_1334763.f_2 = 1;
	}
	else
	{
		Global_1334763.f_2 = 0;
	}
}

void func_426()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
	{
		if (func_211())
		{
			func_202();
		}
	}
}

int func_427()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0) && func_211())
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1) && func_211())
	{
		return 1;
	}
	return 0;
}

int func_428()
{
	if (func_211())
	{
		if (func_55(Global_2422670.f_2137[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_429(int iParam0)
{
	Global_1334763.f_1 = Global_1334763;
	Global_1334763 = iParam0;
}

int func_430(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	
	StringCopy(&Var0, "", 16);
	bVar5 = func_463(iParam1);
	if (iParam1 == 17)
	{
		bVar4 = true;
	}
	fVar6 = func_462();
	if (iParam1 == 23)
	{
		if (func_461())
		{
			if (func_460() > 0 && Global_1573672)
			{
				unk_0x10BFA51B8BA62476();
				unk_0x97925E0DE42EFC5C(fVar6);
				unk_0xC9A352663D97EFC3(18);
				if (unk_0xA83A609D74168B30())
				{
					unk_0xB5BFC55E4F67D18D();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_452())
		{
			func_451(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
	{
		func_451(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_20)))
	{
		if (func_460() == 1)
		{
			func_450(bVar5, uParam0, 0);
			func_2(&(uParam2->f_20), 0, 0);
			func_451(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_20)) || bParam5)
	{
		if (unk_0xA83A609D74168B30())
		{
			unk_0xB5BFC55E4F67D18D();
		}
		if (func_1(&(uParam2->f_20), 10000, 0) || (func_460() == 0 && !bParam5))
		{
			func_451(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar4 == 0)
			{
				func_449();
				if (iParam1 == 23)
				{
					unk_0x10BFA51B8BA62476();
				}
				unk_0xC9A352663D97EFC3(18);
			}
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 0))
			{
				Global_1573670 = uParam3;
				Global_1573669 = 1;
				unk_0x97925E0DE42EFC5C(fVar6);
				if (bVar4)
				{
					if (uParam2->f_35 != Global_1573671)
					{
						unk_0xC69E84EBBD7166E6(&(uParam2->f_34), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar4 == 0)
				{
					func_449();
					if (iParam1 == 23)
					{
						unk_0x10BFA51B8BA62476();
					}
					unk_0xC9A352663D97EFC3(18);
				}
				unk_0x97925E0DE42EFC5C(fVar6);
				if (func_450(bVar5, uParam0, 0))
				{
					func_424(uParam0);
					uParam2->f_17 = func_447(iParam1, &(Global_1607808.f_63428), bParam4);
					if (unk_0xB318FDA0D1ABDB20(uParam2->f_17))
					{
						uParam2->f_17 = func_447(iParam1, &(Global_1607808.f_63428), bParam4);
					}
					if (bParam4)
					{
						func_444(uParam0, uParam2->f_17, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_438(uParam0, func_441(uParam2), func_439(uParam2), -1);
					}
					else if (bVar4)
					{
						uParam2->f_35 = Global_1573671;
						func_444(uParam0, uParam2->f_17, "", 0, -1, Global_1573671, 1);
					}
					else
					{
						Var0 = { func_436(iParam1) };
						iVar7 = func_431(iParam1);
						func_444(uParam0, uParam2->f_17, &Var0, 1, iVar7, -1, 1);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam2->f_34), 0);
				}
			}
		}
	}
	return 0;
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_435())
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
			if (func_434(unk_0x1329891157A54C63()))
			{
				iVar0 = 20;
			}
			if (func_433(unk_0x1329891157A54C63()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_432(unk_0x1329891157A54C63()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_432(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 4;
}

bool func_433(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_434(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_435()
{
	return Global_1607808.f_1 == 0;
}

struct<4> func_436(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_437(unk_0x1329891157A54C63()) || func_432(unk_0x1329891157A54C63()))
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
			StringIntConCat(&Var0, Global_1607808.f_20, 16);
			break;
	}
	return Var0;
}

bool func_437(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 5;
}

void func_438(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (unk_0xB318FDA0D1ABDB20(uParam2))
		{
			func_396(uParam1);
		}
		else if (func_230(unk_0x1329891157A54C63()) == 133)
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT_C");
			unk_0x072D7B028D6C7A05(uParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT");
			unk_0x072D7B028D6C7A05(sParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		func_396("");
		if (iParam3 != -1)
		{
			unk_0xBD0C54D89298454E(iParam3);
		}
		unk_0xBA9BA6181F2B6111();
	}
}

char* func_439(var uParam0)
{
	if (func_440() && !unk_0xB318FDA0D1ABDB20(uParam0->f_106))
	{
		return uParam0->f_106;
	}
	else
	{
		switch (func_230(unk_0x1329891157A54C63()))
		{
			case 131:
				return "";
			
			case 132:
				return "FM_AE_SORT_5";
			
			case 133:
				switch (func_229())
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
	}
	return "";
}

bool func_440()
{
	return Global_1585044;
}

char* func_441(var uParam0)
{
	if (func_440() && !unk_0xB318FDA0D1ABDB20(uParam0->f_105))
	{
		return uParam0->f_105;
	}
	else
	{
		switch (func_230(unk_0x1329891157A54C63()))
		{
			case 131:
				return "PIM_TA9";
			
			case 132:
				if (func_443() == 0)
				{
					return "CPC_TILEL";
				}
				else if (func_443() == 1)
				{
					return "CPC_TILELA";
				}
				return "PIM_TA0";
				break;
			
			case 133:
				switch (func_229())
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
				if (func_442() == 1)
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
	}
	return "";
}

int func_442()
{
	return Global_2451473.f_4627;
}

int func_443()
{
	if (func_230(unk_0x1329891157A54C63()) == 132)
	{
		return Global_2451473.f_4622;
	}
	return -1;
}

void func_444(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_398(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x6CE839BF5D87A428(uParam1);
			unk_0x6D55FF05D62B91BC(iParam5);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_396(sParam1);
		}
		if (func_461() && iParam6)
		{
			if (func_446())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x6CE839BF5D87A428("LBD_DPD_CNT");
			unk_0x6D55FF05D62B91BC(iVar0);
			unk_0x6D55FF05D62B91BC(iVar1);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_396(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xBD0C54D89298454E(iParam4);
			if (func_445(unk_0x1329891157A54C63()))
			{
				unk_0xBD0C54D89298454E(166);
			}
		}
		unk_0xBA9BA6181F2B6111();
	}
}

int func_445(int iParam0)
{
	if (func_434(iParam0) || func_433(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_446()
{
	return Global_1573672;
}

char* func_447(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_448();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB318FDA0D1ABDB20(uParam1))
	{
		if (Global_1573836 == 1)
		{
			Global_1573836 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
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

char* func_448()
{
	if (unk_0xCCA957C9E80D164B())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xE7A4B9596EBA099D())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x819401838C15BB6B())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xB830EBEEFC476A2F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_449()
{
	Global_36265 = 1;
}

bool func_450(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x95EF972E3A07B525("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_matchmaking_card");
	}
	return unk_0xCC8E3BAC62A29F42(*uParam1);
}

void func_451(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 7);
	Global_1573670 = 0;
	func_389();
	Global_1573669 = 0;
	uParam1->f_28 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_20)))
		{
			func_44(&(uParam1->f_20));
		}
	}
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x4B6F01DE8CCE643E(uParam0);
	}
	if (unk_0x236D8AD7EE179F46(uParam1->f_34, 0))
	{
		unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 0);
	}
	unk_0x97925E0DE42EFC5C(0f);
}

int func_452()
{
	if (func_459())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (!func_457())
	{
		return 0;
	}
	if (!func_375())
	{
		return 0;
	}
	if (func_456(8, -1))
	{
		return 0;
	}
	if (func_460() == 2)
	{
		return 0;
	}
	if (Global_2451473.f_4387)
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	else if (!func_253(unk_0x1329891157A54C63(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_455(1) || func_453(1)) || Global_17099.f_124) || Global_17099)
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (func_89(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (Global_1698745)
	{
		return 0;
	}
	return 1;
}

int func_453(bool bParam0)
{
	if (unk_0xACE30BA91B2DD8E5())
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (func_454(unk_0x81873881071CD9FE()))
			{
				if (unk_0xCAD9951C953F5B2D(0, 25) || unk_0xCAD9951C953F5B2D(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17099.f_130)
	{
		return 0;
	}
	if (unk_0xCAD9951C953F5B2D(0, 19) || (!bParam0 && unk_0x70A79CA636F98FA5(0, 19)))
	{
		return 1;
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (((unk_0xCAD9951C953F5B2D(0, 166) || unk_0xCAD9951C953F5B2D(0, 167)) || unk_0xCAD9951C953F5B2D(0, 168)) || unk_0xCAD9951C953F5B2D(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x70A79CA636F98FA5(0, 166) || unk_0x70A79CA636F98FA5(0, 167)) || unk_0x70A79CA636F98FA5(0, 168)) || unk_0x70A79CA636F98FA5(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_454(int iParam0)
{
	int iVar0;
	
	if (unk_0x763F2CFB73975AA7())
	{
		if (!unk_0x5FEB513A4402FD59(uParam0))
		{
			unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_455(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

bool func_456(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

int func_457()
{
	if (func_458())
	{
		return 1;
	}
	if (unk_0x29AFA2493D7C23D0())
	{
		return 0;
	}
	if (unk_0xC584A413BCB2AA39() || unk_0xC11AD1609CFCCCE1())
	{
		return 0;
	}
	if (unk_0x3A93B922D5E9060F())
	{
		return 0;
	}
	return 1;
}

bool func_458()
{
	return Global_1312438;
}

bool func_459()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_460()
{
	return Global_1334766.f_68;
}

int func_461()
{
	if (Global_1573671 > 16)
	{
		return 1;
	}
	return 0;
}

float func_462()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xCAF8683E9362A022()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
			return 1;
			break;
	}
	return 0;
}

int func_464()
{
	if (func_466())
	{
		return 1;
	}
	if (func_7(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_440())
	{
		return 1;
	}
	if (func_287(unk_0x1329891157A54C63()))
	{
		switch (func_230(unk_0x1329891157A54C63()))
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
				if (!func_465(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_465(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_465(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 4);
}

int func_466()
{
	if (func_467(unk_0x1329891157A54C63()))
	{
		return Global_1318828;
	}
	return 0;
}

int func_467(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return unk_0xC9C35C91114A8B03(iParam0);
	}
	return 0;
}

void func_468()
{
	if (Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_3 == 3)
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_329, 8))
		{
			if ((!func_7(unk_0x1329891157A54C63()) && !func_107(unk_0x1329891157A54C63())) && !func_299(unk_0x1329891157A54C63()))
			{
				func_298();
			}
		}
		else if (!unk_0x236D8AD7EE179F46(iLocal_329, 9))
		{
			if ((func_7(unk_0x1329891157A54C63()) || func_107(unk_0x1329891157A54C63())) || func_299(unk_0x1329891157A54C63()))
			{
				unk_0x00B0B4FFD88664E1();
				Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4 = 0;
				unk_0xF3148AAF69AF9CBC(&iLocal_329, 9);
			}
		}
	}
}

void func_469()
{
	int iVar0;
	
	if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_333)))
	{
		iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_333));
		if (unk_0xA89AE5060232966A(iVar0))
		{
			func_470(iVar0, 2);
		}
	}
	iLocal_333++;
	if (iLocal_333 >= unk_0x945535897333587B())
	{
		iLocal_333 = 0;
	}
}

void func_470(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1573867.f_18)))
	{
		return;
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_2, iParam0))
	{
		if (Global_1573867 < iParam1 && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 0);
			return;
		}
		if (Global_1573867 != 0)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 1);
		}
		Global_1573867 = 0;
		Global_1573867.f_2 = 0;
	}
	unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_2), iParam0);
	if (((!func_8(iParam0) && !func_471(iParam0)) && !func_14(iParam0, 0)) && !func_7(iParam0))
	{
		Global_1573867++;
	}
}

bool func_471(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10);
}

void func_472(int iParam0, int iParam1)
{
	Local_2724[iParam0 /*11*/] = iParam1;
}

int func_473()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_725.f_526[iVar0 /*46*/].f_1 = func_58();
		iVar0++;
	}
	return 1;
}

int func_474()
{
	return Local_637.f_0;
}

int func_475(int iParam0)
{
	return Local_2724[iParam0 /*11*/];
}

void func_476()
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 6))
	{
		func_490();
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 6);
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 7))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 4) || unk_0x236D8AD7EE179F46(Global_1573867.f_1, 16))
		{
			if (((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_211()) && func_12(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 7);
				func_208("FME_PASINT", 30000);
				func_207(1);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 17))
		{
			if (func_110() && !func_109())
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 23))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_12(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0xA83A609D74168B30())
		{
			if (func_488())
			{
				func_208("AMEV_GA_RP", -1);
				func_207(1);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 23);
			}
		}
	}
	if (unk_0xDB10DED5ABC4AA20() && unk_0x37F19465A7165331() == 15)
	{
		if (func_487(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF96ADDF61615476B(1344549371))
			{
				unk_0x10F474DA4DF674D9(1344549371);
			}
		}
		else if (unk_0xF96ADDF61615476B(1344549371))
		{
			unk_0x53D82E134017815A(1344549371);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 9))
	{
		if ((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_211()) && func_12(unk_0x1329891157A54C63(), 1, 1)) && !func_108(unk_0x1329891157A54C63(), 21))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 9);
			func_486(0);
			func_208("FME_TBL00", -1);
			func_207(1);
		}
	}
	if (func_287(unk_0x1329891157A54C63()))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if ((func_108(unk_0x1329891157A54C63(), 21) && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 20)) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 19))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 18);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if (((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_211()) && func_12(unk_0x1329891157A54C63(), 1, 1)) && unk_0xECDEA377354CBDA4()) && !Global_2451473.f_4631)
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 18);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 19);
				func_208("AMTT_RPAS", -1);
				func_207(1);
			}
		}
	}
	if ((((func_287(unk_0x1329891157A54C63()) && !func_8(unk_0x1329891157A54C63())) && func_230(unk_0x1329891157A54C63()) != 146) && !func_7(unk_0x1329891157A54C63())) && !func_107(unk_0x1329891157A54C63()))
	{
		if (func_310(func_230(unk_0x1329891157A54C63())))
		{
			unk_0xF637D39758718565(unk_0x1329891157A54C63());
		}
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 22);
		}
		if (func_344(unk_0x1329891157A54C63()) || func_305())
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10))
			{
				if (func_485(func_230(unk_0x1329891157A54C63())))
				{
					if (func_177(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_309(1);
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 10);
			}
		}
		if (func_487(unk_0x1329891157A54C63()))
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11))
			{
				if (!Global_90861.f_8)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
					func_307(1);
				}
				if (!func_484())
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 13);
					func_306();
				}
				if (!Global_2391042)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
					if (func_177(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_309(1);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 11);
			}
		}
		else
		{
			func_482(0);
		}
	}
	else
	{
		func_482(1);
	}
	func_477();
	if (func_304(func_230(unk_0x1329891157A54C63())) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
	}
	if ((func_110() && !func_109()) || func_108(unk_0x1329891157A54C63(), 21))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
	}
}

void func_477()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_211())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_368(iVar2))
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
				if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
				{
					unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 26);
				}
				func_478(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
	{
		func_44(&(Global_1573867.f_21));
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 26);
	}
}

void func_478(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1573867.f_21)))
	{
		func_2(&(Global_1573867.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573867.f_21), iParam1, 0))
	{
		if (func_460() > 0)
		{
			func_481(iParam0);
			if (func_205("AMEV_LBD_HELP"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			func_44(&(Global_1573867.f_21));
		}
	}
	else
	{
		func_480(0);
		func_479();
	}
}

void func_479()
{
	Global_2451473.f_4374 = 0;
}

void func_480(int iParam0)
{
	Global_1334766.f_68 = iParam0;
}

void func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_482(int iParam0)
{
	if ((unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10) && iParam0)) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22) && iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 12))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 12);
			func_307(0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 13);
			func_483();
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 14);
			func_309(0);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 11);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 10);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 22);
	}
}

void func_483()
{
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4541), 0);
}

bool func_484()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_4541, 0);
}

int func_485(int iParam0)
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
			return func_487(unk_0x1329891157A54C63());
		
		case 133:
			return (func_305() || func_5(func_229()));
		
		default:
	}
	return 0;
}

void func_486(int iParam0)
{
	int iVar0;
	
	iVar0 = func_152(2506, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 0);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 1);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 3);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 4))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 4);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 6))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 6);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 7))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 7);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 9))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 9);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 10))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 10);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 11);
		}
	}
	func_143(2506, iVar0, -1, 1);
}

int func_487(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_488()
{
	int iVar0;
	
	if (!func_45(&(Global_1573867.f_15)))
	{
		func_2(&(Global_1573867.f_15), 0, 0);
		Global_1573867.f_17 = 0;
	}
	else if (func_1(&(Global_1573867.f_15), 1000, 0))
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(Global_1573867.f_17)))
		{
			iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(Global_1573867.f_17));
			if (unk_0xA89AE5060232966A(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_489(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0x1329891157A54C63()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573867.f_17++;
		if (Global_1573867.f_17 >= 32)
		{
			Global_1573867.f_17 = 0;
			func_44(&(Global_1573867.f_15));
		}
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_147(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1585045[iVar0 /*400*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_490()
{
	unk_0x9BAE0FF806E5C2E5(5);
	func_492();
	unk_0x5B6D37392F5991C3(1f);
	unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 8);
	func_491();
}

void func_491()
{
	if (Global_1708196)
	{
		if (unk_0x236D8AD7EE179F46(Global_1708197, 0))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 1))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 1);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 5))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 5);
		}
		if (unk_0x0017826B6757A11F(-355737150))
		{
			unk_0xFF3E86C4D581F64B(-355737150, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-580979506))
		{
			unk_0xFF3E86C4D581F64B(-580979506, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1426452475))
		{
			unk_0xFF3E86C4D581F64B(-1426452475, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(745417724))
		{
			unk_0xFF3E86C4D581F64B(745417724, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1305304906))
		{
			unk_0xFF3E86C4D581F64B(-1305304906, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1543175077))
		{
			unk_0xFF3E86C4D581F64B(-1543175077, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-811770997))
		{
			unk_0xFF3E86C4D581F64B(-811770997, 1, 0, 0);
		}
		Global_1708197 = 0;
	}
	Global_1708196 = 0;
}

void func_492()
{
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4633 = -1;
	Global_2451473.f_4632 = 1f;
}

int func_493()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2451473.f_4539)
	{
		return 0;
	}
	if ((!func_45(&(Local_637.f_39)) && !func_45(&(Local_637.f_41))) && !func_45(&(Local_637.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0xD74C7D8D2E5E43D2();
	if (func_45(&(Local_637.f_41)))
	{
		iVar0 = func_494(&uVar2, &(Local_637.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_637.f_39)))
	{
		iVar0 = func_494(&uVar2, &(Local_637.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_637.f_43)))
	{
		iVar0 = func_494(&uVar2, &(Local_637.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_494(var uParam0, var uParam1)
{
	return unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(*uParam0, *uParam1));
}

int func_495()
{
	if (func_496())
	{
		return 1;
	}
	return 0;
}

bool func_496()
{
	return Global_1573867.f_23;
}

int func_497()
{
	bool bVar0;
	
	func_502(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_501())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_500())
	{
		return 1;
	}
	if (func_499(157))
	{
		if (!func_498())
		{
			return 1;
		}
	}
	if (func_499(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_312() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_312()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_498()
{
	return Global_2428865.f_573;
}

int func_499(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_500()
{
	return Global_2436988;
}

bool func_501()
{
	return Global_2428865.f_568;
}

void func_502(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_503(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_503(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_504(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_504(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_505()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_506()
{
	int iVar0;
	
	if (func_497())
	{
		Local_3077.f_5 = 5;
	}
	else if (unk_0x236D8AD7EE179F46(Local_637.f_2, 0))
	{
		Local_3077.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_3077.f_5 = 1;
	}
	else
	{
		Local_3077.f_5 = 2;
	}
	Local_3077.f_0 = Local_637.f_52;
	Local_3077.f_1 = Local_637.f_53;
	Local_3077.f_4 = Local_637.f_66;
	Local_3077.f_3 = Local_637.f_51;
	Local_3077.f_10 = (unk_0xC7224E4F41E00BE3() - Local_3077.f_9);
	if (!Global_262145.f_9262)
	{
		if (Local_3077.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x519AAFF77CC141DF() != -1)
	{
		func_529(Local_3077, Local_637.f_3, Local_2724[unk_0x519AAFF77CC141DF() /*11*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0x236D8AD7EE179F46(iLocal_329, 4))
	{
		unk_0x98A5E5B909F1B162(iLocal_337);
		unk_0xC69E84EBBD7166E6(&iLocal_329, 4);
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x236D8AD7EE179F46(iLocal_623, iVar0) && !unk_0xBDC7EB9D855C9610(uLocal_624[iVar0]))
		{
			unk_0x98A5E5B909F1B162(uLocal_624[iVar0]);
		}
		iVar0++;
	}
	func_295();
	func_347(1, 1);
	unk_0x78FC0556E1FBFA0F(0);
	func_370(0);
	func_302(Local_637.f_3, 0);
	func_507(133, 0, Local_637.f_37 == 6);
	func_301(23, 0);
	if (func_216() >= 0f)
	{
		unk_0xEFC0B8BE1535B071(0f, 0);
	}
	unk_0x00B0B4FFD88664E1();
	unk_0xC23A229F78DAD92A();
}

void func_507(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1329891157A54C63() != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 13);
		}
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 14);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 21);
	}
	func_525();
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
	unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_524(func_230(unk_0x1329891157A54C63()));
		func_301(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x1329891157A54C63() != -1) && func_523(unk_0x1329891157A54C63()) >= 12)
		{
			func_522(2518, -1);
			iVar1 = func_152(2518, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 5);
			}
		}
		func_521();
		func_520();
		func_519();
		func_512();
		func_511();
		func_490();
		func_510();
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1628), 2);
		func_509();
		func_112();
	}
	if (unk_0xF96ADDF61615476B(1344549371))
	{
		unk_0x53D82E134017815A(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (unk_0x1329891157A54C63() != -1 && !func_108(unk_0x1329891157A54C63(), 21))
		{
			func_309(0);
			func_307(0);
			func_508();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2438842 = -1;
			func_46(26, -1);
		}
	}
	Global_2450427 = 1;
}

void func_508()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_509()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 1);
	}
	if (Global_2451473.f_4540 > 0)
	{
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_KILL");
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
		unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x094B864326B5FE96(1);
		Global_2451473.f_4540 = 0;
		unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
		unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
		if (!unk_0xD994929E13CC1ED5(unk_0x11CA2334E341B424(), "am_pi_menu"))
		{
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
		}
	}
}

void func_510()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573867 = { Var0 };
}

void func_511()
{
	var uVar0;
	
	Global_1318828 = uVar0;
}

void func_512()
{
	Global_2404607.f_20 = { Global_2406143 };
	Global_2404607.f_22 = { Global_2406145 };
	func_513(1, 1);
}

void func_513(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404607.f_39 = { Global_2406162 };
	}
	else
	{
		Global_2404607.f_39 = { Global_2406162 };
		Global_2404607.f_39.f_49 = { Global_2406162.f_49 };
		Global_2404607.f_39.f_52 = Global_2406162.f_52;
		Global_2404607.f_39.f_53 = Global_2406162.f_53;
	}
	if (bParam0)
	{
		func_518();
	}
	func_515(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_514(0);
	func_115();
}

void func_514(bool bParam0)
{
	if (bParam0)
	{
		Global_2404607.f_615 = 0;
	}
	else
	{
		Global_2404607.f_615 = 1;
	}
}

void func_515(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404607.f_1121 = iParam1;
		Global_2404607.f_1122 = iParam2;
		func_516();
		func_340(8, 0, 0);
		Global_2404607.f_616 = 1;
		Global_2404607.f_1125 = iParam3;
		Global_2404607.f_1126 = iParam4;
		Global_2404607.f_1123 = iParam5;
		Global_2404607.f_1124 = iParam6;
		Global_2404607.f_1127 = iParam7;
		Global_2404607.f_1128 = iParam8;
		Global_2404607.f_1129 = iParam9;
	}
	else
	{
		func_516();
		func_340(0, 0, 0);
		Global_2404607.f_616 = 0;
	}
}

void func_516()
{
	func_517();
	Global_2404607.f_617 = 0;
}

void func_517()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404607.f_618[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_518()
{
	Global_2404607.f_344 = { Global_2406467 };
}

void func_519()
{
	Global_2451473.f_4541 = 0;
}

void func_520()
{
	if (unk_0x1329891157A54C63() != -1)
	{
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1 = 0;
	}
}

void func_521()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (iVar0 != -1)
	{
		Global_1606167[iVar0 /*12*/] = -1;
	}
}

void func_522(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_152(iParam0, func_148(iParam1), 0);
	iVar0++;
	if (!func_151(iParam0))
	{
		func_143(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_144(iParam0, iVar0, iParam1, 1);
	}
}

int func_523(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_192.f_6;
}

int func_524(int iParam0)
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
			if (func_487(unk_0x1329891157A54C63()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_525()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3) || unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 5))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 5);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 3);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 4);
	}
	func_528(0);
	func_527(0);
	func_526(0);
}

void func_526(int iParam0)
{
	if (Global_2451473.f_4362 != iParam0)
	{
		Global_2451473.f_4362 = iParam0;
	}
}

void func_527(bool bParam0)
{
	if (Global_2451473.f_4361 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2451473.f_4361 = bParam0;
	}
}

void func_528(int iParam0)
{
	if (Global_2451473.f_4359 != iParam0)
	{
		Global_2451473.f_4359 = iParam0;
	}
}

void func_529(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x11CA2334E341B424();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69020)
	{
		if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x873A507463AEADAD(&Var1);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x7F79069287DE07E5(&Var14);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x79FB900F8BBD70D4(&Var28);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x38D7FC94D929810F(&Var52);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_penned_in"))
		{
			unk_0x308932840CD4CC5F(&Param0);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xD32EF874013A489C(&Var66);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xFEFB7107D5ABDC62(&Var79);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xB9AF9560738D57F9(&Var93);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x71C684296070EB75(&Var107);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xA10EAC86FFC2F674(&Var123);
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xFA0B3892D04539F2(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x501D8C12E466C8AF(&Var150);
			}
		}
		else if (unk_0xD994929E13CC1ED5(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2271CB417FFB4D70(&Var164);
		}
	}
}

int func_530(struct<20> Param0)
{
	func_538(func_539(Param0.f_0), Param0);
	unk_0x473FC121743BE890(0);
	unk_0xCD9A6588DBAF710A(func_537(9));
	func_534(0, -1, 0);
	func_532(133);
	unk_0x19F630B59442E836(&Local_637, 88);
	unk_0xCBCBE0D8DD0EF168(&Local_2724, 353);
	if (!func_531())
	{
		func_506();
	}
	if (unk_0x1C7D9BFDF15A02B4())
	{
		unk_0x33967CC5BBA849B8(&(Local_637.f_52), &(Local_637.f_53));
	}
	Local_3077.f_2 = unk_0x8C283330B889AF48();
	unk_0xE6E19E3BBABCBC24(0);
	return 1;
}

int func_531()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_501())
		{
			return 0;
		}
		if (func_499(155))
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

void func_532(int iParam0)
{
	func_510();
	func_533();
	func_519();
	Global_1573867.f_4 = iParam0;
	Global_1573867.f_5 = iParam0;
	func_317(iParam0, -1);
	func_27(&(Global_1573867.f_18), 0, 0);
	Global_2451473.f_4403 = 0;
	Global_2437628[0] = func_58();
	Global_2437628[1] = func_58();
	Global_2437628[2] = func_58();
	Global_2437628[3] = func_58();
	Global_2437628[4] = func_58();
	func_112();
	func_202();
	if (func_110() && !func_109())
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 17);
	}
}

void func_533()
{
	var uVar0;
	
	Global_1573891 = uVar0;
}

int func_534(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_536();
			}
			else
			{
				return 0;
			}
		}
		if (!func_535())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_536();
					}
					else
					{
						return 0;
					}
				}
				if (func_501())
				{
					if (!bParam2)
					{
						func_536();
					}
					else
					{
						return 0;
					}
				}
				if (func_499(155))
				{
					if (!bParam2)
					{
						func_536();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_536();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_536();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_536();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_535()
{
	return Global_1315867;
}

void func_536()
{
	unk_0xC23A229F78DAD92A();
}

int func_537(int iParam0)
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

void func_538(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_536();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_539(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}


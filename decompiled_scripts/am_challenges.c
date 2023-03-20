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
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_100[65];
	float fLocal_296 = 0f;
	struct<3> Local_297 = { 0, 0, 0 } ;
	struct<3> Local_300 = { 0, 0, 0 } ;
	struct<3> Local_303 = { 0, 0, 0 } ;
	struct<3> Local_306 = { 0, 0, 0 } ;
	float fLocal_309 = 0f;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	float fLocal_330 = 0f;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	struct<3> Local_343[65];
	var uLocal_539[3] = { 0, 0, 0 };
	var uLocal_543[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_609[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	var uLocal_623[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	struct<68> Local_636 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_704 = 0;
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
	struct<527> Local_724 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1251 = -1;
	var uLocal_1252 = 0;
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
	var uLocal_1272 = -1082130432;
	var uLocal_1273 = 3;
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
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = -1;
	var uLocal_1297 = -1;
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
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = -1082130432;
	var uLocal_1319 = 3;
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
	var uLocal_1342 = -1;
	var uLocal_1343 = -1;
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
	var uLocal_1364 = -1082130432;
	var uLocal_1365 = 3;
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
	var uLocal_1410 = -1082130432;
	var uLocal_1411 = 3;
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
	var uLocal_1434 = -1;
	var uLocal_1435 = -1;
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
	var uLocal_1456 = -1082130432;
	var uLocal_1457 = 3;
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
	var uLocal_1502 = -1082130432;
	var uLocal_1503 = 3;
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
	var uLocal_1526 = -1;
	var uLocal_1527 = -1;
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
	var uLocal_1548 = -1082130432;
	var uLocal_1549 = 3;
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
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
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
	var uLocal_1594 = -1082130432;
	var uLocal_1595 = 3;
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
	var uLocal_1618 = -1;
	var uLocal_1619 = -1;
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
	var uLocal_1639 = 0;
	var uLocal_1640 = -1082130432;
	var uLocal_1641 = 3;
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
	var uLocal_1663 = 0;
	var uLocal_1664 = -1;
	var uLocal_1665 = -1;
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
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = -1082130432;
	var uLocal_1687 = 3;
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
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = -1;
	var uLocal_1711 = -1;
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
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = -1082130432;
	var uLocal_1733 = 3;
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
	var uLocal_1755 = 0;
	var uLocal_1756 = -1;
	var uLocal_1757 = -1;
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
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = -1082130432;
	var uLocal_1779 = 3;
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
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = -1;
	var uLocal_1803 = -1;
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
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = -1082130432;
	var uLocal_1825 = 3;
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
	var uLocal_1847 = 0;
	var uLocal_1848 = -1;
	var uLocal_1849 = -1;
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
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = -1082130432;
	var uLocal_1871 = 3;
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
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = -1;
	var uLocal_1895 = -1;
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
	var uLocal_1915 = 0;
	var uLocal_1916 = -1082130432;
	var uLocal_1917 = 3;
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
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = -1;
	var uLocal_1941 = -1;
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
	var uLocal_1962 = -1082130432;
	var uLocal_1963 = 3;
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
	var uLocal_1985 = 0;
	var uLocal_1986 = -1;
	var uLocal_1987 = -1;
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
	var uLocal_2008 = -1082130432;
	var uLocal_2009 = 3;
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
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
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
	var uLocal_2054 = -1082130432;
	var uLocal_2055 = 3;
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
	var uLocal_2078 = -1;
	var uLocal_2079 = -1;
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
	var uLocal_2099 = 0;
	var uLocal_2100 = -1082130432;
	var uLocal_2101 = 3;
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
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = -1;
	var uLocal_2125 = -1;
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
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = -1082130432;
	var uLocal_2147 = 3;
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
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = -1;
	var uLocal_2171 = -1;
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
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = -1082130432;
	var uLocal_2193 = 3;
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
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = -1;
	var uLocal_2217 = -1;
	var uLocal_2218 = 0;
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
	var uLocal_2238 = -1082130432;
	var uLocal_2239 = 3;
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
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = -1;
	var uLocal_2263 = -1;
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
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = -1082130432;
	var uLocal_2285 = 3;
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
	var uLocal_2307 = 0;
	var uLocal_2308 = -1;
	var uLocal_2309 = -1;
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
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = -1082130432;
	var uLocal_2331 = 3;
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
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
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
	var uLocal_2376 = -1082130432;
	var uLocal_2377 = 3;
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
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = -1;
	var uLocal_2401 = -1;
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
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = -1082130432;
	var uLocal_2423 = 3;
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
	var uLocal_2468 = -1082130432;
	var uLocal_2469 = 3;
	var uLocal_2470 = 0;
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
	var uLocal_2492 = -1;
	var uLocal_2493 = -1;
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
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = -1082130432;
	var uLocal_2515 = 3;
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
	var uLocal_2560 = -1082130432;
	var uLocal_2561 = 3;
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
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = -1;
	var uLocal_2585 = -1;
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
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = -1082130432;
	var uLocal_2607 = 3;
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
	var uLocal_2630 = -1;
	var uLocal_2631 = -1;
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
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = -1082130432;
	var uLocal_2653 = 3;
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
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = -1;
	var uLocal_2677 = -1;
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
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = -1082130432;
	var uLocal_2699 = 3;
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
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = -1;
	struct<8> Local_2723[32];
	struct<12> Local_2980 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_296 = 40000f;
	iLocal_332 = unk_0x74F076F396F8C361();
	iLocal_333 = -1;
	iLocal_334 = -1;
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_525(ScriptParam_0))
		{
			func_501();
		}
	}
	while (true)
	{
		func_500();
		if (func_492() || func_491())
		{
			func_501();
		}
		func_474();
		switch (func_473(unk_0x065E5245E0BD74E4()))
		{
			case 0:
				if (func_472() == 1)
				{
					if (func_471())
					{
						func_470(unk_0x065E5245E0BD74E4(), 1);
					}
				}
				break;
			
			case 1:
				if (func_472() == 1)
				{
					func_82();
					func_73();
				}
				else if (func_472() == 3)
				{
					func_470(unk_0x065E5245E0BD74E4(), 3);
				}
				break;
			
			case 3:
				func_501();
				break;
		}
		if (unk_0xE9849174628A9C50())
		{
			switch (func_472())
			{
				case 0:
					if (func_60())
					{
						func_59(1);
					}
					break;
				
				case 1:
					if (Local_636.f_37 == 6)
					{
						func_59(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_310, 1000, 0))
					{
						func_59(3);
					}
					break;
				
				case 3:
					func_501();
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
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0x889D01384B54BCE3(Local_636.f_2, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_636.f_2), 0);
			Local_636.f_1 = unk_0x519586565311459B();
		}
	}
	switch (Local_636.f_37)
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
			if (func_1(&(Local_636.f_43), func_29(), 0) || unk_0x889D01384B54BCE3(Local_636.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_636.f_38 = unk_0x519586565311459B();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_636.f_39), func_28(0), 0) || unk_0x889D01384B54BCE3(Local_636.f_2, 0))
			{
				if (!unk_0x889D01384B54BCE3(Local_636.f_2, 1))
				{
					Local_636.f_1 = unk_0x519586565311459B();
					unk_0xD0E2BFCE93AE3ABD(&(Local_636.f_2), 1);
					func_27(&(Local_636.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_334, &iLocal_333);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_636.f_41), 20000, 0) || Local_636.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_636.f_3))
				{
					func_27(&(Local_636.f_45), 0, 0);
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
		if (unk_0xCB5D8B19B62A3B89(Local_636.f_67[iVar0 /*2*/].f_1) && !unk_0xE44A580B551C3645(unk_0xD65CB1FBC5B5BA6A(Local_636.f_67[iVar0 /*2*/].f_1)))
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
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0x889D01384B54BCE3(Local_2723[iVar1 /*8*/].f_1, 1) || Local_2723[iVar1 /*8*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0x889D01384B54BCE3(Local_2723[iVar1 /*8*/].f_1, 0))
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
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 163;
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
	Param0.f_1 = unk_0x1788E93557766241();
	if (!iParam14 == 0)
	{
		unk_0xD311A006D41D0704(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1788E93557766241() || iParam0)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar2);
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
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
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
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x889D01384B54BCE3(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xD0E2BFCE93AE3ABD(&(Local_636.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar0));
				if (unk_0x38FA37FE3518BA38(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_636.f_50)
	{
		Local_636.f_50 = iVar1;
	}
	else
	{
		Local_636.f_66 = (Local_636.f_50 - iVar1);
	}
	if (iVar2 > Local_636.f_51)
	{
		Local_636.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
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
		fVar0 = unk_0xBBDA792448DB5A89(Local_2723[iParam0 /*8*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4);
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
	switch (Local_636.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_8593)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_8594)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_8595)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_8596)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_8597)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_8598)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_8599 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_8600)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_8601)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_8602)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_8603)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_8604))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_8605))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_8717)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_8718)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_8608))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_8610))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_8611))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_8612))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_636.f_3)
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
		if (Local_636.f_4[iParam0] == unk_0x044A481E863E2F6B() && func_21(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4, 0))
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
	switch (Local_636.f_3)
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
	
	iVar0 = Local_2723[iParam0 /*8*/].f_4;
	iVar1 = Local_2723[iParam0 /*8*/].f_4.f_2;
	if (!unk_0x889D01384B54BCE3(Local_636.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_636.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_636.f_49++;
			unk_0xD0E2BFCE93AE3ABD(&(Local_636.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_636.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_636.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_636.f_4[iVar3] < 0 || func_21(iVar0, Local_2723[Local_636.f_4[iVar3] /*8*/].f_4)) || func_24(iVar0, Local_2723[Local_636.f_4[iVar3] /*8*/].f_4, iVar1, Local_2723[Local_636.f_4[iVar3] /*8*/].f_4.f_2))
		{
			iVar4 = Local_636.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_333 = iVar3;
				iLocal_334 = iParam0;
			}
			Local_636.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_636.f_4[iVar5] == iParam0)
				{
					Local_636.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_636.f_3 == 2)
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
	
	if (unk_0x889D01384B54BCE3(Local_636.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_636.f_4[iVar0] == iParam0)
			{
				Local_636.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x29DB79DD4D939B38(&(Local_636.f_48), iParam0);
		unk_0x29DB79DD4D939B38(&(Local_636.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x519586565311459B();
		}
		else
		{
			*uParam0 = unk_0x4EAB1171B13C220B();
		}
	}
	else
	{
		*uParam0 = unk_0x09560C7DE2A384BD();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0x889D01384B54BCE3(Local_636.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_636.f_3)
	{
		case 0:
			return Global_262145.f_7924;
		
		case 8:
			return Global_262145.f_7925;
		
		case 3:
			return Global_262145.f_7926;
		
		case 1:
			return Global_262145.f_8703;
		
		case 6:
			return Global_262145.f_8704;
		
		case 10:
			return Global_262145.f_8706;
		
		case 11:
			return Global_262145.f_8708;
		
		case 12:
			return Global_262145.f_8709;
		
		case 15:
			return Global_262145.f_8713;
		
		case 16:
			return Global_262145.f_8714;
		
		case 17:
			return Global_262145.f_8715;
		
		case 18:
			return Global_262145.f_8716;
		
		case 13:
			return Global_262145.f_8707;
		
		case 14:
			return Global_262145.f_8710;
		
		case 2:
			return Global_262145.f_7928;
		
		case 7:
			return Global_262145.f_8705;
		
		case 9:
			return Global_262145.f_8711;
		
		case 5:
			return Global_262145.f_7929;
		
		case 4:
			return Global_262145.f_7927;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_8673;
}

void func_30(int iParam0)
{
	Local_636.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_41() && ((Local_636.f_37 == 0 || func_5(Local_636.f_3)) || Local_636.f_54 < 10))
	{
		Var0 = { Local_636.f_67[iLocal_329 /*2*/] };
		if (func_40(Var0.f_0))
		{
			if (!unk_0x86CB59A6776A7C27(Var0.f_1))
			{
				if (func_38(Local_636.f_3, iLocal_329, &Var2, &uVar5))
				{
					Local_636.f_55[iLocal_329] = func_34(iLocal_329);
					if (unk_0x889D01384B54BCE3(Local_2723[Local_636.f_55[iLocal_329] /*8*/].f_2, iLocal_329))
					{
						if (func_33(&(Local_636.f_67[iLocal_329 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0))
						{
							unk_0xC777E659B01E4FAF(unk_0xD65CB1FBC5B5BA6A(Local_636.f_67[iLocal_329 /*2*/].f_1), 1);
							unk_0x542B8BF5C21F2470(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), 1);
							unk_0x940C6B8BF42B190B(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), 1);
							unk_0xC733E2116FC4A765(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), 0);
							func_32(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), 1);
							if (unk_0x67BE6A47B59A2390("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x67BE6A47B59A2390("MPBitset", 3))
							{
								if (unk_0x53D28141CF743B83(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0xD0997DAAAB203234(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), "MPBitset");
								}
								unk_0xD0E2BFCE93AE3ABD(&iVar6, 10);
								unk_0xD0E2BFCE93AE3ABD(&iVar6, 11);
								unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_329 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_636.f_55[iLocal_329] = -1;
							Local_636.f_54++;
						}
					}
				}
			}
		}
		iLocal_329++;
		if (iLocal_329 >= 10)
		{
			iLocal_329 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x67BE6A47B59A2390("MPBitset", 3))
	{
		if (unk_0x53D28141CF743B83(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xD0997DAAAB203234(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xD0E2BFCE93AE3ABD(&uVar0, 13);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&uVar0, 13);
		}
		unk_0x0AB30E4FF0AE0C22(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x6B2CA196CD4C58D1(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x597CB55BA0825820(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x9BB6F54E415071A1(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x16645C5D9329E9F2(uVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(uVar0, iParam10);
		if (unk_0xF5F2A2EAFEFB36D2(iVar0))
		{
			if (bParam8)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
			else
			{
				unk_0x59262222326E6883(*uParam0, 0);
			}
		}
		unk_0x4852ECC2C24A1A6C(iVar0, iParam9);
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
		while (iVar0 <= (unk_0x3F202553F90D4442() - 1))
		{
			if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
			{
				iVar8 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar0));
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
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
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
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

bool func_41()
{
	return (func_5(Local_636.f_3) || func_39(Local_636.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x2E8B9FEEE576BA13() < iParam0)
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
	if (func_45(&(Global_1573734.f_18)))
	{
		if (!func_1(&(Global_1573734.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1573734.f_18));
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
	if (iParam1 && unk_0x1BCC42769F2B1858() < iParam0)
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
	return unk_0x889D01384B54BCE3(Global_1573734.f_1, 0);
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
			unk_0xD7E6FF46C7CE81D1(0, iParam1);
			break;
		
		default:
			uVar1 = func_47(iParam1);
			iVar0 = unk_0x7058289E8DD601D6(uVar1);
			if (unk_0x889D01384B54BCE3(iVar0, iParam0))
			{
				unk_0x29DB79DD4D939B38(&iVar0, iParam0);
				unk_0xD7E6FF46C7CE81D1(iVar0, iParam1);
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
	uVar1 = unk_0x7058289E8DD601D6(uVar0);
	return unk_0x889D01384B54BCE3(uVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)
{
	if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 2) && !func_8(unk_0x1788E93557766241()))
	{
		if (unk_0x06771AF7795B3ECF(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x06771AF7795B3ECF(sParam1))
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 2);
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
		if (Global_2422491.f_2418)
		{
			return 0;
		}
	}
	func_56(uParam0);
	func_53(uParam0);
	if (func_52(uParam0->f_1))
	{
		if (Global_2422491.f_2136[0 /*70*/].f_2 == 0)
		{
			Global_2422491.f_2136[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422491.f_2136[0 /*70*/].f_1 == 13 || Global_2422491.f_2136[0 /*70*/].f_1 == 52) || Global_2422491.f_2136[0 /*70*/].f_1 == 53) || Global_2422491.f_2136[0 /*70*/].f_1 == 57)
		{
			Global_2422491.f_2136[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422491.f_2136[iVar0 + 1 /*70*/] = { Global_2422491.f_2136[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422491.f_2136[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422491.f_2136[iVar0 /*70*/].f_2 == 0)
		{
			Global_2422491.f_2136[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_2136[iVar0 /*70*/].f_63), 1);
			Global_2422491.f_2136[iVar0 /*70*/].f_2 = 5;
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
	Local_636.f_0 = iParam0;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_636.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_636.f_39));
	func_65();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_636.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_61();
	}
	return 1;
}

void func_61()
{
	int iVar0;
	
	if (func_39(Local_636.f_3))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_636.f_67[iVar0 /*2*/] = func_64();
			iVar0++;
		}
	}
	else if (Local_636.f_3 == 12)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_636.f_67[iVar0 /*2*/] = func_63();
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_636.f_67[iVar0 /*2*/] = func_62();
			iVar0++;
		}
	}
}

int func_62()
{
	int iVar0;
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 2);
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
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 2);
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
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 2);
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
	Local_636.f_3 = iVar0;
	func_66(func_68(133, iVar0, 0, 0));
}

void func_66(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 383;
	Var0.f_1 = unk_0x1788E93557766241();
	Var0.f_2 = iParam0;
	iVar3 = func_67(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 3, iVar3);
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
		iVar2 = unk_0x42C0B50857BF923B(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1788E93557766241() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
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
	
	iVar0[0] = Global_262145.f_9002;
	iVar0[1] = Global_262145.f_8675;
	iVar0[2] = Global_262145.f_9006;
	iVar0[3] = Global_262145.f_9004;
	iVar0[4] = Global_262145.f_9005;
	iVar0[5] = Global_262145.f_9007;
	iVar0[6] = Global_262145.f_8676;
	iVar0[7] = Global_262145.f_8677;
	iVar0[8] = Global_262145.f_9003;
	iVar0[9] = Global_262145.f_8683;
	iVar0[10] = Global_262145.f_8678;
	iVar0[11] = Global_262145.f_8680;
	iVar0[12] = Global_262145.f_8681;
	iVar0[13] = Global_262145.f_8679;
	iVar0[14] = Global_262145.f_8682;
	iVar0[15] = Global_262145.f_8685;
	iVar0[16] = Global_262145.f_8686;
	iVar0[17] = Global_262145.f_8687;
	iVar0[18] = Global_262145.f_8688;
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
	fVar22 = unk_0x1E253A1A83763D22(0f, fVar20);
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
		if (iVar0 < Global_262145.f_6420)
		{
			if (Global_2442061.f_124[iVar0 /*2*/] == iVar1 && Global_2442061.f_124[iVar0 /*2*/].f_1 == func_68(iParam0, iParam1, iParam2, iParam3))
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
			return Global_262145.f_7918;
		
		case 1:
			return Global_262145.f_8689;
		
		case 6:
			return Global_262145.f_8690;
		
		case 7:
			return Global_262145.f_8691;
		
		case 8:
			return Global_262145.f_7919;
		
		case 3:
			return Global_262145.f_7920;
		
		case 4:
			return Global_262145.f_7921;
		
		case 2:
			return Global_262145.f_7922;
		
		case 5:
			return Global_262145.f_7923;
		
		case 9:
			return Global_262145.f_8697;
		
		case 10:
			return Global_262145.f_8692;
		
		case 11:
			return Global_262145.f_8694;
		
		case 12:
			return Global_262145.f_8695;
		
		case 15:
			return Global_262145.f_8699;
		
		case 16:
			return Global_262145.f_8700;
		
		case 17:
			return Global_262145.f_8701;
		
		case 18:
			return Global_262145.f_8702;
		
		case 13:
			return Global_262145.f_8693;
		
		case 14:
			return Global_262145.f_8696;
		
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
			if (Local_636.f_55[iVar0] == unk_0x044A481E863E2F6B())
			{
				if (func_74(iVar0))
				{
					if (!unk_0x889D01384B54BCE3(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_2, iVar0))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_2), iVar0);
					}
				}
				else if (unk_0x889D01384B54BCE3(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_2, iVar0))
				{
					unk_0x29DB79DD4D939B38(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_2), iVar0);
				}
			}
			else if (unk_0x889D01384B54BCE3(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_2, iVar0))
			{
				unk_0x29DB79DD4D939B38(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_2), iVar0);
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
	Global_2404570 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x233BBF4CAB603F14(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xB04974FC0ED6E892(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xB04974FC0ED6E892(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2F82A7CF030B6A1D(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404570++;
	if (bParam13)
	{
		if (unk_0xDBC834909DE748A2(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404570++;
	if (fParam14 > 0f)
	{
		if (func_78(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404570++;
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
	Global_2404570++;
	return 1;
}

int func_76(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4970185D4CC64616(func_36(unk_0x1788E93557766241()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7A98E0DD2E6FAB7A(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if ((func_77(iVar1) || !bParam10) && !Global_2414327[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0xA2D6C1E24AF2E058(iVar1) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xA2D6C1E24AF2E058(iVar1) != unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))) || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0x4970185D4CC64616(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xA2D6C1E24AF2E058(iVar1) != iParam8 || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0x4970185D4CC64616(func_36(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
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
	if (unk_0x14D5064869773C21(unk_0xFF34D923BFB5E9FB(iParam0)) || Global_2414327[iParam0 /*255*/].f_239)
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
		if ((iParam8 == 1 && unk_0x1788E93557766241() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DE0B96E966FD817(unk_0xFF34D923BFB5E9FB(iVar1)) && func_77(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) != unk_0xA2D6C1E24AF2E058(iVar1))) || unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
						{
							if (((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && uParam9) && bParam6) && func_79(iVar1))
							{
							}
							else if (unk_0x538DF9E5B1DF01EB(unk_0xFF34D923BFB5E9FB(iVar1)))
							{
								if (unk_0x4970185D4CC64616(func_36(iVar1), Param0, 1) < fParam3)
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
	if (func_81(unk_0x1788E93557766241(), iParam0))
	{
		return 1;
	}
	Global_2446020 = { func_80(iParam0) };
	if (unk_0x765DD998E5AD03DC(&Global_2446020))
	{
		return 1;
	}
	return 0;
}

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_80(iParam0) };
		Global_2446033 = { func_80(iParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
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
	
	func_467();
	func_466();
	if (func_464())
	{
		func_379();
	}
	if (!func_7(unk_0x1788E93557766241()))
	{
		if (func_371())
		{
			if (unk_0x889D01384B54BCE3(iLocal_324, 6))
			{
				unk_0x29DB79DD4D939B38(&iLocal_324, 6);
			}
			switch (Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_3)
			{
				case 0:
					if (Local_636.f_37 < 2)
					{
						if (Local_636.f_3 != -1)
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
					if (Local_2980.f_8 == 0)
					{
						Local_2980.f_8 = unk_0x5C7391B560C251C7();
					}
					if (Local_636.f_37 >= 2)
					{
						func_369(2);
						Local_2980.f_9 = unk_0x5C7391B560C251C7();
					}
					if (func_41())
					{
						func_363(0);
					}
					func_361((func_29() - func_362(&(Local_636.f_43), 0, 0)));
					func_358(func_360((func_29() - func_362(&(Local_636.f_43), 0, 0)), 0), func_359(Local_636.f_3));
					func_347(0, 0);
					func_338();
					func_321();
					if (func_320())
					{
						func_319();
					}
					break;
				
				case 2:
					if (Local_636.f_37 > 2)
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
						func_302(Local_636.f_3, 1);
						func_301(23, 1);
						if (Local_2980.f_8 == 0)
						{
							Local_2980.f_8 = unk_0x5C7391B560C251C7();
						}
						if (Local_2980.f_9 == 0)
						{
							Local_2980.f_9 = unk_0x5C7391B560C251C7();
						}
						func_297();
						unk_0x26D99D5A82FD18E8(1);
						if (func_318())
						{
							unk_0xABC4F2A6D7D56CF4(0f);
							unk_0xCC68D69AF0F39112(0);
						}
						if (Local_636.f_3 == 14)
						{
							func_296(&Local_343);
						}
						func_295();
						if (!func_7(unk_0x1788E93557766241()))
						{
							func_50(62, "AMCH_STARTED", func_294(Local_636.f_3), func_54(), -1, func_54());
							if (func_291("AMCH_WARN", func_293(Local_636.f_3), func_292(Local_636.f_3)))
							{
								unk_0xFD1E0AEC770DAF2E(1);
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
					if (Local_636.f_37 > 3)
					{
						iLocal_326 = 0;
						func_369(4);
					}
					else
					{
						if (!unk_0x889D01384B54BCE3(Local_636.f_2, 1))
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
						unk_0xFAC75988A7D078D3(unk_0x1788E93557766241());
					}
					func_236();
					func_212();
					func_379();
					func_347(0, 1);
					func_338();
					func_321();
					func_363(2);
					func_363(5);
					func_363(7);
					break;
				
				case 4:
					if (func_204(&uLocal_335, !unk_0x889D01384B54BCE3(Local_636.f_2, 0)) || unk_0x889D01384B54BCE3(Local_636.f_2, 0))
					{
						if (func_5(Local_636.f_3))
						{
							if (Local_636.f_37 == 5)
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
					func_379();
					func_347(1, 1);
					func_295();
					break;
				
				case 5:
					if (Local_636.f_37 > 5)
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
		Var0 = { Local_636.f_67[iLocal_342 /*2*/] };
		if (unk_0x86CB59A6776A7C27(Var0.f_1))
		{
			iVar2 = unk_0x8CB435AA1E25DA51(Var0.f_1);
			if (unk_0xC7402AE8FD6AACA2(iVar2))
			{
				if (!unk_0xECFECDAD51A6184F(iVar2, 0))
				{
					unk_0x3A3C5A6572B3C611(&iVar2);
				}
			}
		}
		iLocal_342++;
		if (iLocal_342 >= 10)
		{
			iLocal_342 = 0;
			iLocal_635 = iLocal_634;
			iLocal_634 = 0;
		}
	}
}

void func_84()
{
	if (Local_636.f_37 == 5)
	{
		if (unk_0x86CB59A6776A7C27(Local_636.f_67[iLocal_342 /*2*/].f_1))
		{
			if (!unk_0xE44A580B551C3645(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_342 /*2*/].f_1)))
			{
				if (!unk_0x889D01384B54BCE3(iLocal_622, iLocal_342))
				{
					unk_0xD0E2BFCE93AE3ABD(&iLocal_622, iLocal_342);
					uLocal_623[iLocal_342] = unk_0x74F076F396F8C361();
					unk_0x9AF4B23C594DCEE5(uLocal_623[iLocal_342], "Explosion_Countdown", unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_342 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x4AE2DA60B696489F(uLocal_623[iLocal_342], "Time", 30f);
				}
				if ((30000 - func_362(&(Local_636.f_45), 0, 0)) >= 0)
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_342 /*2*/].f_1), 0))
					{
						func_363(1);
						iLocal_634 = 1;
					}
				}
				else if (unk_0x428E17610BCE75C2(Local_636.f_67[iLocal_342 /*2*/].f_1))
				{
					unk_0xFAF4121083211853(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_342 /*2*/].f_1));
					unk_0x195C2A3356A7BB67(unk_0x8CB435AA1E25DA51(Local_636.f_67[iLocal_342 /*2*/].f_1), 1, 0, 0);
				}
			}
			else if (unk_0x889D01384B54BCE3(iLocal_622, iLocal_342) && !unk_0xB834C37F11282062(uLocal_623[iLocal_342]))
			{
				unk_0x7CB5477E93D6A302(uLocal_623[iLocal_342]);
			}
		}
		if (iLocal_635)
		{
			if (!func_89(unk_0x1788E93557766241()))
			{
				func_86(func_360((30000 - func_362(&(Local_636.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0);
				func_85();
			}
		}
	}
}

void func_85()
{
	Global_1328903.f_941 = 1;
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
		Global_1328903.f_1 = 1;
		func_87(7, iVar0);
		Global_1328903.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3911.f_172[iVar0] = iParam2;
		Global_1328903.f_3911.f_216[iVar0] = iParam3;
		Global_1328903.f_3911.f_183[iVar0] = iParam4;
		Global_1328903.f_3911.f_194[iVar0] = iParam5;
		Global_1328903.f_3911.f_249[iVar0] = iParam6;
		Global_1328903.f_3911.f_260[iVar0] = iParam7;
		Global_1328903.f_3911.f_205[iVar0] = iParam8;
		Global_1328903.f_3911.f_314[iVar0] = iParam9;
		Global_1328903.f_3911.f_325[iVar0] = iParam10;
		Global_1328903.f_3911.f_357[iVar0] = iParam11;
		Global_1328903.f_3911.f_238[iVar0] = iParam12;
		Global_1328903.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_87(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

int func_89(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_90())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

void func_91()
{
	if (((func_12(unk_0x1788E93557766241(), 1, 1) && !func_7(unk_0x1788E93557766241())) && !func_107(unk_0x1788E93557766241())) && func_371())
	{
		if (Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_3 == 1)
		{
			func_104(func_106(Local_636.f_3), func_293(Local_636.f_3), 0);
		}
		else if (Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_3 == 3)
		{
			if (!unk_0x889D01384B54BCE3(iLocal_324, 10))
			{
				func_92(func_292(Local_636.f_3), 0);
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
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (func_102(sParam0))
	{
		return;
	}
	func_96();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_95();
	func_94(bParam1);
	func_93();
}

void func_93()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 1);
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0x29DB79DD4D939B38(&(Global_1312577.f_39), 0);
}

void func_95()
{
	Global_1312577.f_8 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 86400000);
	Global_1312577.f_9 = unk_0x519586565311459B();
}

void func_96()
{
	func_98();
	func_97(0);
}

void func_97(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1DAD7CE53BEE7710();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x519586565311459B();
		Global_1312577.f_9 = unk_0x519586565311459B();
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
		unk_0x0945E066A4F6A0E3(&(Global_1312577.f_10));
		func_99();
		unk_0x88A8396804C29D3A();
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
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			unk_0x53B64327E3305DCB(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
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
	unk_0xA5FA652414A5B56F(&(Global_1312577.f_10));
	func_99();
	return unk_0x516C4E27C3C5FFAD();
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
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
}

bool func_103(char* sParam0)
{
	if (!func_100())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

void func_104(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (unk_0x06771AF7795B3ECF(sParam1))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam1) > 23)
	{
		return;
	}
	if (func_105(sParam0, sParam1))
	{
		return;
	}
	func_96();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
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
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam1))
	{
		return 0;
	}
	if (!unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam1) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

char* func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357())) || unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357())) || unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) || unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) || unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357())) || unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357())) || unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) || unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) || unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357())) || unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
					iVar1 = unk_0xA609E58449080951(iVar0);
					if (unk_0x2FDD93A1F5E63663(iVar1) && unk_0x271F7EEEF6BC4943(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_sniperrifle"), 0) && !unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_heavysniper"), 0)) && !unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357())) || unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357())) || unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) || unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) || unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357()))
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
	if (iParam0 == unk_0x1788E93557766241())
	{
		if ((func_110() && !func_109()) || func_108(unk_0x1788E93557766241(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1573734.f_13)))
		{
			if (!func_1(&(Global_1573734.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1573734.f_13));
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 9);
}

bool func_108(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
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
	if (!unk_0x889D01384B54BCE3(iLocal_324, 6))
	{
		unk_0xD28031B36012E8A1();
		func_347(1, 1);
		unk_0x7CB5477E93D6A302(iLocal_332);
		unk_0x29DB79DD4D939B38(&iLocal_324, 4);
		func_115();
		func_113();
		unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 6);
		func_112();
	}
}

void func_112()
{
	Global_1602607[unk_0x1788E93557766241() /*12*/].f_6 = 0;
}

void func_113()
{
	if (Global_2408676.f_6 == unk_0x60C807BBCBE66CC7())
	{
		func_114();
	}
}

void func_114()
{
	struct<25> Var0;
	
	if (unk_0xDECCEB462707CB3E(Global_2408676.f_6))
	{
		if (!Global_2408676.f_6 == unk_0x60C807BBCBE66CC7())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2408676 = { Var0 };
	Global_2408676.f_6 = -1;
}

void func_115()
{
	struct<4> Var0;
	
	if (Global_2404570.f_438.f_1 == unk_0x60C807BBCBE66CC7())
	{
		Global_2404570.f_438 = { Var0 };
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0x889D01384B54BCE3(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1, 0))
	{
		if (func_7(unk_0x1788E93557766241()))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1), 0);
			return;
		}
		if (func_107(unk_0x1788E93557766241()))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1), 0);
			return;
		}
		func_175(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_2980.f_6 = (Local_2980.f_6 + iVar0);
			if (!Global_262145.f_9147)
			{
				func_174(10, Local_2980.f_6);
			}
			Global_2437347 = iVar0;
			if (func_173())
			{
				func_166(-1468524125, iVar0, &uVar6, 0, 1);
			}
			else
			{
				unk_0x7A7A166B0DDE10EE(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_2980.f_7 = (Local_2980.f_7 + iVar1);
			func_165();
			func_117(0, unk_0xA16EC202D9D35357(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
		}
		unk_0xD0E2BFCE93AE3ABD(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1), 0);
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
		if (unk_0x538DF9E5B1DF01EB(iParam1))
		{
			if (unk_0xA34B85701D8A1FA8(iParam1))
			{
				uVar1 = unk_0xA7CC89FF539E1376(iParam1);
				func_124(unk_0xCDC62EA66023BC94(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
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
	if (iParam0 == func_121(unk_0xA16EC202D9D35357()))
	{
		func_120(1);
	}
	func_124(Var0, iParam1, 0, sParam2);
}

void func_120(int iParam0)
{
	Global_2422491.f_1320 = iParam0;
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
	
	if (iParam0 == func_123(unk_0xA16EC202D9D35357()) && unk_0x95AD511976EEFC6B(unk_0x862704CFD32408F9()) == 4)
	{
		Var0 = { unk_0xA783C6007920169C(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		fVar3 = unk_0xD1613577C809E98B(iParam0);
	}
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 0f, 0f, fVar10) };
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
			if (Global_2422491.f_739[iVar0 /*29*/].f_6 == 0 || Global_2422491.f_739[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422491.f_739[iVar1 /*29*/] = { Param0 };
			Global_2422491.f_739[iVar1 /*29*/].f_6 = 1;
			Global_2422491.f_739[iVar1 /*29*/].f_4 = func_127(Global_2422491.f_739[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422491.f_739[iVar1 /*29*/].f_7 = unk_0x519586565311459B();
			Global_2422491.f_739[iVar1 /*29*/].f_3 = iParam3;
			Global_2422491.f_739[iVar1 /*29*/].f_8 = iParam4;
			Global_2422491.f_739[iVar1 /*29*/].f_9 = func_126();
			Global_2422491.f_739[iVar1 /*29*/].f_10 = func_125();
			StringCopy(&(Global_2422491.f_739[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_125()
{
	if (Global_2422491.f_1320)
	{
		Global_2422491.f_1320 = 0;
		return 1;
	}
	Global_2422491.f_1320 = 0;
	return 0;
}

var func_126()
{
	var uVar0;
	
	uVar0 = Global_2422491.f_1322;
	Global_2422491.f_1322 = 1;
	return uVar0;
}

float func_127(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4970185D4CC64616(unk_0x8F759040B8D528AF(), Param0, 1);
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
	
	if (func_164(unk_0x1788E93557766241()) || func_163(unk_0x1788E93557766241()))
	{
		if (Global_262145.f_7316 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7316;
		}
	}
	else if (Global_262145.f_4982 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4982;
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
			func_150(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_139((func_149(unk_0x1788E93557766241()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x449D2838B793CF3B(iVar1, iParam8, iParam9);
				if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_2 != -1)
				{
					func_150(1160, iVar1, -1);
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
				func_130((func_132(unk_0x1788E93557766241()) + iVar1));
			}
			else
			{
				func_130((func_132(unk_0x1788E93557766241()) + iParam6));
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
		Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_5 = iParam0;
		func_131(joaat("mpply_globalxp"), iParam0);
	}
}

void func_131(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
}

int func_132(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return func_133(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_5;
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
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_80(unk_0x1788E93557766241()) };
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(&Var0))
		{
			iVar13 = func_137(func_138(&Var0));
			if (iVar13 == 0)
			{
				func_136(&Global_1336376, iParam0);
				func_135(joaat("mpply_crew_local_xp_0"), Global_1336376);
			}
			else if (iVar13 == 1)
			{
				func_136(&Global_1336377, iParam0);
				func_135(joaat("mpply_crew_local_xp_1"), Global_1336377);
			}
			else if (iVar13 == 2)
			{
				func_136(&Global_1336378, iParam0);
				func_135(joaat("mpply_crew_local_xp_2"), Global_1336378);
			}
			else if (iVar13 == 3)
			{
				func_136(&Global_1336379, iParam0);
				func_135(joaat("mpply_crew_local_xp_3"), Global_1336379);
			}
			else if (iVar13 == 4)
			{
				func_136(&Global_1336380, iParam0);
				func_135(joaat("mpply_crew_local_xp_4"), Global_1336380);
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
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = uParam1;
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
	if (iParam0 == Global_1336371)
	{
		return 0;
	}
	else if (iParam0 == Global_1336372)
	{
		return 1;
	}
	else if (iParam0 == Global_1336373)
	{
		return 2;
	}
	else if (iParam0 == Global_1336374)
	{
		return 3;
	}
	else if (iParam0 == Global_1336375)
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
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(uParam0))
		{
			return Global_2435485;
		}
	}
	return Global_2435485;
}

void func_139(int iParam0, int iParam1, int iParam2)
{
	if (func_161())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7291 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1336491[func_148(-1)])
				{
					unk_0x449D2838B793CF3B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1336491[func_148(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_147(unk_0x1788E93557766241()))
		{
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_1 = iParam0;
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_6 = func_145(iParam0, 1);
		}
		func_144(634, iParam0, -1, 1);
		func_143(635, func_145(iParam0, 1), -1, 1);
		Global_1336491[func_148(-1)] = iParam0;
		func_140(7, 0);
	}
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_142(iParam0, iParam1))
	{
		iVar0 = func_141();
		Global_2435463[iVar0] = iParam0;
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
		if (Global_2435463[iVar1] == 0)
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
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_148(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_148(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_148(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_148(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_148(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_148(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_148(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_148(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_148(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_148(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_148(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_148(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_148(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_148(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_148(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_148(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_148(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_148(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_148(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_148(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_148(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_148(iParam2)] = iParam1;
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
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
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
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
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
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_148(-1)];
			}
			else if (func_147(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_148(-1)];
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
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_148(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
	
	iVar1 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		iVar4 = unk_0xCADBCF2AA9B38F40(iVar0);
		if (unk_0x0AFA8C49D2EED33A(iVar4))
		{
			iVar5 = unk_0xCE0E12AD191025E5(iVar4);
			if (unk_0xA2D6C1E24AF2E058(iVar5) != -1)
			{
				if (unk_0xA2D6C1E24AF2E058(iVar5) == iVar1 || func_155(unk_0xA2D6C1E24AF2E058(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x1788E93557766241())
					{
						if (func_81(unk_0x1788E93557766241(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_154(*iParam0, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_154(*iParam0, 100) * (20f * Global_262145.f_4189)));
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

int func_155(int iParam0, int iParam1)
{
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
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
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
		while (iVar0 < unk_0x3F202553F90D4442())
		{
			iVar3 = iVar0;
			if (unk_0x0AFA8C49D2EED33A(iVar3))
			{
				iVar4 = unk_0xCE0E12AD191025E5(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1788E93557766241())
					{
						iVar1++;
						if (func_81(unk_0x1788E93557766241(), iVar4))
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
				if (iVar4 != unk_0x1788E93557766241())
				{
					if (func_157(unk_0x1788E93557766241(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(unk_0x1788E93557766241(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_154(*iParam1, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_154(*iParam1, 100) * (20f * Global_262145.f_4189)));
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
	
	if (unk_0xE6226327EBCC990E() != 3)
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
		if (unk_0x045E73D0141F51B4(iParam0) > func_149(unk_0x1788E93557766241()))
		{
			iParam0 = -func_149(unk_0x1788E93557766241());
		}
	}
	if (func_160(8000, 0, 0) > 0)
	{
		if (func_160(8000, 0, 0) < (iParam0 + func_149(unk_0x1788E93557766241())))
		{
			iParam0 = (func_160(8000, 0, 0) - func_149(unk_0x1788E93557766241()));
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
	return Global_271370[iParam0];
}

int func_161()
{
	return 1;
}

int func_162(var uParam0)
{
	if (unk_0x8CD18E96F1984EE6(uParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B(uParam0, "") || unk_0x9BA82E09A986BA4B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_163(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

bool func_164(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

void func_165()
{
	Global_2436519 = 1;
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
		if (!unk_0xC9345B47FCA589CF(func_16()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_172(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_171(1, iParam4);
			Global_2538375 = 0;
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
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
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
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_170(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_171(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_172(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_173())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = uParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = uParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_173()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		return 1;
	}
	return 0;
}

void func_174(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2446992.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4932)
		{
			iParam1 = Global_262145.f_4932;
		}
		Global_2446992.f_270 = iParam1;
		Global_2446992.f_271 = 0;
	}
}

void func_175(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_17(unk_0x044A481E863E2F6B(), 1))
	{
		iVar0 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_636.f_1 - iLocal_322)) / 60f) / 1000f));
		if (iVar0 > Global_262145.f_9088)
		{
			iVar0 = Global_262145.f_9088;
		}
		else if (iVar0 < 1)
		{
			iVar0 = 1;
		}
		*uParam0 = (func_191() * iVar0);
		*uParam1 = (func_190() * iVar0);
		fVar1 = func_189();
		if (fVar1 > 0f && !unk_0x889D01384B54BCE3(Local_636.f_2, 0))
		{
			iVar2 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar2 > func_188())
			{
				iVar2 = func_188();
			}
			iVar3 = Local_636.f_51;
			if (iVar3 > func_187())
			{
				iVar3 = func_187();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_180(func_186(), func_185(), iVar2, fVar1, func_184(), func_183(), func_182(), iVar3)) * Global_262145.f_9101)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_180(func_179(), func_178(), iVar2, fVar1, func_184(), func_183(), func_182(), iVar3)) * Global_262145.f_9102)));
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
			unk_0xD0E2BFCE93AE3ABD(&Global_1573757, 1);
		}
	}
	else if (func_177(2))
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_1573757, 2);
	}
}

int func_177(int iParam0)
{
	var uVar0;
	
	uVar0 = func_152(2499, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x889D01384B54BCE3(uVar0, 0) && unk_0x889D01384B54BCE3(iVar0, 1)) && unk_0x889D01384B54BCE3(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x889D01384B54BCE3(iVar0, 3) && unk_0x889D01384B54BCE3(iVar0, 4)) && unk_0x889D01384B54BCE3(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x889D01384B54BCE3(iVar0, 6) && unk_0x889D01384B54BCE3(iVar0, 7)) && unk_0x889D01384B54BCE3(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x889D01384B54BCE3(iVar0, 9) && unk_0x889D01384B54BCE3(iVar0, 10)) && unk_0x889D01384B54BCE3(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_178()
{
	return Global_262145.f_8589;
}

int func_179()
{
	return Global_262145.f_8587;
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
	return Global_262145.f_8592;
}

float func_183()
{
	return Global_262145.f_8591;
}

float func_184()
{
	return Global_262145.f_8590;
}

int func_185()
{
	return Global_262145.f_8588;
}

int func_186()
{
	return Global_262145.f_8586;
}

int func_187()
{
	return Global_262145.f_8994;
}

int func_188()
{
	return Global_262145.f_8993;
}

var func_189()
{
	if (func_20(0))
	{
		return Global_262145.f_8613;
	}
	if (func_20(1))
	{
		return Global_262145.f_8614;
	}
	if (func_20(2))
	{
		return Global_262145.f_8615;
	}
	return Global_262145.f_8616;
}

int func_190()
{
	return Global_262145.f_8585;
}

int func_191()
{
	return Global_262145.f_8584;
}

void func_192()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (!unk_0x889D01384B54BCE3(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1, 1) && (func_203() || unk_0x889D01384B54BCE3(Local_636.f_2, 0)))
	{
		func_202();
		if (func_12(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0x889D01384B54BCE3(Local_636.f_2, 0))
			{
				if (func_238(0))
				{
					iVar2 = Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4;
					func_198(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_196(63, func_197(Local_636.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_293(Local_636.f_3), 1, 2);
						}
						else if (func_195())
						{
							func_196(68, func_197(Local_636.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_293(Local_636.f_3), 1, 2);
						}
						else
						{
							func_196(63, func_197(Local_636.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_293(Local_636.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_196(66, func_197(Local_636.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_293(Local_636.f_3), 1, 2);
						}
						else if (func_195())
						{
							func_196(74, func_197(Local_636.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_636.f_3), 1, 2);
						}
						else
						{
							func_196(66, func_197(Local_636.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_636.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_196(66, func_197(Local_636.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_293(Local_636.f_3), 1, 2);
						}
						else if (func_195())
						{
							func_196(74, func_197(Local_636.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_636.f_3), 1, 2);
						}
						else
						{
							func_196(66, func_197(Local_636.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_293(Local_636.f_3), 1, 2);
						}
					}
					else
					{
						uVar3 = unk_0xCADBCF2AA9B38F40(Local_636.f_4[0]);
						if (unk_0x0AFA8C49D2EED33A(uVar3))
						{
							iVar4 = unk_0xCE0E12AD191025E5(iVar3);
							if (Local_2723[Local_636.f_4[0] /*8*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2723[Local_636.f_4[0] /*8*/].f_4;
							func_198(&iVar0, &fVar1, iVar2, 1);
							if (func_18())
							{
								func_194(75, func_58(), func_197(Local_636.f_3, 0, 0, 0), "AMCH_LOSE", "AMCH_OVER", 15000, func_293(Local_636.f_3), -1, fVar1, 1, 2, unk_0xF3E5891C26514A74(iVar4));
							}
							else if (func_195())
							{
								func_194(76, func_58(), func_197(Local_636.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_293(Local_636.f_3), iVar0, -1082130432, 1, 2, unk_0xF3E5891C26514A74(iVar4));
							}
							else
							{
								func_194(75, func_58(), func_197(Local_636.f_3, 0, 0, iVar0), "AMCH_LOSE", "AMCH_OVER", 15000, func_293(Local_636.f_3), iVar0, -1082130432, 1, 2, unk_0xF3E5891C26514A74(iVar4));
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
			unk_0xD0E2BFCE93AE3ABD(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1), 1);
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
			if (unk_0xED95B7AD31CFE356())
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
			if (unk_0xED95B7AD31CFE356())
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
			*fParam1 = (func_199(Local_636.f_3, iParam2) / 10f);
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
			if (unk_0xED95B7AD31CFE356())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_201(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xED95B7AD31CFE356())
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
		if (Global_2422491.f_2136[iVar0 /*70*/].f_2 != 0)
		{
			Global_2422491.f_2136[iVar0 /*70*/].f_2 = 5;
			unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_2136[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_203()
{
	return unk_0x889D01384B54BCE3(Global_1573734.f_1, 25);
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
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 25);
				if (bParam1)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4402), 0);
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
					unk_0xFD1E0AEC770DAF2E(1);
				}
				func_209(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x29DB79DD4D939B38(&(Global_2446992.f_4402), 1);
				func_209(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x29DB79DD4D939B38(&(Global_2446992.f_4402), 1);
			return 1;
	}
	return 0;
}

bool func_205(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_206()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 0))
	{
		if (((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x889D01384B54BCE3(Global_2446992.f_734, 2)) && func_12(unk_0x1788E93557766241(), 1, 1)) && !Global_67066) && !Global_51940) && !unk_0xF4C685E933068D23())
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4402), 1);
			func_208("AMEV_LBD_HELP", -1);
			func_207(1);
			unk_0x29DB79DD4D939B38(&(Global_2446992.f_4402), 0);
		}
	}
}

void func_207(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_211())
	{
		unk_0xC2E1777941B4536E(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_208(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 0, iParam1);
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_210()
{
	Global_2436520 = 1;
}

bool func_211()
{
	return Global_2422491.f_2136[0 /*70*/].f_1 != 0;
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
	
	if (Local_636.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_235() && !func_89(unk_0x1788E93557766241()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_58();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_636.f_4[iVar16] > -1)
			{
				uVar26 = unk_0xCADBCF2AA9B38F40(Local_636.f_4[iVar16]);
				if (unk_0x0AFA8C49D2EED33A(uVar26))
				{
					iVar4 = unk_0xCE0E12AD191025E5(iVar26);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2723[Local_636.f_4[iVar16] /*8*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_198(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2723[Local_636.f_4[iVar16] /*8*/].f_4, 1);
								iVar24++;
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x044A481E863E2F6B();
		if (func_89(unk_0x1788E93557766241()))
		{
			uVar27 = func_232();
			iVar28 = unk_0x5D6FBED3ADADE26A(uVar27);
			if (unk_0x38FA37FE3518BA38(iVar28))
			{
				iVar29 = unk_0xB911B2B2BBDF3CCC(iVar28);
				if (unk_0x0AFA8C49D2EED33A(iVar29))
				{
					iVar17 = iVar29;
				}
			}
		}
		func_198(&iVar13, &fVar18, iLocal_326, 1);
		func_198(&iVar14, &fVar19, Local_2723[iVar17 /*8*/].f_4, 1);
		iVar30 = func_28(0);
		iVar31 = func_362(&(Local_636.f_39), 0, 0);
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
		if (unk_0x889D01384B54BCE3(iLocal_324, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_235() || Local_636.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_636.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_227(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_197(Local_636.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_228(), iVar25);
		}
		else if (func_195())
		{
			func_226(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_228(), iVar25);
		}
		else
		{
			func_217(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_197(Local_636.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_228(), iVar25);
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
		if (Local_636.f_37 == 3)
		{
			if (func_12(unk_0x1788E93557766241(), 1, 1))
			{
				if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()) || unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
				{
					iVar1 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iVar1, 0))
					{
						func_215(iVar1, &fLocal_330);
						fVar2 = (fVar0 + fLocal_330);
						unk_0xFF9942C3012E754C(fVar2, 1);
						func_214(fVar0);
						return;
					}
				}
			}
		}
		if (func_205("AMCH_FLYLOW"))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
		if (unk_0x889D01384B54BCE3(iLocal_324, 4))
		{
			unk_0x7CB5477E93D6A302(iLocal_332);
			unk_0x29DB79DD4D939B38(&iLocal_324, 4);
		}
		unk_0xFF9942C3012E754C(0f, 0);
	}
}

void func_214(float fParam0)
{
	float fVar0;
	
	if (unk_0x1A8EA222F9C67DBB(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_363(6);
			if (!unk_0x889D01384B54BCE3(iLocal_324, 4))
			{
				unk_0xC2E1777941B4536E(iLocal_332, "Altitude_Warning", "EXILE_1", 1);
				unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 4);
			}
		}
		else
		{
			if (func_205("AMCH_FLYLOW"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			if (unk_0x889D01384B54BCE3(iLocal_324, 4))
			{
				unk_0x7CB5477E93D6A302(iLocal_332);
				unk_0x29DB79DD4D939B38(&iLocal_324, 4);
			}
		}
	}
}

float func_215(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	Var1 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	unk_0x21B0D803C4C9C45E(Var1, uParam1, 1);
	unk_0x21B0D803C4C9C45E(Var1, &fVar4, 0);
	if (fVar4 < 0f)
	{
		func_363(3);
		unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 10);
		func_27(&uLocal_320, 0, 0);
	}
	else if (unk_0x889D01384B54BCE3(iLocal_324, 10))
	{
		if (func_1(&uLocal_320, 2000, 0))
		{
			unk_0x29DB79DD4D939B38(&iLocal_324, 10);
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
	switch (Local_636.f_3)
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
	if (((Global_2436194[0] != iParam0 || Global_2436194[1] != iParam1) || Global_2436194[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2436194[0] = iParam0;
	Global_2436194[1] = iParam1;
	Global_2436194[2] = iParam2;
	Global_2436194[3] = 0;
	Global_2436194[4] = 0;
	if (Global_2436194[0] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[0]);
			Global_2436200[0 /*16*/] = { func_221(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_218(iParam3, &(Global_2436200[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2436194[1] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[1]);
			Global_2436200[1 /*16*/] = { func_221(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_218(iParam4, &(Global_2436200[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2436194[2] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[2]);
			Global_2436200[2 /*16*/] = { func_221(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_218(iParam5, &(Global_2436200[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	if (bParam12)
	{
		func_218(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x1788E93557766241() != func_58())
			{
				if (func_107(unk_0x1788E93557766241()) == 0)
				{
					func_218(iParam7, unk_0xF3E5891C26514A74(unk_0x1788E93557766241()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_107(unk_0x1788E93557766241()) == 0)
			{
				func_218(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_107(unk_0x1788E93557766241()) == 0)
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
		Global_1328903.f_1 = 1;
		func_87(6, iVar0);
		Global_1328903.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3370.f_183[iVar0] = iParam3;
		Global_1328903.f_3370.f_172[iVar0] = iParam2;
		Global_1328903.f_3370.f_260[iVar0] = iParam4;
		Global_1328903.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1328903.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1328903.f_3370.f_443[iVar0] = iParam7;
		Global_1328903.f_3370.f_454[iVar0] = fParam8;
		Global_1328903.f_3370.f_497[iVar0] = iParam9;
		Global_1328903.f_3370.f_508[iVar0] = iParam10;
		Global_1328903.f_3370.f_205[iVar0] = iParam11;
		Global_1328903.f_3370.f_216[iVar0] = iParam12;
		Global_1328903.f_3370.f_227[iVar0] = iParam13;
		Global_1328903.f_3370.f_238[iVar0] = iParam14;
		Global_1328903.f_3370.f_249[iVar0] = iParam15;
		Global_1328903.f_3370.f_519[iVar0] = iParam16;
		Global_1328903.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_220())
		{
			Global_1328903.f_941 = 1;
		}
		if (unk_0xF6BAF9F0C2863FFE())
		{
			iVar2 = 0;
			unk_0x8C31DEE1FBBA2653(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1328903.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1328903.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1328903.f_941 = 1;
			}
			if (func_219())
			{
				Global_1328903.f_945 = 1;
			}
		}
	}
}

int func_219()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xF6BAF9F0C2863FFE())
	{
		unk_0x8C31DEE1FBBA2653(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_220()
{
	if ((unk_0x9BB5B38BEC8FE00F() == 8 || unk_0x9BB5B38BEC8FE00F() == 9) || unk_0x9BB5B38BEC8FE00F() == 10)
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
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_222()
{
	unk_0x8A5A9834DB717F2D(8);
	unk_0x8A5A9834DB717F2D(9);
	unk_0x8A5A9834DB717F2D(6);
	unk_0x8A5A9834DB717F2D(7);
	Global_2436523 = 1;
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
		if (func_12(unk_0x1788E93557766241(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_224()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

bool func_225()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 12);
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
	if (((Global_2436194[0] != iParam0 || Global_2436194[1] != iParam1) || Global_2436194[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2436194[0] = iParam0;
	Global_2436194[1] = iParam1;
	Global_2436194[2] = iParam2;
	Global_2436194[3] = 0;
	Global_2436194[4] = 0;
	if (Global_2436194[0] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[0]);
			Global_2436200[0 /*16*/] = { func_221(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_86(iParam3, &(Global_2436200[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0);
		}
	}
	if (Global_2436194[1] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[1]);
			Global_2436200[1 /*16*/] = { func_221(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_86(iParam4, &(Global_2436200[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0);
		}
	}
	if (Global_2436194[2] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[2]);
			Global_2436200[2 /*16*/] = { func_221(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_86(iParam5, &(Global_2436200[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0);
		}
	}
	if (bParam11)
	{
		func_86(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x1788E93557766241() != func_58())
			{
				if (func_107(unk_0x1788E93557766241()) == 0)
				{
					func_86(iParam7, unk_0xF3E5891C26514A74(unk_0x1788E93557766241()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_107(unk_0x1788E93557766241()) == 0)
			{
				func_86(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_107(unk_0x1788E93557766241()) == 0)
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
	if (((Global_2436194[0] != iParam0 || Global_2436194[1] != iParam1) || Global_2436194[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2436194[0] = iParam0;
	Global_2436194[1] = iParam1;
	Global_2436194[2] = iParam2;
	Global_2436194[3] = 0;
	Global_2436194[4] = 0;
	if (Global_2436194[0] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[0]);
			Global_2436200[0 /*16*/] = { func_221(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_218(-1, &(Global_2436200[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2436194[1] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[1]);
			Global_2436200[1 /*16*/] = { func_221(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_218(-1, &(Global_2436200[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2436194[2] != func_58())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[2]);
			Global_2436200[2 /*16*/] = { func_221(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_218(-1, &(Global_2436200[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	if (bParam12)
	{
		func_218(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x1788E93557766241() != func_58())
			{
				if (func_107(unk_0x1788E93557766241()) == 0)
				{
					func_218(-1, unk_0xF3E5891C26514A74(unk_0x1788E93557766241()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_107(unk_0x1788E93557766241()) == 0)
			{
				func_218(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_107(unk_0x1788E93557766241()) == 0)
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
	switch (func_230(unk_0x1788E93557766241()))
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
	if (func_230(unk_0x1788E93557766241()) == 133)
	{
		return Global_2446992.f_4620;
	}
	return -1;
}

int func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/];
	}
	return -1;
}

void func_231(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x0C380BB05B91042D())
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_2446992.f_4538)))
			{
				unk_0x435923F2389CD0AD(1);
				unk_0x495459882382D113("FM_COUNTDOWN_30S_FIRA");
				unk_0x124843CE93F39C27("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x5987D1942D40E165(&(Global_2446992.f_4538));
				unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
				unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
				unk_0x08E9BC7825B63619("AllowScoreAndRadio", 0);
			}
			if (Global_2446992.f_4546 > -1)
			{
				unk_0x0D992EF9B9F0C8E3(Global_2446992.f_4546);
				Global_2446992.f_4546 = -1;
			}
			Global_2446992.f_4536 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
		{
			if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 4))
			{
				if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 2))
				{
					if (unk_0x3E090BAC5411166D())
					{
						if ((!unk_0x9BA82E09A986BA4B(unk_0x0D1B4E500469970E(unk_0xD114A40C0BC7A580()), "OFF") && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0)) && !unk_0x06771AF7795B3ECF(&(Global_2446992.f_4538)))
						{
							StringCopy(&(Global_2446992.f_4538), "", 32);
							unk_0x495459882382D113("FM_COUNTDOWN_30S_FIRA");
							unk_0x124843CE93F39C27("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
							unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
							unk_0x08E9BC7825B63619("AllowScoreAndRadio", 0);
							unk_0x435923F2389CD0AD(1);
							unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 2);
						}
					}
				}
				else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0x889D01384B54BCE3(Global_2446992.f_4536, 5))
				{
					unk_0x5987D1942D40E165("OFF");
				}
			}
			else if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x495459882382D113("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x495459882382D113("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x495459882382D113("FM_COUNTDOWN_30S");
				}
				unk_0x3EF2F05E6EA65602("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 1);
			}
			else if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x6FA0C7CE0A9D9002() != 0)
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							StringCopy(&(Global_2446992.f_4538), unk_0x9733E8730500546E(), 32);
							unk_0x5987D1942D40E165("OFF");
						}
						unk_0x435923F2389CD0AD(1);
						unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 3))
				{
					Global_2446992.f_4546 = unk_0x74F076F396F8C361();
					unk_0xC2E1777941B4536E(Global_2446992.f_4546, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
			{
				Global_2446992.f_4536 = 0;
				Global_2446992.f_4546 = -1;
				unk_0x67583D67393F934F("FM_COUNTDOWN_30S_KILL");
				unk_0x435923F2389CD0AD(0);
				unk_0x495459882382D113("FM_PRE_COUNTDOWN_30S");
				unk_0x08E9BC7825B63619("DisableFlightMusic", 1);
				unk_0x08E9BC7825B63619("WantedMusicDisabled", 1);
				unk_0x08E9BC7825B63619("AllowScoreAndRadio", 1);
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 0);
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 2);
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 5);
				}
				else
				{
					unk_0x29DB79DD4D939B38(&(Global_2446992.f_4536), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
		{
			Global_2446992.f_4536 = 0;
			Global_2446992.f_4546 = -1;
			unk_0x67583D67393F934F("FM_COUNTDOWN_30S_KILL");
			unk_0x435923F2389CD0AD(0);
			unk_0x495459882382D113("FM_PRE_COUNTDOWN_30S");
			unk_0x08E9BC7825B63619("DisableFlightMusic", 1);
			unk_0x08E9BC7825B63619("WantedMusicDisabled", 1);
			unk_0x08E9BC7825B63619("AllowScoreAndRadio", 1);
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 0);
			if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 2);
			}
			else
			{
				unk_0x29DB79DD4D939B38(&(Global_2446992.f_4536), 2);
			}
		}
	}
}

var func_232()
{
	if (unk_0x538DF9E5B1DF01EB(func_234()))
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
	switch (Local_636.f_3)
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
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		Local_724.f_526[iVar0 /*46*/] = { Var1 };
		Local_724.f_526[iVar0 /*46*/].f_1 = func_58();
		if (Local_636.f_4[iVar0] > -1)
		{
			uVar48 = unk_0xCADBCF2AA9B38F40(Local_636.f_4[iVar0]);
			if (unk_0x0AFA8C49D2EED33A(uVar48))
			{
				iVar47 = unk_0xCE0E12AD191025E5(iVar48);
				if (!func_14(iVar47, 0))
				{
					Local_724.f_526[iVar0 /*46*/] = Local_636.f_4[iVar0];
					Local_724.f_526[iVar0 /*46*/].f_1 = iVar47;
					Local_724.f_526[iVar0 /*46*/].f_8 = Local_2723[Local_636.f_4[iVar0] /*8*/].f_4;
					Local_724.f_526[iVar0 /*46*/].f_29 = -1;
					Local_724.f_1.f_107 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_237()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1625), 19);
}

int func_238(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_636.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2723[iVar0 /*8*/].f_4, 0))
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
	
	func_198(&iVar1, &fVar2, iLocal_326, 1);
	switch (Local_636.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_241(sVar0, fVar2 >= 70f);
			if (unk_0x4CBFDAD06D630F7C(sVar0))
			{
				fVar2 = func_240(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x2914D9835AF0BC1D(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x55A8BECAF28A4EB7();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_241(sVar0, bVar3);
			if (unk_0x4CBFDAD06D630F7C(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_240(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_240(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x2914D9835AF0BC1D(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_331 != iLocal_326)
			{
				if (iLocal_326 > 0)
				{
					unk_0xC2E1777941B4536E(iVar5, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x4AE2DA60B696489F(iVar5, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0xC2E1777941B4536E(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_331 = iLocal_326;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_324, 3))
		{
			unk_0xC2E1777941B4536E(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 3);
		}
	}
	else if (unk_0x889D01384B54BCE3(iLocal_324, 3))
	{
		unk_0xC2E1777941B4536E(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0x29DB79DD4D939B38(&iLocal_324, 3);
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
		if (!unk_0x4CBFDAD06D630F7C(sParam0))
		{
			unk_0x3EF2F05E6EA65602(sParam0);
		}
	}
	else if (unk_0x4CBFDAD06D630F7C(sParam0))
	{
		unk_0x124843CE93F39C27(sParam0);
	}
}

void func_242()
{
	int iVar0;
	
	if ((!func_107(unk_0x1788E93557766241()) && !func_14(unk_0x1788E93557766241(), 0)) && func_12(unk_0x1788E93557766241(), 1, 1))
	{
		iVar0 = func_260();
		if (iVar0 != Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4)
		{
			if (func_21(iVar0, iLocal_323) || func_259(iVar0, iLocal_323))
			{
				if (!func_258() || func_1(&uLocal_312, 1000, 0))
				{
					func_27(&uLocal_312, 0, 0);
					iLocal_323 = iVar0;
					Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4 = iVar0;
					func_245();
					if (iLocal_322 == 0)
					{
						iLocal_322 = unk_0x519586565311459B();
					}
					if (Local_2980.f_11 == 0)
					{
						Local_2980.f_11 = unk_0x5C7391B560C251C7();
					}
				}
			}
		}
		iLocal_326 = func_243();
	}
}

int func_243()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_636.f_3)
	{
		case 0:
			fVar1 = unk_0x9EC8858184CD253A();
			break;
		
		case 1:
			fVar1 = unk_0xAFF47709F1D5DCCE();
			break;
		
		case 2:
			fVar1 = unk_0x55A8BECAF28A4EB7();
			break;
		
		case 3:
			fVar1 = unk_0x84A810B375E69C0E();
			break;
		
		case 4:
			fVar1 = unk_0xA943FD1722E11EFD();
			break;
		
		case 5:
			fVar1 = unk_0xBA9749CC94C1FD85();
			break;
		
		case 8:
			iVar0 = unk_0xE8853FBCE7D8D0D6();
			break;
		
		case 9:
			fVar1 = unk_0x32CAC93C9DE73D32();
			break;
		
		case 11:
			fVar1 = unk_0x6E0A5253375C4584();
			break;
		
		case 12:
			fVar1 = unk_0x6E0A5253375C4584();
			break;
		
		case 13:
			fVar1 = unk_0x0B8B7F74BF061C6D();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x045E73D0141F51B4(iVar0);
	func_244(&iVar2);
	if (iVar2 == iLocal_325)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0x889D01384B54BCE3(iLocal_324, 1))
			{
				func_27(&uLocal_314, 0, 0);
				Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4.f_2 = func_362(&uLocal_314, 0, 0);
				unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 1);
			}
			else if ((func_362(&uLocal_314, 0, 0) % 1000) == 0)
			{
				Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4.f_2 = func_362(&uLocal_314, 0, 0);
			}
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&iLocal_324, 1);
	}
	if ((func_21(iLocal_325, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_316, 2000, 0))
	{
		iVar2 = iLocal_325;
		unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 2);
	}
	else
	{
		iLocal_325 = iVar2;
		func_44(&uLocal_316);
		unk_0x29DB79DD4D939B38(&iLocal_324, 2);
	}
	return iVar2;
}

void func_244(int iParam0)
{
	switch (Local_636.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x1788E93557766241(), 1, 1))
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if ((((unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()) || unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357())) || unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) || unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) || unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357()))
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
	if (!unk_0x889D01384B54BCE3(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1, 2))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_1), 2);
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
			uVar0 = func_152(2445, -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, 0);
			func_250();
		}
		if (func_249(func_248(func_230(unk_0x1788E93557766241()))))
		{
			uVar0 = func_152(2445, -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, func_248(func_230(unk_0x1788E93557766241())));
			func_250();
		}
		if (func_247())
		{
			func_250();
		}
		if (func_230(unk_0x1788E93557766241()) > -1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 7);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 7);
	}
}

int func_247()
{
	if (Global_2422491.f_613.f_5 == -1)
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
	
	uVar0 = func_152(2445, -1, 0);
	return unk_0x889D01384B54BCE3(uVar0, iParam0);
}

void func_250()
{
	if (func_247())
	{
		Global_2422491.f_613.f_16 = 1;
	}
}

void func_251(int iParam0)
{
	if (func_110())
	{
		if (iParam0 == 1)
		{
			if (Global_2446992.f_4236 == -1)
			{
				Global_2446992.f_4236 = 60000;
			}
			func_27(&(Global_2446992.f_4234), 0, 0);
			if (Global_2446992.f_4239 == -1)
			{
				Global_2446992.f_4239 = 10000;
			}
			func_27(&(Global_2446992.f_4237), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_257();
		}
		if ((!unk_0x7A75BEF6DA1EDF3D() && !func_256()) && !func_252(unk_0x1788E93557766241()))
		{
			Global_973956 = 0;
		}
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_7 = 0;
	}
}

int func_252(int iParam0)
{
	if (func_253(iParam0, 1))
	{
		if (Global_1583725[iParam0 /*334*/] != 6)
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
	if (Global_1583725[iParam0 /*334*/] == -1)
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
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

bool func_256()
{
	return Global_2428577.f_711;
}

void func_257()
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_110())
		{
			if (func_12(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 0);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 0);
			}
			unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 1f);
			unk_0x7622D42AC5B41A4A(0);
			unk_0x5687AEB601657A7E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xAD7D800044E4059F(0);
			}
		}
		else
		{
			if (func_12(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 0);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 1);
				unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xAD7D800044E4059F(1);
				}
			}
			unk_0x7622D42AC5B41A4A(1);
			unk_0x5687AEB601657A7E(0);
		}
	}
}

int func_258()
{
	switch (Local_636.f_3)
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
	if (Local_636.f_3 == 17)
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
		if (Local_636.f_3 == 14)
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && func_274(unk_0xA16EC202D9D35357(), 0) == -1)
			{
				iVar2 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
				if ((!func_273(&iVar2, 0) || unk_0xA609E58449080951(iVar2) != joaat("dodo")) && unk_0x7F40BDE5E3EA9E62(iVar2))
				{
					func_266(0, 1, 0);
					if (func_265())
					{
						iVar3 = func_264();
						if (iVar3 >= 0)
						{
							if (!unk_0x889D01384B54BCE3(uLocal_539[func_263(iVar3)], func_262(iVar3)))
							{
								iLocal_327++;
								unk_0xD0E2BFCE93AE3ABD(&(uLocal_539[func_263(iVar3)]), func_262(iVar3));
							}
						}
					}
					iVar0 = iLocal_327;
				}
			}
		}
		else
		{
			iVar0 = func_261();
			iVar0 = (iVar0 - Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4.f_1);
		}
	}
	else
	{
		unk_0xF11F01D98113536A(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x045E73D0141F51B4(iVar0);
}

int func_261()
{
	switch (Local_636.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return func_152(141, -1, 0);
		
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
	return iLocal_89;
}

int func_265()
{
	if (iLocal_96 == 1)
	{
		iLocal_96 = 0;
		return 1;
	}
	return 0;
}

void func_266(int iParam0, bool bParam1, int iParam2)
{
	func_268(iParam0, iParam2);
	if (bParam1)
	{
		if (Local_297.f_2 < Local_300.f_2)
		{
			Local_297.f_2 = 0f;
		}
		else
		{
			Local_300.f_2 = 0f;
		}
		if (Local_303.f_2 < Local_306.f_2)
		{
			Local_303.f_2 = 0f;
		}
		else
		{
			Local_306.f_2 = 0f;
		}
	}
	switch (iLocal_90)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Local_100[iLocal_89 /*3*/]) < fLocal_296)
				{
					if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()) || unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
					{
						if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
						{
							if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0))
							{
								bLocal_91 = true;
								iLocal_90 = 1;
							}
							if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
							{
								bLocal_92 = true;
								iLocal_90 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()) && !unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
				{
					func_267();
				}
				else if (!unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
				{
					func_267();
				}
				else if (!unk_0x7F40BDE5E3EA9E62(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) && !bParam1)
				{
					func_267();
				}
				if (bLocal_91)
				{
					if (iLocal_95)
					{
						if (iLocal_94)
						{
							if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
							{
								func_267();
								iLocal_96 = 1;
							}
						}
						else if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
						{
							iLocal_94 = 1;
						}
						else if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
						{
							func_267();
						}
					}
					else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
					{
						iLocal_95 = 1;
					}
					else if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
					{
						func_267();
					}
				}
				else if (bLocal_92)
				{
					if (iLocal_95)
					{
						if (iLocal_93)
						{
							if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
							{
								func_267();
								iLocal_96 = 1;
							}
						}
						else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
						{
							iLocal_93 = 1;
						}
						else if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
						{
							func_267();
						}
					}
					else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
					{
						iLocal_95 = 1;
					}
					else if (!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_297, Local_300, fLocal_309, 0, 1, 0) && !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_303, Local_306, fLocal_309, 0, 1, 0))
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
	bLocal_91 = false;
	bLocal_92 = false;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_90 = 0;
}

void func_268(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_97 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_272(iVar0)) && (uParam1 || !func_271(iVar0)))
		{
			if (func_270(Local_97, Local_100[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_97, Local_100[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_89 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_269(iLocal_89);
}

void func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_297 = { 1103.014f, -233.0374f, 56.13004f };
			Local_300 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_309 = 30f;
			Local_303 = { 1093.589f, -248.5926f, 56.88639f };
			Local_306 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_297 = { 1044.182f, -324.5904f, 49.33408f };
			Local_300 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_309 = 30f;
			Local_303 = { 1007.983f, -320.6159f, 48.4543f };
			Local_306 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_297 = { 916.599f, -419.8782f, 35.62748f };
			Local_300 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_309 = 7f;
			Local_303 = { 912.1362f, -420.5161f, 35.38034f };
			Local_306 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_297 = { 757.7189f, -472.924f, 19.2535f };
			Local_300 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_309 = 20.75f;
			Local_303 = { 744.9114f, -480.7373f, 19.06514f };
			Local_306 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_297 = { 680.3677f, -581.1792f, 14.2145f };
			Local_300 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_309 = 45f;
			Local_303 = { 667.3692f, -610.5356f, 13.85401f };
			Local_306 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_297 = { 644.2497f, -844.7504f, 12.36707f };
			Local_300 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_309 = 25f;
			Local_303 = { 644.3659f, -859.3878f, 12.59677f };
			Local_306 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_297 = { 634.972f, -1011.64f, 10.92594f };
			Local_300 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_309 = 25f;
			Local_303 = { 634.9612f, -1029.123f, 10.61846f };
			Local_306 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_297 = { 645.7223f, -1191.215f, 10.45198f };
			Local_300 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_309 = 50f;
			Local_303 = { 645.7223f, -1228.966f, 10.98015f };
			Local_306 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_297 = { 642.1216f, -1295.73f, 9.005976f };
			Local_300 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_309 = 7f;
			Local_303 = { 644.7772f, -1298.168f, 9.128529f };
			Local_306 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_297 = { 686.5675f, -1444.71f, 9.065001f };
			Local_300 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_309 = 25f;
			Local_303 = { 682.3027f, -1429.872f, 9.890836f };
			Local_306 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_297 = { 718.7617f, -1734.313f, 9.082874f };
			Local_300 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_309 = 30f;
			Local_303 = { 717.5355f, -1748.646f, 9.363478f };
			Local_306 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_297 = { 694.3165f, -2049.806f, 0.009695f };
			Local_300 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_309 = 30f;
			Local_303 = { 693.1836f, -2063.225f, 0.429037f };
			Local_306 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_297 = { 642.6671f, -2494.551f, 0.468485f };
			Local_300 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_309 = 20f;
			Local_303 = { 647.0339f, -2506.202f, 0.583701f };
			Local_306 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_297 = { 691.8235f, -2558.219f, 0.363352f };
			Local_300 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_309 = 10.25f;
			Local_303 = { 695.7928f, -2561.034f, 0.346731f };
			Local_306 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_297 = { 723.6254f, -2562.171f, 0.255647f };
			Local_300 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_309 = 15f;
			Local_303 = { 735.765f, -2561.935f, 0.311182f };
			Local_306 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_297 = { 891.4387f, -2603.12f, 0f };
			Local_300 = { 704.4932f, -2634.793f, 45f };
			fLocal_309 = 20f;
			Local_303 = { 893.2578f, -2616.235f, 0f };
			Local_306 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_297 = { -2669.587f, 2491.96f, 2.043799f };
			Local_300 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_309 = 26.5f;
			Local_303 = { -2687.606f, 2494.868f, 2.608733f };
			Local_306 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_297 = { -1986.173f, 4521.799f, 0f };
			Local_300 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_309 = 17f;
			Local_303 = { -1995.668f, 4531.259f, 0f };
			Local_306 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_297 = { -526.0265f, 4472.442f, 0f };
			Local_300 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_309 = 10f;
			Local_303 = { -519.9281f, 4476.346f, 0f };
			Local_306 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_297 = { 98.1615f, 3384.489f, 45.45169f };
			Local_300 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_309 = 8f;
			Local_303 = { 152.6802f, 3346.793f, 45.02156f };
			Local_306 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_297 = { 147.8606f, 3406.796f, 38.03672f };
			Local_300 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_309 = 14.5f;
			Local_303 = { 130.0916f, 3425.417f, 38.05672f };
			Local_306 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_297 = { 2830.972f, 4967.14f, 34.56013f };
			Local_300 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_309 = 10f;
			Local_303 = { 2826.767f, 4964.185f, 34.10636f };
			Local_306 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_297 = { -151.5764f, 4264.417f, 31.04735f };
			Local_300 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_309 = 10f;
			Local_303 = { -148.3842f, 4261.071f, 31.57409f };
			Local_306 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_297 = { -426.6919f, 2964.272f, 14.848f };
			Local_300 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_309 = 7f;
			Local_303 = { -425.0283f, 2967.861f, 15.22699f };
			Local_306 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_297 = { -192.3414f, 2864.916f, 30.72595f };
			Local_300 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_309 = 10f;
			Local_303 = { -192.0129f, 2871.603f, 29.99943f };
			Local_306 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_297 = { 2539.185f, 2228.772f, 18.6102f };
			Local_300 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_309 = 10f;
			Local_303 = { 2543.708f, 2231.402f, 18.331f };
			Local_306 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_297 = { 2954.087f, 815.7209f, 0.037901f };
			Local_300 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_309 = 35f;
			Local_303 = { 2966.123f, 806.8889f, 0.544056f };
			Local_306 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_297 = { 2329.673f, -459.6648f, 70.24277f };
			Local_300 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_309 = 12f;
			Local_303 = { 2324.752f, -455.5238f, 70.25145f };
			Local_306 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_297 = { 1943.428f, -753.251f, 80.17905f };
			Local_300 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_309 = 7f;
			Local_303 = { 1943.366f, -758.287f, 80.32291f };
			Local_306 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_297 = { -271.2849f, -2414.993f, -10f };
			Local_300 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_309 = 30f;
			Local_303 = { -279.8399f, -2427.212f, -10f };
			Local_306 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_297 = { -1483f, 2691.428f, -10f };
			Local_300 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_309 = 12f;
			Local_303 = { -1478.152f, 2696.688f, -10f };
			Local_306 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_297 = { 222.1519f, -2343.487f, 0.039199f };
			Local_300 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_309 = 12f;
			Local_303 = { 216.959f, -2343.487f, 0.207734f };
			Local_306 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_297 = { 346.4622f, -2244.374f, 0.159779f };
			Local_300 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_309 = 20f;
			Local_303 = { 359.609f, -2244.468f, 0.129684f };
			Local_306 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_297 = { -1859.68f, -322.6357f, 56.16368f };
			Local_300 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_309 = 7.5f;
			Local_303 = { -1860.27f, -327.8634f, 57.543f };
			Local_306 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_297 = { -680.2632f, -600.818f, 69.11289f };
			Local_300 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_309 = 31.5f;
			Local_303 = { -680.6077f, -618.3658f, 69.27496f };
			Local_306 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_297 = { -1468.096f, -591.7158f, 67.05518f };
			Local_300 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_309 = 11.75f;
			Local_303 = { -1474.903f, -591.1215f, 67.08091f };
			Local_306 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_297 = { -1544.958f, -537.1475f, 72.44347f };
			Local_300 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_309 = 11.75f;
			Local_303 = { -1541.008f, -541.5494f, 71.61972f };
			Local_306 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_297 = { 333.2108f, -2727.274f, 20.71663f };
			Local_300 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_309 = 20f;
			Local_303 = { 343.1127f, -2727.236f, 20.23613f };
			Local_306 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_297 = { 1928.071f, 6228.355f, 43.49398f };
			Local_300 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_309 = 13f;
			Local_303 = { 1931.82f, 6235.634f, 43.37382f };
			Local_306 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_297 = { -736.4309f, -1590.921f, 10.80892f };
			Local_300 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_309 = 15f;
			Local_303 = { -727.2307f, -1585.221f, 11.78027f };
			Local_306 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_297 = { -676.3775f, -1548.553f, 12.33747f };
			Local_300 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_309 = 25f;
			Local_303 = { -654.203f, -1536.146f, 9.191055f };
			Local_306 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_297 = { -624.2344f, -1537.045f, 12.60193f };
			Local_300 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_309 = 8f;
			Local_303 = { -615.4003f, -1536.65f, 12.40271f };
			Local_306 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_297 = { -492.5057f, -1632.457f, 24.3307f };
			Local_300 = { -418.2088f, -1487.452f, 0f };
			fLocal_309 = 25f;
			Local_303 = { -486.2016f, -1636.095f, 24.20805f };
			Local_306 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_297 = { -359.3541f, -1639.693f, 13.13455f };
			Local_300 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_309 = 25f;
			Local_303 = { -378.1518f, -1705.66f, 12.47196f };
			Local_306 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_297 = { -243.4436f, -1814.623f, 25.69465f };
			Local_300 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_309 = 25f;
			Local_303 = { -235.1319f, -1822.094f, 25.86542f };
			Local_306 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_297 = { 84.55537f, -2046.159f, 13.30767f };
			Local_300 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_309 = 25f;
			Local_303 = { 17.90788f, -2035.773f, 12.62706f };
			Local_306 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_297 = { 221.5029f, -2232.766f, 9.88676f };
			Local_300 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_309 = 8f;
			Local_303 = { 218.583f, -2232.766f, 9.886198f };
			Local_306 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_297 = { 221.6518f, -2184.635f, 11.66457f };
			Local_300 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_309 = 8f;
			Local_303 = { 217.8995f, -2184.635f, 11.5405f };
			Local_306 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_297 = { 2326.57f, 1096.031f, 76.31458f };
			Local_300 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_309 = 21f;
			Local_303 = { 2334.453f, 1103.067f, 76.26603f };
			Local_306 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_297 = { 2379.442f, 1150.776f, 58.79632f };
			Local_300 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_309 = 12f;
			Local_303 = { 2374.064f, 1146.282f, 58.83331f };
			Local_306 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_297 = { -1179.405f, -355.2554f, 56.53003f };
			Local_300 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_309 = 12.5f;
			Local_303 = { -1178.385f, -361.8784f, 56.15081f };
			Local_306 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_297 = { -921.3846f, -384.94f, 137.0181f };
			Local_300 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_309 = 16f;
			Local_303 = { -914.1658f, -387.9444f, 137.0794f };
			Local_306 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_297 = { -740.2564f, 246.4529f, 132.2922f };
			Local_300 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_309 = 16f;
			Local_303 = { -726.6429f, 253.0676f, 132.3319f };
			Local_306 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_297 = { -771.2068f, 268.2729f, 132.1689f };
			Local_300 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_309 = 16f;
			Local_303 = { -770.8035f, 310.8625f, 137.4161f };
			Local_306 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_297 = { 259.2205f, 135.4146f, 136.7083f };
			Local_300 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_309 = 16f;
			Local_303 = { 261.9694f, 142.9676f, 136.6889f };
			Local_306 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_297 = { 393.548f, -30.87166f, 152.6635f };
			Local_300 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_309 = 8f;
			Local_303 = { 390.5358f, -36.08882f, 152.7813f };
			Local_306 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_297 = { 114.3139f, -648.4297f, 261.8488f };
			Local_300 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_309 = 20f;
			Local_303 = { 124.8467f, -646.6575f, 261.8488f };
			Local_306 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_297 = { -215.919f, -823.8436f, 126.0224f };
			Local_300 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_309 = 20f;
			Local_303 = { -225.397f, -820.3937f, 126.0812f };
			Local_306 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_297 = { -296.4725f, -802.0815f, 95.40108f };
			Local_300 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_309 = 20f;
			Local_303 = { -305.4602f, -798.8369f, 95.48194f };
			Local_306 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_297 = { -292.3034f, -823.3569f, 95.37621f };
			Local_300 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_309 = 20f;
			Local_303 = { -288.9206f, -814.022f, 95.37556f };
			Local_306 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_297 = { -256.3589f, -714.7838f, 110.1617f };
			Local_300 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_309 = 20f;
			Local_303 = { -253.7723f, -705.6632f, 110.1736f };
			Local_306 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_297 = { 1808.214f, 1949.246f, 71.73707f };
			Local_300 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_309 = 9.75f;
			Local_303 = { 1802.786f, 1950.262f, 71.74002f };
			Local_306 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_297 = { 2388.733f, 2931.941f, 46.62681f };
			Local_300 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_309 = 10f;
			Local_303 = { 2392.547f, 2934.867f, 46.6268f };
			Local_306 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_297 = { 2700.056f, 4836.381f, 42.07854f };
			Local_300 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_309 = 20.75f;
			Local_303 = { 2685.672f, 4821.653f, 42.18471f };
			Local_306 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_297 = { -1053.446f, 4766.245f, 234.3251f };
			Local_300 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_309 = 5f;
			Local_303 = { -1051.414f, 4767.193f, 234.4293f };
			Local_306 = { -1037.954f, 4738.354f, 204.5282f };
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
		if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3545D662A0A53653((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0xE44A580B551C3645(*uParam0) || iParam1)
		{
			if (unk_0x21FF064386DC6A0A(*uParam0))
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
	
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		if (unk_0x202EF5D8203705EF(iParam0, iParam1))
		{
			iVar0 = unk_0x6ADAC08D70C79DE5(iParam0, iParam1);
			if (unk_0x538DF9E5B1DF01EB(iVar0))
			{
				if (!unk_0xE44A580B551C3645(iVar0))
				{
					iVar1 = unk_0x4350E1B7440A3560(unk_0xA609E58449080951(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x557C6E696286C67A(iVar0, iVar3))
						{
							if (unk_0xD8A521688BDBE867(iVar0, iVar3) == iParam0)
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
	switch (Local_636.f_3)
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
	
	if ((func_288(unk_0x1788E93557766241(), 1) || func_287(unk_0x1788E93557766241())) || uParam9)
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
			Global_2404570.f_39.f_64 = func_280(unk_0x1788E93557766241());
			func_279(Var0, iParam8);
		}
	}
}

void func_279(struct<12> Param0, int iParam12)
{
	Global_2404570.f_316[iParam12 /*12*/] = { Param0 };
	Global_2404570.f_316[iParam12 /*12*/].f_9 = 1;
}

int func_280(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2414327[iParam0 /*255*/].f_1;
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
		if (Global_2404570.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_282(Global_2404570.f_39[iVar13 /*12*/], &Var0))
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
		return Global_1602607[iVar0 /*12*/] != -1;
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
		if (!Global_2404570.f_316[iVar0 /*12*/].f_9)
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
		if (Global_2404570.f_316[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_291(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x38DB30583B2DE025(sParam0);
	unk_0x4498E0CBD76B2D72(sParam1);
	unk_0x4498E0CBD76B2D72(sParam2);
	return unk_0x2DB019D515966DF9(0);
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
	if (!unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_1312577.f_7)
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
			*(uParam0[iVar0 /*3*/]) = { Local_100[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_297()
{
	if (!func_275())
	{
		if (Local_636.f_3 == 14)
		{
			func_300();
		}
		Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4.f_1 = func_261();
	}
	else if ((!unk_0x889D01384B54BCE3(Global_1573734.f_1, 4) && !unk_0x889D01384B54BCE3(Global_1573734.f_1, 5)) && !func_299(unk_0x1788E93557766241()))
	{
		func_298();
	}
}

void func_298()
{
	switch (Local_636.f_3)
	{
		case 0:
			unk_0x33D72899E24C3365(8, 2);
			break;
		
		case 1:
			unk_0x33D72899E24C3365(13, 2);
			break;
		
		case 2:
			unk_0x33D72899E24C3365(4, 2);
			break;
		
		case 4:
			unk_0x33D72899E24C3365(1, 2);
			break;
		
		case 3:
			unk_0x33D72899E24C3365(2, 2);
			break;
		
		case 5:
			unk_0x33D72899E24C3365(3, 2);
			break;
		
		case 6:
			unk_0x33D72899E24C3365(11, 3);
			break;
		
		case 7:
			unk_0x33D72899E24C3365(14, 1);
			break;
		
		case 8:
			unk_0x33D72899E24C3365(29, 2);
			break;
		
		case 9:
			unk_0x33D72899E24C3365(12, 2);
			break;
		
		case 10:
			unk_0x33D72899E24C3365(10, 2);
			break;
		
		case 11:
			unk_0x33D72899E24C3365(18, 2);
			break;
		
		case 12:
			unk_0x33D72899E24C3365(20, 2);
			break;
		
		case 13:
			unk_0x33D72899E24C3365(27, 2);
			break;
		
		case 15:
			unk_0x33D72899E24C3365(26, 1);
			break;
		
		case 16:
			unk_0x33D72899E24C3365(25, 1);
			break;
		
		case 17:
			unk_0x33D72899E24C3365(22, 1);
			break;
		
		case 18:
			unk_0x33D72899E24C3365(24, 1);
			break;
	}
	unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 8);
}

bool func_299(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_300()
{
	Local_100[0 /*3*/] = { 1083f, -231f, 60f };
	Local_100[1 /*3*/] = { 1024f, -325f, 60f };
	Local_100[2 /*3*/] = { 910f, -401f, 43f };
	Local_100[3 /*3*/] = { 721f, -457f, 26f };
	Local_100[4 /*3*/] = { 643f, -579f, 26f };
	Local_100[5 /*3*/] = { 590f, -851f, 26f };
	Local_100[6 /*3*/] = { 590f, -1023f, 16f };
	Local_100[7 /*3*/] = { 582f, -1205f, 24f };
	Local_100[8 /*3*/] = { 608f, -1335f, 16f };
	Local_100[9 /*3*/] = { 640f, -1434f, 16f };
	Local_100[10 /*3*/] = { 671f, -1742f, 20f };
	Local_100[11 /*3*/] = { 651f, -2046f, 16f };
	Local_100[12 /*3*/] = { 603f, -2505f, 9f };
	Local_100[13 /*3*/] = { 673f, -2582f, 4f };
	Local_100[14 /*3*/] = { 728f, -2594f, 10f };
	Local_100[15 /*3*/] = { 794f, -2624f, 27f };
	Local_100[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_100[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_100[18 /*3*/] = { -513f, 4427f, 40f };
	Local_100[19 /*3*/] = { 126f, 3366f, 40f };
	Local_100[20 /*3*/] = { 143f, 3418f, 36f };
	Local_100[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_100[22 /*3*/] = { -162f, 4249f, 40f };
	Local_100[23 /*3*/] = { -408f, 2964f, 20f };
	Local_100[24 /*3*/] = { -181f, 2862f, 38f };
	Local_100[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_100[26 /*3*/] = { 2950f, 803f, 8f };
	Local_100[27 /*3*/] = { 2369f, -409f, 80f };
	Local_100[28 /*3*/] = { 1906f, -755f, 84f };
	Local_100[29 /*3*/] = { -403f, -2333f, 40f };
	Local_100[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_100[31 /*3*/] = { 219f, -2315f, 5f };
	Local_100[32 /*3*/] = { 350f, -2315f, 5f };
	Local_100[33 /*3*/] = { -1848f, -333f, 75f };
	Local_100[34 /*3*/] = { -693f, -608f, 69f };
	Local_100[35 /*3*/] = { -1461f, -582f, 53f };
	Local_100[36 /*3*/] = { -1553f, -546f, 59f };
	Local_100[37 /*3*/] = { 338f, -2758f, 23f };
	Local_100[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_100[39 /*3*/] = { -713f, -1538f, 13f };
	Local_100[40 /*3*/] = { -659f, -1518f, 13f };
	Local_100[41 /*3*/] = { -620f, -1502f, 16f };
	Local_100[42 /*3*/] = { -445f, -1575f, 26f };
	Local_100[43 /*3*/] = { -373f, -1680f, 19f };
	Local_100[44 /*3*/] = { -212f, -1805f, 29f };
	Local_100[45 /*3*/] = { 47f, -2040f, 18f };
	Local_100[46 /*3*/] = { 223f, -2240f, 6f };
	Local_100[47 /*3*/] = { 218f, -2189f, 6f };
	Local_100[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_100[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_100[50 /*3*/] = { -1186f, -365f, 46f };
	Local_100[51 /*3*/] = { -916f, -407f, 93f };
	Local_100[52 /*3*/] = { -726f, 235f, 105f };
	Local_100[53 /*3*/] = { -774f, 286f, 112f };
	Local_100[54 /*3*/] = { 271f, 134f, 125f };
	Local_100[55 /*3*/] = { 377f, -28f, 125f };
	Local_100[56 /*3*/] = { 121f, -703f, 150f };
	Local_100[57 /*3*/] = { -204f, -784f, 74f };
	Local_100[58 /*3*/] = { -287f, -774f, 72f };
	Local_100[59 /*3*/] = { -272f, -824f, 71f };
	Local_100[60 /*3*/] = { -230f, -723f, 80f };
	Local_100[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_100[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_100[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_100[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_301(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
	{
		unk_0x29DB79DD4D939B38(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
	}
}

void func_302(var uParam0, int iParam1)
{
	if (func_230(unk_0x1788E93557766241()) == 133 && iParam1)
	{
		Global_2446992.f_4620 = uParam0;
	}
	else
	{
		Global_2446992.f_4620 = -1;
	}
}

void func_303(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0x08E9BC7825B63619("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x08E9BC7825B63619("WantedMusicDisabled", 1);
	}
	Global_2446992.f_4546 = -1;
	if (bParam6)
	{
		func_301(21, 1);
	}
	else
	{
		func_317(iParam0, -1);
		if (func_8(unk_0x1788E93557766241()))
		{
			Global_1573734.f_3 = iParam0;
		}
		else
		{
			func_316(iParam0);
		}
		Global_1573734.f_4 = -1;
		if (func_8(unk_0x1788E93557766241()))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 5);
		}
		if ((func_110() && !func_109()) || func_108(unk_0x1788E93557766241(), 21))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 4);
		}
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 17);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 20);
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
		unk_0xABC4F2A6D7D56CF4(fParam2);
		if (iParam0 == 146)
		{
			unk_0xCC68D69AF0F39112(0);
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		}
	}
	if (func_310(iParam0))
	{
		unk_0xCC68D69AF0F39112(0);
		unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
		unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 8);
	}
	if (bParam3)
	{
		func_309(1);
		if (func_177(0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 9);
		}
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 14);
	}
	if (bParam4)
	{
		func_307(1);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 12);
	}
	if (bParam5)
	{
		func_306();
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 12);
	}
	if (!bParam6)
	{
		if (func_304(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 21);
		}
	}
	Global_2445946 = 1;
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
	unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4537), 0);
}

void func_307(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90094.f_8 = 1;
	}
	else
	{
		Global_90094.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_308(iVar0);
		iVar0++;
	}
}

void func_308(int iParam0)
{
	Global_90094.f_153[iParam0] = 1;
	Global_90094.f_152 = 1;
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
	if (unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == func_312())
	{
		return;
	}
	if (unk_0xDECCEB462707CB3E(Global_2446992.f_4629))
	{
		if (!Global_2446992.f_4629 == unk_0x60C807BBCBE66CC7())
		{
			return;
		}
	}
	Global_2446992.f_4628 = fParam0;
	Global_2446992.f_4629 = unk_0x60C807BBCBE66CC7();
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
	return Global_24446;
}

void func_314()
{
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_198 = 0;
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_4401), 1);
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
	Global_1602607[unk_0x1788E93557766241() /*12*/] = iParam0;
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
			unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 2);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 2);
		}
	}
}

int func_318()
{
	switch (Local_636.f_3)
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
	Global_1699238 = 1;
	if (!unk_0x889D01384B54BCE3(Global_2453335, 0))
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2453335, 0);
		unk_0xD0E2BFCE93AE3ABD(&Global_1699239, 0);
	}
	if (!unk_0x889D01384B54BCE3(Global_2453335, 1))
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2453335, 1);
		unk_0xD0E2BFCE93AE3ABD(&Global_1699239, 1);
	}
	if (!unk_0x889D01384B54BCE3(Global_2453335, 5))
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2453335, 5);
		unk_0xD0E2BFCE93AE3ABD(&Global_1699239, 5);
	}
	if (unk_0xDED2D15D4CD01463(-355737150))
	{
		unk_0x3A73A1FCDAD1D6BE(-355737150, 0, 0, 0);
	}
	if (unk_0xDED2D15D4CD01463(-580979506))
	{
		unk_0x3A73A1FCDAD1D6BE(-580979506, 0, 0, 0);
	}
	if (unk_0xDED2D15D4CD01463(-1426452475))
	{
		unk_0x3A73A1FCDAD1D6BE(-1426452475, 0, 0, 0);
	}
	if (unk_0xDED2D15D4CD01463(745417724))
	{
		unk_0x3A73A1FCDAD1D6BE(745417724, 0, 0, 0);
	}
	if (unk_0xDED2D15D4CD01463(-1305304906))
	{
		unk_0x3A73A1FCDAD1D6BE(-1305304906, 0, 0, 0);
	}
	if (unk_0xDED2D15D4CD01463(-1543175077))
	{
		unk_0x3A73A1FCDAD1D6BE(-1543175077, 0, 0, 0);
	}
	if (unk_0xDED2D15D4CD01463(-811770997))
	{
		unk_0x3A73A1FCDAD1D6BE(-811770997, 0, 0, 0);
	}
}

int func_320()
{
	switch (Local_636.f_3)
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
	
	if (func_5(Local_636.f_3))
	{
		if (Local_636.f_3 == 1 || Local_636.f_3 == 6)
		{
			iVar0 = func_337(unk_0x1788E93557766241(), 1);
			iVar1 = func_145(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
				{
					unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"), 1, 0, 0);
					func_322(1);
				}
			}
			else
			{
				unk_0x1E24A5478398C26E(unk_0x1788E93557766241(), 1);
			}
		}
	}
}

void func_322(bool bParam0)
{
	int iVar0;
	
	if (unk_0x95AD4DE218A9F9E5(unk_0xA16EC202D9D35357(), 5) != 0)
	{
		unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 177, 1);
		unk_0xF665AE2C11FC50E7(unk_0x1788E93557766241(), func_152(580, -1, 0));
		if (func_336())
		{
			unk_0xF20FB3737072A109(unk_0x1788E93557766241(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_335())
		{
			unk_0xF20FB3737072A109(unk_0x1788E93557766241(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_332(3610, -1, -1))
		{
		}
		iVar0 = func_152(2033, -1, 0);
		unk_0x6BDDCDC87245810D(unk_0x1788E93557766241(), func_331(unk_0xFF34D923BFB5E9FB(unk_0x1788E93557766241()), iVar0));
		unk_0xF665AE2C11FC50E7(unk_0x1788E93557766241(), func_152(580, -1, 0));
		func_330(unk_0x1788E93557766241(), iVar0);
		unk_0x1670254BF79C272E(unk_0x1788E93557766241(), 5, func_326(unk_0xA16EC202D9D35357(), iVar0), func_325(unk_0xA16EC202D9D35357(), iVar0), 0);
		func_324(func_152(2033, -1, 0), 1);
		Global_2446992.f_273 = 1;
		func_323(unk_0x1788E93557766241());
		if (bParam0)
		{
		}
	}
}

void func_323(int iParam0)
{
	int iVar0;
	
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = func_152(2033, -1, 0);
		unk_0x1670254BF79C272E(iParam0, 5, func_326(unk_0xFF34D923BFB5E9FB(iParam0), iVar0), func_325(unk_0xFF34D923BFB5E9FB(iParam0), iVar0), 0);
		func_330(iParam0, iVar0);
		unk_0x6BDDCDC87245810D(iParam0, func_331(unk_0xFF34D923BFB5E9FB(iParam0), iVar0));
		unk_0x42544C0CC4949BD5(unk_0xFF34D923BFB5E9FB(iParam0), 5, func_326(unk_0xFF34D923BFB5E9FB(iParam0), iVar0), func_325(unk_0xFF34D923BFB5E9FB(iParam0), iVar0), func_331(unk_0xFF34D923BFB5E9FB(iParam0), iVar0));
		unk_0xF665AE2C11FC50E7(iParam0, func_152(580, -1, 0));
		if (func_336())
		{
			unk_0xF20FB3737072A109(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_335())
		{
			unk_0xF20FB3737072A109(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		unk_0x117411595F7E531A(unk_0xFF34D923BFB5E9FB(iParam0), 177, 1);
	}
}

void func_324(int iParam0, int iParam1)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		func_143(2033, iParam0, -1, 1);
		unk_0x1670254BF79C272E(unk_0x1788E93557766241(), 5, func_326(unk_0xA16EC202D9D35357(), iParam0), func_325(unk_0xA16EC202D9D35357(), iParam0), 0);
		func_330(unk_0x1788E93557766241(), iParam0);
		unk_0x6BDDCDC87245810D(unk_0x1788E93557766241(), func_331(unk_0xA16EC202D9D35357(), iParam0));
		if ((iParam1 && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) && unk_0x95AD4DE218A9F9E5(unk_0xA16EC202D9D35357(), 5) != 0)
		{
			func_323(unk_0x1788E93557766241());
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
	
	iVar0 = unk_0x95AD4DE218A9F9E5(uParam0, 11);
	if (unk_0x95AD4DE218A9F9E5(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0xA609E58449080951(iParam0);
	uVar3 = unk_0x51ACEC7238AE9673(iParam0, 8, unk_0x95AD4DE218A9F9E5(iParam0, 8), unk_0xBF8959A81F71BB84(iParam0, 8));
	if (unk_0xFC16329269277970(uVar3, joaat("OVER_JACKET"), 8))
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
		uVar5 = unk_0x51ACEC7238AE9673(iParam0, 11, iVar0, unk_0xBF8959A81F71BB84(iParam0, 11));
		if (unk_0xFC16329269277970(uVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("HOODED_JACKET"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("LUXE_COAT"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xFC16329269277970(uVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xFC16329269277970(uVar5, joaat("HEIST_GEAR"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, -1086258388, 0) || unk_0xFC16329269277970(uVar5, joaat("LUXE_SWEAT"), 0))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0xFC16329269277970(uVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
	if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xFC16329269277970(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_329(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xFC16329269277970(uParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xFC16329269277970(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xFC16329269277970(uParam0, 216120498, iParam1))
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
			unk_0xE9ED6BFFCA4B824F(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0xE9ED6BFFCA4B824F(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0xE9ED6BFFCA4B824F(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x1D808AC1F7F4F2AB(iParam0);
		}
	}
	else if (func_335())
	{
		if (iParam1 > 0)
		{
			unk_0xE9ED6BFFCA4B824F(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x1D808AC1F7F4F2AB(iParam0);
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
		iVar0 = unk_0xA39E60B30250C306(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
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
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

bool func_335()
{
	return unk_0xD5883629B43B6F20(joaat("mppilot"));
}

bool func_336()
{
	return unk_0xD5883629B43B6F20(joaat("mplts"));
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
	
	if ((((!func_7(unk_0x1788E93557766241()) && !func_107(unk_0x1788E93557766241())) && !func_224()) && !func_346(unk_0x1788E93557766241(), 0)) && !func_345(unk_0x1788E93557766241()))
	{
		if (func_12(unk_0x1788E93557766241(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			bVar11 = func_5(Local_636.f_3);
			bVar12 = unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0);
			bVar13 = func_343();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_636.f_67[iVar4 /*2*/].f_1;
				if (unk_0xCB5D8B19B62A3B89(uVar14) && unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) == unk_0x8CB435AA1E25DA51(uVar14))
						{
							func_246(1);
						}
					}
					unk_0xD0E2BFCE93AE3ABD(&uVar5, iVar4);
					if (bVar11 && func_38(Local_636.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0xBF8499F46AD9093A(unk_0x8CB435AA1E25DA51(uVar14), 1) };
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
			if (func_39(Local_636.f_3))
			{
				unk_0xD0E2BFCE93AE3ABD(&uVar5, 31);
			}
			Global_1602607[unk_0x1788E93557766241() /*12*/].f_6 = uVar5;
			if (func_5(Local_636.f_3))
			{
				if ((unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()) || (unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357()) && !unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_38(Local_636.f_3, iVar7, &Var0, &uVar3))
						{
							func_342(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
							func_341(Var0, 1, 0);
							func_340(10, 0, 0);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 5);
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
	if (unk_0x889D01384B54BCE3(iLocal_324, 5))
	{
		func_115();
		func_113();
		unk_0x29DB79DD4D939B38(&iLocal_324, 5);
		func_112();
	}
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408661 = 0;
	}
	Global_2404570.f_438 = iParam0;
	Global_2404570.f_438.f_1 = unk_0x60C807BBCBE66CC7();
	Global_2404570.f_438.f_2 = iParam1;
	Global_2404570.f_438.f_3 = iParam2;
}

void func_341(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404570.f_39.f_49 = { Param0 };
	Global_2404570.f_39.f_52 = iParam3;
	Global_2404570.f_39.f_53 = iParam4;
}

void func_342(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0xDECCEB462707CB3E(Global_2408676.f_6))
	{
		if (!Global_2408676.f_6 == unk_0x60C807BBCBE66CC7())
		{
			return;
		}
	}
	else
	{
		Global_2408676.f_6 = unk_0x60C807BBCBE66CC7();
	}
	Var0.f_6 = Global_2408676.f_6;
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
	if (func_288(unk_0x1788E93557766241(), 1) || func_287(unk_0x1788E93557766241()))
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
	Global_2408676 = { Var0 };
}

int func_343()
{
	if (((((func_344(unk_0x1788E93557766241()) || func_110()) || func_109()) || func_108(unk_0x1788E93557766241(), 21)) || func_8(unk_0x1788E93557766241())) || func_7(unk_0x1788E93557766241()))
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
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

int func_345(int iParam0)
{
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 14))
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 11))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0, bool bParam1)
{
	if (Global_1583725[iParam0 /*334*/].f_244.f_6 > 0)
	{
		if (bParam1)
		{
			if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 0))
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
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	
	if (Local_636.f_3 == 14 && iParam1)
	{
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (!func_272(iVar0) && !func_271(iVar0))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_539[func_263(iVar0)], func_262(iVar0)) && !bParam0)
				{
					Var1 = { Local_343[iVar0 /*3*/] };
					if (!unk_0x5660C8AFDD9C1721(uLocal_543[iVar0]))
					{
						if (!func_357(Var1, 0f, 0f, 0f, 0) && !func_357(Var1, 0f, 0f, -2000f, 0))
						{
							uLocal_543[iVar0] = unk_0x64F646E6A974BF18(Var1);
							unk_0x85C00B9AEF9CC0BE(uLocal_543[iVar0], 9);
							unk_0xFDA1FE98ECD75505(uLocal_543[iVar0], "AMCH_BRIDGE");
							func_352(uLocal_543[iVar0], 25);
							func_350(&(uLocal_543[iVar0]), 12);
							unk_0xAF9E05E1AFA9F45F(uLocal_543[iVar0], 1);
						}
					}
					else if (unk_0x2B0FFD431FD5A9FA())
					{
						unk_0xE30CC26FBB1F8075(uLocal_543[iVar0], 255);
					}
					else
					{
						func_352(uLocal_543[iVar0], 25);
					}
				}
				else if (unk_0x5660C8AFDD9C1721(uLocal_543[iVar0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_543[iVar0]));
					if (!bParam0)
					{
						unk_0xC2E1777941B4536E(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_41())
	{
		iVar4 = 0;
		while (iVar4 < 10)
		{
			if (((!bParam0 && unk_0xCB5D8B19B62A3B89(Local_636.f_67[iVar4 /*2*/].f_1)) && unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(Local_636.f_67[iVar4 /*2*/].f_1), 0)) && unk_0x557C6E696286C67A(unk_0x8CB435AA1E25DA51(Local_636.f_67[iVar4 /*2*/].f_1), -1))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_609[iVar4]))
				{
					uLocal_609[iVar4] = unk_0xDF78B7F06503567E(unk_0xD65CB1FBC5B5BA6A(Local_636.f_67[iVar4 /*2*/].f_1));
					unk_0x2025496D9184D312(uLocal_609[iVar4], func_349(iVar4));
					unk_0x85C00B9AEF9CC0BE(uLocal_609[iVar4], 9);
					unk_0xFDA1FE98ECD75505(uLocal_609[iVar4], func_348(iVar4));
					func_350(&(uLocal_609[iVar4]), 9);
				}
				else if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
				{
					Var5 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
					if (unk_0x2A488C176D52CCA5(Var5, unk_0xBF8499F46AD9093A(unk_0x8CB435AA1E25DA51(Local_636.f_67[iVar4 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0xAF9E05E1AFA9F45F(uLocal_609[iVar4], 1);
					}
					else
					{
						unk_0xAF9E05E1AFA9F45F(uLocal_609[iVar4], 0);
					}
				}
			}
			else if (unk_0x5660C8AFDD9C1721(uLocal_609[iVar4]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_609[iVar4]));
			}
			iVar4++;
		}
	}
}

char* func_348(int iParam0)
{
	switch (Local_636.f_67[iParam0 /*2*/])
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
	switch (Local_636.f_67[iParam0 /*2*/])
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
	if (unk_0x5660C8AFDD9C1721(*uParam0))
	{
		unk_0x1AD45E3CF020D50D(*uParam0, func_351(iParam1));
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
	unk_0xE30CC26FBB1F8075(uParam0, func_353(uParam0, iParam1));
}

int func_353(var uParam0, int iParam1)
{
	float fVar0;
	
	if (!func_356(Global_2422491))
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
	if (func_288(Global_2422491, 1))
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
	
	uVar0 = Global_2422491;
	Var2 = { unk_0x19E074E292E9B9F6(uParam0) };
	Var2.f_2 = 0f;
	Var5 = { unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(uVar0), 0) };
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
	if ((unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_69.f_2, 15) && !(unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_69.f_2, 6) && unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_69.f_2, 7))) || ((unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_69.f_2, 6) && !unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_69.f_2, 7)) && !unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_69.f_2, 15)))
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
	
	uVar0 = unk_0x7E5A426328F6E635();
	return "HUD_STARTING";
	if (unk_0x9BA82E09A986BA4B(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_challenges"))
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
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x9BA82E09A986BA4B(uVar0, "AM_HUNT_THE_BEAST"))
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
	if (IntToFloat(iParam0) < unk_0x0C380BB05B91042D())
	{
		Global_2446992.f_4536 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 1))
		{
			unk_0xC2E1777941B4536E(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2446992.f_4536 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 1);
		}
	}
}

int func_362(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0);
		}
		else
		{
			return unk_0xF001CC441E445DFD(unk_0x4EAB1171B13C220B(), *uParam0);
		}
	}
	return unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0);
}

void func_363(int iParam0)
{
	if (!unk_0xF1F4C42EF94F5FDD() && !unk_0xF4C685E933068D23())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if (!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742())
					{
						if (func_5(Local_636.f_3))
						{
							if (Local_636.f_3 == 12)
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
						unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if (!unk_0x2B0FFD431FD5A9FA())
					{
						func_208("AMCH_BLOW", 30000);
						func_207(1);
						unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if (!unk_0x2B0FFD431FD5A9FA() && !func_368(62))
					{
						switch (Local_636.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
									{
										func_208("AMCH_ALTI", 30000);
										func_207(1);
										unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_NMIS", 30000);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_FRFALL", -1);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_PVPO1", -1);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_PVPO2", -1);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_WHEELIE", 30000);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_STOPPIE", 30000);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_LFALL", 30000);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_LPARA", 30000);
									func_207(1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if ((!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742()) && !func_368(62))
					{
						switch (Local_636.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
									{
										if (func_1(&uLocal_318, 1000, 0))
										{
											func_208("AMCH_OCEAN", 30000);
											func_207(1);
											func_44(&uLocal_318);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if (!unk_0x2B0FFD431FD5A9FA() && !func_368(62))
					{
						switch (Local_636.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									if (unk_0x0336D2959717E8D2(unk_0xA16EC202D9D35357()))
									{
										if (func_356(unk_0x1788E93557766241()) && !func_365(unk_0x1788E93557766241()))
										{
											func_208("AMCH_ALTIEXP", 30000);
											func_207(1);
											unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if ((!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742()) && !func_368(62))
					{
						if (func_1(&uLocal_318, 1000, 0))
						{
							func_208("AMCH_FLYLOW", 30000);
							func_207(1);
							func_44(&uLocal_318);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if (Local_636.f_3 == 7)
					{
						if (iLocal_621 == 0)
						{
							if ((!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742()) && !func_368(62))
							{
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_MVS1", 30000);
									func_207(1);
									iLocal_621 = 1;
								}
							}
						}
						else if ((!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742()) && !func_368(62))
						{
							if (func_12(unk_0x1788E93557766241(), 1, 1))
							{
								func_208("AMCH_MVS2", 30000);
								func_207(1);
								unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
							}
						}
					}
					if (Local_636.f_3 == 14)
					{
						if (iLocal_621 == 0)
						{
							if ((!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742()) && !func_368(62))
							{
								if (func_12(unk_0x1788E93557766241(), 1, 1))
								{
									func_208("AMCH_BRBL", 30000);
									func_207(1);
									iLocal_621 = 1;
								}
							}
						}
						else if ((!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742()) && !func_368(62))
						{
							if (func_12(unk_0x1788E93557766241(), 1, 1))
							{
								func_208("AMCH_BRBL2", 30000);
								func_207(1);
								unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0x889D01384B54BCE3(iLocal_620, iParam0))
				{
					if (!unk_0x2B0FFD431FD5A9FA() && !unk_0x11A809BBE3889742())
					{
						func_364("AMCH_WARN", func_293(Local_636.f_3), func_292(Local_636.f_3), 30000);
						func_207(0);
						Local_2980.f_8 = unk_0x5C7391B560C251C7();
						unk_0xC2E1777941B4536E(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xD0E2BFCE93AE3ABD(&iLocal_620, iParam0);
					}
				}
				break;
			}
	}
}

void func_364(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x4498E0CBD76B2D72(sParam1);
	unk_0x4498E0CBD76B2D72(sParam2);
	unk_0x644558F3AB755120(0, 0, 0, iParam3);
}

bool func_365(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1327587.f_241.f_136[func_367(9) /*33*/][iParam0], func_366(9));
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
	return Global_2422491.f_2136[0 /*70*/].f_1 == iParam0;
}

void func_369(int iParam0)
{
	Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_3 = iParam0;
}

void func_370(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 4);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 4);
	}
}

int func_371()
{
	if (func_108(unk_0x1788E93557766241(), 21))
	{
		return 0;
	}
	if (unk_0x31EF25060710376C())
	{
		return 0;
	}
	if (func_252(unk_0x1788E93557766241()))
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
	if (func_376())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (unk_0x7A75BEF6DA1EDF3D())
	{
		return 0;
	}
	if (func_254(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_108(unk_0x1788E93557766241(), 0) || func_108(unk_0x1788E93557766241(), 3))
	{
		return 0;
	}
	if ((func_108(unk_0x1788E93557766241(), 12) || func_108(unk_0x1788E93557766241(), 14)) || func_108(unk_0x1788E93557766241(), 13))
	{
		return 0;
	}
	if (func_346(unk_0x1788E93557766241(), 0))
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (Global_1690013)
	{
		return 0;
	}
	if (func_372(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1583725[iParam0 /*334*/].f_35;
}

bool func_373()
{
	return Global_90094.f_291 > 0;
}

int func_374()
{
	if (func_375() == 0)
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	return Global_1312466.f_18;
}

bool func_376()
{
	return Global_1315891;
}

bool func_377()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/] == 5;
}

bool func_378()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 0);
}

void func_379()
{
	func_380(&(Local_724.f_526), &Local_724, 23, &(Local_724.f_1), &(Local_724.f_109), Local_636.f_3, 0);
}

void func_380(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	if (func_462())
	{
		if (func_429(uParam1, iParam2, uParam3, Global_1573537, 0, func_464()))
		{
			func_428(1);
			if (!func_427() || unk_0x889D01384B54BCE3(Global_2446992.f_4402, 1))
			{
				if (func_426())
				{
					func_425();
				}
				else
				{
					unk_0xD56181B43A801B45(76, 84);
					if (uParam3->f_28 == 0)
					{
						func_424(1);
						Global_1573537 = 0;
						iVar18 = -1;
						if (Global_1573685 != 1)
						{
							func_423(uParam1);
							if (unk_0x889D01384B54BCE3(uParam3->f_34, 7))
							{
								unk_0x29DB79DD4D939B38(&(uParam3->f_34), 7);
							}
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							if (func_422())
							{
								if (func_12(unk_0x42C0B50857BF923B(iVar16), 0, 1))
								{
									iVar0 = unk_0x42C0B50857BF923B(iVar16);
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
							if ((func_421(iVar0) && func_416(iVar0)) && func_12(iVar0, 0, 1))
							{
								iVar9 = iVar0;
								uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
								iVar7 = Global_1583725[iVar9 /*334*/].f_188.f_6;
								Var3 = { func_411(iVar0) };
								if (iVar0 == unk_0x1788E93557766241())
								{
									uParam3->f_36 = iVar17;
								}
								StringCopy(&(uParam3->f_1), unk_0xF3E5891C26514A74(iVar0), 64);
								*(uParam4[iVar16 /*13*/]) = { func_80(iVar0) };
								if (func_410(*(uParam4[iVar16 /*13*/])))
								{
								}
								iVar2 = func_404(iVar0);
								sVar1 = "";
								if (iVar2 != 0)
								{
									sVar1 = unk_0xE60D88CF3EF91AA6(iVar2);
								}
								Global_1573537++;
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
									if (!func_422())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_402(&iVar8, &fVar10, (uParam0[iVar16 /*46*/])->f_8, iParam5);
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
								if (func_401(iParam5))
								{
									func_400(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_54(), iVar15, fVar10, iVar8, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								else
								{
									func_400(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_54(), iVar15, fVar10, iVar11, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								unk_0xD0E2BFCE93AE3ABD(&iVar14, iVar0);
								iVar17++;
							}
							iVar16++;
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							iVar0 = unk_0x42C0B50857BF923B(iVar16);
							if (func_12(iVar0, 0, 1) && !unk_0x889D01384B54BCE3(iVar14, iVar0))
							{
								iVar0 = unk_0x42C0B50857BF923B(iVar16);
							}
							else
							{
								iVar0 = func_58();
							}
							if (func_421(iVar0))
							{
								if (func_12(unk_0x42C0B50857BF923B(iVar16), 0, 1))
								{
									iVar9 = iVar0;
									uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
									iVar7 = Global_1583725[iVar9 /*334*/].f_188.f_6;
									Var3 = { func_411(iVar0) };
									*(uParam4[iVar16 /*13*/]) = { func_80(iVar0) };
									iVar2 = func_404(iVar0);
									sVar1 = "";
									if (iVar2 != 0)
									{
										sVar1 = unk_0xE60D88CF3EF91AA6(iVar2);
									}
									Global_1573537++;
									func_392(unk_0xF3E5891C26514A74(iVar0), uParam1, uParam3, iVar17, Var3, sVar1, iVar7, 116, iVar15);
									iVar17++;
								}
							}
							iVar16++;
						}
						if (unk_0x889D01384B54BCE3(uParam3->f_34, 11))
						{
							func_389(uParam3, uParam1);
						}
						func_44(&(uParam3->f_22));
						func_388();
						uParam3->f_28 = 2;
					}
					if (uParam3->f_28 == 2)
					{
						if (!unk_0x889D01384B54BCE3(uParam3->f_34, 7))
						{
							func_387(uParam3, uParam1);
							func_386(uParam1, 0, 1);
							unk_0xD0E2BFCE93AE3ABD(&(uParam3->f_34), 7);
						}
						func_387(uParam3, uParam1);
						if (!unk_0x889D01384B54BCE3(uParam3->f_34, 11))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam3->f_34), 11);
						}
						if (func_383(uParam3))
						{
							Global_1573685 = 1;
						}
						func_381(uParam3);
						if (Global_1573685 == 1)
						{
							uParam3->f_28 = 0;
						}
						if (Global_1573685 == 2)
						{
							uParam3->f_28 = 0;
						}
					}
					if (unk_0xC8378A96673BCC40(*uParam1))
					{
						unk_0xFA5652FA48ED466D(7);
						unk_0x782CAB485999E384(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFA5652FA48ED466D(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_28 = 0;
			func_388();
			func_424(0);
			if (unk_0x889D01384B54BCE3(uParam3->f_34, 7))
			{
				unk_0x29DB79DD4D939B38(&(uParam3->f_34), 7);
			}
			if (unk_0x889D01384B54BCE3(uParam3->f_34, 10))
			{
				unk_0x29DB79DD4D939B38(&(uParam3->f_34), 10);
			}
		}
	}
	unk_0xD599E2B13BA25D7B();
}

void func_381(var uParam0)
{
	if (!func_45(&(uParam0->f_22)))
	{
		func_2(&(uParam0->f_22), 0, 0);
	}
	else if (func_1(&(uParam0->f_22), 250, 0))
	{
		func_44(&(uParam0->f_22));
		func_382(0);
	}
}

void func_382(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573685 != 2)
		{
			Global_1573685 = 2;
		}
	}
	else
	{
		switch (Global_1573685)
		{
			case 0:
				Global_1573685 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_383(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_38;
	iVar15 = unk_0x42C0B50857BF923B(uParam0->f_38);
	if (iVar15 != func_58() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_80(iVar15) };
		iVar1 = func_385(uParam0, uParam0->f_38);
		if (func_410(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xEFF09B29F0DB6F5C(&Var2))
					{
						if (unk_0x2BC34DF05A24E9CB(&Var2))
						{
							iVar16 = 1;
							func_384(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xE545250CC148D65F(&Var2))
					{
						iVar16 = 1;
						func_384(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xEFF09B29F0DB6F5C(&Var2))
					{
						if (!unk_0x2BC34DF05A24E9CB(&Var2))
						{
							iVar16 = 1;
							func_384(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_384(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xEFF09B29F0DB6F5C(&Var2))
					{
						if (!unk_0xE545250CC148D65F(&Var2))
						{
							iVar16 = 1;
							func_384(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xE545250CC148D65F(&Var2))
					{
						iVar16 = 1;
						func_384(uParam0, iVar0, 0);
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

void func_384(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*2*/] = iParam2;
}

var func_385(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*2*/];
}

void func_386(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB067107D878E9585(*uParam0, "COLLAPSE"))
	{
		unk_0xF34EF2C628F5B47B(iParam1);
		unk_0xD3DF251F2DF3B257();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB067107D878E9585(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD3DF251F2DF3B257();
		}
	}
}

void func_387(var uParam0, var uParam1)
{
	if (!unk_0x889D01384B54BCE3(uParam0->f_34, 10))
	{
		unk_0xB067107D878E9585(*uParam1, "SET_HIGHLIGHT");
		unk_0x26221D1D76579618(uParam0->f_36);
		unk_0xD3DF251F2DF3B257();
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_34), 10);
	}
}

void func_388()
{
	if (Global_1573685 != 0)
	{
		Global_1573685 = 0;
	}
}

void func_389(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x42C0B50857BF923B(iVar0);
		if (iVar2 != func_58())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_39[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_391(uParam0->f_39[iVar0 /*2*/]);
					func_390(uParam1, uParam0->f_39[iVar0 /*2*/].f_1, iVar1, Global_1583725[iVar0 /*334*/].f_188.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		if (unk_0xB067107D878E9585(*uParam0, "SET_ICON"))
		{
			unk_0x26221D1D76579618(iParam1);
			unk_0x26221D1D76579618(iParam2);
			if (iParam2 == 65)
			{
				unk_0x26221D1D76579618(iParam3);
			}
			unk_0xD3DF251F2DF3B257();
		}
	}
}

int func_391(int iParam0)
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

void func_392(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_399() && iParam3 < func_398())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573539)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573685 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB067107D878E9585(*uParam1, sVar1))
		{
			unk_0x26221D1D76579618(iParam3);
			if (unk_0x889D01384B54BCE3(uParam2->f_34, 8) || uParam2->f_107 == 6)
			{
				func_397("");
			}
			else
			{
				unk_0x26221D1D76579618(iParam9);
			}
			func_397(sParam0);
			unk_0x26221D1D76579618(iParam10);
			if (uParam2->f_107 == 6)
			{
				func_397("");
			}
			else
			{
				unk_0x26221D1D76579618(65);
			}
			unk_0x26221D1D76579618(-1);
			func_397("");
			if (uParam2->f_107 == 6)
			{
				func_397("");
			}
			else
			{
				func_397(&sParam4);
			}
			unk_0xF34EF2C628F5B47B(uParam2->f_37);
			unk_0x6B8FD933B7DA793E(sParam8);
			unk_0x6B8FD933B7DA793E(sParam8);
			if (func_396(uParam2))
			{
				func_395("DPAD_FRIEND");
			}
			else if (func_394(uParam2))
			{
				func_395("DPAD_FRIEND");
			}
			else if (func_393(uParam2))
			{
				func_395("DPAD_CREW");
			}
			else
			{
				func_395("");
			}
			unk_0xD3DF251F2DF3B257();
		}
	}
}

bool func_393(var uParam0)
{
	return unk_0x889D01384B54BCE3(uParam0->f_34, 6);
}

bool func_394(var uParam0)
{
	return unk_0x889D01384B54BCE3(uParam0->f_34, 5);
}

void func_395(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

int func_396(var uParam0)
{
	if (func_394(uParam0) && func_393(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_397(char* sParam0)
{
	unk_0xB51F3A5C13620EE6(sParam0);
}

int func_398()
{
	int iVar0;
	
	if (Global_1573539)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_399()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573539)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_400(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_399() && iParam2 < func_398())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573539)
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
		if (Global_1573685 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xC8378A96673BCC40(*uParam0))
		{
			if (unk_0xB067107D878E9585(*uParam0, sVar1))
			{
				unk_0x26221D1D76579618(iParam2);
				if (unk_0x889D01384B54BCE3(uParam1->f_34, 8) || uParam1->f_107 == 6)
				{
					func_397("");
				}
				else
				{
					unk_0x26221D1D76579618(iParam8);
				}
				if (uParam1->f_107 == 6 && !unk_0x06771AF7795B3ECF(sParam15))
				{
					func_395(sParam15);
				}
				else
				{
					func_397(&(uParam1->f_1));
				}
				unk_0x26221D1D76579618(iParam10);
				if (uParam1->f_107 == 6)
				{
					func_397("");
				}
				else
				{
					unk_0x26221D1D76579618(65);
				}
				if (iParam11 == 1)
				{
					unk_0x26221D1D76579618(iVar0);
				}
				else
				{
					unk_0x26221D1D76579618(-1);
				}
				if (func_422())
				{
					func_397("");
				}
				else if (uParam1->f_107 == 6 && !unk_0x06771AF7795B3ECF(sParam15))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_ONE_INT");
					unk_0x4498E0CBD76B2D72(sParam15);
					unk_0x53B64327E3305DCB(iParam17);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (uParam1->f_107 == 5 && !unk_0x06771AF7795B3ECF(sParam15))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_ONE_INT");
					unk_0x4498E0CBD76B2D72(sParam15);
					unk_0x53B64327E3305DCB(iParam17);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if ((uParam1->f_107 == 7 && !unk_0x06771AF7795B3ECF(sParam15)) && !unk_0x06771AF7795B3ECF(sParam16))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_TWO_INT");
					unk_0x4498E0CBD76B2D72(sParam15);
					unk_0x4498E0CBD76B2D72(sParam16);
					unk_0x53B64327E3305DCB(iParam17);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (uParam1->f_107 == 8 && !unk_0x06771AF7795B3ECF(uParam1->f_104))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xC8C41AD5B003B30B(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x53B64327E3305DCB(iParam9);
					}
					unk_0x4498E0CBD76B2D72(uParam1->f_104);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (uParam1->f_107 == 9)
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_CASH");
					unk_0x3EF8973FC4AD58A6(iParam9, 1);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x06771AF7795B3ECF(uParam1->f_104))
					{
						func_395(uParam1->f_104);
					}
					else
					{
						func_397("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0xEBC0B3BDAD1250BE("STRING");
					unk_0xECACDB29F7B53568(iParam13, 6);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (fParam12 != -1f)
				{
					unk_0xEBC0B3BDAD1250BE("NUMBER");
					unk_0xC8C41AD5B003B30B(fParam12, 1);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (iParam9 != -1)
				{
					unk_0x26221D1D76579618(iParam9);
				}
				else
				{
					func_397("");
				}
				if (uParam1->f_107 == 6)
				{
					func_397("");
				}
				else
				{
					func_397(&sParam3);
				}
				unk_0xF34EF2C628F5B47B(uParam1->f_37);
				if (iParam11 == 1 || unk_0x06771AF7795B3ECF(sParam7))
				{
					func_397("");
					func_397("");
				}
				else
				{
					unk_0x6B8FD933B7DA793E(sParam7);
					unk_0x6B8FD933B7DA793E(sParam7);
				}
				if (func_396(uParam1))
				{
					func_395("DPAD_FRIEND");
				}
				else if (func_394(uParam1))
				{
					func_395("DPAD_FRIEND");
				}
				else if (func_393(uParam1))
				{
					func_395("DPAD_CREW");
				}
				else
				{
					func_395("");
				}
				unk_0xD3DF251F2DF3B257();
			}
		}
	}
}

int func_401(int iParam0)
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

int func_402(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_403(iParam3))
	{
		*fParam1 = (func_199(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_401(iParam3))
	{
		*fParam1 = (func_199(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_403(int iParam0)
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

int func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = func_407(iParam0);
	if (iVar0 == -1)
	{
		func_405(iParam0, 1);
		return 0;
	}
	Global_1337286[iVar0 /*5*/].f_4 = 1;
	return Global_1337286[iVar0 /*5*/].f_2;
}

void func_405(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_407(iParam0) != -1)
	{
		return;
	}
	if (Global_1337449)
	{
		if (iParam0 == Global_1337449.f_1)
		{
			return;
		}
	}
	if (func_406(iParam0))
	{
		return;
	}
	if (Global_1337487 >= 32)
	{
		return;
	}
	Global_1337454[Global_1337487] = iParam0;
	Global_1337487++;
	if (bParam1)
	{
	}
}

int func_406(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337487)
	{
		if (Global_1337454[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_407(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1337447 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337447)
	{
		if (Global_1337286[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA18877A025EABCF1(Global_1337286[iVar0 /*5*/].f_2) && unk_0x1285CB0DD714CE61(Global_1337286[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_408(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_408(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1337447)
	{
		return;
	}
	if (unk_0xA18877A025EABCF1(Global_1337286[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1337286[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE60D88CF3EF91AA6(Global_1337286[iParam0 /*5*/].f_2), 64);
			unk_0x5F0F8D01B163177A(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x8138315499FE0236(Global_1337286[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1337447)
	{
		Global_1337286[iVar32 /*5*/] = { Global_1337286[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_409(&(Global_1337286[iVar32 /*5*/]));
	Global_1337447 = (Global_1337447 - 1);
}

void func_409(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_58();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		uParam0->f_3 = unk_0x519586565311459B();
	}
}

bool func_410(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6812E31A0CF4755C(&uParam0, 13);
}

struct<4> func_411(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2446020 = { func_80(iParam0) };
		if (unk_0x9F979F481F18EB48())
		{
			if (func_410(Global_2446020))
			{
				if (!unk_0x31A93954A8F8AFE7(&Global_2446020))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xBABFA3519D8F7A45(0))
		{
			return Var0;
		}
		if (func_415(&Global_2446020))
		{
			Global_2445950 = { func_413(iParam0) };
			func_412(&Global_2445950, &Var0);
		}
	}
	return Var0;
}

void func_412(var uParam0, var uParam1)
{
	unk_0x94AA7376446847C6(uParam0, 35, uParam1);
}

struct<35> func_413(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_414(iParam0))
	{
		return Global_1315925[unk_0x1788E93557766241() /*35*/];
	}
	Var0 = { func_80(iParam0) };
	unk_0x55FB44C9EE7B72D8(&Var13, 35, &Var0);
	return Var13;
}

int func_414(int iParam0)
{
	if (iParam0 == unk_0x1788E93557766241())
	{
		return 1;
	}
	return 0;
}

int func_415(var uParam0)
{
	if (unk_0x1162FE3C5A637040())
	{
		if (unk_0x70443014BEB6B15D() && unk_0x9A6FFB0772343488(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (func_8(iParam0) || func_420(iParam0))
	{
		return 0;
	}
	if (!func_419(iParam0))
	{
		return 0;
	}
	if ((!func_418(iParam0) && Global_2414327[iParam0 /*255*/].f_230 == -1) && !func_417(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_417(int iParam0)
{
	return Global_1583725[iParam0 /*334*/].f_173 != 0;
}

int func_418(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x1788E93557766241(), 0, 1))
		{
			if (unk_0x6871380D51134D0D(iParam0, unk_0x1788E93557766241()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_419(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_124, 22);
}

int func_420(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10) || unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 9));
	}
	return 0;
}

int func_421(int iParam0)
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
		if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_124, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_422()
{
	switch (func_230(unk_0x1788E93557766241()))
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

void func_423(var uParam0)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x26221D1D76579618(0);
		unk_0xD3DF251F2DF3B257();
	}
}

void func_424(bool bParam0)
{
	if (bParam0)
	{
		Global_1327584.f_2 = 1;
	}
	else
	{
		Global_1327584.f_2 = 0;
	}
}

void func_425()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 1))
	{
		if (func_211())
		{
			func_202();
		}
	}
}

int func_426()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 0) && func_211())
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 1) && func_211())
	{
		return 1;
	}
	return 0;
}

int func_427()
{
	if (func_211())
	{
		if (func_55(Global_2422491.f_2136[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_428(int iParam0)
{
	Global_1327584.f_1 = Global_1327584;
	Global_1327584 = iParam0;
}

int func_429(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	
	StringCopy(&Var0, "", 16);
	bVar5 = func_461(iParam1);
	if (iParam1 == 17)
	{
		bVar4 = true;
	}
	fVar6 = func_460();
	if (iParam1 == 23)
	{
		if (func_459())
		{
			if (func_458() > 0 && Global_1573539)
			{
				unk_0x4B97E990CAFEB8CF();
				unk_0x1F4FE6D0BB9E338B(fVar6);
				unk_0x8A5A9834DB717F2D(18);
				if (unk_0x11A809BBE3889742())
				{
					unk_0xCCC2311C8DF9914D();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_450())
		{
			func_449(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4405, 25))
	{
		func_449(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_20)))
	{
		if (func_458() == 1)
		{
			func_448(bVar5, uParam0, 0);
			func_2(&(uParam2->f_20), 0, 0);
			func_449(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_20)) || bParam5)
	{
		if (unk_0x11A809BBE3889742())
		{
			unk_0xCCC2311C8DF9914D();
		}
		if (func_1(&(uParam2->f_20), 10000, 0) || (func_458() == 0 && !bParam5))
		{
			func_449(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar4 == 0)
			{
				func_447();
				if (iParam1 == 23)
				{
					unk_0x4B97E990CAFEB8CF();
				}
				unk_0x8A5A9834DB717F2D(18);
			}
			if (unk_0x889D01384B54BCE3(uParam2->f_34, 0))
			{
				Global_1573537 = uParam3;
				Global_1573536 = 1;
				unk_0x1F4FE6D0BB9E338B(fVar6);
				if (bVar4)
				{
					if (uParam2->f_35 != Global_1573538)
					{
						unk_0x29DB79DD4D939B38(&(uParam2->f_34), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar4 == 0)
				{
					func_447();
					if (iParam1 == 23)
					{
						unk_0x4B97E990CAFEB8CF();
					}
					unk_0x8A5A9834DB717F2D(18);
				}
				unk_0x1F4FE6D0BB9E338B(fVar6);
				if (func_448(bVar5, uParam0, 0))
				{
					func_423(uParam0);
					uParam2->f_17 = func_445(iParam1, &(Global_1604248.f_58254), bParam4);
					if (unk_0x06771AF7795B3ECF(uParam2->f_17))
					{
						uParam2->f_17 = func_445(iParam1, &(Global_1604248.f_58254), bParam4);
					}
					if (bParam4)
					{
						func_442(uParam0, uParam2->f_17, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_436(uParam0, func_439(uParam2), func_437(uParam2), -1);
					}
					else if (bVar4)
					{
						uParam2->f_35 = Global_1573538;
						func_442(uParam0, uParam2->f_17, "", 0, -1, Global_1573538, 1);
					}
					else
					{
						Var0 = { func_434(iParam1) };
						iVar7 = func_430(iParam1);
						func_442(uParam0, uParam2->f_17, &Var0, 1, iVar7, -1, 1);
					}
					unk_0xD0E2BFCE93AE3ABD(&(uParam2->f_34), 0);
				}
			}
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
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
			if (func_433(unk_0x1788E93557766241()))
			{
				iVar0 = 20;
			}
			if (func_432(unk_0x1788E93557766241()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_431(unk_0x1788E93557766241()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_431(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 4;
}

bool func_432(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

bool func_433(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

struct<4> func_434(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_435(unk_0x1788E93557766241()) || func_431(unk_0x1788E93557766241()))
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
			StringIntConCat(&Var0, Global_1604248.f_17, 16);
			break;
	}
	return Var0;
}

bool func_435(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 5;
}

void func_436(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_TITLE");
		if (unk_0x06771AF7795B3ECF(uParam2))
		{
			func_395(uParam1);
		}
		else if (func_230(unk_0x1788E93557766241()) == 133)
		{
			unk_0xEBC0B3BDAD1250BE("FM_AE_BRACKT_C");
			unk_0x4498E0CBD76B2D72(uParam1);
			unk_0x4498E0CBD76B2D72(sParam2);
			unk_0x9F94C7B5E8C04AB3();
		}
		else
		{
			unk_0xEBC0B3BDAD1250BE("FM_AE_BRACKT");
			unk_0x4498E0CBD76B2D72(sParam1);
			unk_0x4498E0CBD76B2D72(sParam2);
			unk_0x9F94C7B5E8C04AB3();
		}
		func_395("");
		if (iParam3 != -1)
		{
			unk_0x26221D1D76579618(iParam3);
		}
		unk_0xD3DF251F2DF3B257();
	}
}

char* func_437(var uParam0)
{
	if (func_438() && !unk_0x06771AF7795B3ECF(uParam0->f_106))
	{
		return uParam0->f_106;
	}
	else
	{
		switch (func_230(unk_0x1788E93557766241()))
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

bool func_438()
{
	return Global_1583724;
}

char* func_439(var uParam0)
{
	if (func_438() && !unk_0x06771AF7795B3ECF(uParam0->f_105))
	{
		return uParam0->f_105;
	}
	else
	{
		switch (func_230(unk_0x1788E93557766241()))
		{
			case 131:
				return "PIM_TA9";
			
			case 132:
				if (func_441() == 0)
				{
					return "CPC_TILEL";
				}
				else if (func_441() == 1)
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
				if (func_440() == 1)
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

int func_440()
{
	return Global_2446992.f_4623;
}

int func_441()
{
	if (func_230(unk_0x1788E93557766241()) == 132)
	{
		return Global_2446992.f_4618;
	}
	return -1;
}

void func_442(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_397(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xEBC0B3BDAD1250BE(uParam1);
			unk_0x53B64327E3305DCB(iParam5);
			unk_0x9F94C7B5E8C04AB3();
		}
		else
		{
			func_395(sParam1);
		}
		if (func_459() && iParam6)
		{
			if (func_444())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xEBC0B3BDAD1250BE("LBD_DPD_CNT");
			unk_0x53B64327E3305DCB(iVar0);
			unk_0x53B64327E3305DCB(iVar1);
			unk_0x9F94C7B5E8C04AB3();
		}
		else
		{
			func_395(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x26221D1D76579618(iParam4);
			if (func_443(unk_0x1788E93557766241()))
			{
				unk_0x26221D1D76579618(166);
			}
		}
		unk_0xD3DF251F2DF3B257();
	}
}

int func_443(int iParam0)
{
	if (func_433(iParam0) || func_432(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_444()
{
	return Global_1573539;
}

char* func_445(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_446();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573703 == 0)
		{
			Global_1573703 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x06771AF7795B3ECF(uParam1))
	{
		if (Global_1573703 == 1)
		{
			Global_1573703 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573703 == 0)
		{
			Global_1573703 = 1;
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

char* func_446()
{
	if (unk_0x0ECFB4741538685D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x5A6940327DC87D8C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6F6D700F89FC8C84())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x412748A9F328962B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_447()
{
	Global_35737 = 1;
}

bool func_448(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x36ECDA4DD9A3F08D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x36ECDA4DD9A3F08D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x36ECDA4DD9A3F08D("mp_matchmaking_card");
	}
	return unk_0xC8378A96673BCC40(*uParam1);
}

void func_449(var uParam0, var uParam1, bool bParam2)
{
	unk_0x29DB79DD4D939B38(&(uParam1->f_34), 7);
	Global_1573537 = 0;
	func_388();
	Global_1573536 = 0;
	uParam1->f_28 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_20)))
		{
			func_44(&(uParam1->f_20));
		}
	}
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0x7559DFAB61B017F2(uParam0);
	}
	if (unk_0x889D01384B54BCE3(uParam1->f_34, 0))
	{
		unk_0x29DB79DD4D939B38(&(uParam1->f_34), 0);
	}
	unk_0x1F4FE6D0BB9E338B(0f);
}

int func_450()
{
	if (func_457())
	{
		return 0;
	}
	if (func_377())
	{
		return 0;
	}
	if (!func_455())
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_454(8, -1))
	{
		return 0;
	}
	if (func_458() == 2)
	{
		return 0;
	}
	if (Global_2446992.f_4386)
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	else if (!func_253(unk_0x1788E93557766241(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_453(1) || func_451(1)) || Global_17099.f_124) || Global_17099)
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (func_89(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (Global_1690013)
	{
		return 0;
	}
	if (Global_1690016)
	{
		return 0;
	}
	return 1;
}

int func_451(bool bParam0)
{
	if (unk_0xEFA77CBA432BF4A0())
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (func_452(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xF49761626882E968(0, 25) || unk_0xF49761626882E968(0, 68))
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
	if (unk_0xF49761626882E968(0, 19) || (!bParam0 && unk_0x4E151C54AB29940C(0, 19)))
	{
		return 1;
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (((unk_0xF49761626882E968(0, 166) || unk_0xF49761626882E968(0, 167)) || unk_0xF49761626882E968(0, 168)) || unk_0xF49761626882E968(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x4E151C54AB29940C(0, 166) || unk_0x4E151C54AB29940C(0, 167)) || unk_0x4E151C54AB29940C(0, 168)) || unk_0x4E151C54AB29940C(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C32B24E6B794217())
	{
		if (!unk_0x2DE0B96E966FD817(uParam0))
		{
			unk_0xC00D643B16552C4D(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_453(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

bool func_454(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

int func_455()
{
	if (func_456())
	{
		return 1;
	}
	if (unk_0xF4C685E933068D23())
	{
		return 0;
	}
	if (unk_0xE9A5FF67266655B2() || unk_0x0FFB470AFBDA3DCD())
	{
		return 0;
	}
	if (unk_0xD8FED4345E7C9A31())
	{
		return 0;
	}
	return 1;
}

bool func_456()
{
	return Global_1312438;
}

bool func_457()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_458()
{
	return Global_1327587.f_68;
}

int func_459()
{
	if (Global_1573538 > 16)
	{
		return 1;
	}
	return 0;
}

float func_460()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xF2FBCB1117606FD1()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_461(int iParam0)
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

int func_462()
{
	if (func_464())
	{
		return 1;
	}
	if (func_7(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (func_438())
	{
		return 1;
	}
	if (func_287(unk_0x1788E93557766241()))
	{
		switch (func_230(unk_0x1788E93557766241()))
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
				if (!func_463(unk_0x1788E93557766241()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_463(unk_0x1788E93557766241()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_463(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 4);
}

int func_464()
{
	if (func_465(unk_0x1788E93557766241()))
	{
		return Global_1318826;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return unk_0xAD61ABFD1C9E1E0E(iParam0);
	}
	return 0;
}

void func_466()
{
	if (Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_3 == 3)
	{
		if (!unk_0x889D01384B54BCE3(iLocal_324, 8))
		{
			if ((!func_7(unk_0x1788E93557766241()) && !func_107(unk_0x1788E93557766241())) && !func_299(unk_0x1788E93557766241()))
			{
				func_298();
			}
		}
		else if (!unk_0x889D01384B54BCE3(iLocal_324, 9))
		{
			if ((func_7(unk_0x1788E93557766241()) || func_107(unk_0x1788E93557766241())) || func_299(unk_0x1788E93557766241()))
			{
				unk_0xA761D4AC6115623D();
				Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4 = 0;
				unk_0xD0E2BFCE93AE3ABD(&iLocal_324, 9);
			}
		}
	}
}

void func_467()
{
	int iVar0;
	
	if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_328)))
	{
		iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_328));
		if (unk_0x38FA37FE3518BA38(iVar0))
		{
			func_468(iVar0, 2);
		}
	}
	iLocal_328++;
	if (iLocal_328 >= unk_0x3F202553F90D4442())
	{
		iLocal_328 = 0;
	}
}

void func_468(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1573734.f_18)))
	{
		return;
	}
	if (unk_0x889D01384B54BCE3(Global_1573734.f_2, iParam0))
	{
		if (Global_1573734 < iParam1 && unk_0x889D01384B54BCE3(Global_1573734.f_1, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 0);
			return;
		}
		if (Global_1573734 != 0)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 1);
		}
		Global_1573734 = 0;
		Global_1573734.f_2 = 0;
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_2), iParam0);
	if (((!func_8(iParam0) && !func_469(iParam0)) && !func_14(iParam0, 0)) && !func_7(iParam0))
	{
		Global_1573734++;
	}
}

bool func_469(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10);
}

void func_470(int iParam0, int iParam1)
{
	Local_2723[iParam0 /*8*/] = iParam1;
}

int func_471()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_724.f_526[iVar0 /*46*/].f_1 = func_58();
		iVar0++;
	}
	return 1;
}

int func_472()
{
	return Local_636.f_0;
}

int func_473(int iParam0)
{
	return Local_2723[iParam0 /*8*/];
}

void func_474()
{
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 6))
	{
		func_488();
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 6);
	}
	if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 7))
	{
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 4) || unk_0x889D01384B54BCE3(Global_1573734.f_1, 16))
		{
			if (((!unk_0xF1F4C42EF94F5FDD() && !unk_0x11A809BBE3889742()) && !func_211()) && func_12(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 7);
				func_208("FME_PASINT", 30000);
				func_207(1);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 17))
		{
			if (func_110() && !func_109())
			{
				unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 17);
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 16);
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 23))
	{
		if (((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x889D01384B54BCE3(Global_2446992.f_734, 2)) && func_12(unk_0x1788E93557766241(), 1, 1)) && !Global_67066) && !Global_51940) && !unk_0x11A809BBE3889742())
		{
			if (func_486())
			{
				func_208("AMEV_GA_RP", -1);
				func_207(1);
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 23);
			}
		}
	}
	if (unk_0x2B0FFD431FD5A9FA() && unk_0xB0E35FF1A90C8FAA() == 15)
	{
		if (func_485(unk_0x1788E93557766241()))
		{
			if (!unk_0xAA98A9C364883DB0(1344549371))
			{
				unk_0xCB1EDED1906BA7D4(1344549371);
			}
		}
		else if (unk_0xAA98A9C364883DB0(1344549371))
		{
			unk_0x71E34E871809D6EE(1344549371);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 9))
	{
		if ((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x11A809BBE3889742()) && !func_211()) && func_12(unk_0x1788E93557766241(), 1, 1)) && !func_108(unk_0x1788E93557766241(), 21))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 9);
			func_484(0);
			func_208("FME_TBL00", -1);
			func_207(1);
		}
	}
	if (func_287(unk_0x1788E93557766241()))
	{
		if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 18))
		{
			if ((func_108(unk_0x1788E93557766241(), 21) && unk_0x889D01384B54BCE3(Global_1573734.f_1, 20)) && !unk_0x889D01384B54BCE3(Global_1573734.f_1, 19))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 18);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 18))
		{
			if (((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x11A809BBE3889742()) && !func_211()) && func_12(unk_0x1788E93557766241(), 1, 1)) && unk_0x83B393DE31BAC8F0()) && !Global_2446992.f_4627)
			{
				unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 18);
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 19);
				func_208("AMTT_RPAS", -1);
				func_207(1);
			}
		}
	}
	if ((((func_287(unk_0x1788E93557766241()) && !func_8(unk_0x1788E93557766241())) && func_230(unk_0x1788E93557766241()) != 146) && !func_7(unk_0x1788E93557766241())) && !func_107(unk_0x1788E93557766241()))
	{
		if (func_310(func_230(unk_0x1788E93557766241())))
		{
			unk_0xFAC75988A7D078D3(unk_0x1788E93557766241());
		}
		if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 22))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 22);
		}
		if (func_344(unk_0x1788E93557766241()) || func_305())
		{
			if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 10))
			{
				if (func_483(func_230(unk_0x1788E93557766241())))
				{
					if (func_177(0) && !Global_2391042)
					{
						unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 9);
					}
					func_309(1);
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 14);
				}
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 10);
			}
		}
		if (func_485(unk_0x1788E93557766241()))
		{
			if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 11))
			{
				if (!Global_90094.f_8)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 12);
					func_307(1);
				}
				if (!func_482())
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 13);
					func_306();
				}
				if (!Global_2391042)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 14);
					if (func_177(0) && !Global_2391042)
					{
						unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 9);
					}
					func_309(1);
				}
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 11);
			}
		}
		else
		{
			func_480(0);
		}
	}
	else
	{
		func_480(1);
	}
	func_475();
	if (func_304(func_230(unk_0x1788E93557766241())) && !unk_0x889D01384B54BCE3(Global_1573734.f_1, 21))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 21);
	}
	if ((func_110() && !func_109()) || func_108(unk_0x1788E93557766241(), 21))
	{
		if (!unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 10))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 10);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 10))
	{
		unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 10);
	}
}

void func_475()
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
				if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 26))
				{
					unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 26);
				}
				func_476(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 26))
	{
		func_44(&(Global_1573734.f_21));
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 26);
	}
}

void func_476(int iParam0, int iParam1)
{
	if (!func_45(&(Global_1573734.f_21)))
	{
		func_2(&(Global_1573734.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573734.f_21), iParam1, 0))
	{
		if (func_458() > 0)
		{
			func_479(iParam0);
			if (func_205("AMEV_LBD_HELP"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			func_44(&(Global_1573734.f_21));
		}
	}
	else
	{
		func_478(0);
		func_477();
	}
}

void func_477()
{
	Global_2446992.f_4373 = 0;
}

void func_478(int iParam0)
{
	Global_1327587.f_68 = iParam0;
}

void func_479(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422491.f_2136[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2422491.f_2136[iVar0 /*70*/].f_2 = 5;
			unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_2136[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_480(int iParam0)
{
	if ((unk_0x889D01384B54BCE3(Global_1573734.f_1, 11) || (unk_0x889D01384B54BCE3(Global_1573734.f_1, 10) && iParam0)) || (unk_0x889D01384B54BCE3(Global_1573734.f_1, 22) && iParam0))
	{
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 12))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 12);
			func_307(0);
		}
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 13))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 13);
			func_481();
		}
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 14))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 14);
			func_309(0);
		}
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 11);
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 10);
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 22);
	}
}

void func_481()
{
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_4537), 0);
}

bool func_482()
{
	return unk_0x889D01384B54BCE3(Global_2446992.f_4537, 0);
}

int func_483(int iParam0)
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
			return func_485(unk_0x1788E93557766241());
		
		case 133:
			return (func_305() || func_5(func_229()));
		
		default:
	}
	return 0;
}

void func_484(int iParam0)
{
	int iVar0;
	
	iVar0 = func_152(2499, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 0);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 1);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 4))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 4);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 5))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 6))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 6);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 7))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 7);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 8))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 9))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 9);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 10))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 10);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 11))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 11);
		}
	}
	func_143(2499, iVar0, -1, 1);
}

int func_485(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_486()
{
	int iVar0;
	
	if (!func_45(&(Global_1573734.f_15)))
	{
		func_2(&(Global_1573734.f_15), 0, 0);
		Global_1573734.f_17 = 0;
	}
	else if (func_1(&(Global_1573734.f_15), 1000, 0))
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Global_1573734.f_17)))
		{
			iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(Global_1573734.f_17));
			if (unk_0x38FA37FE3518BA38(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_487(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_36(unk_0x1788E93557766241()), func_36(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573734.f_17++;
		if (Global_1573734.f_17 >= 32)
		{
			Global_1573734.f_17 = 0;
			func_44(&(Global_1573734.f_15));
		}
	}
	return 0;
}

int func_487(int iParam0, int iParam1)
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
	if (Global_1583725[iVar0 /*334*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_488()
{
	unk_0xCC68D69AF0F39112(5);
	func_490();
	unk_0xABC4F2A6D7D56CF4(1f);
	unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 8);
	func_489();
}

void func_489()
{
	if (Global_1699238)
	{
		if (unk_0x889D01384B54BCE3(Global_1699239, 0))
		{
			unk_0x29DB79DD4D939B38(&Global_2453335, 0);
		}
		if (unk_0x889D01384B54BCE3(Global_1699239, 1))
		{
			unk_0x29DB79DD4D939B38(&Global_2453335, 1);
		}
		if (unk_0x889D01384B54BCE3(Global_1699239, 5))
		{
			unk_0x29DB79DD4D939B38(&Global_2453335, 5);
		}
		if (unk_0xDED2D15D4CD01463(-355737150))
		{
			unk_0x3A73A1FCDAD1D6BE(-355737150, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-580979506))
		{
			unk_0x3A73A1FCDAD1D6BE(-580979506, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-1426452475))
		{
			unk_0x3A73A1FCDAD1D6BE(-1426452475, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(745417724))
		{
			unk_0x3A73A1FCDAD1D6BE(745417724, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-1305304906))
		{
			unk_0x3A73A1FCDAD1D6BE(-1305304906, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-1543175077))
		{
			unk_0x3A73A1FCDAD1D6BE(-1543175077, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-811770997))
		{
			unk_0x3A73A1FCDAD1D6BE(-811770997, 1, 0, 0);
		}
		Global_1699239 = 0;
	}
	Global_1699238 = 0;
}

void func_490()
{
	if (unk_0xDECCEB462707CB3E(Global_2446992.f_4629))
	{
		if (!Global_2446992.f_4629 == unk_0x60C807BBCBE66CC7())
		{
			return;
		}
	}
	Global_2446992.f_4629 = -1;
	Global_2446992.f_4628 = 1f;
}

int func_491()
{
	return 0;
}

int func_492()
{
	bool bVar0;
	
	func_497(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_496())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_495())
	{
		return 1;
	}
	if (func_494(157))
	{
		if (!func_493())
		{
			return 1;
		}
	}
	if (func_494(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_312() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_312()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_493()
{
	return Global_2428577.f_572;
}

int func_494(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_495()
{
	return Global_2435556;
}

bool func_496()
{
	return Global_2428577.f_567;
}

void func_497(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_498(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_498(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_499(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_499(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_500()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_501()
{
	int iVar0;
	int iVar1;
	
	if (func_492())
	{
		Local_2980.f_5 = 5;
	}
	else if (unk_0x889D01384B54BCE3(Local_636.f_2, 0))
	{
		Local_2980.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_2980.f_5 = 1;
	}
	else
	{
		Local_2980.f_5 = 2;
	}
	Local_2980.f_0 = Local_636.f_52;
	Local_2980.f_1 = Local_636.f_53;
	Local_2980.f_4 = Local_636.f_66;
	Local_2980.f_3 = Local_636.f_51;
	Local_2980.f_10 = (unk_0x5C7391B560C251C7() - Local_2980.f_9);
	if (!Global_262145.f_9147)
	{
		if (Local_2980.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x044A481E863E2F6B() != -1)
	{
		func_524(Local_2980, Local_636.f_3, Local_2723[unk_0x044A481E863E2F6B() /*8*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0x889D01384B54BCE3(iLocal_324, 4))
	{
		unk_0x7CB5477E93D6A302(iLocal_332);
		unk_0x29DB79DD4D939B38(&iLocal_324, 4);
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (unk_0x889D01384B54BCE3(iLocal_622, iVar1) && !unk_0xB834C37F11282062(uLocal_623[iVar1]))
		{
			unk_0x7CB5477E93D6A302(uLocal_623[iVar1]);
		}
		iVar1++;
	}
	func_295();
	func_347(1, 1);
	unk_0x26D99D5A82FD18E8(0);
	func_370(0);
	func_302(Local_636.f_3, 0);
	func_502(133, 0, Local_636.f_37 == 6);
	func_301(23, 0);
	if (func_216() >= 0f)
	{
		unk_0xFF9942C3012E754C(0f, 0);
	}
	unk_0xA761D4AC6115623D();
	unk_0x82706E6C897B0FA1();
}

void func_502(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1788E93557766241() != -1)
	{
		if (unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 13))
		{
			unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 13);
		}
		if (unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 14))
		{
			unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 14);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 21))
	{
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 21);
	}
	func_520();
	unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
	unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_519(func_230(unk_0x1788E93557766241()));
		func_301(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x1788E93557766241() != -1) && func_518(unk_0x1788E93557766241()) >= 12)
		{
			func_517(2500, -1);
			iVar1 = func_152(2500, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 5);
			}
		}
		func_516();
		func_515();
		func_514();
		func_507();
		func_506();
		func_488();
		func_505();
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1627), 2);
		func_504();
		func_112();
	}
	if (unk_0xAA98A9C364883DB0(1344549371))
	{
		unk_0x71E34E871809D6EE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (unk_0x1788E93557766241() != -1 && !func_108(unk_0x1788E93557766241(), 21))
		{
			func_309(0);
			func_307(0);
			func_503();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2437331 = -1;
			func_46(26, -1);
		}
	}
	Global_2445946 = 1;
}

void func_503()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x889D01384B54BCE3(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x889D01384B54BCE3(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0x29DB79DD4D939B38(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_504()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 1))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_4536), 1);
	}
	if (Global_2446992.f_4536 > 0)
	{
		unk_0x495459882382D113("FM_COUNTDOWN_30S_KILL");
		unk_0x495459882382D113("FM_COUNTDOWN_30S_FIRA");
		unk_0x124843CE93F39C27("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x435923F2389CD0AD(1);
		Global_2446992.f_4536 = 0;
		unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
		unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
		unk_0x08E9BC7825B63619("AllowScoreAndRadio", 0);
		if (!unk_0x9BA82E09A986BA4B(unk_0x7E5A426328F6E635(), "am_pi_menu"))
		{
			if (Global_2446992.f_4546 > -1)
			{
				unk_0x0D992EF9B9F0C8E3(Global_2446992.f_4546);
				Global_2446992.f_4546 = -1;
			}
		}
	}
}

void func_505()
{
	struct<23> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573734 = { Var0 };
}

void func_506()
{
	var uVar0;
	
	Global_1318826 = uVar0;
}

void func_507()
{
	Global_2404570.f_20 = { Global_2406077 };
	Global_2404570.f_22 = { Global_2406079 };
	func_508(1);
}

void func_508(bool bParam0)
{
	Global_2404570.f_39 = { Global_2406096 };
	if (bParam0)
	{
		func_513();
	}
	func_510(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_509(0);
	func_115();
}

void func_509(bool bParam0)
{
	if (bParam0)
	{
		Global_2404570.f_587 = 0;
	}
	else
	{
		Global_2404570.f_587 = 1;
	}
}

void func_510(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404570.f_1093 = iParam1;
		Global_2404570.f_1094 = iParam2;
		func_511();
		func_340(8, 0, 0);
		Global_2404570.f_588 = 1;
		Global_2404570.f_1097 = iParam3;
		Global_2404570.f_1098 = iParam4;
		Global_2404570.f_1095 = iParam5;
		Global_2404570.f_1096 = iParam6;
		Global_2404570.f_1099 = iParam7;
		Global_2404570.f_1100 = iParam8;
		Global_2404570.f_1101 = iParam9;
	}
	else
	{
		func_511();
		func_340(0, 0, 0);
		Global_2404570.f_588 = 0;
	}
}

void func_511()
{
	func_512();
	Global_2404570.f_589 = 0;
}

void func_512()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404570.f_590[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_513()
{
	Global_2404570.f_316 = { Global_2406373 };
}

void func_514()
{
	Global_2446992.f_4537 = 0;
}

void func_515()
{
	if (unk_0x1788E93557766241() != -1)
	{
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_1 = 0;
	}
}

void func_516()
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	if (iVar0 != -1)
	{
		Global_1602607[iVar0 /*12*/] = -1;
	}
}

void func_517(int iParam0, int iParam1)
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

int func_518(int iParam0)
{
	return Global_1583725[iParam0 /*334*/].f_188.f_6;
}

int func_519(int iParam0)
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
			if (func_485(unk_0x1788E93557766241()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_520()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 3) || unk_0x889D01384B54BCE3(Global_2446992.f_1626, 4))
	{
		if (unk_0xF4C685E933068D23() || unk_0xE9A5FF67266655B2())
		{
			unk_0x5FE2A83120E8127F(800);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 5))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1626), 5);
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 3))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1626), 3);
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 4))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1626), 4);
	}
	func_523(0);
	func_522(0);
	func_521(0);
}

void func_521(int iParam0)
{
	if (Global_2446992.f_4361 != iParam0)
	{
		Global_2446992.f_4361 = iParam0;
	}
}

void func_522(bool bParam0)
{
	if (Global_2446992.f_4360 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2446992.f_4360 = bParam0;
	}
}

void func_523(int iParam0)
{
	if (Global_2446992.f_4358 != iParam0)
	{
		Global_2446992.f_4358 = iParam0;
	}
}

void func_524(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x7E5A426328F6E635();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_68325)
	{
		if (unk_0x9BA82E09A986BA4B(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xBAA2F0490E146BE8(&Var14);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x3DE3AA516FB126A4(&Var28);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x6A60E43998228229(&Var52);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_penned_in"))
		{
			unk_0x1A7CE7CD3E653485(&Param0);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x419615486BBF1956(&Var66);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x84DFC579C2FC214C(&Var79);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x164C5FF663790845(&Var107);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (unk_0x9BA82E09A986BA4B(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

int func_525(struct<20> Param0)
{
	func_533(func_534(Param0.f_0), Param0);
	unk_0x992F36F53DC17762(0);
	unk_0x29AA9A92BCC0F8E3(func_532(9));
	func_529(0, -1, 0);
	func_527(133);
	unk_0x241F80BF72379478(&Local_636, 88);
	unk_0x51FC2B81A21C009A(&Local_2723, 257);
	if (!func_526())
	{
		func_501();
	}
	if (unk_0xE9849174628A9C50())
	{
		unk_0x06377C7FCB523735(&(Local_636.f_52), &(Local_636.f_53));
	}
	Local_2980.f_2 = unk_0x2E8B9FEEE576BA13();
	unk_0xFF9F94FD851C212A(0);
	return 1;
}

int func_526()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_496())
		{
			return 0;
		}
		if (func_494(155))
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

void func_527(int iParam0)
{
	func_505();
	func_528();
	func_514();
	Global_1573734.f_4 = iParam0;
	Global_1573734.f_5 = iParam0;
	func_317(iParam0, -1);
	func_27(&(Global_1573734.f_18), 0, 0);
	Global_2446992.f_4402 = 0;
	Global_2436194[0] = func_58();
	Global_2436194[1] = func_58();
	Global_2436194[2] = func_58();
	Global_2436194[3] = func_58();
	Global_2436194[4] = func_58();
	func_112();
	func_202();
	if (func_110() && !func_109())
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 16);
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 17);
	}
}

void func_528()
{
	var uVar0;
	
	Global_1573757 = uVar0;
}

int func_529(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0;
			}
		}
		if (!func_530())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_496())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_494(155))
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_531();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_531();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_530()
{
	return Global_1315866;
}

void func_531()
{
	unk_0x82706E6C897B0FA1();
}

int func_532(int iParam0)
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

void func_533(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_531();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_534(int iParam0)
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
		
		case 59:
			return 32;
		
		case 60:
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
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}


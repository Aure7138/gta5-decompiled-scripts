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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91[65];
	float fLocal_287 = 0f;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_294 = { 0, 0, 0 } ;
	struct<3> Local_297 = { 0, 0, 0 } ;
	float fLocal_300 = 0f;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	float fLocal_321 = 0f;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	struct<3> Local_335[65];
	var uLocal_531[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_597[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	struct<68> Local_624 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	struct<535> Local_712 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1247 = -1;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
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
	var uLocal_1269 = -1082130432;
	var uLocal_1270 = 3;
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
	var uLocal_1285 = 0;
	var uLocal_1286 = -1;
	var uLocal_1287 = 0;
	var uLocal_1288 = -1;
	var uLocal_1289 = -1;
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
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = -1082130432;
	var uLocal_1312 = 3;
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
	var uLocal_1328 = -1;
	var uLocal_1329 = 0;
	var uLocal_1330 = -1;
	var uLocal_1331 = -1;
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
	var uLocal_1353 = -1082130432;
	var uLocal_1354 = 3;
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
	var uLocal_1370 = -1;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1;
	var uLocal_1373 = -1;
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
	var uLocal_1395 = -1082130432;
	var uLocal_1396 = 3;
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
	var uLocal_1412 = -1;
	var uLocal_1413 = 0;
	var uLocal_1414 = -1;
	var uLocal_1415 = -1;
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
	var uLocal_1437 = -1082130432;
	var uLocal_1438 = 3;
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
	var uLocal_1454 = -1;
	var uLocal_1455 = 0;
	var uLocal_1456 = -1;
	var uLocal_1457 = -1;
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
	var uLocal_1479 = -1082130432;
	var uLocal_1480 = 3;
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
	var uLocal_1496 = -1;
	var uLocal_1497 = 0;
	var uLocal_1498 = -1;
	var uLocal_1499 = -1;
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
	var uLocal_1521 = -1082130432;
	var uLocal_1522 = 3;
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
	var uLocal_1538 = -1;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1;
	var uLocal_1541 = -1;
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
	var uLocal_1563 = -1082130432;
	var uLocal_1564 = 3;
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
	var uLocal_1580 = -1;
	var uLocal_1581 = 0;
	var uLocal_1582 = -1;
	var uLocal_1583 = -1;
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
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = -1082130432;
	var uLocal_1606 = 3;
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
	var uLocal_1622 = -1;
	var uLocal_1623 = 0;
	var uLocal_1624 = -1;
	var uLocal_1625 = -1;
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
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = -1082130432;
	var uLocal_1648 = 3;
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
	var uLocal_1665 = 0;
	var uLocal_1666 = -1;
	var uLocal_1667 = -1;
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
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = -1082130432;
	var uLocal_1690 = 3;
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
	var uLocal_1706 = -1;
	var uLocal_1707 = 0;
	var uLocal_1708 = -1;
	var uLocal_1709 = -1;
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
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = -1082130432;
	var uLocal_1732 = 3;
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
	var uLocal_1748 = -1;
	var uLocal_1749 = 0;
	var uLocal_1750 = -1;
	var uLocal_1751 = -1;
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
	var uLocal_1773 = -1082130432;
	var uLocal_1774 = 3;
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
	var uLocal_1789 = 0;
	var uLocal_1790 = -1;
	var uLocal_1791 = 0;
	var uLocal_1792 = -1;
	var uLocal_1793 = -1;
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
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = -1082130432;
	var uLocal_1816 = 3;
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
	var uLocal_1831 = 0;
	var uLocal_1832 = -1;
	var uLocal_1833 = 0;
	var uLocal_1834 = -1;
	var uLocal_1835 = -1;
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
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = -1082130432;
	var uLocal_1858 = 3;
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
	var uLocal_1873 = 0;
	var uLocal_1874 = -1;
	var uLocal_1875 = 0;
	var uLocal_1876 = -1;
	var uLocal_1877 = -1;
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
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = -1082130432;
	var uLocal_1900 = 3;
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
	var uLocal_1916 = -1;
	var uLocal_1917 = 0;
	var uLocal_1918 = -1;
	var uLocal_1919 = -1;
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
	var uLocal_1941 = -1082130432;
	var uLocal_1942 = 3;
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
	var uLocal_1958 = -1;
	var uLocal_1959 = 0;
	var uLocal_1960 = -1;
	var uLocal_1961 = -1;
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
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = -1082130432;
	var uLocal_1984 = 3;
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
	var uLocal_1999 = 0;
	var uLocal_2000 = -1;
	var uLocal_2001 = 0;
	var uLocal_2002 = -1;
	var uLocal_2003 = -1;
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
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = -1082130432;
	var uLocal_2026 = 3;
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
	var uLocal_2041 = 0;
	var uLocal_2042 = -1;
	var uLocal_2043 = 0;
	var uLocal_2044 = -1;
	var uLocal_2045 = -1;
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
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = -1082130432;
	var uLocal_2068 = 3;
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
	var uLocal_2083 = 0;
	var uLocal_2084 = -1;
	var uLocal_2085 = 0;
	var uLocal_2086 = -1;
	var uLocal_2087 = -1;
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
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = -1082130432;
	var uLocal_2110 = 3;
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
	var uLocal_2126 = -1;
	var uLocal_2127 = 0;
	var uLocal_2128 = -1;
	var uLocal_2129 = -1;
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
	var uLocal_2150 = 0;
	var uLocal_2151 = -1082130432;
	var uLocal_2152 = 3;
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
	var uLocal_2168 = -1;
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
	var uLocal_2210 = -1;
	var uLocal_2211 = 0;
	var uLocal_2212 = -1;
	var uLocal_2213 = -1;
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
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = -1082130432;
	var uLocal_2236 = 3;
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
	var uLocal_2251 = 0;
	var uLocal_2252 = -1;
	var uLocal_2253 = 0;
	var uLocal_2254 = -1;
	var uLocal_2255 = -1;
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
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = -1082130432;
	var uLocal_2278 = 3;
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
	var uLocal_2293 = 0;
	var uLocal_2294 = -1;
	var uLocal_2295 = 0;
	var uLocal_2296 = -1;
	var uLocal_2297 = -1;
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
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = -1082130432;
	var uLocal_2320 = 3;
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
	var uLocal_2336 = -1;
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
	var uLocal_2378 = -1;
	var uLocal_2379 = 0;
	var uLocal_2380 = -1;
	var uLocal_2381 = -1;
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
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = -1082130432;
	var uLocal_2404 = 3;
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
	var uLocal_2420 = -1;
	var uLocal_2421 = 0;
	var uLocal_2422 = -1;
	var uLocal_2423 = -1;
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
	var uLocal_2445 = -1082130432;
	var uLocal_2446 = 3;
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
	var uLocal_2461 = 0;
	var uLocal_2462 = -1;
	var uLocal_2463 = 0;
	var uLocal_2464 = -1;
	var uLocal_2465 = -1;
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
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = -1082130432;
	var uLocal_2488 = 3;
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
	var uLocal_2503 = 0;
	var uLocal_2504 = -1;
	var uLocal_2505 = 0;
	var uLocal_2506 = -1;
	var uLocal_2507 = -1;
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
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = -1082130432;
	var uLocal_2530 = 3;
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
	var uLocal_2546 = -1;
	var uLocal_2547 = 0;
	var uLocal_2548 = -1;
	var uLocal_2549 = -1;
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
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = -1082130432;
	var uLocal_2572 = 3;
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
	var uLocal_2587 = 0;
	var uLocal_2588 = -1;
	var uLocal_2589 = 0;
	var uLocal_2590 = -1;
	struct<12> Local_2591[32];
	struct<12> Local_2976 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_287 = 40000f;
	iLocal_323 = unk_0xD68EA767274B7444();
	iLocal_324 = unk_0xD68EA767274B7444();
	iLocal_325 = -1;
	iLocal_326 = -1;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_771(ScriptParam_0))
		{
			func_733();
		}
	}
	while (true)
	{
		func_732();
		if (func_725() || func_723())
		{
			func_733();
		}
		if (func_721())
		{
			func_733();
		}
		func_695();
		switch (func_694(unk_0x6E61BE9E61434AC1()))
		{
			case 0:
				if (func_693() == 1)
				{
					if (func_692())
					{
						func_691(unk_0x6E61BE9E61434AC1(), 1);
					}
				}
				break;
			
			case 1:
				if (func_693() == 1)
				{
					func_139();
					func_127();
				}
				else if (func_693() == 3)
				{
					func_691(unk_0x6E61BE9E61434AC1(), 3);
				}
				break;
			
			case 3:
				func_733();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_693())
			{
				case 0:
					if (func_114())
					{
						func_113(1);
					}
					break;
				
				case 1:
					if (Local_624.f_37 == 6)
					{
						func_113(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_301, 1000, 0))
					{
						func_113(3);
					}
					break;
				
				case 3:
					func_733();
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
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_624.f_2), 0);
			Local_624.f_1 = unk_0x2B6E0A53779D29EA();
		}
	}
	switch (Local_624.f_37)
	{
		case 0:
			if (func_43())
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
			if (func_1(&(Local_624.f_43), func_29(), 0) || unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_624.f_38 = unk_0x2B6E0A53779D29EA();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_624.f_39), func_28(0), 0) || unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 1))
				{
					Local_624.f_1 = unk_0x2B6E0A53779D29EA();
					unk_0x5D96D8530B3D0904(&(Local_624.f_2), 1);
					func_27(&(Local_624.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_326, &iLocal_325);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_624.f_41), 20000, 0) || Local_624.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_624.f_3))
				{
					func_27(&(Local_624.f_45), 0, 0);
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
		if (unk_0xE5DBF9B6126856CA(Local_624.f_67[iVar0 /*2*/].f_1) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_624.f_67[iVar0 /*2*/].f_1), 0))
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
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_2591[iVar1 /*12*/].f_1, 1) || Local_2591[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_2591[iVar1 /*12*/].f_1, 0))
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
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -357928750;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam14 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
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
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
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
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x5D96D8530B3D0904(&(Local_624.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (unk_0x40B8C182D63932FC(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_624.f_50)
	{
		Local_624.f_50 = iVar1;
	}
	else
	{
		Local_624.f_66 = (Local_624.f_50 - iVar1);
	}
	if (iVar2 > Local_624.f_51)
	{
		Local_624.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
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
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312745;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2591[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4);
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
	switch (Local_624.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10939)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10940)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10941)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10942)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10943)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10944)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10945 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10946)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10947)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10948)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10949)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10950))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10951))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11063)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11064)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10954))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10956))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10957))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10958))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_624.f_3)
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
		if (Local_624.f_4[iParam0] == unk_0x57270EE11514DC67() && func_21(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4, 0))
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
	switch (Local_624.f_3)
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
	
	iVar0 = Local_2591[iParam0 /*12*/].f_4;
	iVar1 = Local_2591[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xEAE0D21A50E6C7F4(Local_624.f_48, iParam0))
	{
		fVar2 = unk_0xBBDA792448DB5A89(Local_624.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_624.f_49++;
			unk_0x5D96D8530B3D0904(&(Local_624.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_624.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_624.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_624.f_4[iVar3] < 0 || func_21(iVar0, Local_2591[Local_624.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2591[Local_624.f_4[iVar3] /*12*/].f_4, iVar1, Local_2591[Local_624.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_624.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_325 = iVar3;
				iLocal_326 = iParam0;
			}
			Local_624.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_624.f_4[iVar5] == iParam0)
				{
					Local_624.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_624.f_3 == 2)
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
	
	if (unk_0xEAE0D21A50E6C7F4(Local_624.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_624.f_4[iVar0] == iParam0)
			{
				Local_624.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(Local_624.f_48), iParam0);
		unk_0x0674E58A79778E99(&(Local_624.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_624.f_3)
	{
		case 0:
			return Global_262145.f_10256;
		
		case 8:
			return Global_262145.f_10258;
		
		case 3:
			return Global_262145.f_10259;
		
		case 1:
			return Global_262145.f_11049;
		
		case 6:
			return Global_262145.f_11050;
		
		case 10:
			return Global_262145.f_11052;
		
		case 11:
			return Global_262145.f_11054;
		
		case 12:
			return Global_262145.f_11055;
		
		case 15:
			return Global_262145.f_11059;
		
		case 16:
			return Global_262145.f_11060;
		
		case 17:
			return Global_262145.f_11061;
		
		case 18:
			return Global_262145.f_11062;
		
		case 13:
			return Global_262145.f_11053;
		
		case 14:
			return Global_262145.f_11056;
		
		case 2:
			return Global_262145.f_10261;
		
		case 7:
			return Global_262145.f_11051;
		
		case 9:
			return Global_262145.f_11057;
		
		case 5:
			return Global_262145.f_10262;
		
		case 4:
			return Global_262145.f_10260;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_11019;
}

void func_30(int iParam0)
{
	Local_624.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_43() && ((Local_624.f_37 == 0 || func_5(Local_624.f_3)) || Local_624.f_54 < 10))
	{
		Var0 = { Local_624.f_67[iLocal_320 /*2*/] };
		if (func_42(Var0.f_0))
		{
			if (!unk_0xE9F78D191AD5EDBA(Var0.f_1))
			{
				if (func_40(Local_624.f_3, iLocal_320, &Var2, &uVar5))
				{
					Local_624.f_55[iLocal_320] = func_36(iLocal_320);
					if (unk_0xEAE0D21A50E6C7F4(Local_2591[Local_624.f_55[iLocal_320] /*12*/].f_2, iLocal_320))
					{
						if (func_33(&(Local_624.f_67[iLocal_320 /*2*/].f_1), Var0.f_0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0xBA2CB24C70C8E726(unk_0xA5FBBC2F619A4DE2(Local_624.f_67[iLocal_320 /*2*/].f_1), 1, 1);
							unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), 1);
							unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), 1);
							unk_0x67E3D6EA8D96FD85(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), 0);
							func_32(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), 1);
							if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0xF1D385D359D58F72("MPBitset", 3))
							{
								if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), "MPBitset");
								}
								unk_0x5D96D8530B3D0904(&iVar6, 10);
								unk_0x5D96D8530B3D0904(&iVar6, 11);
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_320 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_624.f_55[iLocal_320] = -1;
							Local_624.f_54++;
						}
					}
				}
			}
		}
		iLocal_320++;
		if (iLocal_320 >= 10)
		{
			iLocal_320 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&uVar0, 13);
		}
		else
		{
			unk_0x0674E58A79778E99(&uVar0, 13);
		}
		unk_0xB7E567188872123E(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
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
		unk_0x28F5E4DA506AC0CA(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 1);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam10);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam8)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, iParam9);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam12)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_34(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_34(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_35(unk_0xD803B885F5E47A62(), Param0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam5 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405072.f_2912[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { Param0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = uParam3;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam4;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam5;
	}
}

int func_35(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x54EABC0DD106045B() - 1))
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar8 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (func_12(iVar8, 1, 1))
				{
					fVar3 = func_37(func_38(iVar8), Var4);
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

float func_37(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return unk_0x2A488C176D52CCA5(Param0, Param3);
}

Vector3 func_38(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_39(int iParam0, var uParam1, var uParam2)
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

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)
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
	else if (func_41(iParam0))
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

int func_41(int iParam0)
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

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_43()
{
	return (func_5(Local_624.f_3) || func_41(Local_624.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_112(unk_0xD803B885F5E47A62(), 0) || func_109(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_108(unk_0xD803B885F5E47A62()) || func_106(unk_0xD803B885F5E47A62()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (func_47(&(Global_1574650.f_18)))
	{
		if (!func_1(&(Global_1574650.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1574650.f_18));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 0);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)
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
			unk_0x25C34E9F657F1C79(0, iParam1);
			break;
		
		default:
			uVar1 = func_49(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(uVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)
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

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_49(iParam1);
	uVar1 = unk_0x0A4C9A3D51EAE31F(uVar0);
	return unk_0xEAE0D21A50E6C7F4(uVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 2) && !func_8(unk_0xD803B885F5E47A62())) && !func_7(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xEA6BC48857E0AC4C(sParam1))
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
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_105(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_103(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_103(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_103(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
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
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56()
{
	bool bVar0;
	
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_57()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_61(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_58(&(Global_2439138.f_3047.f_1));
}

void func_58(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(0);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x31A33F7BCB08CB80(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (unk_0x757EF87A33649210() && !func_60(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_59(0);
}

void func_59(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_60(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_61(var uParam0)
{
	func_62(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_62(var uParam0)
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

int func_63(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	return Global_2450632.f_17;
}

void func_65(var uParam0)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_72 = func_66();
	}
}

int func_66()
{
	return 21;
}

int func_67(int iParam0)
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

void func_68(var uParam0, int iParam1)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_102() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_100(iParam0) && !bParam4)
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
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_100(unk_0xD803B885F5E47A62()) || (func_99() && func_98())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_97();
		if (unk_0xC844350D5D58C99A(uVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_12(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_95(iParam1, iParam0, 0);
							}
							else
							{
								return func_82(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_95(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_95(iParam1, iParam0, 0);
		}
		else
		{
			return func_82(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_81() || (func_80() && func_78())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_72(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4456448.f_194990, 1))
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
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
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
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
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
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
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74(iParam1, iParam0, 4);
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

bool func_78()
{
	if (func_79())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_79()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_80()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()
{
	if (func_79() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_91())
			{
				iVar3 = func_87(iParam0);
				if (!iVar3 == -1)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_76(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_83(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_87(iParam0);
	if (!iVar4 == -1)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_83(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_86(iParam0);
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

var func_86(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)
{
	if (!iParam0 == func_102())
	{
		if (func_89(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_88(iParam0)];
		}
	}
	return -1;
}

int func_88(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_102();
}

bool func_89(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_90(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_102();
}

int func_90(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_102())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_91()
{
	if (((func_94() || func_93()) || func_64()) || func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2450632.f_19;
}

var func_93()
{
	return Global_2450632.f_16;
}

var func_94()
{
	return Global_2450632.f_15;
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969031.f_14[iParam0];
	if (func_91())
	{
		iVar2 = func_87(iParam1);
		if (!iVar2 == -1)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_102())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_96(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_76(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_83(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
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

var func_97()
{
	return Global_2359302.f_2;
}

bool func_98()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_99()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

int func_100(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_102()
{
	return -1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_105(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_102();
	uParam1->f_18 = func_102();
	uParam1->f_19 = func_102();
	uParam1->f_20 = func_102();
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

bool func_106(int iParam0)
{
	return func_107(iParam0, 20);
}

bool func_107(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_107(iParam0, 9);
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_110(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_110(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0)
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
	return func_111(iParam0, 0);
	return 0;
}

int func_111(int iParam0, int iParam1)
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

int func_112(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	Local_624.f_0 = iParam0;
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_624.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_624.f_39));
	func_119();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_624.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_115();
	}
	return 1;
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_624.f_3))
		{
			Local_624.f_67[iVar0 /*2*/] = func_118();
		}
		else
		{
			Local_624.f_67[iVar0 /*2*/] = func_116();
		}
		iVar0++;
	}
}

int func_116()
{
	int iVar0;
	
	switch (Local_624.f_3)
	{
		case 12:
			return func_117();
			break;
	}
	iVar0 = unk_0x09AC81E49EA267F7(0, 2);
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

int func_117()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 2);
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

int func_118()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 2);
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

void func_119()
{
	int iVar0;
	
	iVar0 = func_123();
	Local_624.f_3 = iVar0;
	func_120(func_122(133, iVar0, 0, 0));
}

void func_120(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1982372647;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	iVar3 = func_121(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 3, iVar3);
	}
}

var func_121(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
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
		case 150:
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

int func_123()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_11348;
	iVar0[1] = Global_262145.f_11021;
	iVar0[2] = Global_262145.f_11352;
	iVar0[3] = Global_262145.f_11350;
	iVar0[4] = Global_262145.f_11351;
	iVar0[5] = Global_262145.f_11353;
	iVar0[6] = Global_262145.f_11022;
	iVar0[7] = Global_262145.f_11023;
	iVar0[8] = Global_262145.f_11349;
	iVar0[9] = Global_262145.f_11029;
	iVar0[10] = Global_262145.f_11024;
	iVar0[11] = Global_262145.f_11026;
	iVar0[12] = Global_262145.f_11027;
	iVar0[13] = Global_262145.f_11025;
	iVar0[14] = Global_262145.f_11028;
	iVar0[15] = Global_262145.f_11031;
	iVar0[16] = Global_262145.f_11032;
	iVar0[17] = Global_262145.f_11033;
	iVar0[18] = Global_262145.f_11034;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_126(iVar21) || func_124(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x79833B02DBD2A244(0f, fVar20);
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
	return func_123();
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_125(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2506618.f_136[iVar0 /*2*/] == iVar1 && Global_2506618.f_136[iVar0 /*2*/].f_1 == func_122(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
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
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10250;
		
		case 1:
			return Global_262145.f_11035;
		
		case 6:
			return Global_262145.f_11036;
		
		case 7:
			return Global_262145.f_11037;
		
		case 8:
			return Global_262145.f_10251;
		
		case 3:
			return Global_262145.f_10252;
		
		case 4:
			return Global_262145.f_10253;
		
		case 2:
			return Global_262145.f_10254;
		
		case 5:
			return Global_262145.f_10255;
		
		case 9:
			return Global_262145.f_11043;
		
		case 10:
			return Global_262145.f_11038;
		
		case 11:
			return Global_262145.f_11040;
		
		case 12:
			return Global_262145.f_11041;
		
		case 15:
			return Global_262145.f_11045;
		
		case 16:
			return Global_262145.f_11046;
		
		case 17:
			return Global_262145.f_11047;
		
		case 18:
			return Global_262145.f_11048;
		
		case 13:
			return Global_262145.f_11039;
		
		case 14:
			return Global_262145.f_11042;
		
		default:
	}
	return 1;
}

void func_127()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_624.f_55[iVar0] == unk_0x57270EE11514DC67())
			{
				if (func_128(iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_2, iVar0))
					{
						unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_2, iVar0))
				{
					unk_0x0674E58A79778E99(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_2, iVar0))
			{
				unk_0x0674E58A79778E99(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_128(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_39(iParam0, &Var0, &uVar3))
	{
		if (func_129(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xEA19D5D9230DBB67(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (unk_0xA4F4A1E4DDB4728B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_134(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_130(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_130(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0EB28750412C3A5A(func_132(unk_0xD803B885F5E47A62()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8E28E832BEAC3DCE(Param0, fParam3))
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
			if (!func_14(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_131(iVar1) || !bParam10) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x0EB28750412C3A5A(func_132(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xAA451564CBFD3413(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam8 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x0EB28750412C3A5A(func_132(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xAA451564CBFD3413(iVar1, Param0, fParam3))
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

int func_131(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_64() && Global_1590535[iVar0 /*876*/].f_847) && !func_133(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_38(iParam0);
}

int func_133(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam9) && bParam6) && func_135(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_38(iVar1), Param0, 1) < fParam3)
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

int func_135(int iParam0)
{
	if (func_138(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_137(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_136(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_102())
	{
		if (iVar0 == func_88(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_137(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_138(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_137(iParam0) };
		Global_2513231 = { func_137(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_139()
{
	float fVar0;
	float fVar1;
	
	func_688();
	func_687();
	if (func_685())
	{
		func_573();
	}
	if (!func_7(unk_0xD803B885F5E47A62()))
	{
		if (func_548(0, 1, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 6))
			{
				unk_0x0674E58A79778E99(&iLocal_315, 6);
			}
			switch (Local_2591[unk_0x57270EE11514DC67() /*12*/].f_3)
			{
				case 0:
					if (Local_624.f_37 < 2)
					{
						if (Local_624.f_37 > 0)
						{
							if (Local_624.f_3 != -1)
							{
								func_547(1);
								func_546(1);
							}
						}
					}
					else
					{
						func_546(2);
					}
					break;
				
				case 1:
					func_540(9);
					if (Local_2976.f_8 == 0)
					{
						Local_2976.f_8 = unk_0xDD0E7998AE8AD485();
					}
					if (Local_624.f_37 >= 2)
					{
						func_546(2);
						Local_2976.f_9 = unk_0xDD0E7998AE8AD485();
					}
					if (func_43())
					{
						func_540(0);
					}
					func_538((func_29() - func_539(&(Local_624.f_43), 0, 0)));
					func_535(func_537((func_29() - func_539(&(Local_624.f_43), 0, 0)), 0), func_536(Local_624.f_3));
					func_475(0, func_534());
					func_448();
					func_425();
					if (func_424())
					{
						func_423();
					}
					break;
				
				case 2:
					if (Local_624.f_37 > 2)
					{
						func_547(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_422())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_404(133, fVar0, fVar1, 0, 0, 0, 0);
						func_403(Local_624.f_3, 1);
						func_402(23, 1);
						if (Local_2976.f_8 == 0)
						{
							Local_2976.f_8 = unk_0xDD0E7998AE8AD485();
						}
						if (Local_2976.f_9 == 0)
						{
							Local_2976.f_9 = unk_0xDD0E7998AE8AD485();
						}
						func_398();
						unk_0x921B659AAEB55BCA(1);
						if (func_422())
						{
							unk_0x51B096AAC60548C1(0f);
							unk_0x34D79252800B23FF(0);
						}
						if (Local_624.f_3 == 14)
						{
							func_397(&Local_335);
						}
						func_396();
						if (!func_7(unk_0xD803B885F5E47A62()))
						{
							func_52(63, "AMCH_STARTED", func_395(Local_624.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_392("AMCH_WARN", func_394(Local_624.f_3), func_393(Local_624.f_3)))
							{
								unk_0xA37A90C62806D848(1);
							}
						}
						if (func_43())
						{
							func_374(678f, 794f, 206f, 8f, 0);
							func_374(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_374(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_546(3);
					}
					break;
				
				case 3:
					if (Local_624.f_37 > 3)
					{
						iLocal_317 = 0;
						func_546(4);
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 1))
						{
							func_332();
							func_329();
							func_328();
						}
						if (func_327(0) && !func_20(0))
						{
							func_326();
						}
					}
					if (func_422())
					{
						unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
					}
					func_325();
					func_302();
					func_573();
					func_475(0, 1);
					func_448();
					func_425();
					func_540(2);
					func_540(5);
					func_540(7);
					break;
				
				case 4:
					if (func_291(&uLocal_327, !unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0)) || unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
					{
						if (func_5(Local_624.f_3))
						{
							if (Local_624.f_37 == 5)
							{
								func_546(5);
							}
						}
						else
						{
							func_546(6);
						}
					}
					func_278();
					func_171();
					func_302();
					func_573();
					func_475(1, 1);
					func_396();
					break;
				
				case 5:
					if (Local_624.f_37 > 5)
					{
						func_546(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_166();
		}
	}
	else
	{
		func_166();
	}
	func_146();
	func_141();
	func_140();
}

void func_140()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_43())
	{
		Var0 = { Local_624.f_67[iLocal_334 /*2*/] };
		if (unk_0xE9F78D191AD5EDBA(Var0.f_1))
		{
			iVar2 = unk_0xB177666FAB6F4417(Var0.f_1);
			if (unk_0xAFE0D3608EDA7039(iVar2))
			{
				if (!unk_0xDF1306B443CD3D15(iVar2, 0))
				{
					unk_0x046C362CF15F1935(&iVar2);
				}
			}
		}
		iLocal_334++;
		if (iLocal_334 >= 10)
		{
			iLocal_334 = 0;
			iLocal_623 = iLocal_622;
			iLocal_622 = 0;
		}
	}
}

void func_141()
{
	if (Local_624.f_37 == 5)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_624.f_67[iLocal_334 /*2*/].f_1))
		{
			if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_334 /*2*/].f_1), 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_610, iLocal_334))
				{
					unk_0x5D96D8530B3D0904(&iLocal_610, iLocal_334);
					iLocal_611[iLocal_334] = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(iLocal_611[iLocal_334], "Explosion_Countdown", unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_334 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x6F6BA3FE885E6C91(iLocal_611[iLocal_334], "Time", 30f);
				}
				if ((30000 - func_539(&(Local_624.f_45), 0, 0)) >= 0)
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_334 /*2*/].f_1), 0))
					{
						func_540(1);
						iLocal_622 = 1;
					}
				}
				else if (unk_0x526BC32A660C89E6(Local_624.f_67[iLocal_334 /*2*/].f_1))
				{
					unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_334 /*2*/].f_1));
					unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_624.f_67[iLocal_334 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_610, iLocal_334) && !unk_0x8AA6DC470ABA63A2(iLocal_611[iLocal_334]))
			{
				unk_0x55D0A2DB35045A35(iLocal_611[iLocal_334]);
			}
		}
		if (iLocal_623)
		{
			if (!func_100(unk_0xD803B885F5E47A62()))
			{
				func_143(func_537((30000 - func_539(&(Local_624.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_142();
			}
		}
	}
}

void func_142()
{
	Global_1378678.f_1130 = 1;
}

void func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_145(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_144(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_144(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_145(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

void func_146()
{
	if (((func_12(unk_0xD803B885F5E47A62(), 1, 1) && !func_7(unk_0xD803B885F5E47A62())) && !func_162(unk_0xD803B885F5E47A62())) && func_548(0, 1, 1))
	{
		if (Local_2591[unk_0x57270EE11514DC67() /*12*/].f_3 == 1)
		{
			func_159(func_161(Local_624.f_3), func_394(Local_624.f_3), 0, 0);
		}
		else if (Local_2591[unk_0x57270EE11514DC67() /*12*/].f_3 == 3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 10))
			{
				func_147(func_393(Local_624.f_3), 0);
			}
			else
			{
				func_147("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_396();
		}
	}
	else
	{
		func_396();
	}
}

void func_147(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_157(sParam0))
	{
		return;
	}
	func_151();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_150();
	func_149(bParam1);
	func_148();
}

void func_148()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_150()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

void func_151()
{
	func_153();
	func_152(0);
}

void func_152(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_153()
{
	if (!func_156())
	{
	}
	if (func_155())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_154();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_154()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			unk_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_155()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_156()
{
	if (!func_155())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_154();
	return unk_0xB165082A56EE6E7F();
}

bool func_157(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_158(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_158(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

int func_159(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_160(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_151();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_150();
	func_149(bParam2);
	func_148();
	return 1;
}

bool func_160(char* sParam0, char* sParam1)
{
	if (!func_155())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

char* func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) || unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					iVar1 = unk_0x134B62B726CEC8E6(iVar0);
					if (unk_0x7D8B2A8F9EA82DB7(iVar1) && unk_0xAD09C9A4B56FA133(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 0) && !unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_heavysniper"), 0)) && !unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_162(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 21)) || func_163(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1574650.f_13)))
		{
			if (!func_1(&(Global_1574650.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1574650.f_13));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 9);
}

bool func_163(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

bool func_164()
{
	return Global_1312418.f_1;
}

bool func_165()
{
	return Global_1312418;
}

void func_166()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 6))
	{
		unk_0xC6436D1B1063CD1D();
		func_475(1, 1);
		unk_0x55D0A2DB35045A35(iLocal_323);
		unk_0x0674E58A79778E99(&iLocal_315, 4);
		func_170();
		func_168();
		unk_0xF5637CC664BEAAD0(0f, 0, 21);
		unk_0x5D96D8530B3D0904(&iLocal_315, 6);
		func_167();
	}
}

void func_167()
{
	Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_7 = 0;
}

void func_168()
{
	if (Global_2413899.f_6 == unk_0x0D0A574C76D769AC())
	{
		func_169();
	}
}

void func_169()
{
	struct<28> Var0;
	
	if (unk_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_170()
{
	struct<6> Var0;
	
	if (Global_2405072.f_487.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1, 0))
	{
		if (func_7(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1), 0);
			return;
		}
		if (func_162(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1), 0);
			return;
		}
		func_239(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_2976.f_6 = (Local_2976.f_6 + iVar0);
			if (!Global_262145.f_11500)
			{
				func_238(10, Local_2976.f_6);
			}
			Global_2462880 = iVar0;
			if (func_237())
			{
				func_225(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x9AC21D04D5646532(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_2976.f_7 = (Local_2976.f_7 + iVar1);
			func_224();
			func_172(0, unk_0x16F2683693E537C9(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1), 0);
	}
}

int func_172(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_173(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_173(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_183(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				uVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_179(unk_0x64430C979F516F7A(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_174(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_174(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_177(iParam0, 1) };
	if (iParam0 == func_176(unk_0x16F2683693E537C9()))
	{
		func_175(1);
	}
	func_179(Var0, iParam1, 0, sParam2, uParam3);
}

void func_175(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_176(int iParam0)
{
	return iParam0;
}

Vector3 func_177(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		Var3 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_178(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		Var0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar6 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8A5E176FF719A014(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_178(int iParam0)
{
	return iParam0;
}

void func_179(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { Param0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_182(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_181();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_180();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), uParam6);
		}
	}
}

int func_180()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_181()
{
	var uVar0;
	
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_182(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), Param0, 1);
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

var func_183(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_184(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_223(unk_0xD803B885F5E47A62()) || func_222(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_220() || func_217(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_216(uParam2))
	{
	}
	if (func_215())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_213(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_212(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_210(0, &iVar1);
					break;
				
				case 3:
					func_210(1, &iVar1);
					break;
				
				case 1:
					func_208(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
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
			func_205(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_194((func_204(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_205(1165, iVar1, -1);
				}
				func_189(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_185((func_187(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_185((func_187(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_185(int iParam0)
{
	if (func_215())
	{
		Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_5 = iParam0;
		func_186(joaat("mpply_globalxp"), iParam0);
	}
}

void func_186(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, uParam1, 1);
	}
}

int func_187(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_188(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_188(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_189(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_137(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_192(func_193(&Var0));
			if (iVar13 == 0)
			{
				func_191(&Global_1387915, iParam0);
				func_190(joaat("mpply_crew_local_xp_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_191(&Global_1387916, iParam0);
				func_190(joaat("mpply_crew_local_xp_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_191(&Global_1387917, iParam0);
				func_190(joaat("mpply_crew_local_xp_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_191(&Global_1387918, iParam0);
				func_190(joaat("mpply_crew_local_xp_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_191(&Global_1387919, iParam0);
				func_190(joaat("mpply_crew_local_xp_4"), Global_1387919);
			}
		}
	}
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1387910 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1387912 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1387912 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1387913 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1387914 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1387915 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1387916 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1387917 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1387918 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1387919 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1387920 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1387921 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1387922 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1387923 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1387924 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1387925 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1387926 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_192(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_193(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (func_215())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_203(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_203(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_202(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_200(iParam0, 1);
		}
		func_199(639, iParam0, -1, 1);
		func_198(640, func_200(iParam0, 1), -1, 1, 0);
		Global_1388060[func_203(-1)] = iParam0;
		func_195(-1109644434, 7, 0);
	}
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_197(iParam1, iParam2))
	{
		iVar0 = func_196();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_196()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_197(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_203(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_203(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_203(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_203(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_203(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_203(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_203(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_203(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_203(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_203(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_203(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_203(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_203(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_203(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_203(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_203(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_203(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_203(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_203(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_203(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_203(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_203(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_203(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_203(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_203(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_203(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_203(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_203(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_203(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_203(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_203(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_203(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_203(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_203(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_203(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_203(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_203(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_203(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_203(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_203(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_203(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_203(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_203(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_203(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_203(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_203(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_203(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_203(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_203(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_203(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_203(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_201(iParam0, 0);
}

int func_201(int iParam0, int iParam1)
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
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
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

int func_202(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_204(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_203(-1)];
			}
			else if (func_202(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_203(-1)];
	}
	return 0;
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, func_203(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_206(iParam0))
	{
		func_198(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_199(iParam0, iVar0, iParam2, 1);
	}
}

int func_206(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
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
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0 /*3*/][func_203(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != -1)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_76(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_138(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_209(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_209(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_209(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_210(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_138(unk_0xD803B885F5E47A62(), iVar4))
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
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_211(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_138(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_209(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_209(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_211(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_212(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_209(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_213(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_204(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_204(unk_0xD803B885F5E47A62());
		}
	}
	if (func_214(8000, 0, 0) > 0)
	{
		if (func_214(8000, 0, 0) < (iParam0 + func_204(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_214(8000, 0, 0) - func_204(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_214(int iParam0, bool bParam1, int iParam2)
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
	return Global_291133[iParam0];
}

int func_215()
{
	return 1;
}

int func_216(var uParam0)
{
	if (unk_0x2EBF5002C6B6A06C(uParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(uParam0, "") || unk_0x7F8A39872A07D2CE(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	return func_218(func_219(iParam0));
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_112(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_220()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_64();
	}
	return func_221(Global_4456448.f_194990);
}

int func_221(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_222(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_223(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_224()
{
	Global_2462221 = 1;
}

void func_225(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_237())
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
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_226(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_226(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_226(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_226(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_237())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_16()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_233(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_232(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_227(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_227(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_228(iParam0);
	}
}

void func_228(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_237())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_231(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_229(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_229(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_230(&(uParam0->f_14));
	func_230(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_230(var uParam0)
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

int func_231(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_232(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_233(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_237())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_234(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_234(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 285918879;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_236(Var0.f_1);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_235();
		unk_0xFB061A86A7AC749F(1, &Var0, 36, iVar36);
	}
}

void func_235()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_236(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_237()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_238(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_239(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x57270EE11514DC67(), 1))
	{
		iVar1 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_624.f_1 - iLocal_313)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11435)
		{
			iVar1 = Global_262145.f_11435;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_277() * iVar1);
		*uParam1 = (func_276() * iVar1);
		fVar2 = func_275();
		if (fVar2 > 0f && !unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
		{
			iVar3 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_274())
			{
				iVar3 = func_274();
			}
			iVar4 = Local_624.f_51;
			if (iVar4 > func_273())
			{
				iVar4 = func_273();
			}
			*uParam0 = (*uParam0 + unk_0xF2DB717A73826179((IntToFloat(func_266(func_272(), func_271(), iVar3, fVar2, func_270(), func_269(), func_268(), iVar4)) * Global_262145.f_11448)));
			*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_266(func_265(), func_264(), iVar3, fVar2, func_270(), func_269(), func_268(), iVar4)) * Global_262145.f_11449)));
		}
		else
		{
			func_262(1);
		}
	}
	else
	{
		func_262(0);
	}
	func_240(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_240(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_261())
		{
			if (func_260(0))
			{
				if (!func_256(0))
				{
					if (unk_0x40B8C182D63932FC(func_255()))
					{
						if (func_254() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_254());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_252(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_245("GB_BCUT_TICK1", func_255(), iVar0, 0, 0, 1);
						}
						func_244(20);
						func_241(func_255(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0.f_0 = -1294585740;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_243(iParam0);
		func_242(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_236(iParam0));
	}
}

void func_242(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_243(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_533;
}

void func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_245(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_69(iParam1, -2, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_250(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_246(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_246(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_249() || !unk_0xA14BB9332558B949()) || !func_14(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_247(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_248(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_249()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

var func_250(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_251(&cVar0);
}

var func_251(char[4] cParam0)
{
	return cParam0;
}

void func_252(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_253(1);
	}
	else
	{
		iVar1 = func_253(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_253(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_254()
{
	return Global_262145.f_12389;
}

int func_255()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_256(bool bParam0)
{
	return func_257(unk_0xD803B885F5E47A62(), bParam0);
}

int func_257(int iParam0, bool bParam1)
{
	return func_258(iParam0, bParam1, 1);
}

int func_258(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_259(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_102() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 != func_102())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_102())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_260(bool bParam0)
{
	return func_89(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_261()
{
	return func_90(unk_0xD803B885F5E47A62());
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		if (func_263(1))
		{
			unk_0x5D96D8530B3D0904(&Global_1574675, 1);
		}
	}
	else if (func_263(2))
	{
		unk_0x5D96D8530B3D0904(&Global_1574675, 2);
	}
}

int func_263(int iParam0)
{
	var uVar0;
	
	uVar0 = func_207(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xEAE0D21A50E6C7F4(uVar0, 0) && unk_0xEAE0D21A50E6C7F4(iVar0, 1)) && unk_0xEAE0D21A50E6C7F4(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 3) && unk_0xEAE0D21A50E6C7F4(iVar0, 4)) && unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 6) && unk_0xEAE0D21A50E6C7F4(iVar0, 7)) && unk_0xEAE0D21A50E6C7F4(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 9) && unk_0xEAE0D21A50E6C7F4(iVar0, 10)) && unk_0xEAE0D21A50E6C7F4(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_264()
{
	return Global_262145.f_10935;
}

int func_265()
{
	return Global_262145.f_10933;
}

int func_266(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_267(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_267(int iParam0, int iParam1, int iParam2)
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

float func_268()
{
	return Global_262145.f_10938;
}

float func_269()
{
	return Global_262145.f_10937;
}

float func_270()
{
	return Global_262145.f_10936;
}

int func_271()
{
	return Global_262145.f_10934;
}

int func_272()
{
	return Global_262145.f_10932;
}

int func_273()
{
	return Global_262145.f_11340;
}

int func_274()
{
	return Global_262145.f_11339;
}

var func_275()
{
	if (func_20(0))
	{
		return Global_262145.f_10959;
	}
	if (func_20(1))
	{
		return Global_262145.f_10960;
	}
	if (func_20(2))
	{
		return Global_262145.f_10961;
	}
	return Global_262145.f_10962;
}

int func_276()
{
	return Global_262145.f_10931;
}

int func_277()
{
	return Global_262145.f_10930;
}

void func_278()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1, 1) && (func_290() || unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0)))
	{
		if (func_67(func_289()))
		{
			func_288();
		}
		if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
			{
				if (func_327(0))
				{
					iVar2 = Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4;
					func_284(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_282(64, func_283(Local_624.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_394(Local_624.f_3), 1, 2, 0);
						}
						else if (func_281())
						{
							func_282(69, func_283(Local_624.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_394(Local_624.f_3), 1, 2, 0);
						}
						else
						{
							func_282(64, func_283(Local_624.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_394(Local_624.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_282(67, func_283(Local_624.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_394(Local_624.f_3), 1, 2, 0);
						}
						else if (func_281())
						{
							func_282(75, func_283(Local_624.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_394(Local_624.f_3), 1, 2, 0);
						}
						else
						{
							func_282(67, func_283(Local_624.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_394(Local_624.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_282(67, func_283(Local_624.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_394(Local_624.f_3), 1, 2, 0);
						}
						else if (func_281())
						{
							func_282(75, func_283(Local_624.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_394(Local_624.f_3), 1, 2, 0);
						}
						else
						{
							func_282(67, func_283(Local_624.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_394(Local_624.f_3), 1, 2, 0);
						}
					}
					else
					{
						uVar3 = unk_0xF4FB3A22FC4991C8(Local_624.f_4[0]);
						if (unk_0x81A93C8315C28F58(uVar3))
						{
							iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
							if (Local_2591[Local_624.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2591[Local_624.f_4[0] /*12*/].f_4;
							func_284(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_280(76, func_102(), func_283(Local_624.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_394(Local_624.f_3), -1, fVar1, 1, 2, unk_0x6E524813889AECF8(iVar4));
							}
							else if (func_281())
							{
								func_280(77, func_102(), func_283(Local_624.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_394(Local_624.f_3), iVar0, -1082130432, 1, 2, unk_0x6E524813889AECF8(iVar4));
							}
							else
							{
								func_280(76, func_102(), func_283(Local_624.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_394(Local_624.f_3), iVar0, -1082130432, 1, 2, unk_0x6E524813889AECF8(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1), 1);
			func_279(133);
		}
	}
}

void func_279(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_280(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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
	func_105(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_281()
{
	return 0;
}

int func_282(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_105(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_103(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_283(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x8ED6EC1BDC7FE067())
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
			if (unk_0x8ED6EC1BDC7FE067())
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

int func_284(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_285(Local_624.f_3, iParam2) / 10f);
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

float func_285(int iParam0, int iParam1)
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
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_287(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_286(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_286(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_287(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_288()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_103(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_289()
{
	return Global_2439138.f_2723[0 /*80*/].f_1;
}

bool func_290()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 25);
}

int func_291(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_301()) && !(func_112(unk_0xD803B885F5E47A62(), 0) && (func_108(unk_0xD803B885F5E47A62()) || func_300(unk_0xD803B885F5E47A62())))) && !func_298(unk_0xD803B885F5E47A62()))
	{
		func_297();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 25);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_2537071.f_4588), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_296(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_47(&(uParam0->f_5)))
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
				func_293();
				func_296(uParam0, 2);
			}
			break;
		
		case 2:
			func_293();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_292("AMEV_LBD_HELP"))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_296(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 1);
				func_296(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 1);
			return 1;
	}
	return 0;
}

bool func_292(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_293()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 0))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_12(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !unk_0x757EF87A33649210())
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4588), 1);
			func_295("AMEV_LBD_HELP", -1);
			func_294(1);
			unk_0x0674E58A79778E99(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_294(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(3, 21, 200, 0, 0);
	if (iParam0 && !func_301())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_295(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 0, iParam1);
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_297()
{
	Global_2462222 = 1;
}

int func_298(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_299(int iParam0)
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
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
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
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

bool func_300(int iParam0)
{
	return func_107(iParam0, 19);
}

bool func_301()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

void func_302()
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
	
	if (Local_624.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_324() && !func_100(unk_0xD803B885F5E47A62()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_102();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_624.f_4[iVar16] > -1)
			{
				uVar30 = unk_0xF4FB3A22FC4991C8(Local_624.f_4[iVar16]);
				if (unk_0x81A93C8315C28F58(uVar30))
				{
					iVar4 = unk_0x4B2BFE4A3BC248ED(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2591[Local_624.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_284(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2591[Local_624.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_260(1))
								{
									if (func_89(iVar4, 1))
									{
										uVar26[iVar16] = func_69(iVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x57270EE11514DC67();
		if (func_100(unk_0xD803B885F5E47A62()))
		{
			uVar31 = func_322();
			iVar32 = unk_0x83FACCC48B68F9D1(uVar31);
			if (unk_0x40B8C182D63932FC(iVar32))
			{
				iVar33 = unk_0x7B9C1F53FE442D06(iVar32);
				if (unk_0x81A93C8315C28F58(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_284(&iVar13, &fVar18, iLocal_317, 1);
		func_284(&iVar14, &fVar19, Local_2591[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_539(&(Local_624.f_39), 0, 0);
		iVar15 = func_537(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_321(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_324() || Local_624.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_624.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_317(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_283(Local_624.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_318(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_281())
		{
			func_316(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_318(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_307(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_283(Local_624.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_318(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_303();
	}
}

void func_303()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_306();
	if (fVar0 >= 0f)
	{
		if (Local_624.f_37 == 3)
		{
			if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
			{
				if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0xDF1306B443CD3D15(iVar1, 0))
					{
						func_305(iVar1, &fLocal_321);
						fVar2 = (fVar0 + fLocal_321);
						unk_0xF5637CC664BEAAD0(fVar2, 1, 21);
						func_304(fVar0);
						return;
					}
				}
			}
		}
		if (func_292("AMCH_FLYLOW"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 4))
		{
			unk_0x55D0A2DB35045A35(iLocal_323);
			unk_0x0674E58A79778E99(&iLocal_315, 4);
		}
		unk_0xF5637CC664BEAAD0(0f, 0, 21);
	}
}

void func_304(float fParam0)
{
	float fVar0;
	
	if (unk_0xA30FD594B4E4DF94(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_540(6);
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 4))
			{
				unk_0x4D7F4CC43D4D0DE3(iLocal_323, "Altitude_Warning", "EXILE_1", 1);
				unk_0x5D96D8530B3D0904(&iLocal_315, 4);
			}
		}
		else
		{
			if (func_292("AMCH_FLYLOW"))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 4))
			{
				unk_0x55D0A2DB35045A35(iLocal_323);
				unk_0x0674E58A79778E99(&iLocal_315, 4);
			}
		}
	}
}

float func_305(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	unk_0xE82754C349C7B581(Var1, uParam1, 1, 0);
	unk_0xE82754C349C7B581(Var1, &uVar4, 0, 0);
	if (unk_0x54488B39DA63D340())
	{
		func_540(3);
		unk_0x5D96D8530B3D0904(&iLocal_315, 10);
		func_27(&uLocal_311, 0, 0);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 10))
	{
		if (func_1(&uLocal_311, 2000, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_315, 10);
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

float func_306()
{
	switch (Local_624.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_313(0) == 0)
	{
		return;
	}
	func_312();
	iVar1 = 0;
	if (((Global_2461747[0] != iParam0 || Global_2461747[1] != iParam1) || Global_2461747[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2461747[0] = iParam0;
	Global_2461747[1] = iParam1;
	Global_2461747[2] = iParam2;
	Global_2461747[3] = 0;
	Global_2461747[4] = 0;
	if (Global_2461747[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[0]);
			Global_2461753[0 /*16*/] = { func_311(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_308(iParam3, &(Global_2461753[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[1]);
			Global_2461753[1 /*16*/] = { func_311(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_308(iParam4, &(Global_2461753[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[2]);
			Global_2461753[2 /*16*/] = { func_311(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_308(iParam5, &(Global_2461753[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_308(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xD803B885F5E47A62() != func_102())
			{
				if (func_162(unk_0xD803B885F5E47A62()) == 0)
				{
					func_308(iParam7, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(unk_0xD803B885F5E47A62()) == 0)
			{
				func_308(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_162(unk_0xD803B885F5E47A62()) == 0)
			{
				func_308(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_216(sParam14))
	{
		sVar2 = sParam14;
	}
	func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_142();
}

void func_308(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_145(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_144(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_310())
		{
			Global_1378678.f_1130 = 1;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_309())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_309()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_310()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_311(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_312()
{
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	Global_2462225 = 1;
}

int func_313(bool bParam0)
{
	if (func_315())
	{
		return 0;
	}
	if (func_314())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xD803B885F5E47A62(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_314()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_315()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 12);
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_313(0) == 0)
	{
		return;
	}
	func_312();
	iVar1 = 0;
	if (((Global_2461747[0] != iParam0 || Global_2461747[1] != iParam1) || Global_2461747[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2461747[0] = iParam0;
	Global_2461747[1] = iParam1;
	Global_2461747[2] = iParam2;
	Global_2461747[3] = 0;
	Global_2461747[4] = 0;
	if (Global_2461747[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[0]);
			Global_2461753[0 /*16*/] = { func_311(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_143(iParam3, &(Global_2461753[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2461747[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[1]);
			Global_2461753[1 /*16*/] = { func_311(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_143(iParam4, &(Global_2461753[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2461747[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[2]);
			Global_2461753[2 /*16*/] = { func_311(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_143(iParam5, &(Global_2461753[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_143(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0xD803B885F5E47A62() != func_102())
			{
				if (func_162(unk_0xD803B885F5E47A62()) == 0)
				{
					func_143(iParam7, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(unk_0xD803B885F5E47A62()) == 0)
			{
				func_143(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_162(unk_0xD803B885F5E47A62()) == 0)
			{
				func_143(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_216(sParam13))
	{
		sVar2 = sParam13;
	}
	func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_142();
}

void func_317(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_313(0) == 0)
	{
		return;
	}
	func_312();
	iVar1 = 0;
	if (((Global_2461747[0] != iParam0 || Global_2461747[1] != iParam1) || Global_2461747[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2461747[0] = iParam0;
	Global_2461747[1] = iParam1;
	Global_2461747[2] = iParam2;
	Global_2461747[3] = 0;
	Global_2461747[4] = 0;
	if (Global_2461747[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[0]);
			Global_2461753[0 /*16*/] = { func_311(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_308(-1, &(Global_2461753[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[1]);
			Global_2461753[1 /*16*/] = { func_311(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_308(-1, &(Global_2461753[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_2461747[2]);
			Global_2461753[2 /*16*/] = { func_311(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_308(-1, &(Global_2461753[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_308(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xD803B885F5E47A62() != func_102())
			{
				if (func_162(unk_0xD803B885F5E47A62()) == 0)
				{
					func_308(-1, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(unk_0xD803B885F5E47A62()) == 0)
			{
				func_308(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_162(unk_0xD803B885F5E47A62()) == 0)
			{
				func_308(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_216(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_142();
}

char* func_318()
{
	return "HUD_COUNTDOWN";
	switch (func_320(unk_0xD803B885F5E47A62()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_319())
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

int func_319()
{
	if (func_320(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

int func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

void func_321(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 0))
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_2537071.f_4963)))
			{
				unk_0xA6C13961116F9033(&(Global_2537071.f_4963));
			}
			unk_0xBEF52C1D400C0A44(1);
			unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
			unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
			if (Global_2537071.f_4971 > -1)
			{
				unk_0x43A06902454A1172(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
			Global_2537071.f_4961 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 4))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 2))
				{
					if (unk_0x3133F8A3F91571F1())
					{
						if ((!unk_0x7F8A39872A07D2CE(unk_0xE4B65163E4129619(unk_0xFC21F7E0F4D92523()), "OFF") && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0xEA6BC48857E0AC4C(&(Global_2537071.f_4963)))
						{
							StringCopy(&(Global_2537071.f_4963), "", 32);
							unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
							unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
							unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
							unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
							unk_0xBEF52C1D400C0A44(1);
							unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 2);
						}
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 5))
				{
					unk_0xA6C13961116F9033("OFF");
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_30S");
				}
				unk_0x8BC9595FD2792B5D("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 1);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x0931E02856C8B6A4() != 0)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x3F02B7BDF1B316D6())
						{
							StringCopy(&(Global_2537071.f_4963), unk_0x04DF2A8CF5EBE3B0(), 32);
							unk_0xA6C13961116F9033("OFF");
						}
						unk_0xBEF52C1D400C0A44(1);
						unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 3))
				{
					Global_2537071.f_4971 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Global_2537071.f_4971, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 0))
			{
				Global_2537071.f_4961 = 0;
				Global_2537071.f_4971 = -1;
				unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
				unk_0xBEF52C1D400C0A44(0);
				unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
				unk_0x7352ACF3368DF65F("DisableFlightMusic", 1);
				unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
				unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 0);
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 2))
				{
					unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 2);
					unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 5);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_2537071.f_4961), 5);
					unk_0x0674E58A79778E99(&(Global_2537071.f_4961), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 0))
		{
			Global_2537071.f_4961 = 0;
			Global_2537071.f_4971 = -1;
			unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
			unk_0xBEF52C1D400C0A44(0);
			unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 1);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 0);
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 2);
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 5);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_2537071.f_4961), 2);
				unk_0x0674E58A79778E99(&(Global_2537071.f_4961), 5);
			}
		}
	}
}

var func_322()
{
	if (unk_0xC844350D5D58C99A(func_323()))
	{
		return func_323();
	}
	return func_97();
}

var func_323()
{
	return Global_2359302.f_3;
}

int func_324()
{
	switch (Local_624.f_3)
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

void func_325()
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
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		Local_712.f_534[iVar0 /*42*/] = { Var1 };
		Local_712.f_534[iVar0 /*42*/].f_1 = func_102();
		if (Local_624.f_4[iVar0] > -1)
		{
			uVar44 = unk_0xF4FB3A22FC4991C8(Local_624.f_4[iVar0]);
			if (unk_0x81A93C8315C28F58(uVar44))
			{
				iVar43 = unk_0x4B2BFE4A3BC248ED(iVar44);
				if (!func_14(iVar43, 0))
				{
					Local_712.f_534[iVar0 /*42*/] = Local_624.f_4[iVar0];
					Local_712.f_534[iVar0 /*42*/].f_1 = iVar43;
					Local_712.f_534[iVar0 /*42*/].f_9 = Local_2591[Local_624.f_4[iVar0] /*12*/].f_4;
					Local_712.f_534[iVar0 /*42*/].f_31 = -1;
					Local_712.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_326()
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_1734), 19);
}

int func_327(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_624.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2591[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_328()
{
}

void func_329()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_284(&iVar1, &fVar2, iLocal_317, 1);
	switch (Local_624.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_331(sVar0, fVar2 >= 70f);
			if (unk_0x562F77A7F33D2E46(sVar0))
			{
				fVar2 = func_330(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x58350770D73D313A(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xB3308DCE18AF3BF0();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_331(sVar0, bVar3);
			if (unk_0x562F77A7F33D2E46(sVar0))
			{
				fVar2 = unk_0xBBDA792448DB5A89(iVar1);
				fVar2 = func_330(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_330(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x58350770D73D313A(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_322 != iLocal_317)
			{
				if (iLocal_317 > 0)
				{
					unk_0x4D7F4CC43D4D0DE3(iLocal_324, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x6F6BA3FE885E6C91(iLocal_324, "Count", unk_0xBBDA792448DB5A89(iVar1));
				}
				else
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_322 = iLocal_317;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 3))
		{
			if (func_256(1))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x5D96D8530B3D0904(&iLocal_315, 3);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 3))
	{
		if (func_256(1))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x0674E58A79778E99(&iLocal_315, 3);
	}
}

float func_330(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_331(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x562F77A7F33D2E46(sParam0))
		{
			unk_0x8BC9595FD2792B5D(sParam0);
		}
	}
	else if (unk_0x562F77A7F33D2E46(sParam0))
	{
		unk_0x8910D3D58E0132B8(sParam0);
	}
}

void func_332()
{
	int iVar0;
	
	if ((!func_162(unk_0xD803B885F5E47A62()) && !func_14(unk_0xD803B885F5E47A62(), 0)) && func_12(unk_0xD803B885F5E47A62(), 1, 1))
	{
		iVar0 = func_358();
		if (iVar0 != Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_314) || func_357(iVar0, iLocal_314))
			{
				if (!func_356() || func_1(&uLocal_303, 1000, 0))
				{
					func_27(&uLocal_303, 0, 0);
					iLocal_314 = iVar0;
					Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4 = iVar0;
					func_335();
					if (iLocal_313 == 0)
					{
						iLocal_313 = unk_0x2B6E0A53779D29EA();
					}
					if (Local_2976.f_11 == 0)
					{
						Local_2976.f_11 = unk_0xDD0E7998AE8AD485();
					}
				}
			}
		}
		iLocal_317 = func_333();
	}
}

int func_333()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_624.f_3)
	{
		case 0:
			fVar1 = unk_0xA6AE1EDD970EC5A4();
			break;
		
		case 1:
			fVar1 = unk_0xD02EB81F7E02B833();
			break;
		
		case 2:
			fVar1 = unk_0xB3308DCE18AF3BF0();
			break;
		
		case 3:
			fVar1 = unk_0xD647A2FD364A774D();
			break;
		
		case 4:
			fVar1 = unk_0x35B242721E5EA3EF();
			break;
		
		case 5:
			fVar1 = unk_0x71B04631E0ECC1D6();
			break;
		
		case 8:
			iVar0 = unk_0x14E0ED7F6AF856E6();
			break;
		
		case 9:
			fVar1 = unk_0x1D76DAA96C3AD2EB();
			break;
		
		case 11:
			fVar1 = unk_0x829442C88EB5F313();
			break;
		
		case 12:
			fVar1 = unk_0x829442C88EB5F313();
			break;
		
		case 13:
			fVar1 = unk_0xCAB539898E23F828();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	iVar2 = unk_0x51D1D19912234EA0(iVar0);
	func_334(&iVar2);
	if (iVar2 == iLocal_316)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 1))
			{
				func_27(&uLocal_305, 0, 0);
				Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4.f_2 = func_539(&uLocal_305, 0, 0);
				unk_0x5D96D8530B3D0904(&iLocal_315, 1);
			}
			else if ((func_539(&uLocal_305, 0, 0) % 1000) == 0)
			{
				Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4.f_2 = func_539(&uLocal_305, 0, 0);
			}
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_315, 1);
	}
	if ((func_21(iLocal_316, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_307, 2000, 0))
	{
		iVar2 = iLocal_316;
		unk_0x5D96D8530B3D0904(&iLocal_315, 2);
	}
	else
	{
		iLocal_316 = iVar2;
		func_46(&uLocal_307);
		unk_0x0674E58A79778E99(&iLocal_315, 2);
	}
	return iVar2;
}

void func_334(int iParam0)
{
	switch (Local_624.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((((unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
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

void func_335()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1, 2))
	{
		unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_1), 2);
		func_336(1);
	}
}

void func_336(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
		{
			if (((!func_106(unk_0xD803B885F5E47A62()) && !func_7(unk_0xD803B885F5E47A62())) && !func_162(unk_0xD803B885F5E47A62())) && !func_355(unk_0xD803B885F5E47A62()))
			{
				if (func_165())
				{
					func_348(2, 0, 1);
					func_347();
				}
				if (func_346(0))
				{
					uVar0 = func_207(2480, -1, 0);
					unk_0x0674E58A79778E99(&uVar0, 0);
					func_347();
				}
				if (func_346(func_345(func_320(unk_0xD803B885F5E47A62()))))
				{
					uVar0 = func_207(2480, -1, 0);
					unk_0x0674E58A79778E99(&uVar0, func_345(func_320(unk_0xD803B885F5E47A62())));
					func_347();
				}
				if (func_344())
				{
					func_347();
				}
				if (func_320(unk_0xD803B885F5E47A62()) > -1)
				{
					unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 7);
					if (func_343(unk_0xD803B885F5E47A62()))
					{
						func_342();
					}
					func_339(func_341(func_320(unk_0xD803B885F5E47A62())));
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 7);
		func_337();
	}
}

void func_337()
{
	if (func_338())
	{
		unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 17);
	}
}

bool func_338()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 17);
}

void func_339(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_340() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_340()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_342()
{
	if (!func_338())
	{
		Global_2537071.f_6577 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 17);
	}
}

int func_343(int iParam0)
{
	if (func_320(iParam0) == 236 || func_320(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
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
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23634;
}

bool func_346(int iParam0)
{
	var uVar0;
	
	uVar0 = func_207(2480, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(uVar0, iParam0);
}

void func_347()
{
	if (func_344())
	{
		Global_2439138.f_1156.f_16 = 1;
	}
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	if (func_165())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_27(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_27(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
				func_354(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
			func_354(1);
		}
		if ((!unk_0xA14BB9332558B949() && !func_353()) && !func_349(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 0;
		}
		unk_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

int func_349(int iParam0)
{
	if (func_350(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_351(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_351(int iParam0)
{
	return func_352(iParam0);
}

bool func_352(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

bool func_353()
{
	return Global_2450632.f_740;
}

void func_354(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_165())
		{
			if (func_12(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, 0);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, 0);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0);
			unk_0xDC4BBCD7EBECDC32(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, 1);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x03718F4C6E876DE6(1, 0);
				}
			}
			unk_0x2F82E0AC5EC27DF2(1);
			unk_0xDC4BBCD7EBECDC32(0);
		}
	}
}

int func_355(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		uVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(uVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_356()
{
	switch (Local_624.f_3)
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

int func_357(int iParam0, int iParam1)
{
	if (Local_624.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_358()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_373())
	{
		if (Local_624.f_3 == 14)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && func_372(unk_0x16F2683693E537C9(), 0) == -1)
			{
				iVar2 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if ((!func_371(&iVar2, 0) || unk_0x134B62B726CEC8E6(iVar2) != joaat("dodo")) && unk_0xE934758D273C899A(iVar2))
				{
					func_364(Local_624.f_3 != 14, 1, 0);
					if (func_363())
					{
						iVar3 = func_362();
						if (iVar3 >= 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_8[func_361(iVar3)], func_360(iVar3)))
							{
								iLocal_318++;
								unk_0x5D96D8530B3D0904(&(Local_2591[unk_0x57270EE11514DC67() /*12*/].f_8[func_361(iVar3)]), func_360(iVar3));
							}
						}
					}
					iVar0 = iLocal_318;
				}
			}
		}
		else
		{
			iVar0 = func_359();
		}
	}
	else
	{
		unk_0x743061FC858F03A8(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = unk_0xF2DB717A73826179(fVar1);
	}
	return unk_0x51D1D19912234EA0(iVar0);
}

int func_359()
{
	switch (Local_624.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_360(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_361(iParam0) * 31);
}

int func_361(int iParam0)
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

int func_362()
{
	return iLocal_80;
}

int func_363()
{
	if (iLocal_87 == 1)
	{
		iLocal_87 = 0;
		return 1;
	}
	return 0;
}

void func_364(bool bParam0, bool bParam1, int iParam2)
{
	func_366(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_288.f_2 < Local_291.f_2)
		{
			Local_288.f_2 = 0f;
		}
		else
		{
			Local_291.f_2 = 0f;
		}
		if (Local_294.f_2 < Local_297.f_2)
		{
			Local_294.f_2 = 0f;
		}
		else
		{
			Local_297.f_2 = 0f;
		}
	}
	switch (iLocal_81)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), Local_91[iLocal_80 /*3*/]) < fLocal_287)
				{
					if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
					{
						if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0))
							{
								bLocal_82 = true;
								iLocal_81 = 1;
							}
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
							{
								bLocal_83 = true;
								iLocal_81 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					func_365();
				}
				else if (!unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
				{
					func_365();
				}
				else if (!unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) && !bParam1)
				{
					func_365();
				}
				if (bLocal_82)
				{
					if (iLocal_86)
					{
						if (iLocal_85)
						{
							if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
							{
								func_365();
								iLocal_87 = 1;
							}
						}
						else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
						{
							iLocal_85 = 1;
						}
						else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
						{
							func_365();
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
					{
						iLocal_86 = 1;
					}
					else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
					{
						func_365();
					}
				}
				else if (bLocal_83)
				{
					if (iLocal_86)
					{
						if (iLocal_84)
						{
							if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
							{
								func_365();
								iLocal_87 = 1;
							}
						}
						else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
						{
							iLocal_84 = 1;
						}
						else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
						{
							func_365();
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
					{
						iLocal_86 = 1;
					}
					else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_288, Local_291, fLocal_300, 0, 1, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_294, Local_297, fLocal_300, 0, 1, 0))
					{
						func_365();
					}
				}
			}
			break;
	}
}

void func_365()
{
	bLocal_82 = false;
	bLocal_83 = false;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_86 = 0;
	iLocal_81 = 0;
}

void func_366(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_88 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_370(iVar0)) && (uParam1 || !func_369(iVar0)))
		{
			if (func_368(Local_88, Local_91[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = unk_0x2A488C176D52CCA5(Local_88, Local_91[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_80 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_367(iLocal_80);
}

void func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_288 = { 1103.014f, -233.0374f, 56.13004f };
			Local_291 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_300 = 30f;
			Local_294 = { 1093.589f, -248.5926f, 56.88639f };
			Local_297 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_288 = { 1044.182f, -324.5904f, 49.33408f };
			Local_291 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_300 = 30f;
			Local_294 = { 1007.983f, -320.6159f, 48.4543f };
			Local_297 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_288 = { 916.599f, -419.8782f, 35.62748f };
			Local_291 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_300 = 7f;
			Local_294 = { 912.1362f, -420.5161f, 35.38034f };
			Local_297 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_288 = { 757.7189f, -472.924f, 19.2535f };
			Local_291 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_300 = 20.75f;
			Local_294 = { 744.9114f, -480.7373f, 19.06514f };
			Local_297 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_288 = { 680.3677f, -581.1792f, 14.2145f };
			Local_291 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_300 = 45f;
			Local_294 = { 667.3692f, -610.5356f, 13.85401f };
			Local_297 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_288 = { 644.2497f, -844.7504f, 12.36707f };
			Local_291 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_300 = 25f;
			Local_294 = { 644.3659f, -859.3878f, 12.59677f };
			Local_297 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_288 = { 634.972f, -1011.64f, 10.92594f };
			Local_291 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_300 = 25f;
			Local_294 = { 634.9612f, -1029.123f, 10.61846f };
			Local_297 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_288 = { 645.7223f, -1191.215f, 10.45198f };
			Local_291 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_300 = 50f;
			Local_294 = { 645.7223f, -1228.966f, 10.98015f };
			Local_297 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_288 = { 642.1216f, -1295.73f, 9.005976f };
			Local_291 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_300 = 7f;
			Local_294 = { 644.7772f, -1298.168f, 9.128529f };
			Local_297 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_288 = { 686.5675f, -1444.71f, 9.065001f };
			Local_291 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_300 = 25f;
			Local_294 = { 682.3027f, -1429.872f, 9.890836f };
			Local_297 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_288 = { 718.7617f, -1734.313f, 9.082874f };
			Local_291 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_300 = 30f;
			Local_294 = { 717.5355f, -1748.646f, 9.363478f };
			Local_297 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_288 = { 694.3165f, -2049.806f, 0.009695f };
			Local_291 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_300 = 30f;
			Local_294 = { 693.1836f, -2063.225f, 0.429037f };
			Local_297 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_288 = { 642.6671f, -2494.551f, 0.468485f };
			Local_291 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_300 = 20f;
			Local_294 = { 647.0339f, -2506.202f, 0.583701f };
			Local_297 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_288 = { 691.8235f, -2558.219f, 0.363352f };
			Local_291 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_300 = 10.25f;
			Local_294 = { 695.7928f, -2561.034f, 0.346731f };
			Local_297 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_288 = { 723.6254f, -2562.171f, 0.255647f };
			Local_291 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_300 = 15f;
			Local_294 = { 735.765f, -2561.935f, 0.311182f };
			Local_297 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_288 = { 891.4387f, -2603.12f, 0f };
			Local_291 = { 704.4932f, -2634.793f, 45f };
			fLocal_300 = 20f;
			Local_294 = { 893.2578f, -2616.235f, 0f };
			Local_297 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_288 = { -2669.587f, 2491.96f, 2.043799f };
			Local_291 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_300 = 26.5f;
			Local_294 = { -2687.606f, 2494.868f, 2.608733f };
			Local_297 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_288 = { -1986.173f, 4521.799f, 0f };
			Local_291 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_300 = 17f;
			Local_294 = { -1995.668f, 4531.259f, 0f };
			Local_297 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_288 = { -526.0265f, 4472.442f, 0f };
			Local_291 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_300 = 10f;
			Local_294 = { -519.9281f, 4476.346f, 0f };
			Local_297 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_288 = { 98.1615f, 3384.489f, 45.45169f };
			Local_291 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_300 = 8f;
			Local_294 = { 152.6802f, 3346.793f, 45.02156f };
			Local_297 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_288 = { 147.8606f, 3406.796f, 38.03672f };
			Local_291 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_300 = 14.5f;
			Local_294 = { 130.0916f, 3425.417f, 38.05672f };
			Local_297 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_288 = { 2830.972f, 4967.14f, 34.56013f };
			Local_291 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_300 = 10f;
			Local_294 = { 2826.767f, 4964.185f, 34.10636f };
			Local_297 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_288 = { -151.5764f, 4264.417f, 31.04735f };
			Local_291 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_300 = 10f;
			Local_294 = { -148.3842f, 4261.071f, 31.57409f };
			Local_297 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_288 = { -426.6919f, 2964.272f, 14.848f };
			Local_291 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_300 = 7f;
			Local_294 = { -425.0283f, 2967.861f, 15.22699f };
			Local_297 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_288 = { -192.3414f, 2864.916f, 30.72595f };
			Local_291 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_300 = 10f;
			Local_294 = { -192.0129f, 2871.603f, 29.99943f };
			Local_297 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_288 = { 2539.185f, 2228.772f, 18.6102f };
			Local_291 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_300 = 10f;
			Local_294 = { 2543.708f, 2231.402f, 18.331f };
			Local_297 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_288 = { 2954.087f, 815.7209f, 0.037901f };
			Local_291 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_300 = 35f;
			Local_294 = { 2966.123f, 806.8889f, 0.544056f };
			Local_297 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_288 = { 2329.673f, -459.6648f, 70.24277f };
			Local_291 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_300 = 12f;
			Local_294 = { 2324.752f, -455.5238f, 70.25145f };
			Local_297 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_288 = { 1943.428f, -753.251f, 80.17905f };
			Local_291 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_300 = 7f;
			Local_294 = { 1943.366f, -758.287f, 80.32291f };
			Local_297 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_288 = { -271.2849f, -2414.993f, -10f };
			Local_291 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_300 = 30f;
			Local_294 = { -279.8399f, -2427.212f, -10f };
			Local_297 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_288 = { -1483f, 2691.428f, -10f };
			Local_291 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_300 = 12f;
			Local_294 = { -1478.152f, 2696.688f, -10f };
			Local_297 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_288 = { 222.1519f, -2343.487f, 0.039199f };
			Local_291 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_300 = 12f;
			Local_294 = { 216.959f, -2343.487f, 0.207734f };
			Local_297 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_288 = { 346.4622f, -2244.374f, 0.159779f };
			Local_291 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_300 = 20f;
			Local_294 = { 359.609f, -2244.468f, 0.129684f };
			Local_297 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_288 = { -1859.68f, -322.6357f, 56.16368f };
			Local_291 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_300 = 7.5f;
			Local_294 = { -1860.27f, -327.8634f, 57.543f };
			Local_297 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_288 = { -680.2632f, -600.818f, 69.11289f };
			Local_291 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_300 = 31.5f;
			Local_294 = { -680.6077f, -618.3658f, 69.27496f };
			Local_297 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_288 = { -1468.096f, -591.7158f, 67.05518f };
			Local_291 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_300 = 11.75f;
			Local_294 = { -1474.903f, -591.1215f, 67.08091f };
			Local_297 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_288 = { -1544.958f, -537.1475f, 72.44347f };
			Local_291 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_300 = 11.75f;
			Local_294 = { -1541.008f, -541.5494f, 71.61972f };
			Local_297 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_288 = { 333.2108f, -2727.274f, 20.71663f };
			Local_291 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_300 = 20f;
			Local_294 = { 343.1127f, -2727.236f, 20.23613f };
			Local_297 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_288 = { 1928.071f, 6228.355f, 43.49398f };
			Local_291 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_300 = 13f;
			Local_294 = { 1931.82f, 6235.634f, 43.37382f };
			Local_297 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_288 = { -736.4309f, -1590.921f, 10.80892f };
			Local_291 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_300 = 15f;
			Local_294 = { -727.2307f, -1585.221f, 11.78027f };
			Local_297 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_288 = { -676.3775f, -1548.553f, 12.33747f };
			Local_291 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_300 = 25f;
			Local_294 = { -654.203f, -1536.146f, 9.191055f };
			Local_297 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_288 = { -624.2344f, -1537.045f, 12.60193f };
			Local_291 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_300 = 8f;
			Local_294 = { -615.4003f, -1536.65f, 12.40271f };
			Local_297 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_288 = { -492.5057f, -1632.457f, 24.3307f };
			Local_291 = { -418.2088f, -1487.452f, 0f };
			fLocal_300 = 25f;
			Local_294 = { -486.2016f, -1636.095f, 24.20805f };
			Local_297 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_288 = { -359.3541f, -1639.693f, 13.13455f };
			Local_291 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_300 = 25f;
			Local_294 = { -378.1518f, -1705.66f, 12.47196f };
			Local_297 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_288 = { -243.4436f, -1814.623f, 25.69465f };
			Local_291 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_300 = 25f;
			Local_294 = { -235.1319f, -1822.094f, 25.86542f };
			Local_297 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_288 = { 84.55537f, -2046.159f, 13.30767f };
			Local_291 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_300 = 25f;
			Local_294 = { 17.90788f, -2035.773f, 12.62706f };
			Local_297 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_288 = { 221.5029f, -2232.766f, 9.88676f };
			Local_291 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_300 = 8f;
			Local_294 = { 218.583f, -2232.766f, 9.886198f };
			Local_297 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_288 = { 221.6518f, -2184.635f, 11.66457f };
			Local_291 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_300 = 8f;
			Local_294 = { 217.8995f, -2184.635f, 11.5405f };
			Local_297 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_288 = { 2326.57f, 1096.031f, 76.31458f };
			Local_291 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_300 = 21f;
			Local_294 = { 2334.453f, 1103.067f, 76.26603f };
			Local_297 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_288 = { 2379.442f, 1150.776f, 58.79632f };
			Local_291 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_300 = 12f;
			Local_294 = { 2374.064f, 1146.282f, 58.83331f };
			Local_297 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_288 = { -1179.405f, -355.2554f, 56.53003f };
			Local_291 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_300 = 12.5f;
			Local_294 = { -1178.385f, -361.8784f, 56.15081f };
			Local_297 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_288 = { -921.3846f, -384.94f, 137.0181f };
			Local_291 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_300 = 16f;
			Local_294 = { -914.1658f, -387.9444f, 137.0794f };
			Local_297 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_288 = { -740.2564f, 246.4529f, 132.2922f };
			Local_291 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_300 = 22f;
			Local_294 = { -726.6429f, 253.0676f, 132.3319f };
			Local_297 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_288 = { -771.2068f, 268.2729f, 132.1689f };
			Local_291 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_300 = 16f;
			Local_294 = { -770.8035f, 310.8625f, 137.4161f };
			Local_297 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_288 = { 259.2205f, 135.4146f, 136.7083f };
			Local_291 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_300 = 16f;
			Local_294 = { 261.9694f, 142.9676f, 136.6889f };
			Local_297 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_288 = { 393.548f, -30.87166f, 152.6635f };
			Local_291 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_300 = 8f;
			Local_294 = { 390.5358f, -36.08882f, 152.7813f };
			Local_297 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_288 = { 114.3139f, -648.4297f, 261.8488f };
			Local_291 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_300 = 20f;
			Local_294 = { 124.8467f, -646.6575f, 261.8488f };
			Local_297 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_288 = { -215.919f, -823.8436f, 126.0224f };
			Local_291 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_300 = 20f;
			Local_294 = { -225.397f, -820.3937f, 126.0812f };
			Local_297 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_288 = { -296.4725f, -802.0815f, 95.40108f };
			Local_291 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_300 = 20f;
			Local_294 = { -305.4602f, -798.8369f, 95.48194f };
			Local_297 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_288 = { -292.3034f, -823.3569f, 95.37621f };
			Local_291 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_300 = 20f;
			Local_294 = { -288.9206f, -814.022f, 95.37556f };
			Local_297 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_288 = { -256.3589f, -714.7838f, 110.1617f };
			Local_291 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_300 = 20f;
			Local_294 = { -253.7723f, -705.6632f, 110.1736f };
			Local_297 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_288 = { 1808.214f, 1949.246f, 71.73707f };
			Local_291 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_300 = 9.75f;
			Local_294 = { 1802.786f, 1950.262f, 71.74002f };
			Local_297 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_288 = { 2388.733f, 2931.941f, 46.62681f };
			Local_291 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_300 = 10f;
			Local_294 = { 2392.547f, 2934.867f, 46.6268f };
			Local_297 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_288 = { 2700.056f, 4836.381f, 42.07854f };
			Local_291 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_300 = 20.75f;
			Local_294 = { 2685.672f, 4821.653f, 42.18471f };
			Local_297 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_288 = { -1053.446f, 4766.245f, 234.3251f };
			Local_291 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_300 = 5f;
			Local_294 = { -1051.414f, 4767.193f, 234.4293f };
			Local_297 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_368(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
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

int func_370(int iParam0)
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

int func_371(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (!unk_0x437347B10A200C4B(*uParam0, 0) || iParam1)
		{
			if (unk_0x70EED0761B82965E(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
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

int func_373()
{
	switch (Local_624.f_3)
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

int func_374(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_391() < 10)
	{
		iVar0 = func_390();
		func_375(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_375(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_376(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_376(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_385(unk_0xD803B885F5E47A62()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_384(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_379(Var0))
		{
			Global_2405072.f_45.f_64 = func_378(unk_0xD803B885F5E47A62());
			func_377(Var0, iParam8);
		}
	}
}

void func_377(struct<12> Param0, int iParam12)
{
	Global_2405072.f_365[iParam12 /*12*/] = { Param0 };
	Global_2405072.f_365[iParam12 /*12*/].f_9 = 1;
}

int func_378(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_379(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405072.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_380(Global_2405072.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_380(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_383(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_381(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_383(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_381(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_381(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_382(Param0, Param3, Var0, Var3);
}

int func_382(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_383(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0, var uParam1)
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

int func_385(int iParam0)
{
	if (((func_388(iParam0, 1) || func_387(iParam0)) || func_112(iParam0, 0)) || func_386(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_35;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/] != -1;
	}
	return 0;
}

bool func_388(int iParam0, bool bParam1)
{
	if (func_389() != 0)
	{
		return func_378(iParam0) != 0;
	}
	return func_350(iParam0, bParam1, 0);
}

int func_389()
{
	return Global_30768;
}

int func_390()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_391()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_392(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_393(int iParam0)
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

char* func_394(int iParam0)
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

char* func_395(int iParam0)
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

void func_396()
{
	if (!func_155())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_151();
}

void func_397(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_370(iVar0) && !func_369(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_91[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_398()
{
	if (!func_373())
	{
		if (Local_624.f_3 == 14)
		{
			func_401();
		}
		Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4.f_1 = func_359();
	}
	else if ((!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 4) && !unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 5)) && !func_400(unk_0xD803B885F5E47A62()))
	{
		func_399();
	}
}

void func_399()
{
	switch (Local_624.f_3)
	{
		case 0:
			unk_0x2AC427A8BD5E39B5(8, 2);
			break;
		
		case 1:
			unk_0x2AC427A8BD5E39B5(13, 2);
			break;
		
		case 2:
			unk_0x2AC427A8BD5E39B5(4, 2);
			break;
		
		case 4:
			unk_0x2AC427A8BD5E39B5(1, 2);
			break;
		
		case 3:
			unk_0x2AC427A8BD5E39B5(2, 2);
			break;
		
		case 5:
			unk_0x2AC427A8BD5E39B5(3, 2);
			break;
		
		case 6:
			unk_0x2AC427A8BD5E39B5(11, 3);
			break;
		
		case 7:
			unk_0x2AC427A8BD5E39B5(14, 1);
			break;
		
		case 8:
			unk_0x2AC427A8BD5E39B5(29, 2);
			break;
		
		case 9:
			unk_0x2AC427A8BD5E39B5(12, 2);
			break;
		
		case 10:
			unk_0x2AC427A8BD5E39B5(10, 2);
			break;
		
		case 11:
			unk_0x2AC427A8BD5E39B5(18, 2);
			break;
		
		case 12:
			unk_0x2AC427A8BD5E39B5(20, 2);
			break;
		
		case 13:
			unk_0x2AC427A8BD5E39B5(27, 2);
			break;
		
		case 15:
			unk_0x2AC427A8BD5E39B5(26, 1);
			break;
		
		case 16:
			unk_0x2AC427A8BD5E39B5(25, 1);
			break;
		
		case 17:
			unk_0x2AC427A8BD5E39B5(22, 1);
			break;
		
		case 18:
			unk_0x2AC427A8BD5E39B5(24, 1);
			break;
	}
	unk_0x5D96D8530B3D0904(&iLocal_315, 8);
}

bool func_400(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_401()
{
	Local_91[0 /*3*/] = { 1083f, -231f, 60f };
	Local_91[1 /*3*/] = { 1024f, -325f, 60f };
	Local_91[2 /*3*/] = { 910f, -401f, 43f };
	Local_91[3 /*3*/] = { 721f, -457f, 26f };
	Local_91[4 /*3*/] = { 643f, -579f, 26f };
	Local_91[5 /*3*/] = { 590f, -851f, 26f };
	Local_91[6 /*3*/] = { 590f, -1023f, 16f };
	Local_91[7 /*3*/] = { 582f, -1205f, 24f };
	Local_91[8 /*3*/] = { 608f, -1335f, 16f };
	Local_91[9 /*3*/] = { 640f, -1434f, 16f };
	Local_91[10 /*3*/] = { 671f, -1742f, 20f };
	Local_91[11 /*3*/] = { 651f, -2046f, 16f };
	Local_91[12 /*3*/] = { 603f, -2505f, 9f };
	Local_91[13 /*3*/] = { 673f, -2582f, 4f };
	Local_91[14 /*3*/] = { 728f, -2594f, 10f };
	Local_91[15 /*3*/] = { 794f, -2624f, 27f };
	Local_91[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_91[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_91[18 /*3*/] = { -513f, 4427f, 40f };
	Local_91[19 /*3*/] = { 126f, 3366f, 40f };
	Local_91[20 /*3*/] = { 143f, 3418f, 36f };
	Local_91[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_91[22 /*3*/] = { -162f, 4249f, 40f };
	Local_91[23 /*3*/] = { -408f, 2964f, 20f };
	Local_91[24 /*3*/] = { -181f, 2862f, 38f };
	Local_91[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_91[26 /*3*/] = { 2950f, 803f, 8f };
	Local_91[27 /*3*/] = { 2369f, -409f, 80f };
	Local_91[28 /*3*/] = { 1906f, -755f, 84f };
	Local_91[29 /*3*/] = { -403f, -2333f, 40f };
	Local_91[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_91[31 /*3*/] = { 219f, -2315f, 5f };
	Local_91[32 /*3*/] = { 350f, -2315f, 5f };
	Local_91[33 /*3*/] = { -1848f, -333f, 75f };
	Local_91[34 /*3*/] = { -693f, -608f, 69f };
	Local_91[35 /*3*/] = { -1461f, -582f, 53f };
	Local_91[36 /*3*/] = { -1553f, -546f, 59f };
	Local_91[37 /*3*/] = { 338f, -2758f, 23f };
	Local_91[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_91[39 /*3*/] = { -713f, -1538f, 13f };
	Local_91[40 /*3*/] = { -659f, -1518f, 13f };
	Local_91[41 /*3*/] = { -620f, -1502f, 16f };
	Local_91[42 /*3*/] = { -445f, -1575f, 26f };
	Local_91[43 /*3*/] = { -373f, -1680f, 19f };
	Local_91[44 /*3*/] = { -212f, -1805f, 29f };
	Local_91[45 /*3*/] = { 47f, -2040f, 18f };
	Local_91[46 /*3*/] = { 223f, -2240f, 6f };
	Local_91[47 /*3*/] = { 218f, -2189f, 6f };
	Local_91[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_91[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_91[50 /*3*/] = { -1186f, -365f, 46f };
	Local_91[51 /*3*/] = { -916f, -407f, 93f };
	Local_91[52 /*3*/] = { -726f, 235f, 105f };
	Local_91[53 /*3*/] = { -774f, 286f, 112f };
	Local_91[54 /*3*/] = { 271f, 134f, 125f };
	Local_91[55 /*3*/] = { 377f, -28f, 125f };
	Local_91[56 /*3*/] = { 121f, -703f, 150f };
	Local_91[57 /*3*/] = { -204f, -784f, 74f };
	Local_91[58 /*3*/] = { -287f, -774f, 72f };
	Local_91[59 /*3*/] = { -272f, -824f, 71f };
	Local_91[60 /*3*/] = { -230f, -723f, 80f };
	Local_91[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_91[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_91[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_91[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_402(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208), iParam0);
	}
}

void func_403(var uParam0, int iParam1)
{
	if (func_320(unk_0xD803B885F5E47A62()) == 133 && iParam1)
	{
		Global_2537071.f_5045 = uParam0;
	}
	else
	{
		Global_2537071.f_5045 = -1;
	}
}

void func_404(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
	}
	Global_2537071.f_4971 = -1;
	bVar0 = (func_112(unk_0xD803B885F5E47A62(), 0) && func_108(unk_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_402(func_421(iParam0), 1);
	}
	else
	{
		func_420(iParam0, -1);
		if (func_8(unk_0xD803B885F5E47A62()))
		{
			Global_1574650.f_3 = iParam0;
		}
		else
		{
			func_419(iParam0);
		}
		Global_1574650.f_4 = -1;
		if (func_8(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 5);
		}
		if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 21)) || func_163(unk_0xD803B885F5E47A62(), 25))
		{
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 4);
		}
		unk_0x0674E58A79778E99(&(Global_1574650.f_1), 17);
		unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 20);
		if (func_418(iParam0))
		{
			func_417();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_414(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x51B096AAC60548C1(fParam2);
			if (iParam0 == 146)
			{
				unk_0x34D79252800B23FF(0);
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
		}
		if (func_412(iParam0))
		{
			unk_0x34D79252800B23FF(0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_410(1);
				if (func_263(0))
				{
					unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_408(1);
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 12);
		}
		if (bParam5)
		{
			func_407();
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_405(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 21);
			}
		}
	}
	Global_2513109 = 1;
}

int func_405(int iParam0)
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
		case 150:
			return 1;
		
		default:
	}
	if (func_406())
	{
		return 1;
	}
	return 0;
}

int func_406()
{
	switch (func_319())
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

void func_407()
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_4962), 0);
}

void func_408(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_409(iVar0);
		iVar0++;
	}
}

void func_409(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_410(int iParam0)
{
	if (func_411() && iParam0)
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

int func_411()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_413(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_414(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_415())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (unk_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = unk_0x0D0A574C76D769AC();
}

int func_415()
{
	switch (func_389())
	{
		case 0:
			return func_416();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_416()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_417()
{
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_200 = 0;
	unk_0x0674E58A79778E99(&(Global_2537071.f_4561), 1);
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_419(int iParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62() /*615*/] = iParam0;
}

void func_420(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_346(0) || func_346(func_345(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 2);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 2);
		}
	}
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_422()
{
	switch (Local_624.f_3)
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

void func_423()
{
	Global_1671757 = 1;
	if (!unk_0xEAE0D21A50E6C7F4(Global_2546092, 0))
	{
		unk_0x5D96D8530B3D0904(&Global_2546092, 0);
		unk_0x5D96D8530B3D0904(&Global_1671758, 0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_2546092, 1))
	{
		unk_0x5D96D8530B3D0904(&Global_2546092, 1);
		unk_0x5D96D8530B3D0904(&Global_1671758, 1);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_2546092, 5))
	{
		unk_0x5D96D8530B3D0904(&Global_2546092, 5);
		unk_0x5D96D8530B3D0904(&Global_1671758, 5);
	}
	if (unk_0x76395FF5E8D5E643(-355737150))
	{
		unk_0x1BA7FCEAFCE8D46E(-355737150, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-580979506))
	{
		unk_0x1BA7FCEAFCE8D46E(-580979506, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-1426452475))
	{
		unk_0x1BA7FCEAFCE8D46E(-1426452475, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(745417724))
	{
		unk_0x1BA7FCEAFCE8D46E(745417724, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-1305304906))
	{
		unk_0x1BA7FCEAFCE8D46E(-1305304906, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-1543175077))
	{
		unk_0x1BA7FCEAFCE8D46E(-1543175077, 0, 0, 0);
	}
	if (unk_0x76395FF5E8D5E643(-811770997))
	{
		unk_0x1BA7FCEAFCE8D46E(-811770997, 0, 0, 0);
	}
}

int func_424()
{
	switch (Local_624.f_3)
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

void func_425()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_624.f_3))
	{
		if (Local_624.f_3 == 1 || Local_624.f_3 == 6)
		{
			iVar0 = func_447(unk_0xD803B885F5E47A62(), 1);
			iVar1 = func_200(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
				{
					unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 1, 0, 0);
					func_426(1);
				}
			}
			else
			{
				unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), 1);
			}
		}
	}
}

void func_426(bool bParam0)
{
	int iVar0;
	
	if (unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 5) != 0)
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, 1);
		unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_207(585, -1, 0));
		if (func_446())
		{
			unk_0x2DE95ECC33BE3172(unk_0xD803B885F5E47A62(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_445())
		{
			unk_0x2DE95ECC33BE3172(unk_0xD803B885F5E47A62(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_442(3610, -1, -1))
		{
		}
		iVar0 = func_207(2040, -1, 0);
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_441(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), iVar0));
		if (func_260(0))
		{
			unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_207(585, -1, 0));
		}
		else
		{
			unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_440(Global_2546381));
		}
		func_439(unk_0xD803B885F5E47A62(), iVar0);
		unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 5, func_432(unk_0x16F2683693E537C9(), iVar0), func_431(unk_0x16F2683693E537C9(), iVar0), 0);
		func_430(func_207(2040, -1, 0), 1);
		Global_2537071.f_287 = 1;
		func_427(unk_0xD803B885F5E47A62(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8CD06866876216F2())
	{
		func_429();
		if (iParam2 == -1)
		{
			iParam2 = func_207(2040, -1, 0);
		}
		unk_0xA8084772F05C5AF6(iParam0, 5, func_432(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_431(unk_0x9539D44F3E4492F6(iParam0), iParam2), 0);
		unk_0xF8918B9BC7ADC372(iParam0, func_441(unk_0x9539D44F3E4492F6(iParam0), iParam2));
		unk_0x64F9F278AB9DCA2C(unk_0x9539D44F3E4492F6(iParam0), 5, func_432(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_431(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_441(unk_0x9539D44F3E4492F6(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_207(585, -1, 0);
		}
		if (func_260(1) && func_428(iParam0))
		{
			unk_0x4854B75EFFCB0573(iParam0, func_440(Global_2546381));
		}
		else
		{
			unk_0x4854B75EFFCB0573(iParam0, iParam1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_28, 4))
		{
			unk_0x4854B75EFFCB0573(iParam0, Global_1574438);
			unk_0x2DE95ECC33BE3172(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_439(iParam0, iParam2);
		unk_0x9DD8618CA5BF832D(unk_0x9539D44F3E4492F6(iParam0), 177, 1);
	}
}

bool func_428(int iParam0)
{
	return func_107(iParam0, 10);
}

void func_429()
{
	Global_76595 = 0;
	Global_76596 = -1;
	Global_76597 = -1;
	Global_76598 = -1;
	Global_76599 = -1;
	Global_76600 = -1;
}

void func_430(int iParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
		func_429();
		func_198(2040, iParam0, -1, 1, 0);
		unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 5, func_432(unk_0x16F2683693E537C9(), iParam0), func_431(unk_0x16F2683693E537C9(), iParam0), 0);
		func_439(unk_0xD803B885F5E47A62(), iParam0);
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_441(unk_0x16F2683693E537C9(), iParam0));
		if ((iParam1 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 5) != 0)
		{
			func_427(unk_0xD803B885F5E47A62(), -1, -1);
		}
	}
}

int func_431(var uParam0, int iParam1)
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

var func_432(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x36C584991B4C183F(uParam0, 9) != false;
	iVar1 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	iVar2 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	iVar3 = unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_433(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_433(int iParam0, int iParam1)
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
	
	iVar0 = unk_0x36C584991B4C183F(uParam0, 11);
	if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x134B62B726CEC8E6(iParam0);
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
	uVar4 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	if (unk_0x1A5A491D253EA7BA(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		return func_438(iParam0, iParam1);
	}
	if (func_437(iParam0))
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
		iVar5 = unk_0x4F4B24509D6989D0(iParam0, 11, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
		if (unk_0x1A5A491D253EA7BA(iVar5, joaat("HIPSTER_DRESS"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("DRESS"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("PILOT_SUIT"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("COMBAT_GEAR"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("HOODED_JACKET"), 0))
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
			else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_438(iParam0, iParam1) + 15;
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x1A5A491D253EA7BA(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_436(iVar5, 0);
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
						iVar0 = func_435(iVar5);
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
						iVar0 = func_435(iVar5);
						break;
					}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_434(iVar5, 0);
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
					iVar0 = func_435(iVar5);
					break;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("XMAS2_DRAW_0"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_0"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_1"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_2"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_3"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_4"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_5"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_6"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x1A5A491D253EA7BA(iVar5, joaat("JAN_DRAW_1"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x1A5A491D253EA7BA(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x1A5A491D253EA7BA(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_438(iParam0, iParam1) + 15;
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -1086258388, 0) || unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW_SWEAT"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_0"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_1"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_2"), 0))
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
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_3"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_4"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_5"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_6"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_438(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_3"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_5"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -872449705, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_9"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_10"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_11"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_12"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 144417099, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_14"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_15"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -102825006, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_18"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_19"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_21"), 0))
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
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_22"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x1A5A491D253EA7BA(iVar5, joaat("AIR_DRAW_0"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_1"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_2"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_4"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_7"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_8"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("STUNT_DRAW_9"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_0"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_1"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_2"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_3"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_6"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_8"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_9"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_19"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_20"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_21"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 970679185, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 83294665, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 382246252, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_5"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("ASSAULT_DRAW_0"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE_DRAW_4"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_438(iParam0, iParam1) + 15;
				}
				else
				{
					return func_438(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("ARENA_DRAW_12"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, joaat("SMOKING_JACKET"), 0))
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
		else if ((unk_0x1A5A491D253EA7BA(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x1A5A491D253EA7BA(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x1A5A491D253EA7BA(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_435(iVar5);
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

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_435(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_437(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(uParam0, 4, unk_0x36C584991B4C183F(uParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_438(var uParam0, int iParam1)
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

void func_439(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xF1C520A9D38679DE(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0xF1C520A9D38679DE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0xF1C520A9D38679DE(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0xF1C520A9D38679DE(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0xF1C520A9D38679DE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x76101DD10F826BF0(iParam0);
	}
}

int func_440(var uParam0)
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

int func_441(var uParam0, int iParam1)
{
	return 0;
}

int func_442(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_444(iParam0, iParam1);
	uVar2 = func_443(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_444(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

bool func_445()
{
	return unk_0xC146D5FBD23C6954(joaat("mppilot"));
}

bool func_446()
{
	return unk_0xC146D5FBD23C6954(joaat("mplts"));
}

int func_447(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_204(iParam0);
}

void func_448()
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
	
	if ((((!func_7(unk_0xD803B885F5E47A62()) && !func_162(unk_0xD803B885F5E47A62())) && !func_314()) && !func_460(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_459(unk_0xD803B885F5E47A62()))
	{
		if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
			bVar11 = func_5(Local_624.f_3);
			bVar12 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0);
			bVar13 = func_458();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_624.f_67[iVar4 /*2*/].f_1;
				if (unk_0xE5DBF9B6126856CA(uVar14) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) == unk_0xB177666FAB6F4417(uVar14))
						{
							func_336(1);
						}
					}
					unk_0x5D96D8530B3D0904(&uVar5, iVar4);
					if (bVar11 && func_40(Local_624.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(uVar14), 1) };
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
			if (func_41(Local_624.f_3))
			{
				unk_0x5D96D8530B3D0904(&uVar5, 31);
			}
			Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_7 = uVar5;
			if (func_5(Local_624.f_3))
			{
				if ((unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()) || (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_40(Local_624.f_3, iVar7, &Var0, &uVar3))
						{
							func_457(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_456(Var0, 1, 0);
							func_450(10, 0, 0, 0, 0);
							unk_0x5D96D8530B3D0904(&iLocal_315, 5);
						}
					}
				}
				else
				{
					func_449();
				}
			}
		}
	}
	else
	{
		func_449();
	}
}

void func_449()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 5))
	{
		func_170();
		func_168();
		unk_0x0674E58A79778E99(&iLocal_315, 5);
		func_167();
	}
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_102())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, 0) && func_451())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = unk_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

int func_451()
{
	if ((((((func_219(unk_0xD803B885F5E47A62()) == 229 || func_219(unk_0xD803B885F5E47A62()) == 191) || func_455()) || func_454()) || func_355(unk_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_452(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_452(int iParam0)
{
	if (func_453(iParam0))
	{
		return 1;
	}
	if (func_106(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

bool func_454()
{
	return Global_1574405;
}

int func_455()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_456(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { Param0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

void func_457(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		Global_2413899.f_6 = unk_0x0D0A574C76D769AC();
	}
	Var0.f_6 = Global_2413899.f_6;
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
	if (func_385(unk_0xD803B885F5E47A62()))
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
	Global_2413899 = { Var0 };
}

int func_458()
{
	if ((((((func_453(unk_0xD803B885F5E47A62()) || func_165()) || func_164()) || func_163(unk_0xD803B885F5E47A62(), 21)) || func_163(unk_0xD803B885F5E47A62(), 25)) || func_8(unk_0xD803B885F5E47A62())) || func_7(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_460(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
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
		if (func_474(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_298(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_473(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_471(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_470(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_468(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_467(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_466(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_465(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_464(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_461(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_466(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			uVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_102())
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_102())
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_470(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_473(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_474(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_475(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_533())
	{
		if (bParam1)
		{
			iVar0 = unk_0x57270EE11514DC67();
			if (func_100(unk_0xD803B885F5E47A62()))
			{
				uVar1 = func_322();
				iVar2 = unk_0x83FACCC48B68F9D1(uVar1);
				if (unk_0x40B8C182D63932FC(iVar2))
				{
					iVar3 = unk_0x7B9C1F53FE442D06(iVar2);
					if (unk_0x81A93C8315C28F58(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_532())
				{
					switch (Local_624.f_3)
					{
						case 14:
							if (!func_370(iVar4) && !func_369(iVar4))
							{
								func_529("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0xE5DBF9B6126856CA(Local_624.f_67[iVar5 /*2*/].f_1)) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_624.f_67[iVar5 /*2*/].f_1), 0)) && unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_624.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0xE4EDC4B0E92C078B(uLocal_597[iVar5]))
				{
					uLocal_597[iVar5] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(Local_624.f_67[iVar5 /*2*/].f_1));
					unk_0xBC8E0A7390523199(uLocal_597[iVar5], func_528(iVar5));
					unk_0x2A065371C9D96655(uLocal_597[iVar5], 9);
					unk_0xDC5B2F9D0CCE3A10(uLocal_597[iVar5], func_527(iVar5));
					func_525(&(uLocal_597[iVar5]), 9);
				}
				else
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						Var6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
						if (unk_0x2A488C176D52CCA5(Var6, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_624.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0xF2D30B8ACAF12A39(uLocal_597[iVar5], 1);
						}
						else
						{
							unk_0xF2D30B8ACAF12A39(uLocal_597[iVar5], 0);
						}
					}
					func_476(uLocal_597[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(uLocal_597[iVar5]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_597[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_476(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0x7F010F50CE03A8AF(uParam0, func_477(uParam0, iParam1, fParam2, fParam3));
}

int func_477(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_524(Global_2439138) && !func_81())
	{
		fVar0 = func_479(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_478();
		}
		return (unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_478()
{
	if (func_388(Global_2439138, 1))
	{
		return 50;
	}
	return 0;
}

float func_479(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2439138;
	Var2 = { func_523(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1319111 || func_519())
	{
		if (func_518(iVar0))
		{
			Var5 = { func_482(iVar0) };
		}
		else if (func_481(iVar0))
		{
			Var5 = { func_480(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar0), 0) };
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

Vector3 func_480(int iParam0)
{
	var uVar0;
	
	if (func_481(iParam0))
	{
		uVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(uVar0))
		{
			return unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_481(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x9539D44F3E4492F6(iParam0);
			if (unk_0xC844350D5D58C99A(uVar0))
			{
				if (unk_0x5A91F08DF773C39D(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_482(int iParam0)
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
	
	if (iParam0 == func_102())
	{
	}
	if (func_517(iParam0))
	{
		iVar0 = func_516(iParam0);
		if (iVar0 != func_102())
		{
			if (!func_515(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_661[iVar0 /*3*/][1]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_661[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2425662[func_516(iParam0) /*421*/].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_511(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_510(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_305))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_305, 0);
		}
	}
	else if (func_472(iParam0) && !func_509(iParam0))
	{
		iVar2 = Global_2425662[iParam0 /*421*/].f_310.f_8;
		if (iVar2 != func_102())
		{
			iVar3 = func_511(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3 /*3*/];
			}
		}
	}
	else if (func_470(iParam0) && !func_508(iParam0))
	{
		if (func_518(iParam0) && func_507())
		{
			return Global_1676377.f_488[Global_2425662[iParam0 /*421*/].f_310.f_5 /*3*/];
		}
		iVar4 = Global_2425662[iParam0 /*421*/].f_310.f_8;
		if (iVar4 != func_102())
		{
			if (func_506(iVar4))
			{
				iVar5 = func_502(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_469(iParam0))
	{
		iVar6 = func_501(iParam0);
		if (iVar6 != func_102())
		{
			if (!func_500(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_758[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_758[iVar6], 0);
				}
				else
				{
					return Global_2425662[func_501(iParam0) /*421*/].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_502(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_499(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_307))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_307, 0);
		}
	}
	else if (func_468(iParam0) && !func_498(iParam0))
	{
		iVar8 = Global_2425662[iParam0 /*421*/].f_310.f_8;
		if (iVar8 != func_102())
		{
			if (func_497(iVar8))
			{
				iVar9 = func_493(iVar8);
				if (iVar9 != -1)
				{
					return func_492(iVar9);
				}
			}
		}
	}
	else if (func_467(iParam0) && !func_491(iParam0))
	{
		iVar10 = Global_2425662[iParam0 /*421*/].f_310.f_8;
		if (iVar10 != func_102())
		{
			if (func_490(iVar10))
			{
				iVar11 = func_486(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_466(iParam0, 0))
	{
		iVar12 = func_485(iParam0);
		if (iVar12 != func_102())
		{
			if (!func_484(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_791[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_791[iVar12], 0);
				}
				else
				{
					return Global_1628237[func_485(iParam0) /*615*/].f_600;
				}
			}
			else
			{
				iVar13 = func_486(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_465(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_468(iParam0))
	{
		return func_492(Global_2425662[iParam0 /*421*/].f_310.f_5);
	}
	if (func_483(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676377.f_488[Global_2425662[iParam0 /*421*/].f_310.f_5 /*3*/];
}

int func_483(int iParam0)
{
	if ((func_464(iParam0) || func_462(iParam0)) || func_463(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_3, 4);
	}
	return 0;
}

int func_485(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

int func_486(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_489(iParam0);
		if (iVar0 != 0)
		{
			return func_487(iVar0);
		}
	}
	return -1;
}

int func_487(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_299(iVar0) == 11)
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

int func_489(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_281;
	}
	return 0;
}

int func_490(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_467(iParam0) && Global_2425662[iParam0 /*421*/].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_492(int iParam0)
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
	return Global_1676377.f_488[iParam0 /*3*/];
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_496(iParam0);
		if (iVar0 != 0)
		{
			return func_494(iVar0);
		}
	}
	return -1;
}

int func_494(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_299(iVar0) == 11)
		{
			if (func_495(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_495(int iParam0)
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

int func_496(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322;
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_498(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_468(iParam0) && Global_2425662[iParam0 /*421*/].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_2, 6);
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

int func_502(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return -1;
	}
	iVar0 = func_505(iParam0);
	if (!iVar0 == 0)
	{
		return func_503(iVar0);
	}
	return -1;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_299(iVar0) == 9)
		{
			if (func_504(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_504(int iParam0)
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

int func_505(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_271;
}

int func_506(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return 0;
}

int func_507()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_470(iParam0) && Global_2425662[iParam0 /*421*/].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_472(iParam0) && Global_2425662[iParam0 /*421*/].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return -1;
	}
	iVar0 = func_514(iParam0);
	if (!iVar0 == 0)
	{
		return func_512(iVar0);
	}
	return -1;
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_513(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_513(int iParam0)
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

int func_514(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_183[5 /*12*/];
}

int func_515(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 6);
	}
	return 0;
}

int func_516(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

int func_517(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_102())
			{
				return func_299(Global_2425662[iParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_12(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_519()
{
	if ((func_522() || func_521()) || func_520(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

bool func_520(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1627020[iParam0 /*38*/].f_29, 20);
}

bool func_521()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687686, 1);
}

bool func_522()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

Vector3 func_523(var uParam0)
{
	var uVar0;
	
	switch (unk_0xDC7D2B8A563DB482(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0x63EC65B0F6B7C26F(uParam0);
			if (unk_0xC844350D5D58C99A(uVar0))
			{
				return unk_0x68F4C0EC296D3901(iVar0, 0);
			}
			break;
	}
	return unk_0xAC14F6E4B17D7835(uParam0);
}

int func_524(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_68.f_2, 9) && !(unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_68.f_2, 6) && unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_68.f_2, 7))) || ((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_68.f_2, 6) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_68.f_2, 7)) && !unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_525(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		uVar0 = func_526(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, uVar0);
	}
}

int func_526(int iParam0)
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
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_527(int iParam0)
{
	if (unk_0xAFB8495D36825275(Local_624.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xC41A9202669A24C4(Local_624.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x7D8B2A8F9EA82DB7(Local_624.f_67[iParam0 /*2*/]) && !unk_0xD1CC995EE5EB1EC1(Local_624.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_528(int iParam0)
{
	if (unk_0xAFB8495D36825275(Local_624.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0xC41A9202669A24C4(Local_624.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x7D8B2A8F9EA82DB7(Local_624.f_67[iParam0 /*2*/]) && !unk_0xD1CC995EE5EB1EC1(Local_624.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_529(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_2591[iParam2 /*12*/].f_8[func_361(iParam3)], func_360(iParam3)) && !bParam1)
	{
		Var0 = { func_531(iParam3) };
		if (!unk_0xE4EDC4B0E92C078B(uLocal_531[iParam3]))
		{
			if (!func_530(Var0, 0f, 0f, 0f, 0) && !func_530(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_531[iParam3] = unk_0x6CC513A908911CF0(Var0);
				unk_0x2A065371C9D96655(uLocal_531[iParam3], 9);
				unk_0xDC5B2F9D0CCE3A10(uLocal_531[iParam3], sParam0);
				func_476(uLocal_531[iParam3], 25, 1152319488, 1137180672);
				func_525(&(uLocal_531[iParam3]), 12);
				unk_0xF2D30B8ACAF12A39(uLocal_531[iParam3], 1);
			}
		}
		else if (unk_0x798A3F1296751F46())
		{
			unk_0x7F010F50CE03A8AF(uLocal_531[iParam3], 255);
		}
		else
		{
			func_476(uLocal_531[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(uLocal_531[iParam3]))
	{
		unk_0x142CC44DB769B57E(&(uLocal_531[iParam3]));
		if (!bParam1)
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

bool func_530(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_531(int iParam0)
{
	switch (Local_624.f_3)
	{
		case 14:
			return Local_335[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_532()
{
	switch (Local_624.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_533()
{
	switch (Local_624.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_534()
{
	switch (Local_624.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_535(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_313(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_216(sParam1))
	{
		sVar0 = sParam1;
	}
	func_143(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_536(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xBB0808A181D4745C();
	return "HUD_STARTING";
	if (unk_0x7F8A39872A07D2CE(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_challenges"))
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
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x7F8A39872A07D2CE(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_537(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_538(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		Global_2537071.f_4961 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 1))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2537071.f_4961 = 0;
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 1);
		}
	}
}

int func_539(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_540(int iParam0)
{
	if (!unk_0x0178C60FEA5C5A75() && !unk_0x757EF87A33649210())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (func_5(Local_624.f_3))
						{
							if (Local_624.f_3 == 12)
							{
								func_295("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_295("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_624.f_3))
						{
							func_295("AMCH_BIKEAV", 30000);
						}
						func_294(1);
						unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if (!unk_0x798A3F1296751F46())
					{
						func_295("AMCH_BLOW", 30000);
						func_294(1);
						unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !func_545(63))
					{
						switch (Local_624.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
									{
										func_295("AMCH_ALTI", 30000);
										func_294(1);
										unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_NMIS", 30000);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_FRFALL", -1);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_PVPO1", -1);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_PVPO2", -1);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_WHEELIE", 30000);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_STOPPIE", 30000);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_LFALL", 30000);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_LPARA", 30000);
									func_294(1);
									unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(63))
					{
						switch (Local_624.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
									{
										if (func_1(&uLocal_309, 1000, 0))
										{
											func_295("AMCH_OCEAN", 30000);
											func_294(1);
											func_46(&uLocal_309);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !func_545(63))
					{
						switch (Local_624.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
									{
										if (func_524(unk_0xD803B885F5E47A62()) && !func_542(unk_0xD803B885F5E47A62()))
										{
											func_295("AMCH_ALTIEXP", 30000);
											func_294(1);
											unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(63))
					{
						if (func_1(&uLocal_309, 1000, 0))
						{
							func_295("AMCH_FLYLOW", 30000);
							func_294(1);
							func_46(&uLocal_309);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if (Local_624.f_3 == 7)
					{
						if (iLocal_609 == 0)
						{
							if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(63))
							{
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_MVS1", 30000);
									func_294(1);
									iLocal_609 = 1;
								}
							}
						}
						else if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(63))
						{
							if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
							{
								func_295("AMCH_MVS2", 30000);
								func_294(1);
								unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
							}
						}
					}
					if (Local_624.f_3 == 14)
					{
						if (iLocal_609 == 0)
						{
							if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(63))
							{
								if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
								{
									func_295("AMCH_BRBL", 30000);
									func_294(1);
									iLocal_609 = 1;
								}
							}
						}
						else if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(63))
						{
							if (func_12(unk_0xD803B885F5E47A62(), 1, 1))
							{
								func_295("AMCH_BRBL2", 30000);
								func_294(1);
								unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_608, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0())
					{
						func_541("AMCH_WARN", func_394(Local_624.f_3), func_393(Local_624.f_3), 30000);
						func_294(0);
						Local_2976.f_8 = unk_0xDD0E7998AE8AD485();
						unk_0x4D7F4CC43D4D0DE3(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x5D96D8530B3D0904(&iLocal_608, iParam0);
					}
				}
				break;
			}
	}
}

void func_541(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 0, iParam3);
}

bool func_542(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_544(9) /*33*/][iParam0], func_543(9));
}

int func_543(int iParam0)
{
	return (iParam0 % 32);
}

int func_544(int iParam0)
{
	return (iParam0 / 32);
}

bool func_545(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

void func_546(int iParam0)
{
	Local_2591[unk_0x57270EE11514DC67() /*12*/].f_3 = iParam0;
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 4);
	}
}

int func_548(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_572(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_163(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_163(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_349(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_571())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_570(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_569())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_106(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	else if (func_562(unk_0xD803B885F5E47A62()) == 3)
	{
		return 0;
	}
	if (func_561(unk_0xD803B885F5E47A62()) != func_102() && func_561(unk_0xD803B885F5E47A62()) == func_88(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_560(func_289()) && !func_343(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_559())
	{
		return 0;
	}
	if (func_314())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_351(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_557())
	{
		return 0;
	}
	if (func_163(unk_0xD803B885F5E47A62(), 0) || func_163(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_163(unk_0xD803B885F5E47A62(), 12) || func_163(unk_0xD803B885F5E47A62(), 14)) || func_163(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_556(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (!func_522() && !Global_2513487)
		{
			return 0;
		}
	}
	if (func_555(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_554())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_386(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_553())
	{
		return 0;
	}
	if (func_551(unk_0xD803B885F5E47A62()) && Global_1590184.f_171)
	{
		return 0;
	}
	if (func_550())
	{
		return 0;
	}
	if (func_355(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (Global_2536130)
	{
		return 0;
	}
	if (Global_1694139)
	{
		return 0;
	}
	if (!func_453(unk_0xD803B885F5E47A62()))
	{
		if (func_549(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return 0;
}

bool func_550()
{
	return Global_1676377.f_474;
}

int func_551(int iParam0)
{
	if (func_552(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_552(int iParam0)
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

int func_553()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_554()
{
	return Global_98796.f_346 > 0;
}

bool func_555(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

int func_556(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_557()
{
	if (func_558() == 0)
	{
		return 1;
	}
	return 0;
}

int func_558()
{
	return Global_1312467.f_18;
}

bool func_559()
{
	return Global_1312877;
}

int func_560(int iParam0)
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
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_561(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_562(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_387(iParam0) && !func_8(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 8));
	bVar2 = func_106(iParam0);
	uVar3 = func_165();
	uVar4 = func_563();
	if ((bVar1 && (func_453(iParam0) || func_413(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_108(iParam0)) && !func_300(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

int func_563()
{
	if ((func_107(unk_0xD803B885F5E47A62(), 21) || func_107(unk_0xD803B885F5E47A62(), 22)) || func_567())
	{
		return 1;
	}
	if (func_565())
	{
		func_564(22);
		return 1;
	}
	return 0;
}

void func_564(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_4), iParam0);
}

int func_565()
{
	if (func_112(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 21)) || func_163(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_566(27);
		}
	}
	return 0;
}

void func_566(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_4), iParam0);
}

int func_567()
{
	return func_568(358, -1);
}

int func_568(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2583656[iParam0 /*3*/][func_203(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_569()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == 5;
}

int func_570(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_571()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 0);
}

bool func_572(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

void func_573()
{
	func_574(&(Local_712.f_534), &Local_712, 27, &(Local_712.f_1), &(Local_712.f_117), Local_624.f_3, 0, 0);
}

void func_574(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_684(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_682() || iParam2 == 28)
	{
		if (func_637(uParam1, iParam2, uParam3, Global_1574185, 0, func_685(), iParam7))
		{
			func_636(1);
			if ((!func_635() && !func_634()) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1))
			{
				if (func_633())
				{
					func_632();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_631(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_630(uParam1, 0, 0);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
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
								if (func_12(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar35 = unk_0x117658E336116132(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_629(iVar35) || Global_2425662[iVar35 /*421*/].f_236 != -1) || func_628(iVar35))
										{
											iVar44 = iVar35;
											if (func_90(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_625(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_109(unk_0xD803B885F5E47A62(), 0) && func_219(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_624())
							{
								if (func_12(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar35 = unk_0x117658E336116132(iVar52);
								}
								else
								{
									iVar35 = func_102();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_623(iVar35) && func_620(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590535[iVar44 /*876*/].f_211.f_6;
								Var38 = { func_615(iVar35) };
								if (iVar35 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_137(iVar35) };
								iVar37 = func_609(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
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
									if (!func_624())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_607(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_283(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_606(iVar35, 0);
								if (bVar34)
								{
									if (func_89(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_605(iParam5))
								{
									func_604(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_604(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x117658E336116132(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar49, iVar35))
							{
								iVar35 = unk_0x117658E336116132(iVar52);
							}
							else
							{
								iVar35 = func_102();
							}
							if (func_623(iVar35))
							{
								if (func_12(unk_0x117658E336116132(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590535[iVar44 /*876*/].f_211.f_6;
									Var38 = { func_615(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_137(iVar35) };
									iVar37 = func_609(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									iVar51 = func_606(iVar35, 1);
									if (bVar34)
									{
										if (func_89(iVar35, 1))
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
									func_587(iVar35, unk_0x6E524813889AECF8(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_584(uParam3, uParam1, iParam2);
						}
						func_46(&(uParam3->f_21));
						func_583();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_582(uParam3, uParam1);
							func_581(uParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_582(uParam3, uParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_577(uParam3))
						{
							Global_1574406 = 1;
						}
						func_575(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x83D8570832F172A7(*uParam1))
					{
						unk_0xD9ACBBA59FD5A09E(7);
						unk_0xEF45C43067063F18(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_583();
			func_631(0);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_575(var uParam0)
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_576(0);
	}
}

void func_576(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_577(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x117658E336116132(uParam0->f_37);
	if (iVar15 != func_102() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_137(iVar15) };
		iVar1 = func_580(uParam0, uParam0->f_37);
		if (func_579(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_578(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_578(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_578(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_578(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_578(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_578(uParam0, iVar0, 0);
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

void func_578(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_579(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

var func_580(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_581(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*uParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(iParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_582(var uParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		unk_0x7E60C62A7CE58FC8(*uParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_35);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_583()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_584(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_102())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_586(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_585(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590535[iVar0 /*876*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_585(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_586(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
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

void func_587(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_603() && iParam4 < func_602())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*uParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_601("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_601(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_601("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(-1);
			func_601("");
			if (uParam3->f_108 == 6)
			{
				func_601("");
			}
			else
			{
				func_601(&sParam5);
			}
			func_592(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_591(uParam3))
			{
				func_590("DPAD_FRIEND");
			}
			else if (func_589(uParam3))
			{
				func_590("DPAD_FRIEND");
			}
			else if (func_588(uParam3))
			{
				func_590("DPAD_CREW");
			}
			else
			{
				func_590("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_588(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_589(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

void func_590(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_591(var uParam0)
{
	if (func_589(uParam0) && func_588(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_592(var uParam0, int iParam1)
{
	if (func_600(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_596(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam1 /*421*/].f_413, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_593())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_36);
	}
}

int func_593()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_594() || func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_594()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_94();
	}
	return func_595(Global_4456448.f_194990);
}

int func_595(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_596(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_597()) && func_257(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_597()
{
	if (func_387(unk_0xD803B885F5E47A62()) || func_599())
	{
		if (!func_598(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_598(int iParam0)
{
	if (func_320(iParam0) == 236 || func_320(iParam0) == 150)
	{
		return func_453(iParam0);
	}
	return 0;
}

int func_599()
{
	switch (func_219(unk_0xD803B885F5E47A62()))
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

int func_600(int iParam0)
{
	if (func_593())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_90(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_597()) && func_259(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_601(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_602()
{
	int iVar0;
	
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_603()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_604(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_603() && iParam3 < func_602())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
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
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*uParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*uParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_601("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_590(sParam16);
				}
				else
				{
					func_601(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_601("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(-1);
				}
				if (func_624())
				{
					func_601("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_104));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_590(&(uParam2->f_104));
					}
					else
					{
						func_601("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 6);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != -1)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_601("");
				}
				if (uParam2->f_108 == 6)
				{
					func_601("");
				}
				else
				{
					func_601(&sParam4);
				}
				func_592(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_601("");
					func_601("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_591(uParam2))
				{
					func_590("DPAD_FRIEND");
				}
				else if (func_589(uParam2))
				{
					func_590("DPAD_FRIEND");
				}
				else if (func_588(uParam2))
				{
					func_590("DPAD_CREW");
				}
				else
				{
					func_590("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_605(int iParam0)
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

int func_606(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_387(iParam0)) && !func_106(iParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(iParam0);
	if (!iVar1 == -1)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_607(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_608(iParam3))
	{
		*fParam1 = (func_285(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_605(iParam3))
	{
		*fParam1 = (func_285(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_608(int iParam0)
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

int func_609(int iParam0)
{
	int iVar0;
	
	iVar0 = func_612(iParam0);
	if (iVar0 == -1)
	{
		func_610(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_610(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_612(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_611(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_611(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_612(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_613(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_613(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_614(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_614(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_102();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_615(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2513218 = { func_137(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_579(Global_2513218))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0))
		{
			return Var0;
		}
		if (func_619(&Global_2513218))
		{
			Global_2513148 = { func_617(iParam0) };
			func_616(&Global_2513148, &Var0);
		}
	}
	return Var0;
}

void func_616(var uParam0, var uParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, uParam1);
}

struct<35> func_617(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_618(iParam0))
	{
		return Global_1312909[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_137(iParam0) };
	unk_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

int func_618(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_619(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_620(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_8(iParam0) || func_622(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_621(iParam0))
	{
		return 0;
	}
	if ((!func_629(iParam0) && Global_2425662[iParam0 /*421*/].f_236 == -1) && !func_628(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_621(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 22);
}

int func_622(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 9));
	}
	return 0;
}

int func_623(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
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
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0 /*876*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_624()
{
	switch (func_219(unk_0xD803B885F5E47A62()))
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
	switch (func_320(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_106(unk_0xD803B885F5E47A62()))
	{
		switch (func_219(unk_0xD803B885F5E47A62()))
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
	if (func_598(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

void func_625(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_629(iVar1) || Global_2425662[iVar1 /*421*/].f_236 != -1) || func_628(iVar1))
				{
					if (func_626(iVar1, iParam1, 0))
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

int func_626(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_102())
	{
		if (!bParam2)
		{
			if (func_627(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0 /*615*/].f_11 != func_102())
		{
			return iParam1 == Global_1628237[iParam0 /*615*/].f_11;
		}
	}
	return 0;
}

int func_627(int iParam0, int iParam1)
{
	if (iParam1 != func_102())
	{
		if (iParam0 != func_102())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 != func_102())
			{
				if (Global_1628237[iParam0 /*615*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_628(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196 != 0;
}

int func_629(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_219(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_630(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_631(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_632()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1))
	{
		if (func_301())
		{
			func_288();
		}
	}
}

int func_633()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 0) && func_301())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, 1) && func_301())
	{
		return 1;
	}
	return 0;
}

int func_634()
{
	if (func_301())
	{
		if (func_54(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_635()
{
	if (func_301())
	{
		if (func_67(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_636(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_637(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_681(iParam1);
	fVar7 = func_680();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_679())
		{
			if (func_678() > 0 && Global_1574187)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar7);
				unk_0x3584F71E5CA29322(18);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_667())
		{
			func_666(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_666(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_678() == 1)
		{
			func_665(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_666(uParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_678() == 0 && !bParam5))
		{
			func_666(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_664();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(18);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_664();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar7);
				if (func_665(bVar6, uParam0, 0))
				{
					func_630(uParam0, 0, 0);
					uVar4 = func_662(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_660(iParam1) };
					if (bParam4)
					{
						func_657(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_651(uParam0, func_654(uParam2), func_652(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_645(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(uParam6))
						{
							sVar9 = sParam6;
						}
						func_643(uParam0, sVar9, func_644(), -1);
					}
					else if (func_593())
					{
						uParam2->f_34 = Global_1574186;
						func_657(uParam0, uVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_638(iParam1);
						uParam2->f_34 = Global_1574186;
						func_657(uParam0, uVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_638(iParam1);
						func_657(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				unk_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_638(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_642())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
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
		
		case 26:
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
			if (func_641(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_640(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_639(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_220())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_639(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_640(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_641(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_642()
{
	return Global_4456448.f_1 == 0;
}

void func_643(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_590(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_590("");
		if (iParam3 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_644()
{
	switch (func_219(unk_0xD803B885F5E47A62()))
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

char* func_645(var uParam0)
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
	switch (func_219(unk_0xD803B885F5E47A62()))
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
			if (func_647())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_256(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_256(1))
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
			if (func_646(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_646(int iParam0)
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

bool func_647()
{
	return (func_650() && func_648(func_649()));
}

int func_648(int iParam0)
{
	return func_259(iParam0, 1);
}

int func_649()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_35;
}

bool func_650()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_651(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(uParam2))
		{
			func_590(uParam1);
		}
		else if (func_320(unk_0xD803B885F5E47A62()) == 133)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(uParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_590("");
		if (iParam3 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_652(var uParam0)
{
	int iVar0;
	
	iVar0 = func_320(unk_0xD803B885F5E47A62());
	if (func_653())
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
			switch (func_319())
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

bool func_653()
{
	return Global_1590408;
}

char* func_654(var uParam0)
{
	int iVar0;
	
	iVar0 = func_320(unk_0xD803B885F5E47A62());
	if (func_653())
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
			if (func_656() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_656() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_319())
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
			if (func_655() == 1)
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

int func_655()
{
	return Global_2537071.f_5048;
}

int func_656()
{
	if (func_320(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_657(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_601(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7ACC3006A87F8B39(uParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_590(sParam1);
		}
		if (func_679() && iParam6)
		{
			if (func_659())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_590(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_658(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_64())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_658(int iParam0)
{
	if (func_641(iParam0) || func_640(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_659()
{
	return Global_1574187;
}

struct<4> func_660(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_661(unk_0xD803B885F5E47A62()) || func_639(unk_0xD803B885F5E47A62()))
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
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_593() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_661(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

char* func_662(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_593() || unk_0xEA6BC48857E0AC4C(uParam1)))
	{
		uVar0 = func_663();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
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
			case 26:
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
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_663()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_664()
{
	Global_42351 = 1;
}

bool func_665(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*uParam1);
}

void func_666(var uParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_583();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			unk_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0xE17FDF9E3068281B(uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_33, 0))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_33), 0);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_667()
{
	if (func_677())
	{
		return 0;
	}
	if (func_569())
	{
		return 0;
	}
	if (!func_675())
	{
		return 0;
	}
	if (!func_557())
	{
		return 0;
	}
	if (func_674(8, -1))
	{
		return 0;
	}
	if (func_678() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_314())
	{
		return 0;
	}
	else if (!func_350(unk_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_673(1) || func_671(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_670() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_100(unk_0xD803B885F5E47A62()) && !func_670())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_669(0))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_668(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_668(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_669(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, iParam0);
}

bool func_670()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 0));
}

int func_671(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_672(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0, 25) || unk_0x06F8112AA79C53D9(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 19) || (!bParam0 && unk_0x7FEE810EE9E768EB(0, 19)))
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0, 166) || unk_0x06F8112AA79C53D9(0, 167)) || unk_0x06F8112AA79C53D9(0, 168)) || unk_0x06F8112AA79C53D9(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0, 166) || unk_0x7FEE810EE9E768EB(0, 167)) || unk_0x7FEE810EE9E768EB(0, 168)) || unk_0x7FEE810EE9E768EB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_672(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_673(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_674(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, iParam0);
}

int func_675()
{
	if (func_676())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_676()
{
	return Global_1312440;
}

bool func_677()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_678()
{
	return Global_1377170.f_68;
}

int func_679()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_680()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_682()
{
	if (func_685())
	{
		return 1;
	}
	if (func_7(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_653())
	{
		return 1;
	}
	if (func_387(unk_0xD803B885F5E47A62()))
	{
		switch (func_320(unk_0xD803B885F5E47A62()))
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
				if (!func_683(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_683(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_683(unk_0xD803B885F5E47A62()))
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

bool func_683(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

int func_684(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_387(unk_0xD803B885F5E47A62()) && !func_106(unk_0xD803B885F5E47A62())) && !func_598(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_112(unk_0xD803B885F5E47A62(), 0) && func_106(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_562(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_685()
{
	if (func_686(unk_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_686(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

void func_687()
{
	if (Local_2591[unk_0x57270EE11514DC67() /*12*/].f_3 == 3)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 8))
		{
			if ((!func_7(unk_0xD803B885F5E47A62()) && !func_162(unk_0xD803B885F5E47A62())) && !func_400(unk_0xD803B885F5E47A62()))
			{
				func_399();
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 9))
		{
			if ((func_7(unk_0xD803B885F5E47A62()) || func_162(unk_0xD803B885F5E47A62())) || func_400(unk_0xD803B885F5E47A62()))
			{
				unk_0xD09557189D8C2FB1();
				Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4 = 0;
				unk_0x5D96D8530B3D0904(&iLocal_315, 9);
			}
		}
	}
}

void func_688()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_319)))
	{
		iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_319));
		if (unk_0x40B8C182D63932FC(iVar0))
		{
			func_689(iVar0, 2);
		}
	}
	iLocal_319++;
	if (iLocal_319 >= unk_0x54EABC0DD106045B())
	{
		iLocal_319 = 0;
	}
}

void func_689(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1574650.f_18)))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_2, iParam0))
	{
		if (Global_1574650 < iParam1 && unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 1))
		{
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 0);
			return;
		}
		if (Global_1574650 != 0)
		{
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 1);
		}
		Global_1574650 = 0;
		Global_1574650.f_2 = 0;
	}
	unk_0x5D96D8530B3D0904(&(Global_1574650.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_690(iParam0))
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
		Global_1574650++;
	}
}

bool func_690(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 10);
}

void func_691(int iParam0, int iParam1)
{
	Local_2591[iParam0 /*12*/] = iParam1;
}

int func_692()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_712.f_534[iVar0 /*42*/].f_1 = func_102();
		iVar0++;
	}
	return 1;
}

int func_693()
{
	return Local_624.f_0;
}

int func_694(int iParam0)
{
	return Local_2591[iParam0 /*12*/];
}

void func_695()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 6))
	{
		func_718();
		unk_0x0674E58A79778E99(&(Global_1574650.f_1), 6);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 7))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 4) || unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 16))
		{
			if (((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_301()) && func_12(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 7);
				func_295("FME_PASINT", 30000);
				func_294(1);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 17))
		{
			if (func_165() && !func_164())
			{
				unk_0x0674E58A79778E99(&(Global_1574650.f_1), 17);
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 16);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 23))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_12(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !unk_0xFEBC1E4EC9E001F0())
		{
			if (func_716())
			{
				func_295("AMEV_GA_RP", -1);
				if (func_219(unk_0xD803B885F5E47A62()) != 200)
				{
					func_294(1);
				}
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 23);
			}
		}
	}
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_413(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(1344549371))
			{
				unk_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (unk_0x70305AA977EFE679(1344549371))
		{
			unk_0x64366F76B4845277(1344549371);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 9))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_301()) && func_12(unk_0xD803B885F5E47A62(), 1, 1)) && !func_163(unk_0xD803B885F5E47A62(), 21)) && !func_163(unk_0xD803B885F5E47A62(), 25))
		{
			unk_0x0674E58A79778E99(&(Global_1574650.f_1), 9);
			func_715(0);
			func_295("FME_TBL00", -1);
			func_294(1);
		}
	}
	if (func_387(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 18))
		{
			if ((func_163(unk_0xD803B885F5E47A62(), 21) && unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 20)) && !unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 19))
			{
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 18);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 18))
		{
			if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_301()) && func_12(unk_0xD803B885F5E47A62(), 1, 1)) && unk_0x0F1CCD77290EE12F()) && !Global_2537071.f_5057)
			{
				unk_0x0674E58A79778E99(&(Global_1574650.f_1), 18);
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 19);
				func_295("AMTT_RPAS", -1);
				func_294(1);
			}
		}
	}
	if (((((func_387(unk_0xD803B885F5E47A62()) && !func_8(unk_0xD803B885F5E47A62())) && func_320(unk_0xD803B885F5E47A62()) != 146) && !func_7(unk_0xD803B885F5E47A62())) && !func_162(unk_0xD803B885F5E47A62())) && !func_705())
	{
		if (func_412(func_320(unk_0xD803B885F5E47A62())))
		{
			unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 22))
		{
			unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 22);
		}
		if (func_453(unk_0xD803B885F5E47A62()) || func_406())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 10))
			{
				if (func_704(func_320(unk_0xD803B885F5E47A62())))
				{
					if (func_263(0) && !Global_2391045)
					{
						unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_410(1);
						unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 14);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 10);
			}
		}
		if (func_413(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 11))
			{
				if (!Global_98796.f_8)
				{
					unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 12);
					func_408(1);
				}
				if (!func_703())
				{
					unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 13);
					func_407();
				}
				if (!Global_2391045)
				{
					unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 14);
					if (func_263(0) && !Global_2391045)
					{
						unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 9);
					}
					func_410(1);
				}
				unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 11);
			}
		}
		else
		{
			func_701(0);
		}
	}
	else
	{
		func_701(1);
	}
	func_696();
	if (func_405(func_320(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 21))
	{
		unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 21);
	}
	if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 21)) || func_163(unk_0xD803B885F5E47A62(), 25))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 10))
		{
			unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 10);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 10))
	{
		unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 10);
	}
}

void func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_301())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_545(iVar2))
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
				if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 26))
				{
					unk_0x0674E58A79778E99(&(Global_1574650.f_1), 26);
				}
				func_697(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 26))
	{
		func_46(&(Global_1574650.f_22));
		unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 26);
	}
}

void func_697(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1574650.f_22)))
	{
		func_2(&(Global_1574650.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574650.f_22), iParam1, 0))
	{
		if (func_678() > 0)
		{
			func_700(iParam0);
			if (func_292("AMEV_LBD_HELP"))
			{
				unk_0xA37A90C62806D848(1);
			}
			func_46(&(Global_1574650.f_22));
		}
	}
	else
	{
		func_699(0);
		func_698();
	}
}

void func_698()
{
	Global_2537071.f_4532 = 0;
}

void func_699(int iParam0)
{
	Global_1377170.f_68 = iParam0;
}

void func_700(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_103(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_701(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 11) || (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 10) && iParam0)) || (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 22) && iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 12))
		{
			unk_0x0674E58A79778E99(&(Global_1574650.f_1), 12);
			func_408(0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 13))
		{
			unk_0x0674E58A79778E99(&(Global_1574650.f_1), 13);
			func_702();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_112(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0x0674E58A79778E99(&(Global_1574650.f_1), 14);
			func_410(0);
		}
		unk_0x0674E58A79778E99(&(Global_1574650.f_1), 11);
		unk_0x0674E58A79778E99(&(Global_1574650.f_1), 10);
		unk_0x0674E58A79778E99(&(Global_1574650.f_1), 22);
	}
}

void func_702()
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_4962), 0);
}

bool func_703()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4962, 0);
}

int func_704(int iParam0)
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
			return func_413(unk_0xD803B885F5E47A62());
		
		case 133:
			return (func_406() || func_5(func_319()));
		
		default:
	}
	return 0;
}

int func_705()
{
	if (((((((((func_714() || func_713()) || func_712()) || func_314()) || (func_711() && !unk_0xA14BB9332558B949())) || (func_708() && !func_707())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_706() == 2 && !unk_0xA14BB9332558B949()))
	{
		return 1;
	}
	return 0;
}

int func_706()
{
	return Global_968397;
}

bool func_707()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 27);
}

int func_708()
{
	if (func_710() || func_709())
	{
		return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_98 == 8;
	}
	return 0;
}

var func_709()
{
	return Global_2450632.f_635;
}

bool func_710()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_711()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 5);
}

bool func_712()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

bool func_713()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

bool func_714()
{
	return Global_2450632.f_598;
}

void func_715(int iParam0)
{
	int iVar0;
	
	iVar0 = func_207(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 1))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 1);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 2))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 3))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 3);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 4))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 4);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 6))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 6);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 7))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 7);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 8))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 9))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 9);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 10))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 10);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 11))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 11);
		}
	}
	func_198(2534, iVar0, -1, 1, 0);
}

int func_716()
{
	int iVar0;
	
	if (!func_47(&(Global_1574650.f_15)))
	{
		func_2(&(Global_1574650.f_15), 0, 0);
		Global_1574650.f_17 = 0;
	}
	else if (func_1(&(Global_1574650.f_15), 1000, 0))
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Global_1574650.f_17)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Global_1574650.f_17));
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_717(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_38(unk_0xD803B885F5E47A62()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574650.f_17++;
		if (Global_1574650.f_17 >= 32)
		{
			Global_1574650.f_17 = 0;
			func_46(&(Global_1574650.f_15));
		}
	}
	return 0;
}

int func_717(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_389() != 0)
	{
		return 0;
	}
	if (!func_202(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0 /*876*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_718()
{
	unk_0x34D79252800B23FF(5);
	func_720();
	unk_0x51B096AAC60548C1(1f);
	unk_0x0674E58A79778E99(&(Global_1574650.f_1), 8);
	func_719();
}

void func_719()
{
	if (Global_1671757)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1671758, 0))
		{
			unk_0x0674E58A79778E99(&Global_2546092, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1671758, 1))
		{
			unk_0x0674E58A79778E99(&Global_2546092, 1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1671758, 5))
		{
			unk_0x0674E58A79778E99(&Global_2546092, 5);
		}
		if (unk_0x76395FF5E8D5E643(-355737150))
		{
			unk_0x1BA7FCEAFCE8D46E(-355737150, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-580979506))
		{
			unk_0x1BA7FCEAFCE8D46E(-580979506, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-1426452475))
		{
			unk_0x1BA7FCEAFCE8D46E(-1426452475, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(745417724))
		{
			unk_0x1BA7FCEAFCE8D46E(745417724, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-1305304906))
		{
			unk_0x1BA7FCEAFCE8D46E(-1305304906, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-1543175077))
		{
			unk_0x1BA7FCEAFCE8D46E(-1543175077, 1, 0, 0);
		}
		if (unk_0x76395FF5E8D5E643(-811770997))
		{
			unk_0x1BA7FCEAFCE8D46E(-811770997, 1, 0, 0);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

void func_720()
{
	if (unk_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == unk_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

int func_721()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2537071.f_4960)
	{
		return 0;
	}
	if ((!func_47(&(Local_624.f_39)) && !func_47(&(Local_624.f_41))) && !func_47(&(Local_624.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x2B6E0A53779D29EA();
	if (func_47(&(Local_624.f_41)))
	{
		iVar0 = func_722(&uVar2, &(Local_624.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_624.f_39)))
	{
		iVar0 = func_722(&uVar2, &(Local_624.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_624.f_43)))
	{
		iVar0 = func_722(&uVar2, &(Local_624.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_722(var uParam0, var uParam1)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*uParam0, *uParam1));
}

int func_723()
{
	if (func_724())
	{
		return 1;
	}
	return 0;
}

bool func_724()
{
	return Global_1574650.f_24;
}

int func_725()
{
	var uVar0;
	
	func_729(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_728())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_727())
	{
		return 1;
	}
	if (func_726(159))
	{
		if (!func_714())
		{
			return 1;
		}
	}
	if (func_726(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_415() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_415()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_726(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_727()
{
	return Global_2460680;
}

bool func_728()
{
	return Global_2450632.f_593;
}

void func_729(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_730(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_730(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x9539D44F3E4492F6(Var0.f_1);
			if (unk_0xC844350D5D58C99A(uVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					uVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(uVar4, Var0.f_2) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_731(uVar4, &bVar5))
						{
							unk_0x920D29D81E211607(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x046C362CF15F1935(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_731(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_732()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_733()
{
	int iVar0;
	
	if (func_725())
	{
		Local_2976.f_5 = 5;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_624.f_2, 0))
	{
		Local_2976.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_2976.f_5 = 1;
	}
	else
	{
		Local_2976.f_5 = 2;
	}
	Local_2976.f_0 = Local_624.f_52;
	Local_2976.f_1 = Local_624.f_53;
	Local_2976.f_4 = Local_624.f_66;
	Local_2976.f_3 = Local_624.f_51;
	Local_2976.f_10 = (unk_0xDD0E7998AE8AD485() - Local_2976.f_9);
	if (!Global_262145.f_11500)
	{
		if (Local_2976.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x57270EE11514DC67() != -1)
		{
			func_769(Local_2976, Local_624.f_3, Local_2591[unk_0x57270EE11514DC67() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_315, 4))
	{
		unk_0x55D0A2DB35045A35(iLocal_323);
		unk_0x0674E58A79778E99(&iLocal_315, 4);
	}
	unk_0x43A06902454A1172(iLocal_323);
	unk_0x43A06902454A1172(iLocal_324);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iLocal_610, iVar0) && iLocal_611[iVar0] != -1) && !unk_0x8AA6DC470ABA63A2(iLocal_611[iVar0]))
		{
			unk_0x55D0A2DB35045A35(iLocal_611[iVar0]);
			unk_0x43A06902454A1172(iLocal_611[iVar0]);
		}
		iVar0++;
	}
	func_396();
	func_475(1, 1);
	unk_0x921B659AAEB55BCA(0);
	func_547(0);
	func_403(Local_624.f_3, 0);
	func_734(133, 0, Local_624.f_37 == 6);
	func_402(23, 0);
	if (func_306() >= 0f)
	{
		unk_0xF5637CC664BEAAD0(0f, 0, 21);
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_315, 9))
	{
		unk_0xD09557189D8C2FB1();
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_734(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xD803B885F5E47A62() != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 13))
		{
			unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 13);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 14))
		{
			unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1), 14);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 21))
	{
		unk_0x0674E58A79778E99(&(Global_1574650.f_1), 21);
	}
	func_765();
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_764(func_320(unk_0xD803B885F5E47A62()));
		func_402(func_421(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0xD803B885F5E47A62() != -1) && func_763(unk_0xD803B885F5E47A62()) >= 12)
		{
			func_762(2546, -1);
			iVar1 = func_207(2546, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x5D96D8530B3D0904(&Global_1574676, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x5D96D8530B3D0904(&Global_1574676, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x5D96D8530B3D0904(&Global_1574676, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x5D96D8530B3D0904(&Global_1574676, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x5D96D8530B3D0904(&Global_1574676, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x5D96D8530B3D0904(&Global_1574676, 5);
			}
		}
		func_761();
		func_760();
		func_759();
		if ((!func_108(unk_0xD803B885F5E47A62()) && !func_300(unk_0xD803B885F5E47A62())) && !func_454())
		{
			func_743();
		}
		func_742();
		if (!unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 0) && !unk_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 1))
		{
			func_718();
		}
		func_741();
		unk_0x0674E58A79778E99(&(Global_2537071.f_1746), 2);
		func_740();
		func_167();
	}
	if (unk_0x70305AA977EFE679(1344549371))
	{
		unk_0x64366F76B4845277(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0xD803B885F5E47A62() != -1 && !func_163(unk_0xD803B885F5E47A62(), 21)) && !func_163(unk_0xD803B885F5E47A62(), 25)) && !func_112(unk_0xD803B885F5E47A62(), 0))
		{
			func_410(0);
			func_408(0);
			if (!bParam1)
			{
				func_739();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2462854 = -1;
			func_48(26, -1);
		}
	}
	if (!func_735())
	{
		Global_2513109 = 1;
	}
}

int func_735()
{
	if ((((((!func_658(unk_0xD803B885F5E47A62()) && !func_639(unk_0xD803B885F5E47A62())) && func_320(unk_0xD803B885F5E47A62()) != 146) && !func_738()) && !func_737()) && !func_736(Global_4456448.f_232883)) && !func_92())
	{
		return 0;
	}
	return 1;
}

bool func_736(int iParam0)
{
	return iParam0 == 57;
}

int func_737()
{
	if (Global_4456448.f_194990 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_738()
{
	if ((Global_4456448 == 0 && unk_0xA14BB9332558B949()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_232883 > 0) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 15)) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 18)) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 19)) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 29)) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 28)) || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_739()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0x0674E58A79778E99(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_740()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 1))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4961), 1);
	}
	if (Global_2537071.f_4961 > 0)
	{
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_KILL");
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
		unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xBEF52C1D400C0A44(1);
		Global_2537071.f_4961 = 0;
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
		if (!unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "am_pi_menu"))
		{
			if (Global_2537071.f_4971 > -1)
			{
				unk_0x43A06902454A1172(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
		}
	}
}

void func_741()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574650 = { Var0 };
}

void func_742()
{
	var uVar0;
	
	Global_1319101 = uVar0;
}

void func_743()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_757();
	func_746(1, 1, 0);
	func_744();
}

void func_744()
{
	func_745(0, 0);
}

void func_745(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_746(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_756();
	}
	if (!bParam2)
	{
		func_748(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_747(0);
	func_170();
}

void func_747(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_748(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_755())
		{
			func_754();
		}
		Global_2405072.f_706.f_518 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_752();
		func_450(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_749();
	}
}

void func_749()
{
	if (func_755() && !func_751())
	{
		func_754();
	}
	if (func_751())
	{
		func_750();
	}
	else
	{
		func_752();
		func_450(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_750()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

int func_751()
{
	if ((Global_2405072.f_1744 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

void func_752()
{
	if (func_755() && !func_751())
	{
		func_754();
	}
	func_753();
	Global_2405072.f_706 = 0;
}

void func_753()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_754()
{
	if (func_751())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_755()
{
	if ((Global_2405072.f_1745 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_756()
{
	unk_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_757()
{
	func_758();
	Global_2405072.f_2254 = 0;
}

void func_758()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_759()
{
	Global_2537071.f_4962 = 0;
}

void func_760()
{
	if (unk_0xD803B885F5E47A62() != -1)
	{
		Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1 = 0;
	}
}

void func_761()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != -1)
	{
		Global_1628237[iVar0 /*615*/] = -1;
	}
}

void func_762(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, func_203(iParam1), 0);
	iVar0++;
	if (!func_206(iParam0))
	{
		func_198(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_199(iParam0, iVar0, iParam1, 1);
	}
}

int func_763(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_764(int iParam0)
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
			if (func_413(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_765()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 3) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 4))
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x82E51BCA72537B6C(800);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 5))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_1735), 5);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 3))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_1735), 3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 4))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_1735), 4);
	}
	func_768(0);
	func_767(0);
	func_766(0);
}

void func_766(int iParam0)
{
	if (Global_2537071.f_4520 != iParam0)
	{
		Global_2537071.f_4520 = iParam0;
	}
}

void func_767(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_768(int iParam0)
{
	if (Global_2537071.f_4517 != iParam0)
	{
		Global_2537071.f_4517 = iParam0;
	}
}

void func_769(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xBB0808A181D4745C();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76622)
	{
		if (unk_0x7F8A39872A07D2CE(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x9534DF96382FA79D(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, func_770()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x68F74D8294339590(&Var14);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0xB4378BE34ED99E2A(&Var28);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xE20208601F5C75BD(&Var52);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
		{
			unk_0xAE4A25D32825E179(&Param0);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xAD412B113AE8E374(&Var66);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xAFD26850D8F9D951(&Var79);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x2320D6A9337F16FD(&Var93);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x8EFE08564F2B2A96(&Var107);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x99DAD54B2D0F4291(&Var123);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xC6463777F834DA6F(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x9563472595C7B3E7(&Var150);
			}
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x9BF192C4E1EF8A54(&Var164);
		}
	}
}

char* func_770()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_771(struct<21> Param0)
{
	int iVar0;
	
	func_780(func_781(Param0.f_0), Param0);
	unk_0x3A4967AE7C71F999(func_779(9));
	unk_0x28E5F00F131890E3(func_778(9));
	func_775(0, -1, 0);
	func_773(133);
	unk_0x9752E7BAEABA939E(&Local_624, 88);
	unk_0x35B62793EAE9ADDF(&Local_2591, 385);
	if (!func_772())
	{
		func_733();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		unk_0xCB466C2A425A9168(&(Local_624.f_52), &(Local_624.f_53));
	}
	Local_2976.f_2 = unk_0x981819F6C45DDB49();
	unk_0x256D93AFAE851A7A(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_611[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_772()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_728())
		{
			return 0;
		}
		if (func_726(157))
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

void func_773(int iParam0)
{
	func_741();
	func_774();
	func_759();
	Global_1574650.f_4 = iParam0;
	Global_1574650.f_5 = iParam0;
	func_420(iParam0, -1);
	func_27(&(Global_1574650.f_18), 0, 0);
	Global_2537071.f_4588 = 0;
	Global_2461747[0] = func_102();
	Global_2461747[1] = func_102();
	Global_2461747[2] = func_102();
	Global_2461747[3] = func_102();
	Global_2461747[4] = func_102();
	func_167();
	if (!func_560(func_289()))
	{
		func_288();
	}
	if (func_165() && !func_164())
	{
		unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 16);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1574650.f_1), 17);
	}
}

void func_774()
{
	var uVar0;
	
	Global_1574675 = uVar0;
}

int func_775(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_777();
			}
			else
			{
				return 0;
			}
		}
		if (!func_776())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0;
					}
				}
				if (func_728())
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0;
					}
				}
				if (func_726(157))
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_777();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_777();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_777();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_776()
{
	return Global_1312854;
}

void func_777()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_778(int iParam0)
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
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_779(int iParam0)
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
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

void func_780(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_777();
	}
	unk_0x37AD2AB54480FA6A(uParam0, 0, Param1.f_16);
}

int func_781(int iParam0)
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
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
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
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
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
		
		case 130:
			return 32;
		
		case 131:
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
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}


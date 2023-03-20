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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<9> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_53[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_100 = 0;
	var uLocal_101[2] = { 0, 0 };
	float fLocal_104 = 0f;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	struct<67> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203 = 0;
	struct<261> Local_204[4];
	char* sLocal_1249[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1263 = NULL;
	int iLocal_1264 = 0;
	int iLocal_1265 = 0;
	int iLocal_1266 = 0;
	var uLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	char* sLocal_1272 = NULL;
	var uLocal_1273 = 16;
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
	int iLocal_1438 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_43 = 145;
	iLocal_100 = -1;
	fLocal_104 = 0f;
	Local_106 = { 0f, 0f, 0f };
	Local_110 = { 0f, 0f, 0f };
	fLocal_113 = 0f;
	iLocal_203 = 1;
	sLocal_1263 = "";
	iLocal_1266 = -1;
	iLocal_1269 = -1;
	iLocal_1271 = -1;
	iLocal_1438 = -1;
	if (!func_262(32))
	{
		iLocal_37 = Global_101154.f_8739.f_128;
		if (iLocal_37 == 2)
		{
			unk_0x26545538B51562AD(&iLocal_105, 10);
			Local_110 = { func_261(25) };
			fLocal_113 = func_260(25);
			if (func_259(&Local_114, 25))
			{
				if (!unk_0xF426A5DE932B3BEE(iLocal_105, 14))
				{
					unk_0x26545538B51562AD(&iLocal_105, 14);
				}
			}
		}
	}
	else
	{
		func_257("AM_H_PREP8", 2, 0, -1, 10000, 3, 0, 0, 0);
		Global_101154.f_8739.f_128 = iLocal_37;
	}
	if (unk_0x524AF15206846700(82))
	{
		if (unk_0x998ABBAD6623E9BD() == 2)
		{
			func_248(0);
			func_246(32, 1);
		}
		else
		{
			func_246(32, 0);
		}
	}
	func_241(1);
	while (true)
	{
		if (func_240(69))
		{
			func_236("AM_H_PREP8", 1);
			func_246(32, 0);
		}
		if (!func_234(1))
		{
			if (func_233(unk_0x27D769C59BC9D030()))
			{
				func_226();
				func_219();
				func_218();
				func_207();
				switch (iLocal_37)
				{
					case 0:
						func_132();
						break;
					
					case 2:
						func_131();
						break;
					
					case 3:
						func_122();
						break;
					
					case 4:
						func_15(12);
						break;
					
					case 5:
						break;
					
					default:
						break;
				}
				func_7();
			}
			else
			{
				func_1(46, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!func_2(func_3(iParam0)) && !Global_99796) && !unk_0xF426A5DE932B3BEE(iLocal_105, 15))
			{
				unk_0x26545538B51562AD(&iLocal_105, 15);
				unk_0x5BD150B52CE8D356(1);
			}
		}
		else if ((unk_0x46768B1495288824() && !Global_99796) && !unk_0xF426A5DE932B3BEE(iLocal_105, 15))
		{
			unk_0x26545538B51562AD(&iLocal_105, 15);
			unk_0x5BD150B52CE8D356(1);
		}
	}
}

bool func_2(var uParam0)
{
	unk_0x66F753896FC4EEC3(uParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

var func_3(int iParam0)
{
	return sLocal_53[iParam0];
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	unk_0xF17F4B0641AB2DE1(&(uLocal_101[func_5(iParam0)]), iVar0);
}

int func_5(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_6(int iParam0)
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

void func_7()
{
	if (((unk_0xF426A5DE932B3BEE(iLocal_105, 0) && !unk_0xF426A5DE932B3BEE(iLocal_105, 1)) && !unk_0xF426A5DE932B3BEE(iLocal_105, 14)) && func_12())
	{
		if (func_11(0, 172, 0) || func_11(0, 173, 0))
		{
			iLocal_1271 = unk_0xA0F74982C6AAA9D4();
		}
		if (iLocal_1271 != -1)
		{
			if ((unk_0xA0F74982C6AAA9D4() - iLocal_1271) < 200)
			{
				iLocal_43 = func_8();
			}
			else
			{
				iLocal_1271 = -1;
			}
		}
	}
	else
	{
		iLocal_43 = 145;
		iLocal_1271 = -1;
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0;
	iVar3 = 145;
	if (Global_69489)
	{
		iVar3 = 145;
	}
	else if (unk_0x4C3CEC038B6637D7(Global_14394) == 1)
	{
		if (func_10())
		{
			if (func_9())
			{
				iVar6 = 0;
				unk_0x8CED8F78CC31BEF2(Global_14394, "GET_CURRENT_SELECTION");
				uVar0 = unk_0xEF0E4A8ABAA0D524();
				iVar4 = unk_0xA0F74982C6AAA9D4();
				while ((!unk_0x20B35B8C39C5787D(uVar0) && iVar6 == 0) && unk_0x4C3CEC038B6637D7(Global_14394) == 1)
				{
					unk_0x4EDE34FBADD967A6(0);
					iVar5 = unk_0xA0F74982C6AAA9D4();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = unk_0x200C167A17C879D9(uVar0);
				if (iVar1 > 147 || iVar1 < 0)
				{
					iVar1 = 147;
				}
				iVar2 = Global_14419[iVar1];
				iVar3 = iVar2;
				if (unk_0x4C3CEC038B6637D7(Global_14394) == 0)
				{
					iVar3 = 145;
				}
				if (iVar6 == 1)
				{
					iVar3 = 145;
				}
			}
			else
			{
				iVar3 = 145;
			}
		}
		else
		{
			iVar3 = 145;
		}
	}
	else
	{
		iVar3 = 145;
	}
	return iVar3;
}

int func_9()
{
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (unk_0xD32535FA4397160F(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x117D586920E8F7BA(iParam0, iParam1) || (iParam2 == 1 && unk_0x71D2CBF04FD5E207(iParam0, iParam1)))
	{
		if (unk_0xDFCB321F1D24137F())
		{
			if (unk_0x35F8042CFBC340F9() == 0 || (unk_0xDEDA6095A64A34C2() && unk_0xE1834019C3CC3C33(2)))
			{
				return 0;
			}
		}
		if (unk_0x1E114237D972903B() || unk_0xB5830E534335F40B())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if (func_14(0) && func_13())
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (unk_0xD32535FA4397160F(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
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

void func_15(int iParam0)
{
	func_104();
	if (iLocal_40 == 0)
	{
		switch (iLocal_41)
		{
			case 0:
				func_103(1);
				uLocal_1267 = unk_0x9A64FC8B83855E3B("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_1268 = unk_0xA0F74982C6AAA9D4() + 3000;
				if (!unk_0xF426A5DE932B3BEE(iLocal_105, 10))
				{
					func_87();
				}
				func_86(iParam0, 1);
				iLocal_41 = 1;
				break;
			
			case 1:
				if (unk_0xA0F74982C6AAA9D4() > iLocal_1268)
				{
					if (unk_0x4C3CEC038B6637D7(uLocal_1267))
					{
						unk_0x8CED8F78CC31BEF2(uLocal_1267, "SHOW_MISSION_PASSED_MESSAGE");
						func_85("M_FB4P3_P");
						func_85("M_FB4P3");
						unk_0xD2DC8221939F80F7(100);
						unk_0x6A784D1EF2D72A23(1);
						unk_0xD2DC8221939F80F7(0);
						unk_0x6A784D1EF2D72A23(1);
						unk_0x7E5FA681CB7A2EF7();
						iLocal_1268 = unk_0xA0F74982C6AAA9D4() + 10000;
						func_83(0);
						iLocal_41 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0x4C3CEC038B6637D7(uLocal_1267) && unk_0x5980E518D8F36994())
				{
					if (unk_0xA0F74982C6AAA9D4() < iLocal_1268)
					{
						unk_0xFF51FA5E68E9F7D4(uLocal_1267, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (unk_0xA0F74982C6AAA9D4() < iLocal_1268 + 100)
					{
						unk_0x8CED8F78CC31BEF2(uLocal_1267, "TRANSITION_OUT");
						unk_0x7E5FA681CB7A2EF7();
						iLocal_1268 = (iLocal_1268 - 100);
					}
					else if (unk_0xA0F74982C6AAA9D4() < iLocal_1268 + 500)
					{
						unk_0xFF51FA5E68E9F7D4(uLocal_1267, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_41 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0x4C3CEC038B6637D7(uLocal_1267))
				{
					unk_0xBBDCA990E9FC1AE1(&uLocal_1267);
				}
				func_103(0);
				if (iLocal_42 == 2)
				{
					func_82(108, 0);
				}
				if (func_80(iLocal_109))
				{
					unk_0x37B592C0F74990D2(iLocal_109, 1);
				}
				func_76("M_FHPE", func_77());
				func_73(2, 0);
				break;
			}
	}
	func_16();
}

void func_16()
{
	int iVar0;
	
	if (!unk_0xF426A5DE932B3BEE(iLocal_105, 2))
	{
		if (!func_72(0f, 0f, 0f, Local_110, 0))
		{
			if (func_71(unk_0x27D769C59BC9D030(), Local_110, 100f) && !func_70())
			{
				if (func_80(func_69(25)))
				{
					iLocal_109 = func_69(25);
					unk_0xAF3355298F537BB0(iLocal_109, 1, 1);
					if (func_80(iLocal_109))
					{
						if (!unk_0xE8E046017EE675F2(iLocal_109, "GetawayVehicleValid"))
						{
							if (unk_0xBC2F3726EAB9B952(iLocal_109, "GetawayVehicleValid", 1))
							{
							}
						}
						unk_0x26545538B51562AD(&iLocal_105, 0);
						unk_0x26545538B51562AD(&iLocal_105, 2);
					}
				}
				else if (!func_68(25, 0))
				{
					if (!func_80(func_69(25)))
					{
						func_64(1);
					}
				}
			}
			else if (func_80(iLocal_109))
			{
				if (!func_71(unk_0x27D769C59BC9D030(), Local_110, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!func_72(0f, 0f, 0f, Local_110, 0))
		{
			if (!func_71(unk_0x27D769C59BC9D030(), Local_110, 100f))
			{
				if (func_80(iLocal_109))
				{
					if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_109, 0))
					{
						func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
						unk_0xF17F4B0641AB2DE1(&iLocal_105, 2);
						unk_0xBC513CF9473E6605(iLocal_109, 0);
						func_19(&iLocal_109);
						unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
					}
					else
					{
						func_64(0);
					}
				}
				else if (!func_68(25, 0))
				{
					func_64(1);
				}
			}
			else if (!func_68(25, 0))
			{
				if (!func_80(iLocal_109))
				{
					func_64(1);
				}
			}
			else if (!func_80(iLocal_109))
			{
				iVar0 = func_69(25);
				if (func_80(iVar0) && iVar0 != iLocal_109)
				{
					iLocal_109 = iVar0;
				}
			}
		}
		func_17();
	}
}

void func_17()
{
	if (unk_0xF426A5DE932B3BEE(iLocal_105, 2) && unk_0xF426A5DE932B3BEE(iLocal_105, 0))
	{
		if (func_80(iLocal_109))
		{
			if (func_18(unk_0x27D769C59BC9D030(), iLocal_109, 10f, 1))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iLocal_109, 1), Local_110) >= 100f)
				{
					func_64(0);
				}
			}
		}
		else if (!func_68(25, 0))
		{
			if (func_80(iLocal_109))
			{
				unk_0xBC513CF9473E6605(iLocal_109, 0);
			}
			func_19(&iLocal_109);
			func_64(1);
		}
	}
}

bool func_18(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iParam0, iParam3), unk_0xA8CFDE65C45F813B(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_19(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(*iParam0))
	{
		unk_0x2006A8C1BA2AFE80(*iParam0, 0);
		if (unk_0xE24B37600DCB21FC(*iParam0) && unk_0xFF65D7BC656BA68E(*iParam0, 1))
		{
			unk_0x9846B4D56971A958(iParam0);
		}
	}
}

void func_20(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[25]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x51A640907BDD41BB(iParam0) || unk_0x946C63BD9EF05437(iParam0) == joaat("bus")) || unk_0x946C63BD9EF05437(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_63(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_59(iParam0, &Var0);
		if (func_72(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
			fParam4 = unk_0x4D6B971C8AEE130C(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2());
			}
		}
		func_53(iParam5, &Var0, Param1, fParam4, func_58(iParam0));
		func_21(iParam5, iParam0, 0);
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_49(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 12) && !unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != unk_0x946C63BD9EF05437(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (unk_0xD2CFFE76B625AE55(iParam1))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
		{
			if (!unk_0xE24B37600DCB21FC(iParam1))
			{
				unk_0xAF3355298F537BB0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_38();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_69(iParam0);
					if ((unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0)) && iParam1 != iVar0)
					{
						func_22(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_23(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x9297C590C99228DC(iParam0, -1);
		if (!unk_0xD2CFFE76B625AE55(iVar0))
		{
			iVar0 = unk_0x8704B0F200BD412D(iParam0, -1);
		}
		if (unk_0xD2CFFE76B625AE55(iVar0) && !unk_0xE4F7206742848BAF(iVar0))
		{
			if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_59(iParam0, &(Global_101154.f_18807.f_5510));
}

int func_23(int iParam0)
{
	if ((((((((((!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0)) || func_36(iParam0, 0, 0)) || func_36(iParam0, 1, 0)) || func_36(iParam0, 2, 0)) || func_58(iParam0) != 145) || func_35(iParam0)) || func_34(iParam0)) || func_33(iParam0)) || func_32(iParam0)) || !func_24(unk_0x946C63BD9EF05437(iParam0)))
	{
		if (func_34(iParam0))
		{
		}
		if (func_34(iParam0))
		{
		}
		if (func_36(iParam0, 0, 0))
		{
		}
		if (func_36(iParam0, 1, 0))
		{
		}
		if (func_36(iParam0, 2, 0))
		{
		}
		if (func_58(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD3AE48D8EB7DCBE6(iParam0) || unk_0xEC6E5897335290DD(iParam0)) || unk_0xDBFA5C79D9B3D622(iParam0)) || unk_0x5BFC131B92C92E97(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xCCCEEEDD3FD9AA24(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("buffalo3") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("gauntlet2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_31())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF91F65A88EC73320())
		{
			if (unk_0xB1B63407FCB8DC25(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x80EC20FBCB429863(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_30() && !func_29()) && !func_28()) && !func_27()) && !func_31())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD0333FE560420AC5() || unk_0xDFCB321F1D24137F()) || unk_0x748A964A12412EBB())
		{
		}
		else if (!func_28())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_26(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x9CC4C10F8D665832();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_27()
{
	return 0;
}

int func_28()
{
	return 1;
}

int func_29()
{
	return 1;
}

int func_30()
{
	if (unk_0xA29E536967D6DF2E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	var uVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x4C5F5AF635DED95E())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x26545538B51562AD(&uVar0, 2);
				unk_0x26545538B51562AD(&uVar0, 4);
				unk_0x26545538B51562AD(&uVar0, 6);
				unk_0x26545538B51562AD(&Global_25, 2);
				unk_0x26545538B51562AD(&Global_25, 4);
				unk_0x26545538B51562AD(&Global_25, 6);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					iVar0 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&iVar0, 0);
					unk_0xD020BAA9D2E33978(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return 1;
	}
	else if (Global_138274 == 3)
	{
		return 0;
	}
	if (unk_0x755BFB74ADDC1524())
	{
		if (unk_0xF426A5DE932B3BEE(unk_0xC06A80AF9911D7A8(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	sVar1 = unk_0x9111F14F8ABAE773(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xC1C5B83BB6719C6C(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_25(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && unk_0x946C63BD9EF05437(Global_88942[iVar0]) == unk_0x946C63BD9EF05437(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_37(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iVar9], 0))
		{
			if (unk_0x005659B4CDF2566C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_38()
{
	var uVar0;
	
	func_48(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_47(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_46(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_41(&uVar0, unk_0x388418AD39C0F4DE());
	func_40(&uVar0, unk_0xE3911478C9FE04B2());
	func_39(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

void func_39(var uParam0, int iParam1)
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

void func_40(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_41(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_45(*uParam0);
	iVar1 = func_43(*uParam0);
	if (iParam1 < 1 || iParam1 > func_42(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_42(int iParam0, int iParam1)
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

var func_43(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_44(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_44(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_45(var uParam0)
{
	return uParam0 & 15;
}

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_50(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_50(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_50(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_50(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_50(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_50(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_50(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_50(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_50(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_31())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_31())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101154.f_18807.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_72(Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101154.f_18807.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101154.f_18807.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 19))
	{
		if (!func_72(Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 20))
	{
		if (!func_72(Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_50(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_52(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_51(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_51(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_52(int iParam0)
{
	return iParam0 < 3;
}

void func_53(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_49(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_57(iParam0);
			func_56(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_54(iParam0, 1);
		}
	}
}

void func_54(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_55(iParam0, 1, 0);
			func_55(iParam0, 2, 0);
			func_55(iParam0, 3, 0);
			func_55(iParam0, 4, 0);
			func_55(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_55(iParam0, 0, 0);
	}
}

void func_55(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

void func_56(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_57(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_49(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
			unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_54(iParam0, 0);
		}
	}
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 145;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_59(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		func_62(uParam1);
		uParam1->f_66 = unk_0x946C63BD9EF05437(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x9111F14F8ABAE773(iParam0), 16);
		*uParam1 = unk_0xC960169422AD5363(iParam0);
		unk_0x923073D63782E037(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xC780DEE9C0D887BF(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x0C8CAFCFEDEEF36D(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF90EF7B0A4543EE(iParam0);
		uParam1->f_67 = unk_0xC3362AC1471926AA(iParam0);
		uParam1->f_69 = unk_0xA2A724EEE80F007F(iParam0);
		uParam1->f_70 = unk_0x977E90DD5881BA08(iParam0);
		unk_0x477102A8963B16B4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x486F923523D0F4DB(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8A455A983374FA6C(iParam0, 2))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 28);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 3))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 29);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 30);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 1))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			uParam1->f_68 = unk_0xD3A88CAE99C338A3(iParam0);
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (unk_0x7D5667109E828021(iParam0))
			{
				switch (unk_0xDBA4852736CE4FDB(iParam0))
				{
					case 2:
					case 0:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0x26545538B51562AD(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x26545538B51562AD(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x480DA4A4EBDCE31C(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 9);
		}
		if (unk_0x6509ED7AD3D989FE(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 10);
		}
		if (unk_0xFD1E4AF84D93E688(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 13);
			unk_0x3E4DACD1434531DD(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE00D5F67AE8F1A68(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 12);
		}
		func_61(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3D866A165E63B4FE(iParam0, iVar0 + 1))
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_60(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3E70A6BAFEE797B2(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 11);
		}
		if (unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave") && unk_0xF47B23D65F733C81(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 27);
		}
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_61(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x56F45DEAAF97E44B(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xC90889BF6C7006D1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_62(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_63(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_57(iParam0);
	func_54(iParam0, 0);
}

void func_64(bool bParam0)
{
	if (unk_0xF426A5DE932B3BEE(iLocal_105, 14))
	{
		if (func_66(unk_0x27D769C59BC9D030()) == 0)
		{
			if (bParam0)
			{
				func_65(10);
			}
			else
			{
				func_65(12);
			}
		}
		else if (bParam0)
		{
			func_65(11);
		}
		else
		{
			func_65(13);
		}
		if (iLocal_42 == 0)
		{
			func_86(45, 0);
		}
		else if (iLocal_42 == 1)
		{
			func_86(12, 0);
		}
		else if (iLocal_42 == 2)
		{
			func_86(34, 0);
		}
		if (iLocal_42 != 2)
		{
			Local_106 = { 0f, 0f, 0f };
		}
		iLocal_40 = 0;
		iLocal_41 = 0;
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 6);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 1);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 8);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 12);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 2);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 14);
		if (iLocal_37 == 4)
		{
			if (unk_0x4C3CEC038B6637D7(uLocal_1267))
			{
				unk_0xBBDCA990E9FC1AE1(&uLocal_1267);
			}
			func_103(0);
		}
		func_73(0, 0);
	}
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	unk_0x26545538B51562AD(&(uLocal_101[func_5(iParam0)]), iVar0);
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_67(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_67(int iParam0)
{
	if (func_52(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_18807[iParam0], iParam1);
}

int func_69(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

int func_70()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

bool func_71(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

bool func_72(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_73(int iParam0, bool bParam1)
{
	Global_101154.f_8739.f_128 = iParam0;
	iLocal_37 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_74();
}

int func_74()
{
	if (func_75(0))
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

bool func_75(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

void func_76(char* sParam0, int iParam1)
{
	unk_0x783BA542276957DC(joaat("sp_last_mission_name"), sParam0, 1);
	if (unk_0xF426A5DE932B3BEE(iParam1, 0))
	{
		unk_0x783BA542276957DC(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (unk_0xF426A5DE932B3BEE(iParam1, 1))
	{
		unk_0x783BA542276957DC(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (unk_0xF426A5DE932B3BEE(iParam1, 2))
	{
		unk_0x783BA542276957DC(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_77()
{
	func_78();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_78()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_67(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_66(unk_0x27D769C59BC9D030());
			if (func_52(iVar0) && (!func_79(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_52(Global_101154.f_1826.f_539.f_3549))
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

bool func_79(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_80(int iParam0)
{
	if (func_81(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (!unk_0xFA7888B344869306(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = (unk_0xA0F74982C6AAA9D4() + iParam1);
}

void func_83(bool bParam0)
{
	char* sVar0;
	
	unk_0x229773841C1D2E13(0);
	switch (func_84())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xF0CCECED31D3C488(sVar0);
}

int func_84()
{
	func_78();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_85(char* sParam0)
{
	unk_0x37B602106C6E0E91(sParam0);
	unk_0xD3076D52458B36EF();
}

void func_86(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

void func_87()
{
	Global_101154.f_8706.f_21++;
	if (iLocal_42 == 0)
	{
		unk_0xE2A8B026FA4DDFFF(joaat("fl_co_fb4p3"), Global_101154.f_8706.f_21, 1);
		if (func_96())
		{
			if (func_240(74) || (func_240(75) && func_95()))
			{
				func_86(46, 1);
			}
		}
	}
	func_88();
	unk_0x26545538B51562AD(&iLocal_105, 10);
}

void func_88()
{
	if (iLocal_42 == 0)
	{
		func_89(23, 0, 0);
	}
	else if (iLocal_42 == 1)
	{
	}
	else if (iLocal_42 == 2)
	{
	}
}

void func_89(int iParam0, int iParam1, int iParam2)
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
		func_93((891 + iParam0), 1, -1, 1);
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
		func_90();
	}
}

void func_90()
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
		func_92(13, unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853));
	}
	if (!unk_0x1AB59BFCD46AAD2F())
	{
		if (!Global_69489)
		{
			if (func_91() == 2 == 0 && !unk_0x0E063DDE8855EC52())
			{
				if (unk_0x878E45E8C4AA7963())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_74();
				}
			}
		}
	}
}

int func_91()
{
	return Global_25120;
}

int func_92(int iParam0, int iParam1)
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

int func_93(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_94();
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

int func_94()
{
	return Global_1312747;
}

int func_95()
{
	if ((func_240(41) && func_240(3)) && func_240(21))
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (iLocal_42 == 0)
	{
		return func_101();
	}
	else if (iLocal_42 == 1)
	{
		return func_100();
	}
	else if (iLocal_42 == 2)
	{
		return func_97();
	}
	return 0;
}

int func_97()
{
	if ((func_240(79) && func_240(83)) && func_98(func_99()))
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_99()
{
	if (iLocal_42 == 0)
	{
		return 45;
	}
	else if (iLocal_42 == 1)
	{
		return 12;
	}
	else if (iLocal_42 == 2)
	{
		return 34;
	}
	return -1;
}

int func_100()
{
	if (func_240(68))
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (func_102(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_240(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_98(func_99()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_103(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_104()
{
	struct<6> Var0;
	
	if (iLocal_40 != 0)
	{
		Var0 = { func_121() };
		switch (iLocal_40)
		{
			case 1:
				if (iLocal_42 != 2)
				{
					if (!unk_0x75CB9E30BA492FF0(&Var0))
					{
						if (unk_0x351E0C865946978E() > 0)
						{
							func_120("LOCAUD", Local_44.f_7);
							func_119(1);
							iLocal_40 = 2;
						}
						else if (unk_0xF426A5DE932B3BEE(iLocal_105, 10) && unk_0x351E0C865946978E() == 0)
						{
							func_120("LOCAUD", Local_44.f_7);
							func_119(1);
							iLocal_40 = 2;
						}
					}
				}
				else
				{
					iLocal_40 = 0;
				}
				if (func_118())
				{
					iLocal_40 = 3;
				}
				break;
			
			case 2:
				if (func_118())
				{
					iLocal_40 = 3;
				}
				if (!unk_0xF426A5DE932B3BEE(iLocal_105, 10))
				{
					if (unk_0x351E0C865946978E() >= 0)
					{
						func_111(Var0);
					}
				}
				else
				{
					iLocal_40 = 3;
				}
				break;
			
			case 3:
				if (!func_110())
				{
					iLocal_40 = 4;
				}
				break;
			
			case 4:
				if (!func_14(0))
				{
					if (iLocal_42 == 1)
					{
						func_109(Local_44.f_8);
					}
					iLocal_40 = 5;
				}
				break;
			
			case 5:
				if (func_84() == 0)
				{
					if (iLocal_42 == 0)
					{
						if (func_96())
						{
							if ((func_240(74) || func_240(75)) && func_95())
							{
								func_105(1);
								iLocal_40 = 0;
							}
							else
							{
								func_105(0);
								iLocal_40 = 0;
							}
						}
						else
						{
							iLocal_40 = 0;
						}
					}
					else
					{
						iLocal_40 = 0;
					}
				}
				else
				{
					if (iLocal_42 == 0)
					{
						if (func_96())
						{
							if (!func_240(3))
							{
								func_82(50, 0);
							}
						}
					}
					iLocal_40 = 0;
				}
				break;
			}
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		func_106(1527885205, 0, func_84(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_240(3))
	{
		func_106(-224691627, 0, func_84(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_106(-224691627, 0, func_84(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_75(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_101154.f_6378.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_101154.f_6378.f_911 == Var0.f_0)
		{
			Global_101154.f_6378.f_911 = -1;
		}
		Var0.f_3 = func_108(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0xA0F74982C6AAA9D4() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0x26545538B51562AD(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x26545538B51562AD(&(Var0.f_1), 0);
		unk_0xF17F4B0641AB2DE1(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x26545538B51562AD(&(Var0.f_1), 10);
		}
		Global_101154.f_6378[Global_101154.f_6378.f_136 /*15*/] = { Var0 };
		Global_101154.f_6378.f_136++;
		func_107(iParam2);
		return 1;
	}
	return 0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_52(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101154.f_6378[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101154.f_6378[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101154.f_6378.f_764)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101154.f_6378.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101154.f_6378.f_919[iParam0] = iVar1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_109(int iParam0)
{
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 0;
		Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 0;
		Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 0;
		Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 0;
		Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 0;
		Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 0;
	}
}

int func_110()
{
	if (Global_15712 == 4)
	{
		if (unk_0x0EFEEF8E6B0B4E34())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_111(struct<6> Param0)
{
	if (iLocal_42 == 0)
	{
		func_116(Param0);
	}
	else if (iLocal_42 == 1)
	{
		func_112(Param0);
	}
}

void func_112(struct<6> Param0)
{
	if (func_96())
	{
		func_113(Param0, 1);
	}
	else
	{
		func_113(Param0, 0);
	}
}

void func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!unk_0x75CB9E30BA492FF0(&uParam0))
	{
		if (unk_0xC1C5B83BB6719C6C(&uParam0, Local_44.f_7))
		{
			if (unk_0x351E0C865946978E() >= 0)
			{
				if (iLocal_42 == 0)
				{
					Var0 = { func_115(bParam6) };
					func_86(46, 1);
					func_120(sLocal_1272, &Var0);
					func_119(1);
				}
				else if (iLocal_42 == 1)
				{
					Var0 = { func_114(bParam6) };
					func_120(sLocal_1272, &Var0);
					func_119(1);
				}
				iLocal_40 = 3;
			}
		}
	}
}

struct<4> func_114(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_84())
		{
			case 1:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_84())
		{
			case 1:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_115(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_84())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_84())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

void func_116(struct<6> Param0)
{
	if (func_96())
	{
		if (func_117())
		{
			if (func_84() != 0)
			{
				func_113(Param0, 1);
			}
			else
			{
				iLocal_40 = 3;
			}
		}
		else if (func_84() != 0)
		{
			func_113(Param0, 0);
		}
		else
		{
			iLocal_40 = 3;
		}
	}
	else
	{
		iLocal_40 = 3;
	}
}

int func_117()
{
	if (iLocal_42 == 0)
	{
		if ((func_240(74) || func_240(74)) && func_95())
		{
			return 1;
		}
	}
	else if (iLocal_42 == 1)
	{
		if (func_240(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_118()
{
	if (Global_15761 == 1 || Global_16728 == 1)
	{
		return 1;
	}
	return 0;
}

void func_119(bool bParam0)
{
	unk_0x94DA6AACA7F07289(bParam0);
	if (bParam0)
	{
	}
}

void func_120(char* sParam0, char* sParam1)
{
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		Global_15769 = 1;
		StringCopy(&Global_15776, sParam0, 24);
		StringCopy(&Global_15770, sParam1, 24);
	}
}

struct<6> func_121()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

void func_122()
{
	func_123();
}

void func_123()
{
	func_129();
	func_124();
}

void func_124()
{
	if (func_128() == 69)
	{
		if (func_127() && !func_68(25, 0))
		{
			if (Local_114.f_66 != 0)
			{
				func_53(25, &Local_114, Local_110, fLocal_113, 145);
			}
		}
	}
	else if (func_128() == -1)
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_105, 1))
		{
			if (!func_71(unk_0x27D769C59BC9D030(), Local_106, 5f))
			{
				if (func_126())
				{
					if (!unk_0x5D293E404CA20AA5())
					{
						if (func_125())
						{
							func_65(1);
						}
						else if (Global_100209)
						{
							func_65(2);
						}
						else
						{
							func_65(0);
						}
						iLocal_39 = 1;
						fLocal_104 = 0f;
					}
				}
			}
		}
	}
}

bool func_125()
{
	return unk_0xA6C3B54732ED5989(Global_101154.f_16793.f_395);
}

int func_126()
{
	if (func_12())
	{
		if (func_84() == 0)
		{
			if (iLocal_43 == 12 || iLocal_43 == 1)
			{
				return 1;
			}
		}
		else if (iLocal_43 == 0 || iLocal_43 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	return Global_69751;
}

void func_129()
{
	if (!func_72(Local_110, 0f, 0f, 0f, 0) && func_128() != func_130())
	{
		if (func_71(unk_0x27D769C59BC9D030(), Local_110, 60f))
		{
			if (func_80(func_69(25)))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(func_69(25), 1), Local_110) >= 100f)
				{
					func_64(0);
				}
			}
			else if (!func_68(25, 0))
			{
				func_64(1);
			}
		}
	}
}

int func_130()
{
	if (iLocal_42 == 0)
	{
		return 38;
	}
	else if (iLocal_42 == 1)
	{
		return 69;
	}
	else if (iLocal_42 == 2)
	{
		return 85;
	}
	return -1;
}

void func_131()
{
	func_16();
	func_104();
}

void func_132()
{
	int iVar0;
	
	func_206();
	func_192();
	func_160();
	func_104();
	func_159();
	if (func_155())
	{
		if (func_133(&iVar0))
		{
			func_248(0);
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0xECD82034ED52600B(unk_0x27D769C59BC9D030()))
			{
				unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
			}
			if (func_80(iLocal_109))
			{
				unk_0x37B592C0F74990D2(iLocal_109, 2);
			}
			func_73(iVar0, 0);
		}
	}
}

int func_133(var uParam0)
{
	char* sVar0;
	
	if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
	{
		func_147();
		if (func_134())
		{
			sVar0 = unk_0x3AA961419D971CB2();
			if (!unk_0x75CB9E30BA492FF0(sVar0))
			{
				if (iLocal_42 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_134()
{
	if (func_136(&uLocal_1273, Local_44.f_8, sLocal_1272, Local_44.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_40 = 1;
		func_135(192, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1));
		return 1;
	}
	return 0;
}

void func_135(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0x7B4654D62B7E0E9E(Global_25433[iParam0 /*23*/].f_19))
	{
		unk_0x1651233EBDC5526E(Global_25433[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_25433[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_136(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_146(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_137(sParam3, iParam4, bParam8);
}

int func_137(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x94DA6AACA7F07289(false);
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
					func_145();
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
		if (func_144(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_143();
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
				func_142();
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
				if (func_141())
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
			if (func_140())
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
			func_139();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_138();
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
		func_145();
	}
	return 0;
}

void func_138()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x94DA6AACA7F07289(false);
	Global_15712 = 1;
}

void func_139()
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

int func_140()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_141()
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

void func_142()
{
	if (func_79(14))
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
		Global_14413 = func_84();
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

void func_143()
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

bool func_144(int iParam0, int iParam1)
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

void func_145()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(true);
		Global_15712 = 6;
		return;
	}
}

void func_146(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = uParam1;
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

void func_147()
{
	int iVar0;
	
	iVar0 = func_84();
	func_148(iVar0, func_154(iVar0));
}

void func_148(int iParam0, var uParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			Local_44.f_0 = 0;
			Local_44.f_1 = "MICHAEL";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 1;
				Local_44.f_3 = "FRANKLIN";
				Local_44.f_8 = 5;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 6;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_FRESP";
			func_152(iParam0);
			break;
		
		case 1:
			Local_44.f_0 = 1;
			Local_44.f_1 = "FRANKLIN";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 9;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_152(iParam0);
			break;
		
		case 2:
			Local_44.f_0 = 2;
			Local_44.f_1 = "TREVOR";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 8;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_152(iParam0);
			break;
	}
	if (iLocal_42 == 1)
	{
		if (iParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		func_150(Local_44.f_8, iVar0, 0);
	}
	func_149(&uLocal_1273, Local_44.f_0, unk_0x27D769C59BC9D030(), Local_44.f_1, 0, 1);
	func_149(&uLocal_1273, Local_44.f_2, 0, Local_44.f_3, 0, 1);
	Local_44.f_4 = uParam1;
}

void func_149(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_150(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_142();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_151();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_151();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_151();
			}
		}
	}
}

void func_151()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xC754513C760635E8(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x5411F6B456B04A6B("");
		StringCopy(&cVar16, unk_0xC754513C760635E8(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0xC754513C760635E8("CELL_253");
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x5411F6B456B04A6B("CELL_255");
		unk_0x2B088D6251C2080D(&(Global_2893[1 /*6*/]));
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF17F4B0641AB2DE1(&Global_2283, 0);
}

void func_152(int iParam0)
{
	Local_44.f_6 = unk_0x6E6FC26F3BAE53A5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1));
	func_153(iParam0);
}

void func_153(int iParam0)
{
	if (!unk_0x75CB9E30BA492FF0(Local_44.f_6))
	{
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "SanAnd"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F78";
			}
			else
			{
				Local_44.f_7 = "LOC_T78";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Alamo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F1";
			}
			else
			{
				Local_44.f_7 = "LOC_T1";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Alta"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F2";
			}
			else
			{
				Local_44.f_7 = "LOC_T2";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Airp"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F49";
			}
			else
			{
				Local_44.f_7 = "LOC_T49";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "ArmyB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F29";
			}
			else
			{
				Local_44.f_7 = "LOC_T29";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "BhamCa"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F3";
			}
			else
			{
				Local_44.f_7 = "LOC_T3";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Banning"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F4";
			}
			else
			{
				Local_44.f_7 = "LOC_T4";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Baytre"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F5";
			}
			else
			{
				Local_44.f_7 = "LOC_T5";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Beach"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F94";
			}
			else
			{
				Local_44.f_7 = "LOC_T94";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "BradT"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F8";
			}
			else
			{
				Local_44.f_7 = "LOC_T8";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "BradP"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F7";
			}
			else
			{
				Local_44.f_7 = "LOC_T7";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Burton"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F9";
			}
			else
			{
				Local_44.f_7 = "LOC_T9";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "CANNY"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F71";
			}
			else
			{
				Local_44.f_7 = "LOC_T71";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "CCreak"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F11";
			}
			else
			{
				Local_44.f_7 = "LOC_T11";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "CalafB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F10";
			}
			else
			{
				Local_44.f_7 = "LOC_T10";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "ChamH"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F12";
			}
			else
			{
				Local_44.f_7 = "LOC_T12";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "CHU"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F14";
			}
			else
			{
				Local_44.f_7 = "LOC_T14";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "CHIL"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F97";
			}
			else
			{
				Local_44.f_7 = "LOC_T97";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "COSI"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F15";
			}
			else
			{
				Local_44.f_7 = "LOC_T15";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "CMSW"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F13";
			}
			else
			{
				Local_44.f_7 = "LOC_T13";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Cypre"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F16";
			}
			else
			{
				Local_44.f_7 = "LOC_T16";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Davis"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F17";
			}
			else
			{
				Local_44.f_7 = "LOC_T17";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Desrt"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F33";
			}
			else
			{
				Local_44.f_7 = "LOC_T33";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "DelBe"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F20";
			}
			else
			{
				Local_44.f_7 = "LOC_T20";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "DelPe"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F19";
			}
			else
			{
				Local_44.f_7 = "LOC_T19";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "DelSol"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Downt"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F21";
			}
			else
			{
				Local_44.f_7 = "LOC_T21";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "DTVine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F22";
			}
			else
			{
				Local_44.f_7 = "LOC_T22";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Eclips"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F25";
			}
			else
			{
				Local_44.f_7 = "LOC_T25";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "ELSant"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F23";
			}
			else
			{
				Local_44.f_7 = "LOC_T23";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "EBuro"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F26";
			}
			else
			{
				Local_44.f_7 = "LOC_T26";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "ELGorl"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F27";
			}
			else
			{
				Local_44.f_7 = "LOC_T27";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Elysian"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F28";
			}
			else
			{
				Local_44.f_7 = "LOC_T28";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Galli"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F32";
			}
			else
			{
				Local_44.f_7 = "LOC_T32";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Galfish"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F30";
			}
			else
			{
				Local_44.f_7 = "LOC_T30";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Greatc"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F35";
			}
			else
			{
				Local_44.f_7 = "LOC_T35";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Golf"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F36";
			}
			else
			{
				Local_44.f_7 = "LOC_T36";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "GrapeS"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F34";
			}
			else
			{
				Local_44.f_7 = "LOC_T34";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Hawick"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F38";
			}
			else
			{
				Local_44.f_7 = "LOC_T38";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Harmo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F37";
			}
			else
			{
				Local_44.f_7 = "LOC_T37";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Heart"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F39";
			}
			else
			{
				Local_44.f_7 = "LOC_T39";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "HumLab"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F40";
			}
			else
			{
				Local_44.f_7 = "LOC_T40";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "HORS"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F98";
			}
			else
			{
				Local_44.f_7 = "LOC_T98";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Koreat"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F47";
			}
			else
			{
				Local_44.f_7 = "LOC_T47";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Jail"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F6";
			}
			else
			{
				Local_44.f_7 = "LOC_T6";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LAct"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F46";
			}
			else
			{
				Local_44.f_7 = "LOC_T46";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LDam"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F45";
			}
			else
			{
				Local_44.f_7 = "LOC_T45";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Lago"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F44";
			}
			else
			{
				Local_44.f_7 = "LOC_T44";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LegSqu"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LosSF"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F48";
			}
			else
			{
				Local_44.f_7 = "LOC_T48";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LMesa"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F41";
			}
			else
			{
				Local_44.f_7 = "LOC_T41";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LosPuer"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LosPFy"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F43";
			}
			else
			{
				Local_44.f_7 = "LOC_T43";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "LOSTMC"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Mirr"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F51";
			}
			else
			{
				Local_44.f_7 = "LOC_T51";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Morn"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F53";
			}
			else
			{
				Local_44.f_7 = "LOC_T53";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Murri"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F57";
			}
			else
			{
				Local_44.f_7 = "LOC_T57";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "MTChil"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F54";
			}
			else
			{
				Local_44.f_7 = "LOC_T54";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "MTJose"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F56";
			}
			else
			{
				Local_44.f_7 = "LOC_T56";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "MTGordo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F55";
			}
			else
			{
				Local_44.f_7 = "LOC_T55";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Movie"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F73";
			}
			else
			{
				Local_44.f_7 = "LOC_T73";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "NCHU"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F58";
			}
			else
			{
				Local_44.f_7 = "LOC_T58";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Noose"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Oceana"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F61";
			}
			else
			{
				Local_44.f_7 = "LOC_T61";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Observ"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F31";
			}
			else
			{
				Local_44.f_7 = "LOC_T31";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Palmpow"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F65";
			}
			else
			{
				Local_44.f_7 = "LOC_T65";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "PBOX"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F67";
			}
			else
			{
				Local_44.f_7 = "LOC_T67";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "PBluff"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F60";
			}
			else
			{
				Local_44.f_7 = "LOC_T60";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Paleto"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F62";
			}
			else
			{
				Local_44.f_7 = "LOC_T62";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "PalCov"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F63";
			}
			else
			{
				Local_44.f_7 = "LOC_T63";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "PalFor"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F64";
			}
			else
			{
				Local_44.f_7 = "LOC_T64";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "PalHigh"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F66";
			}
			else
			{
				Local_44.f_7 = "LOC_T66";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "ProcoB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F69";
			}
			else
			{
				Local_44.f_7 = "LOC_T69";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Prol"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F59";
			}
			else
			{
				Local_44.f_7 = "LOC_T59";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "RTRAK"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F72";
			}
			else
			{
				Local_44.f_7 = "LOC_T72";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Rancho"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F70";
			}
			else
			{
				Local_44.f_7 = "LOC_T70";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "RGLEN"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F75";
			}
			else
			{
				Local_44.f_7 = "LOC_T75";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Richm"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F74";
			}
			else
			{
				Local_44.f_7 = "LOC_T74";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Rockf"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F76";
			}
			else
			{
				Local_44.f_7 = "LOC_T76";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "SANDY"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F80";
			}
			else
			{
				Local_44.f_7 = "LOC_T80";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "TongvaH"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F88";
			}
			else
			{
				Local_44.f_7 = "LOC_T88";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "TongvaV"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F89";
			}
			else
			{
				Local_44.f_7 = "LOC_T89";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "East_V"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F24";
			}
			else
			{
				Local_44.f_7 = "LOC_T24";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Zenora"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F81";
			}
			else
			{
				Local_44.f_7 = "LOC_T81";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Slab"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F82";
			}
			else
			{
				Local_44.f_7 = "LOC_T82";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "SKID"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F52";
			}
			else
			{
				Local_44.f_7 = "LOC_T52";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "SLSant"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F83";
			}
			else
			{
				Local_44.f_7 = "LOC_T83";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Stad"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F50";
			}
			else
			{
				Local_44.f_7 = "LOC_T50";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Tatamo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Termina"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F86";
			}
			else
			{
				Local_44.f_7 = "LOC_T86";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "TEXTI"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F87";
			}
			else
			{
				Local_44.f_7 = "LOC_T87";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "WVine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F100";
			}
			else
			{
				Local_44.f_7 = "LOC_T100";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "UtopiaG"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F90";
			}
			else
			{
				Local_44.f_7 = "LOC_T90";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Vesp"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F93";
			}
			else
			{
				Local_44.f_7 = "LOC_T93";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "VCana"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F95";
			}
			else
			{
				Local_44.f_7 = "LOC_T95";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Vine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F96";
			}
			else
			{
				Local_44.f_7 = "LOC_T96";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "WMirror"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F99";
			}
			else
			{
				Local_44.f_7 = "LOC_T99";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "WindF"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F77";
			}
			else
			{
				Local_44.f_7 = "LOC_T77";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "Zancudo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F101";
			}
			else
			{
				Local_44.f_7 = "LOC_T101";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "SanChia"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F79";
			}
			else
			{
				Local_44.f_7 = "LOC_T79";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "STRAW"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F84";
			}
			else
			{
				Local_44.f_7 = "LOC_T84";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F18";
			}
			else
			{
				Local_44.f_7 = "LOC_T18";
			}
			return;
		}
		if (unk_0xC1C5B83BB6719C6C(Local_44.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F68";
			}
			else
			{
				Local_44.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_44.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_44.f_7 = "LOC_M";
		}
		else
		{
			Local_44.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_44.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_44.f_7 = "LOC_F";
	}
	else
	{
		Local_44.f_7 = "LOC_T";
	}
}

char* func_154(int iParam0)
{
	char* sVar0;
	
	if (!unk_0xF426A5DE932B3BEE(iLocal_105, 10))
	{
		if (iLocal_42 == 0)
		{
			sLocal_1272 = "FBIPRAU";
		}
		else if (iLocal_42 == 1)
		{
			sLocal_1272 = "AHFAUD";
		}
		else if (iLocal_42 == 2)
		{
			sLocal_1272 = "FHFAUD";
		}
		if (iLocal_42 == 0)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_42 == 1)
		{
			if (iParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_42 == 2)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_1272 = "FHFAUD";
		if (iParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (iParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_155()
{
	if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
	{
		if (func_80(iLocal_109))
		{
			if (unk_0xF426A5DE932B3BEE(iLocal_105, 1))
			{
				if ((func_158(0) || func_158(12)) || func_158(1))
				{
					func_156();
					func_1(46, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_156()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_105, 6))
	{
		if (func_80(iLocal_109))
		{
			Local_110 = { unk_0xA8CFDE65C45F813B(iLocal_109, 1) };
			fLocal_113 = unk_0x4D6B971C8AEE130C(iLocal_109);
			unk_0x26545538B51562AD(&iLocal_105, 6);
			unk_0x26545538B51562AD(&iLocal_105, 2);
			func_59(iLocal_109, &Local_114);
			func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
			unk_0x26545538B51562AD(&iLocal_105, 14);
			func_157(iLocal_109);
		}
	}
}

int func_157(int iParam0)
{
	if (!unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave"))
	{
		if (unk_0xBC2F3726EAB9B952(iParam0, "IgnoredByQuickSave", 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (Global_16827 == 0)
	{
		return 0;
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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
	return 0;
}

void func_159()
{
	if (unk_0xF426A5DE932B3BEE(iLocal_105, 0) && unk_0xF426A5DE932B3BEE(iLocal_105, 1))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_105, 11))
		{
			func_248(1);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(iLocal_105, 11))
	{
		func_248(0);
	}
}

void func_160()
{
	if ((unk_0xF426A5DE932B3BEE(iLocal_105, 0) && Global_35711 == 15) && !func_191())
	{
		if (iLocal_38 == 0)
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_105, 1) && unk_0xF426A5DE932B3BEE(iLocal_105, 0))
			{
				if (!func_71(unk_0x27D769C59BC9D030(), Local_106, 5f))
				{
					if (unk_0xF426A5DE932B3BEE(iLocal_105, 20) || func_126())
					{
						if ((func_233(unk_0x27D769C59BC9D030()) && !unk_0xF426A5DE932B3BEE(uLocal_101[0], 17)) && !unk_0xF426A5DE932B3BEE(uLocal_101[1], 18))
						{
							if (unk_0xECD82034ED52600B(unk_0x27D769C59BC9D030()))
							{
								func_190(24, 46);
								if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
								{
									if (!func_188() && func_168(unk_0xA8CFDE65C45F813B(iLocal_109, 1)))
									{
										if (func_165(iLocal_109))
										{
											if (func_164(iLocal_109))
											{
												unk_0x26545538B51562AD(&iLocal_105, 1);
												if (func_66(unk_0x27D769C59BC9D030()) == 0)
												{
													func_65(7);
													func_1(7, 1);
												}
												else
												{
													func_65(8);
													func_1(8, 1);
												}
												Local_106 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
												return;
											}
										}
									}
									if (unk_0xF426A5DE932B3BEE(iLocal_105, 20))
									{
										func_1(46, 0);
										unk_0xF17F4B0641AB2DE1(&iLocal_105, 20);
										iLocal_1438 = -1;
									}
									Local_106 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
								}
							}
							else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
							{
								func_190(7, 8);
								if (unk_0xF426A5DE932B3BEE(iLocal_105, 20))
								{
									unk_0xF17F4B0641AB2DE1(&iLocal_105, 20);
									iLocal_1438 = -1;
								}
								else
								{
									func_65(24);
								}
							}
						}
					}
					else if (!func_12())
					{
						if ((unk_0xECD82034ED52600B(unk_0x27D769C59BC9D030()) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0)) && !unk_0xF426A5DE932B3BEE(iLocal_105, 20))
						{
							if (iLocal_1438 != -1)
							{
								if ((unk_0xA0F74982C6AAA9D4() - iLocal_1438) > 1000)
								{
									unk_0x26545538B51562AD(&iLocal_105, 20);
								}
							}
							else
							{
								iLocal_1438 = unk_0xA0F74982C6AAA9D4();
							}
						}
						else
						{
							unk_0xF17F4B0641AB2DE1(&iLocal_105, 20);
						}
					}
				}
				else if (func_12())
				{
					Local_106 = { 0f, 0f, 0f };
				}
			}
			else if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
			{
				if (!func_71(unk_0x27D769C59BC9D030(), Local_106, 10f))
				{
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 1);
				}
				else if (!unk_0xECD82034ED52600B(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if (!unk_0xF426A5DE932B3BEE(iLocal_105, 20))
						{
							func_65(24);
						}
						func_1(24, 1);
						unk_0xF17F4B0641AB2DE1(&iLocal_105, 1);
						func_162(0);
					}
				}
				else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (func_80(iLocal_109))
					{
						if (unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0) != iLocal_109)
						{
							func_1(46, 0);
							func_162(0);
							func_161();
						}
					}
				}
			}
		}
	}
}

void func_161()
{
	unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
	unk_0xF17F4B0641AB2DE1(&iLocal_105, 8);
	unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
}

void func_162(int iParam0)
{
	if (Global_14571)
	{
		func_163(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(false);
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
	if (!func_140())
	{
		Global_14413.f_1 = 3;
	}
}

void func_163(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_14(0))
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

int func_164(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x71A741FE7CE9D57A(iParam0))
	{
		func_65(39);
		return 0;
	}
	if (!unk_0x70083B21A94A4A8C(unk_0x27D769C59BC9D030(), iParam0, -1, 0, 0) && !unk_0x70083B21A94A4A8C(unk_0x27D769C59BC9D030(), iParam0, 0, 0, 0))
	{
		func_65(37);
		return 0;
	}
	if (unk_0xA8ED23ED7AA60A97(iParam0))
	{
		func_65(36);
		return 0;
	}
	Var0 = { unk_0x9A98AE1D9D8DEF06(iParam0, 2) };
	if (Var0.f_0 >= 10f || Var0.f_0 <= -10f)
	{
		func_65(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_65(43);
		return 0;
	}
	return 1;
}

int func_165(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	if (iParam0 != 0)
	{
		if (func_80(iParam0))
		{
			unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var1, &Var4);
			Var1 = { Var1 + Vector(-1f, -1f, -2f) };
			Var4 = { Var4 + Vector(1f, 1f, 2f) };
			if (!unk_0xB4C6C348349773FE(unk_0xD7C4E2CB0B216852(iParam0, Var1), unk_0xD7C4E2CB0B216852(iParam0, Var4), 0, 1, 0, 0, 0, iParam0, 0))
			{
				iVar0++;
			}
			else if (func_12())
			{
				func_65(38);
			}
			if (!func_167())
			{
				iVar0++;
			}
			else if (func_12())
			{
				func_65(35);
			}
			if (iVar0 == 2)
			{
				if (func_166(unk_0xA8CFDE65C45F813B(iParam0, 1)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_166(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	Var2 = { Param0 + Vector(3.2f, 0f, 0f) };
	if (unk_0xF1F1EBE69E9A0DE7(Var2, &fVar0, 0) && unk_0xF1F1EBE69E9A0DE7(Param0, &fVar1, 0))
	{
		if (unk_0x43698C98CC255554((fVar0 - fVar1)) < 0.9f)
		{
			return 1;
		}
	}
	if (func_12())
	{
		func_65(37);
	}
	return 0;
}

int func_167()
{
	var uVar0[5];
	int iVar6;
	
	unk_0xFCB979DB36343941(unk_0x27D769C59BC9D030(), &uVar0, -1);
	iVar6 = 0;
	while (iVar6 <= 4)
	{
		if (func_233(uVar0[iVar6]) && uVar0[iVar6] != unk_0x27D769C59BC9D030())
		{
			if (unk_0xB7A628320EFF8E47(Local_106, unk_0xA8CFDE65C45F813B(uVar0[iVar6], 1)) <= 16f)
			{
				return 1;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_168(struct<3> Param0)
{
	if (!func_184() && !func_183(Param0))
	{
		if (!func_180())
		{
			if (!func_176(Param0))
			{
				if (!func_174(Param0) && !func_169(Param0))
				{
					return 1;
				}
			}
			else
			{
				func_65(0);
			}
		}
	}
	return 0;
}

int func_169(struct<3> Param0)
{
	if (func_172(Param0) || func_170(Param0))
	{
		if (func_12())
		{
			func_65(22);
		}
		return 1;
	}
	return 0;
}

int func_170(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, Global_86750[func_171(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_171(struct<3> Param0, bool bParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 7;
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (Global_86750[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919.f_17[iVar0], 0))
			{
				fVar1 = unk_0x676D4CD42E0837CA(Param0, Global_86750[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_172(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, Global_86814[func_173(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_173(struct<3> Param0, bool bParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_86814[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919.f_11[iVar0], 0))
			{
				fVar1 = unk_0x676D4CD42E0837CA(Param0, Global_86814[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_174(struct<3> Param0)
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0xCCB0AB6033F56041(Param0, &Var0, 0, 1077936128, 0))
	{
		fVar3 = unk_0xB7A628320EFF8E47(Param0, Var0);
		if (fVar3 >= 400f || !func_175(Param0, Var0))
		{
			return 0;
		}
		else if (fVar3 < 20f && fVar3 > 6f)
		{
			if (func_12())
			{
				func_65(40);
			}
			return 1;
		}
		else
		{
			if (func_12())
			{
				func_65(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_175(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	fVar0 = unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2));
	if (fVar0 <= 5f)
	{
		return 1;
	}
	return 0;
}

int func_176(struct<3> Param0)
{
	if (!func_179(1))
	{
		if (!func_179(0))
		{
			if (func_177(Param0, 0))
			{
				return 1;
			}
		}
		else if (func_177(Param0, 1))
		{
			return 1;
		}
	}
	if (!func_179(7))
	{
		if (!func_179(4))
		{
			if (func_177(Param0, 4))
			{
				return 1;
			}
		}
		else
		{
			if (func_177(Param0, 5))
			{
				return 1;
			}
			if (func_177(Param0, 6))
			{
				return 1;
			}
		}
	}
	if (func_177(Param0, 2))
	{
		return 1;
	}
	if (func_177(Param0, 3))
	{
		return 1;
	}
	if (!func_179(8))
	{
		if (func_177(Param0, 8))
		{
			return 1;
		}
	}
	if (!func_179(16))
	{
		if (func_177(Param0, 16))
		{
			return 1;
		}
		if (!func_179(15))
		{
			if (func_177(Param0, 15))
			{
				return 1;
			}
			if (!func_179(14))
			{
				if (func_177(Param0, 14))
				{
					return 1;
				}
				if (!func_179(13))
				{
					if (func_177(Param0, 13))
					{
						return 1;
					}
					if (!func_179(12))
					{
						if (func_177(Param0, 12))
						{
							return 1;
						}
						if (!func_179(11))
						{
							if (func_177(Param0, 11))
							{
								return 1;
							}
							if (!func_179(10))
							{
								if (func_177(Param0, 10))
								{
									return 1;
								}
								if (!func_179(9))
								{
									if (func_177(Param0, 9))
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
	if (!func_179(20))
	{
		if (func_177(Param0, 20))
		{
			return 1;
		}
		if (!func_179(19))
		{
			if (func_177(Param0, 19))
			{
				return 1;
			}
			if (!func_179(18))
			{
				if (func_177(Param0, 18))
				{
					return 1;
				}
				if (!func_179(17))
				{
					if (func_177(Param0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_179(21))
	{
		if (func_177(Param0, 21))
		{
			return 1;
		}
	}
	if (!func_179(22))
	{
		if (func_177(Param0, 22))
		{
			return 1;
		}
	}
	if (!func_179(23))
	{
		if (func_177(Param0, 23))
		{
			return 1;
		}
	}
	if (!func_179(24))
	{
		if (func_177(Param0, 24))
		{
			return 1;
		}
	}
	if (!func_179(26))
	{
		if (!func_179(25))
		{
			if (func_177(Param0, 25))
			{
				return 1;
			}
		}
		else if (func_177(Param0, 26))
		{
			return 1;
		}
	}
	if (!func_179(30))
	{
		if (func_177(Param0, 30))
		{
			return 1;
		}
		if (!func_179(29))
		{
			if (func_177(Param0, 29))
			{
				return 1;
			}
			if (!func_179(28))
			{
				if (func_177(Param0, 28))
				{
					return 1;
				}
				if (!func_179(27))
				{
					if (func_177(Param0, 27))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_179(31))
	{
		if (func_177(Param0, 31))
		{
			return 1;
		}
	}
	if (!func_179(34))
	{
		if (func_177(Param0, 34))
		{
			return 1;
		}
		if (!func_179(33))
		{
			if (func_177(Param0, 33))
			{
				return 1;
			}
			if (!func_179(32))
			{
				if (func_177(Param0, 32))
				{
					return 1;
				}
			}
		}
	}
	if (!func_179(35))
	{
		if (func_177(Param0, 35))
		{
			return 1;
		}
	}
	if (!func_179(36))
	{
		if (func_177(Param0, 36))
		{
			return 1;
		}
	}
	if (!func_179(43))
	{
		if (func_177(Param0, 43))
		{
			return 1;
		}
		if (!func_179(42))
		{
			if (func_177(Param0, 42))
			{
				return 1;
			}
			if (!func_179(38))
			{
				if (func_177(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_179(39))
			{
				if (func_177(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_179(40))
			{
				if (func_177(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_179(41))
			{
				if (func_177(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_179(37))
			{
				if (func_177(Param0, 42))
				{
					return 1;
				}
			}
		}
	}
	if (!func_179(45))
	{
		if (func_177(Param0, 45))
		{
			return 1;
		}
		if (!func_179(44))
		{
			if (func_177(Param0, 44))
			{
				return 1;
			}
		}
	}
	if (!func_179(51))
	{
		if (func_177(Param0, 51))
		{
			return 1;
		}
		if (!func_179(48))
		{
			if (func_177(Param0, 48))
			{
				return 1;
			}
			if (!func_179(49))
			{
				if (func_177(Param0, 49))
				{
					return 1;
				}
			}
			if (!func_179(50))
			{
				if (func_177(Param0, 50))
				{
					return 1;
				}
			}
			if (!func_179(47))
			{
				if (func_177(Param0, 47))
				{
					return 1;
				}
				if (!func_179(46))
				{
					if (func_177(Param0, 46))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_179(53))
	{
		if (func_177(Param0, 53))
		{
			return 1;
		}
		if (!func_179(56))
		{
			if (func_177(Param0, 56))
			{
				return 1;
			}
			if (!func_179(55))
			{
				if (func_177(Param0, 55))
				{
					return 1;
				}
			}
			if (!func_179(54))
			{
				if (func_177(Param0, 54))
				{
					return 1;
				}
			}
			if (!func_179(52))
			{
				if (func_177(Param0, 52))
				{
					return 1;
				}
			}
		}
	}
	if (!func_179(57))
	{
		if (func_177(Param0, 57))
		{
			return 1;
		}
	}
	if (!func_179(62))
	{
		if (func_177(Param0, 62))
		{
			return 1;
		}
		if (!func_179(61))
		{
			if (func_177(Param0, 61))
			{
				return 1;
			}
			if (!func_179(60))
			{
				if (func_177(Param0, 60))
				{
					return 1;
				}
				if (!func_179(59))
				{
					if (func_177(Param0, 59))
					{
						return 1;
					}
					if (!func_179(58))
					{
						if (func_177(Param0, 58))
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

int func_177(struct<3> Param0, int iParam3)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, func_178(iParam3));
	if (fVar0 <= 625f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_178(int iParam0)
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = { -1604.668f, 5239.1f, 3.01f };
	}
	else if (iParam0 == 1)
	{
		Var0 = { -1592.84f, 5214.04f, 3.01f };
	}
	else if (iParam0 == 2)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 3)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 4)
	{
		Var0 = { 414f, -761f, 29f };
	}
	else if (iParam0 == 5)
	{
		Var0 = { 1199.27f, -1255.63f, 34.23f };
	}
	else if (iParam0 == 6)
	{
		Var0 = { -468.9f, -1713.06f, 18.21f };
	}
	else if (iParam0 == 7)
	{
		Var0 = { 237.65f, -385.41f, 44.4f };
	}
	else if (iParam0 == 8)
	{
		Var0 = { -1458.97f, 485.99f, 115.38f };
	}
	else if (iParam0 == 9)
	{
		Var0 = { -1622.89f, 4204.87f, 83.3f };
	}
	else if (iParam0 == 10)
	{
		Var0 = { 242.7f, 362.7f, 104.74f };
	}
	else if (iParam0 == 11)
	{
		Var0 = { 1835.53f, 4705.86f, 38.1f };
	}
	else if (iParam0 == 12)
	{
		Var0 = { 1826.13f, 4698.88f, 38.92f };
	}
	else if (iParam0 == 13)
	{
		Var0 = { 637.02f, 119.7093f, 89.5f };
	}
	else if (iParam0 == 14)
	{
		Var0 = { -2892.93f, 3192.37f, 11.66f };
	}
	else if (iParam0 == 15)
	{
		Var0 = { 524.43f, 3079.82f, 39.48f };
	}
	else if (iParam0 == 16)
	{
		Var0 = { -697.75f, 45.38f, 43.03f };
	}
	else if (iParam0 == 17)
	{
		Var0 = { -188.22f, 1296.1f, 302.86f };
	}
	else if (iParam0 == 18)
	{
		Var0 = { -954.19f, -2760.05f, 14.64f };
	}
	else if (iParam0 == 19)
	{
		Var0 = { -63.8f, -809.5f, 321.8f };
	}
	else if (iParam0 == 20)
	{
		Var0 = { 1731.41f, 96.96f, 170.39f };
	}
	else if (iParam0 == 21)
	{
		Var0 = { -1877.82f, -440.649f, 45.05f };
	}
	else if (iParam0 == 22)
	{
		Var0 = { 809.66f, 1279.76f, 360.49f };
	}
	else if (iParam0 == 23)
	{
		Var0 = { -915.6f, 6139.2f, 5.5f };
	}
	else if (iParam0 == 24)
	{
		Var0 = { -72.29f, -1260.63f, 28.14f };
	}
	else if (iParam0 == 25)
	{
		Var0 = { 1804.32f, 3931.33f, 32.82f };
	}
	else if (iParam0 == 26)
	{
		Var0 = { -684.17f, 5839.16f, 16.09f };
	}
	else if (iParam0 == 27)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 28)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 29)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 30)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 31)
	{
		Var0 = { 2726.1f, 4145f, 44.3f };
	}
	else if (iParam0 == 32)
	{
		Var0 = { 327.85f, 3405.7f, 35.73f };
	}
	else if (iParam0 == 33)
	{
		Var0 = { 18f, 4527f, 105f };
	}
	else if (iParam0 == 34)
	{
		Var0 = { -303.82f, 6211.29f, 31.05f };
	}
	else if (iParam0 == 35)
	{
		Var0 = { 1972.59f, 3816.43f, 32.42f };
	}
	else if (iParam0 == 36)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 37)
	{
		Var0 = { -1097.16f, 790.01f, 164.52f };
	}
	else if (iParam0 == 38)
	{
		Var0 = { -558.65f, 284.49f, 90.86f };
	}
	else if (iParam0 == 39)
	{
		Var0 = { -1034.15f, 366.08f, 80.11f };
	}
	else if (iParam0 == 40)
	{
		Var0 = { -623.91f, -266.17f, 37.76f };
	}
	else if (iParam0 == 41)
	{
		Var0 = { -1096.85f, 67.68f, 52.95f };
	}
	else if (iParam0 == 42)
	{
		Var0 = { -1310.7f, -640.22f, 26.54f };
	}
	else if (iParam0 == 43)
	{
		Var0 = { -44.75f, -1288.67f, 28.21f };
	}
	else if (iParam0 == 44)
	{
		Var0 = { 2468.51f, 3437.39f, 49.9f };
	}
	else if (iParam0 == 45)
	{
		Var0 = { 2319.44f, 2583.58f, 46.76f };
	}
	else if (iParam0 == 46)
	{
		Var0 = { -149.75f, 285.81f, 93.67f };
	}
	else if (iParam0 == 47)
	{
		Var0 = { -70.71f, 301.43f, 106.79f };
	}
	else if (iParam0 == 48)
	{
		Var0 = { -257.22f, 292.85f, 90.63f };
	}
	else if (iParam0 == 49)
	{
		Var0 = { 305.52f, 157.19f, 102.94f };
	}
	else if (iParam0 == 50)
	{
		Var0 = { 1040.96f, -534.42f, 60.17f };
	}
	else if (iParam0 == 51)
	{
		Var0 = { -484.2f, 229.68f, 82.21f };
	}
	else if (iParam0 == 52)
	{
		Var0 = { 908f, 3643.7f, 32.2f };
	}
	else if (iParam0 == 54)
	{
		Var0 = { 465.1f, -1849.3f, 27.8f };
	}
	else if (iParam0 == 55)
	{
		Var0 = { -161f, -1669.7f, 33f };
	}
	else if (iParam0 == 56)
	{
		Var0 = { -1298.2f, 2504.14f, 21.09f };
	}
	else if (iParam0 == 53)
	{
		Var0 = { 1181.5f, -400.1f, 67.5f };
	}
	else if (iParam0 == 57)
	{
		Var0 = { -1298.98f, 4640.16f, 105.67f };
	}
	else if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		Var0 = { -14.39f, -1472.69f, 29.58f };
	}
	else if (iParam0 == 60)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 61)
	{
		Var0 = { 0f, 0f, 0f };
	}
	return Var0;
}

bool func_179(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 3);
}

int func_180()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (Local_204[iVar0 /*261*/].f_257 - 1))
		{
			if (unk_0xF426A5DE932B3BEE(Local_204[iVar0 /*261*/].f_258, iVar1))
			{
				if (func_182(sLocal_1263))
				{
					if (Local_204[iVar0 /*261*/].f_260 == 0)
					{
						if (func_12())
						{
							func_65(21);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 2)
					{
						if (func_12())
						{
							func_65(22);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 1)
					{
						if (func_12())
						{
							func_65(23);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 3)
					{
						if (func_12())
						{
							func_65(20);
						}
					}
					return 1;
				}
				if (func_181(&(Local_204[iVar0 /*261*/][iVar1 /*8*/])))
				{
					if (Local_204[iVar0 /*261*/].f_260 == 0)
					{
						if (func_12())
						{
							func_65(21);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 2)
					{
						if (func_12())
						{
							func_65(22);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 1)
					{
						if (func_12())
						{
							func_65(23);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 3)
					{
						if (func_12())
						{
							func_65(20);
						}
					}
					return 1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_181(var uParam0)
{
	if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_182(char* sParam0)
{
	int iVar0;
	
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!unk_0x0275404839C0A19A(sLocal_1249[iVar0]))
		{
			if (unk_0xC1C5B83BB6719C6C(sLocal_1249[iVar0], sParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183(struct<3> Param0)
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((unk_0xB7A628320EFF8E47(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || unk_0xB7A628320EFF8E47(Param0, -62.0307f, -1839.859f, 25.6787f) <= 400f) || unk_0xB7A628320EFF8E47(Param0, -234.7648f, -1150.311f, 21.9224f) <= 400f)
	{
		func_65(21);
		return 1;
	}
	return 0;
}

int func_184()
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_186(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 145, 1);
	fVar1 = unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Global_86649[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (func_12())
		{
			func_185(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_185(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		func_65(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		func_65(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		func_65(34);
	}
}

int func_186(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_187(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x676D4CD42E0837CA(Param0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_187(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iParam0], 0);
}

int func_188()
{
	if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1276.123f, -1723.665f, 53.6551f) <= 52900f)
	{
		if (func_12())
		{
			func_65(30);
		}
		return 1;
	}
	else if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 111.8564f, -751.7169f, 44.757f) <= 160000f)
	{
		if (func_12())
		{
			func_65(31);
		}
		return 1;
	}
	else if (func_189(200f))
	{
		if (func_12())
		{
			func_65(19);
		}
		return 1;
	}
	return 0;
}

int func_189(float fParam0)
{
	if (iLocal_42 == 1)
	{
		if (func_71(unk_0x27D769C59BC9D030(), Global_87557[1 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 2)
	{
		if (func_71(unk_0x27D769C59BC9D030(), Global_87557[0 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 0)
	{
		if (func_71(unk_0x27D769C59BC9D030(), Global_87557[3 /*15*/], fParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_190(int iParam0, int iParam1)
{
	func_4(iParam0);
	if (func_2(func_3(iParam0)))
	{
		unk_0x5BD150B52CE8D356(1);
		unk_0x26545538B51562AD(&iLocal_105, 15);
	}
	if (iParam1 != 46)
	{
		func_4(iParam1);
		if (func_2(func_3(iParam1)))
		{
			unk_0x5BD150B52CE8D356(1);
			unk_0x26545538B51562AD(&iLocal_105, 15);
		}
	}
}

int func_191()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return 0;
}

void func_192()
{
	int iVar0;
	int iVar1;
	
	if ((Global_35711 == 15 && iLocal_38 == 0) && !func_191())
	{
		if (!unk_0x5D293E404CA20AA5())
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_105, 0))
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (!func_204())
					{
						if (!unk_0xF426A5DE932B3BEE(iLocal_105, 7))
						{
							iVar0 = unk_0x070841EC2D20AB5A();
							if (func_80(iVar0))
							{
								if (!func_203(iVar0))
								{
									if (!unk_0xE8E046017EE675F2(iVar0, "Getaway_Winched"))
									{
										if (func_196(iVar0) && !func_195())
										{
											if (!unk_0xE24B37600DCB21FC(iVar0))
											{
												if (func_66(unk_0x27D769C59BC9D030()) == 0)
												{
													func_65(17);
												}
												else
												{
													func_65(18);
												}
												iLocal_109 = iVar0;
												if (unk_0xBC2F3726EAB9B952(iLocal_109, "GetawayVehicleValid", 1))
												{
												}
												unk_0xAF3355298F537BB0(iLocal_109, 1, 1);
												unk_0x26545538B51562AD(&iLocal_105, 0);
												unk_0x26545538B51562AD(&iLocal_105, 8);
												unk_0x26545538B51562AD(&iLocal_105, 7);
												return;
											}
											else
											{
												func_19(&iLocal_109);
												unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
												unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
												return;
											}
										}
									}
									if (unk_0xBC2F3726EAB9B952(iVar0, "GetawayVehicleValid", 0))
									{
									}
									unk_0x26545538B51562AD(&iLocal_105, 7);
								}
								else if (func_194(iVar0))
								{
									iLocal_109 = iVar0;
									unk_0xAF3355298F537BB0(iLocal_109, 1, 1);
									unk_0x26545538B51562AD(&iLocal_105, 0);
									unk_0x26545538B51562AD(&iLocal_105, 8);
									unk_0x26545538B51562AD(&iLocal_105, 7);
									return;
								}
							}
							else
							{
								func_19(&iLocal_109);
								unk_0x26545538B51562AD(&iLocal_105, 7);
								unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
							}
						}
						else if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
						{
							if (!func_80(iLocal_109))
							{
								func_19(&iLocal_109);
								unk_0x26545538B51562AD(&iLocal_105, 0);
								unk_0x26545538B51562AD(&iLocal_105, 8);
								unk_0x26545538B51562AD(&iLocal_105, 7);
							}
						}
					}
				}
				else if (unk_0xF426A5DE932B3BEE(iLocal_105, 8))
				{
					iVar1 = unk_0x070841EC2D20AB5A();
					if (func_80(iVar1))
					{
						if (func_18(unk_0x27D769C59BC9D030(), iVar1, 10f, 1) && !unk_0xE8E046017EE675F2(iVar1, "Getaway_Winched"))
						{
							iLocal_109 = iVar1;
							unk_0xAF3355298F537BB0(iLocal_109, 1, 1);
							unk_0x26545538B51562AD(&iLocal_105, 0);
							unk_0x26545538B51562AD(&iLocal_105, 7);
						}
					}
				}
				else
				{
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
				}
			}
			else if (func_80(iLocal_109))
			{
				if (!func_18(unk_0x27D769C59BC9D030(), iLocal_109, 80f, 1))
				{
					if (!unk_0xE8E046017EE675F2(iLocal_109, "Getaway_Winched"))
					{
						unk_0x26545538B51562AD(&(uLocal_101[func_5(5)]), 5);
						unk_0x26545538B51562AD(&iLocal_105, 8);
					}
					else
					{
						unk_0xF17F4B0641AB2DE1(&iLocal_105, 8);
					}
					func_19(&iLocal_109);
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
				}
				else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0) != iLocal_109)
					{
						func_19(&iLocal_109);
						func_190(17, 46);
						func_190(18, 46);
						func_190(14, 46);
						func_161();
					}
					else if (func_204())
					{
						func_19(&iLocal_109);
						func_161();
					}
				}
				else if (!func_193(iLocal_109))
				{
					if (unk_0xBC2F3726EAB9B952(iLocal_109, "GetawayVehicleValid", 0))
					{
					}
					func_190(17, 46);
					func_190(18, 46);
					func_19(&iLocal_109);
					func_161();
				}
			}
			else
			{
				func_19(&iLocal_109);
				func_161();
			}
		}
	}
}

int func_193(int iParam0)
{
	if (unk_0x4C3235E6E203703D(iParam0) < 300 || unk_0xB23CB7DBBE38B63C(iParam0) < 300f)
	{
		func_65(6);
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
{
	if (unk_0xE8E046017EE675F2(iParam0, "GetawayVehicleValid"))
	{
		if (unk_0xF47B23D65F733C81(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_195()
{
	if (unk_0x99A6DF927B71E935(unk_0x27D769C59BC9D030()))
	{
		if ((unk_0x9297C590C99228DC(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0) == unk_0x27D769C59BC9D030() || unk_0x9297C590C99228DC(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 1) == unk_0x27D769C59BC9D030()) || unk_0x9297C590C99228DC(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 2) == unk_0x27D769C59BC9D030())
		{
			return 1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if ((func_202() && func_198(iParam0)) && func_197(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1AEADBB0240E0B51(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_65(15);
	return 0;
}

int func_198(int iParam0)
{
	if ((func_200(iParam0) && !func_199(iParam0)) && func_193(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == 0)
	{
		func_65(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_65(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_65(27);
		return 1;
	}
	if (func_33(iParam0))
	{
		func_65(14);
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	if (!func_201(iVar0))
	{
		if (unk_0x8A8EDD5DBFB78C2B(iVar0) > 0.165f && unk_0xCCD3117192234E89(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_65(14);
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_192[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_240(33))
			{
				unk_0x26545538B51562AD(&iLocal_105, 3);
			}
			else if (iVar0 == 1 && !func_240(34))
			{
				unk_0x26545538B51562AD(&iLocal_105, 3);
			}
			else
			{
				unk_0xF17F4B0641AB2DE1(&iLocal_105, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_202()
{
	if ((((unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()) || unk_0x8F64F1C94CD1AEE6(unk_0x27D769C59BC9D030())) || unk_0x3251F555598BA7A6(unk_0x27D769C59BC9D030())) || unk_0x5D257DFB3D438E9A(unk_0x27D769C59BC9D030())) || unk_0x9E35D835B763A5DA(unk_0x27D769C59BC9D030()))
	{
		func_65(14);
		return 0;
	}
	return 1;
}

int func_203(int iParam0)
{
	if (unk_0xE8E046017EE675F2(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	int iVar0;
	
	if (func_205(&iVar0))
	{
		if (!unk_0xE8E046017EE675F2(iVar0, "Getaway_Winched"))
		{
			unk_0xBC2F3726EAB9B952(iVar0, "Getaway_Winched", 1);
			func_65(16);
			return 1;
		}
		else if (unk_0xF47B23D65F733C81(iVar0, "Getaway_Winched"))
		{
			return 0;
		}
	}
	return 0;
}

int func_205(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_233(unk_0x27D769C59BC9D030()) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar0 = unk_0x070841EC2D20AB5A();
		if (func_80(iVar0))
		{
			iVar1 = unk_0x946C63BD9EF05437(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x49DCB5DE283168AD(iVar0))
				{
					iVar2 = unk_0xC038610ACB5911A8(iVar0);
					if (unk_0xD2CFFE76B625AE55(iVar2))
					{
						*uParam0 = unk_0x35E488C304B2E03E(iVar2);
						if (func_80(*uParam0))
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

void func_206()
{
	switch (iLocal_203)
	{
		case 0:
			if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
			{
				if ((unk_0xA0F74982C6AAA9D4() - iLocal_1266) > 500)
				{
					sLocal_1263 = unk_0x6E6FC26F3BAE53A5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1));
					iLocal_203 = 1;
				}
				else if (iLocal_1266 == -1)
				{
					iLocal_1266 = unk_0xA0F74982C6AAA9D4();
				}
			}
			break;
		
		case 1:
			if ((unk_0xA0F74982C6AAA9D4() - Local_204[iLocal_1265 /*261*/].f_259) > 500)
			{
				if (!unk_0x75CB9E30BA492FF0(sLocal_1263) && !unk_0x75CB9E30BA492FF0(Local_204[iLocal_1265 /*261*/][iLocal_1264 /*8*/]))
				{
					if (unk_0xC1C5B83BB6719C6C(sLocal_1263, Local_204[iLocal_1265 /*261*/][iLocal_1264 /*8*/]))
					{
						unk_0x26545538B51562AD(&(Local_204[iLocal_1265 /*261*/].f_258), iLocal_1264);
					}
					else
					{
						unk_0xF17F4B0641AB2DE1(&(Local_204[iLocal_1265 /*261*/].f_258), iLocal_1264);
					}
				}
				else
				{
					sLocal_1263 = unk_0x6E6FC26F3BAE53A5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1));
				}
				iLocal_1264++;
				if (iLocal_1264 >= (Local_204[iLocal_1265 /*261*/].f_257 - 1))
				{
					iLocal_1264 = 0;
					Local_204[iLocal_1265 /*261*/].f_259 = unk_0xA0F74982C6AAA9D4();
					iLocal_1265++;
					if (iLocal_1265 >= 4)
					{
						iLocal_1265 = 0;
						iLocal_1266 = unk_0xA0F74982C6AAA9D4();
						iLocal_203 = 0;
					}
				}
			}
			break;
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_35711 == 15 && iLocal_37 != 3) && unk_0xF426A5DE932B3BEE(iLocal_105, 5)) && !func_191()) && Global_69486 == -1) && !func_217()) && !func_79(9)) || func_98(35))
	{
		func_216();
		func_214();
		switch (iLocal_39)
		{
			case 0:
				if (unk_0xF426A5DE932B3BEE(iLocal_105, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_213(uLocal_101[0], &iVar0);
						}
					}
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_213(uLocal_101[1], &iVar0);
						}
					}
					unk_0x26545538B51562AD(&iLocal_105, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_208(iLocal_100, 1);
				break;
		}
	}
	else if (((((((Global_35711 != 15 || Global_35711 != 0) || Global_35711 != 2) || Global_35711 != 4) || Global_35711 != 17) || func_191()) || Global_69486 == -1) || Global_100209)
	{
		iVar1 = 0;
		if (func_125())
		{
			iVar1 = 1;
		}
		else if (Global_100209)
		{
			iVar1 = 2;
		}
		if (unk_0xF426A5DE932B3BEE(uLocal_101[func_5(iVar1)], iVar1))
		{
			func_208(iVar1, 0);
		}
	}
}

void func_208(int iParam0, bool bParam1)
{
	switch (iLocal_39)
	{
		case 1:
			if ((!unk_0x46768B1495288824() && !func_211(func_84())) && !func_210())
			{
				func_209(func_3(iParam0), 15000);
				iLocal_39 = 2;
			}
			break;
		
		case 2:
			if (func_2(func_3(iParam0)))
			{
				fLocal_104 = 0f;
				iLocal_39 = 3;
			}
			else
			{
				fLocal_104 = (fLocal_104 + unk_0xFF104D8C26C113A2());
				if (fLocal_104 >= 20f)
				{
					iLocal_39 = 4;
				}
				else if (unk_0xF426A5DE932B3BEE(iLocal_105, 15))
				{
					func_4(iParam0);
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 15);
					iLocal_39 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(iParam0)))
			{
				if (fLocal_104 >= 7.5f || unk_0xF426A5DE932B3BEE(iLocal_105, 15))
				{
					func_4(iParam0);
					unk_0xF17F4B0641AB2DE1(&iLocal_105, 15);
					iLocal_39 = 4;
				}
				else if (bParam1)
				{
					iLocal_39 = 0;
				}
				else
				{
					iLocal_39 = 1;
					fLocal_104 = 0f;
				}
			}
			else
			{
				fLocal_104 = (fLocal_104 + unk_0xFF104D8C26C113A2());
			}
			break;
		
		case 4:
			fLocal_104 = 0f;
			iLocal_39 = 0;
			break;
	}
}

void func_209(var uParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(uParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

int func_210()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (func_52(iParam0))
	{
		if (func_212(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_101154.f_6378.f_136)
			{
				if (Global_101154.f_6378[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	if (!func_52(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_6378.f_651[iVar0 /*14*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_6378.f_765[iVar0 /*10*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_6(*iParam1);
	if (unk_0xF426A5DE932B3BEE(iParam0, iVar0))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_105, 3))
		{
			iLocal_100 = *iParam1;
			iLocal_39 = 1;
			fLocal_104 = 0f;
			func_4(44);
			func_4(45);
			iLocal_1269 = unk_0xA0F74982C6AAA9D4();
			*iParam1 = 46;
		}
		else if (14 == iVar0)
		{
			func_4(iVar0);
			*iParam1 = 46;
		}
		else
		{
			iLocal_100 = *iParam1;
			iLocal_39 = 1;
			fLocal_104 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_214()
{
	if (iLocal_37 == 0 || iLocal_37 == 1)
	{
		switch (iLocal_38)
		{
			case 0:
				if (func_215(func_3(3), 0, 0))
				{
					unk_0x26545538B51562AD(&iLocal_105, 15);
					unk_0x5BD150B52CE8D356(1);
				}
				if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_125()) && !Global_99796)
					{
						unk_0x26545538B51562AD(&iLocal_105, 15);
						unk_0x5BD150B52CE8D356(1);
					}
					iLocal_38 = 1;
				}
				break;
			
			case 1:
				if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
				{
					if (iLocal_42 == 2)
					{
						if (iLocal_37 == 1)
						{
							if (func_80(iLocal_109))
							{
								func_65(3);
								func_1(3, 1);
							}
						}
						iLocal_38 = 2;
					}
					else
					{
						if (func_80(iLocal_109))
						{
							func_65(3);
							func_1(3, 1);
						}
						iLocal_38 = 2;
					}
				}
				else
				{
					iLocal_38 = 2;
				}
				break;
			
			case 2:
				if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
				{
					if (func_2(func_3(3)))
					{
						unk_0x26545538B51562AD(&iLocal_105, 15);
						unk_0x5BD150B52CE8D356(1);
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

bool func_215(var uParam0, int iParam1, int iParam2)
{
	unk_0x907B9289657244FB(uParam0);
	if (iParam1 == 1)
	{
		unk_0x2B088D6251C2080D(iParam2);
	}
	return unk_0x07B8D9CA22BFDA75();
}

void func_216()
{
	if ((((!func_98(func_99()) && !func_98(35)) && !func_211(func_84())) && !func_210()) && !func_110())
	{
		if (iLocal_1270 < 2 && (unk_0xA0F74982C6AAA9D4() - iLocal_1269) > 480000)
		{
			if (iLocal_42 != 2)
			{
				func_65(44);
			}
			else
			{
				func_65(45);
			}
			iLocal_1270++;
		}
	}
}

int func_217()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	if (func_70())
	{
		if (unk_0xF426A5DE932B3BEE(iLocal_105, 2))
		{
			if (func_80(iLocal_109))
			{
				func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
				func_19(&iLocal_109);
			}
			unk_0xF17F4B0641AB2DE1(&iLocal_105, 2);
		}
		func_1(46, 1);
		func_248(0);
	}
}

void func_219()
{
	if (!func_224())
	{
		if (!func_217())
		{
			if (unk_0xCBB243DDC0D132D1())
			{
				if (!unk_0xF1384D7CDC020749())
				{
					func_221();
				}
			}
		}
	}
	else if (iLocal_37 != 3)
	{
		func_220();
	}
}

void func_220()
{
	if (iLocal_37 != 4)
	{
		if (iLocal_37 != 2)
		{
			if (unk_0x46768B1495288824() && !Global_99796)
			{
				unk_0x26545538B51562AD(&iLocal_105, 15);
				unk_0x5BD150B52CE8D356(1);
			}
			if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
			{
				if (func_80(iLocal_109))
				{
					unk_0xBC513CF9473E6605(iLocal_109, 0);
				}
				func_19(&iLocal_109);
				func_161();
				if (iLocal_42 != 2)
				{
					Local_106 = { 0f, 0f, 0f };
				}
				unk_0xF17F4B0641AB2DE1(&iLocal_105, 8);
			}
		}
		else if (unk_0xF426A5DE932B3BEE(iLocal_105, 0))
		{
			func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
			if (func_80(iLocal_109))
			{
				unk_0xBC513CF9473E6605(iLocal_109, 0);
			}
			func_19(&iLocal_109);
			func_161();
		}
		if (unk_0xCB612AFFB3836CA1("GETAWY", 5))
		{
			unk_0x85DF15590BBEBCCD(5, 0);
			unk_0xF17F4B0641AB2DE1(&iLocal_105, 4);
			unk_0xF17F4B0641AB2DE1(&iLocal_105, 5);
			func_248(0);
			if (func_125())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_37 = 3;
	}
}

void func_221()
{
	func_223();
	if (unk_0xF426A5DE932B3BEE(iLocal_105, 4))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_105, 5) && !unk_0xF426A5DE932B3BEE(iLocal_105, 16))
		{
			unk_0x8378AB3CED5FF44A("GETAWY", 5);
			if (unk_0xCB612AFFB3836CA1("GETAWY", 5))
			{
				unk_0x26545538B51562AD(&iLocal_105, 5);
			}
			if (unk_0xF426A5DE932B3BEE(iLocal_105, 5))
			{
				func_222();
				iLocal_39 = 0;
				unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
				unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
				unk_0xF17F4B0641AB2DE1(&iLocal_105, 1);
				if (func_2(func_3(0)))
				{
					unk_0x5BD150B52CE8D356(1);
				}
				func_4(0);
				iLocal_37 = Global_101154.f_8739.f_128;
			}
		}
	}
}

void func_222()
{
	if (!func_98(func_99()))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_105, 12))
		{
			if (func_96())
			{
				if (iLocal_42 != 2)
				{
					func_65(44);
				}
				else
				{
					func_65(45);
				}
				unk_0x26545538B51562AD(&iLocal_105, 12);
			}
		}
	}
}

void func_223()
{
	if (!unk_0x006FF350B8CE5C45(5))
	{
		unk_0x26545538B51562AD(&iLocal_105, 4);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 4);
	}
}

int func_224()
{
	if (iLocal_42 != 2)
	{
		if (iLocal_42 == 1 && func_84() == 2)
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_105, 16))
			{
				unk_0x26545538B51562AD(&iLocal_105, 16);
			}
			return 1;
		}
		else if (unk_0xF426A5DE932B3BEE(iLocal_105, 16))
		{
			unk_0xF17F4B0641AB2DE1(&iLocal_105, 16);
		}
		if (func_225())
		{
			return 0;
		}
	}
	else if (func_98(35))
	{
		return 0;
	}
	else if (func_225())
	{
		return 0;
	}
	return 1;
}

int func_225()
{
	if (((((Global_35711 == 15 && !func_191()) && Global_69486 == -1) && !func_125()) && !func_189(1112014848)) && !Global_100209)
	{
		return 1;
	}
	return 0;
}

void func_226()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_105, 13))
	{
		if (func_227())
		{
			unk_0x26545538B51562AD(&iLocal_105, 13);
		}
	}
	else if (!func_227())
	{
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 7);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 0);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 1);
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 13);
	}
}

int func_227()
{
	if (((((func_228(39) || func_228(40)) || func_228(41)) || func_228(42)) || func_228(43)) || func_228(44))
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	return func_229(iParam0, 6, 1);
}

int func_229(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF426A5DE932B3BEE(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_91() == 0)
		{
			return unk_0xF426A5DE932B3BEE(func_230(func_232(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_231(iParam1)];
	if (unk_0xD0D748C6C14C0E92(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

int func_233(int iParam0)
{
	if (func_81(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(bool bParam0)
{
	if (bParam0)
	{
		if (func_235())
		{
			return 1;
		}
	}
	if (func_79(14))
	{
		return 1;
	}
	return 0;
}

int func_235()
{
	if (Global_100101)
	{
		return 1;
	}
	if (!func_79(14) && unk_0xD32535FA4397160F(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_236(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99796 && iParam1)
	{
		if (func_2(sParam0) && !unk_0x46F94E0B75FDB895())
		{
			unk_0x5BD150B52CE8D356(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_101154.f_24935.f_145 - 2))
			{
				func_239(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_238((Global_101154.f_24935.f_145 - 1));
			Global_101154.f_24935.f_145 = (Global_101154.f_24935.f_145 - 1);
			func_237();
			return;
		}
		iVar0++;
	}
}

void func_237()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_238(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_239(int iParam0, int iParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = { Global_101154.f_24935[iParam1 /*16*/] };
	Global_101154.f_24935[iParam0 /*16*/].f_4 = { Global_101154.f_24935[iParam1 /*16*/].f_4 };
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[iParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[iParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[iParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[iParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[iParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[iParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[iParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[iParam1 /*16*/].f_15;
}

int func_240(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_241(int iParam0)
{
	iLocal_42 = iParam0;
	if (iLocal_42 == 0)
	{
		sLocal_1272 = "FBIPRAU";
	}
	else if (iLocal_42 == 1)
	{
		sLocal_1272 = "AHFAUD";
	}
	else if (iLocal_42 == 2)
	{
		sLocal_1272 = "FHFAUD";
	}
	iLocal_192[0] = joaat("trash");
	iLocal_192[1] = joaat("towtruck");
	iLocal_192[2] = joaat("ambulance");
	iLocal_192[3] = joaat("barracks2");
	iLocal_192[4] = joaat("stretch");
	iLocal_192[5] = joaat("phantom");
	iLocal_192[6] = joaat("packer");
	iLocal_192[7] = joaat("blazer");
	iLocal_192[8] = joaat("blazer2");
	if (iLocal_42 != 0)
	{
		iLocal_192[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_192[9] = 0;
	}
	func_244();
	func_242();
	unk_0x26545538B51562AD(&iLocal_105, 17);
	iLocal_1269 = unk_0xA0F74982C6AAA9D4();
}

void func_242()
{
	sLocal_53[0] = "AM_H_FBIC1A";
	sLocal_53[1] = "AM_H_FBIC1B";
	sLocal_53[2] = "AM_H_FBIC1C";
	sLocal_53[3] = "PRC_WANT";
	sLocal_53[4] = "PRC_DROPOFF";
	sLocal_53[5] = "PRC_INVALVEH";
	sLocal_53[6] = "PRC_HEALTH";
	sLocal_53[7] = func_243(7);
	sLocal_53[8] = func_243(8);
	sLocal_53[9] = "PRC_USEFIRST";
	sLocal_53[10] = func_243(10);
	sLocal_53[11] = func_243(11);
	sLocal_53[13] = func_243(13);
	sLocal_53[12] = func_243(12);
	sLocal_53[14] = "PRC_UNUSE";
	sLocal_53[15] = "PRC_SEATS";
	sLocal_53[16] = "PRC_CBOBVAL";
	sLocal_53[17] = func_243(17);
	sLocal_53[18] = func_243(18);
	sLocal_53[20] = func_243(20);
	sLocal_53[21] = "PRC_PUBAREA";
	sLocal_53[22] = "PRC_LAWAREA";
	sLocal_53[23] = "PRC_RESAREA";
	sLocal_53[24] = "PRC_STOP";
	sLocal_53[25] = "PRC_OWNEDM";
	sLocal_53[26] = "PRC_OWNEDF";
	sLocal_53[27] = "PRC_OWNEDT";
	sLocal_53[28] = "PRC_SECROUTE";
	sLocal_53[29] = "PRC_CLOSELOT";
	sLocal_53[30] = "PRC_CLOSELES";
	sLocal_53[31] = "PRC_CLSAGNT";
	sLocal_53[32] = "PRC_CLOSESAFE_M";
	sLocal_53[33] = "PRC_CLOSESAFE_F";
	sLocal_53[34] = "PRC_CLOSESAFE_T";
	sLocal_53[35] = "PRC_PEDS";
	sLocal_53[36] = "PRC_WATER";
	sLocal_53[37] = "PRC_OBST";
	sLocal_53[38] = "PRC_OBSTVEH";
	sLocal_53[39] = "PRC_UPDWN";
	sLocal_53[40] = "PRC_NEARROAD";
	sLocal_53[41] = "PRC_ONROAD";
	sLocal_53[19] = "PRC_PLAN";
	sLocal_53[42] = "PRC_TOOSTEEP";
	sLocal_53[43] = "PRC_UNEVEN";
	sLocal_53[44] = "PRC_REMIND";
	sLocal_53[45] = "PRC_REMINDA";
}

char* func_243(int iParam0)
{
	char* sVar0;
	
	if (iLocal_42 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_42 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_42 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_244()
{
	sLocal_1249[0] = "ARMYB";
	sLocal_1249[1] = "AIRP";
	sLocal_1249[2] = "STAD";
	sLocal_1249[3] = "TERMINA";
	sLocal_1249[4] = "MOVIE";
	sLocal_1249[5] = "JAIL";
	sLocal_1249[6] = "OCEANA";
	sLocal_1249[7] = "GOLF";
	sLocal_1249[8] = "HORS";
	sLocal_1249[9] = "MTCHIL";
	sLocal_1249[10] = "MTGORDO";
	sLocal_1249[11] = "SANCHIA";
	sLocal_1249[12] = "TATAMO";
	Local_204[0 /*261*/][0 /*8*/] = { func_245("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_204[0 /*261*/][1 /*8*/] = { func_245("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_204[0 /*261*/][2 /*8*/] = { func_245("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_204[0 /*261*/][3 /*8*/] = { func_245("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_204[0 /*261*/][4 /*8*/] = { func_245("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_204[0 /*261*/][5 /*8*/] = { func_245("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_204[0 /*261*/][6 /*8*/] = { func_245("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_204[0 /*261*/][7 /*8*/] = { func_245("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_204[0 /*261*/][8 /*8*/] = { func_245("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_204[0 /*261*/][9 /*8*/] = { func_245("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_204[0 /*261*/][10 /*8*/] = { func_245("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_204[0 /*261*/][11 /*8*/] = { func_245("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_204[0 /*261*/][13 /*8*/] = { func_245("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_204[0 /*261*/][14 /*8*/] = { func_245("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][15 /*8*/] = { func_245("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][16 /*8*/] = { func_245("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][17 /*8*/] = { func_245("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][18 /*8*/] = { func_245("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][19 /*8*/] = { func_245("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][20 /*8*/] = { func_245("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_204[0 /*261*/][21 /*8*/] = { func_245("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_204[0 /*261*/][22 /*8*/] = { func_245("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_204[0 /*261*/][23 /*8*/] = { func_245("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_204[0 /*261*/][24 /*8*/] = { func_245("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_204[0 /*261*/][25 /*8*/] = { func_245("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_204[0 /*261*/][26 /*8*/] = { func_245("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_204[0 /*261*/][27 /*8*/] = { func_245("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_204[0 /*261*/][28 /*8*/] = { func_245("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_204[0 /*261*/][29 /*8*/] = { func_245("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_204[0 /*261*/][30 /*8*/] = { func_245("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_204[0 /*261*/][31 /*8*/] = { func_245("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_204[0 /*261*/].f_260 = 0;
	Local_204[0 /*261*/].f_257 = 32;
	Local_204[2 /*261*/][0 /*8*/] = { func_245("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_204[2 /*261*/][1 /*8*/] = { func_245("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_204[2 /*261*/][2 /*8*/] = { func_245("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_204[2 /*261*/][3 /*8*/] = { func_245("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_204[2 /*261*/][4 /*8*/] = { func_245("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_204[2 /*261*/][5 /*8*/] = { func_245("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[2 /*261*/][6 /*8*/] = { func_245("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[2 /*261*/].f_260 = 2;
	Local_204[2 /*261*/].f_257 = 7;
	Local_204[1 /*261*/][0 /*8*/] = { func_245("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_204[1 /*261*/][1 /*8*/] = { func_245("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_204[1 /*261*/][2 /*8*/] = { func_245("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_204[1 /*261*/][3 /*8*/] = { func_245("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_204[1 /*261*/][4 /*8*/] = { func_245("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_204[1 /*261*/][5 /*8*/] = { func_245("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_204[1 /*261*/][6 /*8*/] = { func_245("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_204[1 /*261*/][7 /*8*/] = { func_245("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_204[1 /*261*/][8 /*8*/] = { func_245("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_204[1 /*261*/][9 /*8*/] = { func_245("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_204[1 /*261*/][10 /*8*/] = { func_245("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_204[1 /*261*/][11 /*8*/] = { func_245("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_204[1 /*261*/][12 /*8*/] = { func_245("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_204[1 /*261*/][13 /*8*/] = { func_245("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_204[1 /*261*/][14 /*8*/] = { func_245("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_204[1 /*261*/][15 /*8*/] = { func_245("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_204[1 /*261*/][16 /*8*/] = { func_245("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_204[1 /*261*/][17 /*8*/] = { func_245("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_204[1 /*261*/][18 /*8*/] = { func_245("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_204[1 /*261*/][19 /*8*/] = { func_245("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_204[1 /*261*/][20 /*8*/] = { func_245("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_204[1 /*261*/][21 /*8*/] = { func_245("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_204[1 /*261*/].f_260 = 1;
	Local_204[1 /*261*/].f_257 = 22;
	Local_204[3 /*261*/][0 /*8*/] = { func_245("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][1 /*8*/] = { func_245("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][2 /*8*/] = { func_245("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][3 /*8*/] = { func_245("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][4 /*8*/] = { func_245("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_204[3 /*261*/][5 /*8*/] = { func_245("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_204[3 /*261*/][6 /*8*/] = { func_245("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_204[3 /*261*/][7 /*8*/] = { func_245("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_204[3 /*261*/][8 /*8*/] = { func_245("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_204[3 /*261*/][9 /*8*/] = { func_245("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_204[3 /*261*/][10 /*8*/] = { func_245("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_204[3 /*261*/][11 /*8*/] = { func_245("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_204[3 /*261*/][12 /*8*/] = { func_245("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_204[3 /*261*/][13 /*8*/] = { func_245("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_204[3 /*261*/][14 /*8*/] = { func_245("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_204[3 /*261*/][15 /*8*/] = { func_245("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_204[3 /*261*/][16 /*8*/] = { func_245("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_204[3 /*261*/][17 /*8*/] = { func_245("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_204[3 /*261*/][18 /*8*/] = { func_245("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_204[3 /*261*/][19 /*8*/] = { func_245("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_204[3 /*261*/][20 /*8*/] = { func_245("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_204[3 /*261*/][21 /*8*/] = { func_245("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_204[3 /*261*/][22 /*8*/] = { func_245("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_204[3 /*261*/][23 /*8*/] = { func_245("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_204[3 /*261*/][24 /*8*/] = { func_245("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_204[3 /*261*/][25 /*8*/] = { func_245("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_204[3 /*261*/][26 /*8*/] = { func_245("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_204[3 /*261*/][27 /*8*/] = { func_245("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_204[3 /*261*/][28 /*8*/] = { func_245("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_204[3 /*261*/][29 /*8*/] = { func_245("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_204[3 /*261*/][30 /*8*/] = { func_245("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_204[3 /*261*/].f_260 = 3;
	Local_204[3 /*261*/].f_257 = 31;
	if (func_233(unk_0x27D769C59BC9D030()))
	{
		sLocal_1263 = unk_0x6E6FC26F3BAE53A5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1));
	}
}

struct<8> func_245(char* sParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<8> Var0;
	
	Var0.f_0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param4 };
	Var0.f_7 = fParam7;
	return Var0;
}

void func_246(int iParam0, bool bParam1)
{
	if (func_80(iLocal_109))
	{
		func_19(&iLocal_109);
	}
	if (!bParam1)
	{
		func_247(iParam0);
	}
	unk_0x7C3AA2D27E16E2AD();
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_248(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_42 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_256(sVar0);
		}
		else if (iLocal_42 == 0)
		{
			if (func_84() == 0)
			{
				func_255(sVar0);
				func_254(sVar0);
			}
			else if (func_84() == 1)
			{
				func_253(sVar0);
			}
			else
			{
				func_253(sVar0);
			}
		}
		else if (iLocal_42 == 1)
		{
			if (func_84() == 0)
			{
				func_255(sVar0);
				func_256(sVar0);
			}
			else if (func_84() == 1)
			{
				func_253(sVar0);
				func_256(sVar0);
			}
			else
			{
				func_253(sVar0);
				func_256(sVar0);
			}
		}
		unk_0x26545538B51562AD(&iLocal_105, 11);
	}
	else if (unk_0xF426A5DE932B3BEE(iLocal_105, 11))
	{
		func_252();
		func_251();
		func_250();
		func_249();
		unk_0xF17F4B0641AB2DE1(&iLocal_105, 11);
	}
}

void func_249()
{
	StringCopy(&(Global_2121[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_250()
{
	StringCopy(&(Global_2121[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_251()
{
	StringCopy(&(Global_2121[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_252()
{
	StringCopy(&(Global_2121[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_253(char* sParam0)
{
	StringCopy(&(Global_2121[0 /*16*/].f_8), sParam0, 32);
}

void func_254(char* sParam0)
{
	StringCopy(&(Global_2121[2 /*16*/].f_8), sParam0, 32);
}

void func_255(char* sParam0)
{
	StringCopy(&(Global_2121[1 /*16*/].f_8), sParam0, 32);
}

void func_256(char* sParam0)
{
	StringCopy(&(Global_2121[3 /*16*/].f_8), sParam0, 32);
}

void func_257(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_258(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_258(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xC1C5B83BB6719C6C(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = (unk_0xA0F74982C6AAA9D4() + iParam3);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = ((unk_0xA0F74982C6AAA9D4() + iParam3) + iParam4);
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_237();
	}
}

int func_259(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_49(&(Global_68319.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_56(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_260(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_49(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_68319.f_555[0 /*21*/].f_3;
}

Vector3 func_261(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_49(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_68319.f_555[0 /*21*/];
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x26545538B51562AD(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return 1;
}


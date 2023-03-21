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
	if (!func_256(26))
	{
		iLocal_37 = Global_105220.f_10020.f_128;
		if (iLocal_37 == 2)
		{
			unk_0xF0059F27F7BB6680(&iLocal_105, 10);
			Local_110 = { func_255(25) };
			fLocal_113 = func_254(25);
			if (func_253(&Local_114, 25))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_105, 14))
				{
					unk_0xF0059F27F7BB6680(&iLocal_105, 14);
				}
			}
		}
	}
	else
	{
		Global_105220.f_10020.f_128 = iLocal_37;
	}
	if (unk_0xE8A79675302ED812(82))
	{
		if (unk_0x663171D6F90FBA5A() == 2)
		{
			func_244(0);
			func_242(26, 1);
		}
		else
		{
			func_242(26, 0);
		}
	}
	func_237(0);
	while (true)
	{
		if (func_236(38))
		{
			func_242(26, 0);
		}
		if (func_235(unk_0xBC25C936A095B5BA()))
		{
			func_228();
			func_220();
			func_219();
			func_208();
			switch (iLocal_37)
			{
				case 0:
					func_135();
					break;
				
				case 2:
					func_134();
					break;
				
				case 3:
					func_125();
					break;
				
				case 4:
					func_15(45);
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
			if ((!func_2(func_3(iParam0)) && !Global_103860) && !unk_0xFA30DFD0084E92FE(iLocal_105, 15))
			{
				unk_0xF0059F27F7BB6680(&iLocal_105, 15);
				unk_0x7456702622C62EA0(1);
			}
		}
		else if ((unk_0xF16DAFF595E80F7C() && !Global_103860) && !unk_0xFA30DFD0084E92FE(iLocal_105, 15))
		{
			unk_0xF0059F27F7BB6680(&iLocal_105, 15);
			unk_0x7456702622C62EA0(1);
		}
	}
}

bool func_2(var uParam0)
{
	unk_0xF07D20149ECBC61E(uParam0);
	return unk_0xA66DBDA0A072514A(0);
}

var func_3(int iParam0)
{
	return sLocal_53[iParam0];
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	unk_0x7CB6FD92BE491AD9(&(uLocal_101[func_5(iParam0)]), iVar0);
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
	if (((unk_0xFA30DFD0084E92FE(iLocal_105, 0) && !unk_0xFA30DFD0084E92FE(iLocal_105, 1)) && !unk_0xFA30DFD0084E92FE(iLocal_105, 14)) && func_12())
	{
		if (func_11(0, 172, 0) || func_11(0, 173, 0))
		{
			iLocal_1271 = unk_0x105601648511CC64();
		}
		if (iLocal_1271 != -1)
		{
			if ((unk_0x105601648511CC64() - iLocal_1271) < 200)
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
	if (Global_70978)
	{
		iVar3 = 145;
	}
	else if (unk_0xA7F138B5B1AB2CF6(Global_14474) == 1)
	{
		if (func_10())
		{
			if (func_9())
			{
				iVar6 = 0;
				unk_0x29CD142125FE177B(Global_14474, "GET_CURRENT_SELECTION");
				uVar0 = unk_0xC27A95D32A8160C0();
				iVar4 = unk_0x105601648511CC64();
				while ((!unk_0x3B6BD69AB08B86C2(uVar0) && iVar6 == 0) && unk_0xA7F138B5B1AB2CF6(Global_14474) == 1)
				{
					unk_0x4EDE34FBADD967A6(0);
					iVar5 = unk_0x105601648511CC64();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = unk_0x6AE1427A38313694(uVar0);
				if (iVar1 > 155 || iVar1 < 0)
				{
					iVar1 = 155;
				}
				iVar2 = Global_14499[iVar1];
				iVar3 = iVar2;
				if (unk_0xA7F138B5B1AB2CF6(Global_14474) == 0)
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (unk_0xB731B8C5BCE89836(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x694514BD37EC4E94(iParam0, iParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
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
	if (unk_0xB731B8C5BCE89836(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	func_107();
	if (iLocal_40 == 0)
	{
		switch (iLocal_41)
		{
			case 0:
				func_106(1);
				uLocal_1267 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_1268 = unk_0x105601648511CC64() + 3000;
				if (!unk_0xFA30DFD0084E92FE(iLocal_105, 10))
				{
					func_90();
				}
				func_89(iParam0, 1);
				iLocal_41 = 1;
				break;
			
			case 1:
				if (unk_0x105601648511CC64() > iLocal_1268)
				{
					if (unk_0xA7F138B5B1AB2CF6(uLocal_1267))
					{
						unk_0x29CD142125FE177B(uLocal_1267, "SHOW_MISSION_PASSED_MESSAGE");
						func_88("M_FB4P3_P");
						func_88("M_FB4P3");
						unk_0x1E1FB49121565EB6(100);
						unk_0x5E5DBD0A6623969E(1);
						unk_0x1E1FB49121565EB6(0);
						unk_0x5E5DBD0A6623969E(1);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_1268 = unk_0x105601648511CC64() + 10000;
						func_86(0);
						iLocal_41 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xA7F138B5B1AB2CF6(uLocal_1267) && unk_0xC5B1B5690C2BE6B8())
				{
					if (unk_0x105601648511CC64() < iLocal_1268)
					{
						unk_0x65E432C782E7E702(uLocal_1267, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (unk_0x105601648511CC64() < iLocal_1268 + 100)
					{
						unk_0x29CD142125FE177B(uLocal_1267, "TRANSITION_OUT");
						unk_0xF9FBC2F3F73D94C9();
						iLocal_1268 = (iLocal_1268 - 100);
					}
					else if (unk_0x105601648511CC64() < iLocal_1268 + 500)
					{
						unk_0x65E432C782E7E702(uLocal_1267, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_41 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0xA7F138B5B1AB2CF6(uLocal_1267))
				{
					unk_0xB0B0FE33F4F22679(&uLocal_1267);
				}
				func_106(0);
				if (iLocal_42 == 2)
				{
					func_85(108, 0);
				}
				if (func_83(iLocal_109))
				{
					unk_0xD421BC740C5340C3(iLocal_109, 1);
				}
				func_79("M_FHPE", func_80());
				func_76(2, 0);
				break;
			}
	}
	func_16();
}

void func_16()
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_105, 2))
	{
		if (!func_75(0f, 0f, 0f, Local_110, 0))
		{
			if (func_74(unk_0xBC25C936A095B5BA(), Local_110, 100f) && !func_73())
			{
				if (func_83(func_72(25)))
				{
					iLocal_109 = func_72(25);
					unk_0x77815D3407C6700D(iLocal_109, 1, 1);
					if (func_83(iLocal_109))
					{
						if (!unk_0x3C03CFD5DD1E2D97(iLocal_109, "GetawayVehicleValid"))
						{
							if (unk_0xE9A905ADFD5BC8A0(iLocal_109, "GetawayVehicleValid", 1))
							{
							}
						}
						unk_0xF0059F27F7BB6680(&iLocal_105, 0);
						unk_0xF0059F27F7BB6680(&iLocal_105, 2);
					}
				}
				else if (!func_71(25, 0))
				{
					if (!func_83(func_72(25)))
					{
						func_67(1);
					}
				}
			}
			else if (func_83(iLocal_109))
			{
				if (!func_74(unk_0xBC25C936A095B5BA(), Local_110, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!func_75(0f, 0f, 0f, Local_110, 0))
		{
			if (!func_74(unk_0xBC25C936A095B5BA(), Local_110, 100f))
			{
				if (func_83(iLocal_109))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_109, 0))
					{
						func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
						unk_0x7CB6FD92BE491AD9(&iLocal_105, 2);
						unk_0x29BEE055E0B12E9D(iLocal_109, 0);
						func_19(&iLocal_109);
						unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
					}
					else
					{
						func_67(0);
					}
				}
				else if (!func_71(25, 0))
				{
					func_67(1);
				}
			}
			else if (!func_71(25, 0))
			{
				if (!func_83(iLocal_109))
				{
					func_67(1);
				}
			}
			else if (!func_83(iLocal_109))
			{
				iVar0 = func_72(25);
				if (func_83(iVar0) && iVar0 != iLocal_109)
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
	if (unk_0xFA30DFD0084E92FE(iLocal_105, 2) && unk_0xFA30DFD0084E92FE(iLocal_105, 0))
	{
		if (func_83(iLocal_109))
		{
			if (func_18(unk_0xBC25C936A095B5BA(), iLocal_109, 10f, 1))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_109, 1), Local_110) >= 100f)
				{
					func_67(0);
				}
			}
		}
		else if (!func_71(25, 0))
		{
			if (func_83(iLocal_109))
			{
				unk_0x29BEE055E0B12E9D(iLocal_109, 0);
			}
			func_19(&iLocal_109);
			func_67(1);
		}
	}
}

bool func_18(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iParam0, iParam3), unk_0x541C2AEF053615BC(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_19(int iParam0)
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0x1D403DFADBC2DE3C(*iParam0, 0);
		if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
		{
			unk_0x1E7A09C1710FB071(iParam0);
		}
	}
}

void func_20(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_69800.f_484[25]) && unk_0xE59B7F5A03335350(Global_69800.f_484[25], 0))
			{
				if (Global_69800.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_66(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_61(iParam0, &Var0);
		if (func_75(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			fParam4 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_70788 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_55(iParam5, &Var0, Param1, fParam4, func_60(iParam0));
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
	if (!func_51(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69800.f_555[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_70707 != -1 && Global_70707 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_105220.f_32546.f_4801 = func_40();
			}
			if (iParam1 != Global_69800.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_72(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_22(iVar0, 145);
					}
				}
				Global_70706 = iParam1;
				Global_70707 = iParam0;
				Global_70708 = iParam2;
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
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_105220.f_2354.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_105220.f_32546.f_5592[iVar1] = iVar2;
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
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_105220.f_32546.f_5590 = iParam1;
	Global_70705 = iParam0;
	Global_105220.f_32546.f_5588 = 1;
	func_61(iParam0, &(Global_105220.f_32546.f_5510));
}

int func_23(int iParam0)
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_38(iParam0, 0, 0)) || func_38(iParam0, 1, 0)) || func_38(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || func_34(iParam0)) || !func_24(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_36(iParam0))
		{
		}
		if (func_36(iParam0))
		{
		}
		if (func_38(iParam0, 0, 0))
		{
		}
		if (func_38(iParam0, 1, 0))
		{
		}
		if (func_38(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
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
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
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
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_33())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1.f_0))
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
		if ((((!func_32() && !func_31()) && !func_30()) && !func_29()) && !func_33())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_30())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_28(iParam0))
		{
			return 0;
		}
	}
	if (!func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_27())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_29()
{
	return 0;
}

int func_30()
{
	return 1;
}

int func_31()
{
	return 1;
}

int func_32()
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_25(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_90461[iVar0]))
		{
			if (Global_90461[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (Global_90431[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_69800.f_484[24]))
	{
		if (iParam0 == Global_69800.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69800.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_39(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iVar9], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_40()
{
	var uVar0;
	
	func_50(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_49(&uVar0, unk_0x7E09057438B9D216());
	func_48(&uVar0, unk_0x6E06C0DB9B43570D());
	func_43(&uVar0, unk_0xBE14F159908E4EE5());
	func_42(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_41(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_41(var uParam0, int iParam1)
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

void func_42(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_47(*uParam0);
	iVar1 = func_45(*uParam0);
	if (iParam1 < 1 || iParam1 > func_44(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_44(int iParam0, int iParam1)
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

var func_45(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_46(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_46(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_47(var uParam0)
{
	return uParam0 & 15;
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51(var uParam0, int iParam1)
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
			uParam0->f_4 = func_52(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_52(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_52(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_52(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_52(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_52(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_52(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_52(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_52(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
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
			if (func_33())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_33())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_105220.f_32546.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_75(Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_105220.f_32546.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_105220.f_32546.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_75(Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_75(Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_52(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_54(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_53(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_53(int iParam0, var uParam1, int iParam2)
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
			if (Global_105220.f_9056.f_99.f_58[128] && !Global_105220.f_9056.f_99.f_58[131])
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
					if (Global_105220.f_9056.f_99.f_58[119])
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
			else if (Global_105220.f_9056.f_99.f_58[118])
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

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

void func_55(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_51(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
		{
			func_59(iParam0);
			func_58(uParam1, &(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 11))
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_56(iParam0, 1);
		}
	}
}

void func_56(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_71(iParam0, 0))
		{
			func_57(iParam0, 1, 0);
			func_57(iParam0, 2, 0);
			func_57(iParam0, 3, 0);
			func_57(iParam0, 4, 0);
			func_57(iParam0, 0, 1);
			Global_69800[iParam0] = 1;
		}
	}
	else
	{
		func_57(iParam0, 0, 0);
	}
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_32546[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_32546[iParam0]), iParam1);
	}
}

void func_58(var uParam0, var uParam1)
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

void func_59(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_51(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
			unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
			Global_69800.f_139[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			func_56(iParam0, 0);
		}
	}
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				return Global_90441[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_65(uParam1);
		uParam1->f_66 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x2629793241883F74(iParam0);
		uParam1->f_67 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_69 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_70 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_64(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_68 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_66))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 12);
		}
		func_63(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_62(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 27);
		}
	}
}

int func_62(int iParam0)
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

int func_63(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
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
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_65(var uParam0)
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

void func_66(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_59(iParam0);
	func_56(iParam0, 0);
}

void func_67(bool bParam0)
{
	if (unk_0xFA30DFD0084E92FE(iLocal_105, 14))
	{
		if (func_69(unk_0xBC25C936A095B5BA()) == 0)
		{
			if (bParam0)
			{
				func_68(10);
			}
			else
			{
				func_68(12);
			}
		}
		else if (bParam0)
		{
			func_68(11);
		}
		else
		{
			func_68(13);
		}
		if (iLocal_42 == 0)
		{
			func_89(45, 0);
		}
		else if (iLocal_42 == 1)
		{
			func_89(12, 0);
		}
		else if (iLocal_42 == 2)
		{
			func_89(34, 0);
		}
		if (iLocal_42 != 2)
		{
			Local_106 = { 0f, 0f, 0f };
		}
		iLocal_40 = 0;
		iLocal_41 = 0;
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 6);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 1);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 8);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 12);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 2);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 14);
		if (iLocal_37 == 4)
		{
			if (unk_0xA7F138B5B1AB2CF6(uLocal_1267))
			{
				unk_0xB0B0FE33F4F22679(&uLocal_1267);
			}
			func_106(0);
		}
		func_76(0, 0);
	}
}

void func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	unk_0xF0059F27F7BB6680(&(uLocal_101[func_5(iParam0)]), iVar0);
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_70(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_70(int iParam0)
{
	if (func_54(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_105220.f_32546[iParam0], iParam1);
}

int func_72(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69800.f_139[iParam0];
}

int func_73()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

bool func_74(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

bool func_75(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_76(int iParam0, bool bParam1)
{
	Global_105220.f_10020.f_128 = iParam0;
	iLocal_37 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_77();
}

int func_77()
{
	if (func_78(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

bool func_78(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_79(char* sParam0, int iParam1)
{
	unk_0xD147A9846CCA7248(joaat("sp_last_mission_name"), sParam0, 1);
	if (unk_0xFA30DFD0084E92FE(iParam1, 0))
	{
		unk_0xD147A9846CCA7248(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (unk_0xFA30DFD0084E92FE(iParam1, 1))
	{
		unk_0xD147A9846CCA7248(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (unk_0xFA30DFD0084E92FE(iParam1, 2))
	{
		unk_0xD147A9846CCA7248(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_80()
{
	func_81();
	switch (Global_105220.f_2354.f_539.f_4301)
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

void func_81()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_70(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_69(unk_0xBC25C936A095B5BA());
			if (func_54(iVar0) && (!func_82(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_54(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_82(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_83(int iParam0)
{
	if (func_84(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_105220.f_8584[iParam0] = 1;
	Global_105220.f_8584.f_236[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

void func_86(bool bParam0)
{
	char* sVar0;
	
	unk_0xCB8EEC006EBFC1E7(0);
	switch (func_87())
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
	unk_0xC432586F5C2E5AA5(sVar0);
}

int func_87()
{
	func_81();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_88(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_89(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_105220.f_9056.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_105220.f_9056.f_99.f_58[iParam0] = iParam1;
}

void func_90()
{
	Global_105220.f_9987.f_21++;
	if (iLocal_42 == 0)
	{
		unk_0x3A57956BCE003880(joaat("fl_co_fb4p3"), Global_105220.f_9987.f_21, 1);
		if (func_99())
		{
			if (func_236(74) || (func_236(75) && func_98()))
			{
				func_89(46, 1);
			}
		}
	}
	func_91();
	unk_0xF0059F27F7BB6680(&iLocal_105, 10);
}

void func_91()
{
	if (iLocal_42 == 0)
	{
		func_92(23, 0, 0);
	}
	else if (iLocal_42 == 1)
	{
	}
	else if (iLocal_42 == 2)
	{
	}
}

void func_92(int iParam0, int iParam1, int iParam2)
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
		func_96((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = iParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_93();
	}
}

void func_93()
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
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_95(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_94() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_77();
				}
			}
		}
	}
}

int func_94()
{
	return Global_25277;
}

int func_95(int iParam0, int iParam1)
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
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_97();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_97()
{
	return Global_1312736;
}

int func_98()
{
	if ((func_236(41) && func_236(3)) && func_236(21))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	if (iLocal_42 == 0)
	{
		return func_104();
	}
	else if (iLocal_42 == 1)
	{
		return func_103();
	}
	else if (iLocal_42 == 2)
	{
		return func_100();
	}
	return 0;
}

int func_100()
{
	if ((func_236(79) && func_236(83)) && func_101(func_102()))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_99.f_58[iParam0];
}

int func_102()
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

int func_103()
{
	if (func_236(68))
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (func_105(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_236(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_101(func_102()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_106(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

void func_107()
{
	struct<6> Var0;
	
	if (iLocal_40 != 0)
	{
		Var0 = { func_124() };
		switch (iLocal_40)
		{
			case 1:
				if (iLocal_42 != 2)
				{
					if (!unk_0xF1734B55490E9045(&Var0))
					{
						if (unk_0xC0A904C0F2775676() > 0)
						{
							func_123("LOCAUD", Local_44.f_7);
							func_122(1);
							iLocal_40 = 2;
						}
						else if (unk_0xFA30DFD0084E92FE(iLocal_105, 10) && unk_0xC0A904C0F2775676() == 0)
						{
							func_123("LOCAUD", Local_44.f_7);
							func_122(1);
							iLocal_40 = 2;
						}
					}
				}
				else
				{
					iLocal_40 = 0;
				}
				if (func_121())
				{
					iLocal_40 = 3;
				}
				break;
			
			case 2:
				if (func_121())
				{
					iLocal_40 = 3;
				}
				if (!unk_0xFA30DFD0084E92FE(iLocal_105, 10))
				{
					if (unk_0xC0A904C0F2775676() >= 0)
					{
						func_114(Var0);
					}
				}
				else
				{
					iLocal_40 = 3;
				}
				break;
			
			case 3:
				if (!func_113())
				{
					iLocal_40 = 4;
				}
				break;
			
			case 4:
				if (!func_14(0))
				{
					if (iLocal_42 == 1)
					{
						func_112(Local_44.f_8);
					}
					iLocal_40 = 5;
				}
				break;
			
			case 5:
				if (func_87() == 0)
				{
					if (iLocal_42 == 0)
					{
						if (func_99())
						{
							if ((func_236(74) || func_236(75)) && func_98())
							{
								func_108(1);
								iLocal_40 = 0;
							}
							else
							{
								func_108(0);
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
						if (func_99())
						{
							if (!func_236(3))
							{
								func_85(50, 0);
							}
						}
					}
					iLocal_40 = 0;
				}
				break;
			}
	}
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		func_109(1527885205, 0, func_87(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_236(3))
	{
		func_109(-224691627, 0, func_87(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_109(-224691627, 0, func_87(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_78(0))
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
	if (Global_105220.f_7659.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_105220.f_7659.f_911 == Var0.f_0)
		{
			Global_105220.f_7659.f_911 = -1;
		}
		Var0.f_3 = func_111(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0xF0059F27F7BB6680(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 0);
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 10);
		}
		Global_105220.f_7659[Global_105220.f_7659.f_136 /*15*/] = { Var0 };
		Global_105220.f_7659.f_136++;
		func_110(iParam2);
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_54(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_7659.f_136)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_7659[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_105220.f_7659[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_105220.f_7659[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_105220.f_7659.f_764)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_7659.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_105220.f_7659.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_105220.f_7659.f_919[iParam0] = iVar1;
}

int func_111(int iParam0)
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

void func_112(int iParam0)
{
	if (Global_117[iParam0 /*10*/].f_8 != 144)
	{
		Global_105220.f_28021[iParam0 /*29*/].f_12[0] = 0;
		Global_105220.f_28021[iParam0 /*29*/].f_12[1] = 0;
		Global_105220.f_28021[iParam0 /*29*/].f_12[2] = 0;
		Global_105220.f_28021[iParam0 /*29*/].f_24[0] = 0;
		Global_105220.f_28021[iParam0 /*29*/].f_24[1] = 0;
		Global_105220.f_28021[iParam0 /*29*/].f_24[2] = 0;
	}
}

int func_113()
{
	if (Global_15800 == 4)
	{
		if (unk_0x58E7DDFF8D17A82A())
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

void func_114(struct<6> Param0)
{
	if (iLocal_42 == 0)
	{
		func_119(Param0);
	}
	else if (iLocal_42 == 1)
	{
		func_115(Param0);
	}
}

void func_115(struct<6> Param0)
{
	if (func_99())
	{
		func_116(Param0, 1);
	}
	else
	{
		func_116(Param0, 0);
	}
}

void func_116(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!unk_0xF1734B55490E9045(&uParam0))
	{
		if (unk_0x3362CDE8460ED38B(&uParam0, Local_44.f_7))
		{
			if (unk_0xC0A904C0F2775676() >= 0)
			{
				if (iLocal_42 == 0)
				{
					Var0 = { func_118(bParam6) };
					func_89(46, 1);
					func_123(sLocal_1272, &Var0);
					func_122(1);
				}
				else if (iLocal_42 == 1)
				{
					Var0 = { func_117(bParam6) };
					func_123(sLocal_1272, &Var0);
					func_122(1);
				}
				iLocal_40 = 3;
			}
		}
	}
}

struct<4> func_117(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_87())
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
		switch (func_87())
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

struct<4> func_118(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_87())
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
		switch (func_87())
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

void func_119(struct<6> Param0)
{
	if (func_99())
	{
		if (func_120())
		{
			if (func_87() != 0)
			{
				func_116(Param0, 1);
			}
			else
			{
				iLocal_40 = 3;
			}
		}
		else if (func_87() != 0)
		{
			func_116(Param0, 0);
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

int func_120()
{
	if (iLocal_42 == 0)
	{
		if ((func_236(74) || func_236(74)) && func_98())
		{
			return 1;
		}
	}
	else if (iLocal_42 == 1)
	{
		if (func_236(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	if (Global_15849 == 1 || Global_16816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_122(bool bParam0)
{
	unk_0x1E08809A5041F85B(bParam0);
	if (bParam0)
	{
	}
}

void func_123(char* sParam0, char* sParam1)
{
	if (unk_0x58E7DDFF8D17A82A())
	{
		Global_15857 = 1;
		StringCopy(&Global_15864, sParam0, 24);
		StringCopy(&Global_15858, sParam1, 24);
	}
}

struct<6> func_124()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		return Global_15419;
	}
	return Var0;
}

void func_125()
{
	func_126();
}

void func_126()
{
	func_132();
	func_127();
}

void func_127()
{
	if (func_131() == 38)
	{
		if (func_130() && !func_71(25, 0))
		{
			if (Local_114.f_66 != 0)
			{
				func_55(25, &Local_114, Local_110, fLocal_113, 145);
			}
		}
	}
	else if (func_131() == -1)
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_105, 1))
		{
			if (!func_74(unk_0xBC25C936A095B5BA(), Local_106, 5f))
			{
				if (func_129())
				{
					if (!unk_0x7930B3E9C919E90F())
					{
						if (func_128())
						{
							func_68(1);
						}
						else if (Global_104275)
						{
							func_68(2);
						}
						else
						{
							func_68(0);
						}
						iLocal_39 = 1;
						fLocal_104 = 0f;
					}
				}
			}
		}
	}
}

bool func_128()
{
	return unk_0x3C406FC829C1E14A(Global_105220.f_18074.f_395);
}

int func_129()
{
	if (func_12())
	{
		if (func_87() == 0)
		{
			if (iLocal_43 == 2 || iLocal_43 == 1)
			{
				return 1;
			}
		}
		else if (iLocal_43 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_130()
{
	if (Global_92955 == 10 || Global_92955 == 9)
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	return Global_71240;
}

void func_132()
{
	if (!func_75(Local_110, 0f, 0f, 0f, 0) && func_131() != func_133())
	{
		if (func_74(unk_0xBC25C936A095B5BA(), Local_110, 60f))
		{
			if (func_83(func_72(25)))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(func_72(25), 1), Local_110) >= 100f)
				{
					func_67(0);
				}
			}
			else if (!func_71(25, 0))
			{
				func_67(1);
			}
		}
	}
}

int func_133()
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

void func_134()
{
	func_16();
	func_107();
}

void func_135()
{
	int iVar0;
	
	func_207();
	func_194();
	func_163();
	func_107();
	func_162();
	if (func_158())
	{
		if (func_136(&iVar0))
		{
			func_244(0);
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
			{
				unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
			}
			if (func_83(iLocal_109))
			{
				unk_0xD421BC740C5340C3(iLocal_109, 2);
			}
			func_76(iVar0, 0);
		}
	}
}

int func_136(var uParam0)
{
	char* sVar0;
	
	if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
	{
		func_150();
		if (func_137())
		{
			sVar0 = unk_0x1377080E9B0BD993();
			if (!unk_0xF1734B55490E9045(sVar0))
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

int func_137()
{
	if (func_139(&uLocal_1273, Local_44.f_8, sLocal_1272, Local_44.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_40 = 1;
		func_138(192, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
		return 1;
	}
	return 0;
}

void func_138(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(Global_25622[iParam0 /*23*/].f_19))
	{
		unk_0x1423825E528B4DE1(Global_25622[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_25622[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_139(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_149(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15848 = 0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 0;
	Global_15854 = 0;
	if (iParam5 == 1)
	{
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
	}
	Global_2621441 = 0;
	return func_140(sParam3, iParam4, bParam8);
}

int func_140(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_148();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_147(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_146();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_145();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_144())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_143())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_142();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_141();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_148();
	}
	return 0;
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(false);
	Global_15800 = 1;
}

void func_142()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_143()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_145()
{
	if (func_82(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_87();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

void func_146()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_147(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_148()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_15800 = 6;
		return;
	}
}

void func_149(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = uParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

void func_150()
{
	int iVar0;
	
	iVar0 = func_87();
	func_151(iVar0, func_157(iVar0));
}

void func_151(int iParam0, var uParam1)
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
			func_155(iParam0);
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
			func_155(iParam0);
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
			func_155(iParam0);
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
		func_153(Local_44.f_8, iVar0, 0);
	}
	func_152(&uLocal_1273, Local_44.f_0, unk_0xBC25C936A095B5BA(), Local_44.f_1, 0, 1);
	func_152(&uLocal_1273, Local_44.f_2, 0, Local_44.f_3, 0, 1);
	Local_44.f_4 = uParam1;
}

void func_152(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	Global_3049 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 144)
	{
		func_145();
		if (iParam1 == 4)
		{
			Global_105220.f_28021[iParam0 /*29*/].f_12[0] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_12[1] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_12[2] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[0] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[1] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] == 1 && Global_105220.f_28021[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70978)
			{
				if (iParam1 != 4)
				{
					if (Global_14493 != iParam1)
					{
						Global_3022[iParam1 /*4*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
						Global_3039[iParam1] = 1;
						Global_3044[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14493)
					{
					}
					else
					{
						Global_2973[1 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
						Global_2973[1 /*6*/].f_5 = iParam1;
						func_154();
					}
				}
				else
				{
					Global_2973[1 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
					Global_2973[1 /*6*/].f_5 = iParam1;
					func_154();
				}
			}
			else
			{
				Global_2973[1 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
				Global_2973[1 /*6*/].f_5 = iParam1;
				func_154();
			}
		}
	}
}

void func_154()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xFCB4C1AC11347344(&(Global_105220.f_28021[Global_3049 /*29*/].f_7)), 64);
	if (Global_3068 == 0)
	{
		unk_0x2E94302CFF011F2E("");
		StringCopy(&cVar16, unk_0xFCB4C1AC11347344(&(Global_2973[1 /*6*/])), 64);
		sVar32 = unk_0xFCB4C1AC11347344("CELL_253");
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x2E94302CFF011F2E("CELL_255");
		unk_0xC9C304D0AABE1335(&(Global_2973[1 /*6*/]));
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x7CB6FD92BE491AD9(&Global_2363, 0);
}

void func_155(int iParam0)
{
	Local_44.f_6 = unk_0xF07F972D1C76408A(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
	func_156(iParam0);
}

void func_156(int iParam0)
{
	if (!unk_0xF1734B55490E9045(Local_44.f_6))
	{
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "SanAnd"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Alamo"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Alta"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Airp"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "ArmyB"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "BhamCa"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Banning"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Baytre"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Beach"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "BradT"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "BradP"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Burton"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "CANNY"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "CCreak"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "CalafB"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "ChamH"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "CHU"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "CHIL"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "COSI"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "CMSW"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Cypre"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Davis"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Desrt"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "DelBe"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "DelPe"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "DelSol"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Downt"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "DTVine"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Eclips"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "ELSant"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "EBuro"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "ELGorl"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Elysian"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Galli"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Galfish"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Greatc"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Golf"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "GrapeS"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Hawick"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Harmo"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Heart"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "HumLab"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "HORS"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Koreat"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Jail"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LAct"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LDam"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Lago"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LegSqu"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LosSF"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LMesa"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LosPuer"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LosPFy"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "LOSTMC"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Mirr"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Morn"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Murri"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "MTChil"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "MTJose"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "MTGordo"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Movie"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "NCHU"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Noose"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Oceana"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Observ"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Palmpow"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "PBOX"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "PBluff"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Paleto"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "PalCov"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "PalFor"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "PalHigh"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "ProcoB"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Prol"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "RTRAK"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Rancho"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "RGLEN"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Richm"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Rockf"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "SANDY"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "TongvaH"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "TongvaV"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "East_V"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Zenora"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Slab"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "SKID"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "SLSant"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Stad"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Tatamo"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Termina"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "TEXTI"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "WVine"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "UtopiaG"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Vesp"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "VCana"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Vine"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "WMirror"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "WindF"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "Zancudo"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "SanChia"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "STRAW"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "zQ_UAR"))
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
		if (unk_0x3362CDE8460ED38B(Local_44.f_6, "ZP_ORT"))
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

char* func_157(int iParam0)
{
	char* sVar0;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_105, 10))
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

int func_158()
{
	if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
	{
		if (func_83(iLocal_109))
		{
			if (unk_0xFA30DFD0084E92FE(iLocal_105, 1))
			{
				if ((func_161(0) || func_161(2)) || func_161(1))
				{
					func_1(46, 1);
					func_159();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_159()
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_105, 6))
	{
		if (func_83(iLocal_109))
		{
			Local_110 = { unk_0x541C2AEF053615BC(iLocal_109, 1) };
			fLocal_113 = unk_0x349C94FFF43E2979(iLocal_109);
			unk_0xF0059F27F7BB6680(&iLocal_105, 6);
			unk_0xF0059F27F7BB6680(&iLocal_105, 2);
			func_61(iLocal_109, &Local_114);
			func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
			unk_0xF0059F27F7BB6680(&iLocal_105, 14);
			func_160(iLocal_109);
		}
	}
}

int func_160(int iParam0)
{
	if (!unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave"))
	{
		if (unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 1))
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

int func_161(int iParam0)
{
	if (Global_16915 == 0)
	{
		return 0;
	}
	if (Global_117[iParam0 /*10*/].f_8 != 144)
	{
		if (Global_14493.f_1 == 10)
		{
			if (Global_1678 == iParam0)
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

void func_162()
{
	if (unk_0xFA30DFD0084E92FE(iLocal_105, 0) && unk_0xFA30DFD0084E92FE(iLocal_105, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_105, 11))
		{
			func_244(1);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_105, 11))
	{
		func_244(0);
	}
}

void func_163()
{
	if ((unk_0xFA30DFD0084E92FE(iLocal_105, 0) && Global_35905 == 15) && !func_193())
	{
		if (iLocal_38 == 0)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_105, 1))
			{
				if (!func_74(unk_0xBC25C936A095B5BA(), Local_106, 5f))
				{
					if (unk_0xFA30DFD0084E92FE(iLocal_105, 20) || func_129())
					{
						if ((func_235(unk_0xBC25C936A095B5BA()) && !unk_0xFA30DFD0084E92FE(uLocal_101[0], 17)) && !unk_0xFA30DFD0084E92FE(uLocal_101[1], 18))
						{
							if (unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
							{
								func_192(24, 46);
								if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
								{
									if (!func_191() && func_171(unk_0x541C2AEF053615BC(iLocal_109, 1)))
									{
										if (func_168(iLocal_109))
										{
											if (func_167(iLocal_109))
											{
												unk_0xF0059F27F7BB6680(&iLocal_105, 1);
												if (func_69(unk_0xBC25C936A095B5BA()) == 0)
												{
													func_68(7);
													func_1(7, 1);
												}
												else
												{
													func_68(8);
													func_1(8, 1);
												}
												Local_106 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
												return;
											}
										}
									}
									if (unk_0xFA30DFD0084E92FE(iLocal_105, 20))
									{
										func_1(46, 0);
										unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
										iLocal_1438 = -1;
									}
									Local_106 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
								}
							}
							else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								func_192(7, 8);
								if (unk_0xFA30DFD0084E92FE(iLocal_105, 20))
								{
									unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
									iLocal_1438 = -1;
								}
								else
								{
									func_68(24);
								}
							}
						}
					}
					else if (!func_12())
					{
						if ((unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0xFA30DFD0084E92FE(iLocal_105, 20))
						{
							if (iLocal_1438 != -1)
							{
								if ((unk_0x105601648511CC64() - iLocal_1438) > 1000)
								{
									unk_0xF0059F27F7BB6680(&iLocal_105, 20);
								}
							}
							else
							{
								iLocal_1438 = unk_0x105601648511CC64();
							}
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
						}
					}
				}
				else if (func_12())
				{
					Local_106 = { 0f, 0f, 0f };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
			{
				if (!func_74(unk_0xBC25C936A095B5BA(), Local_106, 10f))
				{
					Local_106 = { 0f, 0f, 0f };
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 1);
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
					iLocal_1438 = -1;
				}
				else if (!unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_105, 20))
						{
							func_68(24);
						}
						func_1(24, 1);
						unk_0x7CB6FD92BE491AD9(&iLocal_105, 1);
						unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
						iLocal_1438 = -1;
						Local_106 = { 0f, 0f, 0f };
					}
				}
				else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (func_83(iLocal_109))
					{
						if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_109)
						{
							func_1(46, 0);
							func_165(0);
							func_164();
							Local_106 = { 0f, 0f, 0f };
							unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
							iLocal_1438 = -1;
						}
					}
				}
				else if (!func_168(iLocal_109))
				{
					func_1(35, 1);
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 1);
					Local_106 = { 0f, 0f, 0f };
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 20);
					iLocal_1438 = -1;
				}
			}
		}
	}
}

void func_164()
{
	unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
	unk_0x7CB6FD92BE491AD9(&iLocal_105, 8);
	unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
}

void func_165(int iParam0)
{
	if (Global_14659)
	{
		func_166(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(false);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_143())
	{
		Global_14493.f_1 = 3;
	}
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_14(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_167(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x8730A01B72F31307(iParam0))
	{
		func_68(39);
		return 0;
	}
	if (!unk_0x2101FAC9A9D4C29D(unk_0xBC25C936A095B5BA(), iParam0, -1, 0, 0) && !unk_0x2101FAC9A9D4C29D(unk_0xBC25C936A095B5BA(), iParam0, 0, 0, 0))
	{
		func_68(37);
		return 0;
	}
	if (unk_0x149E9368A11035DE(iParam0))
	{
		func_68(36);
		return 0;
	}
	Var0 = { unk_0xD7490CDEF40F3DA2(iParam0, 2) };
	if (Var0.f_0 >= 10f || Var0.f_0 <= -10f)
	{
		func_68(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_68(43);
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	if (iParam0 != 0)
	{
		if (func_83(iParam0))
		{
			unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var1, &Var4);
			Var1 = { Var1 + Vector(-1f, -1f, -2f) };
			Var4 = { Var4 + Vector(1f, 1f, 2f) };
			if (!unk_0x79E7A3A738247A8B(unk_0xA4455714F3DCE207(iParam0, Var1), unk_0xA4455714F3DCE207(iParam0, Var4), 0, 1, 0, 0, 0, iParam0, 0))
			{
				iVar0++;
			}
			else if (func_12())
			{
				func_68(38);
			}
			if (!func_170())
			{
				iVar0++;
			}
			else if (func_12())
			{
				func_68(35);
			}
			if (iVar0 == 2)
			{
				if (func_169(unk_0x541C2AEF053615BC(iParam0, 1)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	Var2 = { Param0 + Vector(3.2f, 0f, 0f) };
	if (unk_0x2084D4C6C2DF616F(Var2, &fVar0, 0, 0) && unk_0x2084D4C6C2DF616F(Param0, &fVar1, 0, 0))
	{
		if (unk_0x357058E632979E65((fVar0 - fVar1)) < 0.9f)
		{
			return 1;
		}
	}
	if (func_12())
	{
		func_68(37);
	}
	return 0;
}

int func_170()
{
	var uVar0[5];
	int iVar6;
	
	unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
	iVar6 = 0;
	while (iVar6 <= 4)
	{
		if (func_235(uVar0[iVar6]) && uVar0[iVar6] != unk_0xBC25C936A095B5BA())
		{
			if (unk_0xB7A628320EFF8E47(Local_106, unk_0x541C2AEF053615BC(uVar0[iVar6], 1)) <= 16f)
			{
				return 1;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_171(struct<3> Param0)
{
	if (!func_187() && !func_186(Param0))
	{
		if (!func_183())
		{
			if (!func_179(Param0))
			{
				if (!func_177(Param0) && !func_172(Param0))
				{
					return 1;
				}
			}
			else
			{
				func_68(0);
			}
		}
	}
	return 0;
}

int func_172(struct<3> Param0)
{
	if (func_175(Param0) || func_173(Param0))
	{
		if (func_12())
		{
			func_68(22);
		}
		return 1;
	}
	return 0;
}

int func_173(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, Global_88239[func_174(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_174(struct<3> Param0, bool bParam3)
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
		if (Global_88239[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200.f_17[iVar0], 0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(Param0, Global_88239[iVar0 /*9*/].f_3, 1);
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

int func_175(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, Global_88303[func_176(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_176(struct<3> Param0, bool bParam3)
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
		if (Global_88303[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200.f_11[iVar0], 0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(Param0, Global_88303[iVar0 /*9*/].f_3, 1);
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

int func_177(struct<3> Param0)
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0x88A0E19F56297020(Param0, &Var0, 0, 1077936128, 0))
	{
		fVar3 = unk_0xB7A628320EFF8E47(Param0, Var0);
		if (fVar3 >= 400f || !func_178(Param0, Var0))
		{
			return 0;
		}
		else if (fVar3 < 20f && fVar3 > 6f)
		{
			if (func_12())
			{
				func_68(40);
			}
			return 1;
		}
		else
		{
			if (func_12())
			{
				func_68(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_178(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	fVar0 = unk_0x357058E632979E65((Param0.f_2 - Param3.f_2));
	if (fVar0 <= 5f)
	{
		return 1;
	}
	return 0;
}

int func_179(struct<3> Param0)
{
	if (!func_182(1))
	{
		if (!func_182(0))
		{
			if (func_180(Param0, 0))
			{
				return 1;
			}
		}
		else if (func_180(Param0, 1))
		{
			return 1;
		}
	}
	if (!func_182(7))
	{
		if (!func_182(4))
		{
			if (func_180(Param0, 4))
			{
				return 1;
			}
		}
		else
		{
			if (func_180(Param0, 5))
			{
				return 1;
			}
			if (func_180(Param0, 6))
			{
				return 1;
			}
		}
	}
	if (func_180(Param0, 2))
	{
		return 1;
	}
	if (func_180(Param0, 3))
	{
		return 1;
	}
	if (!func_182(8))
	{
		if (func_180(Param0, 8))
		{
			return 1;
		}
	}
	if (!func_182(16))
	{
		if (func_180(Param0, 16))
		{
			return 1;
		}
		if (!func_182(15))
		{
			if (func_180(Param0, 15))
			{
				return 1;
			}
			if (!func_182(14))
			{
				if (func_180(Param0, 14))
				{
					return 1;
				}
				if (!func_182(13))
				{
					if (func_180(Param0, 13))
					{
						return 1;
					}
					if (!func_182(12))
					{
						if (func_180(Param0, 12))
						{
							return 1;
						}
						if (!func_182(11))
						{
							if (func_180(Param0, 11))
							{
								return 1;
							}
							if (!func_182(10))
							{
								if (func_180(Param0, 10))
								{
									return 1;
								}
								if (!func_182(9))
								{
									if (func_180(Param0, 9))
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
	if (!func_182(20))
	{
		if (func_180(Param0, 20))
		{
			return 1;
		}
		if (!func_182(19))
		{
			if (func_180(Param0, 19))
			{
				return 1;
			}
			if (!func_182(18))
			{
				if (func_180(Param0, 18))
				{
					return 1;
				}
				if (!func_182(17))
				{
					if (func_180(Param0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_182(21))
	{
		if (func_180(Param0, 21))
		{
			return 1;
		}
	}
	if (!func_182(22))
	{
		if (func_180(Param0, 22))
		{
			return 1;
		}
	}
	if (!func_182(23))
	{
		if (func_180(Param0, 23))
		{
			return 1;
		}
	}
	if (!func_182(24))
	{
		if (func_180(Param0, 24))
		{
			return 1;
		}
	}
	if (!func_182(26))
	{
		if (!func_182(25))
		{
			if (func_180(Param0, 25))
			{
				return 1;
			}
		}
		else if (func_180(Param0, 26))
		{
			return 1;
		}
	}
	if (!func_182(30))
	{
		if (func_180(Param0, 30))
		{
			return 1;
		}
		if (!func_182(29))
		{
			if (func_180(Param0, 29))
			{
				return 1;
			}
			if (!func_182(28))
			{
				if (func_180(Param0, 28))
				{
					return 1;
				}
				if (!func_182(27))
				{
					if (func_180(Param0, 27))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_182(31))
	{
		if (func_180(Param0, 31))
		{
			return 1;
		}
	}
	if (!func_182(34))
	{
		if (func_180(Param0, 34))
		{
			return 1;
		}
		if (!func_182(33))
		{
			if (func_180(Param0, 33))
			{
				return 1;
			}
			if (!func_182(32))
			{
				if (func_180(Param0, 32))
				{
					return 1;
				}
			}
		}
	}
	if (!func_182(35))
	{
		if (func_180(Param0, 35))
		{
			return 1;
		}
	}
	if (!func_182(36))
	{
		if (func_180(Param0, 36))
		{
			return 1;
		}
	}
	if (!func_182(43))
	{
		if (func_180(Param0, 43))
		{
			return 1;
		}
		if (!func_182(42))
		{
			if (func_180(Param0, 42))
			{
				return 1;
			}
			if (!func_182(38))
			{
				if (func_180(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_182(39))
			{
				if (func_180(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_182(40))
			{
				if (func_180(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_182(41))
			{
				if (func_180(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_182(37))
			{
				if (func_180(Param0, 42))
				{
					return 1;
				}
			}
		}
	}
	if (!func_182(45))
	{
		if (func_180(Param0, 45))
		{
			return 1;
		}
		if (!func_182(44))
		{
			if (func_180(Param0, 44))
			{
				return 1;
			}
		}
	}
	if (!func_182(51))
	{
		if (func_180(Param0, 51))
		{
			return 1;
		}
		if (!func_182(48))
		{
			if (func_180(Param0, 48))
			{
				return 1;
			}
			if (!func_182(49))
			{
				if (func_180(Param0, 49))
				{
					return 1;
				}
			}
			if (!func_182(50))
			{
				if (func_180(Param0, 50))
				{
					return 1;
				}
			}
			if (!func_182(47))
			{
				if (func_180(Param0, 47))
				{
					return 1;
				}
				if (!func_182(46))
				{
					if (func_180(Param0, 46))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_182(53))
	{
		if (func_180(Param0, 53))
		{
			return 1;
		}
		if (!func_182(56))
		{
			if (func_180(Param0, 56))
			{
				return 1;
			}
			if (!func_182(55))
			{
				if (func_180(Param0, 55))
				{
					return 1;
				}
			}
			if (!func_182(54))
			{
				if (func_180(Param0, 54))
				{
					return 1;
				}
			}
			if (!func_182(52))
			{
				if (func_180(Param0, 52))
				{
					return 1;
				}
			}
		}
	}
	if (!func_182(57))
	{
		if (func_180(Param0, 57))
		{
			return 1;
		}
	}
	if (!func_182(62))
	{
		if (func_180(Param0, 62))
		{
			return 1;
		}
		if (!func_182(61))
		{
			if (func_180(Param0, 61))
			{
				return 1;
			}
			if (!func_182(60))
			{
				if (func_180(Param0, 60))
				{
					return 1;
				}
				if (!func_182(59))
				{
					if (func_180(Param0, 59))
					{
						return 1;
					}
					if (!func_182(58))
					{
						if (func_180(Param0, 58))
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

int func_180(struct<3> Param0, int iParam3)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, func_181(iParam3));
	if (fVar0 <= 625f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_181(int iParam0)
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

bool func_182(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iParam0 /*6*/], 3);
}

int func_183()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (Local_204[iVar0 /*261*/].f_257 - 1))
		{
			if (unk_0xFA30DFD0084E92FE(Local_204[iVar0 /*261*/].f_258, iVar1))
			{
				if (func_185(sLocal_1263))
				{
					if (Local_204[iVar0 /*261*/].f_260 == 0)
					{
						if (func_12())
						{
							func_68(21);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 2)
					{
						if (func_12())
						{
							func_68(22);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 1)
					{
						if (func_12())
						{
							func_68(23);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 3)
					{
						if (func_12())
						{
							func_68(20);
						}
					}
					return 1;
				}
				if (func_184(&(Local_204[iVar0 /*261*/][iVar1 /*8*/])))
				{
					if (Local_204[iVar0 /*261*/].f_260 == 0)
					{
						if (func_12())
						{
							func_68(21);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 2)
					{
						if (func_12())
						{
							func_68(22);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 1)
					{
						if (func_12())
						{
							func_68(23);
						}
					}
					else if (Local_204[iVar0 /*261*/].f_260 == 3)
					{
						if (func_12())
						{
							func_68(20);
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

int func_184(var uParam0)
{
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_185(char* sParam0)
{
	int iVar0;
	
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sLocal_1249[iVar0]))
		{
			if (unk_0x3362CDE8460ED38B(sLocal_1249[iVar0], sParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(struct<3> Param0)
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((unk_0xB7A628320EFF8E47(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || unk_0xB7A628320EFF8E47(Param0, -62.0307f, -1839.859f, 25.6787f) <= 400f) || unk_0xB7A628320EFF8E47(Param0, -234.7648f, -1150.311f, 21.9224f) <= 400f)
	{
		func_68(21);
		return 1;
	}
	return 0;
}

int func_187()
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_189(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 145, 1);
	fVar1 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Global_88138[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (func_12())
		{
			func_188(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_188(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		func_68(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		func_68(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		func_68(34);
	}
}

int func_189(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_88138[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88138[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_190(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF0F2FC9DE291567F(Param0, Global_88138[iVar0 /*10*/].f_3, 1);
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

bool func_190(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iParam0], 0);
}

int func_191()
{
	if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 855.7258f, -2344.491f, 29.33145f) <= 52900f)
	{
		if (func_12())
		{
			func_68(28);
		}
		return 1;
	}
	else if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1383.21f, -2068.02f, 51.87057f) <= 160000f)
	{
		if (func_12())
		{
			func_68(29);
		}
		return 1;
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	func_4(iParam0);
	if (func_2(func_3(iParam0)))
	{
		unk_0x7456702622C62EA0(1);
		unk_0xF0059F27F7BB6680(&iLocal_105, 15);
	}
	if (iParam1 != 46)
	{
		func_4(iParam1);
		if (func_2(func_3(iParam1)))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xF0059F27F7BB6680(&iLocal_105, 15);
		}
	}
}

int func_193()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 13);
	}
	return 0;
}

void func_194()
{
	int iVar0;
	int iVar1;
	
	if ((Global_35905 == 15 && iLocal_38 == 0) && !func_193())
	{
		if (!unk_0x7930B3E9C919E90F())
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_105, 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (!func_205())
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_105, 7))
						{
							iVar0 = unk_0x3E12B546F3F2597A();
							if (func_83(iVar0))
							{
								if (!func_204(iVar0))
								{
									if (!unk_0x3C03CFD5DD1E2D97(iVar0, "Getaway_Winched"))
									{
										if (func_198(iVar0) && !func_197())
										{
											if (!unk_0x5CAE759AE8219D20(iVar0))
											{
												if (func_69(unk_0xBC25C936A095B5BA()) == 0)
												{
													func_68(17);
												}
												else
												{
													func_68(18);
												}
												iLocal_109 = iVar0;
												unk_0x77815D3407C6700D(iLocal_109, 1, 1);
												if (unk_0xE9A905ADFD5BC8A0(iLocal_109, "GetawayVehicleValid", 1))
												{
												}
												unk_0xF0059F27F7BB6680(&iLocal_105, 0);
												unk_0xF0059F27F7BB6680(&iLocal_105, 8);
												unk_0xF0059F27F7BB6680(&iLocal_105, 7);
												return;
											}
											else
											{
												func_19(&iLocal_109);
												unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
												unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
												return;
											}
										}
									}
									if (unk_0xE9A905ADFD5BC8A0(iVar0, "GetawayVehicleValid", 0))
									{
									}
									unk_0xF0059F27F7BB6680(&iLocal_105, 7);
								}
								else if (func_196(iVar0))
								{
									iLocal_109 = iVar0;
									unk_0x77815D3407C6700D(iLocal_109, 1, 1);
									unk_0xF0059F27F7BB6680(&iLocal_105, 0);
									unk_0xF0059F27F7BB6680(&iLocal_105, 8);
									unk_0xF0059F27F7BB6680(&iLocal_105, 7);
									return;
								}
							}
							else
							{
								func_19(&iLocal_109);
								unk_0xF0059F27F7BB6680(&iLocal_105, 7);
								unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
							}
						}
						else if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
						{
							if (!func_83(iLocal_109))
							{
								func_19(&iLocal_109);
								unk_0xF0059F27F7BB6680(&iLocal_105, 0);
								unk_0xF0059F27F7BB6680(&iLocal_105, 8);
								unk_0xF0059F27F7BB6680(&iLocal_105, 7);
							}
						}
					}
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_105, 8))
				{
					iVar1 = unk_0x3E12B546F3F2597A();
					if (func_83(iVar1))
					{
						if (func_18(unk_0xBC25C936A095B5BA(), iVar1, 10f, 1) && !unk_0x3C03CFD5DD1E2D97(iVar1, "Getaway_Winched"))
						{
							iLocal_109 = iVar1;
							unk_0x77815D3407C6700D(iLocal_109, 1, 1);
							unk_0xF0059F27F7BB6680(&iLocal_105, 0);
							unk_0xF0059F27F7BB6680(&iLocal_105, 7);
						}
					}
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
				}
			}
			else if (func_83(iLocal_109))
			{
				if (!func_18(unk_0xBC25C936A095B5BA(), iLocal_109, 80f, 1))
				{
					if (!unk_0x3C03CFD5DD1E2D97(iLocal_109, "Getaway_Winched"))
					{
						unk_0xF0059F27F7BB6680(&(uLocal_101[func_5(5)]), 5);
						unk_0xF0059F27F7BB6680(&iLocal_105, 8);
					}
					else
					{
						unk_0x7CB6FD92BE491AD9(&iLocal_105, 8);
					}
					func_19(&iLocal_109);
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
				}
				else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_109)
					{
						func_19(&iLocal_109);
						func_192(17, 46);
						func_192(18, 46);
						func_192(14, 46);
						func_164();
					}
					else if (func_205())
					{
						func_19(&iLocal_109);
						func_164();
					}
				}
				else if (!func_195(iLocal_109))
				{
					if (unk_0xE9A905ADFD5BC8A0(iLocal_109, "GetawayVehicleValid", 0))
					{
					}
					func_192(17, 46);
					func_192(18, 46);
					func_19(&iLocal_109);
					func_164();
				}
			}
			else
			{
				func_19(&iLocal_109);
				func_164();
			}
		}
	}
}

int func_195(int iParam0)
{
	if (unk_0x8D66276473ABD7CC(iParam0) < 300 || unk_0x77F5C030D3238E26(iParam0) < 300f)
	{
		func_68(6);
		return 0;
	}
	return 1;
}

int func_196(int iParam0)
{
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "GetawayVehicleValid"))
	{
		if (unk_0x75236BEC3BDDE069(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_197()
{
	if (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
	{
		if ((unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0, 0) == unk_0xBC25C936A095B5BA() || unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1, 0) == unk_0xBC25C936A095B5BA()) || unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 2, 0) == unk_0xBC25C936A095B5BA())
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (func_203() && func_199(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	if ((func_201(iParam0) && !func_200(iParam0)) && func_195(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
	if (iVar0 == 0)
	{
		func_68(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_68(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_68(27);
		return 1;
	}
	if (func_35(iParam0))
	{
		func_68(14);
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	if (!func_202(iVar0))
	{
		if (unk_0xA329FA7FDFD7D1A7(iVar0) > 0.165f && unk_0xB5AEE116EA91D2FA(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_68(14);
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_192[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_236(33))
			{
				unk_0xF0059F27F7BB6680(&iLocal_105, 3);
			}
			else if (iVar0 == 1 && !func_236(34))
			{
				unk_0xF0059F27F7BB6680(&iLocal_105, 3);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&iLocal_105, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_203()
{
	if ((((unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()) || unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA())) || unk_0x58CB9BE52FDF3608(unk_0xBC25C936A095B5BA())) || unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
	{
		func_68(14);
		return 0;
	}
	return 1;
}

int func_204(int iParam0)
{
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	int iVar0;
	
	if (func_206(&iVar0))
	{
		if (!unk_0x3C03CFD5DD1E2D97(iVar0, "Getaway_Winched"))
		{
			unk_0xE9A905ADFD5BC8A0(iVar0, "Getaway_Winched", 1);
			func_68(16);
			return 1;
		}
		else if (unk_0x75236BEC3BDDE069(iVar0, "Getaway_Winched"))
		{
			return 0;
		}
	}
	return 0;
}

int func_206(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_235(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x3E12B546F3F2597A();
		if (func_83(iVar0))
		{
			iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x3E7A19282640095F(iVar0))
				{
					iVar2 = unk_0x057881EBA503F5E9(iVar0);
					if (unk_0x724D816EA203A79E(iVar2))
					{
						*uParam0 = unk_0x233ED4CD1F1A42C1(iVar2);
						if (func_83(*uParam0))
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

void func_207()
{
	switch (iLocal_203)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
			{
				if ((unk_0x105601648511CC64() - iLocal_1266) > 500)
				{
					sLocal_1263 = unk_0xF07F972D1C76408A(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
					iLocal_203 = 1;
				}
				else if (iLocal_1266 == -1)
				{
					iLocal_1266 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - Local_204[iLocal_1265 /*261*/].f_259) > 500)
			{
				if (!unk_0xF1734B55490E9045(sLocal_1263) && !unk_0xF1734B55490E9045(Local_204[iLocal_1265 /*261*/][iLocal_1264 /*8*/]))
				{
					if (unk_0x3362CDE8460ED38B(sLocal_1263, Local_204[iLocal_1265 /*261*/][iLocal_1264 /*8*/]))
					{
						unk_0xF0059F27F7BB6680(&(Local_204[iLocal_1265 /*261*/].f_258), iLocal_1264);
					}
					else
					{
						unk_0x7CB6FD92BE491AD9(&(Local_204[iLocal_1265 /*261*/].f_258), iLocal_1264);
					}
				}
				else
				{
					sLocal_1263 = unk_0xF07F972D1C76408A(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
				}
				iLocal_1264++;
				if (iLocal_1264 >= (Local_204[iLocal_1265 /*261*/].f_257 - 1))
				{
					iLocal_1264 = 0;
					Local_204[iLocal_1265 /*261*/].f_259 = unk_0x105601648511CC64();
					iLocal_1265++;
					if (iLocal_1265 >= 4)
					{
						iLocal_1265 = 0;
						iLocal_1266 = unk_0x105601648511CC64();
						iLocal_203 = 0;
					}
				}
			}
			break;
	}
}

void func_208()
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_35905 == 15 && iLocal_37 != 3) && unk_0xFA30DFD0084E92FE(iLocal_105, 5)) && !func_193()) && Global_70975 == -1) && !func_218()) && !func_82(9)) || func_101(35))
	{
		func_217();
		func_215();
		switch (iLocal_39)
		{
			case 0:
				if (unk_0xFA30DFD0084E92FE(iLocal_105, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_214(uLocal_101[0], &iVar0);
						}
					}
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_214(uLocal_101[1], &iVar0);
						}
					}
					unk_0xF0059F27F7BB6680(&iLocal_105, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_209(iLocal_100, 1);
				break;
		}
	}
	else if (((((((Global_35905 != 15 || Global_35905 != 0) || Global_35905 != 2) || Global_35905 != 4) || Global_35905 != 17) || func_193()) || Global_70975 == -1) || Global_104275)
	{
		iVar1 = 0;
		if (func_128())
		{
			iVar1 = 1;
		}
		else if (Global_104275)
		{
			iVar1 = 2;
		}
		if (unk_0xFA30DFD0084E92FE(uLocal_101[func_5(iVar1)], iVar1))
		{
			func_209(iVar1, 0);
		}
	}
}

void func_209(int iParam0, bool bParam1)
{
	switch (iLocal_39)
	{
		case 1:
			if ((!unk_0xF16DAFF595E80F7C() && !func_212(func_87())) && !func_211())
			{
				func_210(func_3(iParam0), 15000);
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
				fLocal_104 = (fLocal_104 + unk_0x11F9F9006143871A());
				if (fLocal_104 >= 20f)
				{
					iLocal_39 = 4;
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_105, 15))
				{
					func_4(iParam0);
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 15);
					iLocal_39 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(iParam0)))
			{
				if (fLocal_104 >= 7.5f || unk_0xFA30DFD0084E92FE(iLocal_105, 15))
				{
					func_4(iParam0);
					unk_0x7CB6FD92BE491AD9(&iLocal_105, 15);
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
				fLocal_104 = (fLocal_104 + unk_0x11F9F9006143871A());
			}
			break;
		
		case 4:
			fLocal_104 = 0f;
			iLocal_39 = 0;
			break;
	}
}

void func_210(var uParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(uParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_211()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	if (func_54(iParam0))
	{
		if (func_213(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_105220.f_7659.f_136)
			{
				if (Global_105220.f_7659[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (!func_54(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_7659.f_136)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_7659[iVar0 /*15*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_7659.f_764)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_7659.f_651[iVar0 /*14*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_7659.f_866)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_7659.f_765[iVar0 /*10*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_214(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_6(*iParam1);
	if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_105, 3))
		{
			iLocal_100 = *iParam1;
			iLocal_39 = 1;
			fLocal_104 = 0f;
			func_4(44);
			func_4(45);
			iLocal_1269 = unk_0x105601648511CC64();
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

void func_215()
{
	if (iLocal_37 == 0 || iLocal_37 == 1)
	{
		switch (iLocal_38)
		{
			case 0:
				if (func_216(func_3(3), 0, 0))
				{
					unk_0xF0059F27F7BB6680(&iLocal_105, 15);
					unk_0x7456702622C62EA0(1);
				}
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_128()) && !Global_103860)
					{
						unk_0xF0059F27F7BB6680(&iLocal_105, 15);
						unk_0x7456702622C62EA0(1);
					}
					iLocal_38 = 1;
				}
				break;
			
			case 1:
				if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
				{
					if (iLocal_42 == 2)
					{
						if (iLocal_37 == 1)
						{
							if (func_83(iLocal_109))
							{
								func_68(3);
								func_1(3, 1);
							}
						}
						iLocal_38 = 2;
					}
					else
					{
						if (func_83(iLocal_109))
						{
							func_68(3);
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
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
				{
					if (func_2(func_3(3)))
					{
						unk_0xF0059F27F7BB6680(&iLocal_105, 15);
						unk_0x7456702622C62EA0(1);
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

bool func_216(var uParam0, int iParam1, int iParam2)
{
	unk_0xE2CFC41F8121CE68(uParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(iParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_217()
{
	if ((((!func_101(func_102()) && !func_101(35)) && !func_212(func_87())) && !func_211()) && !func_113())
	{
		if (iLocal_1270 < 2 && (unk_0x105601648511CC64() - iLocal_1269) > 480000)
		{
			if (iLocal_42 != 2)
			{
				func_68(44);
			}
			else
			{
				func_68(45);
			}
			iLocal_1270++;
		}
	}
}

int func_218()
{
	if (Global_71238)
	{
		return 1;
	}
	else if (Global_55961 && !Global_55967)
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	if (func_73())
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_105, 2))
		{
			if (func_83(iLocal_109))
			{
				func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
				func_19(&iLocal_109);
			}
			unk_0x7CB6FD92BE491AD9(&iLocal_105, 2);
		}
		func_1(46, 1);
		func_244(0);
	}
}

void func_220()
{
	if (!func_225())
	{
		if (!func_218())
		{
			if (unk_0x726D9204B160D23E())
			{
				if (!unk_0x26641E1BFD792DBC())
				{
					func_222();
				}
			}
		}
	}
	else if (iLocal_37 != 3)
	{
		func_221();
	}
}

void func_221()
{
	if (iLocal_37 != 4)
	{
		if (iLocal_37 != 2)
		{
			if (unk_0xF16DAFF595E80F7C() && !Global_103860)
			{
				unk_0xF0059F27F7BB6680(&iLocal_105, 15);
				unk_0x7456702622C62EA0(1);
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
			{
				if (func_83(iLocal_109))
				{
					unk_0x29BEE055E0B12E9D(iLocal_109, 0);
				}
				func_19(&iLocal_109);
				func_164();
				if (iLocal_42 != 2)
				{
					Local_106 = { 0f, 0f, 0f };
				}
				unk_0x7CB6FD92BE491AD9(&iLocal_105, 8);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_105, 0))
		{
			func_20(iLocal_109, Local_110, fLocal_113, 25, 1);
			if (func_83(iLocal_109))
			{
				unk_0x29BEE055E0B12E9D(iLocal_109, 0);
			}
			func_19(&iLocal_109);
			func_164();
		}
		if (unk_0x4C7022A83B41D888("GETAWY", 5))
		{
			unk_0x841D233D3CE81152(5, 0);
			unk_0x7CB6FD92BE491AD9(&iLocal_105, 4);
			unk_0x7CB6FD92BE491AD9(&iLocal_105, 5);
			func_244(0);
			if (func_128())
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

void func_222()
{
	func_224();
	if (unk_0xFA30DFD0084E92FE(iLocal_105, 4))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_105, 5) && !unk_0xFA30DFD0084E92FE(iLocal_105, 16))
		{
			unk_0x900CF084251DED26("GETAWY", 5);
			if (unk_0x4C7022A83B41D888("GETAWY", 5))
			{
				unk_0xF0059F27F7BB6680(&iLocal_105, 5);
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_105, 5))
			{
				func_223();
				iLocal_39 = 0;
				unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
				unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
				unk_0x7CB6FD92BE491AD9(&iLocal_105, 1);
				if (func_2(func_3(0)))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_4(0);
				iLocal_37 = Global_105220.f_10020.f_128;
			}
		}
	}
}

void func_223()
{
	if (!func_101(func_102()))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_105, 12))
		{
			if (func_99())
			{
				if (iLocal_42 != 2)
				{
					func_68(44);
				}
				else
				{
					func_68(45);
				}
				unk_0xF0059F27F7BB6680(&iLocal_105, 12);
			}
		}
	}
}

void func_224()
{
	if (!unk_0x8A92BB3E28523395(5))
	{
		unk_0xF0059F27F7BB6680(&iLocal_105, 4);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 4);
	}
}

int func_225()
{
	if (iLocal_42 != 2)
	{
		if (iLocal_42 == 1 && func_87() == 2)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_105, 16))
			{
				unk_0xF0059F27F7BB6680(&iLocal_105, 16);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_105, 16))
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_105, 16);
		}
		if (func_226())
		{
			return 0;
		}
	}
	else if (func_101(35))
	{
		return 0;
	}
	else if (func_226())
	{
		return 0;
	}
	return 1;
}

int func_226()
{
	if (((((Global_35905 == 15 && !func_193()) && Global_70975 == -1) && !func_128()) && !func_227(1112014848)) && !Global_104275)
	{
		return 1;
	}
	return 0;
}

int func_227(float fParam0)
{
	if (iLocal_42 == 1)
	{
		if (func_74(unk_0xBC25C936A095B5BA(), Global_89046[1 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 2)
	{
		if (func_74(unk_0xBC25C936A095B5BA(), Global_89046[0 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 0)
	{
		if (func_74(unk_0xBC25C936A095B5BA(), Global_89046[3 /*15*/], fParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_228()
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_105, 13))
	{
		if (func_229())
		{
			unk_0xF0059F27F7BB6680(&iLocal_105, 13);
		}
	}
	else if (!func_229())
	{
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 7);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 0);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 1);
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 13);
	}
}

int func_229()
{
	if (((((func_230(39) || func_230(40)) || func_230(41)) || func_230(42)) || func_230(43)) || func_230(44))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)
{
	return func_231(iParam0, 6, 1);
}

int func_231(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_94() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_232(func_234(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_233(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_233(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_97();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

int func_235(int iParam0)
{
	if (func_84(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_330[iParam0 /*6*/];
}

void func_237(int iParam0)
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
	func_240();
	func_238();
	unk_0xF0059F27F7BB6680(&iLocal_105, 17);
	iLocal_1269 = unk_0x105601648511CC64();
}

void func_238()
{
	sLocal_53[0] = "AM_H_FBIC1A";
	sLocal_53[1] = "AM_H_FBIC1B";
	sLocal_53[2] = "AM_H_FBIC1C";
	sLocal_53[3] = "PRC_WANT";
	sLocal_53[4] = "PRC_DROPOFF";
	sLocal_53[5] = "PRC_INVALVEH";
	sLocal_53[6] = "PRC_HEALTH";
	sLocal_53[7] = func_239(7);
	sLocal_53[8] = func_239(8);
	sLocal_53[9] = "PRC_USEFIRST";
	sLocal_53[10] = func_239(10);
	sLocal_53[11] = func_239(11);
	sLocal_53[13] = func_239(13);
	sLocal_53[12] = func_239(12);
	sLocal_53[14] = "PRC_UNUSE";
	sLocal_53[15] = "PRC_SEATS";
	sLocal_53[16] = "PRC_CBOBVAL";
	sLocal_53[17] = func_239(17);
	sLocal_53[18] = func_239(18);
	sLocal_53[20] = func_239(20);
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

char* func_239(int iParam0)
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

void func_240()
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
	Local_204[0 /*261*/][0 /*8*/] = { func_241("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_204[0 /*261*/][1 /*8*/] = { func_241("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_204[0 /*261*/][2 /*8*/] = { func_241("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_204[0 /*261*/][3 /*8*/] = { func_241("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_204[0 /*261*/][4 /*8*/] = { func_241("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_204[0 /*261*/][5 /*8*/] = { func_241("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_204[0 /*261*/][6 /*8*/] = { func_241("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_204[0 /*261*/][7 /*8*/] = { func_241("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_204[0 /*261*/][8 /*8*/] = { func_241("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_204[0 /*261*/][9 /*8*/] = { func_241("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_204[0 /*261*/][10 /*8*/] = { func_241("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_204[0 /*261*/][11 /*8*/] = { func_241("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_204[0 /*261*/][13 /*8*/] = { func_241("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_204[0 /*261*/][14 /*8*/] = { func_241("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][15 /*8*/] = { func_241("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][16 /*8*/] = { func_241("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][17 /*8*/] = { func_241("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][18 /*8*/] = { func_241("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][19 /*8*/] = { func_241("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[0 /*261*/][20 /*8*/] = { func_241("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_204[0 /*261*/][21 /*8*/] = { func_241("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_204[0 /*261*/][22 /*8*/] = { func_241("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_204[0 /*261*/][23 /*8*/] = { func_241("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_204[0 /*261*/][24 /*8*/] = { func_241("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_204[0 /*261*/][25 /*8*/] = { func_241("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_204[0 /*261*/][26 /*8*/] = { func_241("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_204[0 /*261*/][27 /*8*/] = { func_241("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_204[0 /*261*/][28 /*8*/] = { func_241("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_204[0 /*261*/][29 /*8*/] = { func_241("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_204[0 /*261*/][30 /*8*/] = { func_241("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_204[0 /*261*/][31 /*8*/] = { func_241("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_204[0 /*261*/].f_260 = 0;
	Local_204[0 /*261*/].f_257 = 32;
	Local_204[2 /*261*/][0 /*8*/] = { func_241("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_204[2 /*261*/][1 /*8*/] = { func_241("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_204[2 /*261*/][2 /*8*/] = { func_241("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_204[2 /*261*/][3 /*8*/] = { func_241("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_204[2 /*261*/][4 /*8*/] = { func_241("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_204[2 /*261*/][5 /*8*/] = { func_241("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[2 /*261*/][6 /*8*/] = { func_241("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[2 /*261*/].f_260 = 2;
	Local_204[2 /*261*/].f_257 = 7;
	Local_204[1 /*261*/][0 /*8*/] = { func_241("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_204[1 /*261*/][1 /*8*/] = { func_241("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_204[1 /*261*/][2 /*8*/] = { func_241("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_204[1 /*261*/][3 /*8*/] = { func_241("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_204[1 /*261*/][4 /*8*/] = { func_241("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_204[1 /*261*/][5 /*8*/] = { func_241("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_204[1 /*261*/][6 /*8*/] = { func_241("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_204[1 /*261*/][7 /*8*/] = { func_241("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_204[1 /*261*/][8 /*8*/] = { func_241("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_204[1 /*261*/][9 /*8*/] = { func_241("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_204[1 /*261*/][10 /*8*/] = { func_241("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_204[1 /*261*/][11 /*8*/] = { func_241("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_204[1 /*261*/][12 /*8*/] = { func_241("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_204[1 /*261*/][13 /*8*/] = { func_241("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_204[1 /*261*/][14 /*8*/] = { func_241("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_204[1 /*261*/][15 /*8*/] = { func_241("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_204[1 /*261*/][16 /*8*/] = { func_241("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_204[1 /*261*/][17 /*8*/] = { func_241("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_204[1 /*261*/][18 /*8*/] = { func_241("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_204[1 /*261*/][19 /*8*/] = { func_241("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_204[1 /*261*/][20 /*8*/] = { func_241("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_204[1 /*261*/][21 /*8*/] = { func_241("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_204[1 /*261*/].f_260 = 1;
	Local_204[1 /*261*/].f_257 = 22;
	Local_204[3 /*261*/][0 /*8*/] = { func_241("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][1 /*8*/] = { func_241("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][2 /*8*/] = { func_241("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][3 /*8*/] = { func_241("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_204[3 /*261*/][4 /*8*/] = { func_241("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_204[3 /*261*/][5 /*8*/] = { func_241("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_204[3 /*261*/][6 /*8*/] = { func_241("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_204[3 /*261*/][7 /*8*/] = { func_241("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_204[3 /*261*/][8 /*8*/] = { func_241("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_204[3 /*261*/][9 /*8*/] = { func_241("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_204[3 /*261*/][10 /*8*/] = { func_241("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_204[3 /*261*/][11 /*8*/] = { func_241("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_204[3 /*261*/][12 /*8*/] = { func_241("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_204[3 /*261*/][13 /*8*/] = { func_241("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_204[3 /*261*/][14 /*8*/] = { func_241("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_204[3 /*261*/][15 /*8*/] = { func_241("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_204[3 /*261*/][16 /*8*/] = { func_241("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_204[3 /*261*/][17 /*8*/] = { func_241("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_204[3 /*261*/][18 /*8*/] = { func_241("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_204[3 /*261*/][19 /*8*/] = { func_241("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_204[3 /*261*/][20 /*8*/] = { func_241("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_204[3 /*261*/][21 /*8*/] = { func_241("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_204[3 /*261*/][22 /*8*/] = { func_241("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_204[3 /*261*/][23 /*8*/] = { func_241("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_204[3 /*261*/][24 /*8*/] = { func_241("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_204[3 /*261*/][25 /*8*/] = { func_241("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_204[3 /*261*/][26 /*8*/] = { func_241("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_204[3 /*261*/][27 /*8*/] = { func_241("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_204[3 /*261*/][28 /*8*/] = { func_241("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_204[3 /*261*/][29 /*8*/] = { func_241("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_204[3 /*261*/][30 /*8*/] = { func_241("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_204[3 /*261*/].f_260 = 3;
	Local_204[3 /*261*/].f_257 = 31;
	if (func_235(unk_0xBC25C936A095B5BA()))
	{
		sLocal_1263 = unk_0xF07F972D1C76408A(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
	}
}

struct<8> func_241(char* sParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<8> Var0;
	
	Var0.f_0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param4 };
	Var0.f_7 = fParam7;
	return Var0;
}

void func_242(int iParam0, bool bParam1)
{
	if (func_83(iLocal_109))
	{
		func_19(&iLocal_109);
	}
	if (!bParam1)
	{
		func_243(iParam0);
	}
	unk_0x95E4B6F3ED223F5A();
}

int func_243(int iParam0)
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
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[iVar0], iVar1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_9056.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_244(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_42 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_252(sVar0);
		}
		else if (iLocal_42 == 0)
		{
			if (func_87() == 0)
			{
				func_251(sVar0);
				func_250(sVar0);
			}
			else if (func_87() == 1)
			{
				func_249(sVar0);
			}
			else
			{
				func_249(sVar0);
			}
		}
		else if (iLocal_42 == 1)
		{
			if (func_87() == 0)
			{
				func_251(sVar0);
				func_252(sVar0);
			}
			else if (func_87() == 1)
			{
				func_249(sVar0);
				func_252(sVar0);
			}
			else
			{
				func_249(sVar0);
				func_252(sVar0);
			}
		}
		unk_0xF0059F27F7BB6680(&iLocal_105, 11);
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_105, 11))
	{
		func_248();
		func_247();
		func_246();
		func_245();
		unk_0x7CB6FD92BE491AD9(&iLocal_105, 11);
	}
}

void func_245()
{
	StringCopy(&(Global_2201[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_246()
{
	StringCopy(&(Global_2201[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_247()
{
	StringCopy(&(Global_2201[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_248()
{
	StringCopy(&(Global_2201[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_249(char* sParam0)
{
	StringCopy(&(Global_2201[0 /*16*/].f_8), sParam0, 32);
}

void func_250(char* sParam0)
{
	StringCopy(&(Global_2201[2 /*16*/].f_8), sParam0, 32);
}

void func_251(char* sParam0)
{
	StringCopy(&(Global_2201[1 /*16*/].f_8), sParam0, 32);
}

void func_252(char* sParam0)
{
	StringCopy(&(Global_2201[3 /*16*/].f_8), sParam0, 32);
}

int func_253(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_51(&(Global_69800.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_58(&(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_254(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_51(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_69800.f_555[0 /*21*/].f_3;
}

Vector3 func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_51(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_69800.f_555[0 /*21*/];
}

int func_256(int iParam0)
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
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_105220.f_9056.f_99.f_219[iVar0]), iVar1);
	return 1;
}


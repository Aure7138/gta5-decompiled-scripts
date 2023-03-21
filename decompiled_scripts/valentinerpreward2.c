#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_160 = 0;
	float fLocal_161 = 0f;
	var uLocal_162[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_172[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369[3] = { 0, 0, 0 };
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	bool bLocal_377 = 0;
	bool bLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	float fLocal_388 = 0f;
	int iLocal_389 = 0;
	struct<3> Local_390[32];
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	float fLocal_498 = 0f;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.39.29";
	iLocal_4 = -1;
	fLocal_161 = -5f;
	iLocal_489 = -1;
	iLocal_492 = -1;
	unk_0xAA78C60F0BF0F8D4(0);
	unk_0x330AFE43E1483B3F();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318164 = unk_0x765F5B806B517045(sLocal_0);
	iVar0 = unk_0x94E3E074F38DF86C() + 10000;
	while (unk_0x94E3E074F38DF86C() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_321();
	while (true)
	{
		if (func_320())
		{
			func_319();
			if (bLocal_1)
			{
				unk_0xF52EFF0C6EF215CB(0f, 0.23f);
				unk_0x95F5FAE83A0364F7(255, 255, 255, 255);
				func_318(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		func_317();
		func_314();
		if (unk_0x63C468D583002D23() && Global_2450895.f_3)
		{
			func_313();
			func_312();
			func_311();
			func_291();
			func_284();
			func_283();
			func_280();
			func_279();
			func_277();
			func_275();
			func_268();
			func_267();
			func_266();
			func_265();
			func_260();
			func_259();
			func_253();
			func_244();
			func_243();
			func_231();
			func_229();
			func_177();
			func_154();
			func_150();
			func_146();
			func_122();
			func_110();
			func_99();
			func_95();
			func_94();
			func_89();
			func_85();
			func_80();
			func_75();
			func_73();
			func_64();
			func_63();
			func_59();
			func_54();
			func_53();
			func_50();
			func_49();
			func_48();
		}
		else
		{
			func_321();
		}
		func_41();
		func_40();
		func_29();
		func_21();
		func_18();
		func_14();
		func_13();
		func_11();
		func_9();
		func_8();
		func_4();
		func_2();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x921053BAF754303D();
}

void func_1()
{
	var uVar0;
	
	Global_2454769 = uVar0;
}

void func_2()
{
	if (unk_0x63C468D583002D23() && Global_2450895.f_3)
	{
		if (iLocal_506)
		{
			unk_0x760DEE9485886F2D();
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("director_mode")) == 0)
	{
		if (!iLocal_504)
		{
			if (func_3())
			{
				iLocal_504 = 1;
				iLocal_505 = unk_0x94E3E074F38DF86C();
			}
		}
		else if (func_3())
		{
			if (unk_0x049F77DED8AE0AF4((unk_0x94E3E074F38DF86C() - iLocal_505)) > 3000)
			{
				if (!iLocal_506)
				{
					iLocal_506 = 1;
				}
			}
		}
		else
		{
			iLocal_504 = 0;
		}
	}
}

int func_3()
{
	if (unk_0x393B727E5AB23CC6(20))
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	
	if (Global_25190 == 2 || func_5(1))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if ((unk_0x23E9113C762466ED(iVar0) && unk_0x45CD66F0A131E554(iVar0, 0)) && !unk_0x44748DA5CF34DA5E(iVar0, "Not_Allow_As_Saved_Veh"))
			{
				unk_0x25E9B908B35A0675(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
		}
	}
}

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_35781 == iParam0;
}

int func_7()
{
	if (Global_100647)
	{
		return 1;
	}
	if (!func_6(14) && unk_0x82F1A060D8F4583B(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if ((Global_1315168 == 2 || Global_1315168 == 18) && Global_1315210)
	{
		Global_1312440 = 1;
		Global_1633501.f_88218 = 1;
		Global_1633501 = -1;
		Global_1315168 = 3;
	}
}

void func_9()
{
	if (((func_5(1) || unk_0x4A5EEB23B781F757()) && unk_0x82F1A060D8F4583B(joaat("director_mode")) == 0) && func_10())
	{
		unk_0x760DEE9485886F2D();
	}
	if (func_10())
	{
	}
}

bool func_10()
{
	return Global_1315233;
}

void func_11()
{
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 713.8806f, -1023.13f, 21.35678f, 699.3227f, -1024.938f, 24.77542f, 5.25f, 0, 1, 0))
	{
		if (func_12(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0xC38F0FBE1914783C(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
				{
					unk_0x76E52B58E2C506DA(unk_0x17B5CC8A8615737D(), 709.944f, -1027.909f, 21.2097f);
				}
				else
				{
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 709.944f, -1027.909f, 21.2097f, 0, 0, 0, 1);
				}
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 709.944f, -1027.909f, 21.2097f, 0, 0, 0, 1);
			}
			unk_0x4B04B4FAE554FA03(unk_0x17B5CC8A8615737D(), 0);
		}
	}
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x7268A1112372AA44(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0xCF7855B965948E97(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2433125.f_3[iVar0])
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
	if (Global_2421664[unk_0xBE369BE1BC57A796() /*358*/] == 0)
	{
		if (Global_1312416 && Global_979731)
		{
			if (!Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_8)
			{
				Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_8 = 1;
			}
		}
	}
}

void func_14()
{
	var uVar0;
	int iVar1;
	var uVar2[20];
	int iVar23;
	
	if ((unk_0xBE369BE1BC57A796() != func_17() && unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D())) && Global_1591069 != func_17())
	{
		if (unk_0xBE369BE1BC57A796() == Global_1591069)
		{
			if (iLocal_348)
			{
				unk_0xEB79FECD9022AAF0(&(Global_91543.f_1308[45]), 2);
				unk_0xEB79FECD9022AAF0(&(Global_91543.f_1308[45]), 8);
				iLocal_349 = 0;
			}
			else if (!iLocal_349)
			{
				iLocal_348 = 0;
				unk_0x21E7933CCC7B3724(&(Global_91543.f_1308[45]), 2);
				unk_0x21E7933CCC7B3724(&(Global_91543.f_1308[45]), 8);
				iLocal_349 = 1;
			}
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 24))
				{
					if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 26) && !unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199, 2))
					{
						if (unk_0x841F312D66362BF7(Global_93623) && !unk_0xA929B2923D14E2F8(unk_0xC7C67E717B20DA89(Global_93623), 0))
						{
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								iLocal_348 = 1;
							}
							if (unk_0x59499E9FE45DE5D5(unk_0xC7C67E717B20DA89(Global_93623)) == joaat("MainRoom"))
							{
								if (!unk_0x45CA7F42CA715849(unk_0xC7C67E717B20DA89(Global_93623), 1))
								{
									if (!unk_0xC38F0FBE1914783C(unk_0xC7C67E717B20DA89(Global_93623)))
									{
										if (unk_0xA33A4B297D498A41(unk_0xC7C67E717B20DA89(Global_93623)))
										{
											unk_0x4EDACF77CDD9CFEB(Global_93623);
										}
										else
										{
											unk_0xF0F77C99098F999B(unk_0xC7C67E717B20DA89(Global_93623), 0, 1);
										}
									}
									else
									{
										unk_0xF0F77C99098F999B(unk_0xC7C67E717B20DA89(Global_93623), 0, 1);
									}
								}
								else if (!unk_0xC38F0FBE1914783C(unk_0xC7C67E717B20DA89(Global_93623)))
								{
									unk_0x4EDACF77CDD9CFEB(Global_93623);
								}
								else
								{
									unk_0xF0F77C99098F999B(unk_0xC7C67E717B20DA89(Global_93623), 0, 1);
									uVar0 = unk_0xC7C67E717B20DA89(Global_93623);
									unk_0x813865264334331D(&uVar0);
									unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198), 26);
									unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199), 0);
								}
							}
						}
					}
					else if (iLocal_348)
					{
						iLocal_348 = 0;
					}
				}
			}
		}
		else if ((!unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 24) && unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 26)) || ((!unk_0x48B8265059381CD0(Global_1591201[Global_1591069 /*602*/].f_601, 2) && !unk_0x48B8265059381CD0(Global_1591201[Global_1591069 /*602*/].f_601, 1)) && !unk_0x48B8265059381CD0(Global_1591201[Global_1591069 /*602*/].f_601, 0)))
		{
			iVar23 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar2);
			iVar1 = 0;
			while (iVar1 < iVar23)
			{
				if (unk_0x23E9113C762466ED(uVar2[iVar1]) && unk_0x3983CCB0D958159C(uVar2[iVar1]))
				{
					if (!unk_0xA929B2923D14E2F8(uVar2[iVar1], 0))
					{
						if (func_15(uVar2[iVar1], 0, 0, 0, 0, 0, 1, 0))
						{
							if (unk_0x59499E9FE45DE5D5(uVar2[iVar1]) == joaat("MainRoom"))
							{
								if (func_12(Global_1591069, 1, 1))
								{
									if (unk_0x59499E9FE45DE5D5(unk_0xDF7CE83326F434E9(Global_1591069)) != joaat("MainRoom"))
									{
										if (unk_0xC26429B504BA534D(uVar2[iVar1]))
										{
											if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), uVar2[iVar1], 0) && !unk_0xA929B2923D14E2F8(uVar2[iVar1], 0))
											{
												unk_0xF0F77C99098F999B(uVar2[iVar1], 0, 1);
												unk_0x813865264334331D(&(uVar2[iVar1]));
											}
										}
										else if (unk_0xC38F0FBE1914783C(uVar2[iVar1]))
										{
											unk_0xF0F77C99098F999B(uVar2[iVar1], 0, 1);
										}
									}
								}
							}
						}
					}
				}
				iVar1++;
			}
		}
	}
}

int func_15(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x58060A1B26EA2597(uParam0) + 1;
	if (iParam4 || !unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_16(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x23E9113C762466ED(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x17B5CC8A8615737D())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xCA41A00932714525(iVar2))
					{
						if (unk_0x0764AC92F08BEC9E(iVar2))
						{
							if (unk_0xA54996763FD89E65(unk_0xDE881A032F5BA110(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xCA41A00932714525(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_16(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;
	
	if (!unk_0xC0FA8EEF6413F866(uParam0, iParam1, uParam3))
	{
		iVar0 = unk_0x17206B315923243C(uParam0, iParam1, uParam3);
	}
	if (bParam2)
	{
		if (!unk_0x23E9113C762466ED(iVar0) && !unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, iParam1);
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x1F8F07D86DA1A701(iVar0, 451360105) == 1 || unk_0x1F8F07D86DA1A701(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(iParam0, 0), unk_0x57240623C1BC6E88(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_17()
{
	return -1;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 1;
	if (!Global_69702)
	{
		if (Global_68131)
		{
			iVar0 = 0;
			if (!iLocal_342)
			{
				bLocal_343 = func_20();
				func_19(1);
				iLocal_342 = 1;
			}
		}
	}
	if (iVar0 && iLocal_342)
	{
		func_19(bLocal_343);
		iLocal_342 = 0;
	}
}

void func_19(bool bParam0)
{
	Global_1315212 = bParam0;
}

bool func_20()
{
	return Global_1315212;
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_27())
	{
		if (func_26())
		{
			if (func_25() == 21)
			{
				if (Global_1633501 == 2)
				{
					iVar0 = Global_2440075[4];
					if (unk_0x48B8265059381CD0(Global_1633501.f_41919, 31) || unk_0x48B8265059381CD0(Global_1633501.f_41920[iVar0], 31))
					{
						iVar1 = func_24(Global_1633501.f_41912, iVar0);
						iVar2 = func_22(Global_1633501.f_41912, iVar0);
						iVar3 = 0;
						while (iVar3 < iVar1)
						{
							unk_0x21E7933CCC7B3724(&(Global_1633501.f_41920[iVar0]), iVar3);
							iVar3++;
						}
						iVar3 = 0;
						while (iVar3 < iVar2)
						{
							unk_0xEB79FECD9022AAF0(&(Global_1633501.f_41937[iVar0]), iVar3);
							iVar3++;
						}
						unk_0x21E7933CCC7B3724(&(Global_1633501.f_41919), 31);
						if (unk_0x48B8265059381CD0(Global_1633501.f_41920[iVar0], 31))
						{
							unk_0x21E7933CCC7B3724(&(Global_1633501.f_41920[iVar0]), 31);
						}
					}
					if (unk_0x48B8265059381CD0(Global_1633501.f_41937[4], 3))
					{
						unk_0x21E7933CCC7B3724(&(Global_1633501.f_41937[4]), 3);
					}
					if (unk_0x48B8265059381CD0(Global_1633501.f_41937[4], 4))
					{
						unk_0x21E7933CCC7B3724(&(Global_1633501.f_41937[4]), 4);
					}
					if (unk_0x48B8265059381CD0(Global_1633501.f_41937[9], 4))
					{
						unk_0x21E7933CCC7B3724(&(Global_1633501.f_41937[9]), 4);
					}
					if (unk_0x48B8265059381CD0(Global_1633501.f_41937[6], 6))
					{
						unk_0x21E7933CCC7B3724(&(Global_1633501.f_41937[6]), 6);
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
		case 12:
		case 13:
			return func_23(iParam1);
			break;
		
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 7;
				
				case 1:
					return 4;
				
				case 2:
					return 2;
				
				default:
			}
			break;
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	
	Global_262145.f_14980 = 1;
	switch (iParam0)
	{
		case 7:
			iVar0 = 20;
			if (!func_320())
			{
				if (!Global_262145.f_17803)
				{
					iVar0 = (iVar0 - 1);
				}
			}
			break;
		
		case 6:
			iVar0 = 24;
			if (!func_320())
			{
				if (!Global_262145.f_17804)
				{
					iVar0 = (iVar0 - 1);
				}
			}
			break;
		
		case 3:
			iVar0 = 2;
			break;
		
		case 4:
			iVar0 = 24;
			if (!func_320())
			{
				if (!Global_262145.f_17827)
				{
					iVar0 = (iVar0 - 1);
				}
			}
			break;
		
		case 1:
			iVar0 = 11;
			break;
		
		case 5:
			iVar0 = 10;
			if (!func_320())
			{
				if (!Global_262145.f_17806)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17805)
				{
					iVar0 = (iVar0 - 1);
				}
			}
			break;
		
		case 2:
			iVar0 = 8;
			break;
		
		case 0:
			iVar0 = 3;
			break;
		
		case 9:
			iVar0 = 13;
			break;
		
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 5;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 10:
			iVar0 = 0;
			break;
		
		case 13:
			iVar0 = 0;
			break;
		
		case 14:
			iVar0 = 0;
			break;
		
		case 15:
			iVar0 = 9;
			if (!func_320())
			{
				if (!Global_262145.f_17815)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17816)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17817)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17818)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17814)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17819)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17820)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17821)
				{
					iVar0 = (iVar0 - 1);
				}
				if (!Global_262145.f_17822)
				{
					iVar0 = (iVar0 - 1);
				}
			}
			break;
	}
	return iVar0;
}

int func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
		case 12:
		case 13:
			switch (iParam1)
			{
				case 7:
					return 7;
				
				case 6:
					return 11;
				
				case 3:
					return 7;
				
				case 4:
					return 9;
				
				case 1:
					return 11;
				
				case 5:
					return 4;
				
				case 2:
					return 14;
				
				case 0:
					return 4;
				
				case 9:
					return 15;
				
				case 10:
					return 5;
				
				case 11:
					return 5;
				
				case 12:
					return 12;
				
				case 8:
					return 14;
				
				case 13:
					return 6;
				
				case 15:
					return 0;
				
				case 14:
					return 0;
				
				default:
			}
			break;
		
		case 2:
			return 6;
		
		case 3:
			return 6;
		
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 7;
				
				case 1:
					return 7;
				
				case 2:
					return 1;
				
				default:
			}
			break;
	}
	return 1;
}

int func_25()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188;
}

bool func_26()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

int func_27()
{
	if (Global_262145.f_17833)
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	return 1;
}

int func_28()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					uVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&uVar0, 0);
					unk_0x0D1285E5ED89254D(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_29()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (!func_39() && !func_38())
	{
		if ((func_26() || func_37()) || func_36())
		{
			if (func_35())
			{
				bVar0 = false;
				if ((func_25() == 9 && !func_37()) && (!func_36() || !func_34(0)))
				{
					bVar0 = true;
					iLocal_337 = 1;
				}
				else if (func_25() == 10)
				{
					iLocal_337 = 0;
				}
				if (func_34(41) && iLocal_337 == 1)
				{
					bVar0 = true;
					iLocal_337 = 0;
				}
				if (bVar0)
				{
					if (func_34(0))
					{
						iVar1 = 3;
						bVar2 = true;
					}
					else
					{
						if (func_34(41))
						{
							iVar1 = 4;
						}
						else
						{
							iVar1 = 5;
						}
						bVar2 = false;
					}
					if (!unk_0x48B8265059381CD0(Global_1633501.f_12, 15))
					{
						iVar1++;
					}
					if (!func_33())
					{
						iVar1++;
					}
					StringCopy(&Var3, "LOB_CUST_", 16);
					StringIntConCat(&Var3, Global_2440075[8], 16);
					func_30(0, iVar1, 0, 8, "LOB_CAT_39", &Var3, 1, bVar2, 1, -1, -1, 0, -1, 0, 0, 0, -1082130432, 0, -1);
					if (Global_2440075[8] != Global_2440075[9])
					{
						Global_2440075[9] = Global_2440075[8];
						Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_59[9] = Global_2440075[8];
					}
				}
				if (func_25() >= 21)
				{
					Global_2440075[8] = 1;
				}
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, int iParam15, float fParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "SET_DATA_SLOT";
	if (bParam8)
	{
		sVar0 = "UPDATE_SLOT";
	}
	iVar1 = -1;
	if (unk_0x2F805CDCE0F4A0A5(sVar0))
	{
		unk_0xDF18CF55301CEB8B(iParam0);
		unk_0xDF18CF55301CEB8B(iParam1);
		unk_0xDF18CF55301CEB8B(iParam2);
		unk_0xDF18CF55301CEB8B(iParam3);
		iVar2 = func_32(bParam6, 0, 1);
		if (iParam18 != -1)
		{
			iVar2 = iParam18;
			iVar1 = iParam12;
			iParam12 = -1;
		}
		unk_0xDF18CF55301CEB8B(iVar2);
		unk_0xDF18CF55301CEB8B(iParam12);
		if (bParam7)
		{
			if (func_25() == 10 || func_25() == 11)
			{
				unk_0xDF18CF55301CEB8B(3);
			}
			else
			{
				unk_0xDF18CF55301CEB8B(1);
			}
		}
		else
		{
			unk_0xDF18CF55301CEB8B(-2);
		}
		func_31(sParam4);
		unk_0xDF18CF55301CEB8B(0);
		unk_0xDF18CF55301CEB8B(0);
		if (unk_0x9C88EB7B70229335(sParam5))
		{
			unk_0xDCEB60B79ECB219E("STRING");
			if (!unk_0x9C88EB7B70229335(iParam11))
			{
				unk_0xBAB00B98D1E61BEE(iParam11);
			}
			else
			{
				unk_0xBAB00B98D1E61BEE("");
			}
			unk_0x1798EBF9408190D3();
		}
		else
		{
			unk_0xDCEB60B79ECB219E(sParam5);
			if (!unk_0x9C88EB7B70229335(iParam11))
			{
				unk_0x34D84D73B5DF8E80(iParam11);
			}
			if (iParam9 != -1)
			{
				if (bParam14)
				{
					unk_0x1C4A0E5E77C7F187(iParam9, 1);
				}
				else
				{
					unk_0x69967F83C1E636E2(iParam9);
				}
			}
			if (iParam10 != -1)
			{
				if (bParam14)
				{
					unk_0x1C4A0E5E77C7F187(iParam10, 1);
				}
				else
				{
					unk_0x69967F83C1E636E2(iParam10);
				}
			}
			if (fParam16 != -1f)
			{
				unk_0x561D1C39012D002B(fParam16, 2);
			}
			unk_0x1798EBF9408190D3();
		}
		unk_0xDF18CF55301CEB8B(0);
		unk_0x14ED5B5B8289F2FC(iParam13);
		if (iVar1 != -1)
		{
			unk_0xDF18CF55301CEB8B(iVar1);
		}
		else
		{
			unk_0x14ED5B5B8289F2FC(0);
		}
		unk_0x14ED5B5B8289F2FC(iParam17);
		unk_0xDF18CF55301CEB8B(iParam15);
		unk_0x44983883E630A945();
	}
}

void func_31(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(uParam0);
	unk_0x1798EBF9408190D3();
}

int func_32(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_33()
{
	if (((((((Global_1633501.f_41912 == 1 || Global_1633501.f_41912 == 3) || Global_1633501.f_41912 == 5) || Global_1633501.f_41912 == 7) || Global_1633501.f_41912 == 8) || Global_1633501.f_41912 == 9) || Global_1633501.f_41912 == 11) || Global_1633501.f_41912 == 13)
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 == 0)
	{
		return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2812, iVar1);
	}
	if (iVar0 == 1)
	{
		return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2813, iVar1);
	}
	if (iVar0 == 2)
	{
		return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2814, iVar1);
	}
	if (iVar0 == 3)
	{
		return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2815, iVar1);
	}
	if (iVar0 == 4)
	{
		return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2816, iVar1);
	}
	return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2817, iVar1);
}

bool func_35()
{
	return unk_0x48B8265059381CD0(Global_1633501.f_41919, 15);
}

bool func_36()
{
	return Global_2443134.f_570;
}

bool func_37()
{
	return Global_2443134.f_571;
}

bool func_38()
{
	return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2808, 7);
}

bool func_39()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_3, 3);
}

void func_40()
{
	int iVar0;
	
	if (unk_0x82F1A060D8F4583B(joaat("fm_race_creator")) != 0 || unk_0x82F1A060D8F4583B(joaat("fm_race_controler")) != 0)
	{
		if (Global_1633501.f_41912 == 5 || Global_1633501.f_41912 == 4)
		{
			if (unk_0x82F1A060D8F4583B(joaat("fm_race_creator")) != 0)
			{
				if (unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "FMMCC_CTITLE"))
				{
					if (unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_73[3 /*6*/]), "FMMCCMENU_10"))
					{
						StringCopy(&(Global_17290.f_73[3 /*6*/]), "WT_INVALID", 24);
						Global_17290.f_1610[3] = 0;
					}
					if (Global_17290.f_5606 == 4 && unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_73[(Global_17290.f_5606 - 1) /*6*/]), "WT_INVALID"))
					{
						unk_0xD1BB2AD73E7FC3A7(2, 201, 1);
						iLocal_323 = 1;
					}
					else if (((unk_0x4B972043966C2EB8(2, 187) || unk_0x4B972043966C2EB8(2, 188)) || unk_0x79888727131C6854(2, 188)) || unk_0x79888727131C6854(2, 187))
					{
						unk_0xD1BB2AD73E7FC3A7(2, 201, 1);
						iLocal_323 = 1;
					}
					else if (!unk_0xC36DBFD18BF1A53B(2, 201))
					{
						unk_0xCA3F0B618E8962EA(2, 201, 1);
						iLocal_323 = 0;
					}
				}
				else if (unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "FMMCCMENU_10T"))
				{
					unk_0xD1BB2AD73E7FC3A7(2, 201, 1);
					iLocal_323 = 1;
					if (!iLocal_325)
					{
						Global_1633501.f_44917 = 150;
						iVar0 = 0;
						while (iVar0 <= 149)
						{
							Global_1633501.f_44918[iVar0 /*61*/].f_7 = 0;
							Global_1633501.f_44918[iVar0 /*61*/] = { 0f, 0f, 66f };
							iVar0++;
						}
						iLocal_325 = 1;
					}
				}
				else
				{
					if (iLocal_323)
					{
						if (!unk_0xC36DBFD18BF1A53B(2, 201))
						{
							unk_0xCA3F0B618E8962EA(2, 201, 1);
						}
						iLocal_323 = 0;
					}
					if (iLocal_325)
					{
						iVar0 = 0;
						while (iVar0 <= 149)
						{
							Global_1633501.f_44918[iVar0 /*61*/].f_7 = 0;
							Global_1633501.f_44918[iVar0 /*61*/] = { 0f, 0f, 0f };
							iVar0++;
						}
						Global_1633501.f_44917 = 0;
						iLocal_325 = 0;
					}
				}
			}
			if (!iLocal_324)
			{
				if (Global_1633501.f_44917 > 0)
				{
					iVar0 = 0;
					while (iVar0 <= (Global_1633501.f_44917 - 1))
					{
						Global_1633501.f_44918[iVar0 /*61*/].f_7 = 0;
						Global_1633501.f_44918[iVar0 /*61*/] = { 0f, 0f, 0f };
						iVar0++;
					}
				}
				iLocal_324 = 1;
			}
		}
	}
}

void func_41()
{
	int iVar0;
	int iVar1;
	
	if (func_47() || func_46())
	{
		if (func_45())
		{
			if (!iLocal_8)
			{
				if (Global_1633501.f_44917 > 0)
				{
					iVar0 = iLocal_160;
					while (iVar0 <= 149)
					{
						if (iLocal_9[iVar0] != 5)
						{
							if (!func_44(Global_1633501.f_44918[iVar0 /*61*/]))
							{
								if (!unk_0x23E9113C762466ED(uLocal_172[iVar0]))
								{
									uLocal_172[iVar0] = unk_0x521A82CF998EDB21(Global_1633501.f_44918[iVar0 /*61*/].f_7, Global_1633501.f_44918[iVar0 /*61*/], 0, 0, 1);
									unk_0x027DB6817AB239EB(uLocal_172[iVar0], 0, 0);
									unk_0xCEDF2A713644AEDA(uLocal_172[iVar0], 0, 0);
									unk_0x04A5FAE5B1EB8E28(uLocal_172[iVar0], Global_1633501.f_44918[iVar0 /*61*/].f_3, 2, 1);
								}
								if (unk_0x23E9113C762466ED(uLocal_172[iVar0]))
								{
									switch (iLocal_9[iVar0])
									{
										case 0:
											if (func_43(iVar0))
											{
												iLocal_9[iVar0] = 1;
												iLocal_160 = iVar0;
												Jump @485; //curOff = 277
											}
											else
											{
												iLocal_9[iVar0] = 5;
											}
											break;
										
										case 1:
										case 2:
										case 3:
											iLocal_9[iVar0]++;
											iLocal_160 = iVar0;
											Jump @485; //curOff = 311
											break;
										
										case 4:
											if (func_42())
											{
												iLocal_9[iVar0] = 5;
											}
											else if (func_46())
											{
												Global_1633501.f_44918[iVar0 /*61*/].f_7 = joaat("prop_ld_test_01");
												Global_1633501.f_44918[iVar0 /*61*/].f_3 = { 0f, 0f, 0f };
												iLocal_9[iVar0] = 5;
											}
											else
											{
												Global_1633501.f_44918[iVar0 /*61*/].f_2 = 1000f;
												iLocal_9[iVar0] = 5;
											}
											iLocal_160 = 0;
											break;
										}
								}
							}
							else
							{
								iLocal_9[iVar0] = 5;
							}
						}
						else
						{
							if (unk_0x23E9113C762466ED(uLocal_172[iVar0]))
							{
								unk_0x1AAFEA627BB9C402(&(uLocal_172[iVar0]));
							}
							iVar1++;
							if (iVar1 == 150)
							{
								iLocal_8 = 1;
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (iLocal_8)
	{
		iLocal_8 = 0;
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (unk_0x23E9113C762466ED(uLocal_162[iVar0]))
			{
				unk_0x813865264334331D(&(uLocal_162[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 149)
		{
			iLocal_9[iVar0] = 0;
			if (unk_0x23E9113C762466ED(uLocal_172[iVar0]))
			{
				unk_0x1AAFEA627BB9C402(&(uLocal_172[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_42()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA77EE6C138A588EB(uLocal_162[8]))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (unk_0xA77EE6C138A588EB(uLocal_162[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)
{
	struct<3> Var0[8];
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	int iVar34;
	int iVar35;
	
	if (unk_0x23E9113C762466ED(uLocal_172[iParam0]))
	{
		unk_0x9475086C69ACF470(Global_1633501.f_44918[iParam0 /*61*/].f_7, &Var25, &Var28);
		Var31 = { Var28 - Var25 };
		Var31.f_0 = (Var31.f_0 / 2f);
		Var31.f_1 = (Var31.f_1 / 2f);
		Var0[0 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], -Var31.f_0, -Var31.f_1, -Var31.f_2) };
		Var0[1 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], -Var31.f_0, Var31.f_1, -Var31.f_2) };
		Var0[2 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], Var31.f_0, Var31.f_1, -Var31.f_2) };
		Var0[3 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], Var31.f_0, -Var31.f_1, -Var31.f_2) };
		Var0[4 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], -Var31.f_0, -Var31.f_1, Var31.f_2) };
		Var0[5 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], -Var31.f_0, Var31.f_1, Var31.f_2) };
		Var0[6 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], Var31.f_0, Var31.f_1, Var31.f_2) };
		Var0[7 /*3*/] = { unk_0x854ED33E6D715648(uLocal_172[iParam0], Var31.f_0, -Var31.f_1, Var31.f_2) };
	}
	iVar34 = 0;
	while (iVar34 <= 7)
	{
		if (Var0[iVar34 /*3*/].f_2 < fLocal_161)
		{
			iVar35++;
		}
		unk_0x5DC8C2F2F8A363C2(uLocal_162[iVar34], Var0[iVar34 /*3*/], 1, 0, 0, 1);
		iVar34++;
	}
	if (iVar35 == 8)
	{
		unk_0x5DC8C2F2F8A363C2(uLocal_162[8], Global_1633501.f_44918[iParam0 /*61*/], 1, 0, 0, 1);
		return 1;
	}
	return 0;
}

int func_44(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (unk_0x23E9113C762466ED(uLocal_162[iVar0]))
		{
			iVar1++;
		}
		else
		{
			uLocal_162[iVar0] = unk_0x692A2891A2BA7352(joaat("ninef2"), 100f, 100f, 100f, 0, 1, 1);
			unk_0x027DB6817AB239EB(uLocal_162[iVar0], 0, 0);
			unk_0xCEDF2A713644AEDA(uLocal_162[iVar0], 0, 0);
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	if ((unk_0x82F1A060D8F4583B(joaat("fm_mission_controller")) != 0 || unk_0x82F1A060D8F4583B(joaat("fm_race_controler")) != 0) || unk_0x82F1A060D8F4583B(joaat("fm_deathmatch_controler")) != 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
{
	if (((unk_0x82F1A060D8F4583B(joaat("fm_race_creator")) != 0 || unk_0x82F1A060D8F4583B(joaat("fm_deathmatch_creator")) != 0) || unk_0x82F1A060D8F4583B(joaat("fm_lts_creator")) != 0) || unk_0x82F1A060D8F4583B(joaat("fm_capture_creator")) != 0)
	{
		return 1;
	}
	return 0;
}

void func_48()
{
	int iVar0;
	struct<20> Var1;
	
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_9 = -1;
	Var1.f_16 = -1;
	Var1.f_19 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2524414[iVar0 /*20*/] != 0 && Global_2524414[iVar0 /*20*/] != 1)
		{
			Global_2524414[iVar0 /*20*/] = { Var1 };
		}
		iVar0++;
	}
}

void func_49()
{
	if (iLocal_497 || iLocal_500)
	{
		if (!Global_1760210)
		{
			Global_1760210 = 1;
		}
	}
	else if (Global_1760210)
	{
		Global_1760210 = 0;
	}
}

void func_50()
{
	if (Global_1591069 != func_17())
	{
		if (func_52(Global_1591069))
		{
			func_51();
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_69.f_3, 30))
	{
		if (!unk_0x86DB3331A7FB14B2())
		{
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 11) || Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15 != -1)
			{
				unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_69.f_3), 30);
			}
		}
	}
}

void func_51()
{
	int iVar0;
	
	if (!unk_0x86DB3331A7FB14B2())
	{
		if (Global_1312466.f_18 == 0)
		{
			if (unk_0x30F06AB0772AFB80())
			{
				iVar0 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15;
				if (iVar0 != -1)
				{
					unk_0x6A4C98FC9F7161C7();
					unk_0xC48E328891A0934A(unk_0xBE369BE1BC57A796(), Global_1049427[iVar0 /*1942*/], 0f, 0, 1, 1);
				}
			}
		}
	}
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (func_12(iParam0, 0, 0))
		{
			return unk_0x48B8265059381CD0(Global_2421664[iVar0 /*358*/].f_69.f_3, 30);
		}
	}
	return 0;
}

void func_53()
{
	if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), uLocal_503)) < 250)
	{
		if (Global_1765460.f_883)
		{
			Global_1765460.f_883 = 0;
			if (Global_1765460)
			{
				Global_1765460 = 0;
				Global_1765460.f_4 = 0;
				Global_1765460.f_5 = 0;
				Global_1765460.f_529 = unk_0x94E3E074F38DF86C();
				Global_1765460.f_6 = 0;
			}
		}
	}
}

void func_54()
{
	if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), uLocal_502)) < 250)
	{
		if (Global_1764677.f_708)
		{
			func_55(Global_1764677.f_709);
			Global_1764677.f_709 = -1;
			Global_1764677.f_710 = 0;
			Global_1764677.f_711 = { 0f, 0f, 0f };
			Global_1764677.f_714 = 0f;
			Global_1764677.f_708 = 0;
			Global_1764677.f_716 = -1;
			Global_1764677.f_717 = 0;
		}
	}
}

void func_55(int iParam0)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_56(0, iParam0);
	func_56(1, iParam0);
	func_56(2, iParam0);
	func_56(3, iParam0);
	func_56(4, iParam0);
	func_56(10, iParam0);
	Global_1764677.f_235[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1764677.f_437[iParam0] = 0f;
	if (Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_4 == iParam0)
	{
		Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312.f_4 = -1;
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312), 2);
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_312), 1);
	}
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_57(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_223[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_227[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_231[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_505[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_509[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_672[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_676[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_680[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_690[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_694[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_513[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0x21E7933CCC7B3724(&(Global_1764677.f_684[iVar0]), iVar1);
			return;
			break;
	}
}

void func_57(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_58(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 67)
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		switch (iVar1)
		{
			case 171:
				func_60(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_60(int iParam0)
{
	int iVar0;
	
	unk_0x91015F07066D5841(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 544:
			func_62();
			break;
		
		case 538:
			func_61();
			break;
	}
}

void func_61()
{
	uLocal_502 = unk_0x8F8F2E80A7DA4D64();
}

void func_62()
{
	uLocal_503 = unk_0x8F8F2E80A7DA4D64();
}

void func_63()
{
	if (Global_1574127)
	{
		if (!iLocal_501)
		{
			unk_0x0631CFD4CF7CAA31(0);
			iLocal_501 = 1;
		}
		if (func_3())
		{
			unk_0x3AB4D531995C4AB3(1, 0, 0);
		}
	}
	else
	{
		iLocal_501 = 0;
	}
}

void func_64()
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_1574127)
	{
		if (!iLocal_499)
		{
			if (bLocal_377)
			{
				if (func_72())
				{
					unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_69.f_3), 31);
				}
				else
				{
					unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_69.f_3), 31);
				}
				iLocal_499 = 1;
			}
		}
		else if (func_71(unk_0xBE369BE1BC57A796(), 0) && ((func_70(unk_0xBE369BE1BC57A796()) && func_69()) || func_67()))
		{
			bVar0 = true;
		}
	}
	else
	{
		iLocal_499 = 0;
	}
	if (bVar0)
	{
		if (!iLocal_500)
		{
			iLocal_500 = 1;
		}
		if (func_66())
		{
			func_51();
			func_65();
		}
	}
	else if (iLocal_500)
	{
		iLocal_500 = 0;
	}
}

void func_65()
{
	if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_69.f_3, 30))
	{
		unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_69.f_3), 30);
	}
}

int func_66()
{
	if (!unk_0x9C88EB7B70229335(&(Global_17290.f_1)))
	{
		if ((((((((unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH0") || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH0b")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH4")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH4b")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH8")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH8b")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH9")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH9b")) || unk_0x6A7B0D91FD88D9EE(&(Global_17290.f_1), "MP_MAN_VEH5"))
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iVar0 == unk_0xBE369BE1BC57A796())
		{
			iVar1 = iVar0;
			if (func_70(iVar1))
			{
				if (func_68(Global_1591201[iVar0 /*602*/].f_258.f_52) && unk_0x471C87EF03143741(&(Global_1591201[iVar0 /*602*/].f_258.f_52)) == unk_0xBE369BE1BC57A796())
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

var func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BC6F3BBFEAB9958(&uParam0, 13);
}

int func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iVar0 == unk_0xBE369BE1BC57A796())
		{
			if (func_68(Global_1591201[iVar0 /*602*/].f_258.f_52) && unk_0x471C87EF03143741(&(Global_1591201[iVar0 /*602*/].f_258.f_52)) == unk_0xBE369BE1BC57A796())
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (func_12(iParam0, 0, 0))
		{
			return unk_0x48B8265059381CD0(Global_2421664[iVar0 /*358*/].f_69.f_3, 31);
		}
	}
	return 0;
}

int func_71(int iParam0, bool bParam1)
{
	if (iParam0 == func_17())
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1320101[iVar0] != 0 && Global_1320101[iVar0] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_73()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (Global_2494199.f_269 != 0)
		{
			func_74();
		}
	}
}

void func_74()
{
	Global_2494199.f_269 = 0;
	Global_2494199.f_270 = 0;
	Global_2494199.f_271 = 0;
}

void func_75()
{
	if (!Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15 == -1)
	{
		if (!unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 3) && func_76(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15, 0, 0))
		{
			unk_0x3AB4D531995C4AB3(1, 0, 0);
		}
	}
}

int func_76(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_77(unk_0xBE369BE1BC57A796(), 0);
	}
	if (bParam1)
	{
		if (func_77(unk_0xBE369BE1BC57A796(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_77(int iParam0, bool bParam1)
{
	if (Global_1591069 != func_17())
	{
		if (!func_79(Global_1591069))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xBE369BE1BC57A796() != Global_1591069)
			{
				if (unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 24) || func_78(Global_1591069))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 24);
}

bool func_78(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 9);
}

int func_79(int iParam0)
{
	if (iParam0 != func_17())
	{
		return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_210, 2);
	}
	return 0;
}

void func_80()
{
	var uVar0;
	
	if (!Global_262145.f_3115 == 0f)
	{
		if (func_81(4) || func_81(5))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if (!unk_0xA929B2923D14E2F8(uVar0, 0) && unk_0x0324EEB10F81965F(iVar0) == joaat("dukes2"))
				{
					fLocal_498 = Global_262145.f_3115;
					Global_262145.f_3115 = 0f;
				}
			}
		}
	}
	else if ((!func_81(4) && !func_81(5)) && !fLocal_498 == 0f)
	{
		Global_262145.f_3115 = fLocal_498;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (func_84())
	{
		iVar0 = 0;
		while (iVar0 < 46)
		{
			if (func_83(iVar0) == iParam0)
			{
				if (func_82(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_82(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], 6);
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
	}
	return 6;
}

bool func_84()
{
	return Global_91543.f_304 > 0;
}

void func_85()
{
	if (!iLocal_496)
	{
		if (func_88())
		{
			func_87(1);
		}
	}
	else if (func_86())
	{
		func_87(0);
		Global_262145.f_16767 = 0;
	}
	else if ((!func_71(unk_0xBE369BE1BC57A796(), 1) && !unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 14)) && !unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 11))
	{
		if (!Global_262145.f_16767)
		{
			Global_262145.f_16767 = 1;
		}
	}
}

int func_86()
{
	if ((((((((Global_1574127 && !func_71(unk_0xBE369BE1BC57A796(), 1)) && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15 == -1) && !Global_1764622) && !unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 24)) && !unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 14)) && !unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 11)) && unk_0x30F06AB0772AFB80()) && unk_0xE36F5BB02676D469())
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0)
{
	if (iParam0 != iLocal_496)
	{
		iLocal_497 = iParam0;
		Global_262145.f_16769 = iParam0;
		Global_262145.f_16768 = iParam0;
		Global_262145.f_16766 = iParam0;
		Global_262145.f_16765 = iParam0;
		Global_262145.f_7752 = iParam0;
		Global_262145.f_16870 = iParam0;
		iLocal_496 = iParam0;
	}
}

int func_88()
{
	if (!Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15 == -1)
	{
		if (Global_1764622 && !unk_0xE36F5BB02676D469())
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_492 < 0)
	{
		func_93();
	}
	if (func_92())
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			bVar0 = true;
			if (!unk_0x3C9A4847496426B9() != 0)
			{
				if (!func_91())
				{
					if (!iLocal_495)
					{
						func_93();
						iLocal_495 = 1;
					}
					if (func_90())
					{
						bVar1 = true;
					}
				}
				else
				{
					iLocal_495 = 0;
				}
			}
			else
			{
				iLocal_495 = 0;
			}
		}
		else
		{
			iLocal_495 = 0;
		}
	}
	else
	{
		iLocal_495 = 0;
	}
	if (bVar1)
	{
		iVar2 = unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), uLocal_493));
		if (iVar2 > iLocal_492)
		{
			bVar0 = false;
		}
	}
	else
	{
		uLocal_493 = unk_0x8F8F2E80A7DA4D64();
	}
	if (func_92())
	{
		if (func_91())
		{
			uLocal_494 = unk_0x8F8F2E80A7DA4D64();
		}
		iVar2 = unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), uLocal_494));
		if (iVar2 < 2000)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!Global_1760207)
		{
			Global_1760207 = 1;
		}
	}
	else if (Global_1760207)
	{
		Global_1760207 = 0;
	}
}

int func_90()
{
	if ((((((((unk_0xBD25D98B49ED9766(0, 71) != 0f || unk_0xBD25D98B49ED9766(0, 72) != 0f) || unk_0x79888727131C6854(0, 71)) || unk_0x698C9A4C14BF3957(0, 71)) || unk_0x9E3D293A990C1BEF(0, 71)) || unk_0x4B972043966C2EB8(0, 72)) || unk_0x79888727131C6854(0, 72)) || unk_0x698C9A4C14BF3957(0, 72)) || unk_0x9E3D293A990C1BEF(0, 72))
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	if (((unk_0x79888727131C6854(2, 199) || unk_0x79888727131C6854(2, 200)) || unk_0x9E3D293A990C1BEF(2, 199)) || unk_0x9E3D293A990C1BEF(2, 200))
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	if (((((!Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15 == -1 && !Global_1764622) && !unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 24)) && !unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 14)) && !unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 11)) && !unk_0x25BD4C26D84038CD())
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	iLocal_492 = unk_0x0E29C61F26D96FDB(250, 750);
}

void func_94()
{
	if (!iLocal_490 == Global_93624)
	{
		iLocal_489 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_79;
		iLocal_490 = Global_93624;
	}
	if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199, 1))
	{
		if (!Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_79 == iLocal_489 && !Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_79 == -1)
		{
			iLocal_491 = iLocal_490;
			unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_199), 1);
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_491))
	{
		unk_0xE647AA9998A1123E(iLocal_491);
		if (!unk_0xC26429B504BA534D(iLocal_491))
		{
			if (unk_0xFB2400809D8DC8C7(iLocal_491))
			{
				unk_0xF0F77C99098F999B(iLocal_491, 0, 1);
			}
		}
		if (unk_0x45CA7F42CA715849(iLocal_491, 0))
		{
			if (unk_0xC38F0FBE1914783C(iLocal_491))
			{
				unk_0x813865264334331D(&iLocal_491);
			}
		}
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEF4E5E47AF0D4480())
	{
		iVar0 = 0;
		while (iVar0 < unk_0x45FF610AA845AFAA(1))
		{
			iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
			switch (iVar1)
			{
				case 171:
					unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
					switch (iVar2)
					{
						case 390:
							func_96(joaat("mpply_overall_badsport"));
							break;
					}
					break;
			}
			iVar0++;
		}
	}
}

void func_96(int iParam0)
{
	float fVar0;
	
	fVar0 = func_98(iParam0);
	fVar0 = (fVar0 - 1f);
	func_97(iParam0, fVar0);
}

void func_97(var uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		unk_0x098CDAAE6268B0D0(iVar0, fParam1, 1);
	}
}

var func_98(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	unk_0x5BA3D9E4E73996B2(uVar0, &uVar1, -1);
	return uVar1;
}

void func_99()
{
	if ((Global_2443905.f_2842.f_4 == 2 && Global_2443905.f_2842.f_66 == 0) && func_109() == 4)
	{
		if (!func_108(&uLocal_487))
		{
			func_107(&uLocal_487, 0, 0);
		}
		else if (func_106(&uLocal_487, 2000, 0))
		{
			if (func_105(Global_2443134.f_751, 999, 1073741824))
			{
				unk_0x3AB4D531995C4AB3(1, 0, 0);
			}
			else
			{
				func_101(1, 0);
				func_100(&uLocal_487);
			}
		}
	}
	else if (func_108(&uLocal_487))
	{
		func_100(&uLocal_487);
	}
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_101(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_103(&Global_17071, bParam1);
	unk_0xF28AB1024B01E661(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x4EB2CA772E9700FE();
			func_102(0);
			if (unk_0x23E9113C762466ED(Global_1318015))
			{
				if (unk_0x45CA7F42CA715849(Global_1318015, 0))
				{
					if (!unk_0xC26429B504BA534D(Global_1318015))
					{
						unk_0xF0F77C99098F999B(Global_1318015, 0, 0);
					}
					unk_0x478AE709A466CB7E(&Global_1318015);
				}
			}
		}
	}
}

void func_102(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2454746 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

void func_103(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x0F1BF24ED3B7ED40(uParam0->f_9))
	{
		if (unk_0xA6312B4FE4134130(uParam0->f_9))
		{
			func_104(0);
		}
		unk_0x2BC4A4AFFC2D937D(uParam0->f_9, 0);
	}
	if (!Global_36878)
	{
		unk_0xF1C53F353A5EB55F(1);
		unk_0x6BB28C952AFE4B00(0f);
		unk_0x53C8D69A01C4E4AD(0f);
	}
	Global_2404994.f_574 = 0f;
	if (!bParam1)
	{
		unk_0x9274EF97A90581BE(0, 0, 0, 1, 0, 0);
	}
}

void func_104(int iParam0)
{
	Global_17149 = iParam0;
}

int func_105(struct<3> Param0, int iParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049427[iParam3 /*1942*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049427[iParam3 /*1942*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1049427[iParam3 /*1942*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1049427[iParam3 /*1942*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1049427[iParam3 /*1942*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1049427[iParam3 /*1942*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if ((unk_0x3D559A6AF62756C4(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x3D559A6AF62756C4(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x3D559A6AF62756C4(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_105(Param0, iVar0, 1073741824))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_105(Param0, 8, 1073741824))
		{
			return 1;
		}
		if (func_105(Param0, 17, 1073741824))
		{
			return 1;
		}
	}
	return 0;
}

int func_106(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_107(uParam0, bParam2, 0);
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_107(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_108(var uParam0)
{
	return uParam0->f_1;
}

int func_109()
{
	return Global_1312466.f_18;
}

void func_110()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEF4E5E47AF0D4480())
	{
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_187 = 0;
		iVar0 = 29;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x21E7933CCC7B3724(&(Global_1574358[iVar1]), iVar0);
		if (func_111(121))
		{
			iVar0 = 121;
			iVar1 = (iVar0 / 32);
			iVar0 = (iVar0 % 32);
			unk_0xEB79FECD9022AAF0(&(Global_1574358[iVar1]), iVar0);
		}
	}
}

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_114(unk_0xBE369BE1BC57A796(), 1);
	iVar2 = func_112(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_113(iParam0, 0);
}

int func_113(int iParam0, int iParam1)
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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

int func_114(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_115(iParam0);
}

int func_115(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_117(-1)];
			}
			else if (func_116(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_117(-1)];
	}
	return 0;
}

int func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_118()
{
	return Global_1312735;
}

int func_119(int iParam0)
{
	if (func_121())
	{
		return 1;
	}
	if (func_120())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_120()
{
	return Global_1315221;
}

bool func_121()
{
	return Global_1315223;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar4;
	
	if (unk_0xEF4E5E47AF0D4480())
	{
		func_145();
		iVar4 = 0;
		while (iVar4 < Global_2590252)
		{
			if ((Global_2590252[iVar4 /*76*/].f_4 == -59668082 || Global_2590252[iVar4 /*76*/].f_4 == 1982688246) || Global_2590252[iVar4 /*76*/].f_4 == -1985150258)
			{
				if (Global_2590252[iVar4 /*76*/].f_72 & 2 != 0)
				{
					Global_2590252[iVar4 /*76*/].f_72 = (Global_2590252[iVar4 /*76*/].f_72 - Global_2590252[iVar4 /*76*/].f_72 & 2);
				}
			}
			iVar4++;
		}
		if (iLocal_389)
		{
			if (!unk_0x48B8265059381CD0(Global_1353070.f_1013, 1))
			{
				unk_0xEB79FECD9022AAF0(&(Global_1353070.f_1013), 1);
			}
			if (!unk_0x48B8265059381CD0(Global_1353070.f_1013, 12))
			{
				unk_0xEB79FECD9022AAF0(&(Global_1353070.f_1013), 12);
			}
			if (!func_108(&uLocal_383))
			{
				func_107(&uLocal_383, 0, 0);
			}
			else if (func_106(&uLocal_383, 10000, 0))
			{
				unk_0x21E7933CCC7B3724(&(Global_1353070.f_1013), 1);
				unk_0x21E7933CCC7B3724(&(Global_1353070.f_1013), 12);
				iLocal_389 = 0;
				func_100(&uLocal_383);
			}
		}
		iVar0 = 0;
		while (iVar0 < unk_0x45FF610AA845AFAA(1))
		{
			iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
			switch (iVar1)
			{
				case 171:
					unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
					switch (iVar2)
					{
						case 292:
							func_141(iVar0);
							break;
						
						case 295:
							func_140(iVar0);
							break;
						
						case 294:
							func_136(iVar0);
							break;
						
						case 226:
							func_125(iVar0);
							break;
					}
					break;
			}
			iVar0++;
		}
		if (func_108(&uLocal_379))
		{
			if (Global_262145.f_5491 != 0)
			{
				iLocal_385 = Global_262145.f_5491;
				Global_262145.f_5491 = 0;
			}
			if (func_106(&uLocal_379, 120000, 0))
			{
				func_124();
			}
		}
		if (func_108(&uLocal_381))
		{
			if (Global_262145.f_8270 != 0)
			{
				iLocal_386 = Global_262145.f_8270;
				Global_262145.f_8270 = 0;
			}
			if (Global_262145.f_5542 != 0)
			{
				iLocal_387 = Global_262145.f_5542;
				Global_262145.f_5542 = 0;
			}
			if (Global_262145.f_1 != 0f)
			{
				fLocal_388 = Global_262145.f_1;
				Global_262145.f_1 = 0f;
			}
			if (func_106(&uLocal_381, 120000, 0))
			{
				func_123();
			}
		}
	}
}

void func_123()
{
	if (iLocal_387 != 0)
	{
		Global_262145.f_5542 = iLocal_387;
		iLocal_387 = 0;
	}
	if (iLocal_386 != 0)
	{
		Global_262145.f_8270 = iLocal_386;
		iLocal_386 = 0;
	}
	if (fLocal_388 != 0f)
	{
		Global_262145.f_1 = fLocal_388;
		fLocal_388 = 0f;
	}
	func_100(&uLocal_381);
}

void func_124()
{
	if (iLocal_385 != 0)
	{
		Global_262145.f_5491 = iLocal_385;
		iLocal_385 = 0;
	}
	func_100(&uLocal_379);
}

void func_125(int iParam0)
{
	struct<12> Var0;
	
	Var0.f_3 = 89;
	Var0.f_4 = 36;
	Var0.f_5 = 1;
	Var0.f_6 = 6022;
	Var0.f_7 = 302;
	Var0.f_8 = 229;
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 12))
	{
		if (Var0.f_1 == unk_0xBE369BE1BC57A796())
		{
			if (Var0.f_3 != 89)
			{
				func_134(Var0.f_3, (func_135(Var0.f_3, -1) - Var0.f_9), -1);
			}
			if (Var0.f_4 != 36)
			{
				func_133(Var0.f_4, Var0.f_11, -1);
			}
			if (Var0.f_5 != 1)
			{
				func_131(Var0.f_5, (func_132(Var0.f_5, -1) - Var0.f_10), -1);
			}
			if (Var0.f_6 != 6022)
			{
				func_129(Var0.f_6, (func_130(Var0.f_6, -1, 0) - Var0.f_9), -1, 1, 0);
			}
			if (Var0.f_8 != 229)
			{
				func_126(Var0.f_8, (func_128(Var0.f_8, -1) - Var0.f_10), -1, 1);
			}
		}
	}
}

void func_126(int iParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_127())
	{
		iVar0 = Global_2521893[iParam0 /*3*/][func_117(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x098CDAAE6268B0D0(iVar0, fParam1, iParam3);
		}
	}
}

int func_127()
{
	return 1;
	return 0;
}

float func_128(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2521893[iParam0 /*3*/][func_117(iParam1)];
	if (unk_0x5BA3D9E4E73996B2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_117(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_131(int iParam0, float fParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = Global_1363122[iParam0 /*3*/][func_117(iParam2)];
	unk_0x098CDAAE6268B0D0(uVar0, fParam1, 1);
}

float func_132(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1363122[iParam0 /*3*/][func_117(iParam1)];
	if (unk_0x5BA3D9E4E73996B2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

void func_133(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = Global_2524131[iParam0 /*3*/][func_117(iParam2)];
	unk_0xCE46AC18A4A47E2D(uVar0, uParam1, 1);
}

void func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2523863[iParam0 /*3*/][func_117(iParam2)];
	unk_0x731753D8494ABECD(iVar0, iParam1, 1);
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2523863[iParam0 /*3*/][func_117(iParam1)];
	if (unk_0x7FE4F330D3D74809(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_136(int iParam0)
{
	struct<3> Var0;
	struct<13> Var5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 5))
	{
		if (func_139(Var0.f_1))
		{
			func_100(&uLocal_379);
			func_107(&uLocal_379, 0, 0);
			Var5 = { func_138(Var0.f_1) };
			unk_0x579439F4A07CDCB9(&Var5, 295, Var0.f_2);
		}
		else
		{
			func_137(Var0.f_1);
		}
	}
}

void func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_390[iVar0 /*3*/] == func_17())
		{
			if (unk_0x7268A1112372AA44(iParam0))
			{
				Local_390[iVar0 /*3*/] = iParam0;
				func_107(&(Local_390[iVar0 /*3*/].f_1), 0, 0);
			}
			return;
		}
		iVar0++;
	}
}

struct<13> func_138(var uParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(uParam0, &Var0, 13);
	return Var0;
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 == Local_390[iVar0 /*3*/])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_140(int iParam0)
{
	struct<3> Var0;
	struct<13> Var3;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_139(Var0.f_1))
		{
			func_100(&uLocal_379);
			func_107(&uLocal_379, 0, 0);
			Var3 = { func_138(Var0.f_1) };
			unk_0x579439F4A07CDCB9(&Var3, 295, Var0.f_2);
		}
		else
		{
			func_137(Var0.f_1);
		}
	}
}

void func_141(int iParam0)
{
	struct<3> Var0;
	int iVar5;
	struct<13> Var6;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 5))
	{
		iLocal_389 = 1;
		unk_0xEB79FECD9022AAF0(&(Global_1353070.f_1013), 1);
		unk_0xEB79FECD9022AAF0(&(Global_1353070.f_1013), 12);
		func_100(&uLocal_383);
		if (Var0.f_2 > 0)
		{
			iVar5 = (func_115(unk_0xBE369BE1BC57A796()) - Var0.f_2);
			func_144(634, iVar5, -1, 1);
			func_142(1159, -Var0.f_2, -1);
			func_142(1160, -Var0.f_2, -1);
			if (func_116(unk_0xBE369BE1BC57A796()))
			{
				Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_1 = iVar5;
				Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_6 = func_112(iVar5, 1);
			}
		}
		if (func_139(Var0.f_1))
		{
			func_100(&uLocal_381);
			func_107(&uLocal_381, 0, 0);
			Var6 = { func_138(Var0.f_1) };
			unk_0x579439F4A07CDCB9(&Var6, 292, Var0.f_2);
		}
		else
		{
			func_137(Var0.f_1);
		}
	}
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_117(iParam2), 0);
	iVar0 = (iVar0 - iParam1);
	if (!func_143(iParam0))
	{
		func_129(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_144(iParam0, iVar0, iParam2, 1);
	}
}

int func_143(int iParam0)
{
	if (Global_1363152)
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
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_117(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_117(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_117(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_117(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_117(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_117(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_117(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_117(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_117(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_117(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_117(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_117(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_117(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_117(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_117(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_117(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_117(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_117(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_117(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_117(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_117(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_117(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_117(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_117(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_117(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_117(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_117(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_117(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_117(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_117(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_117(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_117(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_390[iVar0 /*3*/] != func_17())
		{
			if (func_108(&(Local_390[iVar0 /*3*/].f_1)))
			{
				if (unk_0x7268A1112372AA44(Local_390[iVar0 /*3*/]))
				{
					if (func_106(&(Local_390[iVar0 /*3*/].f_1), 150000, 0))
					{
						Local_390[iVar0 /*3*/] = func_17();
						func_100(&(Local_390[iVar0 /*3*/].f_1));
					}
				}
				else
				{
					func_100(&(Local_390[iVar0 /*3*/].f_1));
				}
			}
		}
		iVar0++;
	}
}

void func_146()
{
	if (!iLocal_367)
	{
		if (Global_1574127)
		{
			if (func_149() || func_147())
			{
				Global_262145.f_17754 = 1;
			}
			else
			{
				Global_262145.f_17754 = 0;
			}
			iLocal_367 = 1;
		}
	}
	else if (!Global_1574127)
	{
		iLocal_367 = 0;
	}
}

int func_147()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_148(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_8868)
	{
		return 0;
	}
	uVar1[0] = func_148(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_148(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_148(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_148(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_8864 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_8868)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_148(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_148(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_8867)
	{
		return 0;
	}
	uVar1[0] = func_148(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_148(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_148(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_148(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_8863 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_8867)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_150()
{
	var uVar0;
	bool bVar1;
	struct<4> Var2;
	int iVar6;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1);
		if (unk_0x23E9113C762466ED(uVar0) && !unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			StringCopy(&Var2, unk_0xE184AC3A4DAF353D(iVar0), 16);
			iVar6 = unk_0x765F5B806B517045(&Var2);
			if ((!func_81(4) && !func_81(5)) && !iLocal_376 == iVar6)
			{
				if (func_151(Var2))
				{
					bVar1 = true;
				}
				iLocal_376 = iVar6;
			}
			else if (((Global_262145.f_17743 == 0 && Global_262145.f_17734 == 0) && Global_262145.f_17732 == 0) && Global_262145.f_17737 == 0)
			{
				bVar1 = true;
			}
		}
	}
	else
	{
		iLocal_376 = 0;
	}
	if (bVar1)
	{
		if (((Global_262145.f_17743 && Global_262145.f_17734) && Global_262145.f_17732) && Global_262145.f_17737)
		{
			Global_262145.f_17743 = 0;
			Global_262145.f_17734 = 0;
			Global_262145.f_17732 = 0;
			Global_262145.f_17737 = 0;
		}
	}
	else if (((!Global_262145.f_17743 && !Global_262145.f_17734) && !Global_262145.f_17732) && !Global_262145.f_17737)
	{
		Global_262145.f_17743 = 1;
		Global_262145.f_17734 = 1;
		Global_262145.f_17732 = 1;
		Global_262145.f_17737 = 1;
	}
}

int func_151(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	var uVar0;
	
	func_153(&cParam0);
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 0, 1);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 1, 2);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 2, 3);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 3, 4);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 4, 5);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 5, 6);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 6, 7);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&cParam0, 7, 8);
	if (!func_152(uVar0))
	{
		return 0;
	}
	return 1;
}

int func_152(var uParam0)
{
	int iVar0;
	
	if ((unk_0x6EBC82C4F735AFDF(uParam0, &iVar0) && iVar0 >= 0) && iVar0 <= 9)
	{
		return 1;
	}
	return 0;
}

void func_153(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	
	iVar0 = unk_0xF9108830F4935563(uParam0);
	if (iVar0 < 8)
	{
		Var1 = { *uParam0 };
		iVar10 = unk_0x049F77DED8AE0AF4((8 - iVar0));
		iVar9 = 0;
		while (iVar9 < (iVar10 / 2))
		{
			StringCopy(&Var5, " ", 16);
			StringConCat(&Var5, &Var1, 16);
			StringConCat(&Var5, " ", 16);
			Var1 = { Var5 };
			iVar9++;
		}
		if ((iVar10 % 2) == 1)
		{
			StringConCat(&Var1, " ", 16);
		}
		*uParam0 = { Var1 };
	}
}

void func_154()
{
	if (!bLocal_377)
	{
		if (Global_1574127)
		{
			if (Global_2494199.f_5340)
			{
				func_155();
				bLocal_377 = true;
			}
		}
	}
	else if (!Global_1574127)
	{
		bLocal_377 = false;
	}
	if (Global_2097152[0 /*10758*/].f_5522.f_1997 <= 0)
	{
		if (!bLocal_378)
		{
			if (!Global_262145.f_8759)
			{
				Global_262145.f_8759 = 1;
				bLocal_378 = true;
			}
		}
	}
	else if (bLocal_378)
	{
		Global_262145.f_8759 = 0;
	}
}

void func_155()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	if (func_176())
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			if (Global_98568[iVar0])
			{
				if (!func_175(Global_98447[iVar0 /*4*/]))
				{
					iVar1 = unk_0x765F5B806B517045(&(Global_98447[iVar0 /*4*/]));
					func_168(iVar1);
					func_164(iVar1);
					func_156(iVar1);
				}
			}
			iVar0++;
		}
	}
	Var2 = { Global_101700.f_19077.f_267 };
	func_153(&Var2);
	if (!func_175(Var2))
	{
		iVar1 = unk_0x765F5B806B517045(&Var2);
		func_168(iVar1);
		func_164(iVar1);
		func_156(iVar1);
	}
	iVar0 = 0;
	while (iVar0 < 158)
	{
		if (Global_1320796[iVar0 /*140*/].f_66 != 0)
		{
			if (func_151(Global_1320796[iVar0 /*140*/].f_1))
			{
				iVar1 = unk_0x765F5B806B517045(&(Global_1320796[iVar0 /*140*/].f_1));
				func_168(iVar1);
				func_164(iVar1);
				func_156(iVar1);
			}
		}
		iVar0++;
	}
}

void func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = func_163(&Global_1320047, iParam0);
	if (iVar0 > -1)
	{
		func_159(iVar0);
	}
	iVar0 = func_163(&Global_1320053, iParam0);
	if (iVar0 > -1)
	{
		func_157(&Global_1320053, iVar0);
	}
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		func_158(uParam0, iParam1);
	}
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		(*uParam0)[iParam1] = (*uParam0)[(iParam1 - 1)];
		func_158(uParam0, (iParam1 - 1));
	}
	else if (iParam1 == 0)
	{
		(*uParam0)[0] = 0;
	}
}

void func_159(int iParam0)
{
	if (iParam0 > 0)
	{
		func_160(iParam0, func_162((iParam0 - 1)));
		func_159((iParam0 - 1));
	}
	else if (iParam0 == 0)
	{
		func_160(0, 0);
	}
}

void func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(joaat("mpply_perszolapuma0"), iParam1);
			break;
		
		case 1:
			func_161(joaat("mpply_perszolapuma1"), iParam1);
			break;
		
		case 2:
			func_161(joaat("mpply_perszolapuma2"), iParam1);
			break;
		
		case 3:
			func_161(joaat("mpply_perszolapuma3"), iParam1);
			break;
		
		case 4:
			func_161(joaat("mpply_perszolapuma4"), iParam1);
			break;
	}
	Global_1320047[iParam0] = iParam1;
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_148(joaat("mpply_perszolapuma0"));
		
		case 1:
			return func_148(joaat("mpply_perszolapuma1"));
		
		case 2:
			return func_148(joaat("mpply_perszolapuma2"));
		
		case 3:
			return func_148(joaat("mpply_perszolapuma3"));
		
		case 4:
			return func_148(joaat("mpply_perszolapuma4"));
		
		default:
	}
	return 0;
}

int func_163(var uParam0, int iParam1)
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

void func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = func_163(&Global_1320074, iParam0);
	if (iVar0 > -1)
	{
		func_165(iVar0);
	}
	iVar0 = func_163(&Global_1320080, iParam0);
	if (iVar0 > -1)
	{
		func_157(&Global_1320080, iVar0);
	}
}

void func_165(int iParam0)
{
	if (iParam0 > 0)
	{
		func_166(iParam0, func_167((iParam0 - 1)));
		func_165((iParam0 - 1));
	}
	else if (iParam0 == 0)
	{
		func_166(0, 0);
	}
}

void func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(joaat("mpply_soldzolapuma0"), iParam1);
			break;
		
		case 1:
			func_161(joaat("mpply_soldzolapuma1"), iParam1);
			break;
		
		case 2:
			func_161(joaat("mpply_soldzolapuma2"), iParam1);
			break;
		
		case 3:
			func_161(joaat("mpply_soldzolapuma3"), iParam1);
			break;
		
		case 4:
			func_161(joaat("mpply_soldzolapuma4"), iParam1);
			break;
	}
	Global_1320074[iParam0] = iParam1;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_148(joaat("mpply_soldzolapuma0"));
		
		case 1:
			return func_148(joaat("mpply_soldzolapuma1"));
		
		case 2:
			return func_148(joaat("mpply_soldzolapuma2"));
		
		case 3:
			return func_148(joaat("mpply_soldzolapuma3"));
		
		case 4:
			return func_148(joaat("mpply_soldzolapuma4"));
		
		default:
	}
	return 0;
}

void func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = func_163(&Global_1320101, iParam0);
	if (iVar0 > -1)
	{
		func_172(iVar0);
		func_169(iVar0);
	}
	iVar0 = func_163(&Global_1320123, iParam0);
	if (iVar0 > -1)
	{
		func_157(&Global_1320123, iVar0);
		func_157(&Global_1320144, iVar0);
	}
}

void func_169(int iParam0)
{
	if (iParam0 > 0)
	{
		func_170(iParam0, func_171((iParam0 - 1)));
		func_169((iParam0 - 1));
	}
	else if (iParam0 == 0)
	{
		func_170(0, 0);
	}
}

void func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(joaat("mpply_knowndozersold0"), iParam1);
			break;
		
		case 1:
			func_161(joaat("mpply_knowndozersold1"), iParam1);
			break;
		
		case 2:
			func_161(joaat("mpply_knowndozersold2"), iParam1);
			break;
		
		case 3:
			func_161(joaat("mpply_knowndozersold3"), iParam1);
			break;
		
		case 4:
			func_161(joaat("mpply_knowndozersold4"), iParam1);
			break;
		
		case 5:
			func_161(joaat("mpply_knowndozersold5"), iParam1);
			break;
		
		case 6:
			func_161(joaat("mpply_knowndozersold6"), iParam1);
			break;
		
		case 7:
			func_161(joaat("mpply_knowndozersold7"), iParam1);
			break;
		
		case 8:
			func_161(joaat("mpply_knowndozersold8"), iParam1);
			break;
		
		case 9:
			func_161(joaat("mpply_knowndozersold9"), iParam1);
			break;
	}
	Global_1320112[iParam0] = iParam1;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_148(joaat("mpply_knowndozersold0"));
		
		case 1:
			return func_148(joaat("mpply_knowndozersold1"));
		
		case 2:
			return func_148(joaat("mpply_knowndozersold2"));
		
		case 3:
			return func_148(joaat("mpply_knowndozersold3"));
		
		case 4:
			return func_148(joaat("mpply_knowndozersold4"));
		
		case 5:
			return func_148(joaat("mpply_knowndozersold5"));
		
		case 6:
			return func_148(joaat("mpply_knowndozersold6"));
		
		case 7:
			return func_148(joaat("mpply_knowndozersold7"));
		
		case 8:
			return func_148(joaat("mpply_knowndozersold8"));
		
		case 9:
			return func_148(joaat("mpply_knowndozersold9"));
		
		default:
	}
	return 0;
}

void func_172(int iParam0)
{
	if (iParam0 > 0)
	{
		func_173(iParam0, func_174((iParam0 - 1)));
		func_172((iParam0 - 1));
	}
	else if (iParam0 == 0)
	{
		func_173(0, 0);
	}
}

void func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(joaat("mpply_knowndozerpuma0"), iParam1);
			break;
		
		case 1:
			func_161(joaat("mpply_knowndozerpuma1"), iParam1);
			break;
		
		case 2:
			func_161(joaat("mpply_knowndozerpuma2"), iParam1);
			break;
		
		case 3:
			func_161(joaat("mpply_knowndozerpuma3"), iParam1);
			break;
		
		case 4:
			func_161(joaat("mpply_knowndozerpuma4"), iParam1);
			break;
		
		case 5:
			func_161(joaat("mpply_knowndozerpuma5"), iParam1);
			break;
		
		case 6:
			func_161(joaat("mpply_knowndozerpuma6"), iParam1);
			break;
		
		case 7:
			func_161(joaat("mpply_knowndozerpuma7"), iParam1);
			break;
		
		case 8:
			func_161(joaat("mpply_knowndozerpuma8"), iParam1);
			break;
		
		case 9:
			func_161(joaat("mpply_knowndozerpuma9"), iParam1);
			break;
	}
	Global_1320101[iParam0] = iParam1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_148(joaat("mpply_knowndozerpuma0"));
		
		case 1:
			return func_148(joaat("mpply_knowndozerpuma1"));
		
		case 2:
			return func_148(joaat("mpply_knowndozerpuma2"));
		
		case 3:
			return func_148(joaat("mpply_knowndozerpuma3"));
		
		case 4:
			return func_148(joaat("mpply_knowndozerpuma4"));
		
		case 5:
			return func_148(joaat("mpply_knowndozerpuma5"));
		
		case 6:
			return func_148(joaat("mpply_knowndozerpuma6"));
		
		case 7:
			return func_148(joaat("mpply_knowndozerpuma7"));
		
		case 8:
			return func_148(joaat("mpply_knowndozerpuma8"));
		
		case 9:
			return func_148(joaat("mpply_knowndozerpuma9"));
		
		default:
	}
	return 0;
}

int func_175(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_153(&uParam0);
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 0, 1);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 1, 2);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 2, 3);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 3, 4);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 4, 5);
	if (func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 5, 6);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 6, 7);
	if (!func_152(uVar0))
	{
		return 0;
	}
	uVar0 = unk_0xCF2B6C8AD32541B9(&uParam0, 7, 8);
	if (!func_152(uVar0))
	{
		return 0;
	}
	return 1;
}

bool func_176()
{
	return Global_98614;
}

void func_177()
{
	if (Global_2482410 == 15)
	{
		if (!iLocal_375)
		{
			iLocal_375 = 1;
		}
	}
	else if (Global_2482410 == 1)
	{
		if (iLocal_375)
		{
			func_178(1, 1, 0, "AMMO PICKED UP");
			iLocal_375 = 0;
		}
		if ((((((((unk_0x79888727131C6854(0, 25) || unk_0x79888727131C6854(0, 24)) || unk_0x79888727131C6854(0, 257)) || unk_0x79888727131C6854(0, 56)) || unk_0x79888727131C6854(0, 68)) || unk_0x79888727131C6854(0, 69)) || unk_0x79888727131C6854(0, 70)) || unk_0x79888727131C6854(0, 91)) || unk_0x79888727131C6854(0, 92))
		{
			iLocal_375 = 1;
		}
	}
}

void func_178(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<25> Var3;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	float fVar37;
	bool bVar38;
	int iVar39;
	float fVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!bParam2)
	{
		Global_1760862 = 0;
		iLocal_373 = 0;
		iVar0 = 0;
		iVar1 = func_228(iVar0);
		while (iVar1 != 0)
		{
			if (func_224(iVar1))
			{
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iVar1, 0) || func_223(iVar1))
				{
					if (((!func_219(func_222(iVar1), -1, -1) && func_214(iVar1, -1, 0)) || !Global_2452553) || func_212(iVar1))
					{
						if (!func_211(iVar1) || !Global_2452553)
						{
							Global_1760601[iLocal_373 /*4*/] = iVar1;
							iLocal_373++;
						}
					}
				}
			}
			iVar0++;
			iVar1 = func_228(iVar0);
		}
		iVar30 = 0;
		iVar29 = 0;
		while (iVar29 <= 79)
		{
			iVar31 = func_210(iVar29);
			if (func_209(iVar31))
			{
				if (func_214(iVar31, -1, 0))
				{
					if (((func_219(func_222(iVar31), -1, -1) == 0 && !func_211(iVar31)) || !Global_2452553) || func_212(iVar31))
					{
						iVar30++;
					}
				}
			}
			iVar29++;
		}
		if (iVar30 == 0)
		{
			iLocal_373 = 0;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_373)
		{
			iVar1 = Global_1760601[iVar0 /*4*/];
			if (func_202(iVar1, &Var3, -1))
			{
				iVar32 = Var3.f_22;
				iVar33 = 0;
				iVar34 = 0;
				iVar35 = 0;
				iVar36 = 0;
				fVar37 = 0f;
				bVar38 = false;
				func_186(iVar1, &iVar33, &iVar34, &bVar38, 0);
				if (func_223(iVar1))
				{
					iVar34 = (iVar34 / iVar32);
					iVar32 = 1;
				}
				else if (iVar1 == joaat("weapon_grenadelauncher"))
				{
					if (!func_185())
					{
						iVar34 = (iVar34 / iVar32);
						iVar34 = (iVar34 / 2);
					}
					iVar32 = 1;
				}
				else if (iVar1 == joaat("weapon_compactlauncher"))
				{
					if (!func_185())
					{
						iVar34 = (iVar34 / iVar32);
						iVar34 = (iVar34 / 2);
					}
					iVar32 = 1;
				}
				else if (iVar1 == joaat("weapon_rpg"))
				{
					if (!func_185())
					{
						iVar34 = (iVar34 / iVar32);
						iVar34 = (iVar34 / 2);
					}
					iVar32 = 1;
				}
				else if (iVar1 == joaat("weapon_hominglauncher") || iVar1 == joaat("weapon_firework"))
				{
					if (!func_185())
					{
						if (iVar32 > 1)
						{
							iVar34 = (iVar34 / iVar32);
						}
						else
						{
							iVar34 = (iVar34 / 2);
						}
					}
					iVar32 = 1;
				}
				else if (iVar1 == joaat("weapon_minigun"))
				{
				}
				else if (Var3.f_24 == 0)
				{
					iVar32 *= 2;
				}
				if (func_185())
				{
					if (bVar38)
					{
						iVar34 = (iVar34 * iVar32);
					}
				}
				iVar34 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar34) * (1f + (unk_0xBBDA792448DB5A89(Global_262145.f_10205) / 100f))));
				if (iVar1 == joaat("weapon_grenadelauncher") || iVar1 == joaat("weapon_compactlauncher"))
				{
					fVar40 = 1f;
					if (unk_0xEC52867E1145BD99(unk_0x17B5CC8A8615737D(), iVar1, &iVar36))
					{
						iVar39 = (iVar36 - unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), iVar1));
					}
					while (iVar39 > iVar32)
					{
						fVar40 = (fVar40 + 1f);
						iVar39 = (iVar39 - iVar32);
					}
					fVar37 = fVar40;
				}
				else
				{
					fVar37 = func_184(iVar1, iVar32);
				}
				iVar35 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar34) * fVar37));
				if (func_183(iVar1))
				{
					iVar34 = 0;
					iVar35 = 0;
				}
				Global_1760601[iVar0 /*4*/].f_1 = iVar32;
				Global_1760601[iVar0 /*4*/].f_2 = iVar34;
				Global_1760601[iVar0 /*4*/].f_3 = iVar35;
			}
			if (!bParam2 && Global_2482423.f_5419 == 0)
			{
				if ((!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar2, 1)) && iVar1 == iVar2)
				{
					Global_2487850[15 /*66*/][1] = iVar0;
					iVar41 = -1;
					iVar42 = 0;
					while (iVar42 < 14)
					{
						if (func_181(iVar1, &iVar41) && func_180(iVar42) == iVar41)
						{
							if ((!func_219(func_222(iVar1), -1, -1) || !Global_2452553) || func_212(iVar1))
							{
								Global_2487850[15 /*66*/][0] = iVar42;
								iVar42 = 15;
							}
						}
						iVar42++;
					}
				}
				else if ((unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x92A0CEE6C61DA188(unk_0x17B5CC8A8615737D(), &iVar2)) && iVar1 == iVar2)
				{
					Global_2487850[15 /*66*/][1] = iVar0;
					iVar43 = -1;
					iVar44 = 0;
					while (iVar44 < 14)
					{
						if (func_181(iVar1, &iVar43) && func_180(iVar44) == iVar43)
						{
							if ((!func_219(func_222(iVar1), -1, -1) || !Global_2452553) || func_212(iVar1))
							{
								Global_2487850[15 /*66*/][0] = iVar44;
								iVar44 = 15;
							}
						}
						iVar44++;
					}
				}
			}
			iVar0++;
		}
		if (Global_2482423.f_5419 == 0)
		{
			if (!func_179(func_180(Global_2487850[15 /*66*/][0])))
			{
				bVar45 = false;
				iVar46 = Global_2487850[15 /*66*/][0] + 1;
				while (iVar46 != Global_2487850[15 /*66*/][0] && !bVar45)
				{
					if (iVar46 <= 13 && func_179(func_180(iVar46)))
					{
						Global_2487850[15 /*66*/][0] = iVar46;
						bVar45 = true;
					}
					if (!bVar45)
					{
						iVar46++;
						if (iVar46 >= 13)
						{
							iVar46 = 0;
						}
					}
				}
				if (!bVar45)
				{
					Global_2487850[15 /*66*/][0] = 0;
				}
			}
			bVar47 = false;
			iVar49 = func_180(Global_2487850[15 /*66*/][0]);
			iVar0 = 0;
			while (iVar0 < iLocal_373)
			{
				if (func_181(Global_1760601[iVar0 /*4*/], &iVar48) && iVar48 == iVar49)
				{
					if (!bVar47)
					{
						Global_2487850[15 /*66*/][1] = iVar0;
						bVar47 = true;
					}
				}
				iVar0++;
			}
		}
		iVar50 = func_180(Global_2487850[15 /*66*/][0]);
		iVar0 = 0;
		while (iVar0 < iLocal_373)
		{
			if ((func_219(func_222(Global_1760601[iVar0 /*4*/]), -1, -1) == 0 || !Global_2452553) || func_212(Global_1760601[iVar0 /*4*/]))
			{
				iVar1 = Global_1760601[iVar0 /*4*/];
				iVar51 = -1;
				if (func_181(iVar1, &iVar51) && iVar50 == iVar51)
				{
				}
			}
			iVar0++;
		}
		iVar0 = iLocal_373;
		while (iVar0 <= (Global_1760601 - 1))
		{
			Global_1760601[iVar0 /*4*/] = 0;
			Global_1760601[iVar0 /*4*/].f_1 = 0;
			Global_1760601[iVar0 /*4*/].f_2 = 0;
			Global_1760601[iVar0 /*4*/].f_3 = 0;
			iVar0++;
		}
	}
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < iLocal_373)
	{
		if (func_181(Global_1760601[iVar1 /*4*/], &iVar0))
		{
			if ((func_219(func_222(Global_1760601[iVar1 /*4*/]), -1, -1) == 0 || !Global_2452553) || func_212(Global_1760601[iVar1 /*4*/]))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AMMO_PISTOL");
		
		case 1:
			return joaat("AMMO_SMG");
		
		case 2:
			return joaat("AMMO_RIFLE");
		
		case 3:
			return joaat("AMMO_MG");
		
		case 4:
			return joaat("AMMO_SHOTGUN");
		
		case 5:
			return -1866678455;
		
		case 6:
			return joaat("AMMO_STUNGUN");
		
		case 7:
			return joaat("AMMO_SNIPER");
		
		case 8:
			return joaat("AMMO_SNIPER_REMOTE");
		
		case 9:
			return joaat("AMMO_GRENADELAUNCHER_SMOKE");
		
		case 10:
			return joaat("AMMO_FLAREGUN");
		
		case 11:
			return joaat("AMMO_PETROLCAN");
		
		case 12:
			return -1472246093;
		
		case 13:
			return 1939077781;
		
		case 14:
			return -1;
			break;
	}
	return -1;
}

bool func_181(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (func_182(iParam0, iParam1))
	{
	}
	else if (iParam0 == joaat("weapon_grenade"))
	{
		*iParam1 = joaat("AMMO_GRENADE");
	}
	else if (iParam0 == joaat("weapon_stickybomb"))
	{
		*iParam1 = joaat("AMMO_STICKYBOMB");
	}
	else if (iParam0 == joaat("weapon_smokegrenade"))
	{
		*iParam1 = joaat("AMMO_SMOKEGRENADE");
	}
	else if (iParam0 == joaat("weapon_proxmine"))
	{
		*iParam1 = joaat("AMMO_PROXMINE");
	}
	else if (iParam0 == joaat("weapon_petrolcan"))
	{
		*iParam1 = joaat("AMMO_PETROLCAN");
	}
	else
	{
		return 0;
	}
	if ((((*iParam1 == joaat("AMMO_GRENADE") || *iParam1 == joaat("AMMO_STICKYBOMB")) || *iParam1 == joaat("AMMO_SMOKEGRENADE")) || *iParam1 == joaat("AMMO_PROXMINE")) || *iParam1 == joaat("AMMO_PIPEBOMB"))
	{
		*iParam1 = -1472246093;
	}
	else if (func_223(iParam0))
	{
		*iParam1 = -1472246093;
	}
	else if ((((*iParam1 == joaat("AMMO_GRENADELAUNCHER") || *iParam1 == joaat("AMMO_RPG")) || *iParam1 == joaat("AMMO_MINIGUN")) || *iParam1 == joaat("AMMO_HOMINGLAUNCHER")) || *iParam1 == joaat("AMMO_FIREWORK"))
	{
		*iParam1 = 1939077781;
	}
	return *iParam1 != -1;
}

bool func_182(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_combatpistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_appistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_pistol50"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_snspistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_heavypistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_vintagepistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_microsmg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_smg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_assaultsmg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_combatpdw"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_assaultrifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_carbinerifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_advancedrifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_specialcarbine"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_heavyrifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_bullpuprifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_mg"):
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_combatmg"):
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case -572349828:
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_gusenberg"):
			*uParam1 = joaat("AMMO_MG");
			break;
		
		case joaat("weapon_pumpshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_assaultshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_bullpupshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_heavyshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_sniperrifle"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_heavysniper"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_musket"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_marksmanrifle"):
			*uParam1 = joaat("AMMO_SNIPER");
			break;
		
		case joaat("weapon_grenadelauncher"):
			*uParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		
		case joaat("weapon_rpg"):
			*uParam1 = joaat("AMMO_RPG");
			break;
		
		case joaat("weapon_minigun"):
			*uParam1 = joaat("AMMO_MINIGUN");
			break;
		
		case joaat("weapon_firework"):
			*uParam1 = joaat("AMMO_FIREWORK");
			break;
		
		case joaat("weapon_flaregun"):
			*uParam1 = joaat("AMMO_FLAREGUN");
			break;
		
		case joaat("weapon_hominglauncher"):
			*uParam1 = joaat("AMMO_HOMINGLAUNCHER");
			break;
		
		case joaat("weapon_proxmine"):
			*uParam1 = joaat("AMMO_PROXMINE");
			break;
		
		case joaat("weapon_railgun"):
			*uParam1 = joaat("AMMO_RAILGUN");
			break;
		
		case joaat("weapon_marksmanpistol"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_machinepistol"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_revolver"):
			*uParam1 = joaat("AMMO_PISTOL");
			break;
		
		case joaat("weapon_dbshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_compactrifle"):
			*uParam1 = joaat("AMMO_RIFLE");
			break;
		
		case joaat("weapon_autoshotgun"):
			*uParam1 = joaat("AMMO_SHOTGUN");
			break;
		
		case joaat("weapon_compactlauncher"):
			*uParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		
		case joaat("weapon_minismg"):
			*uParam1 = joaat("AMMO_SMG");
			break;
		
		case joaat("weapon_pipebomb"):
			*uParam1 = joaat("AMMO_PIPEBOMB");
			break;
	}
	return *uParam1 != -1;
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iParam0, 0))
	{
		if (unk_0xEC52867E1145BD99(unk_0x17B5CC8A8615737D(), iParam0, &iVar0))
		{
			if (unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), iParam0) >= iVar0)
			{
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

float func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1f;
	if (unk_0xEC52867E1145BD99(unk_0x17B5CC8A8615737D(), iParam0, &iVar0))
	{
		iVar1 = (iVar0 - unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), iParam0));
	}
	while (iVar1 > iParam1)
	{
		fVar2 = (fVar2 + 1f);
		iVar1 = (iVar1 - iParam1);
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0xEC52867E1145BD99(unk_0x17B5CC8A8615737D(), iParam0, &iVar0);
		if (iParam0 == joaat("weapon_grenadelauncher"))
		{
			iParam1 = (iParam1 - unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), iParam0));
			fVar2 = (IntToFloat(iParam1) / unk_0xBBDA792448DB5A89(iVar0));
		}
		else if ((iParam0 == joaat("weapon_rpg") || iParam0 == joaat("weapon_hominglauncher")) || iParam0 == joaat("weapon_firework"))
		{
			iVar3 = (iVar0 - unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), iParam0));
			fVar2 = (unk_0xBBDA792448DB5A89(iVar3) / unk_0xBBDA792448DB5A89(iParam1));
		}
	}
	return fVar2;
}

int func_185()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

bool func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<5> Var0;
	int iVar39;
	int iVar40;
	struct<5> Var41;
	char cVar80[64];
	struct<4> Var96;
	int iVar100;
	int iVar101;
	int iVar102;
	float fVar103;
	
	*iParam1 = 0;
	*iParam2 = 0;
	*iParam3 = 0;
	if (!unk_0x63C468D583002D23())
	{
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*iParam1 = 500;
					*iParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*iParam1 = 1000;
					*iParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*iParam1 = 1500;
					*iParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*iParam1 = 2000;
					*iParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*iParam1 = 2500;
					*iParam2 = 2500;
				}
				break;
			
			case joaat("gadget_parachute"):
				*iParam1 = 100;
				*iParam2 = 100;
				break;
			
			case joaat("weapon_microsmg"):
				*iParam1 = 850;
				*iParam2 = 20;
				break;
			
			case joaat("weapon_smg"):
				*iParam1 = 1300;
				*iParam2 = 38;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*iParam1 = 300;
				*iParam2 = 8;
				break;
			
			case joaat("weapon_pumpshotgun"):
				*iParam1 = 550;
				*iParam2 = 8;
				break;
			
			case joaat("weapon_assaultshotgun"):
				*iParam1 = 1500;
				*iParam2 = 8;
				break;
			
			case joaat("weapon_assaultrifle"):
				*iParam1 = 1400;
				*iParam2 = 36;
				break;
			
			case joaat("weapon_carbinerifle"):
				*iParam1 = 2100;
				*iParam2 = 36;
				break;
			
			case joaat("weapon_advancedrifle"):
				*iParam1 = 3500;
				*iParam2 = 36;
				break;
			
			case joaat("weapon_sniperrifle"):
				*iParam1 = 5000;
				*iParam2 = 48;
				break;
			
			case joaat("weapon_heavysniper"):
				*iParam1 = 9500;
				*iParam2 = 29;
				break;
			
			case joaat("weapon_mg"):
				*iParam1 = 3000;
				*iParam2 = 50;
				break;
			
			case joaat("weapon_combatmg"):
				*iParam1 = 3700;
				*iParam2 = 92;
				break;
			
			case joaat("weapon_rpg"):
				*iParam1 = 6500;
				*iParam2 = 100;
				break;
			
			case joaat("weapon_grenadelauncher"):
				*iParam1 = 8100;
				*iParam2 = 50;
				break;
			
			case joaat("weapon_minigun"):
				*iParam1 = 15000;
				*iParam2 = 50;
				break;
			
			case joaat("weapon_knife"):
				*iParam1 = 100;
				*iParam2 = 100;
				break;
			
			case joaat("weapon_nightstick"):
				*iParam1 = 100;
				*iParam2 = 100;
				break;
			
			case joaat("weapon_stungun"):
				*iParam1 = 100;
				*iParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				*iParam1 = 1000;
				*iParam2 = 25;
				break;
			
			case joaat("weapon_combatpistol"):
				*iParam1 = 600;
				*iParam2 = 19;
				break;
			
			case joaat("weapon_pistol"):
				*iParam1 = 350;
				*iParam2 = 19;
				break;
			
			case joaat("weapon_smokegrenade"):
				*iParam1 = 150;
				*iParam2 = 150;
				break;
			
			case joaat("weapon_grenade"):
				*iParam1 = 150;
				*iParam2 = 150;
				break;
			
			case joaat("weapon_stickybomb"):
				*iParam1 = 400;
				*iParam2 = 400;
				break;
			
			case joaat("weapon_petrolcan"):
				*iParam1 = 25;
				*iParam2 = 25;
				break;
			
			case joaat("weapon_assaultsmg"):
				*iParam1 = 0;
				*iParam2 = 38;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				*iParam1 = 1250;
				*iParam2 = 8;
				break;
			
			case joaat("weapon_pistol50"):
				*iParam1 = 4000;
				*iParam2 = 19;
				break;
			
			case joaat("weapon_hammer"):
				*iParam1 = 500;
				*iParam2 = 0;
				break;
			
			case joaat("weapon_specialcarbine"):
				*iParam1 = 14750;
				*iParam2 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*iParam1 = 14500;
				*iParam2 = 108;
				break;
			
			case joaat("weapon_railgun"):
				*iParam1 = 250000;
				*iParam2 = 100;
				break;
			
			case joaat("weapon_hatchet"):
				*iParam1 = 750;
				*iParam2 = 0;
				break;
			
			case joaat("weapon_hominglauncher"):
				*iParam1 = 15500;
				*iParam2 = 400;
				break;
			
			case joaat("weapon_proxmine"):
				*iParam1 = 750;
				*iParam2 = 750;
				break;
			
			case joaat("weapon_knuckle"):
				*iParam1 = 7500;
				*iParam2 = 0;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*iParam1 = 4350;
				*iParam2 = 5;
				break;
			
			case joaat("weapon_combatpdw"):
				*iParam1 = 11750;
				*iParam2 = 113;
				break;
			
			case joaat("weapon_machete"):
				*iParam1 = 8900;
				*iParam2 = 0;
				break;
			
			case joaat("weapon_machinepistol"):
				*iParam1 = 6250;
				*iParam2 = 85;
				break;
			
			case joaat("weapon_revolver"):
				*iParam1 = Global_262145.f_7493;
				*iParam2 = Global_262145.f_7494;
				break;
			
			case joaat("weapon_switchblade"):
				*iParam1 = Global_262145.f_7495;
				*iParam2 = 0;
				break;
			
			default:
				if (func_201(iParam0, &Var0) != -1)
				{
					*iParam1 = Var0.f_3;
					*iParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == joaat("weapon_bullpupshotgun") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_hammer"))
		{
			if (func_28() && 1 | 1)
			{
				*iParam1 = 0;
			}
		}
		iVar39 = *iParam2;
		switch (iParam0)
		{
			case joaat("weapon_appistol"):
				iVar39 = 25;
				break;
			
			case joaat("weapon_snspistol"):
				iVar39 = 10;
				break;
			
			case joaat("weapon_heavypistol"):
				iVar39 = 100;
				break;
			
			case joaat("weapon_vintagepistol"):
				iVar39 = 10;
				break;
			
			case joaat("weapon_microsmg"):
				iVar39 = 20;
				break;
			
			case joaat("weapon_specialcarbine"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_mg"):
				iVar39 = 50;
				break;
			
			case joaat("weapon_gusenberg"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_heavyshotgun"):
				iVar39 = 18;
				break;
			
			case joaat("weapon_musket"):
				iVar39 = 15;
				break;
			
			case joaat("weapon_heavysniper"):
				iVar39 = 29;
				break;
			
			case joaat("weapon_marksmanrifle"):
				iVar39 = 87;
				break;
		}
		if (*iParam2 != iVar39)
		{
			*iParam2 = iVar39;
		}
	}
	else
	{
		iVar40 = -1;
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*iParam1 = 100;
					*iParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*iParam1 = 200;
					*iParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*iParam1 = 300;
					*iParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*iParam1 = 400;
					*iParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*iParam1 = 500;
					*iParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_2818));
					*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_262145.f_2818));
				}
				else if (iParam4 == 1)
				{
					*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_2819));
					*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_262145.f_2819));
				}
				else if (iParam4 == 2)
				{
					*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_2820));
					*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_262145.f_2820));
				}
				else if (iParam4 == 3)
				{
					*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_2821));
					*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_262145.f_2821));
				}
				else if (iParam4 == 4)
				{
					*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_2822));
					*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_262145.f_2822));
				}
				iVar40 = 16;
				break;
			
			case joaat("gadget_parachute"):
				*iParam1 = 500;
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_2663));
				*iParam2 = 500;
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_262145.f_2663));
				iVar40 = 99;
				break;
			
			case joaat("weapon_microsmg"):
				if (Global_262145.f_2347 == -1)
				{
					*iParam1 = 3750;
				}
				else
				{
					*iParam1 = Global_262145.f_2347;
				}
				if (Global_262145.f_2376 == -1)
				{
					*iParam2 = 60;
				}
				else
				{
					*iParam2 = Global_262145.f_2376;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_smg"):
				if (Global_262145.f_2348 == -1)
				{
					*iParam1 = 7500;
				}
				else
				{
					*iParam1 = Global_262145.f_2348;
				}
				if (Global_262145.f_2377 == -1)
				{
					*iParam2 = 113;
				}
				else
				{
					*iParam2 = Global_262145.f_2377;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				if (Global_262145.f_2358 == -1)
				{
					*iParam1 = 0;
				}
				else
				{
					*iParam1 = Global_262145.f_2358;
				}
				if (Global_262145.f_2387 == -1)
				{
					*iParam2 = 24;
				}
				else
				{
					*iParam2 = Global_262145.f_2387;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_pumpshotgun"):
				if (Global_262145.f_2357 == -1)
				{
					*iParam1 = 3500;
				}
				else
				{
					*iParam1 = Global_262145.f_2357;
				}
				if (Global_262145.f_2386 == -1)
				{
					*iParam2 = 24;
				}
				else
				{
					*iParam2 = Global_262145.f_2386;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_assaultshotgun"):
				if (Global_262145.f_2360 == -1)
				{
					*iParam1 = 10000;
				}
				else
				{
					*iParam1 = Global_262145.f_2360;
				}
				if (Global_262145.f_2389 == -1)
				{
					*iParam2 = 24;
				}
				else
				{
					*iParam2 = Global_262145.f_2389;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_assaultrifle"):
				if (Global_262145.f_2350 == -1)
				{
					*iParam1 = 8550;
				}
				else
				{
					*iParam1 = Global_262145.f_2350;
				}
				if (Global_262145.f_2379 == -1)
				{
					*iParam2 = 108;
				}
				else
				{
					*iParam2 = Global_262145.f_2379;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_carbinerifle"):
				if (Global_262145.f_2351 == -1)
				{
					*iParam1 = 13000;
				}
				else
				{
					*iParam1 = Global_262145.f_2351;
				}
				if (Global_262145.f_2380 == -1)
				{
					*iParam2 = 108;
				}
				else
				{
					*iParam2 = Global_262145.f_2380;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_advancedrifle"):
				if (Global_262145.f_2353 == -1)
				{
					*iParam1 = 14250;
				}
				else
				{
					*iParam1 = Global_262145.f_2353;
				}
				if (Global_262145.f_2382 == -1)
				{
					*iParam2 = 108;
				}
				else
				{
					*iParam2 = Global_262145.f_2382;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_sniperrifle"):
				if (Global_262145.f_2363 == -1)
				{
					*iParam1 = 20000;
				}
				else
				{
					*iParam1 = Global_262145.f_2363;
				}
				if (Global_262145.f_2392 == -1)
				{
					*iParam2 = 145;
				}
				else
				{
					*iParam2 = Global_262145.f_2392;
				}
				iVar40 = 4;
				break;
			
			case joaat("weapon_heavysniper"):
				if (Global_262145.f_2361 == -1)
				{
					*iParam1 = 38150;
				}
				else
				{
					*iParam1 = Global_262145.f_2361;
				}
				if (Global_262145.f_2390 == -1)
				{
					*iParam2 = 87;
				}
				else
				{
					*iParam2 = Global_262145.f_2390;
				}
				iVar40 = 4;
				break;
			
			case joaat("weapon_mg"):
				if (Global_262145.f_2354 == -1)
				{
					*iParam1 = 13500;
				}
				else
				{
					*iParam1 = Global_262145.f_2354;
				}
				if (Global_262145.f_2383 == -1)
				{
					*iParam2 = 150;
				}
				else
				{
					*iParam2 = Global_262145.f_2383;
				}
				iVar40 = 5;
				break;
			
			case joaat("weapon_combatmg"):
				if (Global_262145.f_2355 == -1)
				{
					*iParam1 = 14800;
				}
				else
				{
					*iParam1 = Global_262145.f_2355;
				}
				if (Global_262145.f_2384 == -1)
				{
					*iParam2 = 277;
				}
				else
				{
					*iParam2 = Global_262145.f_2384;
				}
				iVar40 = 5;
				break;
			
			case joaat("weapon_rpg"):
				if (Global_262145.f_2366 == -1)
				{
					*iParam1 = 26250;
				}
				else
				{
					*iParam1 = Global_262145.f_2366;
				}
				if (Global_262145.f_2395 == -1)
				{
					*iParam2 = 1000;
				}
				else
				{
					*iParam2 = Global_262145.f_2395;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_grenadelauncher"):
				if (Global_262145.f_2365 == -1)
				{
					*iParam1 = 32400;
				}
				else
				{
					*iParam1 = Global_262145.f_2365;
				}
				if (Global_262145.f_2394 == -1)
				{
					*iParam2 = 5000;
				}
				else
				{
					*iParam2 = Global_262145.f_2394;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_minigun"):
				if (Global_262145.f_2367 == -1)
				{
					*iParam1 = 50000;
				}
				else
				{
					*iParam1 = Global_262145.f_2367;
				}
				if (Global_262145.f_2396 == -1)
				{
					*iParam2 = 150;
				}
				else
				{
					*iParam2 = Global_262145.f_2396;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_knife"):
				if (Global_262145.f_2400 == -1)
				{
					*iParam1 = 400;
				}
				else
				{
					*iParam1 = Global_262145.f_2400;
				}
				if (Global_262145.f_2406 == -1)
				{
					*iParam2 = 100;
				}
				else
				{
					*iParam2 = Global_262145.f_2406;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_nightstick"):
				if (Global_262145.f_2401 == -1)
				{
					*iParam1 = 400;
				}
				else
				{
					*iParam1 = Global_262145.f_2401;
				}
				if (Global_262145.f_2407 == -1)
				{
					*iParam2 = 100;
				}
				else
				{
					*iParam2 = Global_262145.f_2407;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_dagger"):
				if (Global_262145.f_6114 == -1)
				{
					*iParam1 = 400;
				}
				else
				{
					*iParam1 = Global_262145.f_6114;
				}
				if (Global_262145.f_6116 == -1)
				{
					*iParam2 = 85;
				}
				else
				{
					*iParam2 = Global_262145.f_6116;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_stungun"):
				*iParam1 = 100;
				*iParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				if (Global_262145.f_2346 == -1)
				{
					*iParam1 = 5000;
				}
				else
				{
					*iParam1 = Global_262145.f_2346;
				}
				if (Global_262145.f_2375 == -1)
				{
					*iParam2 = 85;
				}
				else
				{
					*iParam2 = Global_262145.f_2375;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_combatpistol"):
				if (Global_262145.f_2344 == -1)
				{
					*iParam1 = 3200;
				}
				else
				{
					*iParam1 = Global_262145.f_2344;
				}
				if (Global_262145.f_2373 == -1)
				{
					*iParam2 = 57;
				}
				else
				{
					*iParam2 = Global_262145.f_2373;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_pistol"):
				if (Global_262145.f_2343 == -1)
				{
					*iParam1 = 2500;
				}
				else
				{
					*iParam1 = Global_262145.f_2343;
				}
				if (Global_262145.f_2372 == -1)
				{
					*iParam2 = 57;
				}
				else
				{
					*iParam2 = Global_262145.f_2372;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_smokegrenade"):
				if (Global_262145.f_2368 == -1)
				{
					*iParam1 = 150;
				}
				else
				{
					*iParam1 = Global_262145.f_2368;
				}
				if (Global_262145.f_2405 == -1)
				{
					*iParam2 = 150;
				}
				else
				{
					*iParam2 = Global_262145.f_2405;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_grenade"):
				if (Global_262145.f_2398 == -1)
				{
					*iParam1 = 250;
				}
				else
				{
					*iParam1 = Global_262145.f_2398;
				}
				if (Global_262145.f_2404 == -1)
				{
					*iParam2 = 250;
				}
				else
				{
					*iParam2 = Global_262145.f_2404;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_stickybomb"):
				if (Global_262145.f_2397 == -1)
				{
					*iParam1 = 600;
				}
				else
				{
					*iParam1 = Global_262145.f_2397;
				}
				if (Global_262145.f_2403 == -1)
				{
					*iParam2 = 600;
				}
				else
				{
					*iParam2 = Global_262145.f_2403;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_petrolcan"):
				if (Global_262145.f_2369 == -1)
				{
					*iParam1 = 100;
				}
				else
				{
					*iParam1 = Global_262145.f_2369;
				}
				*iParam2 = Global_262145.f_10158;
				iVar40 = 10;
				break;
			
			case joaat("weapon_assaultsmg"):
				if (Global_262145.f_2349 == -1)
				{
					*iParam1 = 12550;
				}
				else
				{
					*iParam1 = Global_262145.f_2349;
				}
				if (Global_262145.f_2378 == -1)
				{
					*iParam2 = 113;
				}
				else
				{
					*iParam2 = Global_262145.f_2378;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_262145.f_2359 == -1)
				{
					*iParam1 = 8000;
				}
				else
				{
					*iParam1 = Global_262145.f_2359;
				}
				if (Global_262145.f_2388 == -1)
				{
					*iParam2 = 24;
				}
				else
				{
					*iParam2 = Global_262145.f_2388;
				}
				if (func_28() && 1 | 1)
				{
					*iParam1 = 0;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_262145.f_2345 == -1)
				{
					*iParam1 = 3900;
				}
				else
				{
					*iParam1 = Global_262145.f_2345;
				}
				if (Global_262145.f_2374 == -1)
				{
					*iParam2 = 57;
				}
				else
				{
					*iParam2 = Global_262145.f_2374;
				}
				if (func_28() && 1 | 1)
				{
					*iParam1 = 0;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_hammer"):
				if (Global_262145.f_2371 == -1)
				{
					*iParam1 = 500;
				}
				else
				{
					*iParam1 = Global_262145.f_2371;
				}
				*iParam2 = 0;
				if (func_28() && 1 | 1)
				{
					*iParam1 = 0;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_snspistol"):
				*iParam1 = Global_262145.f_6109;
				*iParam2 = Global_262145.f_6104;
				iVar40 = 8;
				break;
			
			case joaat("weapon_bottle"):
				*iParam1 = Global_262145.f_6108;
				*iParam2 = 0;
				iVar40 = 7;
				break;
			
			case joaat("weapon_gusenberg"):
				*iParam1 = Global_262145.f_5503;
				*iParam2 = Global_262145.f_5509;
				iVar40 = 3;
				break;
			
			case joaat("weapon_heavypistol"):
				*iParam1 = Global_262145.f_6110;
				*iParam2 = Global_262145.f_6106;
				iVar40 = 8;
				break;
			
			case joaat("weapon_specialcarbine"):
				*iParam1 = Global_262145.f_6111;
				*iParam2 = Global_262145.f_6105;
				iVar40 = 3;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*iParam1 = Global_262145.f_6112;
				*iParam2 = Global_262145.f_6107;
				iVar40 = 3;
				break;
			
			case joaat("weapon_vintagepistol"):
				*iParam1 = Global_262145.f_6113;
				*iParam2 = Global_262145.f_6115;
				iVar40 = 8;
				break;
			
			case joaat("weapon_musket"):
				*iParam1 = Global_262145.f_6714;
				*iParam2 = Global_262145.f_6715;
				iVar40 = 4;
				break;
			
			case joaat("weapon_firework"):
				*iParam1 = Global_262145.f_6716;
				*iParam2 = Global_262145.f_6717;
				iVar40 = 6;
				break;
			
			case joaat("weapon_heavyshotgun"):
				*iParam1 = Global_262145.f_7229;
				*iParam2 = Global_262145.f_7234;
				iVar40 = 2;
				break;
			
			case joaat("weapon_marksmanrifle"):
				*iParam1 = Global_262145.f_7235;
				*iParam2 = Global_262145.f_7242;
				iVar40 = 4;
				break;
			
			case joaat("weapon_hatchet"):
				*iParam1 = Global_262145.f_7557;
				*iParam2 = 0;
				if (func_28())
				{
					*iParam1 = Global_262145.f_17792;
				}
				else if (Global_262145.f_17809)
				{
					*iParam1 = Global_262145.f_7557;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_flaregun"):
				*iParam1 = Global_262145.f_7481;
				*iParam2 = Global_262145.f_7482;
				iVar40 = 6;
				break;
			
			case joaat("weapon_proxmine"):
				*iParam1 = Global_262145.f_7772;
				*iParam2 = Global_262145.f_7772;
				iVar40 = 9;
				break;
			
			case joaat("weapon_knuckle"):
				*iParam1 = Global_262145.f_7483;
				*iParam2 = Global_262145.f_7484;
				iVar40 = 7;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*iParam1 = Global_262145.f_7485;
				*iParam2 = Global_262145.f_7486;
				iVar40 = 8;
				break;
			
			case joaat("weapon_combatpdw"):
				*iParam1 = Global_262145.f_9240;
				*iParam2 = Global_262145.f_9241;
				iVar40 = 1;
				break;
			
			case joaat("weapon_hominglauncher"):
				*iParam1 = Global_262145.f_7770;
				*iParam2 = Global_262145.f_7771;
				iVar40 = 6;
				break;
			
			case joaat("weapon_machete"):
				*iParam1 = Global_262145.f_10571;
				iVar40 = 7;
				break;
			
			case joaat("weapon_machinepistol"):
				*iParam1 = Global_262145.f_10570;
				*iParam2 = Global_262145.f_10572;
				iVar40 = 8;
				break;
			
			case joaat("weapon_flashlight"):
				*iParam1 = Global_262145.f_10732;
				iVar40 = 7;
				break;
			
			case joaat("weapon_revolver"):
				*iParam1 = Global_262145.f_7493;
				*iParam2 = Global_262145.f_7494;
				iVar40 = 8;
				break;
			
			case joaat("weapon_switchblade"):
				*iParam1 = Global_262145.f_7495;
				iVar40 = 7;
				break;
			
			case joaat("weapon_dbshotgun"):
				*iParam1 = Global_262145.f_12673;
				*iParam2 = Global_262145.f_12674;
				iVar40 = 2;
				break;
			
			case joaat("weapon_compactrifle"):
				*iParam1 = Global_262145.f_12670;
				*iParam2 = Global_262145.f_12671;
				iVar40 = 3;
				break;
			
			case joaat("weapon_autoshotgun"):
				*iParam1 = Global_262145.f_15554;
				*iParam2 = Global_262145.f_15555;
				iVar40 = 2;
				break;
			
			case joaat("weapon_battleaxe"):
				*iParam1 = Global_262145.f_15551;
				iVar40 = 7;
				break;
			
			case joaat("weapon_compactlauncher"):
				*iParam1 = Global_262145.f_15552;
				*iParam2 = Global_262145.f_15553;
				iVar40 = 6;
				break;
			
			case joaat("weapon_minismg"):
				*iParam1 = Global_262145.f_15556;
				*iParam2 = Global_262145.f_15557;
				iVar40 = 1;
				break;
			
			case joaat("weapon_pipebomb"):
				*iParam1 = Global_262145.f_15558;
				*iParam2 = Global_262145.f_15558;
				iVar40 = 9;
				break;
			
			case joaat("weapon_poolcue"):
				*iParam1 = Global_262145.f_15549;
				iVar40 = 7;
				break;
			
			case joaat("weapon_wrench"):
				*iParam1 = Global_262145.f_15550;
				iVar40 = 7;
				break;
			
			default:
				if (func_201(iParam0, &Var41) != -1)
				{
					*iParam1 = Var41.f_3;
					*iParam2 = Var41.f_4;
				}
				break;
		}
		switch (iVar40)
		{
			case 0:
				break;
			
			case 1:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 2:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 3:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 4:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 5:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 6:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 7:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_6));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_6));
				break;
			
			case 8:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_4));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_4));
				break;
			
			case 9:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 10:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_2));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_2));
				break;
			
			case 11:
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980));
				break;
			
			case 17:
			case 21:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_6));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_6));
				break;
			
			case 18:
			case 20:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_4));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_4));
				break;
			
			case 99:
				*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_279980.f_7));
				*iParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam2) * Global_279980.f_7));
				break;
			}
	}
	if (unk_0x63C468D583002D23() && func_200())
	{
		StringCopy(&Var96, func_198(iParam0, 0), 16);
		iVar101 = 0;
		func_197(iParam0, &iVar100, &iVar101);
		if (func_28() && 1 | 1)
		{
			if ((iParam0 == joaat("weapon_hammer") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_bullpupshotgun"))
			{
				iVar101 = 1;
			}
		}
		if (func_28())
		{
			if (iParam0 == joaat("weapon_hatchet"))
			{
				iVar101 = 1;
			}
		}
		func_196(&cVar80, Var96, unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()), 3, iVar100, iVar101, -1, -1, 0);
		if (unk_0x03E2F3A2203722EB(&cVar80))
		{
			*iParam1 = unk_0xCBDF10F1223CF5BB(unk_0x765F5B806B517045(&cVar80), -1829708865, 1);
		}
		if (func_182(iParam0, &iVar102))
		{
			func_195(iVar102, 2, &Var96, 0);
			func_196(&cVar80, Var96, unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()), 3, 0, func_193(iParam0), -1, -1, 0);
			if (unk_0x03E2F3A2203722EB(&cVar80))
			{
				*iParam2 = unk_0xCBDF10F1223CF5BB(unk_0x765F5B806B517045(&cVar80), 1067618600, 1);
				switch (iParam0)
				{
					case joaat("weapon_rpg"):
					case joaat("weapon_grenadelauncher"):
					case joaat("weapon_hominglauncher"):
					case joaat("weapon_firework"):
						*iParam3 = 1;
						break;
					}
			}
		}
		else if ((((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine")) || iParam0 == joaat("weapon_pipebomb"))
		{
			switch (iParam0)
			{
				case joaat("weapon_grenade"):
					StringCopy(&cVar80, "WP_WT_GNADE_t2_v1", 64);
					break;
				
				case joaat("weapon_smokegrenade"):
					StringCopy(&cVar80, "WP_WT_GNADE_SMK_t2_v1", 64);
					break;
				
				case joaat("weapon_stickybomb"):
					StringCopy(&cVar80, "WP_WT_GNADE_STK_t2_v1", 64);
					break;
				
				case joaat("weapon_proxmine"):
					StringCopy(&cVar80, "WP_WT_PRXMINE_t2_v1", 64);
					break;
				
				case joaat("weapon_pipebomb"):
					StringCopy(&cVar80, "WP_WT_PIPEBOMB_t2_v1", 64);
					break;
			}
			if (unk_0x03E2F3A2203722EB(&cVar80))
			{
				*iParam2 = unk_0xCBDF10F1223CF5BB(unk_0x765F5B806B517045(&cVar80), 1067618600, 1);
			}
		}
	}
	fVar103 = func_187(iParam0, iParam1, iParam2);
	if (fVar103 != 1f)
	{
	}
	return *iParam1 != 0;
}

float func_187(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar1 = 0f;
	fVar2 = 0f;
	if (unk_0x63C468D583002D23() && func_200())
	{
		return 1f;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar0 = func_192(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0.05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0.15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0.08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0.06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0.04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0.02f);
		}
		fVar2 = (fVar2 + func_191(iParam0));
		fVar2 = (fVar2 + func_190());
		fVar2 = (fVar2 + func_189());
		if (iLocal_374 == 1)
		{
			fVar2 = (fVar2 + (unk_0xBBDA792448DB5A89(Global_262145.f_121) / 100f));
		}
		if (iLocal_374 == 0)
		{
			if (func_188())
			{
				fVar2 = (fVar2 + (unk_0xBBDA792448DB5A89(Global_262145.f_121) / 100f));
				iLocal_374 = 1;
			}
			else
			{
				iLocal_374 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * fVar1));
		*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_76));
		*uParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam2) * Global_262145.f_76));
		return fVar1;
	}
	iVar0 = func_192(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0.1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0.15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0.25f);
	}
	fVar1 = (1f - fVar2);
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * fVar1));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam2) * fVar1));
	return fVar1;
}

int func_188()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 0;
	}
	return 0;
}

float func_189()
{
	return 0f;
}

float func_190()
{
	return 0f;
}

float func_191(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0f;
	}
	iVar0 = 12;
	switch (iParam0)
	{
		case joaat("weapon_microsmg"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 2;
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 2;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 26;
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 26;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 6;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_knife"):
			iVar0 = 8;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_pistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_smokegrenade"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_grenade"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_stickybomb"):
			iVar0 = 7;
			break;
	}
	if (iVar0 != 12)
	{
	}
	return 0f;
}

int func_192(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	return -1;
}

int func_193(int iParam0)
{
	return func_194(iParam0);
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
	}
	return 0;
}

bool func_195(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (!unk_0x9C88EB7B70229335(sParam3))
	{
		StringCopy(sParam2, sParam3, 16);
	}
	else
	{
		StringCopy(sParam2, "GSA", 16);
	}
	if (iParam0 == joaat("AMMO_PISTOL"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SMG"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_RIFLE"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_MG"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1866678455)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SNIPER_REMOTE"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_MINIGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -873900901)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_SHOTGUN"))
	{
		StringConCat(sParam2, "_TYPE_C", 16);
	}
	else if (iParam0 == joaat("AMMO_STUNGUN"))
	{
		StringConCat(sParam2, "_TYPE_CH", 16);
	}
	else if (iParam0 == joaat("AMMO_GRENADELAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_GRENADELAUNCHER_SMOKE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_SMOKEGRENADE"))
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 214501711)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == joaat("AMMO_STICKYBOMB"))
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == joaat("AMMO_RPG"))
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == joaat("AMMO_FLAREGUN"))
	{
		StringConCat(sParam2, "_TYPE_F", 16);
	}
	else if (iParam0 == joaat("AMMO_FIREWORK"))
	{
		StringConCat(sParam2, "_TYPE_FW", 16);
	}
	else if (iParam0 == joaat("AMMO_HOMINGLAUNCHER"))
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == joaat("AMMO_PROXMINE"))
	{
		StringConCat(sParam2, "_TYPE_M", 16);
	}
	else if (iParam0 == joaat("AMMO_RAILGUN"))
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == joaat("AMMO_PIPEBOMB"))
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else
	{
		return 0;
	}
	if (iParam1 == 1 && iParam0 != joaat("AMMO_FIREWORK"))
	{
		StringConCat(sParam2, "1", 16);
	}
	return unk_0x765F5B806B517045(sParam2) != 0;
}

void func_196(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	switch (unk_0x765F5B806B517045(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 4:
			if (iParam5 == Global_68114)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, unk_0xF1732F8F07E46184(iParam5), 16);
				if (unk_0x9C88EB7B70229335(&cParam1) || unk_0x765F5B806B517045(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				if (iParam5 == joaat("fcr2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam5 == joaat("diablous2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam5 == joaat("comet3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, unk_0xF1732F8F07E46184(iParam5), 16);
					if (unk_0x9C88EB7B70229335(&cParam1))
					{
						return;
					}
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
	}
}

void func_197(int iParam0, var uParam1, int iParam2)
{
	*iParam2 = 0;
	if (iParam0 == joaat("weapon_petrolcan"))
	{
		*uParam1 = 5;
	}
	else if (iParam0 == joaat("gadget_parachute"))
	{
		*uParam1 = 4;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		*uParam1 = 3;
	}
	else if ((((iParam0 == joaat("weapon_pistol50") || iParam0 == joaat("weapon_snspistol")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_vintagepistol")) || iParam0 == joaat("weapon_flaregun"))
	{
		*uParam1 = 0;
	}
	else if (((((((((iParam0 == joaat("weapon_bottle") || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_hatchet")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_flashlight")) || iParam0 == joaat("weapon_switchblade")) || iParam0 == joaat("weapon_knuckle")) || iParam0 == joaat("weapon_machete"))
	{
		*uParam1 = 1;
	}
	else if ((((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine")) || iParam0 == joaat("weapon_pipebomb"))
	{
		*uParam1 = 2;
		*iParam2 = 1;
	}
	else
	{
		*uParam1 = 0;
	}
}

char* func_198(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		default:
			if (func_201(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_199(&(Var0.f_31));
				}
				else
				{
					return func_199(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_199(var uParam0)
{
	return uParam0;
}

int func_200()
{
	if (unk_0x63C468D583002D23() && func_185())
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDD29471727F67A12();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x7DF39E88C502C09C(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_202(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<81> Var2;
	
	switch (iParam0)
	{
		case joaat("gadget_parachute"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 1;
			iVar1 = 0;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 1;
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (unk_0x63C468D583002D23())
			{
				iVar0 = -1;
				iVar1 = -1;
			}
			else
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 2;
			iVar1 = 1;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 2;
			iVar1 = 2;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 3;
			iVar1 = 0;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 3;
			iVar1 = 1;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 3;
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 4;
			iVar1 = 0;
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 4;
			iVar1 = 1;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 5;
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 5;
			iVar1 = 1;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 6;
			iVar1 = 0;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 6;
			iVar1 = 1;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 6;
			iVar1 = 2;
			break;
		
		case joaat("weapon_knife"):
			iVar0 = 7;
			iVar1 = 0;
			break;
		
		case joaat("weapon_nightstick"):
			iVar0 = 7;
			iVar1 = 1;
			break;
		
		case joaat("weapon_hammer"):
			iVar0 = 7;
			iVar1 = 2;
			break;
		
		case joaat("weapon_bottle"):
			iVar0 = 7;
			iVar1 = 3;
			break;
		
		case joaat("weapon_knuckle"):
			iVar0 = 7;
			iVar1 = 4;
			break;
		
		case joaat("weapon_machete"):
			iVar0 = 17;
			iVar1 = 0;
			break;
		
		case joaat("weapon_dagger"):
			iVar0 = 17;
			iVar1 = 1;
			break;
		
		case joaat("weapon_switchblade"):
			iVar0 = 17;
			iVar1 = 2;
			break;
		
		case joaat("weapon_flashlight"):
			iVar0 = 17;
			iVar1 = 3;
			break;
		
		case joaat("weapon_hatchet"):
			iVar0 = 17;
			iVar1 = 4;
			break;
		
		case joaat("weapon_poolcue"):
			iVar0 = 21;
			iVar1 = 0;
			break;
		
		case joaat("weapon_stungun"):
			iVar0 = 8;
			iVar1 = 0;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 8;
			iVar1 = 1;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 8;
			iVar1 = 2;
			break;
		
		case joaat("weapon_pistol"):
			iVar0 = 8;
			iVar1 = 3;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 8;
			iVar1 = 4;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 18;
			iVar1 = 0;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 18;
			iVar1 = 1;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 18;
			iVar1 = 2;
			break;
		
		case joaat("weapon_flaregun"):
			iVar0 = 18;
			iVar1 = 3;
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 20;
			iVar1 = 0;
			break;
		
		case joaat("weapon_machinepistol"):
			iVar0 = 20;
			iVar1 = 1;
			break;
		
		case joaat("weapon_smokegrenade"):
			iVar0 = 9;
			iVar1 = 0;
			break;
		
		case joaat("weapon_grenade"):
			iVar0 = 9;
			iVar1 = 1;
			break;
		
		case joaat("weapon_stickybomb"):
			iVar0 = 9;
			iVar1 = 2;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 9;
			iVar1 = 3;
			break;
		
		case joaat("weapon_pipebomb"):
			iVar0 = 9;
			iVar1 = 4;
			break;
		
		case joaat("weapon_petrolcan"):
			iVar0 = 10;
			iVar1 = 0;
			break;
		
		case joaat("weapon_unarmed"):
			switch (iParam2)
			{
				case 0:
					iVar0 = 16;
					iVar1 = 0;
					break;
				
				case 1:
					iVar0 = 16;
					iVar1 = 1;
					break;
				
				case 2:
					iVar0 = 16;
					iVar1 = 2;
					break;
				
				case 3:
					iVar0 = 16;
					iVar1 = 3;
					break;
				
				case 4:
					iVar0 = 16;
					iVar1 = 4;
					break;
			}
			break;
		
		default:
			iVar0 = -1;
			iVar1 = -1;
			break;
	}
	if (iVar0 != -1 && iVar1 != -1)
	{
		Var2 = 25;
		Var2.f_27 = 25;
		Var2.f_54 = 25;
		Var2.f_80 = 25;
		if (func_205(28, &Var2, uParam1, iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	else
	{
		if (iParam0 == -61829581)
		{
			uParam1->f_24 = 6;
		}
		else
		{
			switch (unk_0x4E2D036E7A49AA3D(iParam0))
			{
				case joaat("GROUP_PISTOL"):
				case joaat("GROUP_SMG"):
				case joaat("GROUP_RIFLE"):
				case joaat("GROUP_MG"):
				case joaat("GROUP_SHOTGUN"):
				case joaat("GROUP_SNIPER"):
				case joaat("GROUP_HEAVY"):
				case 88899580:
				case joaat("GROUP_STUNGUN"):
					uParam1->f_24 = 0;
					break;
				
				case joaat("GROUP_MELEE"):
				case joaat("GROUP_FIREEXTINGUISHER"):
				case joaat("GROUP_PETROLCAN"):
				case 507375312:
				case -755518101:
				case -801780072:
				case 431593103:
					uParam1->f_24 = 1;
					break;
				
				case joaat("GROUP_THROWN"):
					uParam1->f_24 = 2;
					break;
				}
		}
		if (((iParam0 == joaat("weapon_assaultsmg") || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_sawnoffshotgun"))
		{
			func_186(iParam0, &(uParam1->f_19), &(uParam1->f_20), &(uParam1->f_21), 0);
			func_203(uParam1, iParam0);
			*uParam1 = iParam0;
			return 1;
		}
		else
		{
			func_186(iParam0, &(uParam1->f_19), &(uParam1->f_20), &(uParam1->f_21), 0);
			func_203(uParam1, iParam0);
			*uParam1 = iParam0;
			return 1;
		}
	}
	return 0;
}

void func_203(var uParam0, int iParam1)
{
	struct<7> Var0;
	
	switch (iParam1)
	{
		case joaat("weapon_assaultsmg"):
			func_204(uParam0, joaat("AMMO_SMG"), 30);
			break;
		
		case joaat("weapon_bullpupshotgun"):
			func_204(uParam0, joaat("AMMO_SHOTGUN"), 8);
			break;
		
		case joaat("weapon_pistol50"):
			func_204(uParam0, joaat("AMMO_PISTOL"), 12);
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			func_204(uParam0, joaat("AMMO_SHOTGUN"), 8);
			break;
		
		case joaat("weapon_machinepistol"):
			func_204(uParam0, joaat("AMMO_SMG"), 18);
			break;
		
		default:
			if (func_201(iParam1, &Var0) != -1)
			{
				func_204(uParam0, Var0.f_5, Var0.f_6);
			}
			break;
	}
}

void func_204(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_25 = iParam1;
	uParam0->f_22 = iParam2;
}

bool func_205(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	
	func_208(uParam2, 8, 0, 0, -1, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	iVar0 = unk_0x765F5B806B517045("v_gun");
	iVar1 = unk_0x765F5B806B517045("v_gun2");
	iVar2 = unk_0x765F5B806B517045(func_207(iParam0));
	bVar3 = false;
	if ((unk_0x57E9911EC23E2C54() > Global_262145.f_15175 && Global_262145.f_15168) && unk_0x63C468D583002D23())
	{
		if (iVar2 == iVar0)
		{
			Var4 = { 22.8f, -1108.5f, 29.5878f };
			Var7 = { 22.85f, -1108.35f, 29.557f };
		}
		else
		{
			Var4 = { 1695.139f, 3759.949f, 34.4655f };
			Var7 = { 1695f, 3760.089f, 34.4655f };
		}
	}
	else if (iVar2 == iVar0)
	{
		Var4 = { 22.79f, -1108.442f, 29.5878f };
		Var7 = { 22.93f, -1108.282f, 29.557f };
	}
	else
	{
		Var4 = { 1695.068f, 3760.049f, 34.4655f };
		Var7 = { 1694.928f, 3760.189f, 34.4655f };
	}
	switch (iParam3)
	{
		case 0:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 4, 0, joaat("gadget_parachute"), 1, 19.7012f, -1103.268f, 31.3153f, -10.75f, 0f, -200f, 0f, 0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 1:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 0, joaat("AMMO_SMG"), joaat("weapon_microsmg"), 16, 19.52f, -1103.05f, 30.8f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 0, joaat("AMMO_SMG"), joaat("weapon_smg"), 30, 19.54f, -1103.05f, 30.36f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 2:
			switch (iParam4)
			{
				case 0:
					if (unk_0x63C468D583002D23())
					{
						func_208(uParam2, 0, joaat("AMMO_SMG"), joaat("weapon_assaultsmg"), 30, 20.755f, -1103.491f, 31.425f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						func_208(uParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_sawnoffshotgun"), 8, 20.53f, -1103.41f, 31.4f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 1:
					func_208(uParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_pumpshotgun"), 8, 20.48f, -1103.4f, 30.9f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_assaultshotgun"), 8, 20.62f, -1103.44f, 30.43f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 3:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_assaultrifle"), 30, 21.65f, -1103.79f, 31.37f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_carbinerifle"), 30, 21.7f, -1103.81f, 30.89f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_advancedrifle"), 30, 21.7f, -1103.81f, 30.41f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 4:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 0, joaat("AMMO_SNIPER"), joaat("weapon_sniperrifle"), 10, 22.61f, -1104.16f, 30.9f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 0, joaat("AMMO_SNIPER"), joaat("weapon_heavysniper"), 6, 22.56f, -1104.14f, 30.42f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 5:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 0, joaat("AMMO_MG"), joaat("weapon_mg"), 54, 23.99f, -1104.71f, 31.17f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 0, joaat("AMMO_MG"), joaat("weapon_combatmg"), 100, 24.08f, -1104.77f, 30.58f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 6:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 0, joaat("AMMO_RPG"), joaat("weapon_rpg"), 1, 25.6f, -1105.35f, 31.35f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 0, joaat("AMMO_GRENADELAUNCHER"), joaat("weapon_grenadelauncher"), 10, 25.38f, -1105.22f, 30.96f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 0, joaat("AMMO_MINIGUN"), joaat("weapon_minigun"), 50, 25.28f, -1105.25f, 30.47f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 7:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 1, 0, joaat("weapon_knife"), 1, 19.647f, -1105.121f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					break;
				
				case 1:
					if (bVar3)
					{
						func_208(uParam2, 1, 0, joaat("weapon_nightstick"), 1, 20.121f, -1105.426f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					else
					{
						func_208(uParam2, 1, 0, joaat("weapon_nightstick"), 1, 20.191f, -1105.456f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					break;
				
				case 2:
					if (!bVar3 && !unk_0x63C468D583002D23())
					{
						func_208(uParam2, 1, 0, joaat("weapon_hammer"), 1, 20.601f, -1105.596f, 29.54f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					else
					{
						func_208(uParam2, 1, 0, joaat("weapon_hammer"), 1, 20.711f, -1105.676f, 29.5603f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					break;
				
				case 3:
					func_208(uParam2, 1, 0, joaat("weapon_bottle"), 1, 21.077f, -1105.841f, 29.5603f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					break;
				
				case 4:
					func_208(uParam2, 1, 0, joaat("weapon_knuckle"), 1, 20.177f, -1105.171f, 29.5603f, -2.5f, 95f, 168f, 0f, 0f, 0.475f, 265f, 210f, 30f);
					break;
			}
			break;
		
		case 8:
			if (unk_0x63C468D583002D23())
			{
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 0, 0, joaat("weapon_stungun"), 1, 21.925f, -1105.835f, 29.5454f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_appistol"), 18, 22.11f, -1106.117f, 29.5387f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_combatpistol"), 12, 22.359f, -1105.969f, 29.5407f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_pistol"), 12, 22.494f, -1106.262f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 4:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_pistol50"), 24, 22.854f, -1106.382f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
				}
			}
			else
			{
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 0, 0, joaat("weapon_stungun"), 1, 21.9484f, -1105.858f, 29.5454f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_appistol"), 18, 22.07f, -1106.117f, 29.5387f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_combatpistol"), 12, 22.319f, -1105.969f, 29.5407f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_pistol"), 12, 22.454f, -1106.262f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 4:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_pistol50"), 24, 22.814f, -1106.382f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					}
			}
			break;
		
		case 9:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 2, joaat("AMMO_SMOKEGRENADE"), joaat("weapon_smokegrenade"), 1, 23.2676f, -1107.351f, 29.6454f, 0f, 0f, 245f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 2, 214501711, joaat("weapon_grenade"), 1, 23.0382f, -1108.005f, 29.5878f, 0f, 0f, 245f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 2, joaat("AMMO_STICKYBOMB"), joaat("weapon_stickybomb"), 1, Var4, 0f, 0f, 25f, 0f, 0f, 0.475f, 90f, 0f, -135f);
					break;
				
				case 3:
					func_208(uParam2, 2, joaat("AMMO_PROXMINE"), joaat("weapon_proxmine"), 1, Var7, 0f, 0f, 25f, 0f, 0f, 0.475f, 90f, 0f, -135f);
					break;
				
				case 4:
					func_208(uParam2, 2, joaat("AMMO_PIPEBOMB"), joaat("weapon_pipebomb"), 1, 22.9f, -1108.2f, 29.557f, 90f, -154f, 0f, 0f, 0f, 0.475f, -90f, -26f, 0f);
					break;
			}
			break;
		
		case 10:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 22.9739f, -1109.181f, 29.6053f, 90f, 0f, 115f, -0.278f, -0.073f, 0.693f, -90f, 0f, 0f);
					break;
			}
			break;
		
		case 11:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 7, 0, (*uParam1)[0], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 7, 0, (*uParam1)[1], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 7, 0, (*uParam1)[2], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 7, 0, (*uParam1)[3], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 12:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 7, 0, (*uParam1)[4], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 7, 0, (*uParam1)[5], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 7, 0, (*uParam1)[7], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 7, 0, (*uParam1)[6], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 13:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 7, 0, (*uParam1)[8], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 7, 0, (*uParam1)[9], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 7, 0, (*uParam1)[10], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 7, 0, (*uParam1)[11], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 14:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 7, 0, (*uParam1)[12], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 7, 0, (*uParam1)[13], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 7, 0, (*uParam1)[14], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 7, 0, (*uParam1)[15], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 15:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 7, 0, (*uParam1)[16], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 7, 0, (*uParam1)[17], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 7, 0, (*uParam1)[18], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 7, 0, (*uParam1)[19], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 16:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 3, 0, joaat("weapon_unarmed"), 20, 16.2547f, -1110.088f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 3, 0, joaat("weapon_unarmed"), 40, 16.4693f, -1109.498f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 3, 0, joaat("weapon_unarmed"), 60, 16.6786f, -1108.923f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 3, 0, joaat("weapon_unarmed"), 80, 16.3512f, -1109.822f, 29.9462f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					func_208(uParam2, 3, 0, joaat("weapon_unarmed"), 100, 16.5802f, -1109.193f, 29.9462f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 17:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 1, 0, joaat("weapon_machete"), 1, 20.937f, -1105.791f, 29.5603f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 1, 0, joaat("weapon_dagger"), 1, 19.727f, -1105.261f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					break;
				
				case 2:
					if (unk_0x63C468D583002D23())
					{
						func_208(uParam2, 1, 0, joaat("weapon_switchblade"), 1, 19.8018f, -1105.364f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					else
					{
						func_208(uParam2, 1, 0, joaat("weapon_switchblade"), 1, 19.8568f, -1105.401f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					break;
				
				case 3:
					if (bVar3)
					{
						func_208(uParam2, 1, 0, joaat("weapon_flashlight"), 1, 20.331f, -1105.426f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					else
					{
						func_208(uParam2, 1, 0, joaat("weapon_flashlight"), 1, 20.501f, -1105.536f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					}
					break;
				
				case 4:
					func_208(uParam2, 1, 0, joaat("weapon_hatchet"), 1, 20.471f, -1105.506f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 75f, -20f, 0f);
					break;
			}
			break;
		
		case 18:
			if (unk_0x63C468D583002D23())
			{
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_snspistol"), 12, 22.714f, -1106.102f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_heavypistol"), 36, 21.754f, -1105.992f, 29.562f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_vintagepistol"), 14, 23.034f, -1106.222f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 0, joaat("AMMO_FLAREGUN"), joaat("weapon_flaregun"), 2, 21.4779f, -1105.93f, 29.5454f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
				}
			}
			else
			{
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_snspistol"), 12, 22.674f, -1106.102f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_heavypistol"), 36, 21.714f, -1105.992f, 29.562f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_vintagepistol"), 14, 22.994f, -1106.222f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 0, joaat("AMMO_FLAREGUN"), joaat("weapon_flaregun"), 2, 21.885f, -1105.835f, 29.5454f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
					}
			}
			break;
		
		case 19:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 7, 0, (*uParam1)[20], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					func_208(uParam2, 7, 0, (*uParam1)[21], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					func_208(uParam2, 7, 0, (*uParam1)[22], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					func_208(uParam2, 7, 0, (*uParam1)[23], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 20:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_revolver"), 12, 21.6059f, -1105.711f, 29.5416f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
					break;
				
				case 1:
					if (unk_0x63C468D583002D23())
					{
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_machinepistol"), 24, 21.9285f, -1105.841f, 29.562f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
					}
					else
					{
						func_208(uParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_machinepistol"), 24, 21.6161f, -1105.727f, 29.562f, -90f, 0f, -20f, 0f, 0f, 0.475f, 90f, 0f, 0f);
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam4)
			{
				case 0:
					func_208(uParam2, 1, 0, joaat("weapon_poolcue"), 1, 19.8935f, -1105.421f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.43f, 45f, 0f, 0f);
					break;
			}
			break;
	}
	if ((((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14) || iParam3 == 15)
	{
		switch (iParam4)
		{
			case 0:
				uParam2->f_1.f_2 = 31.365f;
				break;
			
			case 1:
				uParam2->f_1.f_2 = 31.017f;
				break;
			
			case 2:
				uParam2->f_1.f_2 = 30.681f;
				break;
			
			case 3:
				uParam2->f_1.f_2 = 30.265f;
				break;
			}
	}
	if (*uParam2 == joaat("weapon_musket"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.15f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_firework"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, 0.245f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_specialcarbine"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.05f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_hominglauncher"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, 0.4f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_bullpupshotgun"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.05f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_heavyshotgun"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.01f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_combatpdw"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, 0.05f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_battleaxe"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.1f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_wrench"))
	{
		uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.15f, 0f, 0f) };
	}
	if (*uParam2 == joaat("weapon_battleaxe"))
	{
		uParam2->f_4.f_1 = (uParam2->f_4.f_1 + 90f);
	}
	if (*uParam2 == joaat("weapon_wrench"))
	{
		uParam2->f_4.f_1 = (uParam2->f_4.f_1 + 90f);
	}
	if (iVar2 == iVar1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("gadget_parachute"), 1689.082f, 3759.161f, 36.2236f, 0f, 0f, -132f, 0f, 0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_microsmg"), 1688.8f, 3759.09f, 35.7f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_smg"), 1688.82f, 3759.1f, 35.27f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (unk_0x63C468D583002D23())
						{
							func_206(uParam2, joaat("weapon_assaultsmg"), 1689.693f, 3760.031f, 36.328f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_206(uParam2, joaat("weapon_sawnoffshotgun"), 1689.51f, 3759.85f, 36.3f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_pumpshotgun"), 1689.51f, 3759.83f, 35.8f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_206(uParam2, joaat("weapon_assaultshotgun"), 1689.56f, 3759.91f, 35.34f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_assaultrifle"), 1690.32f, 3760.76f, 36.27f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_carbinerifle"), 1690.36f, 3760.8f, 35.79f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_206(uParam2, joaat("weapon_advancedrifle"), 1690.35f, 3760.8f, 35.32f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_sniperrifle"), 1691.02f, 3761.51f, 35.81f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_heavysniper"), 1690.99f, 3761.47f, 35.32f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_mg"), 1692.06f, 3762.57f, 36.08f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_combatmg"), 1692.15f, 3762.63f, 35.49f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_rpg"), 1693.26f, 3763.82f, 36.26f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_grenadelauncher"), 1693.12f, 3763.72f, 35.88f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_206(uParam2, joaat("weapon_minigun"), 1693.06f, 3763.56f, 35.39f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_knife"), 1690.773f, 3758.397f, 34.449f, -90f, 0f, 0f, 0f, 0f, 0.475f, 35f, 0f, 0f);
						break;
					
					case 1:
						if (bVar3)
						{
							func_206(uParam2, joaat("weapon_nightstick"), 1691.223f, 3758.667f, 34.4425f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						else
						{
							func_206(uParam2, joaat("weapon_nightstick"), 1691.323f, 3758.767f, 34.4425f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						break;
					
					case 2:
						if (!bVar3 && !unk_0x63C468D583002D23())
						{
							func_206(uParam2, joaat("weapon_hammer"), 1691.603f, 3759.107f, 34.443f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						else
						{
							func_206(uParam2, joaat("weapon_hammer"), 1691.7f, 3759.15f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						break;
					
					case 3:
						func_206(uParam2, joaat("weapon_bottle"), 1692.003f, 3759.447f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						break;
					
					case 4:
						func_206(uParam2, joaat("weapon_knuckle"), 1691.033f, 3758.827f, 34.449f, -182f, 96.0003f, 41f, 0f, 0f, 0.475f, 90f, 0f, 0f);
						break;
				}
				break;
			
			case 8:
				if (unk_0x63C468D583002D23())
				{
					switch (iParam4)
					{
						case 0:
							func_206(uParam2, joaat("weapon_stungun"), 1692.277f, 3760.185f, 34.4537f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 1:
							func_206(uParam2, joaat("weapon_appistol"), 1692.642f, 3760.265f, 34.447f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_206(uParam2, joaat("weapon_combatpistol"), 1692.592f, 3760.559f, 34.449f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 3:
							func_206(uParam2, joaat("weapon_pistol"), 1692.909f, 3760.548f, 34.4499f, -90f, -46.5f, 0f, 0f, 0f, 0.475f, 90f, 46.5f, 45f);
							break;
						
						case 4:
							func_206(uParam2, joaat("weapon_pistol50"), 1693.159f, 3760.838f, 34.4499f, -90f, -46.5f, 0f, 0f, 0f, 0.475f, 90f, 46.5f, 45f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_206(uParam2, joaat("weapon_stungun"), 1692.352f, 3760.272f, 34.4537f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 1:
							func_206(uParam2, joaat("weapon_appistol"), 1692.622f, 3760.245f, 34.447f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_206(uParam2, joaat("weapon_combatpistol"), 1692.592f, 3760.559f, 34.449f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 3:
							func_206(uParam2, joaat("weapon_pistol"), 1692.889f, 3760.528f, 34.4499f, -90f, -46.5f, 0f, 0f, 0f, 0.475f, 90f, 46.5f, 45f);
							break;
						
						case 4:
							func_206(uParam2, joaat("weapon_pistol50"), 1693.139f, 3760.818f, 34.4499f, -90f, -46.5f, 0f, 0f, 0f, 0.475f, 90f, 46.5f, 45f);
							break;
						}
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_smokegrenade"), 1694.224f, 3760.886f, 34.5537f, 0f, 0f, 310f, 0f, 0f, 0.475f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_grenade"), 1694.739f, 3760.423f, 34.4961f, 0f, 0f, 310f, 0f, 0f, 0.475f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_206(uParam2, joaat("weapon_stickybomb"), Var4, 0f, 0f, 90f, 0f, 0f, 0.475f, 90f, 0f, -135f);
						break;
					
					case 3:
						func_206(uParam2, joaat("weapon_proxmine"), Var7, 0f, 0f, 90f, 0f, 0f, 0.475f, 90f, 0f, -135f);
						break;
					
					case 4:
						func_206(uParam2, joaat("weapon_pipebomb"), 1694.85f, 3760.2f, 34.4655f, 90f, -90f, 0f, 0f, 0f, 0.475f, 90f, 90f, -110f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 1695.804f, 3759.918f, 34.5136f, -90f, 0f, 2.5f, -0.278f, -0.073f, 0.693f, 90f, 0f, -2.5f);
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 7, 0, (*uParam1)[0], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 7, 0, (*uParam1)[1], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 7, 0, (*uParam1)[2], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 7, 0, (*uParam1)[3], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 7, 0, (*uParam1)[4], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 7, 0, (*uParam1)[5], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 7, 0, (*uParam1)[7], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 7, 0, (*uParam1)[6], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 7, 0, (*uParam1)[8], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 7, 0, (*uParam1)[9], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 7, 0, (*uParam1)[10], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 7, 0, (*uParam1)[11], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 7, 0, (*uParam1)[12], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 7, 0, (*uParam1)[13], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 7, 0, (*uParam1)[14], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 7, 0, (*uParam1)[15], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 7, 0, (*uParam1)[16], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 7, 0, (*uParam1)[17], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 7, 0, (*uParam1)[18], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 7, 0, (*uParam1)[19], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 16:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_unarmed"), 1694.045f, 3753.344f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_unarmed"), 1693.583f, 3753.768f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_206(uParam2, joaat("weapon_unarmed"), 1693.133f, 3754.183f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_206(uParam2, joaat("weapon_unarmed"), 1693.838f, 3753.535f, 34.8608f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_206(uParam2, joaat("weapon_unarmed"), 1693.345f, 3753.988f, 34.8608f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 17:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_machete"), 1691.895f, 3759.35f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						break;
					
					case 1:
						func_206(uParam2, joaat("weapon_dagger"), 1690.933f, 3758.427f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						break;
					
					case 2:
						if (unk_0x63C468D583002D23())
						{
							func_206(uParam2, joaat("weapon_switchblade"), 1691.046f, 3758.445f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						else
						{
							func_206(uParam2, joaat("weapon_switchblade"), 1691.093f, 3758.477f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						break;
					
					case 3:
						if (bVar3)
						{
							func_206(uParam2, joaat("weapon_flashlight"), 1691.323f, 3758.897f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						else
						{
							func_206(uParam2, joaat("weapon_flashlight"), 1691.503f, 3759.007f, 34.4425f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						}
						break;
					
					case 4:
						func_206(uParam2, joaat("weapon_hatchet"), 1691.463f, 3759f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						break;
				}
				break;
			
			case 18:
				if (unk_0x63C468D583002D23())
				{
					switch (iParam4)
					{
						case 0:
							func_206(uParam2, joaat("weapon_snspistol"), 1692.859f, 3760.838f, 34.4499f, -90f, -46f, 0f, 0f, 0f, 0.475f, 90f, 46f, 45f);
							break;
						
						case 1:
							func_206(uParam2, joaat("weapon_heavypistol"), 1692.4f, 3760.005f, 34.447f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_206(uParam2, joaat("weapon_vintagepistol"), 1693.109f, 3761.108f, 34.4537f, -90f, -46.5f, 0f, 0f, 0f, 0.475f, 90f, 46.5f, 45f);
							break;
						
						case 3:
							func_206(uParam2, joaat("weapon_flaregun"), 1692.234f, 3759.775f, 34.4537f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_206(uParam2, joaat("weapon_snspistol"), 1692.859f, 3760.838f, 34.4499f, -90f, -46f, 0f, 0f, 0f, 0.475f, 90f, 46f, 45f);
							break;
						
						case 1:
							func_206(uParam2, joaat("weapon_heavypistol"), 1692.337f, 3759.945f, 34.447f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_206(uParam2, joaat("weapon_vintagepistol"), 1693.109f, 3761.108f, 34.4537f, -90f, -46.5f, 0f, 0f, 0f, 0.475f, 90f, 46.5f, 45f);
							break;
						
						case 3:
							func_206(uParam2, joaat("weapon_flaregun"), 1692.277f, 3760.185f, 34.4537f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
							break;
						}
				}
				break;
			
			case 19:
				switch (iParam4)
				{
					case 0:
						func_208(uParam2, 7, 0, (*uParam1)[20], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_208(uParam2, 7, 0, (*uParam1)[21], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_208(uParam2, 7, 0, (*uParam1)[22], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_208(uParam2, 7, 0, (*uParam1)[23], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 20:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_revolver"), 1692.054f, 3759.98f, 34.4499f, -90f, -46f, 0f, 0f, 0f, 0.475f, 90f, 46f, 45f);
						break;
					
					case 1:
						if (unk_0x63C468D583002D23())
						{
							func_206(uParam2, joaat("weapon_machinepistol"), 1692.312f, 3760.233f, 34.447f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
						}
						else
						{
							func_206(uParam2, joaat("weapon_machinepistol"), 1692.102f, 3759.973f, 34.447f, -90f, -47f, 0f, 0f, 0f, 0.475f, 90f, 47f, 45f);
						}
						break;
				}
				break;
			
			case 21:
				switch (iParam4)
				{
					case 0:
						func_206(uParam2, joaat("weapon_poolcue"), 1691.14f, 3758.535f, 34.449f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.43f, 45f, 65f, 90f);
						break;
				}
				break;
		}
		if ((((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14) || iParam3 == 15)
		{
			uParam2->f_1.f_2 = (uParam2->f_1.f_2 - 0.15f);
			switch (iParam4)
			{
				case 0:
					uParam2->f_1.f_2 = 36.275f;
					break;
				
				case 1:
					uParam2->f_1.f_2 = 35.929f;
					break;
				
				case 2:
					uParam2->f_1.f_2 = 35.593f;
					break;
				
				case 3:
					uParam2->f_1.f_2 = 35.177f;
					break;
				}
		}
		if (*uParam2 == joaat("weapon_musket"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.15f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_firework"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, 0.245f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_specialcarbine"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.05f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_hominglauncher"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, 0.4f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_bullpupshotgun"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.05f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_heavyshotgun"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.01f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_combatpdw"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, 0.05f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_battleaxe"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.06f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_wrench"))
		{
			uParam2->f_1 = { unk_0x3CE07141081BBC2B(uParam2->f_1, uParam2->f_4.f_2, -0.08f, 0f, 0f) };
		}
		if (*uParam2 == joaat("weapon_battleaxe"))
		{
			uParam2->f_4.f_1 = (uParam2->f_4.f_1 + 90f);
		}
		if (*uParam2 == joaat("weapon_wrench"))
		{
			uParam2->f_4.f_1 = (uParam2->f_4.f_1 + 90f);
		}
	}
	if (bParam5)
	{
		if (*uParam2 == joaat("weapon_unarmed"))
		{
			func_186(*uParam2, &(uParam2->f_19), &(uParam2->f_20), &(uParam2->f_21), iParam4);
		}
		else
		{
			func_186(*uParam2, &(uParam2->f_19), &(uParam2->f_20), &(uParam2->f_21), 0);
		}
	}
	if (iVar2 == iVar0)
	{
		iVar10 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar10 = 29;
	}
	if (uParam2->f_24 == 7)
	{
		if (*uParam2 == joaat("object"))
		{
			iVar11 = 0;
			while (iVar11 < 25)
			{
				if (uParam1->f_80[iVar11] == iParam3 && uParam1->f_54[iVar11] == iParam4)
				{
					uParam2->f_23 = iVar11;
				}
				iVar11++;
			}
		}
		else if (*uParam2 != 0)
		{
			if (*uParam2 == -61829581)
			{
				uParam2->f_24 = 6;
			}
			else if (*uParam2 == joaat("weapon_knuckle"))
			{
				uParam2->f_24 = 1;
			}
			else
			{
				func_203(uParam2, *uParam2);
				switch (unk_0x4E2D036E7A49AA3D(*uParam2))
				{
					case joaat("GROUP_PISTOL"):
					case joaat("GROUP_SMG"):
					case joaat("GROUP_RIFLE"):
					case joaat("GROUP_MG"):
					case joaat("GROUP_SHOTGUN"):
					case joaat("GROUP_SNIPER"):
					case joaat("GROUP_HEAVY"):
					case 88899580:
					case joaat("GROUP_STUNGUN"):
						uParam2->f_24 = 0;
						break;
					
					case joaat("GROUP_MELEE"):
					case joaat("GROUP_FIREEXTINGUISHER"):
					case joaat("GROUP_PETROLCAN"):
					case 507375312:
					case -755518101:
					case -801780072:
					case 431593103:
						uParam2->f_24 = 1;
						break;
					
					case joaat("GROUP_THROWN"):
						uParam2->f_24 = 2;
						break;
					}
				}
			}
	}
	return *uParam2 != 0;
}

void func_206(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11)
{
	*uParam0 = iParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_4 = { Param5 };
	uParam0->f_7 = { Param8 };
	uParam0->f_10 = { Param11 };
	uParam0->f_23 = -1;
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
	}
	return "";
}

void func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, struct<3> Param8, struct<3> Param11, struct<3> Param14)
{
	*uParam0 = iParam3;
	uParam0->f_24 = iParam1;
	uParam0->f_25 = iParam2;
	uParam0->f_22 = iParam4;
	uParam0->f_1 = { Param5 };
	uParam0->f_4 = { Param8 };
	uParam0->f_7 = { Param11 };
	uParam0->f_10 = { Param14 };
	uParam0->f_23 = -1;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_minigun"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_flare"):
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_pistol50"):
		case joaat("weapon_assaultsmg"):
		case joaat("weapon_heavyrifle"):
		case joaat("weapon_bullpupshotgun"):
		case -572349828:
		case 392730790:
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_bottle"):
		case joaat("weapon_bullpuprifle"):
		case joaat("weapon_heavypistol"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"):
		case joaat("weapon_gusenberg"):
		case joaat("weapon_flaregun"):
		case joaat("weapon_firework"):
		case joaat("weapon_musket"):
		case -1523701417:
		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"):
		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_snowball"):
		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_compactrifle"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_machete"):
		case joaat("weapon_machinepistol"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_revolver"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_petrolcan"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_autoshotgun"):
		case joaat("weapon_minismg"):
		case joaat("weapon_compactlauncher"):
		case joaat("weapon_battleaxe"):
		case joaat("weapon_pipebomb"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
			return 1;
			break;
	}
	return 0;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 34:
			return joaat("weapon_knife");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_combatpistol");
			break;
		
		case 3:
			return joaat("weapon_appistol");
			break;
		
		case 5:
			return joaat("weapon_smg");
			break;
		
		case 7:
			return joaat("weapon_microsmg");
			break;
		
		case 8:
			return joaat("weapon_assaultrifle");
			break;
		
		case 9:
			return joaat("weapon_carbinerifle");
			break;
		
		case 11:
			return joaat("weapon_advancedrifle");
			break;
		
		case 12:
			return joaat("weapon_mg");
			break;
		
		case 13:
			return joaat("weapon_combatmg");
			break;
		
		case 15:
			return joaat("weapon_stickybomb");
			break;
		
		case 16:
			return joaat("weapon_grenade");
			break;
		
		case 17:
			return joaat("weapon_smokegrenade");
			break;
		
		case 60:
			return joaat("weapon_proxmine");
			break;
		
		case 18:
			return joaat("weapon_remotesniper");
			break;
		
		case 20:
			return joaat("weapon_sniperrifle");
			break;
		
		case 21:
			return joaat("weapon_heavysniper");
			break;
		
		case 56:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 22:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 24:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 25:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 55:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 26:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 27:
			return joaat("weapon_rpg");
			break;
		
		case 28:
			return joaat("weapon_minigun");
			break;
		
		case 61:
			return joaat("weapon_hominglauncher");
			break;
		
		case 31:
			return joaat("weapon_stungun");
			break;
		
		case 33:
			return joaat("gadget_parachute");
			break;
		
		case 35:
			return joaat("weapon_nightstick");
			break;
		
		case 43:
			return joaat("weapon_petrolcan");
			break;
		
		case 45:
			return joaat("weapon_bottle");
			break;
		
		case 46:
			return joaat("weapon_specialcarbine");
			break;
		
		case 47:
			return joaat("weapon_snspistol");
			break;
		
		case 48:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 49:
			return joaat("weapon_heavypistol");
			break;
		
		case 23:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 50:
			return joaat("weapon_gusenberg");
			break;
		
		case 51:
			return joaat("weapon_dagger");
			break;
		
		case 52:
			return joaat("weapon_vintagepistol");
			break;
		
		case 57:
			return joaat("weapon_flaregun");
			break;
		
		case 53:
			return joaat("weapon_musket");
			break;
		
		case 54:
			return joaat("weapon_firework");
			break;
		
		case 58:
			return joaat("weapon_hatchet");
			break;
		
		case 59:
			return joaat("weapon_railgun");
			break;
		
		case 64:
			return joaat("weapon_combatpdw");
			break;
		
		case 62:
			return joaat("weapon_knuckle");
			break;
		
		case 63:
			return joaat("weapon_marksmanpistol");
			break;
		
		case 65:
			return joaat("weapon_machete");
			break;
		
		case 68:
			return joaat("weapon_machinepistol");
			break;
		
		case 66:
			return joaat("weapon_dbshotgun");
			break;
		
		case 67:
			return joaat("weapon_compactrifle");
			break;
		
		case 69:
			return joaat("weapon_flashlight");
			break;
		
		case 70:
			return joaat("weapon_revolver");
			break;
		
		case 71:
			return joaat("weapon_switchblade");
			break;
		
		case 36:
			return joaat("weapon_hammer");
			break;
		
		case 4:
			return joaat("weapon_pistol50");
			break;
		
		case 6:
			return joaat("weapon_assaultsmg");
			break;
		
		case 41:
			return joaat("weapon_molotov");
			break;
		
		case 39:
			return joaat("weapon_golfclub");
			break;
		
		case 38:
			return joaat("weapon_crowbar");
			break;
		
		case 37:
			return joaat("weapon_bat");
			break;
		
		case 72:
			return joaat("weapon_autoshotgun");
			break;
		
		case 73:
			return joaat("weapon_minismg");
			break;
		
		case 74:
			return joaat("weapon_compactlauncher");
			break;
		
		case 75:
			return joaat("weapon_battleaxe");
			break;
		
		case 76:
			return joaat("weapon_pipebomb");
			break;
		
		case 77:
			return joaat("weapon_poolcue");
			break;
		
		case 78:
			return joaat("weapon_wrench");
			break;
	}
	return joaat("weapon_unarmed");
}

int func_211(int iParam0)
{
	if (func_209(iParam0))
	{
		if (unk_0x4E2D036E7A49AA3D(iParam0) != 0)
		{
			if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_MELEE") || iParam0 == joaat("weapon_knuckle"))
			{
				if (func_219(7450, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_PISTOL"))
			{
				if (func_219(7451, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_RIFLE"))
			{
				if (func_219(7453, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_SHOTGUN") || iParam0 == joaat("weapon_musket"))
			{
				if (func_219(7454, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_SNIPER") && iParam0 != joaat("weapon_musket"))
			{
				if (func_219(7455, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_HEAVY"))
			{
				if (func_219(7456, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if ((unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_THROWN") || iParam0 == joaat("weapon_petrolcan")) || iParam0 == joaat("weapon_proxmine"))
			{
				if (func_219(7457, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_SMG") || unk_0x4E2D036E7A49AA3D(iParam0) == joaat("GROUP_MG"))
			{
				if (func_219(7452, -1, -1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 == joaat("weapon_molotov") && unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), iParam0) > 0)
	{
		return 1;
	}
	if ((((((iParam0 == joaat("weapon_golfclub") || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_grenade")) || iParam0 == joaat("weapon_stickybomb")) && func_130(func_213(iParam0), -1, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return 194;
			break;
		
		case joaat("weapon_nightstick"):
			return 201;
			break;
		
		case joaat("weapon_pistol"):
			return 252;
			break;
		
		case joaat("weapon_combatpistol"):
			return 262;
			break;
		
		case joaat("weapon_appistol"):
			return 282;
			break;
		
		case joaat("weapon_snspistol"):
			return 1740;
			break;
		
		case joaat("weapon_microsmg"):
			return 292;
			break;
		
		case joaat("weapon_smg"):
			return 302;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 321;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 330;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 5364;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 339;
			break;
		
		case joaat("weapon_mg"):
			return 348;
			break;
		
		case joaat("weapon_combatmg"):
			return 357;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 375;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 385;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 403;
			break;
		
		case joaat("weapon_stungun"):
			return 413;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 422;
			break;
		
		case joaat("weapon_heavysniper"):
			return 431;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 440;
			break;
		
		case joaat("weapon_rpg"):
			return 447;
			break;
		
		case joaat("weapon_minigun"):
			return 456;
			break;
		
		case joaat("weapon_grenade"):
			return 464;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 473;
			break;
		
		case joaat("weapon_stickybomb"):
			return 481;
			break;
		
		case joaat("weapon_molotov"):
			return 490;
			break;
		
		case joaat("weapon_petrolcan"):
			return 581;
			break;
		
		case joaat("weapon_pistol50"):
			return 272;
			break;
		
		case -572349828:
			return 366;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 312;
			break;
		
		case 392730790:
			return 434;
			break;
		
		case joaat("weapon_hammer"):
			return 229;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 394;
			break;
		
		case joaat("weapon_bottle"):
			return 1730;
			break;
		
		case joaat("weapon_heavypistol"):
			return 5354;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 5374;
			break;
		
		case joaat("weapon_gusenberg"):
			return 5384;
			break;
		
		case joaat("gadget_parachute"):
			return 578;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 5667;
			break;
		
		case joaat("weapon_dagger"):
			return 5657;
			break;
		
		case joaat("weapon_musket"):
			return 5687;
			break;
		
		case joaat("weapon_firework"):
			return 5677;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 5765;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 5775;
			break;
		
		case joaat("weapon_proxmine"):
			return 5791;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 5799;
			break;
		
		case joaat("weapon_combatpdw"):
			return 5809;
			break;
		
		case joaat("weapon_knuckle"):
			return 5816;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 5826;
			break;
		
		case joaat("weapon_hatchet"):
			return 5783;
			break;
		
		case joaat("weapon_machete"):
			return 5834;
			break;
		
		case joaat("weapon_machinepistol"):
			return 5844;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 5872;
			break;
		
		case joaat("weapon_compactrifle"):
			return 5862;
			break;
		
		case joaat("weapon_flashlight"):
			return 5880;
			break;
		
		case joaat("weapon_golfclub"):
			return 243;
			break;
		
		case joaat("weapon_bat"):
			return 236;
			break;
		
		case joaat("weapon_crowbar"):
			return 208;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 5951;
			break;
		
		case joaat("weapon_minismg"):
			return 5977;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 5967;
			break;
		
		case joaat("weapon_battleaxe"):
			return 5994;
			break;
		
		case joaat("weapon_pipebomb"):
			return 5985;
			break;
		
		case joaat("weapon_poolcue"):
			return 5995;
			break;
		
		case joaat("weapon_wrench"):
			return 222;
			break;
	}
	return 481;
}

bool func_214(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_20())
	{
		return 0;
	}
	iVar0 = func_216(iParam0, iParam1);
	iVar1 = func_193(iParam0);
	return unk_0x48B8265059381CD0(iVar0, func_215(iVar1));
}

int func_215(int iParam0)
{
	return (iParam0 % 32);
}

var func_216(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_130(func_217(iParam0), uParam1, 0);
	return uVar0;
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(iParam0);
	iVar1 = func_218(iVar0);
	switch (iVar1)
	{
		case 0:
			return 794;
			break;
		
		case 1:
			return 795;
			break;
		
		case 2:
			return 2400;
			break;
	}
	return 6022;
}

int func_218(int iParam0)
{
	return (iParam0 / 32);
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	iVar1 = func_221(iParam0, iParam1);
	uVar2 = func_220(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x083FFE917EBA1560(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 7387;
			break;
		
		case joaat("weapon_combatpistol"):
			return 7388;
			break;
		
		case joaat("weapon_appistol"):
			return 7389;
			break;
		
		case joaat("weapon_smg"):
			return 7390;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 7391;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 7392;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 7393;
			break;
		
		case joaat("weapon_mg"):
			return 7394;
			break;
		
		case joaat("weapon_combatmg"):
			return 7395;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 7396;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 7397;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 7398;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 7399;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 7400;
			break;
		
		case joaat("weapon_rpg"):
			return 7401;
			break;
		
		case joaat("weapon_minigun"):
			return 7402;
			break;
		
		case joaat("weapon_grenade"):
			return 7403;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 7404;
			break;
		
		case joaat("weapon_stickybomb"):
			return 7405;
			break;
		
		case joaat("weapon_molotov"):
			return 7406;
			break;
		
		case joaat("weapon_flare"):
			return 7407;
			break;
		
		case joaat("weapon_knife"):
			return 7408;
			break;
		
		case joaat("weapon_nightstick"):
			return 7409;
			break;
		
		case joaat("weapon_hammer"):
			return 7410;
			break;
		
		case joaat("weapon_pistol50"):
			return 7411;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 7412;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 7413;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 7414;
			break;
		
		case -572349828:
			return 7415;
			break;
		
		case 392730790:
			return 7416;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 7417;
			break;
		
		case joaat("weapon_bottle"):
			return 7418;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 7419;
			break;
		
		case joaat("weapon_heavypistol"):
			return 7420;
			break;
		
		case joaat("weapon_snspistol"):
			return 7421;
			break;
		
		case joaat("weapon_dagger"):
			return 7422;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 7423;
			break;
		
		case joaat("weapon_gusenberg"):
			return 7424;
			break;
		
		case joaat("weapon_flaregun"):
			return 7425;
			break;
		
		case joaat("weapon_firework"):
			return 7426;
			break;
		
		case joaat("weapon_musket"):
			return 7427;
			break;
		
		case -1523701417:
			return 7428;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 7429;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 7430;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 7431;
			break;
		
		case joaat("weapon_proxmine"):
			return 7432;
			break;
		
		case joaat("weapon_snowball"):
			return 7433;
			break;
		
		case joaat("weapon_combatpdw"):
			return 7434;
			break;
		
		case joaat("weapon_knuckle"):
			return 7435;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 7436;
			break;
		
		case joaat("weapon_hatchet"):
			return 7437;
			break;
		
		case joaat("weapon_compactrifle"):
			return 7438;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 7439;
			break;
		
		case joaat("weapon_machete"):
			return 7440;
			break;
		
		case joaat("weapon_machinepistol"):
			return 7441;
			break;
		
		case joaat("weapon_flashlight"):
			return 7442;
			break;
		
		case joaat("weapon_revolver"):
			return 7443;
			break;
		
		case joaat("weapon_switchblade"):
			return 7444;
			break;
		
		case joaat("weapon_microsmg"):
			return 7445;
			break;
		
		case joaat("weapon_heavysniper"):
			return 7446;
			break;
		
		case joaat("weapon_petrolcan"):
			return 7447;
			break;
		
		case joaat("weapon_golfclub"):
			return 7448;
			break;
		
		case joaat("weapon_bat"):
			return 7449;
			break;
		
		case joaat("weapon_crowbar"):
			return 7466;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 7621;
			break;
		
		case joaat("weapon_battleaxe"):
			return 7622;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 7623;
			break;
		
		case joaat("weapon_minismg"):
			return 7624;
			break;
		
		case joaat("weapon_pipebomb"):
			return 7625;
			break;
		
		case joaat("weapon_poolcue"):
			return 7626;
			break;
		
		case joaat("weapon_wrench"):
			return 7627;
			break;
	}
	return 7386;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_bzgas"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_flare"):
		case joaat("weapon_ball"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_pipebomb"):
			return 1;
		
		default:
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	if (iParam0 == joaat("weapon_molotov"))
	{
		return 0;
	}
	if (iParam0 == joaat("gadget_parachute") || iParam0 == 1778781596)
	{
		return 0;
	}
	if (iLocal_373 >= Global_1760601)
	{
		return 0;
	}
	if (!func_225(iParam0, -1, 0))
	{
		return 0;
	}
	if (func_182(iParam0, &iVar0))
	{
		if (iVar0 == joaat("AMMO_RPG"))
		{
			if (Global_262145.f_10149)
			{
				return 0;
			}
		}
		else if (iVar0 == joaat("AMMO_GRENADELAUNCHER"))
		{
			if (Global_262145.f_10150)
			{
				return 0;
			}
		}
		else if (iVar0 == joaat("AMMO_FIREWORK"))
		{
			if (Global_262145.f_10151)
			{
				return 0;
			}
		}
		else if (iVar0 == joaat("AMMO_HOMINGLAUNCHER"))
		{
			if (Global_262145.f_10152)
			{
				return 0;
			}
		}
		else if (iVar0 == joaat("AMMO_PROXMINE"))
		{
			if (Global_262145.f_10155)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == joaat("weapon_grenade"))
	{
		if (Global_262145.f_10153)
		{
			return 0;
		}
		return 1;
	}
	else if (iParam0 == joaat("weapon_stickybomb"))
	{
		if (Global_262145.f_10154)
		{
			return 0;
		}
		return 1;
	}
	else if (iParam0 == joaat("weapon_smokegrenade"))
	{
		if (Global_262145.f_10156)
		{
			return 0;
		}
		return 1;
	}
	else if (iParam0 == joaat("weapon_proxmine"))
	{
		if (Global_262145.f_10155)
		{
			return 0;
		}
		return 1;
	}
	else if (iParam0 == joaat("weapon_petrolcan"))
	{
		if (Global_262145.f_10157)
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_20())
	{
		return 0;
	}
	iVar0 = func_226(iParam0, iParam1);
	iVar1 = func_193(iParam0);
	return unk_0x48B8265059381CD0(iVar0, func_215(iVar1));
}

var func_226(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_130(func_227(iParam0), uParam1, 0);
	return uVar0;
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(iParam0);
	iVar1 = func_218(iVar0);
	switch (iVar1)
	{
		case 0:
			return 674;
			break;
		
		case 1:
			return 675;
			break;
		
		case 2:
			return 2409;
			break;
	}
	return 6022;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_unarmed");
			break;
		
		case 1:
			return joaat("weapon_animal");
			break;
		
		case 2:
			return joaat("weapon_cougar");
			break;
		
		case 3:
			return joaat("weapon_pistol");
			break;
		
		case 4:
			return joaat("weapon_combatpistol");
			break;
		
		case 5:
			return joaat("weapon_appistol");
			break;
		
		case 6:
			return joaat("weapon_microsmg");
			break;
		
		case 7:
			return joaat("weapon_smg");
			break;
		
		case 8:
			return joaat("weapon_assaultrifle");
			break;
		
		case 9:
			return joaat("weapon_carbinerifle");
			break;
		
		case 10:
			return joaat("weapon_advancedrifle");
			break;
		
		case 11:
			return joaat("weapon_mg");
			break;
		
		case 12:
			return joaat("weapon_combatmg");
			break;
		
		case 13:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 14:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 15:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 16:
			return joaat("weapon_sniperrifle");
			break;
		
		case 17:
			return joaat("weapon_heavysniper");
			break;
		
		case 18:
			return joaat("weapon_remotesniper");
			break;
		
		case 19:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 20:
			return joaat("weapon_grenadelauncher_smoke");
			break;
		
		case 21:
			return joaat("weapon_rpg");
			break;
		
		case 22:
			return joaat("weapon_minigun");
			break;
		
		case 23:
			return joaat("weapon_stinger");
			break;
		
		case 24:
			return joaat("weapon_grenade");
			break;
		
		case 25:
			return joaat("weapon_smokegrenade");
			break;
		
		case 26:
			return joaat("weapon_bzgas");
			break;
		
		case 27:
			return joaat("weapon_stickybomb");
			break;
		
		case 28:
			return joaat("weapon_molotov");
			break;
		
		case 29:
			return joaat("weapon_ball");
			break;
		
		case 30:
			return joaat("weapon_flare");
			break;
		
		case 31:
			return joaat("weapon_stungun");
			break;
		
		case 32:
			return joaat("weapon_fireextinguisher");
			break;
		
		case 33:
			return joaat("weapon_petrolcan");
			break;
		
		case 34:
			return joaat("weapon_digiscanner");
			break;
		
		case 35:
			return joaat("weapon_airstrike_rocket");
			break;
		
		case 36:
			return joaat("weapon_hit_by_water_cannon");
			break;
		
		case 37:
			return joaat("weapon_electric_fence");
			break;
		
		case 38:
			return joaat("weapon_knife");
			break;
		
		case 39:
			return joaat("weapon_nightstick");
			break;
		
		case 40:
			return joaat("weapon_hammer");
			break;
		
		case 41:
			return joaat("weapon_bat");
			break;
		
		case 42:
			return joaat("weapon_crowbar");
			break;
		
		case 43:
			return joaat("weapon_golfclub");
			break;
		
		case 44:
			return joaat("vehicle_weapon_tank");
			break;
		
		case 45:
			return joaat("vehicle_weapon_space_rocket");
			break;
		
		case 46:
			return joaat("vehicle_weapon_player_laser");
			break;
		
		case 47:
			return joaat("vehicle_weapon_player_bullet");
			break;
		
		case 48:
			return joaat("vehicle_weapon_rotors");
			break;
		
		case 49:
			return joaat("vehicle_weapon_player_buzzard");
			break;
		
		case 50:
			return joaat("weapon_passenger_rocket");
			break;
		
		case 51:
			return joaat("weapon_vehicle_rocket");
			break;
		
		case 52:
			return joaat("vehicle_weapon_plane_rocket");
			break;
		
		case 53:
			return joaat("object");
			break;
		
		case 54:
			return joaat("weapon_briefcase");
			break;
		
		case 55:
			return joaat("weapon_briefcase_02");
			break;
		
		case 56:
			return joaat("gadget_parachute");
			break;
		
		case 57:
			return 1778781596;
			break;
		
		case 58:
			return joaat("AMMO_RPG");
			break;
		
		case 59:
			return joaat("AMMO_TANK");
			break;
		
		case 60:
			return joaat("AMMO_SPACE_ROCKET");
			break;
		
		case 61:
			return joaat("AMMO_PLAYER_LASER");
			break;
		
		case 62:
			return joaat("AMMO_ENEMY_LASER");
			break;
		
		case 63:
			return joaat("AMMO_GRENADELAUNCHER");
			break;
		
		case 64:
			return joaat("AMMO_GRENADELAUNCHER_SMOKE");
			break;
		
		case 65:
			return joaat("weapon_rammed_by_car");
			break;
		
		case 66:
			return joaat("weapon_run_over_by_car");
			break;
		
		case 67:
			return joaat("weapon_explosion");
			break;
		
		case 68:
			return joaat("weapon_fall");
			break;
		
		case 69:
			return joaat("weapon_pistol50");
			break;
		
		case 70:
			return joaat("weapon_assaultsmg");
			break;
		
		case 71:
			return joaat("weapon_heavyrifle");
			break;
		
		case 72:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 73:
			return -572349828;
			break;
		
		case 74:
			return 392730790;
			break;
		
		case 75:
			return -1887867191;
			break;
		
		case 76:
			return -837150131;
			break;
		
		case 77:
			return -344484024;
			break;
		
		case 78:
			return joaat("weapon_specialcarbine");
			break;
		
		case joaat("mpsv_lp0_31"):
			return joaat("weapon_bottle");
			break;
		
		case 80:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 81:
			return joaat("weapon_heavypistol");
			break;
		
		case 82:
			return joaat("weapon_snspistol");
			break;
		
		case 83:
			return joaat("weapon_dagger");
			break;
		
		case 84:
			return joaat("weapon_vintagepistol");
			break;
		
		case 85:
			return joaat("weapon_gusenberg");
			break;
		
		case 86:
			return -664359727;
			break;
		
		case 87:
			return joaat("weapon_flaregun");
			break;
		
		case 88:
			return joaat("weapon_firework");
			break;
		
		case 89:
			return joaat("weapon_musket");
			break;
		
		case 90:
			return -1523701417;
			break;
		
		case 91:
			return -2112826155;
			break;
		
		case 92:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 93:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 94:
			return joaat("weapon_garbagebag");
			break;
		
		case 95:
			return joaat("weapon_handcuffs");
			break;
		
		case 96:
			return joaat("weapon_hominglauncher");
			break;
		
		case 97:
			return joaat("weapon_proxmine");
			break;
		
		case 98:
			return joaat("weapon_snowball");
			break;
		
		case 99:
			return joaat("weapon_hatchet");
			break;
		
		case 100:
			return joaat("weapon_railgun");
			break;
		
		case 101:
			return -159960575;
			break;
		
		case 102:
			return -1443982089;
			break;
		
		case 103:
			return -1578596338;
			break;
		
		case 104:
			return joaat("weapon_knuckle");
			break;
		
		case 105:
			return joaat("weapon_combatpdw");
			break;
		
		case 106:
			return joaat("weapon_marksmanpistol");
			break;
		
		case 107:
			return joaat("weapon_machete");
			break;
		
		case 108:
			return joaat("weapon_machinepistol");
			break;
		
		case 109:
			return joaat("weapon_flashlight");
			break;
		
		case 110:
			return joaat("weapon_revolver");
			break;
		
		case 111:
			return joaat("weapon_switchblade");
			break;
		
		case 112:
			return joaat("weapon_dbshotgun");
			break;
		
		case 113:
			return joaat("weapon_compactrifle");
			break;
		
		case 114:
			return joaat("weapon_autoshotgun");
			break;
		
		case 115:
			return joaat("weapon_battleaxe");
			break;
		
		case 116:
			return joaat("weapon_compactlauncher");
			break;
		
		case 117:
			return joaat("weapon_minismg");
			break;
		
		case 118:
			return joaat("weapon_pipebomb");
			break;
		
		case 119:
			return joaat("weapon_poolcue");
			break;
		
		case 120:
			return joaat("weapon_wrench");
			break;
	}
	return 0;
}

void func_229()
{
	int iVar0;
	int iVar1;
	struct<42> Var2;
	int iVar58;
	var uVar59[64];
	int iVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	
	Var2.f_20 = 20;
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		switch (iVar1)
		{
			case 152:
				if (unk_0x91015F07066D5841(1, iVar0, &Var2, 56))
				{
					iVar124 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar59);
					iVar58 = 0;
					while (iVar58 < iVar124)
					{
						if (unk_0x23E9113C762466ED(uVar59[iVar58]) && !unk_0xA929B2923D14E2F8(uVar59[iVar58], 0))
						{
							if (unk_0x44748DA5CF34DA5E(uVar59[iVar58], "Veh_Modded_By_Player"))
							{
								iVar126 = unk_0x83CA0CEAC60F17F6(uVar59[iVar58], "Veh_Modded_By_Player");
								if (iVar126 == unk_0x94A0E0BA5D089186(&(Var2.f_41)))
								{
									iVar127 = 0;
									while (iVar127 < 3)
									{
										if (unk_0x23E9113C762466ED(iLocal_369[iVar127]))
										{
											iVar126 = unk_0x83CA0CEAC60F17F6(iLocal_369[iVar127], "Veh_Modded_By_Player");
											if (iVar126 == -1)
											{
												iLocal_369[iVar127] = -1;
											}
										}
										if (!unk_0x23E9113C762466ED(iLocal_369[iVar127]))
										{
											iLocal_369[iVar127] = uVar59[iVar58];
											iVar127 = 3;
										}
										iVar127++;
									}
								}
							}
						}
						iVar58++;
					}
				}
				break;
		}
		iVar0++;
	}
	iVar58 = 0;
	while (iVar58 < 3)
	{
		if (unk_0x23E9113C762466ED(iLocal_369[iVar58]))
		{
			if (unk_0x44748DA5CF34DA5E(iLocal_369[iVar58], "Veh_Modded_By_Player"))
			{
				iVar126 = unk_0x83CA0CEAC60F17F6(iLocal_369[iVar58], "Veh_Modded_By_Player");
				if (!iVar126 == -1)
				{
					if (func_230(iLocal_369[iVar58], &bVar125))
					{
						unk_0x25E9B908B35A0675(iLocal_369[iVar58], "Veh_Modded_By_Player", -1);
						iLocal_369[iVar58] = -1;
					}
					if (bVar125)
					{
						unk_0x921CF98C637B0043(&(iLocal_369[iVar58]));
					}
				}
				else
				{
					iLocal_369[iVar58] = -1;
				}
			}
			else
			{
				iLocal_369[iVar58] = -1;
			}
		}
		iVar58++;
	}
}

int func_230(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_231()
{
	int iVar0;
	
	if (!iLocal_368)
	{
		if (Global_1574127)
		{
			if (Global_2494199.f_5340)
			{
				if (func_176())
				{
					iVar0 = 0;
					while (iVar0 < 158)
					{
						if (Global_1320796[iVar0 /*140*/].f_66 != 0)
						{
							if (!func_241(Global_1320796[iVar0 /*140*/].f_1))
							{
								if (!func_238(Global_1320796[iVar0 /*140*/].f_1, 0, 0))
								{
									if (func_175(Global_1320796[iVar0 /*140*/].f_1))
									{
										if (func_236(Global_1320796[iVar0 /*140*/].f_1, iVar0))
										{
											if (func_235() >= 5)
											{
												func_232(Global_1320796[iVar0 /*140*/].f_1);
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
					iLocal_368 = 1;
				}
			}
		}
	}
	else if (!Global_1574127)
	{
		iLocal_368 = 0;
	}
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = unk_0x765F5B806B517045(&uParam0);
	func_234(0);
	func_233(0);
	func_173(9, iVar0);
	func_170(9, 0);
}

void func_233(int iParam0)
{
	if (iParam0 < 10)
	{
		func_170(iParam0, func_171(iParam0 + 1));
		func_233(iParam0 + 1);
	}
}

void func_234(int iParam0)
{
	if (iParam0 < 10)
	{
		func_173(iParam0, func_174(iParam0 + 1));
		func_234(iParam0 + 1);
	}
}

int func_235()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1320101[iVar0] == 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_236(struct<4> Param0, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 158)
	{
		if (iVar0 != iParam4)
		{
			if (Global_1320796[iVar0 /*140*/].f_66 != 0)
			{
				if (func_237(Param0, Global_1320796[iVar0 /*140*/].f_1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return unk_0x765F5B806B517045(&uParam0) == unk_0x765F5B806B517045(&uParam4);
}

int func_238(char[16] cParam0, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x765F5B806B517045(&cParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1320101[iVar0] == iVar1)
		{
			iVar2 = func_240(cParam0);
			if (iVar2 >= iParam4)
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (bParam5)
	{
		if (func_239(&Global_1320123, iVar1))
		{
			iVar2 = func_240(cParam0);
			if (iVar2 >= iParam4)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_239(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_240(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x765F5B806B517045(&uParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1320101[iVar0] == iVar1)
		{
			return Global_1320112[iVar0];
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1320123)
	{
		if (Global_1320123[iVar0] == iVar1)
		{
			return Global_1320144[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_241(struct<4> Param0)
{
	int iVar0;
	
	if (func_176())
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			if (Global_98568[iVar0])
			{
				if (func_242(Param0, Global_98447[iVar0 /*4*/]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (func_242(Param0, Global_101700.f_19077.f_267))
	{
		return 1;
	}
	return 0;
}

int func_242(char[16] cParam0, struct<4> Param4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	struct<4> Var8;
	
	iVar0 = unk_0xF9108830F4935563(&cParam0);
	iVar1 = unk_0xF9108830F4935563(&Param4);
	if (iVar0 == iVar1)
	{
		return unk_0x6A7B0D91FD88D9EE(&cParam0, &Param4);
	}
	iVar3 = unk_0x049F77DED8AE0AF4((iVar1 - iVar0));
	if (iVar0 < iVar1)
	{
		cVar4 = { cParam0 };
	}
	else
	{
		cVar4 = { Param4 };
	}
	iVar2 = 0;
	while (iVar2 < (iVar3 / 2))
	{
		StringCopy(&Var8, " ", 16);
		StringConCat(&Var8, &cVar4, 16);
		StringConCat(&Var8, " ", 16);
		cVar4 = { Var8 };
		iVar2++;
	}
	if ((iVar3 % 2) == 1)
	{
		StringConCat(&cVar4, " ", 16);
	}
	if (iVar0 < iVar1)
	{
		return unk_0x6A7B0D91FD88D9EE(&cVar4, &Param4);
	}
	else
	{
		return unk_0x6A7B0D91FD88D9EE(&cVar4, &cParam0);
	}
	return 0;
}

void func_243()
{
	int iVar0;
	
	if (!iLocal_366)
	{
		if (Global_1574127)
		{
			iVar0 = func_148(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_8759 = 1;
			}
			iLocal_366 = 1;
		}
	}
	else if (!Global_1574127)
	{
		iLocal_366 = 0;
	}
}

void func_244()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	if (Global_1574127)
	{
		if (func_71(unk_0xBE369BE1BC57A796(), 0))
		{
			iVar5 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_79;
			if ((iVar5 > -1 && iVar5 < 12) && !iLocal_353[iVar5])
			{
				iVar1 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15;
				iVar2 = func_252(iVar5);
				iVar0 = 0;
				while (iVar0 < func_250(iVar5, -1))
				{
					iVar3 = (iVar0 + iVar2);
					func_249(iVar3, &iVar4, 0);
					if (func_245(iVar3, iVar1, iVar5))
					{
						if (iVar4 > -1)
						{
							unk_0xEB79FECD9022AAF0(&(Global_1320796[iVar4 /*140*/].f_101), 12);
						}
					}
					else if (iVar4 > -1)
					{
						unk_0x21E7933CCC7B3724(&(Global_1320796[iVar4 /*140*/].f_101), 12);
					}
					iVar0++;
				}
				iLocal_353[iVar5] = 1;
			}
		}
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 12)
		{
			if (iLocal_353[iVar5])
			{
				iLocal_353[iVar5] = 0;
			}
			iVar5++;
		}
	}
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 115) && func_248(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_252(iParam2)) >= 0 && (iParam0 - func_252(iParam2)) < Global_1049427[iParam1 /*1942*/].f_33) && iParam0 < 158)
			{
				return 1;
			}
			if (Global_1049427[iParam1 /*1942*/].f_33 == 2 && iParam0 == (10 + func_252(iParam2)))
			{
				return 1;
			}
			if ((Global_1049427[iParam1 /*1942*/].f_33 == 6 && iParam0 >= (10 + func_252(iParam2))) && iParam0 <= (11 + func_252(iParam2)))
			{
				return 1;
			}
			if (Global_1049427[iParam1 /*1942*/].f_33 == 10)
			{
				if (func_247(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_252(iParam2)) && iParam0 <= (12 + func_252(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_252(iParam2)) && iParam0 <= func_246(iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 158;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	return (func_250(iParam0, -1) * iParam0 + 1);
}

int func_247(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_249(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_8796)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1760214[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_250(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_76(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_251(iParam1))
			{
				return 0;
			}
			else if (func_247(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049427[iParam1 /*1942*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049427[iParam1 /*1942*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049427[iParam1 /*1942*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_251(int iParam0)
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

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	return (func_250(iParam0, -1) * iParam0);
}

void func_253()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (unk_0xF7271A9481CAC8E3() && unk_0x82F1A060D8F4583B(joaat("fm_mission_controller")) > 0)
	{
		if (func_258(Global_1633501.f_107548))
		{
			if (!(func_256(unk_0xBE369BE1BC57A796(), 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14)))
			{
				iVar0 = -1;
				if (Global_980320.f_16 <= 7 && Global_980320.f_16 >= 5)
				{
					iVar1 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28;
					iVar2 = 0;
					if (Global_980320.f_16 == 7)
					{
						if (!func_108(&uLocal_6))
						{
							func_255(&uLocal_6, 0, 0);
						}
					}
					if (iVar1 > -1)
					{
						if (Global_980337.f_8[iVar1] < 17)
						{
							iVar2 = 0;
							while (iVar2 <= 59)
							{
								if (unk_0x48B8265059381CD0(Global_1633501.f_81108[iVar1 /*901*/][iVar2 /*15*/].f_5, 2))
								{
									if (Global_1633501.f_81108[iVar1 /*901*/][iVar2 /*15*/].f_9 == Global_980337.f_8[iVar1])
									{
										if (!unk_0x48B8265059381CD0(Global_1633501.f_81108[iVar1 /*901*/][iVar2 /*15*/].f_5, 5))
										{
											iVar0 = iVar2;
										}
										else
										{
											iVar2++;
										}
										if (Global_980320.f_16 == 7)
										{
											if (!func_106(&uLocal_6, 2500, 0))
											{
												if (iVar0 != -1)
												{
													if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
													{
														if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
														{
															Var3 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
															Var6 = { Global_1633501.f_81108[iVar1 /*901*/][iVar0 /*15*/] };
															if (!func_254(Var3, Var6, 1f, 0))
															{
																if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
																{
																	unk_0x5DC8C2F2F8A363C2(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), Var6, 1, 0, 0, 1);
																	unk_0xFAC43F40071FC184(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0f);
																}
															}
														}
													}
												}
											}
										}
										else if (iVar0 != -1)
										{
											if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
											{
												if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
												{
													Var9 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
													Var12 = { Global_1633501.f_81108[iVar1 /*901*/][iVar0 /*15*/] };
													if (!func_254(Var9, Var12, 1f, 0))
													{
														if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
														{
															unk_0x5DC8C2F2F8A363C2(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), Var12, 1, 0, 0, 1);
														}
													}
												}
											}
										}
										Jump @586; //curOff = 574
										iVar0 = -1;
										func_100(&uLocal_6);
										if (Global_980320.f_16 >= 4)
										{
											if (unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(unk_0xBE369BE1BC57A796())))
											{
												iVar15 = 0;
												while (iVar15 <= 3)
												{
													if (Global_2433125.f_2199[iVar15 /*76*/].f_2 != 0)
													{
														if (Global_2433125.f_2199[iVar15 /*76*/].f_1 == 1)
														{
															Global_2433125.f_2199[iVar15 /*76*/].f_2 = 5;
															unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar15 /*76*/].f_67), 0);
														}
													}
													iVar15++;
												}
											}
										}
									}

int func_254(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_255(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xCB150A8B81012128();
		}
		else
		{
			*uParam0 = unk_0x8F8F2E80A7DA4D64();
		}
	}
	else
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
	}
	uParam0->f_1 = 1;
}

bool func_256(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_257(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_257(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_118();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_258(int iParam0)
{
	return iParam0 == 36;
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xF7271A9481CAC8E3() && unk_0x82F1A060D8F4583B(joaat("fm_mission_controller")) > 0)
	{
		if (func_258(Global_1633501.f_107548) && unk_0x48B8265059381CD0(Global_980337.f_1, 19))
		{
			if (!unk_0x48B8265059381CD0(iLocal_5, 0))
			{
				if (!unk_0x48B8265059381CD0(iLocal_5, 2))
				{
					iVar0 = 0;
					while (iVar0 <= 31)
					{
						if (func_256(unk_0x0C36F33B3F746611(iVar0), 0) || unk_0x48B8265059381CD0(Global_1591201[iVar0 /*602*/].f_39.f_18, 14))
						{
							unk_0xEB79FECD9022AAF0(&iLocal_5, 0);
						}
						if (iVar0 == 31)
						{
							unk_0xEB79FECD9022AAF0(&iLocal_5, 2);
						}
						iVar0++;
					}
				}
			}
			else if (!unk_0x48B8265059381CD0(iLocal_5, 1) && unk_0x48B8265059381CD0(Global_980337.f_1, 14))
			{
				iVar3 = 0;
				while (iVar3 <= 31)
				{
					iVar5 = unk_0x0C36F33B3F746611(iVar3);
					if (unk_0x7268A1112372AA44(iVar5) && func_256(iVar5, 0))
					{
						iVar2 = 0;
						iVar1 = 0;
						while (iVar1 <= 3)
						{
							if (!unk_0x9C88EB7B70229335(&(Global_1574738[iVar1 /*16*/])))
							{
								if (unk_0x6A7B0D91FD88D9EE(&(Global_1574738[iVar1 /*16*/]), unk_0x592E5DF66777D40F(iVar5)))
								{
									iVar4 = 0;
									while (iVar4 <= 31)
									{
										if (!func_256(unk_0x0C36F33B3F746611(iVar4), 0) && Global_1591201[iVar4 /*602*/].f_96.f_28 == iVar1)
										{
											iVar5 = unk_0x0C36F33B3F746611(iVar4);
											if (unk_0x7268A1112372AA44(iVar5))
											{
												StringCopy(&(Global_1574738[iVar1 /*16*/]), unk_0x592E5DF66777D40F(iVar5), 64);
											}
											else
											{
												iVar4++;
											}
											if (!unk_0x9C88EB7B70229335(&(Global_1574738[iVar1 /*16*/])) && !unk_0x6A7B0D91FD88D9EE(&(Global_1574738[iVar1 /*16*/]), unk_0x592E5DF66777D40F(iVar5)))
											{
												iVar2++;
											}
											if (iVar2 >= Global_980337.f_6)
											{
												unk_0xEB79FECD9022AAF0(&iLocal_5, 1);
											}
											iVar1++;
											iVar3++;
											Jump @464; //curOff = 458
											iLocal_5 = 0;
										}

void func_260()
{
	if (Global_2482407)
	{
		func_261();
	}
}

void func_261()
{
	if (func_264() || func_263())
	{
		func_262();
	}
}

void func_262()
{
	Global_2443134.f_634 = 1;
}

var func_263()
{
	return Global_2443134.f_613;
}

bool func_264()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_2, 11);
}

void func_265()
{
	var uVar0;
	bool bVar1;
	struct<4> Var2;
	int iVar6;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1);
		if (unk_0x23E9113C762466ED(uVar0) && !unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			StringCopy(&Var2, unk_0xE184AC3A4DAF353D(iVar0), 16);
			iVar6 = unk_0x765F5B806B517045(&Var2);
			if ((!func_81(4) && !func_81(5)) && !iLocal_352 == iVar6)
			{
				if (func_238(Var2, 0, 1))
				{
					bVar1 = true;
				}
				iLocal_352 = iVar6;
			}
			else if (Global_262145.f_17730 == 0)
			{
				bVar1 = true;
			}
		}
	}
	else
	{
		iLocal_352 = 0;
	}
	if (bVar1)
	{
		if (Global_262145.f_17730)
		{
			Global_262145.f_17730 = 0;
		}
	}
	else if (!Global_262145.f_17730)
	{
		Global_262145.f_17730 = 1;
	}
}

void func_266()
{
	if (!Global_4008135 == -1)
	{
		if (!func_81(4) && !func_81(5))
		{
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
			{
				Global_4008135 = -1;
			}
		}
	}
}

void func_267()
{
	int iVar0;
	var uVar1[20];
	int iVar22;
	
	if ((unk_0xBE369BE1BC57A796() != func_17() && func_12(unk_0xBE369BE1BC57A796(), 1, 1)) && Global_1591069 != func_17())
	{
		if (unk_0xBE369BE1BC57A796() == Global_1591069)
		{
			if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 24))
			{
				if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_198, 26))
				{
					if (Global_1312466.f_18 != 0)
					{
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 0, 0);
						}
						else
						{
							iVar22 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar1);
							iVar0 = 0;
							while (iVar0 < iVar22)
							{
								if (unk_0x23E9113C762466ED(uVar1[iVar0]) && unk_0x3983CCB0D958159C(uVar1[iVar0]))
								{
									if (!unk_0xA929B2923D14E2F8(uVar1[iVar0], 0))
									{
										if (unk_0x59499E9FE45DE5D5(uVar1[iVar0]) == joaat("MainRoom"))
										{
											if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
											{
												if (unk_0x59499E9FE45DE5D5(unk_0x17B5CC8A8615737D()) == joaat("MainRoom"))
												{
													if (unk_0xC26429B504BA534D(uVar1[iVar0]))
													{
														if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), uVar1[iVar0], 0) && !unk_0xA929B2923D14E2F8(uVar1[iVar0], 0))
														{
															unk_0xF0F77C99098F999B(uVar1[iVar0], 0, 1);
															unk_0x813865264334331D(&(uVar1[iVar0]));
														}
													}
													else if (unk_0xC38F0FBE1914783C(uVar1[iVar0]))
													{
														unk_0xF0F77C99098F999B(uVar1[iVar0], 0, 1);
													}
												}
											}
										}
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
	}
}

void func_268()
{
	if ((((!unk_0xF7271A9481CAC8E3() && func_273(unk_0xBE369BE1BC57A796())) && !func_26()) && ((func_272() || func_271()) || func_270())) && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_95 == 5)
	{
		func_269(0);
	}
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEB79FECD9022AAF0(&(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_13.f_1), 0);
	}
}

bool func_270()
{
	return unk_0x48B8265059381CD0(Global_2443134, 22);
}

var func_271()
{
	return Global_2443134.f_577;
}

bool func_272()
{
	return unk_0x48B8265059381CD0(Global_2443134, 20);
}

bool func_273(int iParam0)
{
	return func_274(iParam0);
}

bool func_274(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

void func_275()
{
	if (iLocal_346 == 0 || iLocal_347 == 0)
	{
		iLocal_346 = Global_262145.f_17755;
		iLocal_347 = Global_262145.f_17756;
	}
	else if (!iLocal_345)
	{
		if (func_276())
		{
			Global_262145.f_17755 = 9999999;
			Global_262145.f_17756 = 9999999;
			iLocal_345 = 1;
		}
	}
	else if (!func_276())
	{
		Global_262145.f_17755 = iLocal_346;
		Global_262145.f_17756 = iLocal_347;
		iLocal_345 = 0;
	}
}

int func_276()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1);
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x44748DA5CF34DA5E(iVar0, "Not_Allow_As_Saved_Veh"))
			{
				return 1;
			}
			if (unk_0x44748DA5CF34DA5E(iVar0, "MPBitset"))
			{
				iVar1 = unk_0x83CA0CEAC60F17F6(iVar0, "MPBitset");
				if (unk_0x48B8265059381CD0(iVar1, 10) || unk_0x48B8265059381CD0(iVar1, 11))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_277()
{
	if (!unk_0xF7271A9481CAC8E3() && !func_278())
	{
		switch (iLocal_344)
		{
			case 0:
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_95 == 10)
				{
					iLocal_344++;
				}
				break;
			
			case 1:
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_95 == 5)
				{
					if (func_25() == 0)
					{
						unk_0x2C8E2F4CCFAAB00F();
						if (Global_2443905.f_2842.f_18 || Global_2443905.f_2842.f_13 == 3)
						{
							unk_0x98F0FA127445E343(unk_0xDF7CE83326F434E9(unk_0xBE369BE1BC57A796()), 1);
						}
					}
					else
					{
						iLocal_344++;
					}
				}
				break;
		}
	}
	else
	{
		iLocal_344 = 0;
	}
}

bool func_278()
{
	return unk_0x48B8265059381CD0(Global_970912.f_8, 8);
}

void func_279()
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if ((unk_0x23E9113C762466ED(iVar0) && !unk_0xA929B2923D14E2F8(iVar0, 0)) && unk_0x0324EEB10F81965F(iVar0) == joaat("voltic2"))
		{
			if (!iVar0 == iLocal_340)
			{
				if (unk_0x34D7B5822CF22910("Player_Vehicle", 3) && unk_0x44748DA5CF34DA5E(iVar0, "Player_Vehicle"))
				{
					unk_0x376FF5679D8E1299(iVar0, Global_262145.f_17259);
					iLocal_340 = iVar0;
				}
			}
			if (!iVar0 == iLocal_341)
			{
				unk_0xF12C9A582B0A7CE5(iVar0, 1);
				iLocal_341 = iVar0;
			}
		}
	}
	else
	{
		if (!iLocal_340 == -1)
		{
			iLocal_340 = -1;
		}
		if (!iLocal_341 == -1)
		{
			iLocal_341 = -1;
		}
	}
}

void func_280()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (func_81(4))
	{
		if (!iLocal_339)
		{
			if (func_282())
			{
				if (!Global_262145.f_8759)
				{
					if (!iLocal_338)
					{
						Global_262145.f_8759 = 1;
						iLocal_338 = 1;
					}
				}
			}
			iLocal_339 = 1;
		}
	}
	else
	{
		if (iLocal_338)
		{
			Global_262145.f_8759 = 0;
			iLocal_338 = 0;
		}
		iLocal_339 = 0;
	}
	if (Global_2453022.f_1 == 2)
	{
		if (Global_2453022 == 0)
		{
			Global_2453022 = 1;
		}
		bVar1 = false;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2453022.f_2[iVar0] == 1)
			{
				iVar0 = 32;
				bVar1 = true;
			}
			iVar0++;
		}
		if (bVar1)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				Global_2453022.f_2[iVar0] = 1;
				iVar0++;
			}
		}
	}
	if (Global_2443905.f_3711 == 3 || Global_2443905.f_3711 == 4)
	{
		iVar2 = 127;
		uVar3 = unk_0xFEDFCE97371B9236(Global_2443905.f_3712, 5f, Global_2443905.f_3272.f_66, iVar2);
		if (unk_0x23E9113C762466ED(uVar3) && !unk_0xA929B2923D14E2F8(iVar3, 0))
		{
			func_281(iVar3);
		}
	}
}

void func_281(int iParam0)
{
	if (!unk_0x44748DA5CF34DA5E(uParam0, "Player_Vehicle"))
	{
		if (unk_0x04DB71A22837F85C(iParam0))
		{
			if (!unk_0x44748DA5CF34DA5E(iParam0, "Not_Allow_As_Saved_Veh"))
			{
				if (!unk_0xC38F0FBE1914783C(iParam0))
				{
					unk_0xE647AA9998A1123E(iParam0);
				}
				else
				{
					unk_0x25E9B908B35A0675(iParam0, "Not_Allow_As_Saved_Veh", 1);
				}
			}
		}
	}
}

int func_282()
{
	var uVar0;
	struct<4> Var1;
	int iVar5;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if ((unk_0x23E9113C762466ED(uVar0) && unk_0x45CD66F0A131E554(iVar0, 0)) && !unk_0x44748DA5CF34DA5E(iVar0, "Player_Vehicle"))
		{
			if (Global_98614)
			{
				StringCopy(&Var1, unk_0xE184AC3A4DAF353D(iVar0), 16);
				iVar5 = 0;
				while (iVar5 < 30)
				{
					if (Global_98568[iVar5])
					{
						if (func_242(Var1, Global_98447[iVar5 /*4*/]))
						{
							return 1;
						}
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_283()
{
	Global_1320165[8] = joaat("buccaneer");
	Global_1320165[9] = joaat("manana");
	Global_1320165[10] = joaat("peyote");
	Global_1320165[11] = joaat("tornado");
	Global_1320165[12] = joaat("tornado2");
	Global_1320165[13] = joaat("sentinel2");
}

void func_284()
{
	int iVar0;
	
	if (func_286(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0) && func_285(0))
	{
		if (!iLocal_336)
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (Global_1574324.f_15[iVar0] == -1 && (Global_262145.f_5375[iVar0] == 129 || Global_262145.f_5375[iVar0] == 202))
				{
					iLocal_328[iVar0] = Global_262145.f_5375[iVar0];
					Global_262145.f_5375[iVar0] = -1;
					iLocal_336 = 1;
				}
				else
				{
					iLocal_328[iVar0] = -1;
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_336)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (iLocal_328[iVar0] != -1)
			{
				Global_262145.f_5375[iVar0] = iLocal_328[iVar0];
			}
			iLocal_328[iVar0] = -1;
			iVar0++;
		}
		iLocal_336 = 0;
	}
}

int func_285(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_286(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1591201[iParam0 /*602*/].f_258.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
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
		if (func_290(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_289(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_287(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_288(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_288(int iParam0)
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
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
			return 3;
			break;
	}
	return -1;
}

int func_289(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_288(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_290(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_288(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_291()
{
	bool bVar0;
	struct<6> Var1;
	
	if (func_310() == 4)
	{
		if (!func_108(&uLocal_326))
		{
			func_107(&uLocal_326, 0, 0);
		}
		else if (func_106(&uLocal_326, 500, 0))
		{
			if ((!func_309() && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_95 != 8) && !func_26())
			{
				Var1 = { func_308() };
				if (!unk_0x9C88EB7B70229335(&Var1) && func_306(Var1))
				{
					func_304();
					func_302(func_303());
					func_301();
					if (!unk_0x9C88EB7B70229335(&Var1))
					{
						func_299(&Var1);
						func_298();
						func_296(func_297());
					}
					func_295();
					func_294();
					func_293();
					func_292();
					Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_95 = 8;
				}
				else
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_108(&uLocal_326))
		{
			func_100(&uLocal_326);
		}
	}
}

void func_292()
{
	Global_2443134.f_7 = 0;
}

void func_293()
{
	Global_2443134.f_25 = 0;
}

void func_294()
{
	unk_0x21E7933CCC7B3724(&(Global_2443134.f_2), 14);
}

void func_295()
{
	unk_0xEB79FECD9022AAF0(&Global_2443134, 7);
}

void func_296(var uParam0)
{
	Global_2443134.f_28 = uParam0;
}

var func_297()
{
	return Global_2443134.f_7;
}

void func_298()
{
	char* sVar0;
	
	StringCopy(&(Global_2443134.f_13), sVar0, 24);
}

void func_299(char* sParam0)
{
	StringCopy(&(Global_2443134.f_737), sParam0, 24);
	if (func_300())
	{
		StringCopy(&(Global_970912.f_42), sParam0, 24);
	}
}

bool func_300()
{
	return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2808, 5);
}

void func_301()
{
	Global_2443134.f_6 = -2;
}

void func_302(var uParam0)
{
	Global_2443134.f_5 = uParam0;
}

var func_303()
{
	return Global_2443134.f_6;
}

void func_304()
{
	unk_0xEB79FECD9022AAF0(&Global_2443134, 5);
	func_305();
}

void func_305()
{
	unk_0xEB79FECD9022AAF0(&Global_2443134, 8);
}

int func_306(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1118)
	{
		if (Global_794643.f_4[iVar0 /*88*/].f_65 == 2 && func_307(Global_794643.f_98389[iVar0 /*13*/].f_1))
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_794643.f_4[iVar0 /*88*/]), &uParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (Global_262145.f_5375[iVar1] == 223)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5068[iVar1 /*21*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

struct<6> func_308()
{
	return Global_2443134.f_13;
}

bool func_309()
{
	return unk_0x48B8265059381CD0(Global_2443134, 5);
}

int func_310()
{
	return Global_979732;
}

void func_311()
{
	if (unk_0xF7271A9481CAC8E3() && unk_0x82F1A060D8F4583B(joaat("fm_mission_controller")) > 0)
	{
		if (func_258(Global_1633501.f_107548) && func_256(unk_0xBE369BE1BC57A796(), 0))
		{
			if (Global_980320.f_1 == 9)
			{
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 < 4 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 != -1)
				{
					iLocal_4 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28;
					Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 = 8;
				}
			}
			else if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 > 4 || Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 == -1)
			{
				if (iLocal_4 > -1 && iLocal_4 < 4)
				{
					Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 = iLocal_4;
				}
				else
				{
					Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 = 0;
				}
			}
		}
	}
	else if (Global_980320.f_1 != 0)
	{
		Global_980320.f_1 = 0;
	}
}

void func_312()
{
	int iVar0;
	
	if (unk_0xEF4E5E47AF0D4480())
	{
		iVar0 = 0;
		while (iVar0 < Global_1591201)
		{
			unk_0xEB79FECD9022AAF0(&(Global_1591201[iVar0 /*602*/].f_498), 1);
			iVar0++;
		}
	}
}

void func_313()
{
	if (Global_262145.f_8843 != 60)
	{
		Global_262145.f_8843 = 60;
	}
}

void func_314()
{
	if (func_316() && Global_2443905.f_5870 != 0)
	{
		if (!unk_0xF7271A9481CAC8E3())
		{
			if (func_109() > 1)
			{
				func_315();
			}
		}
	}
}

void func_315()
{
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 0))
	{
		unk_0xE6A366D0E2B7DE39("hei_carrier");
		unk_0xE6A366D0E2B7DE39("hei_Carrier_int1");
		unk_0xE6A366D0E2B7DE39("hei_Carrier_int2");
		unk_0xE6A366D0E2B7DE39("hei_Carrier_int3");
		unk_0xE6A366D0E2B7DE39("hei_Carrier_int4");
		unk_0xE6A366D0E2B7DE39("hei_Carrier_int5");
		unk_0xE6A366D0E2B7DE39("hei_Carrier_int6");
		unk_0xE6A366D0E2B7DE39("hei_carrier_DistantLights");
		unk_0xE6A366D0E2B7DE39("hei_carrier_LODLights");
		unk_0xD68AE97C94873C2B("AZL_HEI_AIRCRAFT_CARRIER", 0, 1);
	}
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 1))
	{
		unk_0xE6A366D0E2B7DE39("CJ_IOABoat");
	}
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 2))
	{
		unk_0xE6A366D0E2B7DE39("smboat");
	}
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 3))
	{
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist");
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_enginrm");
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_Lounge");
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_Bridge");
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_Bar");
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_Bedrm");
		unk_0xD68AE97C94873C2B("AZL_DLC_HEI_MILO_YACHT_ZONES", 0, 1);
	}
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 5))
	{
		unk_0xE6A366D0E2B7DE39("lr_cs6_08_grave_open");
		unk_0x059B8D797D20327B("lr_cs6_08_grave_closed");
	}
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 6))
	{
		unk_0xE6A366D0E2B7DE39("CS1_02_cf_onmission1");
		unk_0xE6A366D0E2B7DE39("CS1_02_cf_onmission2");
		unk_0xE6A366D0E2B7DE39("CS1_02_cf_onmission3");
		unk_0xE6A366D0E2B7DE39("CS1_02_cf_onmission4");
	}
	if (unk_0x48B8265059381CD0(Global_2443905.f_5870, 4))
	{
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_DistantLights");
		unk_0xE6A366D0E2B7DE39("hei_yacht_heist_LODLights");
	}
	Global_2443905.f_5870 = 0;
}

var func_316()
{
	return Global_2443134.f_10;
}

void func_317()
{
	if (Global_1741468 && !func_47())
	{
		Global_1741468 = 0;
	}
	if (unk_0xF7271A9481CAC8E3() && Global_1741468 == 0)
	{
		if (!Global_262145.f_17815)
		{
			Global_262145.f_17815 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 0);
		}
		if (!Global_262145.f_17816)
		{
			Global_262145.f_17816 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 1);
		}
		if (!Global_262145.f_17817)
		{
			Global_262145.f_17817 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 2);
		}
		if (!Global_262145.f_17818)
		{
			Global_262145.f_17818 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 3);
		}
		if (!Global_262145.f_17814)
		{
			Global_262145.f_17814 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 4);
		}
		if (!Global_262145.f_17819)
		{
			Global_262145.f_17819 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 5);
		}
		if (!Global_262145.f_17820)
		{
			Global_262145.f_17820 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 6);
		}
		if (!Global_262145.f_17821)
		{
			Global_262145.f_17821 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 7);
		}
		if (!Global_262145.f_17822)
		{
			Global_262145.f_17822 = 1;
			unk_0xEB79FECD9022AAF0(&iLocal_3, 8);
		}
	}
	else if (iLocal_3 != 0)
	{
		if (Global_262145.f_17815 && unk_0x48B8265059381CD0(iLocal_3, 0))
		{
			Global_262145.f_17815 = 0;
		}
		if (Global_262145.f_17816 && unk_0x48B8265059381CD0(iLocal_3, 1))
		{
			Global_262145.f_17816 = 0;
		}
		if (Global_262145.f_17817 && unk_0x48B8265059381CD0(iLocal_3, 2))
		{
			Global_262145.f_17817 = 0;
		}
		if (Global_262145.f_17818 && unk_0x48B8265059381CD0(iLocal_3, 3))
		{
			Global_262145.f_17818 = 0;
		}
		if (Global_262145.f_17814 && unk_0x48B8265059381CD0(iLocal_3, 4))
		{
			Global_262145.f_17814 = 0;
		}
		if (Global_262145.f_17819 && unk_0x48B8265059381CD0(iLocal_3, 5))
		{
			Global_262145.f_17819 = 0;
		}
		if (Global_262145.f_17820 && unk_0x48B8265059381CD0(iLocal_3, 6))
		{
			Global_262145.f_17820 = 0;
		}
		if (Global_262145.f_17821 && unk_0x48B8265059381CD0(iLocal_3, 7))
		{
			Global_262145.f_17821 = 0;
		}
		if (Global_262145.f_17822 && unk_0x48B8265059381CD0(iLocal_3, 8))
		{
			Global_262145.f_17822 = 0;
		}
		iLocal_3 = 0;
	}
}

void func_318(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x169EAB5A8FBE845B(sParam2);
	unk_0xE124F0A8E5E81191(sParam3);
	unk_0x30122BDF124C9221(fParam0, fParam1, 0);
}

void func_319()
{
	if (!bLocal_1)
	{
		if (unk_0x95DBE123BC2DB80B())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x4B972043966C2EB8(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x4B972043966C2EB8(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x4B972043966C2EB8(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x4B972043966C2EB8(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x4B972043966C2EB8(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x95DBE123BC2DB80B())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x4B972043966C2EB8(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x4B972043966C2EB8(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x4B972043966C2EB8(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x4B972043966C2EB8(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x4B972043966C2EB8(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_320()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

void func_321()
{
	func_322();
	func_124();
	func_123();
}

void func_322()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_390[iVar0 /*3*/] = func_17();
		iVar0++;
	}
}


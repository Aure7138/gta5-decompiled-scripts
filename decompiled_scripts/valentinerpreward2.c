#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 40;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	float fLocal_99 = 0f;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	struct<4> Local_103[32];
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	struct<2> Local_234[32];
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	struct<2> Local_303 = { 0, 0 } ;
	var uLocal_305 = 0;
	var uLocal_306 = 4;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 4;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	struct<18> Local_323 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	var uLocal_370 = 0;
	int iLocal_371 = 0;
	float fLocal_372 = 0f;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	bool bLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	var uLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_551 = 0;
	float fLocal_552 = 0f;
	var uLocal_553[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_563[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.37.37";
	iLocal_55 = -1;
	iLocal_67 = -1;
	iLocal_90 = -1;
	fLocal_99 = 9999.9f;
	iLocal_343 = -1;
	iLocal_344 = -1;
	iLocal_346 = 1;
	iLocal_359 = 1;
	iLocal_360 = -1;
	iLocal_362 = -1;
	fLocal_372 = 0f;
	iLocal_375 = -1;
	fLocal_552 = -5f;
	unk_0x7E85CEE862B85A74(0);
	unk_0xE3074BC832716971();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318160 = unk_0x6D9FF4C899CD785F(sLocal_0);
	iVar0 = unk_0x84A97C70FFDEC0C8() + 10000;
	while (unk_0x84A97C70FFDEC0C8() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_397())
		{
			func_396();
			if (bLocal_1)
			{
				unk_0x3B71612DD3973D97(0f, 0.23f);
				unk_0xDABBD2E6CAD829E1(255, 255, 255, 255);
				func_395(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x1995B52453EF6537())
		{
			func_394();
			func_393();
			func_391();
			func_388();
			func_384();
			func_382();
			func_381();
			func_362();
			func_355();
			func_354();
			func_353();
			func_351();
			func_350();
			func_345();
			func_343();
			func_341();
			func_329();
			func_319();
			func_318();
			func_317();
			func_313();
			func_308();
			func_301();
			func_291();
			func_288();
			func_287();
			func_284();
			func_281();
			func_280();
			func_153();
			func_133();
			func_132();
			func_131();
			func_116();
			func_113();
			func_111();
			func_109();
			func_97();
			func_96();
			func_95();
			func_78();
			func_73();
			func_69();
			func_62();
			func_61();
			func_58();
			func_44();
			func_41();
			func_40();
			func_36();
			func_31();
			func_30();
			func_24();
			func_20();
			func_16();
			func_15();
			func_14();
		}
		else
		{
			if (iLocal_300)
			{
				func_11(1);
				iLocal_300 = 0;
			}
			func_10();
			iLocal_375 = -1;
			iLocal_391 = 0;
			iLocal_392 = 0;
			iLocal_393 = 0;
			iLocal_394 = 0;
			iLocal_397 = 0;
			iLocal_398 = 0;
			iLocal_395 = 0;
			iLocal_396 = 0;
		}
		func_8();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x01DFCA3621B68C4A();
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (func_7() || func_6())
	{
		if (func_5())
		{
			if (!iLocal_399)
			{
				if (Global_1632166.f_43047 > 0)
				{
					iVar0 = iLocal_551;
					while (iVar0 <= 149)
					{
						if (iLocal_400[iVar0] != 5)
						{
							if (!func_4(Global_1632166.f_43048[iVar0 /*59*/]))
							{
								if (!unk_0x7887B64A08364778(uLocal_563[iVar0]))
								{
									uLocal_563[iVar0] = unk_0xF21B698F4FCCA3D3(Global_1632166.f_43048[iVar0 /*59*/].f_7, Global_1632166.f_43048[iVar0 /*59*/], 0, 0, 1);
									unk_0xB5024B946329EB6A(uLocal_563[iVar0], 0, 0);
									unk_0x01976E3C7B2E5437(uLocal_563[iVar0], 0, 0);
									unk_0x0033076C5BC6D1E9(uLocal_563[iVar0], Global_1632166.f_43048[iVar0 /*59*/].f_3, 2, 1);
								}
								if (unk_0x7887B64A08364778(uLocal_563[iVar0]))
								{
									switch (iLocal_400[iVar0])
									{
										case 0:
											if (func_3(iVar0))
											{
												iLocal_400[iVar0] = 1;
												iLocal_551 = iVar0;
												Jump @509; //curOff = 289
											}
											else
											{
												iLocal_400[iVar0] = 5;
											}
											break;
										
										case 1:
										case 2:
										case 3:
											iLocal_400[iVar0]++;
											iLocal_551 = iVar0;
											Jump @509; //curOff = 327
											break;
										
										case 4:
											if (func_2())
											{
												iLocal_400[iVar0] = 5;
											}
											else if (func_6())
											{
												Global_1632166.f_43048[iVar0 /*59*/].f_7 = joaat("prop_ld_test_01");
												Global_1632166.f_43048[iVar0 /*59*/].f_3 = { 0f, 0f, 0f };
												iLocal_400[iVar0] = 5;
											}
											else
											{
												Global_1632166.f_43048[iVar0 /*59*/].f_2 = 1000f;
												iLocal_400[iVar0] = 5;
											}
											iLocal_551 = 0;
											break;
										}
								}
							}
							else
							{
								iLocal_400[iVar0] = 5;
							}
						}
						else
						{
							if (unk_0x7887B64A08364778(uLocal_563[iVar0]))
							{
								unk_0x77CEDAB7C44BFD4E(&(uLocal_563[iVar0]));
							}
							iVar1++;
							if (iVar1 == 150)
							{
								iLocal_399 = 1;
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (iLocal_399)
	{
		iLocal_399 = 0;
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (unk_0x7887B64A08364778(uLocal_553[iVar0]))
			{
				unk_0xAA8D7DFFDAAB903E(&(uLocal_553[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 149)
		{
			iLocal_400[iVar0] = 0;
			if (unk_0x7887B64A08364778(uLocal_563[iVar0]))
			{
				unk_0x77CEDAB7C44BFD4E(&(uLocal_563[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3ACA21A90E0A949C(uLocal_553[8]))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (unk_0x3ACA21A90E0A949C(uLocal_553[iVar0]))
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

int func_3(int iParam0)
{
	struct<3> Var0[8];
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	int iVar34;
	int iVar35;
	
	if (unk_0x7887B64A08364778(uLocal_563[iParam0]))
	{
		unk_0xB1C5AB29009DDB95(Global_1632166.f_43048[iParam0 /*59*/].f_7, &Var25, &Var28);
		Var31 = { Var28 - Var25 };
		Var31.f_0 = (Var31.f_0 / 2f);
		Var31.f_1 = (Var31.f_1 / 2f);
		Var0[0 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], -Var31.f_0, -Var31.f_1, -Var31.f_2) };
		Var0[1 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], -Var31.f_0, Var31.f_1, -Var31.f_2) };
		Var0[2 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], Var31.f_0, Var31.f_1, -Var31.f_2) };
		Var0[3 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], Var31.f_0, -Var31.f_1, -Var31.f_2) };
		Var0[4 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], -Var31.f_0, -Var31.f_1, Var31.f_2) };
		Var0[5 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], -Var31.f_0, Var31.f_1, Var31.f_2) };
		Var0[6 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], Var31.f_0, Var31.f_1, Var31.f_2) };
		Var0[7 /*3*/] = { unk_0x7E140C583F91AE2B(uLocal_563[iParam0], Var31.f_0, -Var31.f_1, Var31.f_2) };
	}
	iVar34 = 0;
	while (iVar34 <= 7)
	{
		if (Var0[iVar34 /*3*/].f_2 < fLocal_552)
		{
			iVar35++;
		}
		unk_0xBB9A2DB94A862D7A(uLocal_553[iVar34], Var0[iVar34 /*3*/], 1, 0, 0, 1);
		iVar34++;
	}
	if (iVar35 == 8)
	{
		unk_0xBB9A2DB94A862D7A(uLocal_553[8], Global_1632166.f_43048[iParam0 /*59*/], 1, 0, 0, 1);
		return 1;
	}
	return 0;
}

int func_4(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (unk_0x7887B64A08364778(uLocal_553[iVar0]))
		{
			iVar1++;
		}
		else
		{
			uLocal_553[iVar0] = unk_0xDE8A46A23FDCBBFE(joaat("ninef2"), 100f, 100f, 100f, 0, 1, 1);
			unk_0xB5024B946329EB6A(uLocal_553[iVar0], 0, 0);
			unk_0x01976E3C7B2E5437(uLocal_553[iVar0], 0, 0);
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if ((unk_0xAB964FCFAC3C767A(joaat("fm_mission_controller")) != 0 || unk_0xAB964FCFAC3C767A(joaat("fm_race_controler")) != 0) || unk_0xAB964FCFAC3C767A(joaat("fm_deathmatch_controler")) != 0)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	if (((unk_0xAB964FCFAC3C767A(joaat("fm_race_creator")) != 0 || unk_0xAB964FCFAC3C767A(joaat("fm_deathmatch_creator")) != 0) || unk_0xAB964FCFAC3C767A(joaat("fm_lts_creator")) != 0) || unk_0xAB964FCFAC3C767A(joaat("fm_capture_creator")) != 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if ((unk_0xAB964FCFAC3C767A(joaat("fm_race_creator")) != 0 || unk_0xAB964FCFAC3C767A(joaat("creator")) != 0) || func_9() == 2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[39]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[39]), 8);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[40]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[40]), 8);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[41]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[41]), 8);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[42]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[42]), 8);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[43]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[43]), 8);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[44]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[44]), 8);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[45]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[45]), 8);
		iLocal_384 = 1;
	}
	else if (iLocal_384)
	{
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[39]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[39]), 8);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[40]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[40]), 8);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[41]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[41]), 8);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[42]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[42]), 8);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[43]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[43]), 8);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[44]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[44]), 8);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[45]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[45]), 8);
		iLocal_384 = 0;
	}
}

int func_9()
{
	return Global_25185;
}

void func_10()
{
	if (iLocal_371)
	{
		iLocal_371 = 0;
	}
	if (fLocal_372 != 0f)
	{
		fLocal_372 = 0f;
	}
}

void func_11(bool bParam0)
{
	int iVar0;
	
	iLocal_232 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_13(&(Local_234[iVar0 /*2*/]));
		if (bParam0)
		{
			Local_103[iVar0 /*4*/] = func_12();
			Local_103[iVar0 /*4*/].f_2 = -1;
		}
		iVar0++;
	}
	iLocal_299 = 0;
}

int func_12()
{
	return -1;
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_14()
{
	if (Global_1589609.f_23 > 0 && unk_0xAB964FCFAC3C767A(joaat("am_mp_property_ext")) <= 0)
	{
		Global_1589609.f_23 = -1;
	}
}

void func_15()
{
	int iVar0;
	
	if ((Global_950886 != iLocal_391 || Global_950886.f_1 != iLocal_392) || Global_950886.f_4 != iLocal_395)
	{
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (Global_950886.f_5[iVar0 /*88*/].f_56.f_2 < 0f)
			{
				unk_0x4EA098C870B73AB7(&(Global_950886.f_5[iVar0 /*88*/].f_76), 13);
				StringCopy(&(Global_950886.f_5[iVar0 /*88*/]), "", 24);
				Global_950886.f_5[iVar0 /*88*/].f_65 = -1;
				StringCopy(&(Global_950886.f_5[iVar0 /*88*/].f_22), "", 64);
				Global_950886.f_5[iVar0 /*88*/].f_56 = { 0f, 0f, 0f };
			}
			iVar0++;
		}
		iLocal_391 = Global_950886;
		iLocal_392 = Global_950886.f_1;
		iLocal_395 = Global_950886.f_4;
	}
	if (Global_961946 != iLocal_393 || Global_961946.f_1 != iLocal_394)
	{
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (Global_961946.f_5[iVar0 /*88*/].f_56.f_2 < 0f)
			{
				unk_0x4EA098C870B73AB7(&(Global_961946.f_5[iVar0 /*88*/].f_76), 13);
				StringCopy(&(Global_961946.f_5[iVar0 /*88*/]), "", 24);
				Global_961946.f_5[iVar0 /*88*/].f_65 = -1;
				StringCopy(&(Global_961946.f_5[iVar0 /*88*/].f_22), "", 64);
				Global_961946.f_5[iVar0 /*88*/].f_56 = { 0f, 0f, 0f };
			}
			iVar0++;
		}
		iLocal_393 = Global_961946;
		iLocal_394 = Global_961946.f_1;
	}
	if (Global_956416 != iLocal_397 || Global_956416.f_1 != iLocal_398)
	{
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (Global_956416.f_5[iVar0 /*88*/].f_56.f_2 < 0f)
			{
				unk_0x4EA098C870B73AB7(&(Global_956416.f_5[iVar0 /*88*/].f_76), 13);
				StringCopy(&(Global_956416.f_5[iVar0 /*88*/]), "", 24);
				Global_956416.f_5[iVar0 /*88*/].f_65 = -1;
				StringCopy(&(Global_956416.f_5[iVar0 /*88*/].f_22), "", 64);
				Global_956416.f_5[iVar0 /*88*/].f_56 = { 0f, 0f, 0f };
			}
			iVar0++;
		}
		iLocal_397 = Global_956416;
		iLocal_398 = Global_956416.f_1;
	}
	if (Global_967476 != iLocal_396)
	{
		iVar0 = 0;
		while (iVar0 < 31)
		{
			if (Global_967476.f_33[iVar0 /*88*/].f_56.f_2 < 0f)
			{
				unk_0x4EA098C870B73AB7(&(Global_967476.f_33[iVar0 /*88*/].f_76), 13);
				Global_967476.f_33[iVar0 /*88*/].f_65 = -1;
				StringCopy(&(Global_967476.f_33[iVar0 /*88*/]), "", 24);
				StringCopy(&(Global_967476.f_33[iVar0 /*88*/].f_22), "", 64);
				Global_967476.f_33[iVar0 /*88*/].f_56 = { 0f, 0f, 0f };
			}
			iVar0++;
		}
		iLocal_396 = Global_967476;
	}
}

void func_16()
{
	if (func_19())
	{
		if (func_18())
		{
			if (unk_0xFB6B3EEFAB2DD12C() != -1)
			{
				if (Global_2440032[6] != 1 || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_59[6] != 1)
				{
					Global_2440032[6] = 1;
					Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_59[6] = 1;
					func_17(168);
				}
			}
		}
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 == 0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2443860.f_1.f_2812), iVar1);
	}
	else if (iVar0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2443860.f_1.f_2813), iVar1);
	}
	else if (iVar0 == 2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2443860.f_1.f_2814), iVar1);
	}
	else if (iVar0 == 3)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2443860.f_1.f_2815), iVar1);
	}
	else if (iVar0 == 4)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2443860.f_1.f_2816), iVar1);
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_2443860.f_1.f_2817), iVar1);
	}
}

bool func_18()
{
	return ((Global_1632166.f_40140 == 6 || Global_1632166.f_40140 == 7) || unk_0xF44A5E894FE76438(Global_1632166.f_13, 7));
}

bool func_19()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

void func_20()
{
	if (unk_0x8676DE83D4396C39() && Global_979732 == 38)
	{
		if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 14 || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 15)
		{
			unk_0x48D309C2253DDEBB(0, 0, 0);
		}
	}
	if (unk_0x8676DE83D4396C39())
	{
		if (!Global_262145.f_15716)
		{
			Global_262145.f_15716 = 1;
			iLocal_389 = 1;
		}
		if (!Global_262145.f_15717)
		{
			Global_262145.f_15717 = 1;
			iLocal_390 = 1;
		}
		if (((Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 2 || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 14) || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 15) || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 1)
		{
			Global_1756328 = 1;
			iLocal_388 = 1;
			if (!Global_1756328)
			{
			}
			if (!func_23(0) && !bLocal_382)
			{
				func_22(0);
				iLocal_383 = 1;
			}
		}
	}
	else
	{
		if (Global_262145.f_15716 && iLocal_389)
		{
			Global_262145.f_15716 = 0;
			iLocal_389 = 0;
		}
		if (Global_262145.f_15717 && iLocal_390)
		{
			Global_262145.f_15717 = 0;
			iLocal_390 = 0;
		}
		if (iLocal_388 && Global_1756328)
		{
			Global_1756328 = 0;
		}
		if ((iLocal_383 && func_23(0)) && !bLocal_382)
		{
			func_21(0);
			iLocal_383 = 0;
		}
	}
}

void func_21(int iParam0)
{
	unk_0x4EA098C870B73AB7(&Global_1573332, iParam0);
}

void func_22(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&Global_1573332, iParam0);
}

bool func_23(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1573332, iParam0);
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	int iVar11;
	
	if (Global_1315157)
	{
		iLocal_385 = 0;
		iLocal_386 = 0;
	}
	if (unk_0x8676DE83D4396C39() && unk_0xAB964FCFAC3C767A(joaat("fm_mission_controller")) != 0)
	{
		if (Global_1632166.f_105262 == 17)
		{
			if (!unk_0xF44A5E894FE76438(Global_980318.f_14, 22) && !func_25(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (iLocal_385 == 0)
				{
					if (Global_980318.f_1 == 9)
					{
						iVar1 = unk_0xFB6B3EEFAB2DD12C();
						iVar2 = 0;
						iVar3 = 0;
						iVar0 = 0;
						while (iVar0 < 32)
						{
							iVar4 = iVar0;
							if (unk_0x1E0256D6F1052B31(iVar4))
							{
								if (!func_25(iVar4))
								{
									iVar2++;
									if (iVar0 < iVar1)
									{
										iVar3++;
									}
								}
							}
							iVar0++;
						}
						if (iVar2 > 0)
						{
							if (iVar1 < iVar2)
							{
								iLocal_385 = 1;
							}
						}
						iVar5 = unk_0xD5A676B97920D126();
						iVar6 = unk_0x722BCBA6950595C0(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 5f, joaat("prop_money_bag_01"), 0, 0, 0);
						if (unk_0x7887B64A08364778(iVar6) && (unk_0xB77CD66F1DCC743D(iVar6, iVar5) || unk_0xB77CD66F1DCC743D(iVar5, iVar6)))
						{
							iLocal_385 = 1;
						}
						if (iLocal_385 == 0)
						{
							Var8 = { Global_1632166.f_91[0 /*8128*/].f_967[0 /*28*/].f_3 + Global_1632166.f_91[0 /*8128*/].f_967[0 /*28*/].f_6 * Vector(0.5f, 0.5f, 0.5f) };
							Var8.f_0 = (Var8.f_0 + IntToFloat(iVar3 * 2));
							if (unk_0x87AA1B4BA52B1360(Var8, &uVar7, 0))
							{
								Var8.f_2 = uVar7;
							}
							iVar11 = unk_0x722BCBA6950595C0(Var8, 20f, joaat("prop_money_bag_01"), 0, 0, 0);
							if (unk_0x7887B64A08364778(iVar11))
							{
								if (iLocal_386 == 0)
								{
									uLocal_387 = unk_0x7414B386C0020BEC();
									iLocal_386 = 1;
								}
								else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_387) > 2000)
								{
									if (!unk_0xE5C2BF941108FCCE(iVar11))
									{
										if (unk_0x4A478FA962FF575A(iVar11))
										{
											unk_0x5EBA9610960911F5(iVar11, unk_0xD5A676B97920D126());
											iLocal_385 = 1;
										}
										else
										{
											unk_0xF78A199036560454(iVar11);
										}
									}
								}
								else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_387) > 10000)
								{
									unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), unk_0xC086F8D75730FA3A(iVar11, 1) + Vector(1f, 0f, 0f), 1, 0, 0, 1);
									iLocal_385 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_385 = 0;
		iLocal_386 = 0;
	}
}

int func_25(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_29()
{
	return Global_1312731;
}

void func_30()
{
	if ((Global_1632166.f_86360 == Global_262145.f_7381 || Global_1632166.f_86360 == Global_262145.f_7374) && unk_0x8676DE83D4396C39())
	{
		if (!func_23(0) && !iLocal_383)
		{
			func_22(0);
			bLocal_382 = true;
		}
	}
	else if ((bLocal_382 && !iLocal_383) && func_23(0))
	{
		func_21(0);
		bLocal_382 = false;
	}
}

void func_31()
{
	if (unk_0xAB964FCFAC3C767A(joaat("fm_hideout_controler")) > 0)
	{
		if (func_32())
		{
			Global_2433082.f_2 = 1;
			iLocal_381 = 1;
		}
	}
	else if (iLocal_381)
	{
		iLocal_381 = 0;
		Global_2433082.f_2 = 0;
	}
}

int func_32()
{
	if ((func_35(unk_0xFB6B3EEFAB2DD12C()) || func_34(unk_0xFB6B3EEFAB2DD12C(), 21)) || Global_2494149.f_4710.f_29 == 3)
	{
		if (((((func_33(unk_0xFB6B3EEFAB2DD12C()) == 140 || func_33(unk_0xFB6B3EEFAB2DD12C()) == 139) || func_33(unk_0xFB6B3EEFAB2DD12C()) == 131) || func_33(unk_0xFB6B3EEFAB2DD12C()) == 141) || func_33(unk_0xFB6B3EEFAB2DD12C()) == 146) || func_33(unk_0xFB6B3EEFAB2DD12C()) == 138)
		{
			if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 3) && !unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 7))
			{
				return 0;
			}
		}
		if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 8) || Global_2494149.f_4710.f_29 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/];
	}
	return -1;
}

bool func_34(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_36()
{
	if (Global_2454636 == 1)
	{
		if (Global_1312462.f_18 == 0)
		{
			if (Global_1315229 == 0)
			{
				if (unk_0xF35D072F1A7DC0A4() == 0)
				{
					if (func_39() == 0)
					{
						if (unk_0x8676DE83D4396C39() == 0)
						{
							if (func_38() == 0)
							{
								if (func_19() == 0)
								{
									if (func_37(unk_0x06AAD55E71D6A75E()) == 0)
									{
										unk_0x48D309C2253DDEBB(0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_37(int iParam0)
{
	if (unk_0x2D337DD29A7ABD30() == 0)
	{
		if ((iParam0 == unk_0xBC409772C72D8108() || (iParam0 < 2 && unk_0xBC409772C72D8108() < 2)) || (iParam0 >= 2 && unk_0xBC409772C72D8108() >= 2))
		{
			return 1;
		}
	}
	else if ((iParam0 == unk_0x07081CD0505DE875() || (iParam0 < 2 && unk_0x07081CD0505DE875() < 2)) || (iParam0 >= 2 && unk_0x07081CD0505DE875() >= 2))
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	return Global_2443089.f_570;
}

bool func_39()
{
	return (Global_1312748[0] > 0 || Global_1312748[1] > 0);
}

void func_40()
{
	if (Global_262145.f_8722 != 45)
	{
		Global_262145.f_8722 = 45;
	}
}

void func_41()
{
	if (func_43("ADVERSARY_NEW", "ADV_PNTLS"))
	{
		unk_0x04890EB0282525A5(1);
		func_42("HVS_INVITE", -1);
	}
}

void func_42(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

bool func_43(char* sParam0, char* sParam1)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	unk_0xB1953EBEF4D6BD85(sParam1);
	return unk_0x39EEBD00DF395566(0);
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = -1;
	iVar3 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15;
	if (((iVar3 > 0 && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126())) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) && func_57(unk_0xFB6B3EEFAB2DD12C(), 0, 0))
	{
		if (func_56(8, -1) == func_55(iVar3))
		{
			iVar2 = 8;
		}
		else if (func_56(9, -1) == func_55(iVar3))
		{
			iVar2 = 9;
		}
		else if (func_56(10, -1) == func_55(iVar3))
		{
			iVar2 = 10;
		}
		if (iVar2 != -1)
		{
			iVar1 = 0;
			while (iVar1 < 158)
			{
				if (Global_1320588[iVar1 /*140*/].f_66 != 0 && unk_0xF44A5E894FE76438(Global_1320588[iVar1 /*140*/].f_101, 12))
				{
					func_54(iVar1, &iVar0);
					if (iVar0 != -1)
					{
						if (iVar0 >= func_53(iVar2) && iVar0 < func_45(iVar2))
						{
							iLocal_380 = 1;
							uLocal_379 = unk_0x7414B386C0020BEC();
						}
					}
				}
				iVar1++;
			}
		}
	}
	if (iLocal_380 && unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_379)) < 20000)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[45]), 2);
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[45]), 8);
	}
	else if (iLocal_380)
	{
		iLocal_380 = 0;
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[45]), 2);
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[45]), 8);
	}
}

int func_45(int iParam0)
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
	return (func_46(iParam0, -1) * iParam0 + 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_49(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_48(iParam1))
			{
				return 0;
			}
			else if (func_47(iParam1, -1))
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

int func_47(int iParam0, int iParam1)
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

int func_48(int iParam0)
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

int func_49(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_50(unk_0xFB6B3EEFAB2DD12C(), 0);
	}
	if (bParam1)
	{
		if (func_50(unk_0xFB6B3EEFAB2DD12C(), 0))
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

bool func_50(int iParam0, bool bParam1)
{
	if (Global_1589801 != func_12())
	{
		if (!func_52(Global_1589801))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
			{
				if (unk_0xF44A5E894FE76438(Global_2421621[Global_1589801 /*358*/].f_198, 24) || func_51(Global_1589801))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 24);
}

bool func_51(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 9);
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_210, 2);
	}
	return 0;
}

int func_53(int iParam0)
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
	return (func_46(iParam0, -1) * iParam0);
}

void func_54(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 158)
		{
			if (iParam0 == (Global_1756335[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_55(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_29();
	}
	if (iParam0 == 7 && !Global_262145.f_14977)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return Global_1362455[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2524295[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2524224[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_58()
{
	int iVar0;
	
	if (((((((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15 != -1) && func_49(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, 0, 0)) && !unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0)) && unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1)) && func_59() == 0) && unk_0xA488C8C46BFD5A39())
	{
		if (!iLocal_376)
		{
			uLocal_378 = unk_0x8D8F7D01F0EB4218();
			iLocal_376 = 1;
		}
		else
		{
			iVar0 = unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x8D8F7D01F0EB4218(), uLocal_378));
			if (iVar0 > 3000)
			{
				if (!unk_0x7E3640C27B17457C())
				{
					unk_0x0FBCFDA15A0FB2D5(0);
					iLocal_377 = 1;
					Global_1315158 = 1;
				}
			}
		}
	}
	else
	{
		if (iLocal_376)
		{
			iLocal_376 = 0;
		}
		if (iLocal_377)
		{
			if (unk_0x7E3640C27B17457C())
			{
				unk_0xFF11D473E95357D3(250);
			}
			iLocal_377 = 0;
		}
	}
}

int func_59()
{
	var uVar0;
	var uVar1;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (func_60(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_18, 1, 1))
		{
			uVar1 = unk_0x4572B13EE70C8F52(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_18);
			if (unk_0x04D83291EB9DE51D(uVar1, uVar0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_61()
{
	int iVar0;
	
	if (unk_0x2D337DD29A7ABD30())
	{
		iVar0 = 0;
		while (iVar0 < Global_1589933)
		{
			unk_0xB8A73E7DA87B2968(&(Global_1589933[iVar0 /*601*/].f_497), 1);
			iVar0++;
		}
	}
}

void func_62()
{
	if ((iLocal_375 != -1 && unk_0x64E5EEDB2FF05CDA("GB_VEHICLE_EXPORT", iLocal_375, 0, 0)) || (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_31 == 178 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_31 == 188))
	{
		if (!func_68())
		{
			if (func_66(unk_0xFB6B3EEFAB2DD12C()) != 178 && func_66(unk_0xFB6B3EEFAB2DD12C()) != 188)
			{
				if (!unk_0x1E0256D6F1052B31(func_65(unk_0xFB6B3EEFAB2DD12C())))
				{
					Global_2494149.f_4710.f_21 = 1;
				}
			}
		}
	}
	if (func_63(unk_0xFB6B3EEFAB2DD12C(), 0) && unk_0x1E0256D6F1052B31(func_65(unk_0xFB6B3EEFAB2DD12C())))
	{
		iLocal_375 = func_65(unk_0xFB6B3EEFAB2DD12C());
	}
	else
	{
		iLocal_375 = -1;
	}
}

bool func_63(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_64(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_12();
}

int func_64(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_12())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_12();
}

int func_66(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_67(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return func_64(unk_0xFB6B3EEFAB2DD12C());
}

void func_69()
{
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (unk_0xFB6B3EEFAB2DD12C() != func_12())
		{
			if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 5))
			{
				if ((unk_0x8AFBC859AA63D3D7() && !unk_0xF9B8AB338DC56ADD()) && !unk_0x83D6BCB493FCFCBA())
				{
					if (!func_72(&uLocal_373))
					{
						func_71(&uLocal_373, 0, 0);
					}
					else if (func_70(&uLocal_373, 10000, 0))
					{
						unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 5);
						func_13(&uLocal_373);
					}
				}
				else if (func_72(&uLocal_373))
				{
					func_13(&uLocal_373);
				}
			}
		}
	}
}

int func_70(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_71(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73()
{
	int iVar0;
	
	if (unk_0x8676DE83D4396C39() && Global_1632166 == 2)
	{
		if (iLocal_371 == 0)
		{
			if (fLocal_372 == 0f)
			{
				if (func_19() && func_77() >= 24)
				{
					fLocal_372 = unk_0xBBDA792448DB5A89(func_75());
					fLocal_372 = (fLocal_372 / 2f);
				}
			}
			else if (fLocal_372 > 0.5f && Global_1315157)
			{
				if (unk_0xBBDA792448DB5A89((func_74() - 1)) < fLocal_372)
				{
					iLocal_371 = 1;
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_6[iVar0 /*2*/].f_1 != 0)
						{
							Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_6[iVar0 /*2*/].f_1 = 0;
						}
						iVar0++;
					}
				}
			}
		}
	}
	else
	{
		func_10();
	}
}

int func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x1E0256D6F1052B31(unk_0x7A4693BB354F3CD3(iVar0)))
		{
			iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
			if (!func_27(iVar2, 0) && !unk_0xF44A5E894FE76438(Global_1589933[iVar2 /*601*/].f_95.f_32, 5))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x1E0256D6F1052B31(unk_0x7A4693BB354F3CD3(iVar0)))
		{
			iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
			if (((((((func_76(iVar2) != 0 && func_76(iVar2) < 38) && func_76(iVar2) != 33) && func_76(iVar2) != 39) && func_76(iVar2) != 35) && func_76(iVar2) != 34) && func_76(iVar2) != 36) && !func_27(iVar2, 0))
			{
				if (!unk_0xF44A5E894FE76438(Global_1589933[iVar2 /*601*/].f_95.f_32, 5))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_76(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187;
}

int func_77()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187;
}

void func_78()
{
	var uVar0;
	
	if (func_88(unk_0xFB6B3EEFAB2DD12C(), &uVar0))
	{
		if (func_87())
		{
			func_79(0);
		}
	}
}

void func_79(int iParam0)
{
	if (func_87())
	{
		if (iParam0 == 1)
		{
			if (Global_2494149.f_4257 == -1)
			{
				Global_2494149.f_4257 = 60000;
			}
			func_86(&(Global_2494149.f_4255), 0, 0);
			if (Global_2494149.f_4260 == -1)
			{
				Global_2494149.f_4260 = 10000;
			}
			func_86(&(Global_2494149.f_4258), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_85(1);
		}
		if ((!unk_0x8676DE83D4396C39() && !func_84()) && !func_80(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_979731 = 0;
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_8 = 0;
	}
}

int func_80(int iParam0)
{
	if (func_81(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_82(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_82(int iParam0)
{
	return func_83(iParam0);
}

bool func_83(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

bool func_84()
{
	return Global_2443089.f_718;
}

void func_85(bool bParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (!func_87())
		{
			if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 0);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 0);
			}
			unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 1f);
			unk_0x78474BABFD9E36D2(0);
			unk_0x8F5ECEB25B6D76B3(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0xD06F9BE40EFDA8FC(0, 0);
				}
			}
		}
		else
		{
			if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 0);
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 1);
				unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0xD06F9BE40EFDA8FC(1, 0);
				}
			}
			unk_0x78474BABFD9E36D2(1);
			unk_0x8F5ECEB25B6D76B3(0);
		}
	}
}

void func_86(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

bool func_87()
{
	return Global_1312412;
}

int func_88(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4572B13EE70C8F52(iParam0);
	if (unk_0x6A0583ECFCCECC9B(iVar0, 0))
	{
		*uParam1 = unk_0x19912132A3CBAD3C(iVar0);
		if ((unk_0x7887B64A08364778(*uParam1) && !unk_0xB529B2A4B7C64D6D(*uParam1, 0)) && unk_0x98BE504E8B389665(*uParam1, -1, 0) == iVar0)
		{
			if (func_92(iParam0, *uParam1) || func_89(iParam0, uParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (func_91(*uParam1))
	{
		iVar0 = unk_0x1643A42FC7E0988A(*uParam1);
		if (unk_0x7887B64A08364778(iVar0))
		{
			iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
			if (func_90(iVar1))
			{
				*uParam1 = unk_0x9A1EB82BF4C4844D(iVar0);
				return 1;
			}
		}
	}
	*uParam1 = uVar2;
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5B8C6C17DBDB0252(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6D12BA0C9BAE80D2(iParam0);
	if ((((((((((((((unk_0xDA82A890460AACEE(iParam0) || unk_0x825416FB822BF706(iParam0)) || unk_0x4B09D3321F53E524(iParam0)) || unk_0xA214826AC4BEA074(iParam0)) || unk_0x825416FB822BF706(iParam0)) || unk_0x3639509E03CDF255(iParam0)) || unk_0x8F8A0D55EBDCBE44(iParam0)) || iVar0 == 2) || iVar0 == 12) || iVar0 == 18) || iVar0 == 19) || iVar0 == 11) || iVar0 == 20) || iVar0 == 10) || iVar0 == 17)
	{
		return 0;
	}
	return 1;
}

bool func_91(int iParam0)
{
	return (((unk_0xA0A4DA31DEDFAC4F(uParam0) == joaat("cargobob") || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("cargobob2")) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("cargobob3")) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("cargobob4"));
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_93(iParam0))
	{
		iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam1);
		if (func_90(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = func_94(iParam0);
	if (iVar0 != func_12())
	{
		return Global_1618089[iVar0 /*390*/].f_11.f_324 == 2;
	}
	return 0;
}

int func_94(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_168;
}

void func_95()
{
	if ((unk_0xFB6B3EEFAB2DD12C() != func_12() && unk_0x7887B64A08364778(unk_0xD5A676B97920D126())) && Global_1589801 != func_12())
	{
		if (unk_0xFB6B3EEFAB2DD12C() == Global_1589801)
		{
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 24))
				{
					if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 26) && !unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 2))
					{
						if ((((Global_1312462.f_18 == 2 || Global_1312462.f_18 == 3) || unk_0xF35D072F1A7DC0A4()) || !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
						{
							if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
							{
								Global_93577 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
							}
							if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
							{
								unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 0);
								if (Global_139108 != -1)
								{
									if (!unk_0xF44A5E894FE76438(Global_1320588[Global_139108 /*140*/].f_101, 12))
									{
										unk_0xB8A73E7DA87B2968(&(Global_1320588[Global_139108 /*140*/].f_101), 12);
									}
								}
								if (Global_1312462.f_18 == 2 || Global_1312462.f_18 == 3)
								{
									if (unk_0x7887B64A08364778(Global_93577))
									{
										unk_0xC53606C390BE2727(Global_93577, 0, 1);
										unk_0xAA8D7DFFDAAB903E(&Global_93577);
									}
									if (unk_0x917884BE83EE1312(unk_0xD5A676B97920D126()) != joaat("MainRoom"))
									{
										unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198), 24);
									}
									unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198), 26);
									unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_96()
{
	if (iLocal_369)
	{
		Global_1761461 = 0;
		iLocal_369 = 0;
		uLocal_370 = unk_0x7414B386C0020BEC();
	}
	if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_370)) > 10000)
	{
		Global_1761461 = 1;
		iLocal_369 = 1;
	}
}

void func_97()
{
	int iVar0;
	bool bVar1;
	
	if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (func_56(11, -1) > 0)
		{
			if ((func_56(0, -1) <= 0 && func_56(6, -1) <= 0) && func_56(8, -1) <= 0)
			{
				if (func_106(4) || func_98(4))
				{
					bVar1 = true;
					if (!iLocal_368)
					{
						unk_0xB8A73E7DA87B2968(&(Global_91538.f_1454), 4);
						iLocal_368 = 1;
					}
					if (unk_0xFACD5AD331C52454("Not_Allow_As_Saved_Veh", 3) && !unk_0xA438D75809973A56(iVar0, "Not_Allow_As_Saved_Veh"))
					{
						if (unk_0x4A478FA962FF575A(iVar0))
						{
							unk_0x570F410C5E24C75B(iVar0, "Not_Allow_As_Saved_Veh", 1);
							iLocal_367 = 1;
						}
					}
				}
			}
		}
		if (!bVar1 && iLocal_367)
		{
			if (unk_0x4A478FA962FF575A(iVar0))
			{
				if (unk_0xA438D75809973A56(iVar0, "Not_Allow_As_Saved_Veh"))
				{
					if (unk_0x94F46B24D7C3E21D(iVar0, "Not_Allow_As_Saved_Veh"))
					{
						iLocal_367 = 0;
					}
				}
				else
				{
					iLocal_367 = 0;
				}
			}
			if (iLocal_368)
			{
				unk_0x4EA098C870B73AB7(&(Global_91538.f_1454), 4);
				iLocal_368 = 0;
			}
		}
	}
	if (!bVar1)
	{
		if (iLocal_368)
		{
			unk_0x4EA098C870B73AB7(&(Global_91538.f_1454), 4);
			iLocal_368 = 0;
		}
	}
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (func_105())
	{
		iVar0 = 0;
		while (iVar0 < 46)
		{
			if (func_104(iVar0) == iParam0)
			{
				if (func_99(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_99(int iParam0)
{
	return func_100(iParam0, 5, 1);
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_9() == 0)
		{
			return unk_0xF44A5E894FE76438(func_101(func_103(iParam0), -1), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_101(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2503773[iParam0 /*3*/][func_102(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_102(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_104(int iParam0)
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

bool func_105()
{
	return Global_91538.f_303 > 0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (func_108())
	{
		iVar0 = 0;
		while (iVar0 < 46)
		{
			if (func_104(iVar0) == iParam0)
			{
				if (func_107(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_107(int iParam0)
{
	return func_100(iParam0, 6, 1);
}

bool func_108()
{
	return Global_91538.f_304 > 0;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (((Global_1760739.f_708 && Global_1760739.f_709 != -1) && unk_0xF44A5E894FE76438(Global_1760739, 6)) && unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_312, 1))
	{
		func_110(Global_1760739.f_709, &iVar1, &iVar0);
		if (!unk_0xF44A5E894FE76438(Global_1760739.f_230[iVar1], iVar0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1760739.f_230[iVar1]), iVar0);
		}
	}
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

void func_111()
{
	if (func_64(unk_0xFB6B3EEFAB2DD12C()) && func_66(unk_0xFB6B3EEFAB2DD12C()) == 188)
	{
		if (!iLocal_366)
		{
			iLocal_366 = 1;
		}
	}
	else if (iLocal_366)
	{
		if (iLocal_233 <= 0 && Global_2482369 > Global_262145.f_16859)
		{
			Global_2482369 = Global_262145.f_16859;
			func_112(5343, Global_2482369, -1, 1, 0);
		}
		iLocal_233 = 0;
		iLocal_366 = 0;
	}
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_102(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

void func_113()
{
	if (((func_114(unk_0xFB6B3EEFAB2DD12C()) && Global_1760737 > 7) && Global_1760737 < 14) && !iLocal_363)
	{
		iLocal_363 = 1;
		unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 14);
	}
	else if (iLocal_363)
	{
		if ((unk_0x8AFBC859AA63D3D7() && !func_114(unk_0xFB6B3EEFAB2DD12C())) && !func_72(&uLocal_364))
		{
			func_71(&uLocal_364, 0, 0);
		}
		if (func_72(&uLocal_364) && func_70(&uLocal_364, 5000, 0))
		{
			func_13(&uLocal_364);
			iLocal_363 = 0;
			unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 14);
		}
	}
}

int func_114(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_60(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_115(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
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

void func_116()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		iVar0 = 0;
		if (func_63(unk_0xFB6B3EEFAB2DD12C(), 1) && !func_128(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			if (func_127(func_65(unk_0xFB6B3EEFAB2DD12C())))
			{
				iVar0 = func_126(func_65(unk_0xFB6B3EEFAB2DD12C()));
			}
		}
		else if (!func_63(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			if (func_127(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = func_126(unk_0xFB6B3EEFAB2DD12C());
			}
		}
		if (iVar0 != 0)
		{
			Var1 = { func_125(iVar0) };
			Var4 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			Var1.f_2 = 0f;
			Var4.f_2 = 0f;
			fVar7 = unk_0x2A488C176D52CCA5(Var1, Var4);
			if (fVar7 < 60f)
			{
				iVar9 = func_123(unk_0xFB6B3EEFAB2DD12C(), &bVar8);
				if (iVar9 != 0)
				{
					if (func_117(iVar9))
					{
						if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_358, 0))
						{
							if (!bVar8)
							{
								unk_0x8DA3061503F2C4C8(unk_0xD5A676B97920D126());
								if (unk_0x4A478FA962FF575A(iVar9))
								{
									unk_0xAFC3B32426D08964(iVar9, 2);
								}
							}
							else
							{
								iVar10 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
								if (!unk_0xB529B2A4B7C64D6D(iVar10, 0) && !unk_0xB529B2A4B7C64D6D(iVar9, 0))
								{
									if (unk_0x4A478FA962FF575A(iVar10))
									{
										unk_0x98D2223071E7747B(iVar10, iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_122(iParam0))
	{
		iVar0 = func_121(iParam0);
		if (iVar0 != func_12())
		{
			iVar1 = func_118(iParam0);
			iVar2 = unk_0xA0A4DA31DEDFAC4F(iParam0);
			iVar3 = 0;
			while (iVar3 < 32)
			{
				if ((Local_103[iVar3 /*4*/].f_2 == iVar1 && Local_103[iVar3 /*4*/].f_1 == iVar2) && Local_103[iVar3 /*4*/] == iVar0)
				{
					return 1;
				}
				iVar3++;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	
	if (unk_0x2A29BF08180E7ADF(iParam0) || func_120(unk_0xFB6B3EEFAB2DD12C(), 6))
	{
		if (unk_0xFACD5AD331C52454("ContrabandOwner", 3))
		{
			if (unk_0xA438D75809973A56(iParam0, "ContrabandOwner"))
			{
				iVar0 = unk_0x483BD2141ADAC3CE(iParam0, "ContrabandOwner");
				return func_119(&iVar0);
			}
		}
	}
	return -1;
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = (24 + iVar0);
		if (unk_0xF44A5E894FE76438(*iParam0, iVar1))
		{
			unk_0x4EA098C870B73AB7(iParam0, iVar1);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_120(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_5, iParam1);
}

int func_121(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2A29BF08180E7ADF(iParam0) || func_120(unk_0xFB6B3EEFAB2DD12C(), 6))
	{
		if (unk_0xFACD5AD331C52454("ContrabandOwner", 3))
		{
			if (unk_0xA438D75809973A56(iParam0, "ContrabandOwner"))
			{
				iVar0 = unk_0x483BD2141ADAC3CE(iParam0, "ContrabandOwner");
				func_119(&iVar0);
				uVar1 = unk_0x7A4693BB354F3CD3(iVar0);
				return uVar1;
			}
		}
	}
	return func_12();
}

int func_122(int iParam0)
{
	if (unk_0x2A29BF08180E7ADF(iParam0) || func_120(unk_0xFB6B3EEFAB2DD12C(), 6))
	{
		if (unk_0xFACD5AD331C52454("ContrabandDeliveryType", 3))
		{
			if (unk_0xA438D75809973A56(iParam0, "ContrabandDeliveryType"))
			{
				return unk_0x483BD2141ADAC3CE(iParam0, "ContrabandDeliveryType") == 2;
			}
		}
	}
	return 0;
}

int func_123(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	*uParam1 = 0;
	if (iParam0 != func_12() && func_60(iParam0, 1, 1))
	{
		iVar0 = unk_0x4572B13EE70C8F52(iParam0);
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6A0583ECFCCECC9B(iVar0, 0))
			{
				iVar1 = 0;
				iVar2 = unk_0x0DBD8FE531FD620D(iVar0, 0);
				if (!unk_0xB529B2A4B7C64D6D(iVar2, 0))
				{
					iVar3 = unk_0xA0A4DA31DEDFAC4F(iVar2);
					if (((iVar3 == joaat("cargobob") || iVar3 == joaat("cargobob2")) || iVar3 == joaat("cargobob3")) || iVar3 == joaat("cargobob4"))
					{
						iVar4 = unk_0x1643A42FC7E0988A(iVar2);
						if ((iVar4 != 0 && unk_0x7887B64A08364778(iVar4)) && unk_0x8041FE602D4689B1(iVar4))
						{
							iVar1 = unk_0x9A1EB82BF4C4844D(iVar4);
							*uParam1 = 1;
						}
					}
					else
					{
						iVar1 = iVar2;
					}
				}
				if (iVar1 != 0 && func_124(iVar1))
				{
					return iVar1;
				}
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0) && !unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (func_122(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -633.966f, -1780.525f, 23.0708f;
		
		case 2:
			return 995.0766f, -1858.65f, 29.8898f;
		
		case 3:
			return -70.5644f, -1822.705f, 25.942f;
		
		case 4:
			return 38.8324f, -1284.2f, 28.278f;
		
		case 5:
			return 1211.217f, -1262.491f, 34.2267f;
		
		case 6:
			return 804.3043f, -2225.151f, 28.5425f;
		
		case 7:
			return 1764.46f, -1648.041f, 111.649f;
		
		case 8:
			return 144.143f, -3003.358f, 6.031f;
		
		case 9:
			return -513.2193f, -2200.612f, 5.394f;
		
		case 10:
			return -1153.689f, -2172.111f, 12.2625f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_126(int iParam0)
{
	if (iParam0 == func_12())
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_257.f_103;
}

bool func_127(int iParam0)
{
	return func_126(iParam0) != 0;
}

bool func_128(int iParam0, bool bParam1)
{
	return func_129(iParam0, bParam1, 1);
}

int func_129(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_130(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_12() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
{
	if (iParam0 != func_12())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_12())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_131()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x8676DE83D4396C39() && unk_0xAB964FCFAC3C767A(joaat("fm_mission_controller")) != 0)
	{
		iVar0 = unk_0xD5A676B97920D126();
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6A0583ECFCCECC9B(iVar0, 1))
			{
				iVar1 = unk_0x19912132A3CBAD3C(iVar0);
				if (unk_0xA4DB44DF73EF4FE5(iVar1, 0))
				{
					if (unk_0xA438D75809973A56(iVar1, "MC_EntityID"))
					{
						if (unk_0x4A478FA962FF575A(iVar1))
						{
							if (unk_0xF66780FB1B1C11AA(iVar1, &iVar2))
							{
								if (unk_0xA438D75809973A56(iVar2, "MC_EntityID"))
								{
									iVar3 = unk_0x483BD2141ADAC3CE(iVar2, "MC_EntityID");
									if (!unk_0xF44A5E894FE76438(iLocal_347, iVar3))
									{
										if (!unk_0xF44A5E894FE76438(Global_1632166.f_55078[iVar3 /*137*/].f_47, 24))
										{
											unk_0xB8A73E7DA87B2968(&iLocal_347, iVar3);
											unk_0xBBAF4B768DDB7572(iVar2, 0);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_347 = 0;
	}
}

void func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_68127)
	{
		return;
	}
	iVar0 = unk_0x1565E1FCA09E4DFE();
	iVar1 = unk_0x36E2A458B968557A();
	if (iLocal_360 != iVar0)
	{
		if (iVar1 == iLocal_362)
		{
			switch (iVar1)
			{
				case 27:
					if (((iVar0 == 15 || iVar0 == 16) || iVar0 == 17) || iVar0 == 18)
					{
						iVar2 = func_56(5, -1);
						if (iVar2 <= 0)
						{
							StringCopy(&Global_68338, "WWW_DYNASTY8EXECUTIVEREALTY_COM", 64);
							Global_68354 = Global_68356;
							iLocal_361 = 0;
						}
						else if (iVar2 != iLocal_361)
						{
							StringCopy(&Global_68338, "WWW_DYNASTY8EXECUTIVEREALTY_COM", 64);
							Global_68354 = Global_68356;
							iLocal_361 = 0;
						}
					}
					break;
				
				default:
					break;
				}
		}
	}
	else
	{
		switch (iVar1)
		{
			case 27:
				if (iVar0 == 2)
				{
					iVar3 = 0;
					switch (Global_68196)
					{
						case 1:
						case 2:
							iVar3 = 87;
							break;
						
						case 3:
						case 4:
							iVar3 = 88;
							break;
						
						case 5:
						case 6:
							iVar3 = 89;
							break;
						
						case 7:
						case 8:
							iVar3 = 90;
							break;
					}
					if (iVar3 != iLocal_361)
					{
						iLocal_361 = iVar3;
					}
				}
				break;
			
			default:
				iLocal_361 = 0;
				break;
			}
	}
	iLocal_362 = iVar1;
	iLocal_360 = iVar0;
}

void func_133()
{
	var uVar0;
	
	if (func_152(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (iLocal_358)
		{
			case 0:
				if ((unk_0x7887B64A08364778(unk_0xD5A676B97920D126()) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0)) && unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), func_149(), "COMPUTER_ENTER", 3))
				{
					func_148();
					iLocal_352 = unk_0x542F16A736FAC9A6("securoserv");
					func_147(1);
				}
				break;
			
			case 1:
				if (unk_0x52622CA85B1C304B(iLocal_352))
				{
					if (func_127(unk_0xFB6B3EEFAB2DD12C()))
					{
						func_145(func_126(unk_0xFB6B3EEFAB2DD12C()));
					}
					func_147(2);
				}
				break;
			
			case 2:
				if (Global_68127)
				{
					func_147(3);
				}
				break;
			
			case 3:
				if (Global_68127)
				{
					func_143();
					func_141();
					func_140();
					if (iLocal_359 == 0)
					{
						if (unk_0x5BB8F128D41C9D26(uLocal_355) && unk_0x5BB8F128D41C9D26(uLocal_356))
						{
							uVar0 = unk_0x208C8B7F9E2B7F30(uLocal_355);
							unk_0x4EA098C870B73AB7(&iLocal_351, 1);
							iLocal_350 = func_139(unk_0x208C8B7F9E2B7F30(uLocal_356));
							if (iLocal_350 >= 23)
							{
								iLocal_350 = (iLocal_350 - 24);
							}
							if (iLocal_349 == 4 || iLocal_349 == 5)
							{
								func_138(1, uVar0);
								if (func_127(unk_0xFB6B3EEFAB2DD12C()))
								{
									func_145(func_126(unk_0xFB6B3EEFAB2DD12C()));
									if (iLocal_349 == 4)
									{
										if (func_137(iLocal_353) != 0)
										{
											func_134(iLocal_353, 0);
										}
									}
									else if (iLocal_349 == 5)
									{
										if (iLocal_350 == iLocal_353)
										{
											if (func_137(iLocal_353) != 0)
											{
												func_134(iLocal_353, 0);
											}
										}
										else if (func_137(iLocal_353) == 0)
										{
											func_134(iLocal_353, iLocal_348);
										}
									}
								}
							}
							else
							{
								func_138(0, uVar0);
							}
						}
					}
				}
				else
				{
					func_148();
					unk_0x4292FC2ED4EC4212(&iLocal_352);
				}
				break;
		}
	}
	else
	{
		func_147(0);
	}
}

void func_134(int iParam0, int iParam1)
{
	func_136(iParam0, iParam1);
	func_135(iParam0, iParam1);
}

void func_135(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_262145.f_17069 = uParam1;
			return;
		
		case 2:
			Global_262145.f_17070 = uParam1;
			return;
		
		case 3:
			Global_262145.f_17071 = uParam1;
			return;
		
		case 4:
			Global_262145.f_17072 = uParam1;
			return;
		
		case 5:
			Global_262145.f_17073 = uParam1;
			return;
		
		case 6:
			Global_262145.f_17074 = uParam1;
			return;
		
		case 7:
			Global_262145.f_17075 = uParam1;
			return;
		
		case 8:
			Global_262145.f_17076 = uParam1;
			return;
		
		case 9:
			Global_262145.f_17077 = uParam1;
			return;
		
		case 10:
			Global_262145.f_17078 = uParam1;
			return;
		
		default:
	}
}

void func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_262145.f_17056 = uParam1;
			return;
		
		case 2:
			Global_262145.f_17057 = uParam1;
			return;
		
		case 3:
			Global_262145.f_17058 = uParam1;
			return;
		
		case 4:
			Global_262145.f_17059 = uParam1;
			return;
		
		case 5:
			Global_262145.f_17060 = uParam1;
			return;
		
		case 6:
			Global_262145.f_17061 = uParam1;
			return;
		
		case 7:
			Global_262145.f_17062 = uParam1;
			return;
		
		case 8:
			Global_262145.f_17063 = uParam1;
			return;
		
		case 9:
			Global_262145.f_17064 = uParam1;
			return;
		
		case 10:
			Global_262145.f_17065 = uParam1;
			return;
		
		default:
	}
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_17056;
		
		case 2:
			return Global_262145.f_17057;
		
		case 3:
			return Global_262145.f_17058;
		
		case 4:
			return Global_262145.f_17059;
		
		case 5:
			return Global_262145.f_17060;
		
		case 6:
			return Global_262145.f_17061;
		
		case 7:
			return Global_262145.f_17062;
		
		case 8:
			return Global_262145.f_17063;
		
		case 9:
			return Global_262145.f_17064;
		
		case 10:
			return Global_262145.f_17065;
		
		default:
	}
	return 0;
}

void func_138(bool bParam0, var uParam1)
{
	if (bParam0)
	{
	}
}

int func_139(int iParam0)
{
	return iParam0 + 1;
}

void func_140()
{
	if (iLocal_349 == 2 || iLocal_349 == 5)
	{
		if (unk_0xF44A5E894FE76438(iLocal_351, 2))
		{
			unk_0x3B6EF6403E3F1CAC(iLocal_352, "IS_WAREHOUSE_PANEL_SHOWING");
			uLocal_357 = unk_0x747CF7F7964A7A98();
			unk_0x4EA098C870B73AB7(&iLocal_351, 2);
		}
		else if (unk_0x5BB8F128D41C9D26(uLocal_357))
		{
			if (unk_0xB4571BC241D15972(uLocal_357))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_351, 3);
			}
			else
			{
				unk_0x4EA098C870B73AB7(&iLocal_351, 3);
			}
			unk_0x4EA098C870B73AB7(&iLocal_351, 2);
		}
	}
}

void func_141()
{
	if (iLocal_359 == 0 || iLocal_359 == 1)
	{
		if (func_142())
		{
			if (!unk_0xF44A5E894FE76438(iLocal_351, 1))
			{
				unk_0x3B6EF6403E3F1CAC(iLocal_352, "GET_CURRENT_SELECTION");
				uLocal_355 = unk_0x747CF7F7964A7A98();
				unk_0x3B6EF6403E3F1CAC(iLocal_352, "GET_SELECTED_WAREHOUSE_ID");
				uLocal_356 = unk_0x747CF7F7964A7A98();
				unk_0xB8A73E7DA87B2968(&iLocal_351, 1);
			}
			unk_0xB8A73E7DA87B2968(&iLocal_351, 2);
			iLocal_359 = 0;
		}
	}
}

int func_142()
{
	if (unk_0x3CEEA45E4779F6BD(2, 201) || unk_0x3CEEA45E4779F6BD(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_143()
{
	if (!unk_0xF44A5E894FE76438(iLocal_351, 0))
	{
		if (func_142() || func_144())
		{
			unk_0x3B6EF6403E3F1CAC(iLocal_352, "GET_CURRENT_SCREEN_ID");
			uLocal_354 = unk_0x747CF7F7964A7A98();
			unk_0xB8A73E7DA87B2968(&iLocal_351, 0);
		}
	}
	else if (unk_0x5BB8F128D41C9D26(uLocal_354))
	{
		iLocal_349 = unk_0x208C8B7F9E2B7F30(uLocal_354);
		unk_0x4EA098C870B73AB7(&iLocal_351, 0);
	}
}

int func_144()
{
	if (unk_0x3CEEA45E4779F6BD(2, 202) || unk_0x3CEEA45E4779F6BD(2, 238))
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0)
{
	if (iParam0 != iLocal_353)
	{
		if (iLocal_353 != 0 && iLocal_353 != 11)
		{
			func_134(iLocal_353, iLocal_348);
		}
		iLocal_353 = iParam0;
		func_134(iLocal_353, func_146(iLocal_353));
	}
	if (func_146(iParam0) != 0)
	{
		iLocal_348 = func_146(iParam0);
	}
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_17069;
		
		case 2:
			return Global_262145.f_17070;
		
		case 3:
			return Global_262145.f_17071;
		
		case 4:
			return Global_262145.f_17072;
		
		case 5:
			return Global_262145.f_17073;
		
		case 6:
			return Global_262145.f_17074;
		
		case 7:
			return Global_262145.f_17075;
		
		case 8:
			return Global_262145.f_17076;
		
		case 9:
			return Global_262145.f_17077;
		
		case 10:
			return Global_262145.f_17078;
		
		default:
	}
	return 0;
}

void func_147(int iParam0)
{
	if (iParam0 != iLocal_358)
	{
		iLocal_358 = iParam0;
	}
}

void func_148()
{
	if (iLocal_353 != 0 && iLocal_353 != 11)
	{
		func_134(iLocal_353, iLocal_348);
	}
	iLocal_353 = 0;
	iLocal_348 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_358 = 0;
}

char* func_149()
{
	if (func_150())
	{
		return "ANIM@AMB@OFFICE@BOSS@FEMALE@";
	}
	return "ANIM@AMB@OFFICE@BOSS@MALE@";
}

bool func_150()
{
	return func_151(unk_0xFB6B3EEFAB2DD12C());
}

int func_151(int iParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	if (func_48(Global_1589933[iParam0 /*601*/].f_257.f_15))
	{
		return 1;
	}
	return 0;
}

void func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_68127)
	{
		if (!iLocal_319 == 0)
		{
			unk_0x4292FC2ED4EC4212(&iLocal_319);
			iLocal_319 = 0;
		}
		iLocal_345 = 0;
		return;
	}
	iVar0 = 1;
	iVar1 = unk_0x1565E1FCA09E4DFE();
	iVar2 = unk_0x36E2A458B968557A();
	if (iVar2 == iLocal_344)
	{
		switch (iVar2)
		{
			case 27:
				if (iVar1 == 13)
				{
					if (Global_68196 == 5 && iLocal_343 == 10)
					{
						iLocal_345 = 1;
					}
				}
				else if (iVar1 == 10)
				{
					if (Global_68196 == 5 && iLocal_343 == 9)
					{
						iLocal_345 = 1;
					}
				}
				else
				{
					iLocal_345 = 0;
				}
				if (iLocal_345)
				{
					if (Global_68231 && Global_2593913 == 0)
					{
						if (iLocal_346)
						{
							StringCopy(&(Global_2443089.f_662.f_12), "", 64);
							Global_68230 = 0;
							Global_68231 = 0;
							Global_68355 = Global_68356 + 500;
							if (iLocal_319 == 0)
							{
								iLocal_319 = unk_0x542F16A736FAC9A6("web_browser");
							}
							func_154();
							iVar0 = 0;
							iLocal_345 = 0;
							if (!iLocal_319 == 0)
							{
								unk_0x4292FC2ED4EC4212(&iLocal_319);
								iLocal_319 = 0;
							}
						}
					}
				}
				break;
			
			default:
				iLocal_345 = 0;
				break;
		}
	}
	else
	{
		iLocal_345 = 0;
	}
	iLocal_346 = iVar0;
	iLocal_344 = iVar2;
	iLocal_343 = iVar1;
}

void func_154()
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	struct<17> Var31;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	struct<17> Var56;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	struct<17> Var81;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	struct<18> Var106;
	int iVar124;
	int iVar125;
	struct<4> Var126;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	bool bVar134;
	int iVar135;
	
	iLocal_320 = 0;
	iVar0 = func_56(5, -1);
	iVar1 = func_279();
	func_278(&uVar2, &uVar3, &uVar4, &uVar5, &uVar6, &uVar7, &uVar8, &iVar9, &iVar10, &iVar11, &iVar12, &iVar13, &iVar14, &iVar15, &iVar16, &iVar17, &iVar18);
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar23 = 0;
	if (((iVar9 > 0 && Global_68395.f_41 != func_276(iVar9)) || (iVar10 >= 0 && Global_68395.f_42 != func_275(iVar10))) || (iVar11 >= 0 && Global_68395.f_43 != func_274(iVar11)))
	{
		iVar25 = 103;
		iVar26 = 0;
		iVar29 = -1;
		if (func_273(iVar25))
		{
			iVar29 = func_272(iVar25);
			iVar26 = func_271(iVar29);
			iVar27 = func_56(iVar29, -1);
			if (iVar27 == iVar25)
			{
				iVar28 = 0;
			}
			else
			{
				iVar28 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar25)) * Global_262145.f_77));
			}
		}
		else
		{
			iVar24 = 0;
			while (iVar24 < 12)
			{
				if (iVar26 < func_271(iVar24))
				{
					iVar26 = func_271(iVar24);
				}
				iVar24++;
			}
			iVar24 = 0;
			while (iVar24 < 12)
			{
				iVar27 = func_56(iVar24, -1);
				if (iVar27 == iVar25)
				{
					func_267(iVar25, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
					unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
					return;
				}
				iVar24++;
			}
			iVar28 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar25)) * Global_262145.f_77));
		}
		iVar20 = iVar28;
		iVar28 = (iVar28 + func_266(iVar25, &(Local_323.f_8), &(Local_323.f_9), &(Local_323.f_10), &(Local_323.f_11), &(Local_323.f_12), &(Local_323.f_13), &(Local_323.f_14), &(Local_323.f_15), &(Local_323.f_16)));
		iVar20 = (iVar20 + ((Local_323.f_8 + Local_323.f_9) + Local_323.f_10));
		if (func_265(iVar25))
		{
			iVar28 = 0;
		}
		iVar30 = (iVar28 - iVar26);
		if (iVar27 == iVar25)
		{
			iVar30 = func_266(iVar25, &(Var31.f_8), &(Var31.f_9), &(Var31.f_10), &(Var31.f_11), &(Var31.f_12), &(Var31.f_13), &(Var31.f_14), &(Var31.f_15), &(Var31.f_16));
		}
		iVar19 = (iVar19 + iVar20);
	}
	if (((iVar12 > 0 && Global_68395.f_44 != func_276(iVar12)) || (iVar13 >= 0 && Global_68395.f_45 != func_275(iVar13))) || (iVar14 >= 0 && Global_68395.f_46 != func_274(iVar14)))
	{
		iVar50 = 104;
		iVar51 = 0;
		iVar54 = -1;
		if (func_273(iVar50))
		{
			iVar54 = func_272(iVar50);
			iVar51 = func_271(iVar54);
			iVar52 = func_56(iVar54, -1);
			if (iVar52 == iVar50)
			{
				iVar53 = 0;
			}
			else
			{
				iVar53 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar50)) * Global_262145.f_77));
			}
		}
		else
		{
			iVar49 = 0;
			while (iVar49 < 12)
			{
				if (iVar51 < func_271(iVar49))
				{
					iVar51 = func_271(iVar49);
				}
				iVar49++;
			}
			iVar49 = 0;
			while (iVar49 < 12)
			{
				iVar52 = func_56(iVar49, -1);
				if (iVar52 == iVar50)
				{
					func_267(iVar50, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
					unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
					return;
				}
				iVar49++;
			}
			iVar53 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar50)) * Global_262145.f_77));
		}
		iVar21 = iVar53;
		iVar53 = (iVar53 + func_266(iVar50, &(Local_323.f_8), &(Local_323.f_9), &(Local_323.f_10), &(Local_323.f_11), &(Local_323.f_12), &(Local_323.f_13), &(Local_323.f_14), &(Local_323.f_15), &(Local_323.f_16)));
		iVar21 = (iVar21 + ((Local_323.f_11 + Local_323.f_12) + Local_323.f_13));
		if (func_265(iVar50))
		{
			iVar53 = 0;
		}
		iVar55 = (iVar53 - iVar51);
		if (iVar52 == iVar50)
		{
			iVar55 = func_266(iVar50, &(Var56.f_8), &(Var56.f_9), &(Var56.f_10), &(Var56.f_11), &(Var56.f_12), &(Var56.f_13), &(Var56.f_14), &(Var56.f_15), &(Var56.f_16));
		}
		iVar19 = (iVar19 + iVar21);
	}
	if (((iVar15 > 0 && Global_68395.f_47 != func_276(iVar15)) || (iVar16 >= 0 && Global_68395.f_48 != func_275(iVar16))) || (iVar17 >= 0 && Global_68395.f_49 != func_274(iVar17)))
	{
		iVar75 = 105;
		iVar76 = 0;
		iVar79 = -1;
		if (func_273(iVar75))
		{
			iVar79 = func_272(iVar75);
			iVar76 = func_271(iVar79);
			iVar77 = func_56(iVar79, -1);
			if (iVar77 == iVar75)
			{
				iVar78 = 0;
			}
			else
			{
				iVar78 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar75)) * Global_262145.f_77));
			}
		}
		else
		{
			iVar74 = 0;
			while (iVar74 < 12)
			{
				if (iVar76 < func_271(iVar74))
				{
					iVar76 = func_271(iVar74);
				}
				iVar74++;
			}
			iVar74 = 0;
			while (iVar74 < 12)
			{
				iVar77 = func_56(iVar74, -1);
				if (iVar77 == iVar75)
				{
					func_267(iVar75, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
					unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
					return;
				}
				iVar74++;
			}
			iVar78 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar75)) * Global_262145.f_77));
		}
		iVar22 = iVar78;
		iVar78 = (iVar78 + func_266(iVar75, &(Local_323.f_8), &(Local_323.f_9), &(Local_323.f_10), &(Local_323.f_11), &(Local_323.f_12), &(Local_323.f_13), &(Local_323.f_14), &(Local_323.f_15), &(Local_323.f_16)));
		iVar22 = (iVar22 + ((Local_323.f_14 + Local_323.f_15) + Local_323.f_16));
		if (func_265(iVar75))
		{
			iVar78 = 0;
		}
		iVar80 = (iVar78 - iVar76);
		if (iVar77 == iVar75)
		{
			iVar80 = func_266(iVar75, &(Var81.f_8), &(Var81.f_9), &(Var81.f_10), &(Var81.f_11), &(Var81.f_12), &(Var81.f_13), &(Var81.f_14), &(Var81.f_15), &(Var81.f_16));
		}
		iVar19 = (iVar19 + iVar22);
	}
	if (iVar18 > 0 && Global_68395.f_50 != func_263(iVar18))
	{
		iVar100 = func_261();
		iVar101 = 0;
		iVar104 = -1;
		if (func_273(iVar100))
		{
			iVar104 = func_272(iVar100);
			iVar101 = func_271(iVar104);
			iVar102 = func_56(iVar104, -1);
			if (iVar102 == iVar100)
			{
				iVar103 = 0;
			}
			else
			{
				iVar103 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar100)) * Global_262145.f_77));
			}
		}
		else
		{
			iVar99 = 0;
			while (iVar99 < 12)
			{
				if (iVar101 < func_271(iVar99))
				{
					iVar101 = func_271(iVar99);
				}
				iVar99++;
			}
			iVar99 = 0;
			while (iVar99 < 12)
			{
				iVar102 = func_56(iVar99, -1);
				if (iVar102 == iVar100)
				{
					func_267(iVar100, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
					unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
					return;
				}
				iVar99++;
			}
			iVar103 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iVar100)) * Global_262145.f_77));
		}
		iVar103 = (iVar103 + func_259(iVar100, &Local_323, &(Local_323.f_1), &(Local_323.f_2), &(Local_323.f_3), &(Local_323.f_4), &(Local_323.f_5), &(Local_323.f_6), &(Local_323.f_7), &(Local_323.f_17)));
		if (func_265(iVar100))
		{
			iVar103 = 0;
		}
		iVar105 = (iVar103 - iVar101);
		if (iVar102 == iVar100)
		{
			iVar105 = func_259(iVar100, &Var106, &(Var106.f_1), &(Var106.f_2), &(Var106.f_3), &(Var106.f_4), &(Var106.f_5), &(Var106.f_6), &(Var106.f_7), &(Var106.f_17));
			iVar23 = Var106.f_17;
		}
		iVar19 = (iVar19 + Local_323.f_17);
	}
	if (iVar19 > 0)
	{
		iVar124 = unk_0xF5AB8C1F782D638A();
		iVar125 = unk_0x3D62B5F6C60AB02A(-1);
		if ((iVar124 + iVar125) < iVar19)
		{
			iVar130 = func_279();
			if (iVar19 <= 0 || (iVar19 > 0 && (iVar124 + iVar125) < iVar19))
			{
				iLocal_320 = 2;
				func_267(iVar130, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				Var126 = { func_258(iVar130) };
				func_257(unk_0x6D9FF4C899CD785F(&Var126), iVar19, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			if (iVar19 <= 0 || (iVar19 > 0 && unk_0x0B5AB9C2405C641F(iVar19, 0, 1, 0, -1)))
			{
				iLocal_320 = 2;
				func_267(iVar130, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				Var126 = { func_258(iVar130) };
				func_257(unk_0x6D9FF4C899CD785F(&Var126), iVar19, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
		}
		if (func_256())
		{
			iVar131 = 0;
			iVar132 = 0;
			iVar133 = (((iVar20 + iVar21) + iVar22) + iVar23);
			if (unk_0xF5AB8C1F782D638A() > 0)
			{
				if (unk_0xF5AB8C1F782D638A() >= iVar133)
				{
					iVar132 = iVar133;
				}
				else
				{
					iVar132 = (iVar133 - (iVar133 - unk_0xF5AB8C1F782D638A()));
				}
				iVar133 = (iVar133 - iVar132);
			}
			if (iVar133 > 0)
			{
				if (unk_0x3D62B5F6C60AB02A(-1) > 0)
				{
					if (unk_0x3D62B5F6C60AB02A(-1) >= iVar133)
					{
						iVar131 = iVar133;
					}
					else
					{
						iVar131 = (iVar133 - (iVar133 - unk_0x3D62B5F6C60AB02A(-1)));
					}
					iVar133 = (iVar133 - iVar131);
				}
			}
			if (iVar133 > 0)
			{
			}
			else if (iVar131 != 0 || iVar132 != 0)
			{
				unk_0x31D91267C5D8A2BB(1);
				unk_0xF1F1FD749C3567AC(-iVar131, -iVar132);
				iLocal_321 = 1;
			}
		}
	}
	bVar134 = false;
	iVar135 = -1;
	if (((iVar9 > 0 && Global_68395.f_41 != func_276(iVar9)) || (iVar10 >= 0 && Global_68395.f_42 != func_275(iVar10))) || (iVar11 >= 0 && Global_68395.f_43 != func_274(iVar11)))
	{
		func_155(103);
		if (iVar135 == -1)
		{
			iVar135 = iLocal_322;
		}
		bVar134 = true;
	}
	if (iLocal_320 == 0)
	{
		if (((iVar12 > 0 && Global_68395.f_44 != func_276(iVar12)) || (iVar13 >= 0 && Global_68395.f_45 != func_275(iVar13))) || (iVar14 >= 0 && Global_68395.f_46 != func_274(iVar14)))
		{
			func_155(104);
			if (iVar135 == -1)
			{
				iVar135 = iLocal_322;
			}
			bVar134 = true;
		}
	}
	else
	{
		bVar134 = true;
	}
	if (iLocal_320 == 0)
	{
		if (((iVar15 > 0 && Global_68395.f_47 != func_276(iVar15)) || (iVar16 >= 0 && Global_68395.f_48 != func_275(iVar16))) || (iVar17 >= 0 && Global_68395.f_49 != func_274(iVar17)))
		{
			func_155(105);
			if (iVar135 == -1)
			{
				iVar135 = iLocal_322;
			}
			bVar134 = true;
		}
	}
	else
	{
		bVar134 = true;
	}
	if (iLocal_320 == 0)
	{
		if (iVar18 > 0 && Global_68395.f_50 != func_263(iVar18))
		{
			func_155(iVar0);
			if (iVar135 != -1)
			{
				iLocal_322 = iVar135;
			}
			bVar134 = true;
		}
	}
	else
	{
		bVar134 = true;
	}
	unk_0x31D91267C5D8A2BB(0);
	unk_0x7FE30C99EA3439F7(13);
	iLocal_321 = 0;
	if (!bVar134)
	{
		func_267(iVar1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
		unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		return;
	}
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	struct<4> Var8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<18> Var19;
	struct<17> Var37;
	int iVar55;
	int iVar56;
	struct<4> Var57;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	var uVar68;
	var uVar69;
	var uVar70;
	var uVar71;
	var uVar72;
	var uVar73;
	var uVar74;
	int iVar75;
	var uVar76;
	var uVar77;
	int iVar78;
	var uVar79;
	var uVar80;
	int iVar81;
	var uVar82;
	var uVar83;
	var uVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	var uVar91;
	var uVar92;
	var uVar93;
	var uVar94;
	int iVar95;
	int iVar96;
	var uVar97;
	var uVar98;
	int iVar99;
	var uVar100;
	var uVar101;
	var uVar102;
	var uVar103;
	var uVar104;
	var uVar105;
	var uVar106;
	var uVar107;
	var uVar108;
	var uVar109;
	var uVar110;
	var uVar111;
	var uVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	var uVar123;
	int iVar124;
	var uVar125;
	var uVar126;
	var uVar127;
	var uVar128;
	var uVar129;
	int iVar130;
	var uVar131;
	var uVar132;
	int iVar133;
	var uVar134;
	var uVar135;
	var uVar136;
	var uVar137;
	var uVar138;
	var uVar139;
	struct<21> Var140;
	int iVar161;
	int iVar162;
	var uVar163;
	var uVar164;
	var uVar165;
	var uVar166;
	var uVar167;
	var uVar168;
	var uVar169;
	int iVar170;
	var uVar171;
	var uVar172;
	int iVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	var uVar178;
	var uVar179;
	struct<10> Var180;
	int iVar190;
	int iVar191;
	var uVar192;
	int iVar193;
	var uVar194;
	var uVar195;
	var uVar196;
	var uVar197;
	var uVar198;
	int iVar199;
	var uVar200;
	var uVar201;
	int iVar202;
	var uVar203;
	var uVar204;
	var uVar205;
	var uVar206;
	var uVar207;
	var uVar208;
	struct<21> Var209;
	int iVar230;
	int iVar231;
	var uVar232;
	var uVar233;
	var uVar234;
	var uVar235;
	var uVar236;
	var uVar237;
	var uVar238;
	int iVar239;
	var uVar240;
	var uVar241;
	int iVar242;
	var uVar243;
	var uVar244;
	var uVar245;
	var uVar246;
	var uVar247;
	var uVar248;
	struct<10> Var249;
	int iVar259;
	int iVar260;
	bool bVar261;
	int iVar262;
	int iVar263;
	int iVar264;
	int iVar265;
	int iVar266;
	int iVar267;
	int iVar268;
	int iVar269;
	var uVar270;
	var uVar271;
	int iVar272;
	var uVar273;
	var uVar274;
	var uVar275;
	var uVar276;
	var uVar277;
	int iVar278;
	bool bVar279;
	bool bVar280;
	var uVar281;
	var uVar282;
	var uVar283;
	var uVar284;
	var uVar285;
	var uVar286;
	var uVar287;
	int iVar288;
	int iVar289;
	int iVar290;
	int iVar291;
	var uVar292;
	var uVar293;
	var uVar294;
	var uVar295;
	var uVar296;
	var uVar297;
	var uVar298;
	var uVar299;
	var uVar300;
	var uVar301;
	var uVar302;
	var uVar303;
	var uVar304;
	int iVar305;
	var uVar306;
	var uVar307;
	int iVar308;
	int iVar309;
	int iVar310;
	var uVar311;
	var uVar312;
	var uVar313;
	var uVar314;
	var uVar315;
	var uVar316;
	var uVar317;
	var uVar318;
	var uVar319;
	var uVar320;
	var uVar321;
	int iVar322;
	var uVar323;
	var uVar324;
	int iVar325;
	var uVar326;
	var uVar327;
	int iVar328;
	int iVar329;
	int iVar330;
	var uVar331;
	
	iVar0 = -1;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	if (iParam0 < 0)
	{
		return;
	}
	Var8 = { func_258(iParam0) };
	iVar12 = 0;
	iVar15 = -1;
	if (func_273(iParam0))
	{
		iVar15 = func_272(iParam0);
		iVar12 = func_271(iVar15);
		iVar13 = func_56(iVar15, -1);
		if (iVar13 == iParam0)
		{
			if ((!func_48(iVar13) && !func_47(iVar13, -1)) && !func_49(iVar13, 0, 0))
			{
				func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			iVar14 = 0;
		}
		else
		{
			iVar14 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (iVar12 < func_271(iVar1))
			{
				iVar12 = func_271(iVar1);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 12)
		{
			iVar13 = func_56(iVar1, -1);
			if (iVar13 == iParam0)
			{
				func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			iVar1++;
		}
		iVar14 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
	}
	if (func_48(iParam0))
	{
		iVar14 = (iVar14 + func_259(iParam0, &Local_323, &(Local_323.f_1), &(Local_323.f_2), &(Local_323.f_3), &(Local_323.f_4), &(Local_323.f_5), &(Local_323.f_6), &(Local_323.f_7), &(Local_323.f_17)));
	}
	else if (func_49(iParam0, 0, 0))
	{
		iVar14 = (iVar14 + func_266(iParam0, &(Local_323.f_8), &(Local_323.f_9), &(Local_323.f_10), &(Local_323.f_11), &(Local_323.f_12), &(Local_323.f_13), &(Local_323.f_14), &(Local_323.f_15), &(Local_323.f_16)));
	}
	if (func_265(iParam0))
	{
		iVar14 = 0;
	}
	iVar16 = (iVar14 - iVar12);
	if (func_48(iParam0))
	{
		if (iVar13 == iParam0)
		{
			iVar16 = func_259(iParam0, &Var19, &(Var19.f_1), &(Var19.f_2), &(Var19.f_3), &(Var19.f_4), &(Var19.f_5), &(Var19.f_6), &(Var19.f_7), &(Var19.f_17));
			iVar2 = iVar16;
			bVar5 = true;
		}
		if (bVar5 && Global_2452508)
		{
			func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
			unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	else if (func_49(iParam0, 0, 0))
	{
		if (iVar13 == iParam0)
		{
			iVar16 = func_266(iParam0, &(Var37.f_8), &(Var37.f_9), &(Var37.f_10), &(Var37.f_11), &(Var37.f_12), &(Var37.f_13), &(Var37.f_14), &(Var37.f_15), &(Var37.f_16));
			iVar4 = iVar16;
			bVar7 = true;
		}
		if (bVar7 && Global_2452508)
		{
			func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
			unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	iVar18 = func_101(5283, -1);
	iVar55 = unk_0xF5AB8C1F782D638A();
	iVar56 = unk_0x3D62B5F6C60AB02A(-1);
	if (iVar16 > 0)
	{
		if ((iVar55 + iVar56) < iVar16)
		{
			if (iVar16 <= 0 || (iVar16 > 0 && (iVar55 + iVar56) < iVar16))
			{
				iLocal_320 = 2;
				func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				Var57 = { func_258(iParam0) };
				func_257(unk_0x6D9FF4C899CD785F(&Var57), iVar16, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			if (iVar16 <= 0 || (iVar16 > 0 && unk_0x0B5AB9C2405C641F(iVar16, 0, 1, 0, -1)))
			{
				iLocal_320 = 2;
				func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				Var57 = { func_258(iParam0) };
				func_257(unk_0x6D9FF4C899CD785F(&Var57), iVar16, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
		}
	}
	if (iVar15 != -1)
	{
		iVar0 = iVar15;
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 == -1)
	{
		iLocal_320 = 5;
		func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
		Global_68354 = Global_68356;
		unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		return;
	}
	else if (bVar5)
	{
		iVar17 = iVar2;
	}
	else if (bVar6)
	{
		iVar17 = iVar3;
	}
	else if (bVar7)
	{
		iVar17 = iVar4;
	}
	else
	{
		iVar17 = (iVar14 - func_271(iVar0));
		if (func_48(iParam0))
		{
			if (iVar17 < 0)
			{
				iVar17 = 0;
			}
		}
	}
	if (iVar17 > 0)
	{
		if (((iVar55 + iVar56) + func_271(iVar0)) < iVar17)
		{
			iLocal_320 = 2;
			func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
			Var57 = { func_258(iParam0) };
			func_257(unk_0x6D9FF4C899CD785F(&Var57), iVar17, 0);
			unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
		if (!unk_0x0B5AB9C2405C641F(iVar17, 0, 1, 0, -1))
		{
			iLocal_320 = 2;
			func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
			Var57 = { func_258(iParam0) };
			func_257(unk_0x6D9FF4C899CD785F(&Var57), iVar17, 0);
			unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	if (func_48(iParam0) || func_49(iParam0, 0, 0))
	{
		if (func_253())
		{
			iLocal_320 = 6;
			func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
			unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	if (func_256())
	{
		iVar61 = 0;
		if (func_265(iParam0))
		{
			iVar61 = 1;
		}
		if (func_273(iParam0))
		{
			if (iVar13 == iParam0)
			{
				iVar14 = 0;
			}
			else
			{
				iVar14 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
			}
		}
		iLocal_341 = 1;
		iLocal_342 = 0;
		iVar62 = func_252(iParam0, iVar61);
		iVar63 = func_251(iVar0);
		iVar64 = func_56(iVar0, -1);
		if (func_250(iParam0))
		{
			iVar67 = 0;
			switch (iVar0)
			{
				case 8:
					func_278(&uVar68, &uVar69, &uVar70, &uVar71, &uVar72, &uVar73, &uVar74, &iVar75, &uVar76, &uVar77, &iVar78, &uVar79, &uVar80, &iVar81, &uVar82, &uVar83, &uVar84);
					iVar65 = func_249(func_276(iVar75), iParam0, iVar67);
					break;
				
				case 9:
					func_278(&uVar68, &uVar69, &uVar70, &uVar71, &uVar72, &uVar73, &uVar74, &iVar75, &uVar76, &uVar77, &iVar78, &uVar79, &uVar80, &iVar81, &uVar82, &uVar83, &uVar84);
					iVar65 = func_249(func_276(iVar78), iParam0, iVar67);
					break;
				
				case 10:
					func_278(&uVar68, &uVar69, &uVar70, &uVar71, &uVar72, &uVar73, &uVar74, &iVar75, &uVar76, &uVar77, &iVar78, &uVar79, &uVar80, &iVar81, &uVar82, &uVar83, &uVar84);
					iVar65 = func_249(func_276(iVar81), iParam0, iVar67);
					break;
				
				default:
					break;
			}
		}
		else
		{
			iVar65 = func_249(-1, iParam0, 0);
		}
		iVar66 = func_248(iVar0);
		iVar85 = 0;
		iVar86 = 0;
		if (iVar64 > 0)
		{
			iVar87 = 0;
			iVar85 = func_271(iVar0);
			iVar86 = func_252(iVar64, iVar87);
		}
		iVar88 = -1;
		while (func_231(&iVar88, iVar14, iVar0, 1394405165, 1372920054, iVar62, iVar63, 0, iVar85, iVar86, 0, iVar65, iVar66))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		switch (iVar88)
		{
			case 0:
				iLocal_320 = 6;
				func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
				unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	if (func_48(iParam0))
	{
		func_278(&iVar89, &iVar90, &uVar91, &uVar92, &uVar93, &uVar94, &iVar95, &iVar96, &uVar97, &uVar98, &iVar99, &uVar100, &uVar101, &uVar102, &uVar103, &uVar104, &uVar105);
		if (iVar0 >= 0 && iVar0 <= 114)
		{
		}
		if (func_230(iVar0, -1) != iVar89)
		{
			unk_0xB8A73E7DA87B2968(&Global_4008133, 8);
		}
		func_229(5, &iVar89);
		if (func_228(iVar90))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 29);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 29);
		}
		if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 8))
		{
			unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 8);
		}
		if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 10))
		{
			unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 10);
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_356 = uVar91;
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_357 = uVar92;
		if (func_228(iVar95))
		{
			if (!func_227())
			{
				unk_0xB8A73E7DA87B2968(&Global_4008133, 3);
			}
			unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 13);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 13);
		}
		if (!bVar5)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 27))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 27);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 28))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 28);
			}
		}
		if ((func_48(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0)) && bVar5)
		{
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 17))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 17);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 16))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 16);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 18))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 18);
			}
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 7);
			}
			Global_3934102 = iVar89;
			Global_3934104 = 1;
		}
		else if (bVar5)
		{
			Global_3934102 = iVar89;
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 7);
			}
		}
		func_267(iParam0, "_S_PURCHASE_D_SUCCESS", 1, bVar5, 0, 0);
	}
	else if (func_49(iParam0, 0, 0))
	{
		func_278(&uVar106, &uVar107, &uVar108, &uVar109, &uVar110, &uVar111, &uVar112, &iVar113, &iVar114, &iVar115, &iVar116, &iVar117, &iVar118, &iVar119, &iVar120, &iVar121, &iVar122);
		func_226(iVar115, iVar114, iVar113, iVar122);
		func_225(iVar118, iVar117, iVar116, iVar122);
		func_224(iVar121, iVar120, iVar119, iVar122);
		if (func_272(iParam0) == func_272(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && bVar7)
		{
			func_223(1);
		}
		if ((func_49(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, 0, 0) && unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0)) && bVar7)
		{
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 17))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 17);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 16))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 16);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 18))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 18);
			}
			if (func_272(iParam0) == func_272(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15))
			{
				func_223(1);
			}
			if (func_272(iParam0) == func_272(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15))
			{
				Global_3934102 = uVar106;
				Global_3934104 = 1;
			}
		}
		else if (bVar7)
		{
			Global_3934102 = uVar106;
		}
		func_267(iParam0, "_S_PURCHASE_D_SUCCESS", 1, bVar7, 0, 0);
	}
	else
	{
		func_267(iParam0, "_S_PURCHASE_D_SUCCESS", 1, 0, 0, 0);
	}
	if (iVar17 >= 0 && (iVar17 == 0 || (iVar17 > 0 && (func_256() || unk_0x0B5AB9C2405C641F(iVar17, 0, 1, 0, -1)))))
	{
		Var57 = { func_258(iVar0) };
		if (iVar17 > 0)
		{
			func_218(joaat("mpply_ingamestore_moneyspent"), iVar17);
		}
		if (func_271(iVar0) > 0 && !((bVar5 || bVar6) || bVar7))
		{
			if (!func_47(iParam0, -1))
			{
				if (func_256())
				{
					unk_0x1C58730C5FC29475(func_216(func_217()));
				}
				Var57 = { func_258(func_56(iVar0, -1)) };
				func_215(func_271(iVar0), unk_0x6D9FF4C899CD785F(&Var57));
			}
		}
		if (func_256())
		{
			unk_0x1C58730C5FC29475(func_216(func_217()));
		}
		if (func_48(iParam0))
		{
			if (iVar14 > 0)
			{
				func_278(&uVar123, &iVar124, &uVar125, &uVar126, &uVar127, &uVar128, &uVar129, &iVar130, &uVar131, &uVar132, &iVar133, &uVar134, &uVar135, &uVar136, &uVar137, &uVar138, &uVar139);
				Var140.f_1 = -1;
				Var140.f_3 = -1;
				Var140.f_5 = -1;
				Var140.f_7 = -1;
				Var140.f_9 = -1;
				Var140.f_11 = -1;
				Var140.f_13 = -1;
				Var140.f_15 = -1;
				Var140.f_16 = -1;
				Var140.f_17 = -1;
				Var140.f_18 = -1;
				Var140.f_20 = -1;
				if (!bVar5)
				{
					Var140.f_0 = iParam0;
					Var140.f_1 = func_270(iParam0);
					Var140.f_2 = uVar123;
					Var140.f_3 = Local_323.f_0;
					Var140.f_4 = func_214(iVar124);
					Var140.f_5 = Local_323.f_1;
					Var140.f_6 = Global_68395.f_40;
					Var140.f_7 = ((Local_323.f_2 + Local_323.f_3) + Local_323.f_4);
					Var140.f_8 = uVar127;
					Var140.f_9 = Local_323.f_5;
					Var140.f_10 = uVar128;
					Var140.f_11 = Local_323.f_6;
					Var140.f_12 = uVar129;
					Var140.f_13 = Local_323.f_7;
					Var140.f_19 = uVar139;
					Var140.f_20 = Local_323.f_17;
					iVar161 = (((((((Var140.f_1 + Var140.f_3) + Var140.f_5) + Var140.f_7) + Var140.f_9) + Var140.f_11) + Var140.f_13) + Var140.f_20);
					unk_0x2EDBC89902B3002C(iVar161, &Var140, 0, 1);
				}
				else
				{
					Var140.f_0 = iParam0;
					if (Local_323.f_0 != 0)
					{
						Var140.f_2 = uVar123;
						Var140.f_3 = Local_323.f_0;
						iVar162 = (iVar162 + Var140.f_3);
					}
					if (Local_323.f_1 != 0)
					{
						Var140.f_4 = func_214(iVar124);
						Var140.f_5 = Local_323.f_1;
						iVar162 = (iVar162 + Var140.f_5);
					}
					Var140.f_6 = Global_68395.f_40;
					Var140.f_7 = ((Local_323.f_2 + Local_323.f_3) + Local_323.f_4);
					iVar162 = (iVar162 + Var140.f_7);
					if (Local_323.f_5 != 0)
					{
						Var140.f_8 = uVar127;
						Var140.f_9 = Local_323.f_5;
						iVar162 = (iVar162 + Var140.f_9);
					}
					if (Local_323.f_6 != 0)
					{
						Var140.f_10 = uVar128;
						Var140.f_11 = Local_323.f_6;
						iVar162 = (iVar162 + Var140.f_11);
					}
					if (Local_323.f_7 != 0)
					{
						Var140.f_12 = uVar129;
						Var140.f_13 = Local_323.f_7;
						iVar162 = (iVar162 + Var140.f_13);
					}
					if (Local_323.f_17 != 0)
					{
						Var140.f_19 = uVar139;
						Var140.f_20 = Local_323.f_17;
						iVar162 = (iVar162 + Var140.f_20);
					}
					unk_0xD4EA3E130B6A933F(iVar162, &Var140, 0, 1);
					iVar14 = iVar17;
				}
			}
		}
		else if (func_49(iParam0, 0, 0))
		{
			if (iVar14 > 0)
			{
				func_278(&uVar163, &uVar164, &uVar165, &uVar166, &uVar167, &uVar168, &uVar169, &iVar170, &uVar171, &uVar172, &iVar173, &uVar174, &uVar175, &uVar176, &uVar177, &uVar178, &uVar179);
				Var180.f_1 = -1;
				Var180.f_3 = -1;
				Var180.f_5 = -1;
				Var180.f_7 = -1;
				Var180.f_9 = -1;
				if (!bVar7)
				{
					Var180.f_0 = iParam0;
					Var180.f_1 = func_270(iParam0);
					switch (iVar0)
					{
						case 8:
							Var180.f_2 = 1;
							Var180.f_3 = 0;
							Var180.f_4 = uVar172;
							Var180.f_5 = Local_323.f_10;
							Var180.f_6 = uVar171;
							Var180.f_7 = Local_323.f_9;
							Var180.f_8 = iVar170;
							Var180.f_9 = Local_323.f_8;
							break;
						
						case 9:
							Var180.f_2 = 2;
							Var180.f_3 = 0;
							Var180.f_4 = uVar175;
							Var180.f_5 = Local_323.f_13;
							Var180.f_6 = uVar174;
							Var180.f_7 = Local_323.f_12;
							Var180.f_8 = iVar173;
							Var180.f_9 = Local_323.f_11;
							break;
						
						case 10:
							Var180.f_2 = 3;
							Var180.f_3 = 0;
							Var180.f_4 = uVar178;
							Var180.f_5 = Local_323.f_16;
							Var180.f_6 = uVar177;
							Var180.f_7 = Local_323.f_15;
							Var180.f_8 = uVar176;
							Var180.f_9 = Local_323.f_14;
							break;
						
						default:
							break;
					}
					iVar190 = (((Var180.f_1 + Var180.f_5) + Var180.f_7) + Var180.f_9);
					unk_0xB4C2EC463672474E(iVar190, &Var180, 0, 1);
				}
				else
				{
					Var180.f_0 = iParam0;
					switch (iVar0)
					{
						case 8:
							if (Local_323.f_10 != 0)
							{
								Var180.f_2 = 1;
								Var180.f_3 = 0;
								Var180.f_4 = uVar172;
								Var180.f_5 = Local_323.f_10;
								iVar191 = (iVar191 + Var180.f_5);
							}
							if (Local_323.f_9 != 0)
							{
								Var180.f_6 = uVar171;
								Var180.f_7 = Local_323.f_9;
								iVar191 = (iVar191 + Var180.f_7);
							}
							if (Local_323.f_8 != 0)
							{
								Var180.f_8 = iVar170;
								Var180.f_9 = Local_323.f_8;
								iVar191 = (iVar191 + Var180.f_9);
							}
							break;
						
						case 9:
							if (Local_323.f_13 != 0)
							{
								Var180.f_2 = 2;
								Var180.f_3 = 0;
								Var180.f_4 = uVar175;
								Var180.f_5 = Local_323.f_13;
								iVar191 = (iVar191 + Var180.f_5);
							}
							if (Local_323.f_12 != 0)
							{
								Var180.f_6 = uVar174;
								Var180.f_7 = Local_323.f_12;
								iVar191 = (iVar191 + Var180.f_7);
							}
							if (Local_323.f_11 != 0)
							{
								Var180.f_8 = iVar173;
								Var180.f_9 = Local_323.f_11;
								iVar191 = (iVar191 + Var180.f_9);
							}
							break;
						
						case 10:
							if (Local_323.f_16 != 0)
							{
								Var180.f_2 = 3;
								Var180.f_3 = 0;
								Var180.f_4 = uVar178;
								Var180.f_5 = Local_323.f_16;
								iVar191 = (iVar191 + Var180.f_5);
							}
							if (Local_323.f_15 != 0)
							{
								Var180.f_6 = uVar177;
								Var180.f_7 = Local_323.f_15;
								iVar191 = (iVar191 + Var180.f_7);
							}
							if (Local_323.f_14 != 0)
							{
								Var180.f_8 = uVar176;
								Var180.f_9 = Local_323.f_14;
								iVar191 = (iVar191 + Var180.f_9);
							}
							break;
						
						default:
							break;
					}
					unk_0x2AFC2D19B50797F2(iVar191, &Var180, 0, 1);
					iVar14 = iVar17;
				}
			}
		}
		else
		{
			Var57 = { func_258(iParam0) };
			unk_0x256E4A9681D2AF11(iVar14, unk_0x6D9FF4C899CD785F(&Var57), 0, 1);
		}
		if (func_256())
		{
			func_210(func_217());
		}
	}
	else if (iVar17 < 0)
	{
		if (func_271(iVar0) > 0 && !((bVar5 || bVar6) || bVar7))
		{
			if (!func_47(iParam0, -1))
			{
				if (func_256())
				{
					unk_0x1C58730C5FC29475(func_216(func_217()));
				}
				Var57 = { func_258(func_56(iVar0, -1)) };
				func_215(func_271(iVar0), unk_0x6D9FF4C899CD785F(&Var57));
			}
		}
		if (func_256())
		{
			unk_0x1C58730C5FC29475(func_216(func_217()));
		}
		if (func_48(iParam0))
		{
			if (iVar14 > 0)
			{
				func_278(&uVar192, &iVar193, &uVar194, &uVar195, &uVar196, &uVar197, &uVar198, &iVar199, &uVar200, &uVar201, &iVar202, &uVar203, &uVar204, &uVar205, &uVar206, &uVar207, &uVar208);
				Var209.f_1 = -1;
				Var209.f_3 = -1;
				Var209.f_5 = -1;
				Var209.f_7 = -1;
				Var209.f_9 = -1;
				Var209.f_11 = -1;
				Var209.f_13 = -1;
				Var209.f_15 = -1;
				Var209.f_16 = -1;
				Var209.f_17 = -1;
				Var209.f_18 = -1;
				Var209.f_20 = -1;
				if (!bVar5)
				{
					Var209.f_0 = iParam0;
					Var209.f_1 = func_270(iParam0);
					Var209.f_2 = uVar192;
					Var209.f_3 = Local_323.f_0;
					Var209.f_4 = func_214(iVar193);
					Var209.f_5 = Local_323.f_1;
					Var209.f_6 = Global_68395.f_40;
					Var209.f_7 = ((Local_323.f_2 + Local_323.f_3) + Local_323.f_4);
					Var209.f_8 = uVar196;
					Var209.f_9 = Local_323.f_5;
					Var209.f_10 = uVar197;
					Var209.f_11 = Local_323.f_6;
					Var209.f_12 = uVar198;
					Var209.f_13 = Local_323.f_7;
					Var209.f_19 = uVar208;
					Var209.f_20 = Local_323.f_17;
					iVar230 = (((((((Var209.f_1 + Var209.f_3) + Var209.f_5) + Var209.f_7) + Var209.f_9) + Var209.f_11) + Var209.f_13) + Var209.f_20);
					unk_0x2EDBC89902B3002C(iVar230, &Var209, 0, 1);
				}
				else
				{
					Var209.f_0 = iParam0;
					if (Local_323.f_0 != 0)
					{
						Var209.f_2 = uVar192;
						Var209.f_3 = Local_323.f_0;
						iVar231 = (iVar231 + Var209.f_3);
					}
					if (Local_323.f_1 != 0)
					{
						Var209.f_4 = func_214(iVar193);
						Var209.f_5 = Local_323.f_1;
						iVar231 = (iVar231 + Var209.f_5);
					}
					Var209.f_6 = Global_68395.f_40;
					Var209.f_7 = ((Local_323.f_2 + Local_323.f_3) + Local_323.f_4);
					iVar231 = (iVar231 + Var209.f_7);
					if (Local_323.f_5 != 0)
					{
						Var209.f_8 = uVar196;
						Var209.f_9 = Local_323.f_5;
						iVar231 = (iVar231 + Var209.f_9);
					}
					if (Local_323.f_6 != 0)
					{
						Var209.f_10 = uVar197;
						Var209.f_11 = Local_323.f_6;
						iVar231 = (iVar231 + Var209.f_11);
					}
					if (Local_323.f_7 != 0)
					{
						Var209.f_12 = uVar198;
						Var209.f_13 = Local_323.f_7;
						iVar231 = (iVar231 + Var209.f_13);
					}
					if (Local_323.f_17 != 0)
					{
						Var209.f_19 = uVar208;
						Var209.f_20 = Local_323.f_17;
						iVar231 = (iVar231 + Var209.f_20);
					}
					unk_0xD4EA3E130B6A933F(iVar231, &Var209, 0, 1);
					iVar14 = iVar17;
				}
			}
		}
		else if (func_49(iParam0, 0, 0))
		{
			if (iVar14 > 0)
			{
				func_278(&uVar232, &uVar233, &uVar234, &uVar235, &uVar236, &uVar237, &uVar238, &iVar239, &uVar240, &uVar241, &iVar242, &uVar243, &uVar244, &uVar245, &uVar246, &uVar247, &uVar248);
				Var249.f_1 = -1;
				Var249.f_3 = -1;
				Var249.f_5 = -1;
				Var249.f_7 = -1;
				Var249.f_9 = -1;
				if (!bVar7)
				{
					Var249.f_0 = iParam0;
					Var249.f_1 = func_270(iParam0);
					switch (iVar0)
					{
						case 8:
							Var249.f_2 = 1;
							Var249.f_3 = 0;
							Var249.f_4 = uVar241;
							Var249.f_5 = Local_323.f_10;
							Var249.f_6 = uVar240;
							Var249.f_7 = Local_323.f_9;
							Var249.f_8 = iVar239;
							Var249.f_9 = Local_323.f_8;
							break;
						
						case 9:
							Var249.f_2 = 2;
							Var249.f_3 = 0;
							Var249.f_4 = uVar244;
							Var249.f_5 = Local_323.f_13;
							Var249.f_6 = uVar243;
							Var249.f_7 = Local_323.f_12;
							Var249.f_8 = iVar242;
							Var249.f_9 = Local_323.f_11;
							break;
						
						case 10:
							Var249.f_2 = 3;
							Var249.f_3 = 0;
							Var249.f_4 = uVar247;
							Var249.f_5 = Local_323.f_16;
							Var249.f_6 = uVar246;
							Var249.f_7 = Local_323.f_15;
							Var249.f_8 = uVar245;
							Var249.f_9 = Local_323.f_14;
							break;
						
						default:
							break;
					}
					iVar259 = (((Var249.f_1 + Var249.f_5) + Var249.f_7) + Var249.f_9);
					unk_0xB4C2EC463672474E(iVar259, &Var249, 0, 1);
				}
				else
				{
					Var249.f_0 = iParam0;
					switch (iVar0)
					{
						case 8:
							if (Local_323.f_10 != 0)
							{
								Var249.f_2 = 1;
								Var249.f_3 = 0;
								Var249.f_4 = uVar241;
								Var249.f_5 = Local_323.f_10;
								iVar260 = (iVar260 + Var249.f_5);
							}
							if (Local_323.f_9 != 0)
							{
								Var249.f_6 = uVar240;
								Var249.f_7 = Local_323.f_9;
								iVar260 = (iVar260 + Var249.f_7);
							}
							if (Local_323.f_8 != 0)
							{
								Var249.f_8 = iVar239;
								Var249.f_9 = Local_323.f_8;
								iVar260 = (iVar260 + Var249.f_9);
							}
							break;
						
						case 9:
							if (Local_323.f_13 != 0)
							{
								Var249.f_2 = 2;
								Var249.f_3 = 0;
								Var249.f_4 = uVar244;
								Var249.f_5 = Local_323.f_13;
								iVar260 = (iVar260 + Var249.f_5);
							}
							if (Local_323.f_12 != 0)
							{
								Var249.f_6 = uVar243;
								Var249.f_7 = Local_323.f_12;
								iVar260 = (iVar260 + Var249.f_7);
							}
							if (Local_323.f_11 != 0)
							{
								Var249.f_8 = iVar242;
								Var249.f_9 = Local_323.f_11;
								iVar260 = (iVar260 + Var249.f_9);
							}
							break;
						
						case 10:
							if (Local_323.f_16 != 0)
							{
								Var249.f_2 = 3;
								Var249.f_3 = 0;
								Var249.f_4 = uVar247;
								Var249.f_5 = Local_323.f_16;
								iVar260 = (iVar260 + Var249.f_5);
							}
							if (Local_323.f_15 != 0)
							{
								Var249.f_6 = uVar246;
								Var249.f_7 = Local_323.f_15;
								iVar260 = (iVar260 + Var249.f_7);
							}
							if (Local_323.f_14 != 0)
							{
								Var249.f_8 = uVar245;
								Var249.f_9 = Local_323.f_14;
								iVar260 = (iVar260 + Var249.f_9);
							}
							break;
						
						default:
							break;
					}
					unk_0x2AFC2D19B50797F2(iVar260, &Var249, 0, 1);
					iVar14 = iVar17;
				}
			}
		}
		else if (!func_265(iParam0))
		{
			func_267(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0);
			unk_0xA93E75A5493862BD(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	if (func_56(iVar0, -1) > 0 && !((bVar5 || bVar6) || bVar7))
	{
		func_207(88, 1, -1);
	}
	if (iVar0 == 0)
	{
	}
	else if (iVar0 == 5)
	{
		if (func_56(5, -1) <= 0)
		{
			bVar261 = false;
		}
		else
		{
			bVar261 = true;
		}
		Global_1762441 = 1;
		if (!bVar261)
		{
		}
		func_206(3209, iParam0, -1, 1);
		if (!func_265(iParam0))
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
		}
		else
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = 0;
		}
		func_112(3210, Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)], -1, 1, 0);
		func_278(&iVar262, &iVar263, &iVar264, &iVar265, &iVar266, &iVar267, &iVar268, &iVar269, &uVar270, &uVar271, &iVar272, &uVar273, &uVar274, &uVar275, &uVar276, &uVar277, &iVar278);
		if (func_250(iParam0))
		{
			if (func_230(iVar0, -1) != iVar262)
			{
				unk_0xB8A73E7DA87B2968(&Global_4008133, 8);
			}
			func_229(iVar0, &iVar262);
			if (func_228(iVar263))
			{
				func_112(3204, 1, -1, 1, 0);
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 29);
			}
			else
			{
				func_112(3204, 0, -1, 1, 0);
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 29);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 8))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 8);
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 10))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 10);
			}
			func_112(3678, iVar264, -1, 1, 0);
			func_112(3679, iVar265, -1, 1, 0);
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_356 = iVar264;
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_357 = iVar265;
			if (func_228(iVar266))
			{
				if (!func_204())
				{
					unk_0xB8A73E7DA87B2968(&Global_4008133, 2);
				}
				func_112(3205, 1, -1, 1, 0);
			}
			else
			{
				func_112(3205, 0, -1, 1, 0);
			}
			if (func_228(iVar267))
			{
				if (!func_203())
				{
					unk_0xB8A73E7DA87B2968(&Global_4008133, 4);
				}
				func_112(3206, 1, -1, 1, 0);
			}
			else
			{
				func_112(3206, 0, -1, 1, 0);
			}
			if (func_228(iVar268))
			{
				if (!func_227())
				{
					unk_0xB8A73E7DA87B2968(&Global_4008133, 3);
				}
				func_112(3207, 1, -1, 1, 0);
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 13);
			}
			else
			{
				func_112(3207, 0, -1, 1, 0);
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 13);
			}
			bVar279 = false;
			func_112(5283, iVar278, -1, 1, 0);
			if (func_202())
			{
				func_201(1);
				if (iVar278 != iVar18)
				{
					bVar279 = true;
					if (iVar18 == 0)
					{
						unk_0xB8A73E7DA87B2968(&Global_4008133, 23);
					}
				}
			}
			else
			{
				func_201(0);
			}
			if (bVar279)
			{
				func_200(iVar278);
				if ((func_199(unk_0xFB6B3EEFAB2DD12C(), 0) || func_49(func_198(), 0, 0)) && unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0))
				{
					func_223(1);
					Global_3934104 = 1;
					Global_3934102 = 999;
				}
			}
			if (!bVar5)
			{
				if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 27))
				{
					unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 27);
				}
				if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 28))
				{
					unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 28);
				}
			}
			if (((func_48(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0)) && bVar5) && !bVar279)
			{
				if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 17))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 17);
				}
				if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 16))
				{
					unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 16);
				}
				if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 18))
				{
					unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13), 18);
				}
				if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 7))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 7);
				}
				Global_3934102 = iVar262;
				Global_3934104 = 1;
			}
			else if (bVar5)
			{
				Global_3934102 = iVar262;
				if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97, 7))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_97), 7);
				}
			}
		}
	}
	else if (iVar0 == 8)
	{
		if (func_56(8, -1) <= 0)
		{
			bVar280 = false;
			unk_0xB8A73E7DA87B2968(&Global_4008133, 21);
		}
		else
		{
			bVar280 = true;
		}
		func_278(&uVar281, &uVar282, &uVar283, &uVar284, &uVar285, &uVar286, &uVar287, &iVar288, &iVar289, &iVar290, &iVar291, &uVar292, &uVar293, &uVar294, &uVar295, &uVar296, &uVar297);
		func_206(3992, iParam0, -1, 1);
		if (!func_265(iParam0))
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
		}
		else
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = 0;
		}
		func_112(3993, Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)], -1, 1, 0);
		func_229(iVar0, &iVar288);
		func_112(5277, iVar289, -1, 1, 0);
		func_112(5278, iVar290, -1, 1, 0);
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_65[iVar0] = iVar288;
		if (func_272(iParam0) == func_272(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && bVar7)
		{
			func_223(1);
		}
		if (!bVar280)
		{
			if (func_56(0, -1) <= 0)
			{
			}
		}
	}
	else if (iVar0 == 9)
	{
		func_278(&uVar298, &uVar299, &uVar300, &uVar301, &uVar302, &uVar303, &uVar304, &iVar305, &uVar306, &uVar307, &iVar308, &iVar309, &iVar310, &uVar311, &uVar312, &uVar313, &uVar314);
		if (func_56(9, -1) <= 0)
		{
			unk_0xB8A73E7DA87B2968(&Global_4008133, 22);
		}
		func_206(3995, iParam0, -1, 1);
		if (!func_265(iParam0))
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
		}
		else
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = 0;
		}
		func_112(3996, Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)], -1, 1, 0);
		func_229(iVar0, &iVar308);
		func_112(5279, iVar309, -1, 1, 0);
		func_112(5280, iVar310, -1, 1, 0);
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_65[iVar0] = iVar308;
		if (func_272(iParam0) == func_272(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && bVar7)
		{
			func_223(1);
		}
	}
	else if (iVar0 == 10)
	{
		func_278(&uVar315, &uVar316, &uVar317, &uVar318, &uVar319, &uVar320, &uVar321, &iVar322, &uVar323, &uVar324, &iVar325, &uVar326, &uVar327, &iVar328, &iVar329, &iVar330, &uVar331);
		if (func_56(10, -1) <= 0)
		{
			unk_0xB8A73E7DA87B2968(&Global_4008133, 22);
		}
		func_206(3998, iParam0, -1, 1);
		if (!func_265(iParam0))
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam0)) * Global_262145.f_77));
		}
		else
		{
			Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)] = 0;
		}
		func_112(3999, Global_2097152[func_205() /*10730*/].f_7546.f_1031[(iVar0 - 2)], -1, 1, 0);
		func_229(iVar0, &iVar328);
		func_112(5281, iVar329, -1, 1, 0);
		func_112(5282, iVar330, -1, 1, 0);
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_65[iVar0] = iVar328;
		if (func_272(iParam0) == func_272(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && bVar7)
		{
			func_223(1);
		}
	}
	else if (iVar0 == 11)
	{
	}
	unk_0xA93E75A5493862BD(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
	if (func_48(iParam0))
	{
		func_156(iLocal_319, 1);
		func_267(iParam0, "_S_PURCHASE_D_SUCCESS", 1, bVar5, 0, 0);
	}
	else if (func_49(iParam0, 0, 0))
	{
		func_156(iLocal_319, 1);
		func_267(iParam0, "_S_PURCHASE_D_SUCCESS", 1, bVar7, 0, 0);
	}
	iLocal_322 = iParam0;
}

void func_156(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	unk_0x3B6EF6403E3F1CAC(iParam0, "SET_DATA_SLOT_EMPTY");
	unk_0xBBAAC5B2437ACF2A();
	func_190(iParam0, bParam1);
	iVar0 = 3;
	iVar1 = 87;
	while (iVar1 <= 90)
	{
		if (func_56(5, -1) == iVar1)
		{
			func_157(&iVar0, iVar1, iParam0);
		}
		else if (!Global_262145.f_13350)
		{
			func_157(&iVar0, iVar1, iParam0);
		}
		iVar1++;
	}
	unk_0x3B6EF6403E3F1CAC(iParam0, "UPDATE_TEXT");
	unk_0xBBAAC5B2437ACF2A();
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
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
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
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
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	iVar0 = func_56(5, -1);
	iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(func_270(iParam1)) * Global_262145.f_77));
	bVar2 = func_188(iParam1);
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	iVar9 = -1;
	iVar10 = -1;
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = -1;
	iVar14 = -1;
	iVar15 = -1;
	iVar16 = -1;
	iVar17 = -1;
	iVar18 = -1;
	if (Global_262145.f_11204)
	{
		if (func_187(4, iParam1) != 0 && func_187(4, iParam1) > func_183(4, iParam1))
		{
			iVar3 = func_183(4, iParam1);
		}
		if (func_187(5, iParam1) != 0 && func_187(5, iParam1) > func_183(5, iParam1))
		{
			iVar4 = func_183(5, iParam1);
		}
		if (func_187(3, iParam1) != 0 && func_187(3, iParam1) > func_183(3, iParam1))
		{
			iVar5 = func_183(3, iParam1);
		}
		if (func_187(0, iParam1) != 0 && func_187(0, iParam1) > func_183(0, iParam1))
		{
			iVar6 = func_183(0, iParam1);
		}
		if (func_187(1, iParam1) != 0 && func_187(1, iParam1) > func_183(1, iParam1))
		{
			iVar7 = func_183(1, iParam1);
		}
		if (func_187(2, iParam1) != 0 && func_187(2, iParam1) > func_183(2, iParam1))
		{
			iVar8 = func_183(2, iParam1);
		}
		if (func_187(6, iParam1) != 0 && func_187(6, iParam1) > func_183(6, iParam1))
		{
			iVar9 = func_183(6, iParam1);
		}
		if (func_187(7, iParam1) != 0 && func_187(7, iParam1) > func_183(7, iParam1))
		{
			iVar10 = func_183(7, iParam1);
		}
		if (func_187(8, iParam1) != 0 && func_187(8, iParam1) > func_183(8, iParam1))
		{
			iVar11 = func_183(8, iParam1);
		}
		if (iVar0 != iParam1)
		{
		}
		else
		{
			if (func_182(1, 0) != 0 && func_182(1, 0) > func_181(1, 0))
			{
				iVar12 = func_181(1, 0);
			}
			if (func_182(1, 1) != 0 && func_182(1, 1) > func_181(1, 1))
			{
				iVar13 = func_181(1, 1);
			}
			if (func_182(2, -1) != 0 && func_182(2, -1) > func_181(2, -1))
			{
				iVar14 = func_181(2, -1);
			}
			if (func_182(7, -1) != 0 && func_182(7, -1) > func_181(7, -1))
			{
				iVar15 = func_181(7, -1);
			}
		}
		if (func_182(4, -1) != 0 && func_182(4, -1) > func_181(4, -1))
		{
			iVar16 = func_181(4, -1);
		}
		if (func_182(5, -1) != 0 && func_182(5, -1) > func_181(5, -1))
		{
			iVar17 = func_181(5, -1);
		}
		if (func_182(6, -1) != 0 && func_182(6, -1) > func_181(6, -1))
		{
			iVar18 = func_181(6, -1);
		}
	}
	unk_0x3B6EF6403E3F1CAC(iParam2, "SET_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	unk_0x1B215CC37BF52E79(iParam1);
	func_180(&(Global_1049427[iParam1 /*1942*/].f_16));
	unk_0x573CAEB6F4A4E750(Global_1049427[iParam1 /*1942*/].f_3[0 /*3*/]);
	unk_0x573CAEB6F4A4E750(Global_1049427[iParam1 /*1942*/].f_3[0 /*3*/].f_1);
	func_178(func_179(iParam1));
	func_180(&(Global_1049427[iParam1 /*1942*/].f_20));
	if (bVar2)
	{
		unk_0x1B215CC37BF52E79(func_177(Global_1049427[iParam1 /*1942*/].f_31));
	}
	else
	{
		unk_0x1B215CC37BF52E79(iVar1);
	}
	if (iVar0 != iParam1)
	{
		unk_0x1B215CC37BF52E79(0);
	}
	else if (iVar3 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(4, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(4, iParam1));
	}
	if (iVar4 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(5, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(5, iParam1));
	}
	if (iVar5 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(3, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(3, iParam1));
	}
	if (iVar6 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(0, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(0, iParam1));
	}
	if (iVar7 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(1, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(1, iParam1));
	}
	if (iVar8 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(2, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(2, iParam1));
	}
	if (iVar9 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(6, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(6, iParam1));
	}
	if (iVar10 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(7, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(7, iParam1));
	}
	if (iVar11 == -1)
	{
		unk_0x1B215CC37BF52E79(func_183(8, iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_187(8, iParam1));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (iVar0 != iParam1)
	{
		unk_0x1B215CC37BF52E79(0);
		unk_0x1B215CC37BF52E79(0);
		unk_0x1B215CC37BF52E79(0);
		unk_0x1B215CC37BF52E79(0);
	}
	else
	{
		if (iVar12 == -1)
		{
			unk_0x1B215CC37BF52E79(func_181(1, 0));
		}
		else
		{
			unk_0x1B215CC37BF52E79(func_182(1, 0));
		}
		if (iVar13 == -1)
		{
			unk_0x1B215CC37BF52E79(func_181(1, 1));
		}
		else
		{
			unk_0x1B215CC37BF52E79(func_182(1, 1));
		}
		if (iVar14 == -1)
		{
			unk_0x1B215CC37BF52E79(func_181(2, -1));
		}
		else
		{
			unk_0x1B215CC37BF52E79(func_182(2, -1));
		}
		if (iVar15 == -1)
		{
			unk_0x1B215CC37BF52E79(func_181(7, -1));
		}
		else
		{
			unk_0x1B215CC37BF52E79(func_182(7, -1));
		}
	}
	if (iVar16 == -1)
	{
		unk_0x1B215CC37BF52E79(func_181(4, -1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_182(4, -1));
	}
	if (iVar17 == -1)
	{
		unk_0x1B215CC37BF52E79(func_181(5, -1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_182(5, -1));
	}
	if (iVar18 == -1)
	{
		unk_0x1B215CC37BF52E79(func_181(6, -1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_182(6, -1));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (bVar2)
	{
		unk_0x1B215CC37BF52E79(iVar1);
	}
	else
	{
		unk_0x1B215CC37BF52E79(-1);
	}
	if (iVar0 != iParam1)
	{
		unk_0x1B215CC37BF52E79(-1);
	}
	else
	{
		unk_0x1B215CC37BF52E79(iVar3);
	}
	unk_0x1B215CC37BF52E79(iVar4);
	unk_0x1B215CC37BF52E79(iVar5);
	unk_0x1B215CC37BF52E79(iVar6);
	unk_0x1B215CC37BF52E79(iVar7);
	unk_0x1B215CC37BF52E79(iVar8);
	unk_0x1B215CC37BF52E79(iVar9);
	unk_0x1B215CC37BF52E79(iVar10);
	unk_0x1B215CC37BF52E79(iVar11);
	unk_0x1B215CC37BF52E79(iVar12);
	unk_0x1B215CC37BF52E79(iVar13);
	unk_0x1B215CC37BF52E79(iVar14);
	unk_0x1B215CC37BF52E79(iVar15);
	unk_0x1B215CC37BF52E79(iVar16);
	unk_0x1B215CC37BF52E79(iVar17);
	unk_0x1B215CC37BF52E79(iVar18);
	unk_0xBBAAC5B2437ACF2A();
	iVar19 = -1;
	iVar20 = -1;
	iVar21 = -1;
	iVar22 = -1;
	iVar23 = -1;
	iVar24 = -1;
	iVar25 = -1;
	iVar26 = -1;
	iVar27 = -1;
	iVar28 = -1;
	iVar29 = -1;
	iVar30 = -1;
	iVar31 = -1;
	iVar32 = -1;
	iVar33 = -1;
	iVar34 = -1;
	iVar35 = -1;
	iVar36 = -1;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	iVar44 = -1;
	iVar45 = -1;
	iVar46 = -1;
	iVar47 = -1;
	iVar48 = -1;
	iVar49 = -1;
	iVar50 = -1;
	iVar51 = -1;
	iVar52 = -1;
	iVar53 = -1;
	iVar54 = -1;
	iVar55 = -1;
	iVar56 = -1;
	iVar57 = -1;
	iVar58 = -1;
	iVar59 = -1;
	iVar60 = -1;
	iVar61 = -1;
	iVar62 = -1;
	iVar63 = -1;
	iVar64 = -1;
	iVar65 = -1;
	iVar66 = -1;
	iVar67 = -1;
	iVar68 = -1;
	iVar69 = -1;
	iVar70 = -1;
	iVar71 = -1;
	iVar72 = -1;
	iVar73 = -1;
	iVar74 = -1;
	iVar75 = -1;
	iVar76 = -1;
	iVar77 = -1;
	iVar78 = -1;
	iVar79 = -1;
	iVar80 = -1;
	iVar81 = -1;
	iVar82 = -1;
	iVar83 = -1;
	iVar84 = -1;
	iVar85 = -1;
	iVar86 = -1;
	iVar87 = -1;
	iVar88 = -1;
	iVar89 = -1;
	iVar90 = -1;
	iVar91 = -1;
	iVar92 = -1;
	iVar93 = -1;
	iVar94 = -1;
	iVar95 = -1;
	iVar96 = -1;
	iVar97 = -1;
	iVar98 = -1;
	iVar99 = -1;
	iVar100 = -1;
	iVar101 = -1;
	iVar102 = -1;
	iVar103 = -1;
	iVar104 = -1;
	iVar105 = -1;
	if (Global_262145.f_11204)
	{
		if (func_176(iParam1) != 0 && func_176(iParam1) > func_175(iParam1))
		{
			iVar19 = func_175(iParam1);
		}
		if (func_174(0, 103) != 0 && func_174(0, 103) > func_170(0, 103))
		{
			iVar20 = func_170(0, 103);
		}
		if (func_174(1, 103) != 0 && func_174(1, 103) > func_170(1, 103))
		{
			iVar21 = func_170(1, 103);
		}
		if (func_174(2, 103) != 0 && func_174(2, 103) > func_170(2, 103))
		{
			iVar22 = func_170(2, 103);
		}
		if (func_174(3, 103) != 0 && func_174(3, 103) > func_170(3, 103))
		{
			iVar23 = func_170(3, 103);
		}
		if (func_169(103, 8, 0) != 0 && func_169(103, 8, 0) > func_163(103, 8, 0))
		{
			iVar24 = func_163(103, 8, 0);
		}
		if (func_169(103, 8, 1) != 0 && func_169(103, 8, 1) > func_163(103, 8, 1))
		{
			iVar25 = func_163(103, 8, 1);
		}
		if (func_169(103, 8, 2) != 0 && func_169(103, 8, 2) > func_163(103, 8, 2))
		{
			iVar26 = func_163(103, 8, 2);
		}
		if (func_169(103, 8, 3) != 0 && func_169(103, 8, 3) > func_163(103, 8, 3))
		{
			iVar27 = func_163(103, 8, 3);
		}
		if (func_169(103, 8, 4) != 0 && func_169(103, 8, 4) > func_163(103, 8, 4))
		{
			iVar28 = func_163(103, 8, 4);
		}
		if (func_169(103, 8, 5) != 0 && func_169(103, 8, 5) > func_163(103, 8, 5))
		{
			iVar29 = func_163(103, 8, 5);
		}
		if (func_169(103, 8, 6) != 0 && func_169(103, 8, 6) > func_163(103, 8, 6))
		{
			iVar30 = func_163(103, 8, 6);
		}
		if (func_169(103, 8, 7) != 0 && func_169(103, 8, 7) > func_163(103, 8, 7))
		{
			iVar31 = func_163(103, 8, 7);
		}
		if (func_169(103, 8, 8) != 0 && func_169(103, 8, 8) > func_163(103, 8, 8))
		{
			iVar32 = func_163(103, 8, 8);
		}
		if (func_169(103, 9, 0) != 0 && func_169(103, 9, 0) > func_163(103, 9, 0))
		{
			iVar33 = func_163(103, 9, 0);
		}
		if (func_169(103, 9, 1) != 0 && func_169(103, 9, 1) > func_163(103, 9, 1))
		{
			iVar34 = func_163(103, 9, 1);
		}
		if (func_169(103, 9, 2) != 0 && func_169(103, 9, 2) > func_163(103, 9, 2))
		{
			iVar35 = func_163(103, 9, 2);
		}
		if (func_169(103, 9, 3) != 0 && func_169(103, 9, 3) > func_163(103, 9, 3))
		{
			iVar36 = func_163(103, 9, 3);
		}
		if (func_169(103, 9, 4) != 0 && func_169(103, 9, 4) > func_163(103, 9, 4))
		{
			iVar37 = func_163(103, 9, 4);
		}
		if (func_169(103, 9, 5) != 0 && func_169(103, 9, 5) > func_163(103, 9, 5))
		{
			iVar38 = func_163(103, 9, 5);
		}
		if (func_169(103, 9, 6) != 0 && func_169(103, 9, 6) > func_163(103, 9, 6))
		{
			iVar39 = func_163(103, 9, 6);
		}
		if (func_169(103, 9, 7) != 0 && func_169(103, 9, 7) > func_163(103, 9, 7))
		{
			iVar40 = func_163(103, 9, 7);
		}
		if (func_169(103, 9, 8) != 0 && func_169(103, 9, 8) > func_163(103, 9, 8))
		{
			iVar41 = func_163(103, 9, 8);
		}
		if (func_174(0, 104) != 0 && func_174(0, 104) > func_170(0, 104))
		{
			iVar42 = func_170(0, 104);
		}
		if (func_174(1, 104) != 0 && func_174(1, 104) > func_170(1, 104))
		{
			iVar43 = func_170(1, 104);
		}
		if (func_174(2, 104) != 0 && func_174(2, 104) > func_170(2, 104))
		{
			iVar44 = func_170(2, 104);
		}
		if (func_174(3, 104) != 0 && func_174(3, 104) > func_170(3, 104))
		{
			iVar45 = func_170(3, 104);
		}
		if (func_169(104, 8, 0) != 0 && func_169(104, 8, 0) > func_163(104, 8, 0))
		{
			iVar46 = func_163(104, 8, 0);
		}
		if (func_169(104, 8, 1) != 0 && func_169(104, 8, 1) > func_163(104, 8, 1))
		{
			iVar47 = func_163(104, 8, 1);
		}
		if (func_169(104, 8, 2) != 0 && func_169(104, 8, 2) > func_163(104, 8, 2))
		{
			iVar48 = func_163(104, 8, 2);
		}
		if (func_169(104, 8, 3) != 0 && func_169(104, 8, 3) > func_163(104, 8, 3))
		{
			iVar49 = func_163(104, 8, 3);
		}
		if (func_169(104, 8, 4) != 0 && func_169(104, 8, 4) > func_163(104, 8, 4))
		{
			iVar50 = func_163(104, 8, 4);
		}
		if (func_169(104, 8, 5) != 0 && func_169(104, 8, 5) > func_163(104, 8, 5))
		{
			iVar51 = func_163(104, 8, 5);
		}
		if (func_169(104, 8, 6) != 0 && func_169(104, 8, 6) > func_163(104, 8, 6))
		{
			iVar52 = func_163(104, 8, 6);
		}
		if (func_169(104, 8, 7) != 0 && func_169(104, 8, 7) > func_163(104, 8, 7))
		{
			iVar53 = func_163(104, 8, 7);
		}
		if (func_169(104, 8, 8) != 0 && func_169(104, 8, 8) > func_163(104, 8, 8))
		{
			iVar54 = func_163(104, 8, 8);
		}
		if (func_169(104, 9, 0) != 0 && func_169(104, 9, 0) > func_163(104, 9, 0))
		{
			iVar55 = func_163(104, 9, 0);
		}
		if (func_169(104, 9, 1) != 0 && func_169(104, 9, 1) > func_163(104, 9, 1))
		{
			iVar56 = func_163(104, 9, 1);
		}
		if (func_169(104, 9, 2) != 0 && func_169(104, 9, 2) > func_163(104, 9, 2))
		{
			iVar57 = func_163(104, 9, 2);
		}
		if (func_169(104, 9, 3) != 0 && func_169(104, 9, 3) > func_163(104, 9, 3))
		{
			iVar58 = func_163(104, 9, 3);
		}
		if (func_169(104, 9, 4) != 0 && func_169(104, 9, 4) > func_163(104, 9, 4))
		{
			iVar59 = func_163(104, 9, 4);
		}
		if (func_169(104, 9, 5) != 0 && func_169(104, 9, 5) > func_163(104, 9, 5))
		{
			iVar60 = func_163(104, 9, 5);
		}
		if (func_169(104, 9, 6) != 0 && func_169(104, 9, 6) > func_163(104, 9, 6))
		{
			iVar61 = func_163(104, 9, 6);
		}
		if (func_169(104, 9, 7) != 0 && func_169(104, 9, 7) > func_163(104, 9, 7))
		{
			iVar62 = func_163(104, 9, 7);
		}
		if (func_169(104, 9, 8) != 0 && func_169(104, 9, 8) > func_163(104, 9, 8))
		{
			iVar63 = func_163(104, 9, 8);
		}
		if (func_174(0, 105) != 0 && func_174(0, 105) > func_170(0, 105))
		{
			iVar64 = func_170(0, 105);
		}
		if (func_174(1, 105) != 0 && func_174(1, 105) > func_170(1, 105))
		{
			iVar65 = func_170(1, 105);
		}
		if (func_174(2, 105) != 0 && func_174(2, 105) > func_170(2, 105))
		{
			iVar66 = func_170(2, 105);
		}
		if (func_174(3, 105) != 0 && func_174(3, 105) > func_170(3, 105))
		{
			iVar67 = func_170(3, 105);
		}
		if (func_169(105, 8, 0) != 0 && func_169(105, 8, 0) > func_163(105, 8, 0))
		{
			iVar68 = func_163(105, 8, 0);
		}
		if (func_169(105, 8, 1) != 0 && func_169(105, 8, 1) > func_163(105, 8, 1))
		{
			iVar69 = func_163(105, 8, 1);
		}
		if (func_169(105, 8, 2) != 0 && func_169(105, 8, 2) > func_163(105, 8, 2))
		{
			iVar70 = func_163(105, 8, 2);
		}
		if (func_169(105, 8, 3) != 0 && func_169(105, 8, 3) > func_163(105, 8, 3))
		{
			iVar71 = func_163(105, 8, 3);
		}
		if (func_169(105, 8, 4) != 0 && func_169(105, 8, 4) > func_163(105, 8, 4))
		{
			iVar72 = func_163(105, 8, 4);
		}
		if (func_169(105, 8, 5) != 0 && func_169(105, 8, 5) > func_163(105, 8, 5))
		{
			iVar73 = func_163(105, 8, 5);
		}
		if (func_169(105, 8, 6) != 0 && func_169(105, 8, 6) > func_163(105, 8, 6))
		{
			iVar74 = func_163(105, 8, 6);
		}
		if (func_169(105, 8, 7) != 0 && func_169(105, 8, 7) > func_163(105, 8, 7))
		{
			iVar75 = func_163(105, 8, 7);
		}
		if (func_169(105, 8, 8) != 0 && func_169(105, 8, 8) > func_163(105, 8, 8))
		{
			iVar76 = func_163(105, 8, 8);
		}
		if (func_169(105, 9, 0) != 0 && func_169(105, 9, 0) > func_163(105, 9, 0))
		{
			iVar77 = func_163(105, 9, 0);
		}
		if (func_169(105, 9, 1) != 0 && func_169(105, 9, 1) > func_163(105, 9, 1))
		{
			iVar78 = func_163(105, 9, 1);
		}
		if (func_169(105, 9, 2) != 0 && func_169(105, 9, 2) > func_163(105, 9, 2))
		{
			iVar79 = func_163(105, 9, 2);
		}
		if (func_169(105, 9, 3) != 0 && func_169(105, 9, 3) > func_163(105, 9, 3))
		{
			iVar80 = func_163(105, 9, 3);
		}
		if (func_169(105, 9, 4) != 0 && func_169(105, 9, 4) > func_163(105, 9, 4))
		{
			iVar81 = func_163(105, 9, 4);
		}
		if (func_169(105, 9, 5) != 0 && func_169(105, 9, 5) > func_163(105, 9, 5))
		{
			iVar82 = func_163(105, 9, 5);
		}
		if (func_169(105, 9, 6) != 0 && func_169(105, 9, 6) > func_163(105, 9, 6))
		{
			iVar83 = func_163(105, 9, 6);
		}
		if (func_169(105, 9, 7) != 0 && func_169(105, 9, 7) > func_163(105, 9, 7))
		{
			iVar84 = func_163(105, 9, 7);
		}
		if (func_169(105, 9, 8) != 0 && func_169(105, 9, 8) > func_163(105, 9, 8))
		{
			iVar85 = func_163(105, 9, 8);
		}
		if (func_161(iParam1, 1) != 0 && func_161(iParam1, 1) > func_159(iParam1, 1))
		{
			iVar86 = func_159(iParam1, 1);
		}
		if (func_161(iParam1, 2) != 0 && func_161(iParam1, 2) > func_159(iParam1, 2))
		{
			iVar87 = func_159(iParam1, 2);
		}
		if (func_161(iParam1, 3) != 0 && func_161(iParam1, 3) > func_159(iParam1, 3))
		{
			iVar88 = func_159(iParam1, 3);
		}
		if (func_161(iParam1, 4) != 0 && func_161(iParam1, 4) > func_159(iParam1, 4))
		{
			iVar89 = func_159(iParam1, 4);
		}
		if (func_161(iParam1, 5) != 0 && func_161(iParam1, 5) > func_159(iParam1, 5))
		{
			iVar90 = func_159(iParam1, 5);
		}
		if (func_161(iParam1, 6) != 0 && func_161(iParam1, 6) > func_159(iParam1, 6))
		{
			iVar91 = func_159(iParam1, 6);
		}
		if (func_161(iParam1, 7) != 0 && func_161(iParam1, 7) > func_159(iParam1, 7))
		{
			iVar92 = func_159(iParam1, 7);
		}
		if (func_161(iParam1, 8) != 0 && func_161(iParam1, 8) > func_159(iParam1, 8))
		{
			iVar93 = func_159(iParam1, 8);
		}
		if (func_161(iParam1, 9) != 0 && func_161(iParam1, 9) > func_159(iParam1, 9))
		{
			iVar94 = func_159(iParam1, 9);
		}
		if (func_161(iParam1, 10) != 0 && func_161(iParam1, 10) > func_159(iParam1, 10))
		{
			iVar95 = func_159(iParam1, 10);
		}
		if (func_161(iParam1, 11) != 0 && func_161(iParam1, 11) > func_159(iParam1, 11))
		{
			iVar96 = func_159(iParam1, 11);
		}
		if (func_161(iParam1, 12) != 0 && func_161(iParam1, 12) > func_159(iParam1, 12))
		{
			iVar97 = func_159(iParam1, 12);
		}
		if (func_161(iParam1, 13) != 0 && func_161(iParam1, 13) > func_159(iParam1, 13))
		{
			iVar98 = func_159(iParam1, 13);
		}
		if (func_161(iParam1, 14) != 0 && func_161(iParam1, 14) > func_159(iParam1, 14))
		{
			iVar99 = func_159(iParam1, 14);
		}
		if (func_161(iParam1, 15) != 0 && func_161(iParam1, 15) > func_159(iParam1, 15))
		{
			iVar100 = func_159(iParam1, 15);
		}
		if (func_161(iParam1, 16) != 0 && func_161(iParam1, 16) > func_159(iParam1, 16))
		{
			iVar101 = func_159(iParam1, 16);
		}
		if (func_161(iParam1, 17) != 0 && func_161(iParam1, 17) > func_159(iParam1, 17))
		{
			iVar102 = func_159(iParam1, 17);
		}
		if (func_161(iParam1, 18) != 0 && func_161(iParam1, 18) > func_159(iParam1, 18))
		{
			iVar103 = func_159(iParam1, 18);
		}
		if (func_161(iParam1, 19) != 0 && func_161(iParam1, 19) > func_159(iParam1, 19))
		{
			iVar104 = func_159(iParam1, 19);
		}
		if (func_161(iParam1, 20) != 0 && func_161(iParam1, 20) > func_159(iParam1, 20))
		{
			iVar105 = func_159(iParam1, 20);
		}
	}
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	func_180(func_158(iParam1));
	if (iVar19 == -1)
	{
		unk_0x1B215CC37BF52E79(func_175(iParam1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_176(iParam1));
	}
	if (iVar20 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(0, 103));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(0, 103));
	}
	if (iVar21 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(1, 103));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(1, 103));
	}
	if (iVar22 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(2, 103));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(2, 103));
	}
	if (iVar23 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(3, 103));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(3, 103));
	}
	if (iVar24 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 0));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 0));
	}
	if (iVar25 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 1));
	}
	if (iVar26 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 2));
	}
	if (iVar27 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 3));
	}
	if (iVar28 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 4));
	}
	if (iVar29 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 5));
	}
	if (iVar30 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 6));
	}
	if (iVar31 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 7));
	}
	if (iVar32 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 8, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 8, 8));
	}
	if (iVar33 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 0));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 0));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (iVar34 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 1));
	}
	if (iVar35 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 2));
	}
	if (iVar36 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 3));
	}
	if (iVar37 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 4));
	}
	if (iVar38 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 5));
	}
	if (iVar39 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 6));
	}
	if (iVar40 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 7));
	}
	if (iVar41 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(103, 9, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(103, 9, 8));
	}
	if (iVar42 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(0, 104));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(0, 104));
	}
	if (iVar43 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(1, 104));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(1, 104));
	}
	if (iVar44 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(2, 104));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(2, 104));
	}
	if (iVar45 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(3, 104));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(3, 104));
	}
	if (iVar46 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 0));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 0));
	}
	if (iVar47 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 1));
	}
	if (iVar48 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 2));
	}
	if (iVar49 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 3));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (iVar50 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 4));
	}
	if (iVar51 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 5));
	}
	if (iVar52 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 6));
	}
	if (iVar53 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 7));
	}
	if (iVar54 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 8, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 8, 8));
	}
	if (iVar55 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 0));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 0));
	}
	if (iVar56 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 1));
	}
	if (iVar57 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 2));
	}
	if (iVar58 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 3));
	}
	if (iVar59 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 4));
	}
	if (iVar60 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 5));
	}
	if (iVar61 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 6));
	}
	if (iVar62 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 7));
	}
	if (iVar63 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(104, 9, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(104, 9, 8));
	}
	if (iVar64 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(0, 105));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(0, 105));
	}
	if (iVar65 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(1, 105));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(1, 105));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (iVar66 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(2, 105));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(2, 105));
	}
	if (iVar67 == -1)
	{
		unk_0x1B215CC37BF52E79(func_170(3, 105));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_174(3, 105));
	}
	if (iVar68 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 0));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 0));
	}
	if (iVar69 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 1));
	}
	if (iVar70 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 2));
	}
	if (iVar71 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 3));
	}
	if (iVar72 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 4));
	}
	if (iVar73 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 5));
	}
	if (iVar74 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 6));
	}
	if (iVar75 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 7));
	}
	if (iVar76 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 8, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 8, 8));
	}
	if (iVar77 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 0));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 0));
	}
	if (iVar78 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 1));
	}
	if (iVar79 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 2));
	}
	if (iVar80 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 3));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (iVar81 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 4));
	}
	if (iVar82 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 5));
	}
	if (iVar83 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 6));
	}
	if (iVar84 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 7));
	}
	if (iVar85 == -1)
	{
		unk_0x1B215CC37BF52E79(func_163(105, 9, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_169(105, 9, 8));
	}
	if (iVar86 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 1));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 1));
	}
	if (iVar87 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 2));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 2));
	}
	if (iVar88 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 3));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 3));
	}
	if (iVar89 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 4));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 4));
	}
	if (iVar90 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 5));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 5));
	}
	if (iVar91 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 6));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 6));
	}
	if (iVar92 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 7));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 7));
	}
	if (iVar93 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 8));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 8));
	}
	if (iVar94 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 9));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 9));
	}
	if (iVar95 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 10));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 10));
	}
	if (iVar96 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 11));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 11));
	}
	if (iVar97 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 12));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 12));
	}
	if (iVar98 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 13));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 13));
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	if (iVar99 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 14));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 14));
	}
	if (iVar100 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 15));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 15));
	}
	if (iVar101 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 16));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 16));
	}
	if (iVar102 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 17));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 17));
	}
	if (iVar103 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 18));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 18));
	}
	if (iVar104 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 19));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 19));
	}
	if (iVar105 == -1)
	{
		unk_0x1B215CC37BF52E79(func_159(iParam1, 20));
	}
	else
	{
		unk_0x1B215CC37BF52E79(func_161(iParam1, 20));
	}
	unk_0x1B215CC37BF52E79(iVar19);
	unk_0x1B215CC37BF52E79(iVar20);
	unk_0x1B215CC37BF52E79(iVar21);
	unk_0x1B215CC37BF52E79(iVar22);
	unk_0x1B215CC37BF52E79(iVar23);
	unk_0x1B215CC37BF52E79(iVar24);
	unk_0x1B215CC37BF52E79(iVar25);
	unk_0x1B215CC37BF52E79(iVar26);
	unk_0x1B215CC37BF52E79(iVar27);
	unk_0x1B215CC37BF52E79(iVar28);
	unk_0x1B215CC37BF52E79(iVar29);
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	unk_0x1B215CC37BF52E79(iVar30);
	unk_0x1B215CC37BF52E79(iVar31);
	unk_0x1B215CC37BF52E79(iVar32);
	unk_0x1B215CC37BF52E79(iVar33);
	unk_0x1B215CC37BF52E79(iVar34);
	unk_0x1B215CC37BF52E79(iVar35);
	unk_0x1B215CC37BF52E79(iVar36);
	unk_0x1B215CC37BF52E79(iVar37);
	unk_0x1B215CC37BF52E79(iVar38);
	unk_0x1B215CC37BF52E79(iVar39);
	unk_0x1B215CC37BF52E79(iVar40);
	unk_0x1B215CC37BF52E79(iVar41);
	unk_0x1B215CC37BF52E79(iVar42);
	unk_0x1B215CC37BF52E79(iVar43);
	unk_0x1B215CC37BF52E79(iVar44);
	unk_0x1B215CC37BF52E79(iVar45);
	unk_0x1B215CC37BF52E79(iVar46);
	unk_0x1B215CC37BF52E79(iVar47);
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	unk_0x1B215CC37BF52E79(iVar48);
	unk_0x1B215CC37BF52E79(iVar49);
	unk_0x1B215CC37BF52E79(iVar50);
	unk_0x1B215CC37BF52E79(iVar51);
	unk_0x1B215CC37BF52E79(iVar52);
	unk_0x1B215CC37BF52E79(iVar53);
	unk_0x1B215CC37BF52E79(iVar54);
	unk_0x1B215CC37BF52E79(iVar55);
	unk_0x1B215CC37BF52E79(iVar56);
	unk_0x1B215CC37BF52E79(iVar57);
	unk_0x1B215CC37BF52E79(iVar58);
	unk_0x1B215CC37BF52E79(iVar59);
	unk_0x1B215CC37BF52E79(iVar60);
	unk_0x1B215CC37BF52E79(iVar61);
	unk_0x1B215CC37BF52E79(iVar62);
	unk_0x1B215CC37BF52E79(iVar63);
	unk_0x1B215CC37BF52E79(iVar64);
	unk_0x1B215CC37BF52E79(iVar65);
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	unk_0x1B215CC37BF52E79(iVar66);
	unk_0x1B215CC37BF52E79(iVar67);
	unk_0x1B215CC37BF52E79(iVar68);
	unk_0x1B215CC37BF52E79(iVar69);
	unk_0x1B215CC37BF52E79(iVar70);
	unk_0x1B215CC37BF52E79(iVar71);
	unk_0x1B215CC37BF52E79(iVar72);
	unk_0x1B215CC37BF52E79(iVar73);
	unk_0x1B215CC37BF52E79(iVar74);
	unk_0x1B215CC37BF52E79(iVar75);
	unk_0x1B215CC37BF52E79(iVar76);
	unk_0x1B215CC37BF52E79(iVar77);
	unk_0x1B215CC37BF52E79(iVar78);
	unk_0x1B215CC37BF52E79(iVar79);
	unk_0x1B215CC37BF52E79(iVar80);
	unk_0x1B215CC37BF52E79(iVar81);
	unk_0x1B215CC37BF52E79(iVar82);
	unk_0x1B215CC37BF52E79(iVar83);
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	unk_0x1B215CC37BF52E79(iVar84);
	unk_0x1B215CC37BF52E79(iVar85);
	unk_0x1B215CC37BF52E79(iVar86);
	unk_0x1B215CC37BF52E79(iVar87);
	unk_0x1B215CC37BF52E79(iVar88);
	unk_0x1B215CC37BF52E79(iVar89);
	unk_0x1B215CC37BF52E79(iVar90);
	unk_0x1B215CC37BF52E79(iVar91);
	unk_0x1B215CC37BF52E79(iVar92);
	unk_0x1B215CC37BF52E79(iVar93);
	unk_0x1B215CC37BF52E79(iVar94);
	unk_0x1B215CC37BF52E79(iVar95);
	unk_0x1B215CC37BF52E79(iVar96);
	unk_0x1B215CC37BF52E79(iVar97);
	unk_0x1B215CC37BF52E79(iVar98);
	unk_0x1B215CC37BF52E79(iVar99);
	unk_0x1B215CC37BF52E79(iVar100);
	unk_0x1B215CC37BF52E79(iVar101);
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(*iParam0);
	unk_0x1B215CC37BF52E79(iVar102);
	unk_0x1B215CC37BF52E79(iVar103);
	unk_0x1B215CC37BF52E79(iVar104);
	unk_0x1B215CC37BF52E79(iVar105);
	unk_0xBBAAC5B2437ACF2A();
	*iParam0++;
}

char* func_158(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 87:
			sVar0 = "MP_GAR_96DES";
			break;
		
		case 88:
			sVar0 = "MP_GAR_97DES";
			break;
		
		case 89:
			sVar0 = "MP_GAR_98DES";
			break;
		
		case 90:
			sVar0 = "MP_GAR_99DES";
			break;
	}
	return sVar0;
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_181(14, iParam1);
	if (!func_202())
	{
		iVar0 = func_160(iParam0);
		if (iParam1 == 1)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = func_181(14, iParam1);
		}
	}
	else
	{
		iVar1 = func_181(14, iParam1);
	}
	return (iVar0 + iVar1);
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			return Global_262145.f_17120;
		
		case 88:
			return Global_262145.f_17120;
		
		case 89:
			return Global_262145.f_17120;
		
		case 90:
			return Global_262145.f_17120;
		
		default:
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_182(14, iParam1);
	if (!func_202())
	{
		iVar0 = func_162(iParam0);
		if (iParam1 == 1)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = func_182(14, iParam1);
		}
	}
	else
	{
		iVar1 = func_182(14, iParam1);
	}
	return (iVar0 + iVar1);
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			return 900000;
		
		case 88:
			return 900000;
		
		case 89:
			return 900000;
		
		case 90:
			return 900000;
		
		default:
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_181(iParam1, iParam2);
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
			if (!func_168())
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 8)
			{
				if (func_167(iParam2) == func_101(5277, -1))
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 9)
			{
				if (func_166(iParam2) == func_101(5278, -1))
				{
					iVar0 = 0;
				}
			}
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			if (!func_165())
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 10)
			{
				if (func_167(iParam2) == func_101(5279, -1))
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 11)
			{
				if (func_166(iParam2) == func_101(5280, -1))
				{
					iVar0 = 0;
				}
			}
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			if (!func_164())
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 12)
			{
				if (func_167(iParam2) == func_101(5281, -1))
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 13)
			{
				if (func_166(iParam2) == func_101(5282, -1))
				{
					iVar0 = 0;
				}
			}
			break;
	}
	return iVar0;
}

bool func_164()
{
	return func_56(10, -1) != 0;
}

bool func_165()
{
	return func_56(9, -1) != 0;
}

int func_166(int iParam0)
{
	if (iParam0 == 0)
	{
		return 6;
	}
	else if (iParam0 == 1)
	{
		return 7;
	}
	else if (iParam0 == 2)
	{
		return 8;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 5)
	{
		return 0;
	}
	else if (iParam0 == 6)
	{
		return 5;
	}
	else if (iParam0 == 7)
	{
		return 4;
	}
	else if (iParam0 == 8)
	{
		return 3;
	}
	return 1;
}

int func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return 3;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 3)
	{
		return 6;
	}
	else if (iParam0 == 4)
	{
		return 5;
	}
	else if (iParam0 == 5)
	{
		return 4;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	else if (iParam0 == 7)
	{
		return 1;
	}
	else if (iParam0 == 8)
	{
		return 8;
	}
	return 1;
}

bool func_168()
{
	return func_56(8, -1) != 0;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_182(iParam1, iParam2);
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
			if (!func_168())
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 8)
			{
				if (func_167(iParam2) == func_101(5277, -1))
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 9)
			{
				if (func_166(iParam2) == func_101(5278, -1))
				{
					iVar0 = 0;
				}
			}
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			if (!func_165())
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 10)
			{
				if (func_167(iParam2) == func_101(5279, -1))
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 11)
			{
				if (func_166(iParam2) == func_101(5280, -1))
				{
					iVar0 = 0;
				}
			}
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			if (!func_164())
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 12)
			{
				if (func_167(iParam2) == func_101(5281, -1))
				{
					iVar0 = 0;
				}
			}
			else if (iParam1 == 13)
			{
				if (func_166(iParam2) == func_101(5282, -1))
				{
					iVar0 = 0;
				}
			}
			break;
	}
	return iVar0;
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_183(iParam0, iParam1);
	switch (iParam1)
	{
		case 103:
		case 106:
		case 109:
		case 112:
			if (!func_168())
			{
				iVar0 = func_172(iParam1);
				if (iParam0 == 0)
				{
					iVar1 = 0;
				}
			}
			else if (func_171(iParam0) == func_230(8, -1))
			{
				iVar1 = 0;
			}
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			if (!func_165())
			{
				iVar0 = func_172(iParam1);
				if (iParam0 == 0)
				{
					iVar1 = 0;
				}
			}
			else if (func_171(iParam0) == func_230(9, -1))
			{
				iVar1 = 0;
			}
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			if (!func_164())
			{
				iVar0 = func_172(iParam1);
				if (iParam0 == 0)
				{
					iVar1 = 0;
				}
			}
			else if (func_171(iParam0) == func_230(10, -1))
			{
				iVar1 = 0;
			}
			break;
	}
	return (iVar0 + iVar1);
}

int func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 3;
	}
	return 1;
}

int func_172(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar17;
	var uVar18;
	struct<4> Var19;
	struct<4> Var23;
	
	if (unk_0x1995B52453EF6537() && unk_0x2D337DD29A7ABD30())
	{
		iVar0 = 0;
		if (func_265(iParam0))
		{
			iVar0 = 1;
		}
		func_173(&sVar1, iParam0, iVar0);
		iVar17 = unk_0x6D9FF4C899CD785F(&sVar1);
		if (unk_0x8BF28AE5815EF02F(iVar17))
		{
			uVar18 = unk_0x710F417CEE307D17(iVar17, 426439576, 1);
			Var19 = { func_258(iParam0) };
			return uVar18;
		}
		else
		{
			Var23 = { func_258(iParam0) };
		}
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_3947;
			break;
		
		case 2:
			return Global_262145.f_3948;
			break;
		
		case 3:
			return Global_262145.f_3949;
			break;
		
		case 4:
			return Global_262145.f_3950;
			break;
		
		case 5:
			return Global_262145.f_3951;
			break;
		
		case 6:
			return Global_262145.f_3952;
			break;
		
		case 7:
			return Global_262145.f_3953;
			break;
		
		case 34:
			return Global_262145.f_3954;
			break;
		
		case 35:
			return Global_262145.f_3955;
			break;
		
		case 36:
			return Global_262145.f_3956;
			break;
		
		case 37:
			return Global_262145.f_3957;
			break;
		
		case 38:
			return Global_262145.f_3958;
			break;
		
		case 39:
			return Global_262145.f_3959;
			break;
		
		case 40:
			return Global_262145.f_3960;
			break;
		
		case 41:
			return Global_262145.f_3961;
			break;
		
		case 42:
			return Global_262145.f_3962;
			break;
		
		case 43:
			return Global_262145.f_3963;
			break;
		
		case 8:
			return Global_262145.f_3964;
			break;
		
		case 9:
			return Global_262145.f_3965;
			break;
		
		case 10:
			return Global_262145.f_3966;
			break;
		
		case 11:
			return Global_262145.f_3967;
			break;
		
		case 12:
			return Global_262145.f_3968;
			break;
		
		case 13:
			return Global_262145.f_3969;
			break;
		
		case 14:
			return Global_262145.f_3970;
			break;
		
		case 15:
			return Global_262145.f_3971;
			break;
		
		case 16:
			return Global_262145.f_3972;
			break;
		
		case 17:
			return Global_262145.f_3973;
			break;
		
		case 18:
			return Global_262145.f_3974;
			break;
		
		case 19:
			return Global_262145.f_3975;
			break;
		
		case 20:
			return Global_262145.f_3976;
			break;
		
		case 21:
			return Global_262145.f_3977;
			break;
		
		case 22:
			return Global_262145.f_3978;
			break;
		
		case 23:
			return Global_262145.f_3979;
			break;
		
		case 24:
			return Global_262145.f_3980;
			break;
		
		case 25:
			return Global_262145.f_3981;
			break;
		
		case 26:
			return Global_262145.f_3982;
			break;
		
		case 27:
			return Global_262145.f_3983;
			break;
		
		case 28:
			return Global_262145.f_3984;
			break;
		
		case 29:
			return Global_262145.f_3985;
			break;
		
		case 30:
			return Global_262145.f_3986;
			break;
		
		case 31:
			return Global_262145.f_3987;
			break;
		
		case 32:
			return Global_262145.f_3988;
			break;
		
		case 33:
			return Global_262145.f_3989;
			break;
		
		case 44:
			return Global_262145.f_3990;
			break;
		
		case 45:
			return Global_262145.f_3991;
			break;
		
		case 46:
			return Global_262145.f_3992;
			break;
		
		case 47:
			return Global_262145.f_3993;
			break;
		
		case 48:
			return Global_262145.f_3994;
			break;
		
		case 49:
			return Global_262145.f_3995;
			break;
		
		case 50:
			return Global_262145.f_3996;
			break;
		
		case 51:
			return Global_262145.f_3997;
			break;
		
		case 52:
			return Global_262145.f_3998;
			break;
		
		case 53:
			return Global_262145.f_3999;
			break;
		
		case 54:
			return Global_262145.f_4000;
			break;
		
		case 55:
			return Global_262145.f_4001;
			break;
		
		case 56:
			return Global_262145.f_4002;
			break;
		
		case 57:
			return Global_262145.f_4003;
			break;
		
		case 58:
			return Global_262145.f_4004;
			break;
		
		case 59:
			return Global_262145.f_4005;
			break;
		
		case 60:
			return Global_262145.f_4006;
			break;
		
		case 61:
			return Global_262145.f_5435[0];
			break;
		
		case 62:
			return Global_262145.f_5435[1];
			break;
		
		case 63:
			return Global_262145.f_5435[2];
			break;
		
		case 64:
			return Global_262145.f_5435[3];
			break;
		
		case 65:
			return Global_262145.f_5435[4];
			break;
		
		case 66:
			return Global_262145.f_6644;
			break;
		
		case 67:
			return Global_262145.f_6645;
			break;
		
		case 68:
			return Global_262145.f_6646;
			break;
		
		case 69:
			return Global_262145.f_6647;
			break;
		
		case 70:
			return Global_262145.f_6648;
			break;
		
		case 71:
			return Global_262145.f_6649;
			break;
		
		case 72:
			return Global_262145.f_6650;
			break;
		
		case 73:
			return Global_262145.f_11339;
		
		case 74:
			return Global_262145.f_11340;
		
		case 75:
			return Global_262145.f_11341;
		
		case 76:
			return Global_262145.f_11342;
		
		case 77:
			return Global_262145.f_11343;
		
		case 78:
			return Global_262145.f_11344;
		
		case joaat("mpsv_lp0_31"):
			return Global_262145.f_11345;
		
		case 80:
			return Global_262145.f_11346;
		
		case 81:
			return Global_262145.f_11347;
		
		case 82:
			return Global_262145.f_11348;
		
		case 83:
			return Global_262145.f_11336;
		
		case 84:
			return Global_262145.f_11337;
		
		case 85:
			return Global_262145.f_11338;
		
		case 86:
			return 27000000;
		
		case 87:
			return Global_262145.f_13432;
		
		case 88:
			return Global_262145.f_13433;
		
		case 89:
			return Global_262145.f_13434;
		
		case 90:
			return Global_262145.f_13435;
		
		case 91:
			return Global_262145.f_15511;
		
		case 92:
			return Global_262145.f_15513;
		
		case 93:
			return Global_262145.f_15509;
		
		case 94:
			return Global_262145.f_15518;
		
		case 95:
			return Global_262145.f_15515;
		
		case 96:
			return Global_262145.f_15517;
		
		case 97:
			return Global_262145.f_15510;
		
		case 98:
			return Global_262145.f_15508;
		
		case 99:
			return Global_262145.f_15507;
		
		case 100:
			return Global_262145.f_15516;
		
		case 101:
			return Global_262145.f_15514;
		
		case 102:
			return Global_262145.f_15512;
		
		case 103:
			return Global_262145.f_17119;
		
		case 104:
			return Global_262145.f_17012;
		
		case 105:
			return Global_262145.f_17013;
		
		case 106:
			return Global_262145.f_17119;
		
		case 107:
			return Global_262145.f_17012;
		
		case 108:
			return Global_262145.f_17013;
		
		case 109:
			return Global_262145.f_17119;
		
		case 110:
			return Global_262145.f_17012;
		
		case 111:
			return Global_262145.f_17013;
		
		case 112:
			return Global_262145.f_17119;
		
		case 113:
			return Global_262145.f_17012;
		
		case 114:
			return Global_262145.f_17013;
		
		case 115:
			return 3000000;
	}
	return 0;
}

void func_173(char* sParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = { func_258(iParam1) };
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_174(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_187(iParam0, iParam1);
	switch (iParam1)
	{
		case 103:
		case 106:
		case 109:
		case 112:
			if (!func_168())
			{
				iVar0 = func_177(iParam1);
				if (iParam0 == 0)
				{
					iVar1 = 0;
				}
			}
			else if (func_171(iParam0) == func_230(8, -1))
			{
				iVar1 = 0;
			}
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			if (!func_165())
			{
				iVar0 = func_177(iParam1);
				if (iParam0 == 0)
				{
					iVar1 = 0;
				}
			}
			else if (func_171(iParam0) == func_230(9, -1))
			{
				iVar1 = 0;
			}
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			if (!func_164())
			{
				iVar0 = func_177(iParam1);
				if (iParam0 == 0)
				{
					iVar1 = 0;
				}
			}
			else if (func_171(iParam0) == func_230(10, -1))
			{
				iVar1 = 0;
			}
			break;
	}
	return (iVar0 + iVar1);
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			return func_172(103);
		
		case 88:
			return func_172(106);
		
		case 89:
			return func_172(109);
		
		case 90:
			return func_172(112);
		
		default:
	}
	return 0;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			return func_172(103);
		
		case 88:
			return func_172(106);
		
		case 89:
			return func_172(109);
		
		case 90:
			return func_172(112);
		
		default:
	}
	return 0;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 400000;
			break;
		
		case 2:
			return 373000;
			break;
		
		case 3:
			return 391000;
			break;
		
		case 4:
			return 382000;
			break;
		
		case 5:
			return 217000;
			break;
		
		case 6:
			return 223000;
			break;
		
		case 7:
			return 205000;
			break;
		
		case 34:
			return 200000;
			break;
		
		case 35:
			return 335000;
			break;
		
		case 36:
			return 319000;
			break;
		
		case 37:
			return 304000;
			break;
		
		case 38:
			return 235000;
			break;
		
		case 39:
			return 247000;
			break;
		
		case 40:
			return 241000;
			break;
		
		case 41:
			return 253000;
			break;
		
		case 42:
			return 270000;
			break;
		
		case 43:
			return 286000;
			break;
		
		case 8:
			return 130000;
			break;
		
		case 9:
			return 128000;
			break;
		
		case 10:
			return 126000;
			break;
		
		case 11:
			return 146000;
			break;
		
		case 12:
			return 125000;
			break;
		
		case 13:
			return 141000;
			break;
		
		case 14:
			return 150000;
			break;
		
		case 15:
			return 137000;
			break;
		
		case 16:
			return 134000;
			break;
		
		case 17:
			return 115000;
			break;
		
		case 18:
			return 99000;
			break;
		
		case 19:
			return 80000;
			break;
		
		case 20:
			return 87000;
			break;
		
		case 21:
			return 112000;
			break;
		
		case 22:
			return 105000;
			break;
		
		case 23:
			return 93000;
			break;
		
		case 24:
			return 150000;
			break;
		
		case 25:
			return 77500;
			break;
		
		case 26:
			return 142500;
			break;
		
		case 27:
			return 135000;
			break;
		
		case 28:
			return 70000;
			break;
		
		case 29:
			return 29500;
			break;
		
		case 30:
			return 32000;
			break;
		
		case 31:
			return 25000;
			break;
		
		case 32:
			return 80000;
			break;
		
		case 33:
			return 72500;
			break;
		
		case 44:
			return 26500;
			break;
		
		case 45:
			return 26000;
			break;
		
		case 46:
			return 27500;
			break;
		
		case 47:
			return 32000;
			break;
		
		case 48:
			return 31500;
			break;
		
		case 49:
			return 29000;
			break;
		
		case 50:
			return 62500;
			break;
		
		case 51:
			return 28000;
			break;
		
		case 52:
			return 65000;
			break;
		
		case 53:
			return 75000;
			break;
		
		case 54:
			return 105000;
			break;
		
		case 55:
			return 67500;
			break;
		
		case 56:
			return 112500;
			break;
		
		case 57:
			return 120000;
			break;
		
		case 58:
			return 34000;
			break;
		
		case 59:
			return 33500;
			break;
		
		case 60:
			return 35000;
			break;
		
		case 61:
			return 500000;
			break;
		
		case 62:
			return 468000;
			break;
		
		case 63:
			return 484000;
			break;
		
		case 64:
			return 492000;
			break;
		
		case 65:
			return 476000;
			break;
		
		case 66:
			return 175000;
			break;
		
		case 67:
			return 143000;
			break;
		
		case 68:
			return 155000;
			break;
		
		case 69:
			return 165000;
			break;
		
		case 70:
			return 121000;
			break;
		
		case 71:
			return 120000;
			break;
		
		case 72:
			return 118000;
			break;
		
		case 73:
			return 800000;
		
		case 74:
			return 762000;
		
		case 75:
			return 672000;
		
		case 76:
			return 705000;
		
		case 77:
			return 478000;
		
		case 78:
			return 608000;
		
		case joaat("mpsv_lp0_31"):
			return 525000;
		
		case 80:
			return 571000;
		
		case 81:
			return 449000;
		
		case 82:
			return 727000;
		
		case 83:
			return 985000;
		
		case 84:
			return 905000;
		
		case 85:
			return 1100000;
		
		case 86:
			return 27000000;
		
		case 87:
			return 3100000;
		
		case 88:
			return 1000000;
		
		case 89:
			return 2250000;
		
		case 90:
			return 4000000;
		
		case 91:
			return 420000;
		
		case 92:
			return 365000;
		
		case 93:
			return 455000;
		
		case 94:
			return 200000;
		
		case 95:
			return 242000;
		
		case 96:
			return 210000;
		
		case 97:
			return 449000;
		
		case 98:
			return 472000;
		
		case 99:
			return 495000;
		
		case 100:
			return 225000;
		
		case 101:
			return 250000;
		
		case 102:
			return 395000;
		
		case 103:
			return 1150000;
		
		case 104:
			return 855000;
		
		case 105:
			return 745000;
		
		case 106:
			return 1150000;
		
		case 107:
			return 855000;
		
		case 108:
			return 745000;
		
		case 109:
			return 1150000;
		
		case 110:
			return 855000;
		
		case 111:
			return 745000;
		
		case 112:
			return 1150000;
		
		case 113:
			return 855000;
		
		case 114:
			return 745000;
		
		case 115:
			return 3000000;
	}
	return 0;
}

void func_178(var uParam0)
{
	unk_0xDC0269D08B29626C(uParam0);
}

char* func_179(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "DYN_MP_1";
		
		case 2:
			return "DYN_MP_2";
		
		case 3:
			return "DYN_MP_3";
		
		case 4:
			return "DYN_MP_4";
		
		case 5:
			return "DYN_MP_5";
		
		case 6:
			return "DYN_MP_6";
		
		case 7:
			return "DYN_MP_7";
		
		case 8:
			return "DYN_MP_8";
		
		case 9:
			return "DYN_MP_9";
		
		case 10:
			return "DYN_MP_10";
		
		case 11:
			return "DYN_MP_11";
		
		case 12:
			return "DYN_MP_12";
		
		case 13:
			return "DYN_MP_13";
		
		case 14:
			return "DYN_MP_14";
		
		case 15:
			return "DYN_MP_15";
		
		case 16:
			return "DYN_MP_16";
		
		case 17:
			return "DYN_MP_17";
		
		case 18:
			return "DYN_MP_18";
		
		case 19:
			return "DYN_MP_19";
		
		case 20:
			return "DYN_MP_20";
		
		case 21:
			return "DYN_MP_21";
		
		case 22:
			return "DYN_MP_22";
		
		case 23:
			return "DYN_MP_23";
		
		case 24:
			return "DYN_MP_24";
		
		case 25:
			return "DYN_MP_25";
		
		case 26:
			return "DYN_MP_26";
		
		case 27:
			return "DYN_MP_27";
		
		case 28:
			return "DYN_MP_28";
		
		case 29:
			return "DYN_MP_29";
		
		case 30:
			return "DYN_MP_30";
		
		case 31:
			return "DYN_MP_31";
		
		case 32:
			return "DYN_MP_32";
		
		case 33:
			return "DYN_MP_33";
		
		case 34:
			return "DYN_MP_34";
		
		case 35:
			return "DYN_MP_35";
		
		case 36:
			return "DYN_MP_36";
		
		case 37:
			return "DYN_MP_37";
		
		case 38:
			return "DYN_MP_38";
		
		case 39:
			return "DYN_MP_39";
		
		case 40:
			return "DYN_MP_40";
		
		case 41:
			return "DYN_MP_41";
		
		case 42:
			return "DYN_MP_42";
		
		case 43:
			return "DYN_MP_43";
		
		case 44:
			return "DYN_MP_44";
		
		case 45:
			return "DYN_MP_45";
		
		case 46:
			return "DYN_MP_46";
		
		case 47:
			return "DYN_MP_48";
		
		case 48:
			return "DYN_MP_49";
		
		case 49:
			return "DYN_MP_50";
		
		case 50:
			return "DYN_MP_51";
		
		case 51:
			return "DYN_MP_52";
		
		case 52:
			return "DYN_MP_57";
		
		case 53:
			return "DYN_MP_59";
		
		case 54:
			return "DYN_MP_60";
		
		case 55:
			return "DYN_MP_61";
		
		case 56:
			return "DYN_MP_62";
		
		case 57:
			return "DYN_MP_63";
		
		case 58:
			return "DYN_MP_64";
		
		case 59:
			return "DYN_MP_65";
		
		case 60:
			return "DYN_MP_66";
		
		case 61:
			return "DYN_MP_1";
		
		case 62:
			return "DYN_MP_7";
		
		case 63:
			return "DYN_MP_40";
		
		case 64:
			return "DYN_MP_42";
		
		case 65:
			return "DYN_MP_38";
		
		case 66:
			return "DYN_MP_72";
		
		case 67:
			return "DYN_MP_73";
		
		case 68:
			return "DYN_MP_74";
		
		case 69:
			return "DYN_MP_75";
		
		case 70:
			return "DYN_MP_76";
		
		case 71:
			return "DYN_MP_77";
		
		case 72:
			return "DYN_MP_78";
		
		case 73:
			return "DYN_MP_80";
		
		case 74:
			return "DYN_MP_81";
		
		case 75:
			return "DYN_MP_82";
		
		case 76:
			return "DYN_MP_83";
		
		case 77:
			return "DYN_MP_84";
		
		case 78:
			return "DYN_MP_85";
		
		case joaat("mpsv_lp0_31"):
			return "DYN_MP_86";
		
		case 80:
			return "DYN_MP_87";
		
		case 81:
			return "DYN_MP_89";
		
		case 82:
			return "DYN_MP_90";
		
		case 83:
			return "DYN_MP_91";
		
		case 84:
			return "DYN_MP_92";
		
		case 85:
			return "DYN_MP_93";
		
		case 86:
			return "";
		
		case 87:
			return "DYN_OFFICE_1";
		
		case 88:
			return "DYN_OFFICE_2";
		
		case 89:
			return "DYN_OFFICE_3";
		
		case 90:
			return "DYN_OFFICE_4";
		
		case 91:
			return "MP_CLUBH2";
		
		case 92:
			return "MP_CLUBH1";
		
		case 93:
			return "MP_CLUBH3";
		
		case 94:
			return "MP_CLUBH4";
		
		case 95:
			return "MP_CLUBH5";
		
		case 96:
			return "MP_CLUBH6";
		
		case 97:
			return "MP_CLUBH7";
		
		case 98:
			return "MP_CLUBH8";
		
		case 99:
			return "MP_CLUBH9";
		
		case 100:
			return "MP_CLUBH11";
		
		case 101:
			return "MP_CLUBH12";
		
		case 102:
			return "MP_CLUBH10";
		
		default:
	}
	return "";
}

void func_180(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

int func_181(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return Global_262145.f_13445;
			}
			else if (iParam1 == 1)
			{
				return Global_262145.f_13446;
			}
			return 0;
		
		case 2:
			return Global_262145.f_14309;
		
		case 3:
			return 0;
		
		case 4:
			return Global_262145.f_13447;
		
		case 5:
			return Global_262145.f_13448;
		
		case 6:
			return Global_262145.f_13449;
		
		case 7:
			return Global_262145.f_14308;
		
		case 8:
		case 10:
		case 12:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_17018;
				
				case 1:
					return Global_262145.f_17019;
				
				case 2:
					return Global_262145.f_17020;
				
				case 3:
					return Global_262145.f_17021;
				
				case 4:
					return Global_262145.f_17022;
				
				case 5:
					return Global_262145.f_17023;
				
				case 6:
					return Global_262145.f_17024;
				
				case 7:
					return Global_262145.f_17025;
				
				case 8:
					return Global_262145.f_17026;
				
				default:
			}
			return 0;
			break;
		
		case 9:
		case 11:
		case 13:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_17027;
				
				case 1:
					return Global_262145.f_17028;
				
				case 2:
					return Global_262145.f_17029;
				
				case 3:
					return Global_262145.f_17030;
				
				case 4:
					return Global_262145.f_17031;
				
				case 5:
					return Global_262145.f_17032;
				
				case 6:
					return Global_262145.f_17033;
				
				case 7:
					return Global_262145.f_17034;
				
				case 8:
					return Global_262145.f_17035;
				
				default:
			}
			return 0;
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return Global_262145.f_17036;
				
				case 2:
					return Global_262145.f_17037;
				
				case 3:
					return Global_262145.f_17038;
				
				case 4:
					return Global_262145.f_17039;
				
				case 5:
					return Global_262145.f_17040;
				
				case 6:
					return Global_262145.f_17041;
				
				case 7:
					return Global_262145.f_17042;
				
				case 8:
					return Global_262145.f_17043;
				
				case 9:
					return Global_262145.f_17044;
				
				case 10:
					return Global_262145.f_17045;
				
				case 11:
					return Global_262145.f_17046;
				
				case 12:
					return Global_262145.f_17047;
				
				case 13:
					return Global_262145.f_17048;
				
				case 14:
					return Global_262145.f_17049;
				
				case 15:
					return Global_262145.f_17050;
				
				case 16:
					return Global_262145.f_17051;
				
				case 17:
					return Global_262145.f_17052;
				
				case 18:
					return Global_262145.f_17053;
				
				case 19:
					return Global_262145.f_17054;
				
				case 20:
					return Global_262145.f_17055;
				
				default:
			}
			return 0;
			break;
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 150000;
			}
			else if (iParam1 == 1)
			{
				return 150000;
			}
			return 0;
		
		case 2:
			return 75000;
		
		case 3:
			return 0;
		
		case 4:
			return 520000;
		
		case 5:
			return 335000;
		
		case 6:
			return 795000;
		
		case 7:
			return 250000;
		
		case 8:
		case 10:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 75000;
				
				case 1:
					return 81500;
				
				case 2:
					return 85000;
				
				case 3:
					return 87500;
				
				case 4:
					return 92500;
				
				case 5:
					return 99500;
				
				case 6:
					return 105000;
				
				case 7:
					return 127500;
				
				case 8:
					return 150000;
				
				default:
			}
			return 0;
			break;
		
		case 9:
		case 11:
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50000;
				
				case 1:
					return 62500;
				
				case 2:
					return 75000;
				
				case 3:
					return 87500;
				
				case 4:
					return 100000;
				
				case 5:
					return 132500;
				
				case 6:
					return 165000;
				
				case 7:
					return 197500;
				
				case 8:
					return 250000;
				
				default:
			}
			return 0;
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 100000;
				
				case 2:
					return 120000;
				
				case 3:
					return 132500;
				
				case 4:
					return 145000;
				
				case 5:
					return 157500;
				
				case 6:
					return 170000;
				
				case 7:
					return 182500;
				
				case 8:
					return 195000;
				
				case 9:
					return 207500;
				
				case 10:
					return 220000;
				
				case 11:
					return 245000;
				
				case 12:
					return 270000;
				
				case 13:
					return 295000;
				
				case 14:
					return 320000;
				
				case 15:
					return 345000;
				
				case 16:
					return 370000;
				
				case 17:
					return 395000;
				
				case 18:
					return 420000;
				
				case 19:
					return 465000;
				
				case 20:
					return 500000;
				
				default:
			}
			return 0;
			break;
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar17;
	var uVar18;
	char cVar19[16];
	char cVar23[16];
	
	if (unk_0x1995B52453EF6537() && unk_0x2D337DD29A7ABD30())
	{
		iVar0 = 0;
		func_186(&sVar1, iParam0, iParam1, iVar0);
		iVar17 = unk_0x6D9FF4C899CD785F(&sVar1);
		if (unk_0x8BF28AE5815EF02F(iVar17))
		{
			uVar18 = unk_0x710F417CEE307D17(iVar17, -300552292, 1);
			StringCopy(&cVar19, func_185(iParam0, iParam1), 16);
			return uVar18;
		}
		else
		{
			StringCopy(&cVar23, func_185(iParam0, iParam1), 16);
		}
	}
	if (func_184(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_11349;
			
			case 1:
				return Global_262145.f_11350;
			
			case 2:
				return Global_262145.f_11351;
			
			case 3:
				return Global_262145.f_11352;
			
			case 4:
				return Global_262145.f_11353;
			
			case 5:
				return Global_262145.f_11354;
			
			case 6:
				return Global_262145.f_11355;
			
			case 7:
				return Global_262145.f_11356;
			
			default:
		}
	}
	else if (func_184(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_13439;
			
			case 1:
				return Global_262145.f_13440;
			
			case 2:
				return Global_262145.f_13441;
			
			case 3:
				return Global_262145.f_13438;
			
			case 4:
				return Global_262145.f_13436;
			
			case 5:
				return Global_262145.f_13437;
			
			case 6:
				return Global_262145.f_13442;
			
			case 7:
				return Global_262145.f_13443;
			
			case 8:
				return Global_262145.f_13444;
			
			default:
		}
	}
	else if (func_184(iParam1) == 91 || func_184(iParam1) == 97)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_15519;
			
			case 1:
				return Global_262145.f_15520;
			
			case 2:
				return Global_262145.f_15521;
			
			case 3:
				return Global_262145.f_15522;
			
			case 4:
				return Global_262145.f_15523;
			
			case 5:
				return Global_262145.f_15524;
			
			case 6:
				return Global_262145.f_15525;
			
			case 7:
				return Global_262145.f_15526;
			
			case 8:
				return Global_262145.f_15527;
			
			default:
		}
	}
	else if (func_184(iParam1) == 109)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_17014;
			
			case 1:
				return Global_262145.f_17015;
			
			case 2:
				return Global_262145.f_17016;
			
			case 3:
				return Global_262145.f_17017;
			}
		
		default:
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
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
			return 109;
			break;
	}
	return -1;
}

char* func_185(int iParam0, int iParam1)
{
	if (func_184(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_APT_VAR_0";
				break;
			
			case 1:
				return "PM_APT_VAR_1";
				break;
			
			case 2:
				return "PM_APT_VAR_2";
				break;
			
			case 3:
				return "PM_APT_VAR_3";
				break;
			
			case 4:
				return "PM_APT_VAR_4";
				break;
			
			case 5:
				return "PM_APT_VAR_5";
				break;
			
			case 6:
				return "PM_APT_VAR_6";
				break;
			
			case 7:
				return "PM_APT_VAR_7";
				break;
		}
	}
	else if (func_184(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_OFF_VAR_3";
				break;
			
			case 1:
				return "PM_OFF_VAR_4";
				break;
			
			case 2:
				return "PM_OFF_VAR_5";
				break;
			
			case 3:
				return "PM_OFF_VAR_2";
				break;
			
			case 4:
				return "PM_OFF_VAR_0";
				break;
			
			case 5:
				return "PM_OFF_VAR_1";
				break;
			
			case 6:
				return "PM_OFF_VAR_6";
				break;
			
			case 7:
				return "PM_OFF_VAR_7";
				break;
			
			case 8:
				return "PM_OFF_VAR_8";
				break;
		}
	}
	else if (func_184(iParam1) == 91 || func_184(iParam1) == 97)
	{
		switch (iParam0)
		{
			case 0:
				return "FC_MURAL_0";
				break;
			
			case 1:
				return "FC_MURAL_1";
				break;
			
			case 2:
				return "FC_MURAL_2";
				break;
			
			case 3:
				return "FC_MURAL_3";
				break;
			
			case 4:
				return "FC_MURAL_4";
				break;
			
			case 5:
				return "FC_MURAL_5";
				break;
			
			case 6:
				return "FC_MURAL_6";
				break;
			
			case 7:
				return "FC_MURAL_7";
				break;
			
			case 8:
				return "FC_MURAL_8";
				break;
		}
	}
	else if (func_184(iParam1) == 109)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_OFF_GAR_0";
				break;
			
			case 1:
				return "PM_OFF_GAR_1";
				break;
			
			case 2:
				return "PM_OFF_GAR_2";
				break;
			
			case 3:
				return "PM_OFF_GAR_3";
				break;
			}
	}
	return "NONE";
}

void func_186(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[16];
	
	StringCopy(&cVar0, func_185(iParam1, iParam2), 16);
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &cVar0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

int func_187(int iParam0, int iParam1)
{
	if (func_184(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return 280000;
			
			case 1:
				return 235000;
			
			case 2:
				return 220000;
			
			case 3:
				return 325000;
			
			case 4:
				return 295000;
			
			case 5:
				return 250000;
			
			case 6:
				return 265000;
			
			case 7:
				return 310000;
			
			default:
		}
	}
	else if (func_184(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return 950000;
			
			case 1:
				return 685000;
			
			case 2:
				return 760000;
			
			case 3:
				return 500000;
			
			case 4:
				return 300000;
			
			case 5:
				return 415000;
			
			case 6:
				return 1000000;
			
			case 7:
				return 835000;
			
			case 8:
				return 910000;
			
			default:
		}
	}
	else if (func_184(iParam1) == 91 || func_184(iParam1) == 97)
	{
		switch (iParam0)
		{
			case 0:
				return 80000;
			
			case 1:
				return 86500;
			
			case 2:
				return 93000;
			
			case 3:
				return 99500;
			
			case 4:
				return 106000;
			
			case 5:
				return 112500;
			
			case 6:
				return 119000;
			
			case 7:
				return 132000;
			
			case 8:
				return 150000;
			
			default:
		}
	}
	else if (func_184(iParam1) == 109)
	{
		switch (iParam0)
		{
			case 0:
				return 150000;
			
			case 1:
				return 285000;
			
			case 2:
				return 415000;
			
			case 3:
				return 500000;
			}
		
		default:
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (Global_262145.f_11204 && !func_189(Global_1049427[iParam0 /*1942*/].f_16, &iVar0))
	{
		if (func_265(iParam0))
		{
			return 0;
		}
		iVar1 = func_172(iParam0);
		iVar2 = func_177(iParam0);
		if (iVar2 != 0 && iVar2 > iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = unk_0x6D9FF4C899CD785F(&uParam0);
	if (iVar0 == Global_262145.f_11440)
	{
		*iParam4 = 0;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11441)
	{
		*iParam4 = 1;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11442)
	{
		*iParam4 = 2;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11443)
	{
		*iParam4 = 3;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11444)
	{
		*iParam4 = 4;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11445)
	{
		*iParam4 = 5;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11446)
	{
		*iParam4 = 6;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11447)
	{
		*iParam4 = 7;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11448)
	{
		*iParam4 = 8;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11449)
	{
		*iParam4 = 9;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11450)
	{
		*iParam4 = 10;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11451)
	{
		*iParam4 = 11;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11452)
	{
		*iParam4 = 12;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11453)
	{
		*iParam4 = 13;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11454)
	{
		*iParam4 = 14;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11455)
	{
		*iParam4 = 15;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11456)
	{
		*iParam4 = 16;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11457)
	{
		*iParam4 = 17;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11458)
	{
		*iParam4 = 18;
		return 1;
	}
	else if (iVar0 == Global_262145.f_11459)
	{
		*iParam4 = 19;
		return 1;
	}
	*iParam4 = -1;
	return 0;
}

void func_190(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		func_191();
	}
	unk_0x3B6EF6403E3F1CAC(iParam0, "SET_DATA_SLOT");
	unk_0x1B215CC37BF52E79(0);
	unk_0x1B215CC37BF52E79(Global_68395);
	unk_0x1B215CC37BF52E79(Global_68395.f_1);
	unk_0x1B215CC37BF52E79(Global_68395.f_2);
	unk_0x1B215CC37BF52E79(Global_68395.f_3);
	unk_0x1B215CC37BF52E79(Global_68395.f_4);
	unk_0xCAEC22134AC81756(&(Global_68395.f_5));
	unk_0xCAEC22134AC81756(&(Global_68395.f_21));
	unk_0x1B215CC37BF52E79(Global_68395.f_37);
	unk_0x1B215CC37BF52E79(Global_68395.f_38);
	unk_0x1B215CC37BF52E79(Global_68395.f_39);
	iVar0 = unk_0x37F0B37A9EF3F53B();
	if ((((iVar0 == 6 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
	{
		unk_0x2C310F11D2096992(0);
	}
	else
	{
		unk_0x2C310F11D2096992(1);
	}
	unk_0xBBAAC5B2437ACF2A();
	unk_0x3B6EF6403E3F1CAC(iParam0, "APPEND_OFFICE_DATA_SLOT");
	unk_0x1B215CC37BF52E79(0);
	if (Global_68395.f_41 != -1)
	{
		unk_0x1B215CC37BF52E79(1);
		unk_0x1B215CC37BF52E79(Global_68395.f_41);
		unk_0x1B215CC37BF52E79(Global_68395.f_42);
		unk_0x1B215CC37BF52E79(Global_68395.f_43);
	}
	else
	{
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
	}
	if (Global_68395.f_44 != -1)
	{
		unk_0x1B215CC37BF52E79(1);
		unk_0x1B215CC37BF52E79(Global_68395.f_44);
		unk_0x1B215CC37BF52E79(Global_68395.f_45);
		unk_0x1B215CC37BF52E79(Global_68395.f_46);
	}
	else
	{
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
	}
	if (Global_68395.f_47 != -1)
	{
		unk_0x1B215CC37BF52E79(1);
		unk_0x1B215CC37BF52E79(Global_68395.f_47);
		unk_0x1B215CC37BF52E79(Global_68395.f_48);
		unk_0x1B215CC37BF52E79(Global_68395.f_49);
	}
	else
	{
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
	}
	if (Global_68395.f_50 != -1)
	{
		unk_0x1B215CC37BF52E79(1);
		unk_0x1B215CC37BF52E79(Global_68395.f_50);
	}
	else
	{
		unk_0x1B215CC37BF52E79(-1);
		unk_0x1B215CC37BF52E79(-1);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_191()
{
	int iVar0;
	
	iVar0 = func_56(5, -1);
	if (iVar0 != 0)
	{
		Global_68395 = iVar0;
		Global_68395.f_1 = func_196(func_230(5, -1));
		Global_68395.f_2 = func_192(func_193(0));
		Global_68395.f_3 = func_101(3678, -1);
		Global_68395.f_4 = func_101(3679, -1);
		Global_68395.f_37 = func_192(func_204());
		Global_68395.f_38 = func_192(func_203());
		Global_68395.f_39 = func_192(func_227());
		Global_68395.f_40 = func_101(3208, -1);
		if (func_168())
		{
			Global_68395.f_41 = func_276(func_230(8, -1));
			Global_68395.f_42 = func_275(func_101(5277, -1));
			Global_68395.f_43 = func_274(func_101(5278, -1));
		}
		else
		{
			Global_68395.f_41 = -1;
			Global_68395.f_42 = -1;
			Global_68395.f_43 = -1;
		}
		if (func_165())
		{
			Global_68395.f_44 = func_276(func_230(9, -1));
			Global_68395.f_45 = func_275(func_101(5279, -1));
			Global_68395.f_46 = func_274(func_101(5280, -1));
		}
		else
		{
			Global_68395.f_44 = -1;
			Global_68395.f_45 = -1;
			Global_68395.f_46 = -1;
		}
		if (func_164())
		{
			Global_68395.f_47 = func_276(func_230(10, -1));
			Global_68395.f_48 = func_275(func_101(5281, -1));
			Global_68395.f_49 = func_274(func_101(5282, -1));
		}
		else
		{
			Global_68395.f_47 = -1;
			Global_68395.f_48 = -1;
			Global_68395.f_49 = -1;
		}
		if (func_202())
		{
			Global_68395.f_50 = func_263(func_101(5283, -1));
		}
		else
		{
			Global_68395.f_50 = -1;
		}
	}
	else
	{
		Global_68395 = -1;
		Global_68395.f_1 = -1;
		Global_68395.f_2 = -1;
		Global_68395.f_3 = -1;
		Global_68395.f_4 = -1;
		StringCopy(&(Global_68395.f_21), "", 64);
		Global_68395.f_37 = -1;
		Global_68395.f_38 = -1;
		Global_68395.f_39 = -1;
		Global_68395.f_40 = 0;
		Global_68395.f_41 = -1;
		Global_68395.f_42 = -1;
		Global_68395.f_43 = -1;
		Global_68395.f_44 = -1;
		Global_68395.f_45 = -1;
		Global_68395.f_46 = -1;
		Global_68395.f_47 = -1;
		Global_68395.f_48 = -1;
		Global_68395.f_49 = -1;
		Global_68395.f_50 = -1;
	}
}

int func_192(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_193(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_65(unk_0xFB6B3EEFAB2DD12C());
		if (func_195())
		{
			if (func_194(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_101(3204, -1) != 0;
}

bool func_194(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 29);
}

int func_195()
{
	int iVar0;
	
	iVar0 = func_65(unk_0xFB6B3EEFAB2DD12C());
	if (((iVar0 != unk_0xFB6B3EEFAB2DD12C() && iVar0 != func_12()) && unk_0x1E0256D6F1052B31(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_197(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 == 0)
	{
		return 5;
	}
	else if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 5)
	{
		return 3;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	else if (iParam0 == 7)
	{
		return 8;
	}
	else if (iParam0 == 8)
	{
		return 9;
	}
	return 1;
}

int func_198()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15;
}

bool func_199(int iParam0, bool bParam1)
{
	if (Global_1589801 != func_12())
	{
		if (!func_52(Global_1589801))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
			{
				if (unk_0xF44A5E894FE76438(Global_2421621[Global_1589801 /*358*/].f_198, 24) || func_51(Global_1589801))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 24);
}

void func_200(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 1);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 2))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 2);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 3))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 3);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 4))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 4);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 5))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 5);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 6))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 6);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 7);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 8))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 8);
			}
			break;
		
		case 9:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 9))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 9);
			}
			break;
		
		case 10:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 10))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 10);
			}
			break;
		
		case 11:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 11))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 11);
			}
			break;
		
		case 12:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 12))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 12);
			}
			break;
		
		case 13:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 13))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 13);
			}
			break;
		
		case 14:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 14))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 14);
			}
			break;
		
		case 15:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 15))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 15);
			}
			break;
		
		case 16:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 16))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 16);
			}
			break;
		
		case 17:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 17))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 17);
			}
			break;
		
		case 18:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 18))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 18);
			}
			break;
		
		case 19:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 19))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 19);
			}
			break;
		
		case 20:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, 20))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), 20);
			}
			break;
		
		default:
			break;
	}
	iVar0 = 1;
	while (iVar0 <= 20)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151, iVar0))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_151), iVar0);
			}
		}
		iVar0++;
	}
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210, 2))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210), 2);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210, 2))
	{
		unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210), 2);
	}
}

bool func_202()
{
	return func_101(5283, -1) != 0;
}

bool func_203()
{
	return func_101(3206, -1) != 0;
}

bool func_204()
{
	return func_101(3205, -1) != 0;
}

int func_205()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_102(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_102(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_102(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_102(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_102(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_102(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_102(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_102(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_102(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_102(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_102(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_102(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_102(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_102(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_102(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_102(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_102(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_102(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_102(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_102(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_102(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_102(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_102(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_102(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_102(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_102(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_102(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_102(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_102(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_102(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_102(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_102(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_102(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_209(iParam0, func_102(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_208(iParam0, iVar0, iParam2);
}

void func_208(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2523810[iParam0 /*3*/][func_102(uParam2)];
	unk_0xB924315F0872835A(iVar0, iParam1, 1);
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2523810[iParam0 /*3*/][func_102(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_210(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_256())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_213(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_211(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_211(var uParam0)
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
	func_212(&(uParam0->f_8.f_3));
	func_212(&(uParam0->f_8.f_16));
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
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_212(var uParam0)
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

int func_213(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 == 0)
	{
		if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == joaat("mp_m_freemode_01"))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == joaat("mp_m_freemode_01"))
	{
		return 3;
	}
	return 4;
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0 >= 2500000)
	{
		unk_0xE1A783031BB95983(2499999, iParam1);
		iParam0 = (iParam0 - 2499999);
	}
	if (func_256())
	{
		unk_0x1C58730C5FC29475(func_216(func_217()));
	}
	unk_0xE1A783031BB95983(iParam0, iParam1);
}

int func_216(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/];
	}
	return -1;
}

int func_217()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_216(iVar0) != 2147483647)
		{
			if (func_213(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_222(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_221(iParam0))
	{
		func_220(iParam0, iVar0);
	}
	else
	{
		func_219(iParam0, iVar0);
	}
}

void func_219(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_220(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, 1);
	}
}

int func_221(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_222(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (unk_0x5BC7B5709E38CBE0(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210, 3))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210), 3);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210, 3))
	{
		unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_210), 3);
	}
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 0);
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 1);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 2))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 2);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 3))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 3);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 4))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 4);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 5))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 5);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 6))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 6);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 7);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 8))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 8);
			}
			break;
		
		default:
			break;
	}
	switch (iParam1)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 9))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 9);
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 10))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 10);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 11))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 11);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 12))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 12);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 13))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 13);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 14))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 14);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 15))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 15);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 16))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 16);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 17))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 17);
			}
			break;
		
		default:
			break;
	}
	switch (iParam2)
	{
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 18))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 18);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 19))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 19);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 20))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 20);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, 21))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), 21);
			}
			break;
		
		default:
			break;
	}
	func_200(iParam3);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((iVar0 != iParam0 && iVar0 != iParam1 + 9) && iVar0 != iParam2 + 17)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150, iVar0))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_150), iVar0);
			}
		}
		iVar0++;
	}
	if (func_202())
	{
		func_201(1);
	}
	else
	{
		func_201(0);
	}
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 0);
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 1);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 2))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 2);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 3))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 3);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 4))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 4);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 5))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 5);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 6))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 6);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 7);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 8))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 8);
			}
			break;
		
		default:
			break;
	}
	switch (iParam1)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 9))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 9);
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 10))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 10);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 11))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 11);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 12))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 12);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 13))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 13);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 14))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 14);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 15))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 15);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 16))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 16);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 17))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 17);
			}
			break;
		
		default:
			break;
	}
	switch (iParam2)
	{
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 18))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 18);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 19))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 19);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 20))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 20);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, 21))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), 21);
			}
			break;
		
		default:
			break;
	}
	func_200(iParam3);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((iVar0 != iParam0 && iVar0 != iParam1 + 9) && iVar0 != iParam2 + 17)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149, iVar0))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_149), iVar0);
			}
		}
		iVar0++;
	}
	if (func_202())
	{
		func_201(1);
	}
	else
	{
		func_201(0);
	}
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 0);
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 1))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 1);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 2))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 2);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 3))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 3);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 4))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 4);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 5))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 5);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 6))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 6);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 7);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 8))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 8);
			}
			break;
		
		default:
			break;
	}
	switch (iParam1)
	{
		case 0:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 9))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 9);
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 10))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 10);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 11))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 11);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 12))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 12);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 13))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 13);
			}
			break;
		
		case 5:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 14))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 14);
			}
			break;
		
		case 6:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 15))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 15);
			}
			break;
		
		case 7:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 16))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 16);
			}
			break;
		
		case 8:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 17))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 17);
			}
			break;
		
		default:
			break;
	}
	switch (iParam2)
	{
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 18))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 18);
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 19))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 19);
			}
			break;
		
		case 3:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 20))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 20);
			}
			break;
		
		case 4:
			if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, 21))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), 21);
			}
			break;
		
		default:
			break;
	}
	func_200(iParam3);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((iVar0 != iParam0 && iVar0 != iParam1 + 9) && iVar0 != iParam2 + 17)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148, iVar0))
			{
				unk_0x4EA098C870B73AB7(&(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_148), iVar0);
			}
		}
		iVar0++;
	}
	if (func_202())
	{
		func_201(1);
	}
	else
	{
		func_201(0);
	}
}

bool func_227()
{
	return func_101(3207, -1) != 0;
}

bool func_228(int iParam0)
{
	return iParam0 == 1;
}

void func_229(int iParam0, int iParam1)
{
	if (*iParam1 == -1)
	{
		*iParam1 = 1;
	}
	if (iParam0 == 0)
	{
		func_206(3035, *iParam1, -1, 1);
	}
	else if (iParam0 == 1)
	{
		func_206(3036, *iParam1, -1, 1);
	}
	else if (iParam0 == 2)
	{
		func_206(3037, *iParam1, -1, 1);
	}
	else if (iParam0 == 3)
	{
		func_206(3038, *iParam1, -1, 1);
	}
	else if (iParam0 == 4)
	{
		func_206(3039, *iParam1, -1, 1);
	}
	else if (iParam0 == 5)
	{
		func_206(3203, *iParam1, -1, 1);
	}
	else if (iParam0 == 6)
	{
		func_206(3211, *iParam1, -1, 1);
	}
	else if (iParam0 == 7)
	{
		func_206(3216, *iParam1, -1, 1);
	}
	else if (iParam0 == 8)
	{
		func_206(3991, *iParam1, -1, 1);
	}
	else if (iParam0 == 9)
	{
		func_206(3994, *iParam1, -1, 1);
	}
	else if (iParam0 == 10)
	{
		func_206(3997, *iParam1, -1, 1);
	}
	else if (iParam0 == 11)
	{
		func_206(4000, *iParam1, -1, 1);
	}
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_29();
	}
	return Global_2524258[iParam0 /*3*/][iVar0];
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
	var uVar13;
	var uVar14;
	int iVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	var uVar38;
	int iVar39;
	
	if (iLocal_341)
	{
		switch (iLocal_342)
		{
			case 0:
				iVar0 = iParam1;
				if (func_247(iParam5))
				{
					iVar0 = (iVar0 + ((((((((Local_323.f_0 + Local_323.f_1) + Local_323.f_2) + Local_323.f_3) + Local_323.f_4) + Local_323.f_5) + Local_323.f_6) + Local_323.f_7) + Local_323.f_17));
				}
				else if (func_246(iParam5))
				{
					if (func_245(iParam5) == 103)
					{
						iVar0 = (iVar0 + ((Local_323.f_8 + Local_323.f_9) + Local_323.f_10));
					}
					else if (func_245(iParam5) == 104)
					{
						iVar0 = (iVar0 + ((Local_323.f_11 + Local_323.f_12) + Local_323.f_13));
					}
					else if (func_245(iParam5) == 105)
					{
						iVar0 = (iVar0 + ((Local_323.f_14 + Local_323.f_15) + Local_323.f_16));
					}
				}
				if (iParam9 != 0)
				{
					if ((iParam3 != 1394405165 || !(func_247(iParam5) || func_246(iParam5))) || iParam5 != iParam9)
					{
						iVar0 = (iVar0 - iParam8);
					}
				}
				if (iParam7 != 0)
				{
					switch (iParam7)
					{
						case 118439962:
							iVar0 = unk_0x11E019C8F43ACC8A((0.9f * unk_0xBBDA792448DB5A89(iParam1)));
							break;
						
						case 1514966546:
							iVar0 = unk_0x11E019C8F43ACC8A((0.9f * unk_0xBBDA792448DB5A89(iParam1)));
							break;
						
						case 1776242445:
							iVar0 = unk_0x11E019C8F43ACC8A((0.9f * unk_0xBBDA792448DB5A89(iParam1)));
							break;
						
						default:
							break;
						}
				}
				if (!iLocal_321)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = iVar0;
					if (unk_0xF5AB8C1F782D638A() > 0)
					{
						if (unk_0xF5AB8C1F782D638A() >= iVar3)
						{
							iVar2 = iVar3;
						}
						else
						{
							iVar2 = (iVar3 - (iVar3 - unk_0xF5AB8C1F782D638A()));
						}
						iVar3 = (iVar3 - iVar2);
					}
					if (iVar3 > 0)
					{
						if (unk_0x3D62B5F6C60AB02A(-1) > 0)
						{
							if (unk_0x3D62B5F6C60AB02A(-1) >= iVar3)
							{
								iVar1 = iVar3;
							}
							else
							{
								iVar1 = (iVar3 - (iVar3 - unk_0x3D62B5F6C60AB02A(-1)));
							}
							iVar3 = (iVar3 - iVar1);
						}
					}
					if (iVar3 > 0)
					{
					}
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
				}
				if (iParam3 == 1394405165)
				{
					if (func_247(iParam5))
					{
						iVar4 = Global_68395.f_40;
						func_278(&iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &uVar13, &uVar14, &iVar15, &uVar16, &uVar17, &uVar18, &uVar19, &uVar20, &iVar21);
						iVar5 = (iVar5 - 1);
						if (iParam5 != iParam9)
						{
							if (func_241(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_241(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_342 = 3;
										return 1;
									}
								}
								if (func_241(78225582, iParam3, iParam11, iParam4, 1, 0, 0, 4, iParam12, 3))
								{
								}
								else
								{
									iLocal_342 = 3;
									return 1;
								}
								if (iParam7 != 0)
								{
									if (func_241(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_342 = 3;
										return 1;
									}
								}
								if (func_239(iParam5, 1906937290, iVar5, Local_323.f_0, iVar6, Local_323.f_1, iVar4, Local_323.f_2, iVar7, Local_323.f_3, iVar8, Local_323.f_4, iVar9, Local_323.f_5, iVar10, Local_323.f_6, iVar11, Local_323.f_7, iVar21, Local_323.f_17))
								{
								}
								else
								{
									iLocal_342 = 3;
								}
								if (iLocal_342 != 3)
								{
									if (func_237())
									{
										if (iVar1 != 0 || iVar2 != 0)
										{
											unk_0x31D91267C5D8A2BB(1);
											unk_0xF1F1FD749C3567AC(-iVar1, -iVar2);
										}
										iLocal_342 = 1;
									}
									else
									{
										iLocal_342 = 3;
									}
								}
							}
							else
							{
								iLocal_342 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_241(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_342 = 3;
									return 1;
								}
							}
							if (func_239(iParam5, 1906937290, iVar5, Local_323.f_0, iVar6, Local_323.f_1, iVar4, Local_323.f_2, iVar7, Local_323.f_3, iVar8, Local_323.f_4, iVar9, Local_323.f_5, iVar10, Local_323.f_6, iVar11, Local_323.f_7, iVar21, Local_323.f_17))
							{
							}
							else
							{
								iLocal_342 = 3;
							}
							if (iLocal_342 != 3)
							{
								if (func_237())
								{
									if (iVar1 != 0 || iVar2 != 0)
									{
										unk_0x31D91267C5D8A2BB(1);
										unk_0xF1F1FD749C3567AC(-iVar1, -iVar2);
									}
									iLocal_342 = 1;
								}
								else
								{
									iLocal_342 = 3;
								}
							}
						}
					}
					else if (func_246(iParam5))
					{
						func_278(&uVar22, &uVar23, &uVar24, &uVar25, &uVar26, &uVar27, &uVar28, &iVar29, &iVar30, &iVar31, &iVar32, &iVar33, &iVar34, &iVar35, &iVar36, &iVar37, &uVar38);
						iVar29 = (iVar29 - 1);
						iVar32 = (iVar32 - 1);
						iVar35 = (iVar35 - 1);
						if (iParam5 != iParam9)
						{
							if (func_245(iParam5) == 103)
							{
							}
							if (func_245(iParam5) == 104)
							{
							}
							if (func_245(iParam5) == 105)
							{
							}
							if (func_241(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_241(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_342 = 3;
										return 1;
									}
								}
								iVar39 = 0;
								if (func_245(iParam5) == 103)
								{
									iVar39 = Local_323.f_8;
								}
								if (func_245(iParam5) == 104)
								{
									iVar39 = Local_323.f_11;
								}
								if (func_245(iParam5) == 105)
								{
									iVar39 = Local_323.f_14;
								}
								if (func_241(78225582, iParam3, iParam11, iParam4, 1, iVar39, 0, 4, iParam12, 3))
								{
								}
								else
								{
									iLocal_342 = 3;
									return 1;
								}
								if (iParam7 != 0)
								{
									if (func_241(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_342 = 3;
										return 1;
									}
								}
								if (func_234(iParam5, 1906937290, 0, iVar29, Local_323.f_8, iVar30, Local_323.f_9, iVar31, Local_323.f_10, iVar32, Local_323.f_11, iVar33, Local_323.f_12, iVar34, Local_323.f_13, iVar35, Local_323.f_14, iVar36, Local_323.f_15, iVar37, Local_323.f_16))
								{
								}
								else
								{
									iLocal_342 = 3;
								}
								if (iLocal_342 != 3)
								{
									if (func_237())
									{
										if (iVar1 != 0 || iVar2 != 0)
										{
											unk_0x31D91267C5D8A2BB(1);
											unk_0xF1F1FD749C3567AC(-iVar1, -iVar2);
										}
										iLocal_342 = 1;
									}
									else
									{
										iLocal_342 = 3;
									}
								}
							}
							else
							{
								iLocal_342 = 3;
							}
						}
						else
						{
							if (func_245(iParam5) == 103)
							{
							}
							if (func_245(iParam5) == 104)
							{
							}
							if (func_245(iParam5) == 105)
							{
							}
							if (iParam7 != 0)
							{
								if (func_241(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_342 = 3;
									return 1;
								}
							}
							if (func_234(iParam5, 1906937290, 1, iVar29, Local_323.f_8, iVar30, Local_323.f_9, iVar31, Local_323.f_10, iVar32, Local_323.f_11, iVar33, Local_323.f_12, iVar34, Local_323.f_13, iVar35, Local_323.f_14, iVar36, Local_323.f_15, iVar37, Local_323.f_16))
							{
							}
							else
							{
								iLocal_342 = 3;
							}
							if (iLocal_342 != 3)
							{
								if (func_237())
								{
									if (iVar1 != 0 || iVar2 != 0)
									{
										unk_0x31D91267C5D8A2BB(1);
										unk_0xF1F1FD749C3567AC(-iVar1, -iVar2);
									}
									iLocal_342 = 1;
								}
								else
								{
									iLocal_342 = 3;
								}
							}
						}
					}
					else if (func_241(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3) && func_241(78225582, iParam3, iParam11, iParam4, 1, 0, 0, 4, iParam12, 3))
					{
						if (iParam9 != 0)
						{
							if (func_241(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
							{
							}
							else
							{
								iLocal_342 = 3;
								return 1;
							}
						}
						if (iParam7 != 0)
						{
							if (func_241(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
							{
							}
							else
							{
								iLocal_342 = 3;
								return 1;
							}
						}
						if (iLocal_342 != 3)
						{
							if (func_237())
							{
								if (iVar1 != 0 || iVar2 != 0)
								{
									unk_0x31D91267C5D8A2BB(1);
									unk_0xF1F1FD749C3567AC(-iVar1, -iVar2);
								}
								iLocal_342 = 1;
							}
							else
							{
								iLocal_342 = 3;
							}
						}
					}
					else
					{
						iLocal_342 = 3;
					}
				}
				else if (func_241(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (iParam7 != 0)
					{
						if (func_241(78225582, iParam3, iParam7, iParam4, 1, iParam1, iParam2, 4, iParam5, 3))
						{
						}
						else
						{
							iLocal_342 = 3;
							return 1;
						}
					}
					if (func_237())
					{
						if (iVar1 != 0 || iVar2 != 0)
						{
							unk_0x31D91267C5D8A2BB(1);
							unk_0xF1F1FD749C3567AC(-iVar1, -iVar2);
						}
						iLocal_342 = 1;
					}
					else
					{
						iLocal_342 = 3;
					}
				}
				else
				{
					iLocal_342 = 3;
				}
				break;
			
			case 1:
				if (func_233(func_217()))
				{
					if (func_232(func_217()) == 2)
					{
						iLocal_342 = 2;
					}
					else
					{
						iLocal_342 = 3;
					}
				}
				break;
			
			case 2:
				iLocal_341 = 0;
				iLocal_342 = 0;
				if (!iLocal_321)
				{
					unk_0x31D91267C5D8A2BB(0);
					unk_0x7FE30C99EA3439F7(13);
				}
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_210(func_217());
				iLocal_341 = 0;
				iLocal_342 = 0;
				if (!iLocal_321)
				{
					unk_0x31D91267C5D8A2BB(0);
					unk_0x7FE30C99EA3439F7(13);
				}
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (iLocal_342 == 3)
	{
		func_210(func_217());
		iLocal_341 = 0;
		iLocal_342 = 0;
		if (!iLocal_321)
		{
			unk_0x31D91267C5D8A2BB(0);
			unk_0x7FE30C99EA3439F7(13);
		}
		*iParam0 = 0;
		return 0;
	}
	iLocal_342 = 0;
	*iParam0 = -1;
	return 0;
}

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

int func_234(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	
	iVar0 = func_245(iParam0);
	bVar1 = false;
	if (!func_246(iParam0))
	{
	}
	if (iVar0 == 103)
	{
		iVar19 = func_56(8, -1);
		bVar1 = true;
		if (bParam2)
		{
			if (iParam4 != 0 || iVar19 == 0)
			{
				if (iParam3 != -1)
				{
					iVar20 = func_276(iParam3 + 1);
					func_186(&sVar2, iVar20, iVar19, 0);
					iVar18 = func_248(8);
					if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
					{
						if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam4, 1, 4, iVar18, 3))
						{
						}
					}
				}
			}
		}
		if ((iParam6 != 0 || iVar19 == 0) || iVar19 != iVar0)
		{
			iVar21 = func_275(iParam5);
			func_236(&sVar2, 8, iVar21, 0);
			iVar18 = func_235(8);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam6, 1, 4, iVar18, 3))
				{
				}
			}
		}
		if ((iParam8 != 0 || iVar19 == 0) || iVar19 != iVar0)
		{
			iVar22 = func_274(iParam7);
			func_236(&sVar2, 9, iVar22, 0);
			iVar18 = func_235(9);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam8, 1, 4, iVar18, 3))
				{
				}
			}
		}
	}
	if (iVar0 == 104)
	{
		iVar23 = func_56(9, -1);
		bVar1 = true;
		if (bParam2)
		{
			if (iParam10 != 0 || iVar23 == 0)
			{
				if (iParam9 != -1)
				{
					iVar24 = func_276(iParam9 + 1);
					func_186(&sVar2, iVar24, iVar23, 0);
					iVar18 = func_248(9);
					if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
					{
						if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam10, 1, 4, iVar18, 3))
						{
						}
					}
				}
			}
		}
		if ((iParam12 != 0 || iVar23 == 0) || iVar23 != iVar0)
		{
			iVar25 = func_275(iParam11);
			func_236(&sVar2, 10, iVar25, 0);
			iVar18 = func_235(10);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam12, 1, 4, iVar18, 3))
				{
				}
			}
		}
		if ((iParam14 != 0 || iVar23 == 0) || iVar23 != iVar0)
		{
			iVar26 = func_274(iParam13);
			func_236(&sVar2, 11, iVar26, 0);
			iVar18 = func_235(11);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam14, 1, 4, iVar18, 3))
				{
				}
			}
		}
	}
	if (iVar0 == 105)
	{
		iVar27 = func_56(10, -1);
		bVar1 = true;
		if (bParam2)
		{
			if (iParam16 != 0 || iVar27 == 0)
			{
				if (iParam15 != -1)
				{
					iVar28 = func_276(iParam15 + 1);
					func_186(&sVar2, iVar28, iVar27, 0);
					iVar18 = func_248(10);
					if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
					{
						if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam16, 1, 4, iVar18, 3))
						{
						}
					}
				}
			}
		}
		if ((iParam18 != 0 || iVar27 == 0) || iVar27 != iVar0)
		{
			iVar29 = func_275(iParam17);
			func_236(&sVar2, 12, iVar29, 0);
			iVar18 = func_235(12);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam18, 1, 4, iVar18, 3))
				{
				}
			}
		}
		if ((iParam20 != 0 || iVar27 == 0) || iVar27 != iVar0)
		{
			iVar30 = func_274(iParam19);
			func_236(&sVar2, 13, iVar30, 0);
			iVar18 = func_235(13);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam20, 1, 4, iVar18, 3))
				{
				}
			}
		}
	}
	if (!bVar1)
	{
	}
	return 1;
}

int func_235(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_VAR_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_PERSONNEL_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_FONT_PLAYER_OFFICE_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_COLOUR_PLAYER_OFFICE_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_LOCKER_GUN_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_LOCKER_CASH_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_ACCOMMODATION_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_NAME_ID_v0", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_LIGHTING_v0", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_LIGHTING_v0", 64);
			break;
		
		case 12:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_LIGHTING_v0", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_NUMBERING_v0", 64);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_NUMBERING_v0", 64);
			break;
		
		case 13:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_NUMBERING_v0", 64);
			break;
		
		case 14:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_MODSHOP_v0", 64);
			break;
	}
	if (unk_0xC55B9553B3EDADE9(&cVar0))
	{
		return -1;
	}
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

void func_236(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[16];
	
	switch (iParam1)
	{
		case 0:
			return;
			break;
		
		case 1:
			StringCopy(&cVar0, "PM_PERSON_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 2:
			StringCopy(&cVar0, "PM_FONT_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 3:
			StringCopy(&cVar0, "PM_COLOUR_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 4:
			StringCopy(&cVar0, "PM_GUNLOCK_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 5:
			StringCopy(&cVar0, "PM_CASHLOCK_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 6:
			StringCopy(&cVar0, "PM_ACCOM_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 7:
			StringCopy(&cVar0, "PM_NAME_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 8:
		case 10:
		case 12:
			StringCopy(&cVar0, "PM_GLIGHT_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 9:
		case 11:
		case 13:
			StringCopy(&cVar0, "PM_GNUMBER_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 14:
			StringCopy(&cVar0, "PM_MODSHOP_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
	}
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &cVar0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

int func_237()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_256())
	{
		bVar0 = true;
	}
	iVar1 = func_217();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_29()) || unk_0x65C1BCEE262A67BB())
		{
			if (func_238(Global_2590199[iVar1 /*76*/].f_6, Global_2590199[iVar1 /*76*/].f_4, Global_2590199[iVar1 /*76*/].f_1) == 1)
			{
				Global_2590709 = 1;
			}
			return 0;
		}
		if (Global_2453631)
		{
			if (Global_2590199[iVar1 /*76*/].f_6 == 1067618600 || Global_2590199[iVar1 /*76*/].f_6 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_216(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar2))
		{
			if (bVar0)
			{
				Global_2590199[iVar1 /*76*/].f_69 = 1;
			}
			Global_2590199[iVar1 /*76*/].f_75 = 0;
			Global_2590699 = 1;
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
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
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar0 = func_56(5, -1);
	iVar1 = func_240(iParam0);
	if (!func_247(iParam0))
	{
	}
	if (iParam3 != 0 || iVar0 == 0)
	{
		if (iParam2 != -1)
		{
			iVar19 = 0;
			func_186(&sVar2, iParam2, iVar1, iVar19);
			iVar18 = func_235(0);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam3, 1, 4, iVar18, 3))
				{
				}
			}
		}
	}
	if (iParam4 != func_101(3204, -1) || iVar0 == 0)
	{
		iVar20 = 0;
		if (iParam5 == 0)
		{
			iVar20 = 1;
		}
		func_236(&sVar2, 1, iParam4, iVar20);
		iVar18 = func_235(1);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam5, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if (iParam7 != 0 || iVar0 == 0)
	{
		func_236(&sVar2, 7, iParam6, 0);
		iVar18 = func_235(7);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam7, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if ((iParam9 != 0 || iVar0 == 0) || iVar0 != iVar1)
	{
		iVar21 = 0;
		if (iParam9 == 0)
		{
			iVar21 = 1;
		}
		func_236(&sVar2, 2, iParam8, iVar21);
		iVar18 = func_235(2);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam9, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if ((iParam10 != func_101(3679, -1) || iVar0 == 0) || iVar0 != iVar1)
	{
		func_236(&sVar2, 3, iParam10, 0);
		iVar18 = func_235(3);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam11, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if (iParam13 != 0 || iVar0 == 0)
	{
		func_236(&sVar2, 4, iParam12, 0);
		iVar18 = func_235(4);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam13, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if (iParam15 != 0 || iVar0 == 0)
	{
		func_236(&sVar2, 5, iParam14, 0);
		iVar18 = func_235(5);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam15, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if (iParam17 != 0 || iVar0 == 0)
	{
		func_236(&sVar2, 6, iParam16, 0);
		iVar18 = func_235(6);
		if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
		{
			if (!func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam17, 1, 4, iVar18, 3))
			{
			}
		}
	}
	if (iParam18 != 0)
	{
		if ((iParam18 != func_101(5283, -1) || iVar0 == 0) || iVar0 != iVar1)
		{
			iVar22 = func_263(iParam18);
			if (!func_202())
			{
				if (iVar22 == 0)
				{
					func_236(&sVar2, 14, 1, iVar1);
				}
				else
				{
					func_236(&sVar2, 14, iVar22 + 1, iVar1);
				}
			}
			else
			{
				func_236(&sVar2, 14, iVar22 + 1, 0);
			}
			iVar18 = func_235(14);
			if (unk_0x8BF28AE5815EF02F(unk_0x6D9FF4C899CD785F(&sVar2)) && unk_0x8BF28AE5815EF02F(iVar18))
			{
				if (func_241(78225582, iParam1, unk_0x6D9FF4C899CD785F(&sVar2), 1372920054, 1, iParam19, 1, 4, iVar18, 3))
				{
				}
			}
		}
	}
	return 1;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case -784377220:
			return 87;
			break;
		
		case -513584270:
			return 88;
			break;
		
		case 615718995:
			return 89;
			break;
		
		case -1853414437:
			return 90;
			break;
	}
	return 0;
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_256())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_29()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_217();
	if (iVar1 == -1)
	{
		if (!func_243(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_242(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2590199[iVar1 /*76*/].f_73 = Var2.f_0;
		Global_2590199[iVar1 /*76*/].f_74 = Var2.f_1;
		if (bVar0 || unk_0x328C43EB597893D3(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_243(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_256())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_29()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2590199[iVar1 /*76*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x2D49B264932645E7())
		{
			unk_0x0236A1291D69648C();
		}
	}
	if (bVar0 || unk_0xB15AD5FE76D52C01(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_244(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_244(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_256())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = iParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = iParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 1611602018:
			return 103;
			break;
		
		case -45011037:
			return 104;
			break;
		
		case 1018643211:
			return 105;
			break;
	}
	return 0;
}

bool func_246(int iParam0)
{
	return func_245(iParam0) != 0;
}

bool func_247(int iParam0)
{
	return func_240(iParam0) != 0;
}

int func_248(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_VAR_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_PROP_CLUBHOUSE_VAR_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_5_v0", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_VAR_v0", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_VAR_v0", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_VAR_v0", 64);
			break;
	}
	if (unk_0xC55B9553B3EDADE9(&cVar0))
	{
		return -1;
	}
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	func_186(&sVar0, iParam0, iParam1, iParam2);
	return unk_0x6D9FF4C899CD785F(&sVar0);
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
		case 87:
		case 88:
		case 89:
		case 90:
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
		case 113:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_251(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_PROPERTY_HOUSE_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_PROP_CLUBHOUSE_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_5_v0", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_v0", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_v0", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_v0", 64);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_STAT_PROP_IE_WAREHOUSE_v0", 64);
			break;
	}
	if (unk_0xC55B9553B3EDADE9(&cVar0))
	{
		return -1;
	}
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

int func_252(int iParam0, int iParam1)
{
	char* sVar0;
	
	func_173(&sVar0, iParam0, iParam1);
	return unk_0x6D9FF4C899CD785F(&sVar0);
}

bool func_253()
{
	if (unk_0x8676DE83D4396C39())
	{
		return func_255();
	}
	return func_254(Global_1632166.f_86360);
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5054[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_255()
{
	return Global_2443089.f_12;
}

int func_256()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x8676DE83D4396C39() && unk_0xE7BED5070A138CE8())
	{
		Global_68232 = iParam0;
		Global_68233 = iParam1;
		Global_68231 = 1;
		Global_2593913 = iParam2;
	}
}

struct<4> func_258(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		
		case 115:
			StringCopy(&Var0, "IE_WARE_1", 16);
			break;
	}
	return Var0;
}

int func_259(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
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
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	struct<16> Var20;
	int iVar36;
	int iVar37;
	
	iVar0 = func_56(5, -1);
	iVar1 = 0;
	func_278(&iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &uVar9, &uVar10, &uVar11, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, &iVar18);
	*uParam1 = 0;
	if (func_230(5, -1) != iVar2)
	{
		iVar19 = func_196(iVar2);
		if (func_256())
		{
			*uParam1 = func_183((iVar2 - 1), iParam0);
		}
		else
		{
			*uParam1 = func_183((iVar2 - 1), iParam0);
		}
		if (iVar0 != iParam0 && iVar19 == 0)
		{
			*uParam1 = 0;
		}
		else
		{
			iVar1 = (iVar1 + *uParam1);
		}
	}
	else
	{
		*uParam1 = 0;
	}
	*uParam2 = 0;
	if (iVar0 != iParam0)
	{
	}
	else if (func_101(3204, -1) != iVar3)
	{
		if (!func_193(0))
		{
			*uParam2 = func_181(1, 1);
			iVar1 = (iVar1 + *uParam2);
		}
		else
		{
			*uParam2 = func_181(1, 0);
			iVar1 = (iVar1 + *uParam2);
		}
	}
	*uParam3 = 0;
	*uParam4 = 0;
	*uParam5 = 0;
	if (iVar0 != iParam0)
	{
	}
	else
	{
		if (!unk_0xC55B9553B3EDADE9(&(Global_68395.f_21)))
		{
			Var20 = { func_260(45, 46, -1) };
			if (!unk_0xC55B9553B3EDADE9(&Var20) && !unk_0xCC257DA11A122B5F(&(Global_68395.f_21), &Var20))
			{
				*uParam3 = func_181(7, -1);
				iVar1 = (iVar1 + *uParam3);
			}
		}
		if (iVar4 != func_101(3678, -1))
		{
			*uParam4 = func_181(2, -1);
			iVar1 = (iVar1 + *uParam4);
		}
		if (iVar5 != func_101(3679, -1))
		{
			*uParam5 = func_181(3, -1);
			iVar1 = (iVar1 + *uParam5);
		}
	}
	*uParam6 = 0;
	if (func_228(iVar6))
	{
		if (iVar0 != iParam0)
		{
			*uParam6 = func_181(4, -1);
			iVar1 = (iVar1 + *uParam6);
		}
		else if (!func_204())
		{
			*uParam6 = func_181(4, -1);
			iVar1 = (iVar1 + *uParam6);
		}
	}
	*uParam7 = 0;
	if (func_228(iVar7))
	{
		if (iVar0 != iParam0)
		{
			*uParam7 = func_181(5, -1);
			iVar1 = (iVar1 + *uParam7);
		}
		else if (!func_203())
		{
			*uParam7 = func_181(5, -1);
			iVar1 = (iVar1 + *uParam7);
		}
	}
	*uParam8 = 0;
	if (func_228(iVar8))
	{
		if (iVar0 != iParam0)
		{
			*uParam8 = func_181(6, -1);
			iVar1 = (iVar1 + *uParam8);
		}
		else if (!func_227())
		{
			*uParam8 = func_181(6, -1);
			iVar1 = (iVar1 + *uParam8);
		}
	}
	*uParam9 = 0;
	if (iVar18 != func_101(5283, -1))
	{
		iVar36 = 0;
		iVar37 = func_263(iVar18);
		if (!func_202())
		{
			iVar36 = func_160(iParam0);
			if (iVar37 == 0)
			{
				*uParam9 = 0;
			}
			else
			{
				*uParam9 = func_181(14, iVar37 + 1);
			}
		}
		else
		{
			*uParam9 = func_181(14, iVar37 + 1);
		}
		*uParam9 = (*uParam9 + iVar36);
		iVar1 = (iVar1 + *uParam9);
	}
	return iVar1;
}

struct<16> func_260(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];
	
	uVar0 = Global_2523435[iParam0 /*3*/][func_102(iParam2)];
	uVar1 = Global_2523435[iParam1 /*3*/][func_102(iParam2)];
	StringCopy(&Var2, unk_0xF1D9DDFE9A9CF52F(uVar0, -1), 64);
	StringCopy(&cVar18, unk_0xF1D9DDFE9A9CF52F(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

int func_261()
{
	int iVar0;
	
	iVar0 = func_262(unk_0xCCBC12DE4EF24132(12), 0, 6);
	iVar0 += 87;
	if (iVar0 < 87)
	{
		iVar0 = 87;
	}
	else if (iVar0 > 90)
	{
		iVar0 = 90;
	}
	return iVar0;
}

int func_262(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (unk_0xEDD95A39E5544DE8(1, iParam2) - 1);
	iVar0 = unk_0xEDD95A39E5544DE8(iVar0, iParam1);
	return unk_0x97EF1E5BCE9DC075((uParam0 && iVar0), iParam1);
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_264(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_264(int iParam0)
{
	if (iParam0 == 0)
	{
		return 20;
	}
	else if (iParam0 == 1)
	{
		return 18;
	}
	else if (iParam0 == 2)
	{
		return 16;
	}
	else if (iParam0 == 3)
	{
		return 17;
	}
	else if (iParam0 == 4)
	{
		return 19;
	}
	else if (iParam0 == 5)
	{
		return 6;
	}
	else if (iParam0 == 6)
	{
		return 8;
	}
	else if (iParam0 == 7)
	{
		return 7;
	}
	else if (iParam0 == 8)
	{
		return 9;
	}
	else if (iParam0 == 9)
	{
		return 10;
	}
	else if (iParam0 == 10)
	{
		return 14;
	}
	else if (iParam0 == 11)
	{
		return 15;
	}
	else if (iParam0 == 12)
	{
		return 13;
	}
	else if (iParam0 == 13)
	{
		return 12;
	}
	else if (iParam0 == 14)
	{
		return 11;
	}
	else if (iParam0 == 15)
	{
		return 5;
	}
	else if (iParam0 == 16)
	{
		return 4;
	}
	else if (iParam0 == 17)
	{
		return 1;
	}
	else if (iParam0 == 18)
	{
		return 2;
	}
	else if (iParam0 == 19)
	{
		return 3;
	}
	return 1;
}

int func_265(int iParam0)
{
	return 0;
}

int func_266(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = 0;
	func_278(&uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6, &uVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &iVar13, &iVar14, &iVar15, &iVar16, &uVar17);
	iVar18 = func_56(8, -1);
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (iParam0 == 103)
	{
		if (func_230(8, -1) != iVar8 && iVar8 != -1)
		{
			iVar19 = func_276(iVar8);
			*uParam1 = func_183(iVar19, iParam0);
			if (iVar18 != iParam0)
			{
				if (iVar19 == 0)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = func_183(iVar19, iParam0);
					iVar0 = (iVar0 + *uParam1);
				}
			}
			else if (iVar8 == func_230(8, -1))
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = func_183(iVar19, iParam0);
				iVar0 = (iVar0 + *uParam1);
			}
		}
		if (iVar9 != -1)
		{
			iVar20 = func_275(iVar9);
			if (iVar18 != iParam0)
			{
				if (iVar20 == 0)
				{
				}
				else
				{
					*uParam2 = func_181(8, iVar20);
					iVar0 = (iVar0 + *uParam2);
				}
			}
			else if (iVar9 != func_101(5277, -1))
			{
				*uParam2 = func_181(8, iVar20);
				iVar0 = (iVar0 + *uParam2);
			}
		}
		if (iVar10 != -1)
		{
			iVar21 = func_274(iVar10);
			if (iVar18 != iParam0)
			{
				if (iVar21 == 0)
				{
				}
				else
				{
					*uParam3 = func_181(9, iVar21);
					iVar0 = (iVar0 + *uParam3);
				}
			}
			else if (iVar10 != func_101(5278, -1))
			{
				*uParam3 = func_181(9, iVar21);
				iVar0 = (iVar0 + *uParam3);
			}
		}
	}
	iVar22 = func_56(9, -1);
	*uParam4 = 0;
	*uParam5 = 0;
	*uParam6 = 0;
	if (iParam0 == 104)
	{
		if (func_230(9, -1) != iVar11 && iVar11 != -1)
		{
			iVar23 = func_276(iVar11);
			*uParam4 = func_183(iVar23, iParam0);
			if (iVar22 != iParam0)
			{
				if (iVar23 == 0)
				{
					*uParam4 = 0;
				}
				else
				{
					*uParam4 = func_183(iVar23, iParam0);
					iVar0 = (iVar0 + *uParam4);
				}
			}
			else if (iVar11 == func_230(9, -1))
			{
				*uParam4 = 0;
			}
			else
			{
				*uParam4 = func_183(iVar23, iParam0);
				iVar0 = (iVar0 + *uParam4);
			}
		}
		if (iVar12 != -1)
		{
			iVar24 = func_275(iVar12);
			if (iVar22 != iParam0)
			{
				if (iVar24 == 0)
				{
				}
				else
				{
					*uParam5 = func_181(10, iVar24);
					iVar0 = (iVar0 + *uParam5);
				}
			}
			else if (iVar12 != func_101(5279, -1))
			{
				*uParam5 = func_181(10, iVar24);
				iVar0 = (iVar0 + *uParam5);
			}
		}
		if (iVar13 != -1)
		{
			iVar25 = func_274(iVar13);
			if (iVar22 != iParam0)
			{
				if (iVar25 == 0)
				{
				}
				else
				{
					*uParam6 = func_181(11, iVar25);
					iVar0 = (iVar0 + *uParam6);
				}
			}
			else if (iVar13 != func_101(5280, -1))
			{
				*uParam6 = func_181(11, iVar25);
				iVar0 = (iVar0 + *uParam6);
			}
		}
	}
	iVar26 = func_56(10, -1);
	*uParam7 = 0;
	*uParam8 = 0;
	*uParam9 = 0;
	if (iParam0 == 105)
	{
		if (func_230(10, -1) != iVar14 && iVar14 != -1)
		{
			iVar27 = func_276(iVar14);
			*uParam7 = func_183(iVar27, iParam0);
			if (iVar26 != iParam0)
			{
				if (iVar27 == 0)
				{
					*uParam7 = 0;
				}
				else
				{
					*uParam7 = func_183(iVar27, iParam0);
					iVar0 = (iVar0 + *uParam7);
				}
			}
			else if (iVar14 == func_230(10, -1))
			{
				*uParam7 = 0;
			}
			else
			{
				*uParam7 = func_183(iVar27, iParam0);
				iVar0 = (iVar0 + *uParam7);
			}
		}
		if (iVar15 != -1)
		{
			iVar28 = func_275(iVar15);
			if (iVar26 != iParam0)
			{
				if (iVar28 == 0)
				{
				}
				else
				{
					*uParam8 = func_181(12, iVar28);
					iVar0 = (iVar0 + *uParam8);
				}
			}
			else if (iVar15 != func_101(5281, -1))
			{
				*uParam8 = func_181(12, iVar28);
				iVar0 = (iVar0 + *uParam8);
			}
		}
		if (iVar16 != -1)
		{
			iVar29 = func_274(iVar16);
			if (iVar26 != iParam0)
			{
				if (iVar29 == 0)
				{
				}
				else
				{
					*uParam9 = func_181(13, iVar29);
					iVar0 = (iVar0 + *uParam9);
				}
			}
			else if (iVar16 != func_101(5282, -1))
			{
				*uParam9 = func_181(13, iVar29);
				iVar0 = (iVar0 + *uParam9);
			}
		}
	}
	return iVar0;
}

void func_267(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<8> Var0;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	int iVar35;
	int iVar36;
	char* sVar37;
	
	bVar16 = func_48(iParam0);
	bVar17 = func_47(iParam0, -1);
	bVar18 = func_49(iParam0, 0, 0);
	if (bVar16 && !bVar18)
	{
		func_278(&uVar19, &uVar20, &uVar21, &uVar22, &uVar23, &uVar24, &uVar25, &uVar26, &uVar27, &uVar28, &uVar29, &uVar30, &uVar31, &uVar32, &uVar33, &uVar34, &iVar35);
		if (iVar35 != 0)
		{
			iVar36 = func_101(5283, -1);
			if (iVar35 != iVar36)
			{
				bVar16 = false;
				bVar18 = true;
			}
		}
	}
	if ((bVar16 || bVar17) || bVar18)
	{
		unk_0x3B6EF6403E3F1CAC(iLocal_319, "SET_DATA_SLOT");
		unk_0x1B215CC37BF52E79(1);
		if (bParam2)
		{
			func_180("MP_OFF_S_BUY_T");
		}
		else if (bParam4)
		{
			func_180("MP_OFF_W_BUY_T");
		}
		else if (bParam5)
		{
			func_180("MP_OFF_WF_BUY_T");
		}
		else
		{
			func_180("MP_OFF_F_BUY_T");
		}
		unk_0xBBAAC5B2437ACF2A();
		sVar37 = "";
		unk_0x3B6EF6403E3F1CAC(iLocal_319, "SET_DATA_SLOT");
		unk_0x1B215CC37BF52E79(2);
		if (bParam4)
		{
			if (bVar16)
			{
				sVar37 = "MP_OFF_S_WAY";
			}
			else if (bVar17)
			{
				sVar37 = "MP_CLU_S_WAY";
			}
			else if (bVar18)
			{
				sVar37 = "MP_GAR_S_WAY";
			}
			else
			{
				sVar37 = "MP_XXX_S_WAY";
			}
		}
		else if (bParam5)
		{
			if (bVar16)
			{
				sVar37 = "MP_OFF_S_WAYF";
			}
			else if (bVar17)
			{
				sVar37 = "MP_CLU_S_WAYF";
			}
			else if (bVar18)
			{
				sVar37 = "MP_GAR_S_WAYF";
			}
			else
			{
				sVar37 = "MP_XXX_S_WAYF";
			}
		}
		else
		{
			sVar37 = func_269(bVar16, bVar17, bVar18, bParam2, bParam3);
		}
		func_180(sVar37);
		unk_0xBBAAC5B2437ACF2A();
		if (bVar16)
		{
			StringCopy(&Var0, "WWW_DYNASTY8EXECUTIVEREALTY_COM", 64);
		}
		else if (bVar17)
		{
			StringCopy(&Var0, "FORECLOSURES_MAZE_D_BANK_COM", 64);
		}
		else if (bVar18)
		{
			StringCopy(&Var0, "WWW_DYNASTY8EXECUTIVEREALTY_COM", 64);
		}
	}
	else
	{
		StringCopy(&Var0, "WWW_DYNASTY8REALESTATE_COM", 64);
	}
	StringConCat(&Var0, sParam1, 64);
	func_268(&Var0);
}

void func_268(char* sParam0)
{
	StringCopy(&Global_68338, sParam0, 64);
	Global_68354 = Global_68356 + 1000;
}

char* func_269(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
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
	int iVar16;
	int iVar17;
	
	if (bParam0 && !bParam2)
	{
		func_278(&uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6, &uVar7, &uVar8, &uVar9, &uVar10, &uVar11, &uVar12, &uVar13, &uVar14, &uVar15, &iVar16);
		if (iVar16 != 0)
		{
			iVar17 = func_101(5283, -1);
			if (iVar16 != iVar17)
			{
				bParam0 = false;
				bParam2 = true;
			}
		}
	}
	if (bParam4)
	{
		if (bParam0)
		{
			return "MP_OFF_S_REN";
		}
		else if (bParam1)
		{
			return "MP_CLU_S_REN";
		}
		else if (bParam2)
		{
			return "MP_GAR_S_REN";
		}
	}
	else if (bParam3)
	{
		if (bParam0)
		{
			return "MP_OFF_S_BUY";
		}
		else if (bParam1)
		{
			return "MP_CLU_S_BUY";
		}
		else if (bParam2)
		{
			return "MP_GAR_S_BUY";
		}
	}
	else if (iLocal_320 == 1)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_1";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_1";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_1";
		}
	}
	else if (iLocal_320 == 2)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_2";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_2";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_2";
		}
	}
	else if (iLocal_320 == 3)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_3";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_3";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_3";
		}
	}
	else if (iLocal_320 == 4)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_4";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_4";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_4";
		}
	}
	else if (iLocal_320 == 5)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_5";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_5";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_5";
		}
	}
	else if (iLocal_320 == 6)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_6";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_6";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_6";
		}
	}
	else if (Global_2452508 == 1)
	{
		if (bParam0)
		{
			return "MP_OFF_F_BUY_7";
		}
		else if (bParam1)
		{
			return "MP_CLU_F_BUY_7";
		}
		else if (bParam2)
		{
			return "MP_GAR_F_BUY_7";
		}
	}
	if (bParam0)
	{
		return "MP_OFF_F_BUY_6";
	}
	else if (bParam1)
	{
		return "MP_CLU_F_BUY_6";
	}
	else if (bParam2)
	{
		return "MP_GAR_F_BUY_6";
	}
	return "MP_F_BUY_5";
}

int func_270(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_256())
	{
		iVar0 = 0;
		if (func_265(iParam0))
		{
			iVar0 = 1;
		}
		uVar1 = func_252(iParam0, iVar0);
		if (unk_0x8BF28AE5815EF02F(uVar1))
		{
			return unk_0x710F417CEE307D17(iVar1, 426439576, 1);
		}
	}
	return Global_1049427[iParam0 /*1942*/].f_32;
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_56(iParam0, -1) > 0)
	{
		iVar1 = 0;
		if (func_256())
		{
			iVar1 = unk_0xF2DB717A73826179((IntToFloat(func_270(func_56(iParam0, -1))) * 0.5f));
		}
		if (iParam0 == 0)
		{
			iVar1 = unk_0xF2DB717A73826179((IntToFloat(Global_2097152[func_205() /*10730*/].f_7546.f_3) * 0.5f));
		}
		else if (iParam0 == 1)
		{
			iVar1 = unk_0xF2DB717A73826179((IntToFloat(Global_2097152[func_205() /*10730*/].f_7546.f_1030) * 0.5f));
		}
		else if (iParam0 < 12)
		{
			iVar0 = (iParam0 - 2);
			iVar1 = unk_0xF2DB717A73826179((IntToFloat(Global_2097152[func_205() /*10730*/].f_7546.f_1031[iVar0]) * 0.5f));
		}
		return iVar1;
	}
	return 0;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 5;
			break;
		
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
			return 6;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
			return 8;
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			return 9;
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
	}
	return -1;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
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
		
		case -1:
			return 0;
			break;
	}
	return 0;
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_166(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_167(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_277(109))
	{
		if (func_171(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_277(int iParam0)
{
	if (func_184(iParam0) == 83)
	{
		return 8;
	}
	else if (func_184(iParam0) == 88)
	{
		return 9;
	}
	else if (func_184(iParam0) == 91 || func_184(iParam0) == 97)
	{
		return 9;
	}
	else if (func_184(iParam0) == 109)
	{
		return 4;
	}
	return 0;
}

void func_278(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	*uParam0 = func_197(func_262(unk_0xCCBC12DE4EF24132(12), 6, 4));
	*uParam1 = func_262(unk_0xCCBC12DE4EF24132(12), 10, 1);
	*uParam2 = func_262(unk_0xCCBC12DE4EF24132(12), 11, 4);
	*uParam3 = func_262(unk_0xCCBC12DE4EF24132(12), 15, 4);
	*uParam4 = func_262(unk_0xCCBC12DE4EF24132(12), 19, 1);
	*uParam5 = func_262(unk_0xCCBC12DE4EF24132(12), 20, 1);
	*uParam6 = func_262(unk_0xCCBC12DE4EF24132(12), 21, 1);
	if (func_262(unk_0xCCBC12DE4EF24132(14), 7, 1) == 0)
	{
		*iParam7 = -1;
		*uParam8 = -1;
		*uParam9 = -1;
	}
	else
	{
		*iParam7 = func_171(func_262(unk_0xCCBC12DE4EF24132(14), 8, 2));
		*uParam8 = func_167(func_262(unk_0xCCBC12DE4EF24132(14), 10, 4));
		*uParam9 = func_166(func_262(unk_0xCCBC12DE4EF24132(14), 14, 4));
	}
	if (func_262(unk_0xCCBC12DE4EF24132(14), 18, 1) == 0)
	{
		*iParam10 = -1;
		*uParam11 = -1;
		*uParam12 = -1;
	}
	else
	{
		*iParam10 = func_171(func_262(unk_0xCCBC12DE4EF24132(14), 19, 2));
		*uParam11 = func_167(func_262(unk_0xCCBC12DE4EF24132(14), 21, 4));
		*uParam12 = func_166(func_262(unk_0xCCBC12DE4EF24132(14), 25, 4));
	}
	if (func_262(unk_0xCCBC12DE4EF24132(15), 7, 1) == 0)
	{
		*uParam13 = -1;
		*uParam14 = -1;
		*uParam15 = -1;
	}
	else
	{
		*uParam13 = func_171(func_262(unk_0xCCBC12DE4EF24132(15), 8, 2));
		*uParam14 = func_167(func_262(unk_0xCCBC12DE4EF24132(15), 10, 4));
		*uParam15 = func_166(func_262(unk_0xCCBC12DE4EF24132(15), 14, 4));
	}
	if (func_262(unk_0xCCBC12DE4EF24132(15), 18, 1) == 0)
	{
		*uParam16 = 0;
	}
	else
	{
		*uParam16 = func_264(func_262(unk_0xCCBC12DE4EF24132(15), 19, 5));
	}
}

int func_279()
{
	int iVar0;
	
	iVar0 = func_262(unk_0xCCBC12DE4EF24132(14), 0, 7);
	iVar0 += 103;
	if (iVar0 < 103)
	{
		iVar0 = 103;
	}
	else if (iVar0 > 114)
	{
		iVar0 = 114;
	}
	return iVar0;
}

void func_280()
{
	if (func_114(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_1760737 < 7)
		{
			unk_0x2A29D86854DC4BC0(0, 72, 1);
			unk_0x2A29D86854DC4BC0(0, 71, 1);
		}
	}
}

void func_281()
{
	int iVar0;
	
	if (unk_0xFB6B3EEFAB2DD12C() != func_12())
	{
		if (((unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 7) && unk_0xAB964FCFAC3C767A(unk_0x6D9FF4C899CD785F("carmod_shop")) > 0) && func_114(unk_0xFB6B3EEFAB2DD12C())) && ((unk_0x83D6BCB493FCFCBA() || unk_0x7E3640C27B17457C()) || unk_0xF9B8AB338DC56ADD()))
		{
			iVar0 = 0;
			while (iVar0 < 353)
			{
				unk_0x2A29D86854DC4BC0(0, iVar0, 1);
				iVar0++;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 7))
		{
			if (func_282())
			{
				unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 7);
			}
		}
	}
}

int func_282()
{
	if (func_283())
	{
		return Global_1760739.f_13 == 1;
	}
	return 0;
}

bool func_283()
{
	return Global_1760739.f_12;
}

void func_284()
{
	if (func_19())
	{
		if (func_286() && func_253())
		{
			func_285();
			iLocal_318 = 1;
		}
	}
	else if (((unk_0x8676DE83D4396C39() || func_38()) && func_253()) && iLocal_318)
	{
		if (unk_0xAB964FCFAC3C767A(joaat("am_mp_property_int")) <= 0)
		{
			Global_1589609.f_188 = 0;
			iLocal_318 = 0;
		}
	}
}

void func_285()
{
	unk_0x4EA098C870B73AB7(&(Global_2443089.f_2), 31);
}

bool func_286()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 31);
}

void func_287()
{
	if (Global_1589801 != func_12() && unk_0xFB6B3EEFAB2DD12C() != func_12())
	{
		if (unk_0xFB6B3EEFAB2DD12C() == Global_1589801)
		{
			if ((unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 14) && unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 0)) && unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 26))
			{
				if (unk_0x7887B64A08364778(Global_93577))
				{
					unk_0xC53606C390BE2727(Global_93577, 0, 1);
					unk_0xAA8D7DFFDAAB903E(&Global_93577);
					if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 1))
					{
						unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 1);
					}
					if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 26))
					{
						unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198), 26);
					}
				}
			}
		}
	}
}

void func_288()
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (func_66(unk_0xFB6B3EEFAB2DD12C()) == 178 || func_66(unk_0xFB6B3EEFAB2DD12C()) == 188)
	{
		if (func_290() == -1)
		{
			if (!func_72(&Local_303))
			{
				func_71(&Local_303, 0, 0);
			}
			else if (func_70(&Local_303, 15000, 0))
			{
				Global_2494149.f_4710.f_21 = 1;
				Local_303 = { Var0 };
				if (unk_0xFB6B3EEFAB2DD12C() != func_12())
				{
					if (((unk_0x7E3640C27B17457C() && func_289(unk_0xFB6B3EEFAB2DD12C())) && func_72(&Global_2482205)) && func_66(unk_0xFB6B3EEFAB2DD12C()) == 188)
					{
						unk_0xFF11D473E95357D3(800);
						unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
						unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198), 18);
						unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 7);
					}
				}
			}
		}
	}
	else if (func_72(&Local_303))
	{
		Local_303 = { Var2 };
	}
}

bool func_289(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_199, 7);
}

int func_290()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

void func_291()
{
	func_293(&uLocal_3);
	func_292();
}

void func_292()
{
	if (Global_1760737 == 5 || Global_1760737 == 6)
	{
		if (!func_72(&uLocal_47))
		{
			func_71(&uLocal_47, 0, 0);
		}
		if (unk_0xF9B8AB338DC56ADD())
		{
			if (iLocal_46)
			{
				unk_0x0FBCFDA15A0FB2D5(0);
				iLocal_46 = 0;
			}
			if (!func_70(&uLocal_47, 2500, 0))
			{
				unk_0xED5C6BE1E2C9B186(0f, 0f, 2f, 2f, 0, 0, 0, 255, 0);
			}
			unk_0xFF11D473E95357D3(7000);
		}
	}
	if (Global_1760737 == 7)
	{
		if (func_70(&uLocal_47, 2500, 0))
		{
			func_13(&uLocal_47);
		}
	}
}

void func_293(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_103;
	func_300(iVar0, &Var1);
	if (!unk_0xF44A5E894FE76438(*uParam0, 0))
	{
		if (func_63(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Var1) < 150f)
			{
				if (uParam0->f_1 >= 0 && uParam0->f_1 < 40)
				{
					if (func_294(uParam0))
					{
						uParam0->f_1++;
					}
				}
				if (uParam0->f_1 >= 40)
				{
					uParam0->f_1 = 0;
					unk_0xB8A73E7DA87B2968(uParam0, 0);
				}
			}
		}
	}
}

int func_294(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<100> Var2;
	var uVar103;
	
	iVar0 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_103.f_2[uParam0->f_1];
	if (!unk_0xF44A5E894FE76438(*uParam0, 1))
	{
		Var2.f_9 = 49;
		Var2.f_59 = 2;
		Var2.f_78 = -1;
		Var2.f_95 = -1;
		Var2.f_96 = 1;
		Var2.f_98 = 132;
		Var2.f_99 = -1;
		if (iVar0 > 0 && iVar0 < 97)
		{
			func_297(iVar0, &Var2);
			uVar1 = Var2.f_66;
		}
		else if (iVar0 >= 0 + 1000 && iVar0 <= 97 + 1000)
		{
			uVar1 = func_295(iVar0);
		}
		uParam0->f_2[uParam0->f_1] = uVar1;
		unk_0xB8A73E7DA87B2968(uParam0, 1);
	}
	else
	{
		uVar103 = uParam0->f_2[uParam0->f_1];
		unk_0x4ACD1E4CBA159ED1(uVar103);
		if (unk_0x7AD0E9452821C95D(uVar103))
		{
			unk_0x4EA098C870B73AB7(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

int func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 - 1000);
	iVar2 = iVar0;
	iVar3 = func_296(iVar2);
	switch (iVar3)
	{
		case joaat("cheetah"):
		case joaat("entityxf"):
		case joaat("fmj"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("osiris"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("reaper"):
		case joaat("seven70"):
		case joaat("sheava"):
		case joaat("t20"):
		case joaat("turismor"):
		case joaat("tyrus"):
		case joaat("zentorno"):
			iVar1 = joaat("imp_prop_covered_vehicle_01a");
			break;
		
		case joaat("bestiagts"):
		case joaat("feltzer2"):
		case joaat("omnis"):
		case joaat("sultanrs"):
		case joaat("verlierer2"):
			iVar1 = joaat("imp_prop_covered_vehicle_02a");
			break;
		
		case joaat("nightshade"):
		case joaat("sabregt2"):
		case joaat("tampa"):
			iVar1 = joaat("imp_prop_covered_vehicle_03a");
			break;
		
		case joaat("banshee2"):
		case joaat("coquette2"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("mamba"):
		case joaat("tropos"):
			iVar1 = joaat("imp_prop_covered_vehicle_04a");
			break;
		
		case joaat("btype3"):
			iVar1 = joaat("imp_prop_covered_vehicle_05a");
			break;
		
		case joaat("alpha"):
		case joaat("ztype"):
			iVar1 = joaat("imp_prop_covered_vehicle_06a");
			break;
		
		default:
			iVar1 = joaat("imp_prop_covered_vehicle_01a");
			break;
	}
	return iVar1;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return joaat("prototipo");
		
		case 4:
		case 5:
		case 6:
			return joaat("tyrus");
		
		case 7:
		case 8:
		case 9:
			return joaat("bestiagts");
		
		case 10:
		case 11:
		case 12:
			return joaat("t20");
		
		case 13:
		case 14:
		case 15:
			return joaat("sheava");
		
		case 16:
		case 17:
		case 18:
			return joaat("osiris");
		
		case 19:
		case 20:
		case 21:
			return joaat("fmj");
		
		case 22:
		case 23:
		case 24:
			return joaat("reaper");
		
		case 25:
		case 26:
		case 27:
			return joaat("pfister811");
		
		case 28:
		case 29:
		case 30:
			return joaat("alpha");
		
		case 31:
		case 32:
		case 33:
			return joaat("mamba");
		
		case 34:
		case 35:
		case 36:
			return joaat("tampa");
		
		case 37:
		case 38:
		case 39:
			return joaat("btype3");
		
		case 40:
		case 41:
		case 42:
			return joaat("feltzer3");
		
		case 43:
		case 44:
		case 45:
			return joaat("ztype");
		
		case 46:
		case 47:
		case 48:
			return joaat("tropos");
		
		case 49:
		case 50:
		case 51:
			return joaat("entityxf");
		
		case 52:
		case 53:
		case 54:
			return joaat("sultanrs");
		
		case 55:
		case 56:
		case 57:
			return joaat("zentorno");
		
		case 58:
		case 59:
		case 60:
			return joaat("omnis");
		
		case 61:
		case 62:
		case 63:
			return joaat("coquette3");
		
		case 64:
		case 65:
		case 66:
			return joaat("seven70");
		
		case 67:
		case 68:
		case 69:
			return joaat("verlierer2");
		
		case 70:
		case 71:
		case 72:
			return joaat("feltzer2");
		
		case 73:
		case 74:
		case 75:
			return joaat("coquette2");
		
		case 76:
		case 77:
		case 78:
			return joaat("cheetah");
		
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
			return joaat("nightshade");
		
		case 82:
		case 83:
		case 84:
			return joaat("banshee2");
		
		case 85:
		case 86:
		case 87:
			return joaat("turismor");
		
		case 88:
		case 89:
		case 90:
			return joaat("massacro");
		
		case 91:
		case 92:
		case 93:
			return joaat("sabregt2");
		
		case 94:
		case 95:
		case 96:
			return joaat("jester");
		
		default:
	}
	return 0;
}

void func_297(int iParam0, var uParam1)
{
	uParam1->f_67 = -1;
	uParam1->f_66 = 0;
	switch (iParam0)
	{
		case 28:
			uParam1->f_66 = joaat("alpha");
			StringCopy(&(uParam1->f_1), "V1S1ONRY", 16);
			uParam1->f_5 = 118;
			uParam1->f_6 = 118;
			uParam1->f_7 = 3;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 24);
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[22] = 1;
			break;
		
		case 82:
			uParam1->f_66 = joaat("banshee2");
			StringCopy(&(uParam1->f_1), "DR1FT3R", 16);
			uParam1->f_5 = 69;
			uParam1->f_6 = 96;
			uParam1->f_7 = 107;
			uParam1->f_8 = 154;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 180;
			uParam1->f_63 = 130;
			uParam1->f_64 = 97;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 5;
			uParam1->f_9[7] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			uParam1->f_9[28] = 18;
			uParam1->f_59[0] = 1;
			break;
		
		case 7:
			uParam1->f_66 = joaat("bestiagts");
			StringCopy(&(uParam1->f_1), "BE4STY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 40;
			uParam1->f_6 = 57;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[7] = 1;
			break;
		
		case 37:
			uParam1->f_66 = joaat("btype3");
			StringCopy(&(uParam1->f_1), "L4WLE55", 16);
			*uParam1 = 2;
			uParam1->f_5 = 146;
			uParam1->f_6 = 118;
			uParam1->f_7 = 33;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[43] = 1;
			uParam1->f_9[44] = 3;
			uParam1->f_9[46] = 2;
			break;
		
		case 76:
			uParam1->f_66 = joaat("cheetah");
			StringCopy(&(uParam1->f_1), "BUZZ3D", 16);
			*uParam1 = 1;
			uParam1->f_5 = 91;
			uParam1->f_6 = 67;
			uParam1->f_7 = 70;
			uParam1->f_8 = 35;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_63 = 174;
			uParam1->f_64 = 239;
			uParam1->f_74 = 255;
			uParam1->f_75 = 5;
			uParam1->f_76 = 190;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 6;
			break;
		
		case 73:
			uParam1->f_66 = joaat("coquette2");
			StringCopy(&(uParam1->f_1), "T0PL3SS", 16);
			uParam1->f_5 = 66;
			uParam1->f_6 = 2;
			uParam1->f_7 = 136;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[2] = 3;
			uParam1->f_9[4] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 43;
			break;
		
		case 61:
			uParam1->f_66 = joaat("coquette3");
			StringCopy(&(uParam1->f_1), "V1NT4G3", 16);
			uParam1->f_5 = 5;
			uParam1->f_6 = 117;
			uParam1->f_7 = 112;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			break;
		
		case 49:
			uParam1->f_66 = joaat("entityxf");
			StringCopy(&(uParam1->f_1), "IML4TE", 16);
			*uParam1 = 1;
			uParam1->f_5 = 35;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 26);
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[14] = 33;
			uParam1->f_9[15] = 2;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 23;
			uParam1->f_59[0] = 1;
			break;
		
		case 70:
			uParam1->f_66 = joaat("feltzer2");
			StringCopy(&(uParam1->f_1), "P0W3RFUL", 16);
			*uParam1 = 2;
			uParam1->f_5 = 83;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		
		case 40:
			uParam1->f_66 = joaat("feltzer3");
			StringCopy(&(uParam1->f_1), "M4J3ST1C", 16);
			uParam1->f_5 = 100;
			uParam1->f_6 = 149;
			uParam1->f_7 = 105;
			uParam1->f_8 = 109;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[4] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[23] = 6;
			break;
		
		case 19:
			uParam1->f_66 = joaat("fmj");
			StringCopy(&(uParam1->f_1), "C4TCHM3", 16);
			*uParam1 = 4;
			uParam1->f_5 = 92;
			uParam1->f_6 = 159;
			uParam1->f_7 = 135;
			uParam1->f_8 = 41;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[10] = 2;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 8;
			break;
		
		case 94:
			uParam1->f_66 = joaat("jester");
			StringCopy(&(uParam1->f_1), "H0TP1NK", 16);
			*uParam1 = 2;
			uParam1->f_5 = 135;
			uParam1->f_6 = 54;
			uParam1->f_7 = 67;
			uParam1->f_8 = 140;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_63 = 174;
			uParam1->f_64 = 239;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[14] = 6;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			break;
		
		case 31:
			uParam1->f_66 = joaat("mamba");
			StringCopy(&(uParam1->f_1), "0LDBLU3", 16);
			uParam1->f_5 = 74;
			uParam1->f_6 = 154;
			uParam1->f_7 = 74;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 2);
			uParam1->f_9[4] = 1;
			uParam1->f_9[23] = 27;
			uParam1->f_59[0] = 1;
			break;
		
		case 88:
			uParam1->f_66 = joaat("massacro");
			StringCopy(&(uParam1->f_1), "TR0P1CAL", 16);
			*uParam1 = 3;
			uParam1->f_5 = 54;
			uParam1->f_6 = 6;
			uParam1->f_7 = 92;
			uParam1->f_8 = 91;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 14;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam1->f_66 = joaat("nightshade");
			StringCopy(&(uParam1->f_1), "DE4DLY", 16);
			*uParam1 = 3;
			uParam1->f_5 = 147;
			uParam1->f_6 = 119;
			uParam1->f_7 = 34;
			uParam1->f_8 = 35;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 23;
			break;
		
		case 58:
			uParam1->f_66 = joaat("omnis");
			StringCopy(&(uParam1->f_1), "0BEYM3", 16);
			*uParam1 = 1;
			uParam1->f_5 = 36;
			uParam1->f_6 = 92;
			uParam1->f_7 = 89;
			uParam1->f_8 = 55;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 114;
			uParam1->f_63 = 204;
			uParam1->f_64 = 114;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[4] = 1;
			uParam1->f_9[14] = 45;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 13;
			uParam1->f_59[0] = 1;
			break;
		
		case 16:
			uParam1->f_66 = joaat("osiris");
			StringCopy(&(uParam1->f_1), "OH3LL0", 16);
			uParam1->f_5 = 147;
			uParam1->f_6 = 119;
			uParam1->f_7 = 5;
			uParam1->f_8 = 70;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 5;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 13;
			break;
		
		case 25:
			uParam1->f_66 = joaat("pfister811");
			StringCopy(&(uParam1->f_1), "M1DL1F3", 16);
			uParam1->f_5 = 50;
			uParam1->f_6 = 50;
			uParam1->f_7 = 53;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 5;
			uParam1->f_9[4] = 3;
			uParam1->f_9[22] = 1;
			break;
		
		case 1:
			uParam1->f_66 = joaat("prototipo");
			StringCopy(&(uParam1->f_1), "FUTUR3", 16);
			*uParam1 = 1;
			uParam1->f_5 = 146;
			uParam1->f_6 = 35;
			uParam1->f_7 = 145;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 35;
			uParam1->f_75 = 1;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 2;
			uParam1->f_9[14] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			break;
		
		case 22:
			uParam1->f_66 = joaat("reaper");
			StringCopy(&(uParam1->f_1), "2FA5T4U", 16);
			*uParam1 = 4;
			uParam1->f_5 = 71;
			uParam1->f_6 = 2;
			uParam1->f_7 = 107;
			uParam1->f_8 = 145;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 132;
			uParam1->f_63 = 102;
			uParam1->f_64 = 226;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 1;
			uParam1->f_59[0] = 1;
			break;
		
		case 91:
			uParam1->f_66 = joaat("sabregt2");
			StringCopy(&(uParam1->f_1), "GUNZ0UT", 16);
			uParam1->f_5 = 141;
			uParam1->f_6 = 118;
			uParam1->f_7 = 64;
			uParam1->f_8 = 88;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[24] = 1;
			break;
		
		case 64:
			uParam1->f_66 = joaat("seven70");
			StringCopy(&(uParam1->f_1), "FRU1TY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 84;
			uParam1->f_6 = 3;
			uParam1->f_8 = 138;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 14;
			uParam1->f_59[0] = 1;
			break;
		
		case 13:
			uParam1->f_66 = joaat("sheava");
			StringCopy(&(uParam1->f_1), "B1GB0Y", 16);
			*uParam1 = 3;
			uParam1->f_5 = 29;
			uParam1->f_6 = 34;
			uParam1->f_7 = 35;
			uParam1->f_8 = 1;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 1;
			uParam1->f_59[0] = 1;
			break;
		
		case 52:
			uParam1->f_66 = joaat("sultanrs");
			StringCopy(&(uParam1->f_1), "SN0WFLK3", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 112;
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 15;
			uParam1->f_9[1] = 7;
			uParam1->f_9[2] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 5;
			uParam1->f_9[7] = 9;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[23] = 22;
			uParam1->f_59[0] = 1;
			break;
		
		case 10:
			uParam1->f_66 = joaat("t20");
			StringCopy(&(uParam1->f_1), "CAR4M3L", 16);
			*uParam1 = 2;
			uParam1->f_5 = 106;
			uParam1->f_6 = 159;
			uParam1->f_7 = 67;
			uParam1->f_8 = 136;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 180;
			uParam1->f_63 = 130;
			uParam1->f_64 = 97;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 34:
			uParam1->f_66 = joaat("tampa");
			StringCopy(&(uParam1->f_1), "CH4RG3D", 16);
			*uParam1 = 3;
			uParam1->f_5 = 12;
			uParam1->f_6 = 120;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[14] = 43;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 30;
			uParam1->f_59[0] = 1;
			break;
		
		case 85:
			uParam1->f_66 = joaat("turismor");
			StringCopy(&(uParam1->f_1), "IN4H4ZE", 16);
			*uParam1 = 1;
			uParam1->f_5 = 145;
			uParam1->f_6 = 119;
			uParam1->f_7 = 70;
			uParam1->f_8 = 140;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 12;
			break;
		
		case 46:
			uParam1->f_66 = joaat("tropos");
			StringCopy(&(uParam1->f_1), "1MS0RAD", 16);
			*uParam1 = 2;
			uParam1->f_5 = 34;
			uParam1->f_6 = 149;
			uParam1->f_8 = 153;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			break;
		
		case 4:
			uParam1->f_66 = joaat("tyrus");
			StringCopy(&(uParam1->f_1), "C1TRUS", 16);
			uParam1->f_5 = 36;
			uParam1->f_6 = 3;
			uParam1->f_7 = 26;
			uParam1->f_8 = 89;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[4] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 10;
			uParam1->f_59[0] = 1;
			break;
		
		case 67:
			uParam1->f_66 = joaat("verlierer2");
			StringCopy(&(uParam1->f_1), "PR3C1OUS", 16);
			*uParam1 = 1;
			uParam1->f_5 = 136;
			uParam1->f_6 = 118;
			uParam1->f_7 = 5;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[20] = 1;
			break;
		
		case 55:
			uParam1->f_66 = joaat("zentorno");
			StringCopy(&(uParam1->f_1), "W1NN1NG", 16);
			*uParam1 = 1;
			uParam1->f_5 = 119;
			uParam1->f_6 = 29;
			uParam1->f_7 = 5;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 2;
			uParam1->f_9[22] = 1;
			break;
		
		case 43:
			uParam1->f_66 = joaat("ztype");
			StringCopy(&(uParam1->f_1), "B1GMON3Y", 16);
			*uParam1 = 1;
			uParam1->f_5 = 159;
			uParam1->f_6 = 146;
			uParam1->f_7 = 160;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[6] = 1;
			uParam1->f_9[23] = 20;
			uParam1->f_59[0] = 1;
			break;
	}
	if (uParam1->f_66 == 0)
	{
		func_298(iParam0, uParam1);
	}
}

void func_298(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 29:
			uParam1->f_66 = joaat("alpha");
			StringCopy(&(uParam1->f_1), "L0NG80Y", 16);
			uParam1->f_5 = 35;
			uParam1->f_6 = 5;
			uParam1->f_7 = 28;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 26);
			uParam1->f_9[0] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			break;
		
		case 83:
			uParam1->f_66 = joaat("banshee2");
			StringCopy(&(uParam1->f_1), "D0M1N0", 16);
			uParam1->f_6 = 111;
			uParam1->f_8 = 158;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 5;
			uParam1->f_9[6] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 2;
			break;
		
		case 8:
			uParam1->f_66 = joaat("bestiagts");
			StringCopy(&(uParam1->f_1), "5T34LTH", 16);
			uParam1->f_5 = 149;
			uParam1->f_6 = 57;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[7] = 3;
			uParam1->f_9[23] = 37;
			break;
		
		case 38:
			uParam1->f_66 = joaat("btype3");
			StringCopy(&(uParam1->f_1), "0LDT1M3R", 16);
			*uParam1 = 3;
			uParam1->f_5 = 100;
			uParam1->f_6 = 52;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[5] = 3;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[43] = 1;
			uParam1->f_9[44] = 2;
			uParam1->f_9[46] = 1;
			break;
		
		case 77:
			uParam1->f_66 = joaat("cheetah");
			StringCopy(&(uParam1->f_1), "M1DN1GHT", 16);
			uParam1->f_5 = 72;
			uParam1->f_7 = 106;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 3;
			break;
		
		case 74:
			uParam1->f_66 = joaat("coquette2");
			StringCopy(&(uParam1->f_1), "T0FF33", 16);
			*uParam1 = 3;
			uParam1->f_5 = 37;
			uParam1->f_7 = 106;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 3;
			break;
		
		case 62:
			uParam1->f_66 = joaat("coquette3");
			StringCopy(&(uParam1->f_1), "W1P30UT", 16);
			uParam1->f_5 = 68;
			uParam1->f_6 = 112;
			uParam1->f_7 = 68;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 28;
			break;
		
		case 50:
			uParam1->f_66 = joaat("entityxf");
			StringCopy(&(uParam1->f_1), "0V3RFL0D", 16);
			uParam1->f_5 = 70;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 26;
			break;
		
		case 71:
			uParam1->f_66 = joaat("feltzer2");
			StringCopy(&(uParam1->f_1), "K3YL1M3", 16);
			uParam1->f_5 = 92;
			uParam1->f_7 = 89;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 94;
			uParam1->f_75 = 255;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[23] = 43;
			uParam1->f_59[0] = 1;
			break;
		
		case 41:
			uParam1->f_66 = joaat("feltzer3");
			StringCopy(&(uParam1->f_1), "T0UR3R", 16);
			uParam1->f_5 = 34;
			uParam1->f_6 = 7;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 33;
			break;
		
		case 20:
			uParam1->f_66 = joaat("fmj");
			StringCopy(&(uParam1->f_1), "J0K3R", 16);
			*uParam1 = 1;
			uParam1->f_5 = 35;
			uParam1->f_6 = 111;
			uParam1->f_7 = 25;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 3;
			uParam1->f_9[10] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 36;
			break;
		
		case 95:
			uParam1->f_66 = joaat("jester");
			StringCopy(&(uParam1->f_1), "T0PCL0WN", 16);
			*uParam1 = 1;
			uParam1->f_5 = 52;
			uParam1->f_7 = 5;
			uParam1->f_8 = 151;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[23] = 6;
			break;
		
		case 32:
			uParam1->f_66 = joaat("mamba");
			StringCopy(&(uParam1->f_1), "BLKM4MB4", 16);
			*uParam1 = 1;
			uParam1->f_6 = 111;
			uParam1->f_7 = 10;
			uParam1->f_8 = 122;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 2);
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 6;
			break;
		
		case 89:
			uParam1->f_66 = joaat("massacro");
			StringCopy(&(uParam1->f_1), "B4N4N4", 16);
			uParam1->f_5 = 89;
			uParam1->f_6 = 6;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 4;
			uParam1->f_9[5] = 2;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 38;
			break;
		
		case 80:
			uParam1->f_66 = joaat("nightshade");
			StringCopy(&(uParam1->f_1), "TH37OS", 16);
			uParam1->f_5 = 63;
			uParam1->f_6 = 112;
			uParam1->f_7 = 87;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 24;
			break;
		
		case 59:
			uParam1->f_66 = joaat("omnis");
			StringCopy(&(uParam1->f_1), "W1D3B0D", 16);
			*uParam1 = 2;
			uParam1->f_5 = 111;
			uParam1->f_6 = 64;
			uParam1->f_8 = 81;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[23] = 7;
			break;
		
		case 17:
			uParam1->f_66 = joaat("osiris");
			StringCopy(&(uParam1->f_1), "PH4R40H", 16);
			uParam1->f_5 = 40;
			uParam1->f_6 = 1;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[23] = 28;
			break;
		
		case 26:
			uParam1->f_66 = joaat("pfister811");
			StringCopy(&(uParam1->f_1), "R3G4L", 16);
			uParam1->f_5 = 145;
			uParam1->f_6 = 88;
			uParam1->f_7 = 64;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 26;
			break;
		
		case 2:
			uParam1->f_66 = joaat("prototipo");
			StringCopy(&(uParam1->f_1), "M4K3B4NK", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 147;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[23] = 35;
			break;
		
		case 23:
			uParam1->f_66 = joaat("reaper");
			StringCopy(&(uParam1->f_1), "D34TH4U", 16);
			uParam1->f_5 = 118;
			uParam1->f_6 = 28;
			uParam1->f_7 = 3;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 92:
			uParam1->f_66 = joaat("sabregt2");
			StringCopy(&(uParam1->f_1), "0R1G1N4L", 16);
			*uParam1 = 1;
			uParam1->f_5 = 88;
			uParam1->f_6 = 33;
			uParam1->f_7 = 105;
			uParam1->f_8 = 33;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 24);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 5;
			uParam1->f_59[0] = 1;
			break;
		
		case 65:
			uParam1->f_66 = joaat("seven70");
			StringCopy(&(uParam1->f_1), "4LL0Y5", 16);
			*uParam1 = 4;
			uParam1->f_5 = 51;
			uParam1->f_6 = 3;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 29;
			break;
		
		case 14:
			uParam1->f_66 = joaat("sheava");
			StringCopy(&(uParam1->f_1), "M0N4RCH", 16);
			*uParam1 = 3;
			uParam1->f_5 = 64;
			uParam1->f_6 = 147;
			uParam1->f_7 = 68;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 43;
			break;
		
		case 53:
			uParam1->f_66 = joaat("sultanrs");
			StringCopy(&(uParam1->f_1), "F1D3L1TY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 147;
			uParam1->f_6 = 147;
			uParam1->f_7 = 4;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 9;
			uParam1->f_9[1] = 11;
			uParam1->f_9[2] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 5;
			uParam1->f_9[10] = 4;
			uParam1->f_9[23] = 7;
			break;
		
		case 11:
			uParam1->f_66 = joaat("t20");
			StringCopy(&(uParam1->f_1), "T0PSP33D", 16);
			*uParam1 = 2;
			uParam1->f_5 = 88;
			uParam1->f_6 = 33;
			uParam1->f_7 = 33;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 30;
			break;
		
		case 35:
			uParam1->f_66 = joaat("tampa");
			StringCopy(&(uParam1->f_1), "CRU151N", 16);
			*uParam1 = 1;
			uParam1->f_5 = 28;
			uParam1->f_6 = 106;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 16;
			break;
		
		case 47:
			uParam1->f_66 = joaat("tropos");
			StringCopy(&(uParam1->f_1), "31GHT135", 16);
			uParam1->f_5 = 51;
			uParam1->f_6 = 107;
			uParam1->f_7 = 104;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 86:
			uParam1->f_66 = joaat("turismor");
			StringCopy(&(uParam1->f_1), "M1LKYW4Y", 16);
			*uParam1 = 3;
			uParam1->f_5 = 146;
			uParam1->f_6 = 142;
			uParam1->f_7 = 73;
			uParam1->f_8 = 156;
			uParam1->f_69 = 7;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 22;
			break;
		
		case 5:
			uParam1->f_66 = joaat("tyrus");
			StringCopy(&(uParam1->f_1), "B35TL4P", 16);
			*uParam1 = 1;
			uParam1->f_5 = 12;
			uParam1->f_6 = 3;
			uParam1->f_8 = 38;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 13;
			break;
		
		case 68:
			uParam1->f_66 = joaat("verlierer2");
			StringCopy(&(uParam1->f_1), "0UTFR0NT", 16);
			*uParam1 = 4;
			uParam1->f_5 = 36;
			uParam1->f_7 = 32;
			uParam1->f_8 = 156;
			uParam1->f_69 = 7;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 4;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 5;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[23] = 34;
			break;
		
		case 56:
			uParam1->f_66 = joaat("zentorno");
			StringCopy(&(uParam1->f_1), "0LDN3W5", 16);
			uParam1->f_5 = 34;
			uParam1->f_6 = 28;
			uParam1->f_8 = 45;
			uParam1->f_69 = 7;
			uParam1->f_9[0] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 20;
			break;
		
		case 44:
			uParam1->f_66 = joaat("ztype");
			StringCopy(&(uParam1->f_1), "K1NGP1N", 16);
			*uParam1 = 4;
			uParam1->f_5 = 67;
			uParam1->f_6 = 5;
			uParam1->f_7 = 67;
			uParam1->f_8 = 156;
			uParam1->f_69 = 1;
			uParam1->f_9[23] = 28;
			break;
	}
	if (uParam1->f_66 == 0)
	{
		func_299(iParam0, uParam1);
	}
}

void func_299(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 30:
			uParam1->f_66 = joaat("alpha");
			StringCopy(&(uParam1->f_1), "R31GN", 16);
			*uParam1 = 4;
			uParam1->f_5 = 71;
			uParam1->f_6 = 71;
			uParam1->f_7 = 28;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 24);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 29;
			uParam1->f_59[0] = 1;
			break;
		
		case 84:
			uParam1->f_66 = joaat("banshee2");
			StringCopy(&(uParam1->f_1), "H0WL3R", 16);
			*uParam1 = 4;
			uParam1->f_5 = 138;
			uParam1->f_6 = 138;
			uParam1->f_7 = 89;
			uParam1->f_8 = 138;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			uParam1->f_9[0] = 6;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 5;
			uParam1->f_9[6] = 4;
			uParam1->f_9[7] = 6;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 19;
			uParam1->f_59[0] = 1;
			break;
		
		case 9:
			uParam1->f_66 = joaat("bestiagts");
			StringCopy(&(uParam1->f_1), "5M00TH", 16);
			*uParam1 = 2;
			uParam1->f_5 = 65;
			uParam1->f_6 = 57;
			uParam1->f_7 = 53;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 33;
			uParam1->f_59[0] = 1;
			break;
		
		case 39:
			uParam1->f_66 = joaat("btype3");
			StringCopy(&(uParam1->f_1), "V4L0R", 16);
			uParam1->f_5 = 12;
			uParam1->f_6 = 28;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 2;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 10;
			uParam1->f_9[43] = 1;
			uParam1->f_9[44] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 78:
			uParam1->f_66 = joaat("cheetah");
			StringCopy(&(uParam1->f_1), "B1GC4T", 16);
			*uParam1 = 3;
			uParam1->f_5 = 70;
			uParam1->f_6 = 136;
			uParam1->f_7 = 136;
			uParam1->f_8 = 136;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 3;
			uParam1->f_59[0] = 1;
			break;
		
		case 75:
			uParam1->f_66 = joaat("coquette2");
			StringCopy(&(uParam1->f_1), "CL45SY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 92;
			uParam1->f_6 = 38;
			uParam1->f_7 = 38;
			uParam1->f_8 = 41;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 12;
			uParam1->f_59[0] = 1;
			break;
		
		case 63:
			uParam1->f_66 = joaat("coquette3");
			StringCopy(&(uParam1->f_1), "BLKF1N", 16);
			*uParam1 = 4;
			uParam1->f_5 = 35;
			uParam1->f_6 = 107;
			uParam1->f_7 = 25;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 51:
			uParam1->f_66 = joaat("entityxf");
			StringCopy(&(uParam1->f_1), "W1DEB0Y", 16);
			*uParam1 = 2;
			uParam1->f_5 = 41;
			uParam1->f_8 = 122;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 26);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			uParam1->f_59[0] = 1;
			break;
		
		case 72:
			uParam1->f_66 = joaat("feltzer2");
			StringCopy(&(uParam1->f_1), "R4C3R", 16);
			*uParam1 = 1;
			uParam1->f_5 = 70;
			uParam1->f_7 = 70;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[23] = 35;
			uParam1->f_59[0] = 1;
			break;
		
		case 42:
			uParam1->f_66 = joaat("feltzer3");
			StringCopy(&(uParam1->f_1), "R4LLY", 16);
			uParam1->f_5 = 54;
			uParam1->f_6 = 7;
			uParam1->f_7 = 60;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 7;
			break;
		
		case 21:
			uParam1->f_66 = joaat("fmj");
			StringCopy(&(uParam1->f_1), "H0T4U", 16);
			*uParam1 = 1;
			uParam1->f_5 = 71;
			uParam1->f_6 = 135;
			uParam1->f_7 = 135;
			uParam1->f_8 = 135;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 5;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 96:
			uParam1->f_66 = joaat("jester");
			StringCopy(&(uParam1->f_1), "NOF00L", 16);
			uParam1->f_5 = 131;
			uParam1->f_6 = 42;
			uParam1->f_8 = 88;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 33:
			uParam1->f_66 = joaat("mamba");
			StringCopy(&(uParam1->f_1), "V1P", 16);
			*uParam1 = 4;
			uParam1->f_5 = 51;
			uParam1->f_6 = 120;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 1);
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 1;
			uParam1->f_9[23] = 2;
			break;
		
		case 90:
			uParam1->f_66 = joaat("massacro");
			StringCopy(&(uParam1->f_1), "B055", 16);
			*uParam1 = 4;
			uParam1->f_5 = 2;
			uParam1->f_6 = 6;
			uParam1->f_7 = 38;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[23] = 29;
			uParam1->f_59[0] = 1;
			break;
		
		case 81:
			uParam1->f_66 = joaat("nightshade");
			StringCopy(&(uParam1->f_1), "E4TM3", 16);
			*uParam1 = 1;
			uParam1->f_5 = 88;
			uParam1->f_6 = 12;
			uParam1->f_7 = 70;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 4;
			uParam1->f_9[15] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 4;
			uParam1->f_59[0] = 1;
			break;
		
		case 60:
			uParam1->f_66 = joaat("omnis");
			StringCopy(&(uParam1->f_1), "D1RTY", 16);
			uParam1->f_5 = 63;
			uParam1->f_6 = 63;
			uParam1->f_7 = 87;
			uParam1->f_8 = 111;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_65 = 1;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 18:
			uParam1->f_66 = joaat("osiris");
			StringCopy(&(uParam1->f_1), "SL33K", 16);
			*uParam1 = 4;
			uParam1->f_5 = 107;
			uParam1->f_6 = 31;
			uParam1->f_7 = 107;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 6;
			break;
		
		case 27:
			uParam1->f_66 = joaat("pfister811");
			StringCopy(&(uParam1->f_1), "SL1CK", 16);
			*uParam1 = 1;
			uParam1->f_5 = 12;
			uParam1->f_6 = 38;
			uParam1->f_8 = 138;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 127;
			uParam1->f_74 = 255;
			uParam1->f_75 = 62;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 18;
			break;
		
		case 3:
			uParam1->f_66 = joaat("prototipo");
			StringCopy(&(uParam1->f_1), "TURB0", 16);
			uParam1->f_5 = 70;
			uParam1->f_6 = 111;
			uParam1->f_7 = 70;
			uParam1->f_8 = 70;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[23] = 16;
			break;
		
		case 24:
			uParam1->f_66 = joaat("reaper");
			StringCopy(&(uParam1->f_1), "GR1M", 16);
			*uParam1 = 1;
			uParam1->f_5 = 92;
			uParam1->f_6 = 42;
			uParam1->f_7 = 88;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[15] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 33;
			uParam1->f_59[0] = 1;
			break;
		
		case 93:
			uParam1->f_66 = joaat("sabregt2");
			StringCopy(&(uParam1->f_1), "B0UNC3", 16);
			*uParam1 = 4;
			uParam1->f_5 = 12;
			uParam1->f_6 = 12;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 36;
			uParam1->f_9[24] = 1;
			uParam1->f_59[0] = 1;
			break;
		
		case 66:
			uParam1->f_66 = joaat("seven70");
			StringCopy(&(uParam1->f_1), "SP33DY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 145;
			uParam1->f_6 = 3;
			uParam1->f_7 = 88;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 22;
			break;
		
		case 15:
			uParam1->f_66 = joaat("sheava");
			StringCopy(&(uParam1->f_1), "PR3TTY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 137;
			uParam1->f_6 = 71;
			uParam1->f_7 = 71;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 132;
			uParam1->f_63 = 102;
			uParam1->f_64 = 226;
			uParam1->f_74 = 35;
			uParam1->f_75 = 1;
			uParam1->f_76 = 255;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 22;
			uParam1->f_59[0] = 1;
			break;
		
		case 54:
			uParam1->f_66 = joaat("sultanrs");
			StringCopy(&(uParam1->f_1), "5H0W0FF", 16);
			*uParam1 = 2;
			uParam1->f_5 = 83;
			uParam1->f_6 = 83;
			uParam1->f_8 = 41;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 127;
			uParam1->f_74 = 255;
			uParam1->f_75 = 62;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 15;
			uParam1->f_9[1] = 14;
			uParam1->f_9[2] = 8;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 10;
			uParam1->f_9[8] = 6;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 12:
			uParam1->f_66 = joaat("t20");
			StringCopy(&(uParam1->f_1), "D3V1L", 16);
			*uParam1 = 4;
			uParam1->f_5 = 28;
			uParam1->f_6 = 143;
			uParam1->f_7 = 70;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[23] = 24;
			break;
		
		case 36:
			uParam1->f_66 = joaat("tampa");
			StringCopy(&(uParam1->f_1), "MU5CL3", 16);
			uParam1->f_5 = 89;
			uParam1->f_6 = 64;
			uParam1->f_7 = 88;
			uParam1->f_8 = 64;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_63 = 174;
			uParam1->f_64 = 239;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 14;
			uParam1->f_59[0] = 1;
			break;
		
		case 48:
			uParam1->f_66 = joaat("tropos");
			StringCopy(&(uParam1->f_1), "1985", 16);
			*uParam1 = 2;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 3;
			break;
		
		case 87:
			uParam1->f_66 = joaat("turismor");
			StringCopy(&(uParam1->f_1), "TPD4WG", 16);
			uParam1->f_5 = 68;
			uParam1->f_6 = 68;
			uParam1->f_7 = 92;
			uParam1->f_8 = 87;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[4] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 19;
			uParam1->f_59[0] = 1;
			break;
		
		case 6:
			uParam1->f_66 = joaat("tyrus");
			StringCopy(&(uParam1->f_1), "TR3X", 16);
			*uParam1 = 1;
			uParam1->f_5 = 7;
			uParam1->f_6 = 3;
			uParam1->f_7 = 137;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 8;
			uParam1->f_59[0] = 1;
			break;
		
		case 69:
			uParam1->f_66 = joaat("verlierer2");
			StringCopy(&(uParam1->f_1), "CURV35", 16);
			*uParam1 = 1;
			uParam1->f_5 = 107;
			uParam1->f_6 = 120;
			uParam1->f_7 = 35;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 26;
			uParam1->f_59[0] = 1;
			break;
		
		case 57:
			uParam1->f_66 = joaat("zentorno");
			StringCopy(&(uParam1->f_1), "H3R0", 16);
			*uParam1 = 1;
			uParam1->f_5 = 149;
			uParam1->f_6 = 55;
			uParam1->f_8 = 55;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 114;
			uParam1->f_63 = 204;
			uParam1->f_64 = 114;
			uParam1->f_74 = 94;
			uParam1->f_75 = 255;
			uParam1->f_76 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 5;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 1;
			break;
		
		case 45:
			uParam1->f_66 = joaat("ztype");
			StringCopy(&(uParam1->f_1), "CE0", 16);
			*uParam1 = 1;
			uParam1->f_5 = 120;
			uParam1->f_6 = 42;
			uParam1->f_8 = 156;
			uParam1->f_96 = 1;
			uParam1->f_98 = 132;
			uParam1->f_97 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 26;
			uParam1->f_59[0] = 1;
			break;
	}
	if (uParam1->f_66 == 0)
	{
	}
}

void func_300(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -631.9747f, -1779.181f, 22.9802f };
			break;
		
		case 2:
			*uParam1 = { 1007.51f, -1855.032f, 30.0398f };
			break;
		
		case 3:
			*uParam1 = { -72.3389f, -1820.984f, 25.942f };
			break;
		
		case 4:
			*uParam1 = { 36.8712f, -1284.028f, 28.2924f };
			break;
		
		case 5:
			*uParam1 = { 1213.233f, -1251.249f, 35.3258f };
			break;
		
		case 6:
			*uParam1 = { 808.8002f, -2222.5f, 28.6239f };
			break;
		
		case 7:
			*uParam1 = { 1754.546f, -1649.167f, 111.6556f };
			break;
		
		case 8:
			*uParam1 = { 144.3155f, -3005.919f, 6.0309f };
			break;
		
		case 9:
			*uParam1 = { -521.2753f, -2196.688f, 5.394f };
			break;
		
		case 10:
			*uParam1 = { -1161.292f, -2163.7f, 12.3808f };
			break;
	}
}

void func_301()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!iLocal_300)
	{
		iLocal_300 = 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		switch (iVar1)
		{
			case 171:
				unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case 581:
						func_304(iVar0);
						break;
					
					case 582:
						func_303(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
	if (unk_0x3211A722C1E5FFC2("freemode", -1, 0) == unk_0xFB6B3EEFAB2DD12C())
	{
		if (!iLocal_299)
		{
			iVar4 = 0;
			while (iVar4 < 32)
			{
				iVar5 = unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Local_103[iVar4 /*4*/].f_3);
				if (iVar5 > 30000 && Local_103[iLocal_232 /*4*/].f_2 > -1)
				{
					Local_103[iLocal_232 /*4*/].f_2 = -1;
					Local_103[iLocal_232 /*4*/] = func_12();
					func_13(&(Local_234[iLocal_232 /*2*/]));
				}
				iVar4++;
			}
		}
		iVar6 = Global_2415705.f_3232[iLocal_232 /*4*/];
		if (Local_103[iLocal_232 /*4*/].f_2 > -1 || Global_2415705.f_3232[iLocal_232 /*4*/].f_2 > -1)
		{
			if (iVar6 != func_12() && func_60(iVar6, 0, 1))
			{
				if (!func_302(iVar6))
				{
					if (Local_103[iLocal_232 /*4*/].f_2 > -1)
					{
						Local_103[iLocal_232 /*4*/].f_2 = -1;
						Local_103[iLocal_232 /*4*/] = func_12();
						func_13(&(Local_234[iLocal_232 /*2*/]));
					}
					if (Global_2415705.f_3232[iLocal_232 /*4*/].f_2 > -1)
					{
						Global_2415705.f_3232[iLocal_232 /*4*/].f_2 = -1;
						Global_2415705.f_3232[iLocal_232 /*4*/] = func_12();
					}
				}
			}
		}
		if (Local_103[iLocal_232 /*4*/].f_2 != Global_2415705.f_3232[iLocal_232 /*4*/].f_2)
		{
			if (!func_72(&(Local_234[iLocal_232 /*2*/])))
			{
				func_71(&(Local_234[iLocal_232 /*2*/]), 0, 0);
			}
			else if (func_70(&(Local_234[iLocal_232 /*2*/]), 2000, 0))
			{
				Global_2415705.f_3232[iLocal_232 /*4*/] = Local_103[iLocal_232 /*4*/];
				Global_2415705.f_3232[iLocal_232 /*4*/].f_1 = Local_103[iLocal_232 /*4*/].f_1;
				Global_2415705.f_3232[iLocal_232 /*4*/].f_2 = Local_103[iLocal_232 /*4*/].f_2;
				Global_2415705.f_3232[iLocal_232 /*4*/].f_3 = Local_103[iLocal_232 /*4*/].f_3;
				func_13(&(Local_234[iLocal_232 /*2*/]));
			}
		}
		else if (func_72(&(Local_234[iLocal_232 /*2*/])))
		{
			func_13(&(Local_234[iLocal_232 /*2*/]));
		}
		iLocal_232 = (iLocal_232 + 1 % 32);
		if (!iLocal_299)
		{
			iLocal_299 = 1;
		}
	}
	else if (iLocal_299)
	{
		func_11(0);
	}
}

int func_302(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (unk_0x64E5EEDB2FF05CDA("GB_VEHICLE_EXPORT", uVar0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_303(int iParam0)
{
	struct<5> Var0;
	int iVar6;
	
	unk_0x49897615E4CA227C(1, iParam0, &Var0, 6);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		if (Local_103[iVar6 /*4*/].f_2 > -1)
		{
			if ((Local_103[iVar6 /*4*/] == Var0.f_2 && Local_103[iVar6 /*4*/].f_2 == Var0.f_4) && Local_103[iVar6 /*4*/].f_1 == Var0.f_3)
			{
				Local_103[iVar6 /*4*/].f_2 = -1;
				Local_103[iVar6 /*4*/] = func_12();
			}
			else
			{
				iVar6++;
			}
		}

void func_304(int iParam0)
{
	struct<8> Var0;
	
	unk_0x49897615E4CA227C(1, iParam0, &Var0, 10);
	if (Var0.f_2 != func_12())
	{
		Local_103[Var0.f_2 /*4*/] = Var0.f_3;
		Local_103[Var0.f_2 /*4*/].f_1 = Var0.f_4;
		Local_103[Var0.f_2 /*4*/].f_2 = Var0.f_7;
		Local_103[Var0.f_2 /*4*/].f_3 = unk_0x7414B386C0020BEC();
		if ((((func_64(unk_0xFB6B3EEFAB2DD12C()) && func_66(unk_0xFB6B3EEFAB2DD12C()) == 188) && func_307(unk_0xFB6B3EEFAB2DD12C(), Var0.f_2)) && !func_306(Var0.f_6)) && !func_305(Var0.f_6))
		{
			iLocal_233++;
		}
	}
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
			return 1;
		
		default:
	}
	return 0;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 1;
		
		default:
	}
	return 0;
}

int func_307(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_12())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_308()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	var uVar8[10];
	int iVar19;
	int iVar20;
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (func_70(&uLocal_100, 3000, 0))
		{
			iVar0 = iLocal_96;
			Var1 = { func_125(iVar0) };
			Var4 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			if (!func_312(Var1, 0f, 0f, 0f, 1056964608, 0))
			{
				Var1.f_2 = 0f;
				Var4.f_2 = 0f;
				fVar7 = unk_0x2A488C176D52CCA5(Var1, Var4);
				if (fVar7 < 100f && fVar7 < fLocal_99)
				{
					iLocal_98 = iVar0;
					fLocal_99 = fVar7;
				}
			}
			iLocal_96 = (iLocal_96 + 1 % 11);
			if (iLocal_96 == 0)
			{
				iLocal_97 = iLocal_98;
				iLocal_98 = 0;
				fLocal_99 = 9999.9f;
				func_13(&uLocal_100);
				iLocal_102 = 1;
			}
		}
		if (iLocal_97 != 0 && iLocal_102)
		{
			iVar19 = unk_0xC57CE29906C6EA45(unk_0xD5A676B97920D126(), &uVar8);
			iVar20 = 0;
			while (iVar20 < iVar19)
			{
				if (!unk_0xB529B2A4B7C64D6D(uVar8[iVar20], 0) && func_311(uVar8[iVar20]))
				{
					if (unk_0xA438D75809973A56(uVar8[iVar20], "Player_Vehicle") && unk_0x483BD2141ADAC3CE(uVar8[iVar20], "Player_Vehicle") == -1)
					{
						if (func_309(uVar8[iVar20], 0, 0, 0, 0, 0, 1, 0))
						{
							unk_0xBCDF9E3086B4229C(unk_0xC086F8D75730FA3A(uVar8[iVar20], 1), 2f, 1, 0, 0, 1, 0);
						}
					}
				}
				iVar20++;
			}
		}
		if (iLocal_102)
		{
			iLocal_102 = 0;
		}
	}
}

int func_309(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x7D44D16B4A9E941E(uParam0) + 1;
	if (iParam4 || !unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_310(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x7887B64A08364778(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xD5A676B97920D126())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x00B5B0B68211D89B(iVar2))
					{
						if (unk_0xBEC34BF6B72C417A(iVar2))
						{
							if (unk_0xAA5B10AEB58EAA13(unk_0x61263E0F7C8C9996(iVar2)) == 0)
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
				else if (!unk_0x00B5B0B68211D89B(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_310(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x06F2E112EBC0C4FB(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x98BE504E8B389665(uParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7887B64A08364778(iVar0) && !unk_0xB529B2A4B7C64D6D(uParam0, 0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, iParam1);
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x1774A68441553185(iVar0, 451360105) == 1 || unk_0x1774A68441553185(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iParam0, 0), unk_0xC086F8D75730FA3A(iVar0, 0)) < 10f)
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

int func_311(int iParam0)
{
	switch (unk_0xA0A4DA31DEDFAC4F(uParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_312(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_313()
{
	int iVar0;
	int iVar1;
	
	if (!func_256())
	{
		return;
	}
	if (iLocal_95)
	{
		if (Global_2482054.f_36 == 0)
		{
			func_316();
		}
		else
		{
			return;
		}
	}
	if (Global_2482054.f_36 > 0)
	{
		if (iLocal_89 == 0)
		{
			iLocal_89 = Global_2482054.f_36;
			iLocal_95 = 0;
			func_71(&uLocal_91, 0, 0);
		}
	}
	if (iLocal_90 == -1)
	{
		if (iLocal_89 > 0)
		{
			if ((!unk_0xA488C8C46BFD5A39() && !Global_1760739.f_12) && unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (func_70(&uLocal_91, 1000, 0))
				{
					if (func_315(1) >= iLocal_89 && unk_0x0B5AB9C2405C641F(iLocal_89, 0, 1, 0, -1))
					{
						iVar0 = -2122299283;
						if (func_314(&iLocal_90, -1135378931, 537254313, 1474183246, iVar0, iLocal_89, 4, 3))
						{
							func_71(&uLocal_93, 0, 0);
						}
						else
						{
							func_316();
						}
					}
				}
			}
		}
	}
	else if (func_233(iLocal_90))
	{
		iVar1 = func_232(iLocal_90);
		if (iVar1 == 2)
		{
			unk_0x1C58730C5FC29475(func_216(iLocal_90));
			unk_0xC1952F3773BA18FE(iLocal_89, 0, 1);
		}
		else if (iVar1 == 3)
		{
		}
		iLocal_95 = 1;
		func_210(iLocal_90);
	}
	else if (func_70(&uLocal_93, 30000, 0))
	{
		func_210(iLocal_90);
		func_316();
	}
}

int func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_256())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_29()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*iParam0 = func_244(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_2590199[*iParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
	}
	return 0;
}

int func_315(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xF5AB8C1F782D638A();
	}
	iVar0 = (iVar0 + unk_0x3D62B5F6C60AB02A(-1));
	return iVar0;
}

void func_316()
{
	iLocal_95 = 0;
	iLocal_89 = 0;
	iLocal_90 = -1;
	func_13(&uLocal_91);
	func_13(&uLocal_93);
}

void func_317()
{
	int iVar0;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if ((unk_0x7887B64A08364778(iVar0) && !unk_0xB529B2A4B7C64D6D(iVar0, 0)) && unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("voltic2"))
		{
			if (!iVar0 == iLocal_87)
			{
				if (unk_0xFACD5AD331C52454("Player_Vehicle", 3) && unk_0xA438D75809973A56(iVar0, "Player_Vehicle"))
				{
					unk_0xE00F2AB100B76E89(iVar0, Global_262145.f_17138);
					iLocal_87 = iVar0;
				}
			}
			if (!iVar0 == iLocal_88)
			{
				unk_0x8F2AB41856F1B8D5(iVar0, 1);
				iLocal_88 = iVar0;
			}
		}
	}
	else
	{
		if (!iLocal_87 == -1)
		{
			iLocal_87 = -1;
		}
		if (!iLocal_88 == -1)
		{
			iLocal_88 = -1;
		}
	}
}

void func_318()
{
	if (Global_2443860.f_3239.f_1)
	{
		Global_2443860.f_3239.f_1 = 0;
	}
}

void func_319()
{
	if (func_114(unk_0xFB6B3EEFAB2DD12C()) && func_325(func_327(unk_0xFB6B3EEFAB2DD12C())) == unk_0xFB6B3EEFAB2DD12C())
	{
		if (!iLocal_66)
		{
			if (iLocal_67 == -1)
			{
				func_324();
			}
			else
			{
				func_321();
			}
		}
		else
		{
			func_320();
		}
	}
	else if (iLocal_66)
	{
		iLocal_66 = 0;
	}
	iLocal_67++;
	if (iLocal_67 >= 16)
	{
		iLocal_67 = -1;
	}
}

void func_320()
{
	if (unk_0x4A478FA962FF575A(uLocal_68) && unk_0x4A478FA962FF575A(uLocal_69))
	{
		unk_0xC53606C390BE2727(iLocal_68, 1, 1);
		unk_0xC53606C390BE2727(iLocal_69, 1, 1);
		unk_0xAA8D7DFFDAAB903E(&iLocal_68);
		unk_0xAA8D7DFFDAAB903E(&iLocal_69);
		iLocal_67 = -1;
		iLocal_66 = 0;
	}
	else
	{
		unk_0xF78A199036560454(iLocal_68);
		unk_0xF78A199036560454(iLocal_69);
	}
}

void func_321()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x7887B64A08364778(iLocal_70[iLocal_67]) && func_323(unk_0xA0A4DA31DEDFAC4F(iLocal_70[iLocal_67])))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if ((unk_0x7887B64A08364778(iLocal_70[iLocal_67]) && unk_0x7887B64A08364778(iLocal_70[iVar0])) && iLocal_67 != iVar0)
			{
				if (unk_0xA4DB44DF73EF4FE5(iLocal_70[iLocal_67], 0) && unk_0xA4DB44DF73EF4FE5(iLocal_70[iVar0], 0))
				{
					if (unk_0xA0A4DA31DEDFAC4F(iLocal_70[iLocal_67]) == unk_0xA0A4DA31DEDFAC4F(iLocal_70[iVar0]) && func_322(iLocal_70[iLocal_67], iLocal_70[iVar0]))
					{
						iLocal_68 = iLocal_70[iLocal_67];
						iLocal_69 = iLocal_70[iVar0];
						iLocal_66 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_322(int iParam0, int iParam1)
{
	if (unk_0xFACD5AD331C52454("Player_Vehicle", 3))
	{
		if (unk_0xA438D75809973A56(uParam0, "Player_Vehicle") && unk_0xA438D75809973A56(uParam1, "Player_Vehicle"))
		{
			if (unk_0x483BD2141ADAC3CE(iParam0, "Player_Vehicle") == unk_0x483BD2141ADAC3CE(iParam1, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("blazer5"):
			return 1;
		
		default:
	}
	return 0;
}

void func_324()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iLocal_70[iVar0] = 0;
		iVar0++;
	}
	unk_0xC57CE29906C6EA45(unk_0xD5A676B97920D126(), &iLocal_70);
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (func_63(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		iVar0 = func_65(unk_0xFB6B3EEFAB2DD12C());
		if (func_60(iVar0, 0, 1))
		{
			if (func_326(iVar0, iParam0))
			{
				return iVar0;
			}
		}
	}
	else if (func_326(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return unk_0xFB6B3EEFAB2DD12C();
	}
	return func_12();
}

bool func_326(int iParam0, int iParam1)
{
	return func_126(iParam0) == iParam1;
}

int func_327(int iParam0)
{
	if (func_114(iParam0))
	{
		return func_328(Global_2421621[iParam0 /*358*/].f_312.f_1);
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return 1;
		
		case 58:
			return 2;
		
		case 59:
			return 3;
		
		case 60:
			return 4;
		
		case 61:
			return 5;
		
		case 62:
			return 6;
		
		case 63:
			return 7;
		
		case 64:
			return 8;
		
		case 65:
			return 9;
		
		case 66:
			return 10;
		
		default:
	}
	return 0;
}

void func_329()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!iLocal_64)
	{
		if (iLocal_65 == 0)
		{
			if (!func_256())
			{
				iVar0 = 0;
				iVar2 = (iVar0 + func_53(11));
				func_340(iVar2, &iVar1, 0);
				if ((((iVar1 >= 0 && Global_1320588[iVar1 /*140*/].f_66 != 0) && func_332(Global_1320588[iVar1 /*140*/].f_66, 1)) && Global_1320588[iVar1 /*140*/].f_66 == joaat("technical2")) && unk_0xF44A5E894FE76438(Global_1320588[iVar1 /*140*/].f_101, 10))
				{
					Global_1320588[iVar1 /*140*/].f_5 = 0;
					Global_1320588[iVar1 /*140*/].f_6 = 0;
					iVar3 = func_331(1452, iVar1);
					func_330(iVar3, Global_1320588[iVar1 /*140*/].f_5, -1, 1);
					iVar3 = func_331(1453, iVar1);
					func_330(iVar3, Global_1320588[iVar1 /*140*/].f_6, -1, 1);
					iLocal_64 = 1;
				}
			}
			else
			{
				iLocal_64 = 1;
			}
		}
		iLocal_65++;
		if (iLocal_65 >= 60)
		{
			iLocal_65 = 0;
		}
	}
}

var func_330(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x2EB99465C4E8F1E1(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_45(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_45(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_45(7)) * (1456 - 1411)));
	}
	return iVar0;
}

int func_332(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5B8C6C17DBDB0252(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("buffalo3") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("gauntlet2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_339())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8858A4ECC3790CBC())
		{
			if (unk_0xAC7E4897AB3A644C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x68410A55F20AE7A5(Var1.f_0))
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
		if ((((!func_338() && !func_337()) && !func_336()) && !func_335()) && !func_339())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF1A016B51831B87B() || unk_0x2D337DD29A7ABD30()) || unk_0x603D621ED5E06CB0())
		{
		}
		else if (!func_336())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_334(iParam0))
		{
			return 0;
		}
	}
	if (!func_333(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_333(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_256())
	{
		return 1;
	}
	unk_0x157A3D4FE52A3BBF(&iVar0, &uVar1);
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
	if (!unk_0x0E4E21380596D57E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482045)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x632066A9E8CB2C4D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5431 && !Global_262145.f_11409) && iVar1 < Global_262145.f_11410)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12221 && iVar1 < Global_262145.f_12233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12217 && iVar1 < Global_262145.f_12229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12218 && iVar1 < Global_262145.f_12230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12219 && iVar1 < Global_262145.f_12231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12220 && iVar1 < Global_262145.f_12232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12222 && iVar1 < Global_262145.f_12234)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12223 && iVar1 < Global_262145.f_12226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12224 && iVar1 < Global_262145.f_12227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12225 && iVar1 < Global_262145.f_12228)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14848 && iVar1 < Global_262145.f_14813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14843 && iVar1 < Global_262145.f_14808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14847 && iVar1 < Global_262145.f_14812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14846 && iVar1 < Global_262145.f_14811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14840 && iVar1 < Global_262145.f_14805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14841 && iVar1 < Global_262145.f_14806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14844 && iVar1 < Global_262145.f_14809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14845 && iVar1 < Global_262145.f_14810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14842 && iVar1 < Global_262145.f_14807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14850 && iVar1 < Global_262145.f_14815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14851 && iVar1 < Global_262145.f_14816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14839 && iVar1 < Global_262145.f_14804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14838 && iVar1 < Global_262145.f_14803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14837 && iVar1 < Global_262145.f_14802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14849 && iVar1 < Global_262145.f_14814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14852 && iVar1 < Global_262145.f_14817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14853 && iVar1 < Global_262145.f_14818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14854 && iVar1 < Global_262145.f_14819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14855 && iVar1 < Global_262145.f_14820)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15000 && iVar1 < Global_262145.f_15022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15001 && iVar1 < Global_262145.f_15023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15002 && iVar1 < Global_262145.f_15024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15003 && iVar1 < Global_262145.f_15025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15004 && iVar1 < Global_262145.f_15026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15005 && iVar1 < Global_262145.f_15027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15007 && iVar1 < Global_262145.f_15028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15008 && iVar1 < Global_262145.f_15029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15009 && iVar1 < Global_262145.f_15030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15010 && iVar1 < Global_262145.f_15031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15011 && iVar1 < Global_262145.f_15032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15012 && iVar1 < Global_262145.f_15033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15013 && iVar1 < Global_262145.f_15034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15019 && iVar1 < Global_262145.f_15041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15016 && iVar1 < Global_262145.f_15037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15017 && iVar1 < Global_262145.f_15038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15018 && iVar1 < Global_262145.f_15039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15006 && iVar1 < Global_262145.f_15040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15020 && iVar1 < Global_262145.f_15042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15014 && iVar1 < Global_262145.f_15035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15015 && iVar1 < Global_262145.f_15036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15021 && iVar1 < Global_262145.f_15043)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16649 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16650 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16651 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16652 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16653 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16654 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16655 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16656 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16657 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16658 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16659 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16660 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16661 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16662 && iVar1 < Global_262145.f_16703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16663 && iVar1 < Global_262145.f_16704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16664 && iVar1 < Global_262145.f_16705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16665 && iVar1 < Global_262145.f_16706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16666 && iVar1 < Global_262145.f_16707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16667 && iVar1 < Global_262145.f_16708)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16668 && iVar1 < Global_262145.f_16709)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16669 && iVar1 < Global_262145.f_16710)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16670 && iVar1 < Global_262145.f_16711)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16671 && iVar1 < Global_262145.f_16712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16672 && iVar1 < Global_262145.f_16713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16673 && iVar1 < Global_262145.f_16714)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_335()
{
	return 0;
}

int func_336()
{
	return 1;
}

int func_337()
{
	return 1;
}

int func_338()
{
	if (unk_0xF14C5BAFFF8F4CB7(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_339()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					iVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&iVar0, 0);
					unk_0xC0F82A66B119B68A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_340(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_8675)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1756335[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

void func_341()
{
	if (func_342(Global_1632166.f_86360) && unk_0x8676DE83D4396C39())
	{
		if (!iLocal_59)
		{
			uLocal_60 = Global_262145.f_7486;
			uLocal_61 = Global_262145.f_7487;
			uLocal_62 = Global_262145.f_7488;
			uLocal_63 = Global_262145.f_7430;
		}
		Global_262145.f_7486 = 1f;
		Global_262145.f_7487 = 1f;
		Global_262145.f_7488 = 1f;
		Global_262145.f_7430 = 100000000;
		iLocal_59 = 1;
	}
	else if (iLocal_59)
	{
		Global_262145.f_7486 = uLocal_60;
		Global_262145.f_7487 = uLocal_61;
		Global_262145.f_7488 = uLocal_62;
		Global_262145.f_7430 = uLocal_63;
		iLocal_59 = 0;
	}
}

bool func_342(int iParam0)
{
	return Global_262145.f_5054[3] == iParam0;
}

void func_343()
{
	if (func_342(Global_1632166.f_86360))
	{
		if (func_344())
		{
			if (!Global_2443860.f_3759 && !Global_2443860.f_3760)
			{
				Global_2443860.f_6041 = 0;
				Global_2443860.f_6042 = 0;
				Global_2443860.f_6043 = 0;
				Global_2443860.f_6044 = 0;
				Global_2443860.f_6045 = 0;
				Global_2443860.f_6046 = 0;
			}
		}
	}
}

bool func_344()
{
	return Global_1738472.f_3;
}

void func_345()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_58)
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar1 = iVar2;
			if (func_60(iVar1, 0, 1))
			{
				if (func_64(iVar1) && !func_27(iVar1, 0))
				{
					iVar0++;
				}
			}
			iVar2++;
		}
		if (iVar0 > func_349())
		{
			if (func_346())
			{
				unk_0xB8A73E7DA87B2968(&(Global_2494149.f_1643), 25);
				Global_262145.f_10901 = 1;
				iLocal_58 = 1;
			}
		}
	}
	else if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && !func_64(unk_0xFB6B3EEFAB2DD12C()))
	{
		Global_262145.f_10901 = 0;
		iLocal_58 = 0;
		unk_0xA66D8B0C391B7E6A();
	}
}

int func_346()
{
	if ((func_64(unk_0xFB6B3EEFAB2DD12C()) && !func_348(unk_0xFB6B3EEFAB2DD12C())) && func_347())
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_262145.f_10865)
	{
		if (Global_1630570.f_11.f_132[iVar0] == -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_262145.f_10865)
	{
		if (Global_1630570.f_11.f_132[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_349()
{
	return Global_262145.f_10865;
}

void func_350()
{
	if (Global_1589801 != func_12())
	{
		if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
		{
			if (func_49(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, 0, 0) && unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 24))
			{
				if ((!unk_0xF44A5E894FE76438(Global_2421621[Global_1589801 /*358*/].f_198, 24) && !func_49(Global_1589933[Global_1589801 /*601*/].f_257.f_15, 0, 0)) && !func_48(Global_1589933[Global_1589801 /*601*/].f_257.f_15))
				{
					if (Global_3934104)
					{
						Global_3934104 = 0;
						unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198), 24);
					}
				}
			}
		}
	}
}

void func_351()
{
	if (Global_1589801 != func_12() && unk_0xFB6B3EEFAB2DD12C() != func_12())
	{
		if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
		{
			if (!unk_0xF44A5E894FE76438(Global_2421621[Global_1589801 /*358*/].f_198, 11) && func_49(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, 0, 0))
			{
				if ((!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0x7E3640C27B17457C()) && !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (((!unk_0xF44A5E894FE76438(Global_1589933[Global_1589801 /*601*/].f_600, 2) && !unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_600, 2)) && !unk_0xF44A5E894FE76438(Global_1589933[Global_1589801 /*601*/].f_257.f_210, 3)) && !func_352(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 24))
						{
							if ((!unk_0xC9C30ADF21E89D79() && !unk_0x5F40DE47EB21A061()) && !Global_3934104)
							{
								if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 5))
								{
									unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
									unk_0xFF11D473E95357D3(500);
									unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 5);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_352(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 14))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11))
	{
		return 1;
	}
	return 0;
}

void func_353()
{
	if (unk_0xFB6B3EEFAB2DD12C() != func_12())
	{
		if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_198, 23))
			{
				if (!func_114(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_312, 3))
					{
						if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199, 7))
						{
							unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_199), 7);
						}
					}
				}
			}
		}
	}
}

void func_354()
{
	if (Global_1589801 != func_12())
	{
		if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
		{
			if (((unk_0x8AFBC859AA63D3D7() && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && !unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2)) && unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
			{
				Global_93579 = -1;
			}
		}
	}
}

void func_355()
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	if ((!func_361() && !func_360()) && func_94(unk_0xFB6B3EEFAB2DD12C()) != func_12())
	{
		iVar3 = unk_0xD5A676B97920D126();
		if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
		{
			uVar2 = unk_0x19912132A3CBAD3C(iVar3);
			if ((unk_0x7887B64A08364778(uVar2) && !unk_0xB529B2A4B7C64D6D(iVar2, 0)) && unk_0x98BE504E8B389665(iVar2, -1, 0) == iVar3)
			{
				if (unk_0xFACD5AD331C52454("ContrabandDeliveryType", 3))
				{
					if (unk_0xA438D75809973A56(iVar2, "ContrabandDeliveryType"))
					{
						bVar0 = unk_0x483BD2141ADAC3CE(iVar2, "ContrabandDeliveryType") == 2;
					}
				}
				if (func_91(iVar2))
				{
					uVar4 = unk_0x1643A42FC7E0988A(iVar2);
					if (unk_0x7887B64A08364778(uVar4))
					{
						iVar5 = unk_0xA0A4DA31DEDFAC4F(iVar4);
						if (func_90(iVar5))
						{
							if (unk_0xFACD5AD331C52454("ContrabandDeliveryType", 3))
							{
								if (unk_0xA438D75809973A56(iVar4, "ContrabandDeliveryType"))
								{
									bVar1 = unk_0x483BD2141ADAC3CE(iVar4, "ContrabandDeliveryType") == 2;
									iVar2 = unk_0x9A1EB82BF4C4844D(iVar4);
								}
							}
						}
					}
				}
			}
		}
		if (bVar1)
		{
			if (func_70(&(Global_2494149.f_4710.f_558), 178000, 0))
			{
				if ((unk_0x7887B64A08364778(iVar2) && !unk_0xB529B2A4B7C64D6D(iVar2, 0)) && unk_0x4A478FA962FF575A(iVar2))
				{
					func_359(iVar2);
					if (unk_0xFACD5AD331C52454("ExportVehicle", 3))
					{
						if (unk_0xA438D75809973A56(iVar2, "ExportVehicle"))
						{
							unk_0x94F46B24D7C3E21D(iVar2, "ExportVehicle");
						}
					}
					unk_0x0A924F4E6E826379(iVar2, 0);
					unk_0x26F5F15AFEF0CC8A(iVar2, -1000f);
				}
				func_358(6);
				func_13(&(Global_2494149.f_4710.f_558));
				iLocal_56 = 0;
				func_357();
			}
			else
			{
				func_356(6);
			}
		}
		else if (!bVar0)
		{
			func_358(6);
			func_13(&(Global_2494149.f_4710.f_558));
			iLocal_56 = 0;
			func_357();
		}
		else
		{
			func_356(6);
		}
		if (bVar1 || bVar0)
		{
			uLocal_57 = iVar2;
			if (!unk_0x2A29BF08180E7ADF(iVar2))
			{
				unk_0xC53606C390BE2727(iVar2, 1, 0);
			}
			iVar6 = func_94(unk_0xFB6B3EEFAB2DD12C());
			if (iVar6 != func_12())
			{
				if (!iLocal_56)
				{
					Global_1618089[iVar6 /*390*/].f_11.f_32 = -1;
					iLocal_56 = 1;
				}
				if (iLocal_55 == -1)
				{
					iLocal_55 = Global_262145.f_17168;
					Global_262145.f_17168 = 1;
				}
			}
		}
	}
	else
	{
		iLocal_56 = 0;
		func_358(6);
		func_357();
	}
	if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5, 6))
	{
		if (unk_0x7887B64A08364778(uLocal_57))
		{
			if (unk_0x2A29BF08180E7ADF(iLocal_57))
			{
				uVar7 = iLocal_57;
				unk_0x9E5138EA66A3E119(&uVar7);
				iLocal_57 = uVar8;
			}
		}
	}
}

void func_356(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

void func_357()
{
	if (iLocal_55 != -1)
	{
		Global_262145.f_17168 = iLocal_55;
		iLocal_55 = -1;
	}
}

void func_358(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

void func_359(int iParam0)
{
	if (unk_0xFACD5AD331C52454("ContrabandOwner", 3))
	{
		if (unk_0xA438D75809973A56(uParam0, "ContrabandOwner"))
		{
			unk_0x94F46B24D7C3E21D(iParam0, "ContrabandOwner");
		}
	}
	if (unk_0xFACD5AD331C52454("ContrabandDeliveryType", 3))
	{
		if (unk_0xA438D75809973A56(iParam0, "ContrabandDeliveryType"))
		{
			unk_0x94F46B24D7C3E21D(iParam0, "ContrabandDeliveryType");
		}
	}
}

int func_360()
{
	int iVar0;
	
	iVar0 = func_94(unk_0xFB6B3EEFAB2DD12C());
	if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	return 0;
}

int func_361()
{
	int iVar0;
	
	iVar0 = func_94(unk_0xFB6B3EEFAB2DD12C());
	if (iVar0 != func_12() && unk_0x1E0256D6F1052B31(iVar0))
	{
		if (func_66(iVar0) == 178 || func_66(iVar0) == 188)
		{
			return 1;
		}
	}
	return 0;
}

void func_362()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_54)
	{
		if (Global_1632166 == 0)
		{
			if (func_19())
			{
				if (func_380(134) && unk_0xF44A5E894FE76438(Global_1632166.f_100199, 10))
				{
					if (func_77() == 25)
					{
						iLocal_54 = 1;
						iVar0 = func_363(&Global_2440102, 0, 1, 1, 0, 0, 1, 1);
						if (iVar0 == 0)
						{
							unk_0x4EA098C870B73AB7(&(Global_1632166.f_100199), 10);
							return;
						}
						iVar1 = 0;
						while (iVar1 < 158)
						{
							if (Global_2440102[iVar1] == -1)
							{
								Global_2440102[iVar1] = Global_2440102[iVar2];
								iVar2++;
							}
							iVar1++;
						}
					}
				}
			}
		}
	}
	else if (!func_19())
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_100199), 10);
		iLocal_54 = 0;
	}
}

int func_363(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 158)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 158)
	{
		if (((((Global_1320588[iVar0 /*140*/].f_66 != 0 && func_332(Global_1320588[iVar0 /*140*/].f_66, bParam6)) && unk_0x0E182BB7C5A7ABD8(Global_1320588[iVar0 /*140*/].f_66)) && (!bParam3 || (bParam3 && func_371(iVar0, 0, 0, -1)))) && !func_370(Global_1320588[iVar0 /*140*/].f_66)) && !(iParam7 && func_369(Global_1320588[iVar0 /*140*/].f_66)))
		{
			if (iParam2 || func_364(Global_1320588[iVar0 /*140*/].f_66, iParam1))
			{
				if (bParam4)
				{
					if (iParam5 != 0)
					{
						if (iParam5 == Global_1320588[iVar0 /*140*/].f_66)
						{
							(*uParam0)[iVar3] = iVar0;
							iVar3++;
						}
					}
					else
					{
						(*uParam0)[iVar3] = iVar0;
						iVar3++;
					}
				}
				else
				{
					(*uParam0)[iVar3] = iVar0;
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((Global_1320588[(*uParam0)[iVar0] /*140*/].f_66 != 0 && func_332(Global_1320588[(*uParam0)[iVar0] /*140*/].f_66, bParam6)) && unk_0x0E182BB7C5A7ABD8(Global_1320588[(*uParam0)[iVar0] /*140*/].f_66))
		{
			iVar1 = iVar0 + 1;
			while (iVar1 <= (iVar3 - 1))
			{
				if (Global_1320588[(*uParam0)[iVar1] /*140*/].f_66 != 0)
				{
					iVar2 = unk_0xEBC493F34FD5B6F3(unk_0x51FC142EF1105B0E(Global_1320588[(*uParam0)[iVar1] /*140*/].f_66), unk_0x51FC142EF1105B0E(Global_1320588[(*uParam0)[iVar0] /*140*/].f_66), 0, 5);
					if (iVar2 < 0)
					{
						uVar4 = (*uParam0)[iVar1];
						(*uParam0)[iVar1] = (*uParam0)[iVar0];
						(*uParam0)[iVar0] = uVar4;
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_364(int iParam0, int iParam1)
{
	if (func_366(iParam0, iParam1))
	{
		return 1;
	}
	else if (unk_0x6D12BA0C9BAE80D2(iParam0) == func_365(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
	}
	return 0;
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_368(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_367(iParam1, iVar1) == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("adder");
				
				case 1:
					return joaat("bullet");
				
				case 2:
					return joaat("cheetah");
				
				case 3:
					return joaat("entityxf");
				
				case 4:
					return joaat("infernus");
				
				case 5:
					return joaat("vacca");
				
				case 6:
					return joaat("voltic");
				
				case 7:
					return joaat("banshee2");
				
				case 8:
					return joaat("fmj");
				
				case 9:
					return joaat("osiris");
				
				case 10:
					return joaat("pfister811");
				
				case 11:
					return joaat("prototipo");
				
				case 12:
					return joaat("reaper");
				
				case 13:
					return joaat("sultanrs");
				
				case 14:
					return joaat("t20");
				
				case 15:
					return joaat("turismor");
				
				case 16:
					return joaat("zentorno");
				
				case 17:
					return joaat("le7b");
				
				case 18:
					return joaat("tyrus");
				
				case 19:
					return joaat("sheava");
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("ninef2");
				
				case 1:
					return joaat("banshee");
				
				case 2:
					return joaat("carbonizzare");
				
				case 3:
					return joaat("comet2");
				
				case 4:
					return joaat("coquette");
				
				case 5:
					return joaat("feltzer2");
				
				case 6:
					return joaat("fusilade");
				
				case 7:
					return joaat("rapidgt2");
				
				case 8:
					return joaat("sultan");
				
				case 9:
					return joaat("alpha");
				
				case 10:
					return joaat("bestiagts");
				
				case 11:
					return joaat("blista2");
				
				case 12:
					return joaat("blista3");
				
				case 13:
					return joaat("buffalo");
				
				case 14:
					return joaat("buffalo2");
				
				case 15:
					return joaat("buffalo3");
				
				case 16:
					return joaat("carbonizzare");
				
				case 17:
					return joaat("elegy2");
				
				case 18:
					return joaat("feltzer3");
				
				case 19:
					return joaat("furoregt");
				
				case 20:
					return joaat("futo");
				
				case 21:
					return joaat("jester");
				
				case 22:
					return joaat("jester2");
				
				case 23:
					return joaat("khamelion");
				
				case 24:
					return joaat("kuruma");
				
				case 25:
					return joaat("kuruma2");
				
				case 26:
					return joaat("massacro");
				
				case 27:
					return joaat("massacro2");
				
				case 28:
					return joaat("ninef");
				
				case 29:
					return joaat("penumbra");
				
				case 30:
					return joaat("rapidgt");
				
				case 31:
					return joaat("schwarzer");
				
				case 32:
					return joaat("seven70");
				
				case 33:
					return joaat("surano");
				
				case 34:
					return joaat("verlierer2");
				
				case 35:
					return joaat("tropos");
				
				case 36:
					return joaat("tampa2");
				
				case 37:
					return joaat("omnis");
				
				case 38:
					return joaat("lynx");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("cogcabrio");
				
				case 1:
					return joaat("exemplar");
				
				case 2:
					return joaat("f620");
				
				case 3:
					return joaat("felon");
				
				case 4:
					return joaat("felon2");
				
				case 5:
					return joaat("jackal");
				
				case 6:
					return joaat("oracle");
				
				case 7:
					return joaat("oracle2");
				
				case 8:
					return joaat("sentinel");
				
				case 9:
					return joaat("sentinel2");
				
				case 10:
					return joaat("windsor");
				
				case 11:
					return joaat("windsor2");
				
				case 12:
					return joaat("zion");
				
				case 13:
					return joaat("zion2");
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("buccaneer");
				
				case 1:
					return joaat("dominator");
				
				case 2:
					return joaat("gauntlet");
				
				case 3:
					return joaat("phoenix");
				
				case 4:
					return joaat("picador");
				
				case 5:
					return joaat("ruiner");
				
				case 6:
					return joaat("sabregt");
				
				case 7:
					return joaat("vigero");
				
				case 8:
					return joaat("blade");
				
				case 9:
					return joaat("buccaneer2");
				
				case 10:
					return joaat("chino");
				
				case 11:
					return joaat("chino2");
				
				case 12:
					return joaat("coquette3");
				
				case 13:
					return joaat("dominator2");
				
				case 14:
					return joaat("dukes");
				
				case 15:
					return joaat("dukes2");
				
				case 16:
					return joaat("faction");
				
				case 17:
					return joaat("faction2");
				
				case 18:
					return joaat("faction3");
				
				case 19:
					return joaat("gauntlet2");
				
				case 20:
					return joaat("hotknife");
				
				case 21:
					return joaat("lurcher");
				
				case 22:
					return joaat("moonbeam");
				
				case 23:
					return joaat("moonbeam2");
				
				case 24:
					return joaat("nightshade");
				
				case 25:
					return joaat("ratloader");
				
				case 26:
					return joaat("ratloader2");
				
				case 27:
					return joaat("sabregt2");
				
				case 28:
					return joaat("slamvan");
				
				case 29:
					return joaat("slamvan2");
				
				case 30:
					return joaat("slamvan3");
				
				case 31:
					return joaat("stalion");
				
				case 32:
					return joaat("stalion2");
				
				case 33:
					return joaat("tampa");
				
				case 34:
					return joaat("virgo");
				
				case 35:
					return joaat("virgo2");
				
				case 36:
					return joaat("virgo3");
				
				case 37:
					return joaat("voodoo");
				
				case 38:
					return joaat("voodoo2");
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("jb700");
				
				case 1:
					return joaat("monroe");
				
				case 2:
					return joaat("stinger");
				
				case 3:
					return joaat("ztype");
				
				case 4:
					return joaat("btype");
				
				case 5:
					return joaat("btype2");
				
				case 6:
					return joaat("btype3");
				
				case 7:
					return joaat("casco");
				
				case 8:
					return joaat("coquette2");
				
				case 9:
					return joaat("mamba");
				
				case 10:
					return joaat("manana");
				
				case 11:
					return joaat("peyote");
				
				case 12:
					return joaat("pigalle");
				
				case 13:
					return joaat("stinger");
				
				case 14:
					return joaat("stingergt");
				
				case 15:
					return joaat("tornado");
				
				case 16:
					return joaat("tornado2");
				
				case 17:
					return joaat("tornado3");
				
				case 18:
					return joaat("tornado4");
				
				case 19:
					return joaat("tornado5");
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("asea");
				
				case 1:
					return joaat("asterope");
				
				case 2:
					return joaat("fugitive");
				
				case 3:
					return joaat("premier");
				
				case 4:
					return joaat("primo");
				
				case 5:
					return joaat("schafter2");
				
				case 6:
					return joaat("stanier");
				
				case 7:
					return joaat("superd");
				
				case 8:
					return joaat("surge");
				
				case 9:
					return joaat("tailgater");
				
				case 10:
					return joaat("washington");
				
				case 11:
					return joaat("cog55");
				
				case 12:
					return joaat("cognoscenti");
				
				case 13:
					return joaat("cognoscenti2");
				
				case 14:
					return joaat("emperor");
				
				case 15:
					return joaat("emperor2");
				
				case 16:
					return joaat("emperor3");
				
				case 17:
					return joaat("glendale");
				
				case 18:
					return joaat("asea2");
				
				case 19:
					return joaat("cog552");
				
				case 20:
					return joaat("ingot");
				
				case 21:
					return joaat("intruder");
				
				case 22:
					return joaat("limo2");
				
				case 23:
					return joaat("primo2");
				
				case 24:
					return joaat("regina");
				
				case 25:
					return joaat("romero");
				
				case 26:
					return joaat("schafter3");
				
				case 27:
					return joaat("schafter4");
				
				case 28:
					return joaat("schafter5");
				
				case 29:
					return joaat("schafter6");
				
				case 30:
					return joaat("stratum");
				
				case 31:
					return joaat("stretch");
				
				case 32:
					return joaat("warrener");
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("baller");
				
				case 1:
					return joaat("baller2");
				
				case 2:
					return joaat("bjxl");
				
				case 3:
					return joaat("cavalcade");
				
				case 4:
					return joaat("cavalcade2");
				
				case 5:
					return joaat("crusader");
				
				case 6:
					return joaat("dubsta");
				
				case 7:
					return joaat("granger");
				
				case 8:
					return joaat("gresley");
				
				case 9:
					return joaat("landstalker");
				
				case 10:
					return joaat("mesa");
				
				case 11:
					return joaat("pranger");
				
				case 12:
					return joaat("radi");
				
				case 13:
					return joaat("seminole");
				
				case 14:
					return joaat("serrano");
				
				case 15:
					return joaat("baller3");
				
				case 16:
					return joaat("baller4");
				
				case 17:
					return joaat("baller5");
				
				case 18:
					return joaat("baller6");
				
				case 19:
					return joaat("dubsta2");
				
				case 20:
					return joaat("fq2");
				
				case 21:
					return joaat("habanero");
				
				case 22:
					return joaat("huntley");
				
				case 23:
					return joaat("mesa2");
				
				case 24:
					return joaat("patriot");
				
				case 25:
					return joaat("rocoto");
				
				case 26:
					return joaat("xls");
				
				case 27:
					return joaat("xls2");
				
				case 28:
					return joaat("contender");
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("blista");
				
				case 1:
					return joaat("dilettante");
				
				case 2:
					return joaat("issi2");
				
				case 3:
					return joaat("prairie");
				
				case 4:
					return joaat("dilettante2");
				
				case 5:
					return joaat("panto");
				
				case 6:
					return joaat("rhapsody");
				
				case 7:
					return joaat("brioso");
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("bfinjection");
				
				case 1:
					return joaat("baller");
				
				case 2:
					return joaat("blazer");
				
				case 3:
					return joaat("dloader");
				
				case 4:
					return joaat("dune");
				
				case 5:
					return joaat("patriot");
				
				case 6:
					return joaat("sanchez");
				
				case 7:
					return joaat("sandking");
				
				case 8:
					return joaat("paradise");
				
				case 9:
					return joaat("sanchez2");
				
				case 10:
					return joaat("guardian");
				
				case 11:
					return joaat("bifta");
				
				case 12:
					return joaat("blazer2");
				
				case 13:
					return joaat("blazer3");
				
				case 14:
					return joaat("bodhi2");
				
				case 15:
					return joaat("brawler");
				
				case 16:
					return joaat("dubsta3");
				
				case 17:
					return joaat("insurgent2");
				
				case 18:
					return joaat("kalahari");
				
				case 19:
					return joaat("marshall");
				
				case 20:
					return joaat("mesa3");
				
				case 21:
					return joaat("monster");
				
				case 22:
					return joaat("rancherxl");
				
				case 23:
					return joaat("rancherxl2");
				
				case 24:
					return joaat("rebel");
				
				case 25:
					return joaat("rebel2");
				
				case 26:
					return joaat("sandking2");
				
				case 28:
					return joaat("trophytruck");
				
				case 29:
					return joaat("trophytruck2");
				
				case 30:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
				
				case 1:
					return joaat("cutter");
				
				case 2:
					return joaat("dump");
				
				case 3:
					return joaat("handler");
				
				case 4:
					return joaat("mixer");
				
				case 5:
					return joaat("flatbed");
				
				case 6:
					return joaat("guardian");
				
				case 7:
					return joaat("mixer2");
				
				case 8:
					return joaat("rubble");
				
				case 9:
					return joaat("tiptruck");
				
				case 10:
					return joaat("tiptruck2");
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("airtug");
				
				case 1:
					return joaat("caddy");
				
				case 2:
					return joaat("faggio2");
				
				case 3:
					return joaat("tractor2");
				
				case 4:
					return joaat("forklift");
				
				case 5:
					return joaat("mower");
				
				case 6:
					return joaat("ripley");
				
				case 7:
					return joaat("armytanker");
				
				case 8:
					return joaat("sadler");
				
				case 9:
					return joaat("sadler2");
				
				case 10:
					return joaat("scrap");
				
				case 11:
					return joaat("towtruck");
				
				case 12:
					return joaat("towtruck2");
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("boxville");
				
				case 1:
					return joaat("burrito2");
				
				case 2:
					return joaat("camper");
				
				case 3:
					return joaat("speedo2");
				
				case 4:
					return joaat("journey");
				
				case 5:
					return joaat("pony");
				
				case 6:
					return joaat("rumpo");
				
				case 7:
					return joaat("surfer");
				
				case 8:
					return joaat("taco");
				
				case 9:
					return joaat("youga");
				
				case 10:
					return joaat("bison");
				
				case 11:
					return joaat("bison2");
				
				case 12:
					return joaat("bison3");
				
				case 13:
					return joaat("bobcatxl");
				
				case 14:
					return joaat("boxville2");
				
				case 15:
					return joaat("boxville3");
				
				case 16:
					return joaat("boxville4");
				
				case 17:
					return joaat("burrito");
				
				case 18:
					return joaat("burrito3");
				
				case 19:
					return joaat("burrito4");
				
				case 20:
					return joaat("burrito5");
				
				case 21:
					return joaat("gburrito");
				
				case 22:
					return joaat("gburrito2");
				
				case 23:
					return joaat("minivan");
				
				case 24:
					return joaat("minivan2");
				
				case 25:
					return joaat("paradise");
				
				case 26:
					return joaat("pony2");
				
				case 27:
					return joaat("rumpo2");
				
				case 28:
					return joaat("rumpo3");
				
				case 29:
					return joaat("speedo");
				
				case 30:
					return joaat("surfer2");
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("akuma");
				
				case 1:
					return joaat("bagger");
				
				case 2:
					return joaat("bati");
				
				case 3:
					return joaat("bati2");
				
				case 4:
					return joaat("blazer");
				
				case 5:
					return joaat("daemon");
				
				case 6:
					return joaat("double");
				
				case 7:
					return joaat("nemesis");
				
				case 8:
					return joaat("pcj");
				
				case 9:
					return joaat("ruffian");
				
				case 10:
					return joaat("sanchez");
				
				case 11:
					return joaat("sanchez2");
				
				case 12:
					return joaat("vader");
				
				case 13:
					return joaat("carbonrs");
				
				case 14:
					return joaat("enduro");
				
				case 15:
					return joaat("faggio2");
				
				case 16:
					return joaat("hakuchou");
				
				case 17:
					return joaat("hexer");
				
				case 18:
					return joaat("innovation");
				
				case 19:
					return joaat("lectro");
				
				case 20:
					return joaat("sovereign");
				
				case 21:
					return joaat("thrust");
				
				case 22:
					return joaat("vindicator");
				
				case 23:
					return joaat("gargoyle");
				
				case 24:
					return joaat("cliffhanger");
				
				case 25:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("bmx");
				
				case 1:
					return joaat("cruiser");
				
				case 2:
					return joaat("scorcher");
				
				case 3:
					return joaat("tribike");
				
				case 4:
					return joaat("tribike2");
				
				case 5:
					return joaat("tribike3");
				
				default:
			}
			break;
	}
	return 0;
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 20;
		
		case 6:
			return 39;
		
		case 3:
			return 14;
		
		case 4:
			return 39;
		
		case 5:
			return 20;
		
		case 1:
			return 32;
		
		case 2:
			return 29;
		
		case 0:
			return 8;
		
		case 9:
			return 31;
		
		case 10:
			return 11;
		
		case 11:
			return 13;
		
		case 12:
			return 31;
		
		case 8:
			return 26;
		
		case 13:
			return 6;
		
		default:
	}
	return 39;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
			return 1;
		
		default:
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 == joaat("rallytruck"))
	{
		if (unk_0xF44A5E894FE76438(Global_1632166.f_18, 31))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_56(iVar0, iParam3) > 0 && func_379(func_56(iVar0, iParam3)))
		{
			if (iParam2 != 0)
			{
				if (func_372(iParam2, iParam0, iVar0, bParam1, iParam3))
				{
					return 1;
				}
			}
			else if (func_372(Global_1320588[iParam0 /*140*/].f_66, iParam0, iVar0, bParam1, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (func_56(0, iParam3) > 0)
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(iParam2, iParam4);
	if ((iVar0 > 0 && iVar0 <= 115) && func_379(iVar0))
	{
		if (bParam3)
		{
			func_374(iParam1, &iVar1, iParam4);
		}
		else
		{
			func_54(iParam1, &iVar1);
		}
		if (iVar1 >= 0)
		{
			if (((iVar1 - func_53(iParam2)) >= 0 && (iVar1 - func_53(iParam2)) < Global_1049427[iVar0 /*1942*/].f_33) && iVar1 < 158)
			{
				return 1;
			}
			if (func_373(iParam0))
			{
				if (Global_1049427[iVar0 /*1942*/].f_33 == 2 && iVar1 == (10 + func_53(iParam2)))
				{
					return 1;
				}
				if ((Global_1049427[iVar0 /*1942*/].f_33 == 6 && iVar1 >= (10 + func_53(iParam2))) && iVar1 <= (11 + func_53(iParam2)))
				{
					return 1;
				}
				if ((Global_1049427[iVar0 /*1942*/].f_33 == 10 && iVar1 >= (10 + func_53(iParam2))) && iVar1 <= (12 + func_53(iParam2)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

void func_374(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 158)
	{
		if (iParam0 == (func_375(func_378(iVar0), iParam2, -1) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar0 = 0;
	iVar1 = func_377(iParam0, iParam1);
	uVar2 = func_376(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD406E3B002060510(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_376(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_377(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_378(int iParam0)
{
	if (iParam0 <= 38)
	{
		return (4036 + iParam0);
	}
	else if (iParam0 <= 48)
	{
		return ((5905 + iParam0) - 39);
	}
	else if (iParam0 <= 51)
	{
		return ((6025 + iParam0) - 49);
	}
	else if (iParam0 <= 64)
	{
		return ((7199 + iParam0) - 52);
	}
	else if (iParam0 <= 87)
	{
		return ((9207 + iParam0) - 65);
	}
	else if (iParam0 <= 158)
	{
		return ((14734 + iParam0) - 88);
	}
	return (4036 + iParam0);
}

int func_379(int iParam0)
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

bool func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 == 0)
	{
		return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2812, iVar1);
	}
	if (iVar0 == 1)
	{
		return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2813, iVar1);
	}
	if (iVar0 == 2)
	{
		return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2814, iVar1);
	}
	if (iVar0 == 3)
	{
		return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2815, iVar1);
	}
	if (iVar0 == 4)
	{
		return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2816, iVar1);
	}
	return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2817, iVar1);
}

void func_381()
{
	var uVar0;
	int iVar1;
	
	if (func_66(unk_0xFB6B3EEFAB2DD12C()) == 220)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar0 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
			iVar1 = unk_0xA0A4DA31DEDFAC4F(uVar0);
			if (iVar1 == joaat("sanchez") || iVar1 == joaat("sanchez2"))
			{
				if (unk_0x83A8706178DD8EB5(iVar0) == 0)
				{
					unk_0xDC4EF67FD7A77DED(iVar0, 1);
					unk_0x0A924F4E6E826379(iVar0, 0);
				}
			}
		}
	}
}

void func_382()
{
	int iVar0;
	
	if (!iLocal_53)
	{
		if (Global_1574127)
		{
			iVar0 = func_383();
			if (iVar0 >= 0)
			{
				if (!func_323(Global_1320588[iVar0 /*140*/].f_66))
				{
					Global_2494149.f_811 = iVar0;
				}
			}
			iLocal_53 = 1;
		}
	}
	else if (!Global_1574127)
	{
		iLocal_53 = 0;
	}
}

var func_383()
{
	return Global_2097152[func_205() /*10730*/].f_7546.f_2;
}

void func_384()
{
	bool bVar0;
	struct<4> Var1;
	struct<3> Var7;
	
	if (Global_1589804 > 0 && func_387(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_49(Global_1589804, 0, 0) || func_48(Global_1589804))
		{
			if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				bVar0 = true;
				if (!iLocal_51)
				{
					if (func_386(Global_1049427[Global_1589804 /*1942*/].f_35))
					{
						iLocal_51 = 1;
					}
				}
				else
				{
					Var7 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
					func_385(Global_1049427[Global_1589804 /*1942*/].f_35, &Var1);
					if (!func_386(Global_1049427[Global_1589804 /*1942*/].f_35) && Var7.f_2 < Var1.f_2)
					{
						iLocal_52 = 1;
					}
				}
			}
		}
	}
	if (iLocal_52 && iLocal_51)
	{
		if (func_60(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			func_385(Global_1049427[Global_1589804 /*1942*/].f_35, &Var1);
			unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Var1, 1, 0, 0, 1);
			unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), Var1.f_3.f_2);
			iLocal_52 = 0;
			iLocal_51 = 0;
		}
		else
		{
			iLocal_52 = 0;
			iLocal_51 = 0;
		}
	}
	else if (!bVar0)
	{
		if (iLocal_52 || iLocal_51)
		{
			iLocal_52 = 0;
			iLocal_51 = 0;
		}
	}
}

void func_385(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 68:
			*uParam1 = { -1562.461f, -565.6709f, 113.4484f };
			uParam1->f_3 = { 0f, 0f, 36.1886f };
			break;
		
		case 69:
			*uParam1 = { -1367.592f, -470.4546f, 83.4469f };
			uParam1->f_3 = { 0f, 0f, 308.729f };
			break;
		
		case 70:
			*uParam1 = { -131.8477f, -586.5414f, 200.7354f };
			uParam1->f_3 = { 0f, 0f, 201.094f };
			break;
		
		case 71:
			*uParam1 = { -67.977f, -824.6487f, 320.2875f };
			uParam1->f_3 = { 0f, 0f, 135.0742f };
			break;
	}
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 68:
			if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -1557.867f, -560.4887f, 112.4818f, -1586.527f, -581.2738f, 119.6301f, 38f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 69:
			if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -1362.293f, -469.4526f, 83.18591f, -1395.105f, -492.3231f, 93.58056f, 48.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 70:
			if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -127.0782f, -598.483f, 200.7203f, -160.5897f, -588.0415f, 213.7443f, 38f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 71:
			if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -81.84325f, -804.7206f, 320.2058f, -68.51594f, -833.1818f, 329.6121f, 35.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_387(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 14);
}

void func_388()
{
	bool bVar0;
	
	bVar0 = false;
	if ((unk_0xFB6B3EEFAB2DD12C() != func_12() && func_57(unk_0xFB6B3EEFAB2DD12C(), 0, 0)) && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15 != -1)
	{
		if (Global_1760686)
		{
			if (func_47(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, -1) || func_49(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, 0, 0))
			{
				bVar0 = true;
			}
			unk_0x2A29D86854DC4BC0(0, 23, 1);
			if (!Global_1756331)
			{
				Global_1756331 = 1;
				iLocal_50 = 1;
			}
		}
		else if (iLocal_50)
		{
			Global_1756331 = 0;
			iLocal_50 = 0;
		}
	}
	else if (iLocal_50)
	{
		Global_1756331 = 0;
		iLocal_50 = 0;
	}
	if (bVar0)
	{
		if (!iLocal_49)
		{
			func_390(45, 2, 1);
			func_390(45, 8, 1);
			iLocal_49 = 1;
		}
	}
	else if (iLocal_49)
	{
		func_389(45, 2, 1);
		func_389(45, 8, 1);
		iLocal_49 = 0;
	}
}

void func_389(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_9() == 0)
		{
			uVar0 = func_101(func_103(iParam0), -1);
			unk_0x4EA098C870B73AB7(&uVar0, iParam1);
			func_112(func_103(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_9() == 0)
		{
			uVar0 = func_101(func_103(iParam0), -1);
			unk_0xB8A73E7DA87B2968(&uVar0, iParam1);
			func_112(func_103(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

void func_391()
{
	if (unk_0x7887B64A08364778(func_392()) && func_323(unk_0xA0A4DA31DEDFAC4F(func_392())))
	{
		func_86(&(Global_2443860.f_4192.f_140[45 /*2*/]), 1, 0);
		Global_2443860.f_4192.f_233[45] = Global_262145.f_16716;
	}
}

var func_392()
{
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == joaat("freemode"))
	{
		if (unk_0xF6A32456BABBBA74(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_48) && unk_0x1B982A8B37108B3C(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_48))
		{
			return unk_0xE95C934718B1A4FF(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_48);
		}
	}
	return Global_2494149.f_275;
}

void func_393()
{
	if (Global_2494149.f_802 == 1)
	{
		func_86(&(Global_2443860.f_4192.f_140[45 /*2*/]), 1, 0);
		Global_2443860.f_4192.f_233[45] = Global_262145.f_16716;
	}
}

void func_394()
{
	if (Global_262145.f_17530 == 0)
	{
		if (Global_262145.f_16649)
		{
			Global_262145.f_17530 = 1;
		}
	}
}

void func_395(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0x1164369C7A8D1436(sParam3);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

void func_396()
{
	if (!bLocal_1)
	{
		if (unk_0x6AAF285DC78E0304())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x3CEEA45E4779F6BD(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x3CEEA45E4779F6BD(2, 190))
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
					if (unk_0x3CEEA45E4779F6BD(2, 189))
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
					if (unk_0x3CEEA45E4779F6BD(2, 190))
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
					if (unk_0x3CEEA45E4779F6BD(2, 188))
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
	else if (unk_0x6AAF285DC78E0304())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x3CEEA45E4779F6BD(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x3CEEA45E4779F6BD(2, 190))
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
				if (unk_0x3CEEA45E4779F6BD(2, 189))
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
				if (unk_0x3CEEA45E4779F6BD(2, 190))
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
				if (unk_0x3CEEA45E4779F6BD(2, 189))
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

bool func_397()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}


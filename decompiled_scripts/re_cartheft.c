#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
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
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	char* sLocal_85 = NULL;
	char* sLocal_86 = NULL;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	float fLocal_119 = 0f;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	struct<10> Local_122[16];
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	char* sLocal_287 = NULL;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	char* sLocal_290 = NULL;
	char* sLocal_291 = NULL;
	char* sLocal_292 = NULL;
	char* sLocal_293 = NULL;
	char[] cLocal_294[8] = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	int iLocal_316 = 0;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	struct<3> Local_326 = { 0, 0, 0 } ;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1000;
	var uLocal_340 = 1000;
	var uLocal_341 = 0;
	bool bLocal_342 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar3;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_56 = 10f;
	fLocal_57 = 7f;
	iLocal_58 = 1;
	sLocal_84 = "random@car_thief@waving_ig_1";
	fLocal_119 = 1f;
	iLocal_299 = 786603;
	iLocal_300 = 786469;
	sLocal_307 = "car_returned_peyote";
	sLocal_308 = "girl_car_returned";
	sLocal_309 = "player_car_returned";
	Local_52 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_55 = ScriptParam_0.f_17[0];
	if (unk_0xE8A79675302ED812(11))
	{
		func_230();
	}
	func_229();
	if (iLocal_301 == 2)
	{
		if (func_228(34))
		{
			unk_0x95E4B6F3ED223F5A();
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
			{
				Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				if (Var0.f_2 > 23f || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0x95E4B6F3ED223F5A();
				}
			}
		}
	}
	if (func_187(Local_52, 17, iLocal_301, 0, 0))
	{
		func_184(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_183();
		func_182(uLocal_63, &uLocal_66);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x5D99F519B8411DB6(unk_0xB5CEFD608600A09F());
		}
		func_181();
		if (!func_180())
		{
			if (func_179())
			{
				func_230();
			}
			if (unk_0x684B06333594F9EA())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_162())
						{
							unk_0x6E52C7765A0F4382(0);
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x36CEFBE9B745A58D(iLocal_76))
						{
							if (((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(iLocal_75)) && func_161(iLocal_77)) && !func_160(0))
							{
								if (func_159())
								{
									if (func_161(iLocal_80))
									{
										unk_0xE82050D41B744FF3(iLocal_80, 0);
									}
									func_150(1);
									unk_0xDF53A66AEE1401AA(0.1f);
									func_145(39, 1);
									func_145(40, 1);
									func_145(41, 1);
									func_145(42, 1);
									func_145(43, 1);
									func_145(44, 1);
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_75))
								{
									unk_0x5558ED6D4A2DEC93(iLocal_75, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
									unk_0x22321800954A532E(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_230();
							}
						}
						else
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_75) && func_161(iLocal_77))
							{
								unk_0x204BA7B1C7DD25F4(iLocal_75, iLocal_77, 20f, iLocal_299);
								unk_0x22321800954A532E(iLocal_75, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_113(0);
						}
						break;
				}
			}
			else
			{
				func_230();
			}
		}
		else
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_76))
			{
				if (Local_122[2 /*10*/].f_7)
				{
					func_112(&Local_122, 2);
				}
			}
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			func_104();
			if (func_161(iLocal_77) && !func_103())
			{
				if (func_101())
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!unk_0x36CEFBE9B745A58D(iLocal_76))
								{
									if (unk_0x62F3A07C43FFB568(iLocal_76, iLocal_77, 0))
									{
										if (iLocal_301 == 2)
										{
											unk_0xB71D41C0310C93DE(iLocal_76, 1, 1);
											unk_0xB71D41C0310C93DE(iLocal_77, 1, 1);
											unk_0xC5A6DFE2B8987B17(&uLocal_78);
											unk_0x1A06AE15BF21D407(0, iLocal_77, unk_0xBC25C936A095B5BA(), 8, 30f, iLocal_300, 200f, 10f, 0);
											unk_0x535008C596714F9E(uLocal_78);
											unk_0xA8E6405305C0D7DF(iLocal_76, uLocal_78);
											unk_0x02DAF06EA4F08219(&uLocal_78);
										}
										else
										{
											unk_0xB71D41C0310C93DE(iLocal_76, 1, 1);
											unk_0xC5A6DFE2B8987B17(&uLocal_78);
											unk_0x194CCBD594974E0D(0, iLocal_77, 30, 1000);
											unk_0x1A06AE15BF21D407(0, iLocal_77, unk_0xBC25C936A095B5BA(), 8, 40f, iLocal_300, 200f, 10f, 1);
											unk_0x535008C596714F9E(uLocal_78);
											unk_0xA8E6405305C0D7DF(iLocal_76, uLocal_78);
											unk_0x02DAF06EA4F08219(&uLocal_78);
										}
										Local_317 = { unk_0x3EA3A28A85F8C32F(iLocal_77, unk_0xB5B60A04E1654409(iLocal_77, "wheel_lr")) };
										Local_320 = { unk_0x1483995DFFF0DEEA(iLocal_77, Local_317) };
										unk_0xF3E9344C2BE59F6E("scr_wheel_burnout", iLocal_77, Local_320 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_323 = { unk_0x3EA3A28A85F8C32F(iLocal_77, unk_0xB5B60A04E1654409(iLocal_77, "wheel_rr")) };
										Local_326 = { unk_0x1483995DFFF0DEEA(iLocal_77, Local_323) };
										unk_0xF3E9344C2BE59F6E("scr_wheel_burnout", iLocal_77, Local_326 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0x2DA8CA50A72528FB(uLocal_64))
										{
											uLocal_64 = func_99(iLocal_77, 1, 0);
										}
										unk_0xAF0732277B825027(2);
										iLocal_49 = 1;
									}
									else if (unk_0xD9C1758D86688CEA(iLocal_77, unk_0xBC25C936A095B5BA(), 1))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_76))
										{
											unk_0x5558ED6D4A2DEC93(iLocal_76, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
											unk_0x22321800954A532E(iLocal_76, 1);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_230();
									}
								}
								else
								{
									unk_0x204BA7B1C7DD25F4(iLocal_75, iLocal_77, 20f, iLocal_299);
									unk_0x22321800954A532E(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
									func_113(0);
								}
								break;
							
							case 1:
								if (func_161(iLocal_77))
								{
									if (iLocal_301 == 1)
									{
										if (unk_0x83666F9FB8FEBD4B() < 5000)
										{
											if (unk_0x83666F9FB8FEBD4B() > 2000)
											{
												fLocal_119 = (fLocal_119 + 0.4f);
											}
											else
											{
												fLocal_119 = (fLocal_119 + 0.2f);
											}
											if (fLocal_119 > 30f)
											{
												fLocal_119 = 30f;
											}
											unk_0xA4DFFFD5B234240D(iLocal_77, fLocal_119);
											iVar3 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(iLocal_77, 1), 5f, 0, 4);
											if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
											{
												if (func_161(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
												{
													if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_77))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_161(iVar3))
												{
													if (iVar3 != iLocal_77)
													{
														if (unk_0xE921F8171F0733B3(iVar3, iLocal_77))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0xA6EB9CEADFB819EC(iLocal_77) < 700f)
									{
										func_230();
									}
								}
								func_68();
								if ((((((func_67() || func_66()) || unk_0x8730A01B72F31307(iLocal_77)) || unk_0xBCDD4514E5CAE591(iLocal_77, 1, 5000)) || unk_0x7544D2465B934445(iLocal_77)) || unk_0x36CEFBE9B745A58D(iLocal_76)) || !unk_0x62F3A07C43FFB568(iLocal_76, iLocal_77, 0))
								{
									if (unk_0x144E80F5C46A6B75("RE_CAR_STEAL_SCENE"))
									{
										if (func_161(iLocal_77))
										{
											unk_0x38E412DB4A45B900(iLocal_77, 0);
										}
										unk_0xC1300D0F3A74E20B("RE_CAR_STEAL_SCENE");
									}
									if (unk_0x2DA8CA50A72528FB(uLocal_64))
									{
										unk_0x07B8ECB35A4ED3AC(&uLocal_64);
									}
									func_65();
									if (unk_0x2DA8CA50A72528FB(uLocal_63))
									{
										unk_0x07B8ECB35A4ED3AC(&uLocal_63);
									}
									unk_0x5502708AECB47F5D(iLocal_75);
									unk_0x241D744C1CCBC526(iLocal_77, 50f, 5, 0);
									uLocal_65 = func_99(iLocal_77, 0, 0);
									fLocal_109 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_77, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_77, 1), unk_0x541C2AEF053615BC(iLocal_75, 1));
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_75, 1));
									func_63(&uLocal_330, 0, 0);
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if (func_161(iLocal_77))
								{
									if (unk_0xA6EB9CEADFB819EC(iLocal_77) < 700f)
									{
										func_230();
									}
								}
								if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
								{
									func_230();
								}
								if (!unk_0x1D403DFADBC2DE3C(iLocal_76, 0))
								{
									if (!unk_0x62F3A07C43FFB568(iLocal_76, iLocal_77, 0))
									{
										func_62(iLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_61(&uLocal_67);
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_76))
								{
									if (!unk_0x8F97799512B006B7(iLocal_76, unk_0xBC25C936A095B5BA()))
									{
										unk_0xB8CBD998685C0685(iLocal_76, unk_0xBC25C936A095B5BA(), 0, 16);
										unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_76));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_77, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > (fLocal_109 + 220f) || unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_77, 1), unk_0x541C2AEF053615BC(iLocal_75, 1)) > (fLocal_107 + 220f)) || unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_75, 1)) > (fLocal_108 + 220f))
								{
									if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_77, 0))
									{
										func_113(0);
									}
									else
									{
										func_230();
									}
								}
								if (unk_0x2DA8CA50A72528FB(uLocal_65))
								{
									if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_77, 0))
									{
										unk_0x07B8ECB35A4ED3AC(&uLocal_65);
										uLocal_63 = func_57(iLocal_75, 0, 0);
										func_56(&uLocal_66);
										func_63(&uLocal_330, 0, 0);
										if (!iLocal_60)
										{
											if (iLocal_301 == 1)
											{
												Local_93 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_61)
											{
												Local_93 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												Local_93 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!unk_0x33CC9445B2DF9387(Local_93, 2f) && !unk_0xD1DC4B08247A4317(iLocal_75))
											{
												unk_0x641B19E156645A92(iLocal_75, Local_93, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iLocal_75, fLocal_106);
												iLocal_60 = 1;
											}
										}
										iLocal_50 = 3;
										iLocal_304 = unk_0x105601648511CC64();
									}
									else if (unk_0xE642C1AC73CE364E(iLocal_77, iLocal_75, 20f, 20f, 7f, 0, 1, 0))
									{
										func_55();
										if (func_54())
										{
											if (unk_0x2101FAC9A9D4C29D(iLocal_75, iLocal_77, -1, 0, 0))
											{
												if (!bLocal_296)
												{
													if (func_44(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
													{
													}
												}
												unk_0x204BA7B1C7DD25F4(iLocal_75, iLocal_77, 35f, iLocal_299);
												unk_0x22321800954A532E(iLocal_75, 1);
												func_113(1);
											}
										}
									}
								}
								else if (unk_0x2DA8CA50A72528FB(uLocal_63))
								{
									if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_77, 0))
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_75, fLocal_56, fLocal_56, fLocal_56, 0, 1, 0))
										{
											if (func_43(1, 0, 1))
											{
												unk_0x07B8ECB35A4ED3AC(&uLocal_63);
												if (iLocal_301 == 1)
												{
													if (func_42(unk_0x349C94FFF43E2979(iLocal_77), 336f, 90f))
													{
														sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x522053D86D6E1C7A(sLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_40(unk_0x541C2AEF053615BC(iLocal_75, 1), &fLocal_56, &fLocal_57);
										}
									}
									else
									{
										unk_0x07B8ECB35A4ED3AC(&uLocal_63);
										uLocal_65 = func_99(iLocal_77, 0, 0);
										iLocal_50 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_301 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_75))
										{
											unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
										}
										func_113(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_75))
									{
										unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
									}
									func_113(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_76))
						{
							if (unk_0x62F3A07C43FFB568(iLocal_76, iLocal_77, 0))
							{
								unk_0x1A06AE15BF21D407(iLocal_76, iLocal_77, unk_0xBC25C936A095B5BA(), 8, 50f, iLocal_300, 10f, 10f, 0);
								unk_0x22321800954A532E(iLocal_76, 1);
								unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_76));
							}
							else
							{
								unk_0x5558ED6D4A2DEC93(iLocal_76, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
								unk_0x22321800954A532E(iLocal_76, 1);
								unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_76));
							}
						}
						unk_0x4EDE34FBADD967A6(0);
						func_230();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_161(iLocal_77))
						{
							unk_0xCF6040807CC0E4A5(&iLocal_77);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_76))
						{
							unk_0xF845620A03C7425B(&iLocal_76);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_75))
					{
						if (unk_0x96044E39418AAF17(iLocal_75, sLocal_83, "agitated_idle_a", 3))
						{
							unk_0x448CBB54998E5DCE(iLocal_75, "waiting", sLocal_83, -2f);
						}
						func_1(iLocal_75, "GENERIC_CURSE_HIGH", 24);
						unk_0xC5A6DFE2B8987B17(&uLocal_78);
						unk_0xDF14F570C0180463(0, Local_102, 1f, 20000, 40000f, 1056964608);
						unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x535008C596714F9E(uLocal_78);
						unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
						unk_0x02DAF06EA4F08219(&uLocal_78);
					}
					func_230();
				}
			}
			else
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_76))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_76, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_76, 1);
				}
				if (unk_0x724D816EA203A79E(iLocal_77))
				{
					unk_0xE6E403909F4BF47F(iLocal_77, 50f);
				}
				func_230();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
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

int func_3(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	struct<3> Var0;
	char* sVar3;
	struct<3> Var4;
	float fVar7;
	
	sVar3 = "chassis";
	func_55();
	if (((!unk_0x36CEFBE9B745A58D(iLocal_75) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && func_161(iLocal_77)) && unk_0xF9E082857622D91E(sLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (func_43(1, 0, 1))
					{
						if (!unk_0xFA30DFD0084E92FE(Global_2363, 11))
						{
							if (!unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
							{
								func_32(1, 1, 1, 0, 0);
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									unk_0x7456702622C62EA0(1);
									while (!func_30(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_57, 1, 1056964608, 0, 1, 0))
									{
										unk_0xDE7B9CB38D019BF0();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_57, 0, 1056964608, 0, 1, 0);
								}
								unk_0xDE7B9CB38D019BF0();
								if (!unk_0x36CEFBE9B745A58D(iLocal_75))
								{
									unk_0xF1FC2182A76AD7FC(iLocal_75, 0);
								}
								func_28();
								func_23(0);
								unk_0xDE7B9CB38D019BF0();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
				unk_0x1E6686599BFBEC90(iLocal_77, 0, 0, 0f);
				unk_0x4AAC154DDE9D031F(iLocal_77, 0, 1, 1, 1);
				unk_0xDE7B9CB38D019BF0();
				if (iLocal_301 == 1)
				{
					if (func_161(iLocal_77))
					{
						if (func_42(unk_0x349C94FFF43E2979(iLocal_77), 336f, 90f))
						{
							Local_90 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_105 = 336.6557f;
							Local_87 = { -2252.683f, 4274.16f, 45.0612f };
							Local_93 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_106 = 272.8688f;
							Local_113 = { -2254.588f, 4277.307f, 45.6133f };
							Local_116 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_90 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_105 = 148.0287f;
							Local_93 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_106 = 179.4774f;
							Local_87 = { -2257.088f, 4268.938f, 44.6456f };
							Local_113 = { -2255.775f, 4274.144f, 46.0666f };
							Local_116 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var4 = { -2269.34f, 4279.89f, 45.47f };
					fVar7 = 53.23f;
					fLocal_112 = 50f;
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_87, 1, 0, 0, 1);
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
					unk_0x641B19E156645A92(iLocal_75, Local_93, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iLocal_77, fLocal_105);
					unk_0x641B19E156645A92(iLocal_77, Local_90, 1, 0, 0, 1);
				}
				else
				{
					if (!func_42(unk_0x349C94FFF43E2979(iLocal_77), 64.6764f, 90f))
					{
						Local_113 = { -478.7095f, -2163.598f, 10.3091f };
						Local_116 = { -7.4391f, 0.0006f, 35.6865f };
						Local_90 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_105 = 243.308f;
						fLocal_112 = 22f;
					}
					else
					{
						Local_113 = { -488.0143f, -2149.419f, 9.9817f };
						Local_116 = { -11.7475f, 0.0006f, -145.0045f };
						Local_90 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_105 = 64.6764f;
						fLocal_112 = 36.9289f;
					}
					Var4 = { -486.92f, -2169.01f, 8.89f };
					fVar7 = 63.1f;
					unk_0x641B19E156645A92(iLocal_77, Local_90, 1, 0, 0, 1);
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
					unk_0x019CE76D5286C95C(iLocal_77, fLocal_105);
				}
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
				if (func_161(iLocal_77))
				{
					unk_0xF0A40F19AAB79E88(iLocal_77, 1084227584);
					if (unk_0x724D816EA203A79E(iLocal_76))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_76, iLocal_77, 0))
						{
							unk_0xF845620A03C7425B(&iLocal_76);
						}
					}
				}
				Local_310 = { 0f, 0f, 0f };
				Local_313 = { 0f, 0f, 0f };
				uLocal_302 = unk_0xD0D858E538FD01C3(Local_310, Local_313, 2);
				unk_0x510CBEAEC917268A(uLocal_302, iLocal_77, unk_0xB5B60A04E1654409(iLocal_77, sVar3));
				unk_0x9DA167FE68B804E2(uLocal_302, Local_310, Local_313, 2);
				unk_0xB62398E536F695FC(iLocal_75, uLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), uLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_79 = unk_0x6B8F797EEC7B95E2("DEFAULT_ANIMATED_CAMERA", Local_113, Local_116, fLocal_112, 0, 2);
				unk_0xA4DB448107C6D171(uLocal_79, uLocal_302, "car_returned_cam", sLocal_306);
				unk_0x1F000DD52A4C4208(iLocal_77, sLocal_307, sLocal_306, 1000f, 0, 0, 0, 0, 262144);
				Local_310 = { unk_0x541C2AEF053615BC(iLocal_77, 1) };
				Local_313 = { unk_0xD7490CDEF40F3DA2(iLocal_77, 2) };
				if (func_161(iLocal_80))
				{
					if (func_22(iLocal_80, Local_90, 1) <= 11f)
					{
						unk_0x641B19E156645A92(iLocal_80, Var4, 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(iLocal_80, fVar7);
						unk_0xF0A40F19AAB79E88(iLocal_80, 1084227584);
						unk_0x77815D3407C6700D(iLocal_80, 1, 0);
					}
				}
				unk_0x6C5F5B5F6894CCE3(Local_90, 10f, 1, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_301 == 2)
				{
					unk_0x3B6B082832176FA5(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x3B6B082832176FA5(joaat("peyote"), 15);
				}
				unk_0x7A71B0C6DDC0D7DA(Local_90, 15f);
				unk_0x348665177DBFB93B(uLocal_79, 1);
				unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
				iLocal_51 = 3;
				unk_0xE1F4DF3B8A6E8B8F(1f);
				break;
			
			case 3:
				unk_0xDE7B9CB38D019BF0();
				if (func_19())
				{
					iLocal_51 = 4;
				}
				if (iLocal_301 == 1)
				{
					if (unk_0x83666F9FB8FEBD4B() > 1500 && !bLocal_342)
					{
						if (func_44(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_51 = 4;
						}
					}
				}
				else if (unk_0x77FC50899603581D(uLocal_302) && !bLocal_342)
				{
					if (unk_0x8FD30584EB38411B(uLocal_302) >= 0.2f)
					{
						if (func_44(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
				unk_0xE1F4DF3B8A6E8B8F(1f);
				break;
			
			case 4:
				unk_0xDE7B9CB38D019BF0();
				if (iLocal_301 == 2)
				{
					if (!func_18())
					{
						if (iLocal_62 == 0)
						{
							if (func_44(&Local_122, cLocal_294, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
							}
						}
					}
				}
				unk_0xE1F4DF3B8A6E8B8F(1f);
				if (iLocal_301 == 1)
				{
					if (unk_0x77FC50899603581D(uLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (unk_0x8FD30584EB38411B(uLocal_302) >= 0.83f)
							{
								unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
								unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x8FD30584EB38411B(uLocal_302), 0, 0, 0);
								unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
								iLocal_316 = 1;
							}
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_75))
						{
							if (unk_0x8FD30584EB38411B(uLocal_302) >= 0.83f)
							{
								if (unk_0x96044E39418AAF17(iLocal_75, sLocal_306, sLocal_308, 2))
								{
									unk_0x6C3BE67B02D72CDC(iLocal_75, -1000f, 0);
									if (!unk_0x5237AF95232D78C5(iLocal_75, 0))
									{
										if (func_161(iLocal_77))
										{
											unk_0xBD53A029D0155A42(iLocal_75, iLocal_77, -1);
											unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
										}
									}
									unk_0x2EB4D46478766D87(iLocal_75, 1, 0);
								}
								else
								{
									unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0x77FC50899603581D(uLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (unk_0x8FD30584EB38411B(uLocal_302) >= 0.86f)
						{
							unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
							unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x8FD30584EB38411B(uLocal_302), 0, 0, 0);
							unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_75))
					{
						if (unk_0x8FD30584EB38411B(uLocal_302) > 0.847f)
						{
							if (unk_0x96044E39418AAF17(iLocal_75, sLocal_306, sLocal_308, 2))
							{
								unk_0x6C3BE67B02D72CDC(iLocal_75, -1000f, 0);
								if (!unk_0x5237AF95232D78C5(iLocal_75, 0))
								{
									if (func_161(iLocal_77))
									{
										unk_0xBD53A029D0155A42(iLocal_75, iLocal_77, -1);
										unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
									}
								}
								unk_0x2EB4D46478766D87(iLocal_75, 1, 0);
							}
							else
							{
								unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
							}
						}
					}
				}
				if (((unk_0x77FC50899603581D(uLocal_302) && unk_0x8FD30584EB38411B(uLocal_302) >= 0.99f) || !unk_0x77FC50899603581D(uLocal_302)) || func_19())
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_77, 0) && unk_0x96044E39418AAF17(iLocal_77, sLocal_306, sLocal_307, 3))
					{
						unk_0x68567B14F012CF3E(iLocal_77, sLocal_306, sLocal_307, 1f);
					}
					if (unk_0x77FC50899603581D(uLocal_302))
					{
						unk_0x0BD2283F2F727F2C(uLocal_302, 1f);
					}
					if (bLocal_342)
					{
						Var0 = { unk_0x883FF674F22D1F7C(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0x2084D4C6C2DF616F(Var0, &(Var0.f_2), 0, 0);
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0xBFDD14D0A09BE0FA(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Var0.f_2);
						unk_0x2B9AEC08E469E384(0, 1065353216);
						unk_0xF3F01A78937DC905(0);
					}
					unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x5237AF95232D78C5(iLocal_75, 0))
					{
						if (func_161(iLocal_77))
						{
							unk_0xBD53A029D0155A42(iLocal_75, iLocal_77, -1);
							unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_75))
					{
						if (unk_0x5237AF95232D78C5(iLocal_75, 0))
						{
							if (func_161(iLocal_77))
							{
								unk_0x1E6686599BFBEC90(iLocal_77, 0, 0, 0f);
								unk_0x4AAC154DDE9D031F(iLocal_77, 0, 1, 1, 1);
								iLocal_305 = unk_0x105601648511CC64();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0xDE7B9CB38D019BF0();
				if ((unk_0x105601648511CC64() - iLocal_305) > 100)
				{
					if (func_3(iLocal_75) && func_161(iLocal_77))
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_78);
						unk_0x194CCBD594974E0D(0, iLocal_77, 9, 1000);
						unk_0x204BA7B1C7DD25F4(0, iLocal_77, 25f, iLocal_299);
						unk_0x535008C596714F9E(uLocal_78);
						unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
						unk_0x02DAF06EA4F08219(&uLocal_78);
						unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
					}
					func_32(0, 1, 1, 0, 0);
					if (bLocal_342)
					{
						if (unk_0xEF0E25DA0CB6E8FF(uLocal_79))
						{
							unk_0x348665177DBFB93B(uLocal_79, 0);
							unk_0x4EC087603E1DEF9C(uLocal_79, 0);
						}
						unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0x2B9AEC08E469E384(0, 1065353216);
						unk_0xF3F01A78937DC905(0);
						func_17(500, 1);
					}
					else
					{
						unk_0x9CB4DD3D88846081(0, 0, 3, 0);
						unk_0x348665177DBFB93B(uLocal_79, 0);
					}
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
					func_16(&iLocal_77);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_75))
				{
					unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_105220.f_2354.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_105220.f_2354.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 8804;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 8804)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312736;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_15(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_14(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_12(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_13(Global_105220.f_2354.f_539.f_4301))
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

bool func_12(int iParam0)
{
	return Global_35905 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
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

void func_17(int iParam0, bool bParam1)
{
	if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
	{
		if (!unk_0x26641E1BFD792DBC())
		{
			unk_0x829FA4611BD56B44(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x726D9204B160D23E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_301 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (unk_0x317B2443006524C2(iVar0))
		{
			unk_0x348665177DBFB93B(uLocal_79, 0);
			unk_0x7A41D32A383895D8(500);
			while (unk_0x422F9EDE839E6ABB())
			{
				unk_0xDE7B9CB38D019BF0();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_342 = true;
			return 1;
		}
	}
	if (unk_0x17FAADF9916EF741())
	{
		if (unk_0x317B2443006524C2(iVar0))
		{
			bLocal_342 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_28) > iParam0)
		{
			Global_27 = unk_0x105601648511CC64();
		}
		Global_28 = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_27) > iParam0)
		{
			if (func_21())
			{
				Global_27 = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

void func_23(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_24(int iParam0)
{
	if (Global_14659)
	{
		func_26(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
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
	if (!func_25())
	{
		Global_14493.f_1 = 3;
	}
}

int func_25()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_27(0))
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

int func_27(int iParam0)
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

void func_28()
{
	Global_14666 = 0;
	func_29();
}

void func_29()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_31(iParam0);
	if ((unk_0x105601648511CC64() - Global_29) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_32(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_39(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_25())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_38(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_39(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_38(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_36(unk_0xB5CEFD608600A09F())) && !func_34(unk_0xB5CEFD608600A09F(), 0)) && !func_33()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_36(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_33()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_36(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_37())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_37()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_38(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

void func_40(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - Param0 };
		fVar4 = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
		if (func_41(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		fVar4 = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
		if (func_41(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 10f)
		{
			*fParam3 = (6f * 2f);
		}
		else
		{
			*fParam3 = 6f;
		}
		*fParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*fParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}

int func_41(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		fVar0 = unk_0x349C94FFF43E2979(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_42(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_43(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

bool func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_45(sParam2, iParam3, 0);
}

int func_45(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x1E08809A5041F85B(0);
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_50();
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
				func_49();
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
				if (func_48())
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
			if (func_25())
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
			func_47();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_46();
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
		func_52();
	}
	return 0;
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_47()
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

int func_48()
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

void func_49()
{
	if (func_12(14))
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
		Global_14493 = func_10();
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

void func_50()
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

bool func_51(int iParam0, int iParam1)
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

void func_52()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
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

int func_54()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_76))
	{
		return 1;
	}
	else if (func_161(iLocal_77))
	{
		if (!unk_0xE642C1AC73CE364E(iLocal_76, iLocal_77, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_161(iLocal_77))
	{
		fVar0 = unk_0x77F5C030D3238E26(iLocal_77);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && unk_0xB5A0FB1DF0C44C2D(iLocal_77))
		{
			sLocal_121 = sLocal_293;
		}
		else if (bVar2)
		{
			sLocal_121 = sLocal_292;
		}
		else
		{
			sLocal_121 = sLocal_291;
		}
	}
}

void func_56(var uParam0)
{
	*uParam0 = -99;
}

var func_57(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_58(iParam0, bParam1, 145);
}

var func_58(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_59(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(uVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_105220.f_28021[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(uVar0, &(Global_105220.f_28021[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_60(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_60(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_60(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		unk_0x07B8ECB35A4ED3AC(uParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(uParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(uParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_62(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, iParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(iParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(iParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(iParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(iParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(iParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(iParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_64(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_64(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

bool func_64(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_65()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_76))
	{
		unk_0x91629AC1E1F78419(iLocal_76, 2, 0);
		unk_0x91629AC1E1F78419(iLocal_76, 6, 0);
		unk_0x91629AC1E1F78419(iLocal_76, 3, 1);
		unk_0x91629AC1E1F78419(iLocal_76, 1, 0);
		unk_0xB8CBD998685C0685(iLocal_76, unk_0xBC25C936A095B5BA(), 0, 16);
		unk_0x2E35C4FA5F0ED22F(iLocal_76, 0);
		unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_76));
	}
	else
	{
		unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_76));
	}
	if (func_161(iLocal_77))
	{
		unk_0xD421BC740C5340C3(iLocal_77, 1);
	}
}

int func_66()
{
	if (func_161(iLocal_77))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_77, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_81)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_76))
				{
					if (!iLocal_298)
					{
						if (!unk_0x127812AA6652253F(iLocal_77))
						{
							unk_0x10790F4A9247B707(iLocal_76, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_298 = 1;
						}
					}
					if (unk_0x105601648511CC64() > iLocal_303 + 7000)
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_77, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_44(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0))
							{
								iLocal_303 = unk_0x105601648511CC64();
							}
						}
					}
					unk_0x5502708AECB47F5D(iLocal_77);
					unk_0xE452BE0597443B80(iLocal_77);
					iLocal_81 = 0;
				}
			}
			if (unk_0xD9C1758D86688CEA(iLocal_77, unk_0xBC25C936A095B5BA(), 1))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_76))
				{
					func_44(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0);
				}
				iLocal_82++;
				iLocal_81 = 1;
			}
			if (iLocal_82 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_298 = 0;
			iLocal_81 = 0;
		}
	}
	return 0;
}

int func_67()
{
	if (func_161(iLocal_77))
	{
		if (((unk_0xE1A8FD31526DD6C8(iLocal_77, 0, 0) || unk_0xE1A8FD31526DD6C8(iLocal_77, 1, 0)) || unk_0xE1A8FD31526DD6C8(iLocal_77, 4, 0)) || unk_0xE1A8FD31526DD6C8(iLocal_77, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_68()
{
	if (func_161(iLocal_77) && unk_0x2DA8CA50A72528FB(uLocal_64))
	{
		func_69(&uLocal_330, iLocal_77, 0, 0, 1, 1, 1);
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_70(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_70(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_63(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_72(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_72(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_64(iVar0))
	{
		func_98();
	}
	if (func_97(uParam1) && unk_0x8F6EAC9E7D6812D5(uParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(uParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_92(uParam0, bParam7, bParam9, 0))
			{
				func_88(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam8)
						{
							if (!func_64(iVar0))
							{
								func_76(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_75(1);
								}
							}
						}
					}
				}
			}
			else if (func_77(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam8)
					{
						if (!func_64(iVar0))
						{
							func_76(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_75(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAEFBBEC1AEA464B(sParam5))
			{
				if (func_64(sParam5))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_63(uParam0, iVar0, 1);
				}
			}
			if (!func_92(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_74(uParam0))
				{
					func_73(uParam0);
				}
			}
		}
	}
	else
	{
		func_63(uParam0, iVar0, 0);
	}
}

void func_73(var uParam0)
{
	if (func_97(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_74(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_75(bool bParam0)
{
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_105220.f_10020.f_100++;
			}
			return Global_105220.f_10020.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_105220.f_10020.f_101++;
			}
			return Global_105220.f_10020.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_105220.f_10020.f_102++;
			}
			return Global_105220.f_10020.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_76(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_77(char* sParam0)
{
	if (!func_78(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_64(sParam0)) || func_64("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (func_75(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_27(0))
	{
		return 0;
	}
	if (func_87())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53148)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_86() || func_85(Global_4456448.f_148478)) || func_84())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_83(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_82(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_79(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_80(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_80(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	return -1;
}

int func_82(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
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

var func_84()
{
	return Global_2447942.f_16;
}

bool func_85(int iParam0)
{
	return iParam0 == 51;
}

var func_86()
{
	return Global_2447942.f_15;
}

bool func_87()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

void func_88(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316801 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(uParam1, 0))
	{
		func_63(uParam0, 0, 0);
	}
	if (func_91(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_89())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(0);
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
	unk_0x1DE00CFB4CAEB978(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_89()
{
	return func_90(unk_0xB5CEFD608600A09F());
}

int func_90(int iParam0)
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_91(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_74(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_94(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_74(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_78(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_98();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_98()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

int func_99(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_100(iParam0, bParam1, 0);
}

int func_100(var uParam0, bool bParam1, bool bParam2)
{
	return func_59(uParam0, !bParam1, bParam2);
}

int func_101()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_301 == 1)
	{
		fVar0 = 220f;
	}
	if (func_161(iLocal_77))
	{
		func_102(uLocal_64, iLocal_77, fVar0, 1061158912, 0);
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_77, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x41A5D6415E2CC10E(iLocal_77))
		{
			return 1;
		}
	}
	return 0;
}

void func_102(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2DA8CA50A72528FB(uParam0))
	{
		if ((unk_0x724D816EA203A79E(iParam1) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xD27AC0E9B78CFDD7(iParam1))
			{
				if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam1), 0))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x7A6BBF86FCBBCF7E(uParam0, 1);
						unk_0x7781946F1FC054FA(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(uParam0, 0);
						unk_0x7781946F1FC054FA(uParam0, 255);
					}
				}
			}
			else if (unk_0x386592AF38881675(iParam1))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam1)))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x7A6BBF86FCBBCF7E(uParam0, 1);
						unk_0x7781946F1FC054FA(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(uParam0, 0);
						unk_0x7781946F1FC054FA(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_103()
{
	if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_77, 0) && unk_0xE7259E40522CC260(iLocal_77))
	{
		return 1;
	}
	return 0;
}

void func_104()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_75) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
				if (!unk_0x5237AF95232D78C5(iLocal_75, 0))
				{
					if (iLocal_301 == 1)
					{
						if (func_111())
						{
							iLocal_50 = 1;
						}
					}
					else if (!unk_0x2CDE18D6C89522AD(iLocal_75) && !unk_0x69871CAEBDD20966(iLocal_75))
					{
						unk_0x56F2E1B5599188FA(iLocal_75, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0xC0FDCDB0DF739C50(iLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_78);
							unk_0xE896C0AD02364F2A(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x535008C596714F9E(uLocal_78);
							unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
							unk_0x02DAF06EA4F08219(&uLocal_78);
							iLocal_304 = unk_0x105601648511CC64();
							iLocal_50 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_301 == 1)
				{
					unk_0x56F2E1B5599188FA(iLocal_75, unk_0xBC25C936A095B5BA(), -1, 0, 2);
					if (unk_0xF4FCC3C1048FF2AB(iLocal_75, 242628503) != 1)
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_78);
						unk_0xE896C0AD02364F2A(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x535008C596714F9E(uLocal_78);
						unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
						unk_0x02DAF06EA4F08219(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (unk_0xC5B8A5F778E321DD(iLocal_75, unk_0xBC25C936A095B5BA(), 60f))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_75, 242628503) != 1)
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_78);
						unk_0xE896C0AD02364F2A(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_61 == 0)
						{
							unk_0xE896C0AD02364F2A(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x535008C596714F9E(uLocal_78);
						unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
						unk_0x02DAF06EA4F08219(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				if (func_111())
				{
					if (func_110())
					{
					}
				}
				break;
			
			case 2:
				if (func_111())
				{
					if (func_110())
					{
					}
				}
				if (iLocal_301 == 2)
				{
					if (!unk_0xC5B8A5F778E321DD(iLocal_75, unk_0xBC25C936A095B5BA(), 60f) && !func_108(iLocal_75, -875674219))
					{
						unk_0x85DB484A637CEAB9(iLocal_75, unk_0xBC25C936A095B5BA(), 0);
					}
					if (func_107(iLocal_75, unk_0xBC25C936A095B5BA(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x105601648511CC64() - iLocal_304) > 6000)
							{
								func_106();
							}
						}
					}
				}
				if (unk_0xF4FCC3C1048FF2AB(iLocal_75, 242628503) != 1 && !func_108(iLocal_75, -875674219))
				{
					if (iLocal_301 == 1)
					{
						Local_93 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x4DBCE270B354E123(iLocal_75, Local_93, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_75, 242628503) == 7)
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_78);
								unk_0xDF14F570C0180463(0, Local_93, 1f, 20000, fLocal_106, 1056964608);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0x535008C596714F9E(uLocal_78);
								unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
								unk_0x02DAF06EA4F08219(&uLocal_78);
							}
						}
						else if (!unk_0x96044E39418AAF17(iLocal_75, sLocal_83, "waiting", 3))
						{
							unk_0xE896C0AD02364F2A(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_107(iLocal_75, unk_0xBC25C936A095B5BA(), 1) < 25f)
							{
								func_106();
							}
						}
					}
					else if (!unk_0x96044E39418AAF17(iLocal_75, sLocal_83, "waiting", 3))
					{
						unk_0xE896C0AD02364F2A(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x640A454FD54BBEF2(iLocal_75, unk_0xBC25C936A095B5BA()))
				{
					unk_0x56F2E1B5599188FA(iLocal_75, unk_0xBC25C936A095B5BA(), -1, 0, 2);
				}
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_75, 40f, 40f, 10f, 0, 1, 0) && !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_75, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_105())
					{
						if (iLocal_59)
						{
							if (iLocal_301 == 1)
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_78);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0xE896C0AD02364F2A(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x535008C596714F9E(uLocal_78);
								unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
								unk_0x02DAF06EA4F08219(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x105601648511CC64();
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_78);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0xE896C0AD02364F2A(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x535008C596714F9E(uLocal_78);
								unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
								unk_0x02DAF06EA4F08219(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x105601648511CC64();
							}
						}
						else if (!unk_0x96044E39418AAF17(iLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_75, 242628503) == 7)
							{
								if (!unk_0xC5B8A5F778E321DD(iLocal_75, unk_0xBC25C936A095B5BA(), 45f))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_78);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
									unk_0x535008C596714F9E(uLocal_78);
									unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
									unk_0x02DAF06EA4F08219(&uLocal_78);
								}
								else if ((unk_0x105601648511CC64() - iLocal_304) > 6000)
								{
									iLocal_59 = 1;
								}
							}
						}
						else if (!unk_0xC5B8A5F778E321DD(iLocal_75, unk_0xBC25C936A095B5BA(), 70f))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_75);
							unk_0xC5A6DFE2B8987B17(&uLocal_78);
							unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
							unk_0x535008C596714F9E(uLocal_78);
							unk_0xA8E6405305C0D7DF(iLocal_75, uLocal_78);
							unk_0x02DAF06EA4F08219(&uLocal_78);
							iLocal_304 += 4000;
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_76))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_76, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_76, 1);
						unk_0x02537C8C1BEEB477(&iLocal_76);
					}
				}
				else
				{
					if (iLocal_301 == 1)
					{
						Local_93 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_61)
					{
						Local_93 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						Local_93 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0x4DBCE270B354E123(iLocal_75, Local_93, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_75, 2106541073) == 7)
						{
							unk_0xDF14F570C0180463(iLocal_75, Local_93, 1f, 20000, fLocal_106, 1056964608);
						}
					}
					else if (!unk_0xC5B8A5F778E321DD(iLocal_75, unk_0xBC25C936A095B5BA(), 50f))
					{
						unk_0x85DB484A637CEAB9(iLocal_75, unk_0xBC25C936A095B5BA(), -1);
					}
					iLocal_59 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_160(1))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_75))
		{
			unk_0x5558ED6D4A2DEC93(iLocal_75, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_75, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_230();
	}
}

bool func_105()
{
	if (!bLocal_296)
	{
		if (func_44(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
		{
			bLocal_296 = true;
		}
	}
	return bLocal_296;
}

int func_106()
{
	if (!iLocal_297)
	{
		if (func_44(&Local_122, cLocal_294, sLocal_288, 4, 0, 0, 0))
		{
			iLocal_297 = 1;
		}
	}
	return iLocal_297;
}

float func_107(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

int func_108(int iParam0, int iParam1)
{
	if (func_109(uParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(uParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_3(uParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	if (!iLocal_295)
	{
		if (unk_0x83666F9FB8FEBD4B() > 2000)
		{
			if (func_44(&Local_122, cLocal_294, sLocal_287, 4, 0, 0, 0))
			{
				iLocal_295 = 1;
			}
		}
	}
	return iLocal_295;
}

int func_111()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_76) && !unk_0x36CEFBE9B745A58D(iLocal_75))
	{
		if (func_161(iLocal_77))
		{
			if (unk_0x25EF720B1CAB1E23(iLocal_76, iLocal_77))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_112(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_113(bool bParam0)
{
	int iVar0;
	
	if (iLocal_301 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_136(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_136(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_136(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_135(8);
	}
	func_117(17, iLocal_301);
	func_114();
	func_230();
}

void func_114()
{
	func_115();
}

int func_115()
{
	if (func_116(0))
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

bool func_116(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_132(iParam0))
	{
		func_131(iParam0, iParam1);
		if (!func_130(51))
		{
			func_126("RE_REWARD", 1, 0, 4000, 10000, func_129(), 0, 138, 0);
			func_125(51);
		}
		if (func_124(iParam0))
		{
			Global_105220.f_24966.f_2 = 3;
		}
		if (func_123(iParam0, iParam1) != 322)
		{
			func_118(func_123(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_105208 = iParam1;
		if (Global_105206 == 0)
		{
			if (((Global_105209 == 1 || Global_105209 == 5) || Global_105209 == 11) || Global_105209 == 25)
			{
				func_135(2);
			}
			else if ((Global_105209 == 26 || Global_105209 == 8) || Global_105209 == 17)
			{
				func_135(7);
			}
			else
			{
				func_135(1);
			}
		}
	}
}

void func_118(int iParam0, var uParam1, var uParam2)
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
		func_122((891 + iParam0), 1, -1, 1);
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
		Global_105220.f_10165[iParam0 /*12*/].f_10 = uParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = uParam2;
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
		func_119();
	}
}

void func_119()
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
		func_121(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_120() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_115();
				}
			}
		}
	}
}

int func_120()
{
	return Global_25277;
}

int func_121(int iParam0, int iParam1)
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

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
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

int func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_20381.f_150[iVar1]), iVar0);
	}
}

void func_126(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_127(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_127(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
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
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_105220.f_20381[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_105220.f_20381.f_145 < 9)
	{
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_4), sParam1, 16);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_9 = iParam5;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_11 = iParam6;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_12 = uParam2;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_13 = iParam7;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_14 = iParam8;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = -1;
		}
		Global_105220.f_20381.f_145++;
		func_128();
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_105220.f_20381.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 0))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[0])
			{
				Global_105220.f_20381.f_146[0] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 1))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[1])
			{
				Global_105220.f_20381.f_146[1] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 2))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[2])
			{
				Global_105220.f_20381.f_146[2] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_129()
{
	func_11();
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

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20381.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_131(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_105220.f_24966.f_8[iParam0]), iParam1);
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_133()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar16 = func_134(Var0);
	return uVar16;
}

int func_134(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_135(int iParam0)
{
	Global_105206 = iParam0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_116(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_105220.f_7659.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_144(iParam1);
		Var0.f_4 = (unk_0x105601648511CC64() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
		Global_105220.f_7659.f_765[Global_105220.f_7659.f_866 /*10*/] = { Var0 };
		Global_105220.f_7659.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_143(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_142(&iVar20);
		iVar21 = func_141(Var10, Global_105220.f_7659.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_139(Global_105220.f_7659.f_765[iVar20 /*10*/]);
			Global_105220.f_7659.f_765[iVar20 /*10*/] = { Var10 };
			func_138(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_137(Var10))
			{
				func_139(Global_105220.f_7659.f_765[iVar20 /*10*/]);
				Global_105220.f_7659.f_765[iVar20 /*10*/] = { Var10 };
				func_138(&Var10);
				return 1;
			}
			else
			{
				if (!func_137(Global_105220.f_7659.f_765[iVar20 /*10*/]))
				{
					Global_105220.f_7659.f_765[iVar20 /*10*/] = { Var10 };
					func_138(&Var10);
					return 1;
				}
				func_138(&Var10);
				return 1;
			}
		}
		else
		{
			func_139(Var10);
			func_138(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_137(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_138(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_139(struct<10> Param0)
{
	if (func_137(Param0))
	{
		func_140(Param0.f_8, 0);
	}
}

void func_140(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_105220.f_8584[iParam0] = 1;
	Global_105220.f_8584.f_236[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

int func_141(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_105220.f_7659.f_866)
	{
		if (func_141(Global_105220.f_7659.f_765[iVar0 /*10*/], Global_105220.f_7659.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_144(iParam1);
	Var0.f_4 = (unk_0x105601648511CC64() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
	return Var0;
}

int func_144(int iParam0)
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

void func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_146(iParam0, 2, 1);
	}
}

void func_146(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_120() == 0)
		{
			uVar0 = func_9(func_147(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&uVar0, iParam1);
			func_6(func_147(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

int func_147(int iParam0)
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

void func_148(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_120() == 0)
		{
			uVar0 = func_9(func_147(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&uVar0, iParam1);
			func_6(func_147(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_120() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_9(func_147(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_150(int iParam0)
{
	if (func_153())
	{
		Global_105210 = 1;
		Global_105207 = unk_0x105601648511CC64();
		if (func_124(Global_105209))
		{
			func_151(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_124(Global_105209))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_105220.f_24966.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_76(func_152(iParam0), -1);
					Global_105220.f_24966.f_2++;
					unk_0xF0059F27F7BB6680(&Global_105216, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_76(func_152(iParam0), -1);
					Global_105220.f_24966.f_3++;
					unk_0xF0059F27F7BB6680(&Global_105216, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_76(func_152(iParam0), -1);
					Global_105220.f_24966.f_4++;
					unk_0xF0059F27F7BB6680(&Global_105216, 2);
				}
			}
			break;
	}
}

char* func_152(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_153()
{
	switch (func_154(&Global_25336, 0, 5, 0, unk_0x8A55B15F4133C912()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_154(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90578.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_158(0))
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_17206.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_35905 = iParam2;
		Global_35867 = *uParam0;
		Global_35868 = iParam4;
		Global_35866 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35866 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35866)
			{
				if (Global_35872[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35867 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_156(iParam2))
		{
			return 0;
		}
		if (Global_35866 == 8)
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		Global_35872[Global_35866 /*4*/] = Global_35869;
		Global_35872[Global_35866 /*4*/].f_1 = iParam1;
		Global_35872[Global_35866 /*4*/].f_2 = iParam2;
		Global_35872[Global_35866 /*4*/].f_3 = 0;
		Global_35866++;
		if (iParam4 != 0)
		{
			func_155(uParam0, iParam4);
		}
	}
	return 2;
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35866 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35866)
	{
		if (Global_35872[iVar0 /*4*/] == *uParam0)
		{
			Global_35872[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_156(int iParam0)
{
	return func_157(iParam0, Global_35905);
}

int func_157(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_156(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_159()
{
	float fVar0;
	
	switch (iLocal_301)
	{
		case 1:
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_61)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_75))
		{
			if (unk_0xD1DC4B08247A4317(iLocal_75))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_160(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_75))
		{
			if (iParam0 == 0 || func_107(iLocal_75, iLocal_76, 1) > 15f)
			{
				if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_75, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0x823166D9421223CA(iLocal_75, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0x823166D9421223CA(iLocal_75, 31086, 0f, 0f, 0f) };
				if ((unk_0x1749F74D4E70A733(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xC9FA5D38428AB6BE(-1, unk_0x823166D9421223CA(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xD9C1758D86688CEA(iLocal_75, unk_0xBC25C936A095B5BA(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_161(int iParam0)
{
	if (func_3(iParam0))
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

int func_162()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	char* sVar11;
	char* sVar12;
	
	Var3 = { Local_99 };
	fVar6 = fLocal_111;
	switch (iLocal_301)
	{
		case 1:
			Local_96 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_110 = 293.9091f;
			Local_99 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_111 = 185.5212f;
			iVar7 = joaat("a_f_y_vinewood_04");
			iVar9 = joaat("peyote");
			iVar8 = joaat("g_m_y_salvagoon_01");
			sVar10 = "CThiefVictim";
			sVar11 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_287 = "RECT1_ATTR";
			sLocal_288 = "RECT1_HELP";
			sLocal_289 = "RECT1_FYOU";
			sLocal_290 = "RECT1_JOY";
			sLocal_291 = "RECT1_OK";
			sLocal_292 = "RECT1_BAD";
			sLocal_293 = "RECT1_GOOD";
			cLocal_294 = "RECT1AU";
			sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_85 = "random@car_thief@waving_ig_1";
			Local_102 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_57 = 3f;
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_99))
			{
				Var3 = { Local_96 };
				fVar6 = fLocal_110;
				bLocal_61 = true;
				sLocal_84 = "random@car_thief@waving_ig_2";
				sLocal_86 = "waving_l";
			}
			else
			{
				sLocal_86 = "waving";
				sLocal_84 = "random@car_thief@waving_ig_1";
				Var3 = { Local_99 };
				fVar6 = fLocal_111;
			}
			break;
		
		case 2:
			Local_99 = { -538.6718f, -2183.442f, 5.2336f };
			Local_96 = { -365.7f, -2179.26f, 9.3184f };
			iVar7 = joaat("a_f_y_indian_01");
			iVar9 = joaat("rocoto");
			iVar8 = joaat("a_m_m_soucent_04");
			sVar10 = "CThiefGolfer";
			sVar12 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_287 = "RECT2_ATTR";
			sLocal_288 = "RECT2_HELP";
			sLocal_289 = "RECT2_FYOU";
			sLocal_290 = "RECT2_JOY";
			sLocal_291 = "RECT2_OK";
			sLocal_292 = "RECT2_BAD";
			sLocal_293 = "RECT2_GOOD";
			cLocal_294 = "RECT2AU";
			sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_85 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_102 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_56 = 15f;
			fLocal_57 = 3f;
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_99))
			{
				bLocal_61 = true;
			}
			break;
	}
	unk_0xF243B7A14FCFD0F4(iVar7);
	unk_0xF243B7A14FCFD0F4(iVar8);
	unk_0xF243B7A14FCFD0F4(iVar9);
	unk_0x522053D86D6E1C7A(sLocal_83);
	unk_0x522053D86D6E1C7A(sLocal_84);
	unk_0x522053D86D6E1C7A(sLocal_85);
	unk_0x522053D86D6E1C7A("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0xA8396BF0E2C53C39();
	if (((((((unk_0xD6513D668481290A(iVar7) && unk_0xD6513D668481290A(iVar8)) && unk_0xD6513D668481290A(iVar9)) && unk_0xF9E082857622D91E(sLocal_83)) && unk_0xF9E082857622D91E(sLocal_84)) && unk_0xF9E082857622D91E(sLocal_85)) && unk_0xF9E082857622D91E("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x95654D7A61CD43DE())
	{
		if (iLocal_301 == 1)
		{
			func_176("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_96));
			func_176("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_99));
			iLocal_77 = unk_0x61C05BF08A1E0EFE(iVar9, Var3, fVar6, 1, 1, 0);
			unk_0x155EA453CD198E4B(iLocal_77, 0, 0);
			unk_0xE82050D41B744FF3(iLocal_77, 0);
			unk_0xA73D1278857991A2(iLocal_77, 1);
			unk_0xE365C09E06B55C51(iLocal_77, 0);
			unk_0x7387EA04915F201E(iLocal_77, 0);
			unk_0xE54F7105CEA81918(iLocal_77, 2, 0);
			iLocal_76 = unk_0xFD8987C090669BD5(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0xC8FD3EBBB90E8D7F(iLocal_76, 42, 1);
			unk_0x91629AC1E1F78419(iLocal_76, 3, 1);
			unk_0x7A535CE1F001F3FE(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_76, 10);
			unk_0xBA1E09204DACEC7A(iLocal_76, 1f);
			unk_0xCC74639EAF7A9582(iLocal_76, 1f);
			unk_0x914C5DE0B15B8B59(iLocal_77, 135, 135);
			unk_0xB2CB6EAA6B280A84("re_cartheft relGroupThief", &iLocal_329);
			unk_0xA902E18EDF6FA0C8(5, iLocal_329, joaat("player"));
			unk_0xA902E18EDF6FA0C8(2, iLocal_329, joaat("CIVMALE"));
			unk_0xA902E18EDF6FA0C8(2, joaat("CIVMALE"), iLocal_329);
			unk_0x4106FAF8AA1D69D5(iLocal_76, iLocal_329);
			unk_0xF82197F205B9D8FD(iLocal_77, 1);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - Local_52 };
				uLocal_55 = unk_0xFDC254CE02DB0919(Var0.f_0, Var0.f_1);
			}
			iLocal_75 = unk_0x01B3635C3E8EDD81(5, iVar7, Local_52, uLocal_55, 1, 1);
			unk_0x36C3B58DA78A2679(iLocal_75, sVar11);
			unk_0x56F2E1B5599188FA(iLocal_75, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 2, 2, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 3, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 4, 1, 1, 0);
			unk_0x0DEF5E53360637F2(iLocal_75, 1);
			if (bLocal_61)
			{
				Local_90 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_105 = 124.6557f;
				Local_87 = { -2252.683f, 4274.16f, 45.0612f };
				Local_93 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_106 = 272.8688f;
				Local_113 = { -2258.04f, 4272.244f, 45.75466f };
				Local_116 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				Local_90 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_105 = 336.143f;
				Local_93 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_106 = 179.4774f;
				Local_87 = { -2257.088f, 4268.938f, 44.6456f };
				Local_113 = { -2254.886f, 4273.539f, 46.2282f };
				Local_116 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_61)
			{
				iLocal_77 = unk_0x61C05BF08A1E0EFE(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1, 0);
			}
			else
			{
				iLocal_77 = unk_0x61C05BF08A1E0EFE(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1, 0);
			}
			unk_0x155EA453CD198E4B(iLocal_77, 0, 0);
			unk_0xE82050D41B744FF3(iLocal_77, 0);
			unk_0x6012A6A4F2950585(iLocal_77, 3);
			unk_0xA73D1278857991A2(iLocal_77, 1);
			unk_0x1345B3BF11EDB0CF(iLocal_77, 0);
			unk_0x5C9F67BE33A5A3EE(iLocal_77, 11, 2, 0);
			unk_0x5C9F67BE33A5A3EE(iLocal_77, 16, 3, 0);
			unk_0x5C9F67BE33A5A3EE(iLocal_77, 12, 1, 0);
			unk_0x5C9F67BE33A5A3EE(iLocal_77, 13, 1, 0);
			unk_0xD2F70373DBF15801(iLocal_77, 3);
			unk_0x5C9F67BE33A5A3EE(iLocal_77, 23, 6, 0);
			unk_0x84A3F4F29630A320(iLocal_77, 3);
			unk_0xB25E25030D61B529(iLocal_77, 18, 1);
			unk_0xB25E25030D61B529(iLocal_77, 22, 1);
			unk_0x914C5DE0B15B8B59(iLocal_77, 143, 0);
			unk_0x4C59702AC1076A88(iLocal_77, 31, 2);
			unk_0xE365C09E06B55C51(iLocal_77, 0);
			unk_0x7387EA04915F201E(iLocal_77, 0);
			if (bLocal_61)
			{
				iLocal_75 = unk_0x01B3635C3E8EDD81(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_75 = unk_0x01B3635C3E8EDD81(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_75 = unk_0x01B3635C3E8EDD81(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 0, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 3, 1, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_75, 4, 1, 2, 0);
			iLocal_76 = unk_0xFD8987C090669BD5(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_76, 10);
			unk_0xBA1E09204DACEC7A(iLocal_76, 1f);
			unk_0xCC74639EAF7A9582(iLocal_76, 1f);
			unk_0xC8FD3EBBB90E8D7F(iLocal_76, 42, 1);
			unk_0x36C3B58DA78A2679(iLocal_76, sVar12);
			Local_90 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_105 = 294.4744f;
			Local_87 = { -501.0442f, -2150.799f, 8.139f };
			Local_93 = { -493.8062f, -2156.036f, 8.1978f };
			Local_113 = { -504.365f, -2144.534f, 9.8585f };
			Local_116 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0xB105531EDD3DE51B(iLocal_75, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_75, 185, 1);
		unk_0x423D0D22C11B3EE4(iLocal_77, 0);
		unk_0x2D655AA68FA1736B(iLocal_77, 1, 1, 0);
		unk_0x2E35C4FA5F0ED22F(iLocal_75, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_76, 1);
		unk_0x56F2E1B5599188FA(iLocal_75, iLocal_76, -1, 0, 2);
		unk_0x0E622862E5E566BB(iLocal_77);
		unk_0xF82197F205B9D8FD(iLocal_77, 1);
		unk_0xD38EB677CBE7440A(iLocal_77, 0, 0);
		unk_0x8510BC031C24B862(iVar9, 1);
		unk_0xD6423910AAD8A379("RE_CAR_STEAL_SCENE");
		unk_0x55662F9F262C2F9B(iLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0xD7E19B03E0EB54E5(iLocal_77, 1);
		unk_0x91629AC1E1F78419(iLocal_75, 17, 0);
		unk_0xABA7AE40608505F2(iLocal_75, 512, 1);
		switch (func_10())
		{
			case 0:
				sLocal_120 = "MICHAEL";
				break;
			
			case 1:
				sLocal_120 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_120 = "TREVOR";
				break;
		}
		func_175(&Local_122, 0, unk_0xBC25C936A095B5BA(), sLocal_120, 0, 1);
		func_175(&Local_122, 1, iLocal_75, sVar10, 0, 1);
		func_175(&Local_122, 2, iLocal_76, "CThief", 0, 1);
		return 1;
	}
	else if (func_163())
	{
		func_230();
	}
	return 0;
}

int func_163()
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_174())
		{
			return 0;
		}
	}
	if (func_170())
	{
		return 1;
	}
	if (func_164(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_164(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_129();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 3))
				{
					func_165(iVar32, &Var0);
					fVar35 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_165(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_166(uParam1, "Abigail1", func_168(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 1:
			func_166(uParam1, "Abigail2", func_168(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 2:
			func_166(uParam1, "Barry1", func_168(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 3:
			func_166(uParam1, "Barry2", func_168(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 4:
			func_166(uParam1, "Barry3", func_168(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 5:
			func_166(uParam1, "Barry3A", func_168(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 6:
			func_166(uParam1, "Barry3C", func_168(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 7:
			func_166(uParam1, "Barry4", func_168(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_167(iParam0), 0, 0);
			break;
		
		case 8:
			func_166(uParam1, "Dreyfuss1", func_168(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 9:
			func_166(uParam1, "Epsilon1", func_168(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 10:
			func_166(uParam1, "Epsilon2", func_168(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 11:
			func_166(uParam1, "Epsilon3", func_168(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 12:
			func_166(uParam1, "Epsilon4", func_168(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 13:
			func_166(uParam1, "Epsilon5", func_168(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 14:
			func_166(uParam1, "Epsilon6", func_168(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 15:
			func_166(uParam1, "Epsilon7", func_168(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 16:
			func_166(uParam1, "Epsilon8", func_168(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 17:
			func_166(uParam1, "Extreme1", func_168(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 18:
			func_166(uParam1, "Extreme2", func_168(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 19:
			func_166(uParam1, "Extreme3", func_168(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 20:
			func_166(uParam1, "Extreme4", func_168(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 21:
			func_166(uParam1, "Fanatic1", func_168(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_167(iParam0), 1, 0);
			break;
		
		case 22:
			func_166(uParam1, "Fanatic2", func_168(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_167(iParam0), 1, 0);
			break;
		
		case 23:
			func_166(uParam1, "Fanatic3", func_168(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_167(iParam0), 0, 1);
			break;
		
		case 24:
			func_166(uParam1, "Hao1", func_168(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_167(iParam0), 0, 1);
			break;
		
		case 25:
			func_166(uParam1, "Hunting1", func_168(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 26:
			func_166(uParam1, "Hunting2", func_168(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 27:
			func_166(uParam1, "Josh1", func_168(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 28:
			func_166(uParam1, "Josh2", func_168(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 29:
			func_166(uParam1, "Josh3", func_168(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 30:
			func_166(uParam1, "Josh4", func_168(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 31:
			func_166(uParam1, "Maude1", func_168(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 32:
			func_166(uParam1, "Minute1", func_168(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 33:
			func_166(uParam1, "Minute2", func_168(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 34:
			func_166(uParam1, "Minute3", func_168(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 35:
			func_166(uParam1, "MrsPhilips1", func_168(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 36:
			func_166(uParam1, "MrsPhilips2", func_168(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 37:
			func_166(uParam1, "Nigel1", func_168(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 38:
			func_166(uParam1, "Nigel1A", func_168(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 39:
			func_166(uParam1, "Nigel1B", func_168(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 40:
			func_166(uParam1, "Nigel1C", func_168(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 41:
			func_166(uParam1, "Nigel1D", func_168(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 42:
			func_166(uParam1, "Nigel2", func_168(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 43:
			func_166(uParam1, "Nigel3", func_168(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 44:
			func_166(uParam1, "Omega1", func_168(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 45:
			func_166(uParam1, "Omega2", func_168(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 46:
			func_166(uParam1, "Paparazzo1", func_168(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 47:
			func_166(uParam1, "Paparazzo2", func_168(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 48:
			func_166(uParam1, "Paparazzo3", func_168(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 49:
			func_166(uParam1, "Paparazzo3A", func_168(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 50:
			func_166(uParam1, "Paparazzo3B", func_168(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 51:
			func_166(uParam1, "Paparazzo4", func_168(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 52:
			func_166(uParam1, "Rampage1", func_168(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 54:
			func_166(uParam1, "Rampage3", func_168(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 55:
			func_166(uParam1, "Rampage4", func_168(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 56:
			func_166(uParam1, "Rampage5", func_168(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 53:
			func_166(uParam1, "Rampage2", func_168(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 57:
			func_166(uParam1, "TheLastOne", func_168(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 58:
			func_166(uParam1, "Tonya1", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 59:
			func_166(uParam1, "Tonya2", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 60:
			func_166(uParam1, "Tonya3", func_168(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 61:
			func_166(uParam1, "Tonya4", func_168(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 62:
			func_166(uParam1, "Tonya5", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_166(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_168(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_169(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_169(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_170()
{
	if (func_173() && !func_174())
	{
		return 1;
	}
	if (func_172() && func_171())
	{
		return 1;
	}
	return 0;
}

bool func_171()
{
	return Global_104938 > 0;
}

int func_172()
{
	if (Global_90022 != -1)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 20);
	}
	return 0;
}

int func_174()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam2))
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

void func_176(char* sParam0, float fParam1)
{
	func_178(sParam0);
	func_177(fParam1);
}

void func_177(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_178(char* sParam0)
{
	if (unk_0x3362CDE8460ED38B(uParam0, uParam0))
	{
	}
}

int func_179()
{
	if (!func_156(5))
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_174())
		{
			return 0;
		}
	}
	if (func_164(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if ((Global_105209 == func_133() && unk_0x8520DF5301DD9811()) && Global_105210)
	{
		return 1;
	}
	return 0;
}

void func_181()
{
	if (func_109(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_77 && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_80)
			{
				iLocal_80 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			}
		}
	}
}

void func_182(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x105601648511CC64();
	}
	if (unk_0x2DA8CA50A72528FB(uParam0))
	{
		iVar0 = (unk_0x105601648511CC64() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xB1D6718ACE798CBB(uParam0) != 255)
				{
					unk_0x7781946F1FC054FA(uParam0, 255);
				}
			}
			else if (unk_0xB1D6718ACE798CBB(uParam0) != 0)
			{
				unk_0x7781946F1FC054FA(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xB1D6718ACE798CBB(uParam0) != 255)
			{
				unk_0x7781946F1FC054FA(uParam0, 255);
			}
		}
	}
}

void func_183()
{
}

void func_184(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_186(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_105206 = 0;
	func_185();
}

void func_185()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), 1);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
	}
}

void func_186(int iParam0)
{
	Global_105209 = iParam0;
}

int func_187(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_143601)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_133();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_174())
			{
				return 0;
			}
		}
		if (!Global_105220.f_9056)
		{
			return 0;
		}
		if (func_116(0))
		{
			return 0;
		}
		if (func_170())
		{
			return 0;
		}
		if (func_226())
		{
			return 0;
		}
		if (Global_105209 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_164(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_225(iParam3))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_224(func_10()) == 4 || func_224(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_223(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_222(Global_105220.f_24966.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_105211) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_221())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_212(4))
		{
			return 0;
		}
		if (!func_156(5))
		{
			return 0;
		}
		if (func_211(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_211(0, 0))
		{
			return 0;
		}
		if (Global_25423)
		{
			return 0;
		}
		if (func_225(30) && !func_211(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_105220.f_2354.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_105220.f_2354.f_539.f_2276[iVar4];
				if (func_210(iVar8))
				{
					if (func_188(iVar4))
					{
						if (!func_91(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var5) < (210f * 210f))
							{
								if (func_10() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_105220.f_2354.f_539.f_2276[iParam0];
	return func_189(iVar0);
}

int func_189(int iParam0)
{
	return func_190(iParam0, 1);
}

int func_190(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_210(iParam0))
	{
		return 0;
	}
	func_191(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_192(func_203(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_202(iParam0, iParam1))
	{
		iVar0 = func_201(iParam1);
		iVar1 = func_199(iParam0);
		iVar2 = (func_199(iParam0) - func_199(iParam1));
		iVar3 = (func_201(iParam0) - func_201(iParam1));
		iVar4 = (func_198(iParam0) - func_198(iParam1));
		iVar5 = (func_197(iParam0) - func_197(iParam1));
		iVar6 = (func_196(iParam0) - func_196(iParam1));
		iVar7 = (func_195(iParam0) - func_195(iParam1));
	}
	else
	{
		iVar0 = func_201(iParam0);
		iVar1 = func_199(iParam1);
		iVar2 = (func_199(iParam1) - func_199(iParam0));
		iVar3 = (func_201(iParam1) - func_201(iParam0));
		iVar4 = (func_198(iParam1) - func_198(iParam0));
		iVar5 = (func_197(iParam1) - func_197(iParam0));
		iVar6 = (func_196(iParam1) - func_196(iParam0));
		iVar7 = (func_195(iParam1) - func_195(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_194(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_193(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_193(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_194(int iParam0, int iParam1)
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

int func_195(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_196(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_197(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_198(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_199(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_200(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_200(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_201(int iParam0)
{
	return iParam0 & 15;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_210(iParam1) || !func_210(iParam0))
	{
		return 1;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	var uVar0;
	
	func_209(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_208(&uVar0, unk_0x7E09057438B9D216());
	func_207(&uVar0, unk_0x6E06C0DB9B43570D());
	func_206(&uVar0, unk_0xBE14F159908E4EE5());
	func_205(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_204(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_204(var uParam0, int iParam1)
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

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_201(*uParam0);
	iVar1 = func_199(*uParam0);
	if (iParam1 < 1 || iParam1 > func_194(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_210(int iParam0)
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
	iVar0 = func_195(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_196(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_197(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_199(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_201(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_198(iParam0);
	if (iVar5 < 1 || iVar5 > func_194(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0, int iParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_220()) || Global_104267) || Global_25279) || func_219()) || func_51(8, -1)) || func_218()) || func_217()) || func_216()) || func_215()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_220()) || Global_25279) || func_219()) || func_51(8, -1)) || func_216()) || func_218()) || func_217()) || func_215()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_220()) || Global_104267) || Global_25279) || func_219()) || func_51(8, -1)) || func_216()) || func_218()) || func_217()) || func_215()) || Global_105220.f_7659.f_919[iVar0] == 5) || Global_36452 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_220()) || Global_104267) || Global_25279) || func_219()) || func_51(8, -1)) || func_218()) || func_217()) || func_215()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_220() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_51(8, -1)) || func_215()) || func_214()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_218()) || func_217()) || func_214()) || func_213())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_220()) || Global_25279) || func_219()) || func_51(8, -1)) || func_217()) || func_216()) || func_215()) || Global_105220.f_7659.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_220()) || func_217()) || Global_104267) || Global_25279) || func_219()) || Global_37057) || func_51(8, -1)) || func_216()) || func_214()) || func_215()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_220()) || Global_104267) || Global_25279) || func_219()) || func_51(8, -1)) || func_216()) || func_214()) || func_218()) || func_217()) || func_215())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_213()
{
	return Global_92994.f_1;
}

int func_214()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 13);
	}
	return 0;
}

int func_215()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_216()
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

bool func_217()
{
	return Global_93007.f_322 > 0;
}

bool func_218()
{
	return Global_93007.f_321 > 0;
}

var func_219()
{
	return Global_1312854;
}

int func_220()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

int func_221()
{
	func_49();
	if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_222(int iParam0)
{
	return func_202(func_203(), iParam0);
}

int func_223(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_224(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_105220.f_7659.f_919[iParam0];
}

bool func_225(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_1, iVar0);
	}
	return bVar1;
}

int func_226()
{
	var uVar0;
	
	if (Global_25427)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(uVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_227()
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

int func_228(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_87085[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_83852)
	{
		if (Global_83852[iVar0 /*5*/] != -1)
		{
			if (Global_71247.f_109[Global_83852[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_229()
{
	if (unk_0x2A488C176D52CCA5(Local_52, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_301 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_52, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_301 = 2;
	}
}

void func_230()
{
	if (unk_0x724D816EA203A79E(iLocal_76) && !unk_0x1D403DFADBC2DE3C(iLocal_76, 0))
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_76, 0);
		unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_76));
		func_242(&iLocal_76, 1, 0, 1);
	}
	if (unk_0x724D816EA203A79E(iLocal_75) && !unk_0x1D403DFADBC2DE3C(iLocal_75, 0))
	{
		unk_0x2E9860A2B72187F5(iLocal_75, 310, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_75, 0);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_64))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_64);
	}
	func_61(&uLocal_67);
	if (unk_0x2DA8CA50A72528FB(uLocal_65))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_65);
	}
	if (unk_0x144E80F5C46A6B75("RE_CAR_STEAL_SCENE"))
	{
		if (func_161(iLocal_77))
		{
			unk_0x38E412DB4A45B900(iLocal_77, 0);
		}
		unk_0xC1300D0F3A74E20B("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_301 == 2)
	{
		unk_0xDC5D58521808C640(joaat("rocoto"));
	}
	else
	{
		unk_0xDC5D58521808C640(joaat("peyote"));
	}
	func_16(&iLocal_77);
	if (func_161(iLocal_80))
	{
		unk_0xE82050D41B744FF3(iLocal_80, 1);
	}
	unk_0xAF0732277B825027(0);
	unk_0xDF53A66AEE1401AA(1f);
	func_145(39, 0);
	func_145(40, 0);
	func_145(41, 0);
	func_145(42, 0);
	func_145(43, 0);
	func_145(44, 0);
	func_231(-1);
	func_63(&uLocal_330, 0, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_231(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_180())
	{
		func_235(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_105211 = unk_0x105601648511CC64();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_105209, 1), 64);
		if (func_132(Global_105209) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_105208, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_105206, (unk_0x105601648511CC64() - Global_105207), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105216, 0) && Global_105220.f_24966.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_105216, 0);
	}
	func_232(&Global_25336);
	Global_105210 = 0;
	func_186(-1);
}

void func_232(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35867)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35866 = 0;
	Global_35868 = 0;
	Global_35905 = 15;
	Global_55964 = 0;
	Global_55965 = 0;
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_234(int iParam0)
{
	Global_36456 = (unk_0x105601648511CC64() + iParam0);
}

void func_235(int iParam0)
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_203();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_199(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)
{
	Global_105220.f_24966.f_43[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_201(*uParam0);
	iVar2 = func_198(*uParam0);
	iVar3 = func_197(*uParam0);
	iVar4 = func_196(*uParam0);
	iVar5 = func_195(*uParam0);
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
	iVar6 = func_194(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_194(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_209(uParam0, iParam1);
	func_208(uParam0, iParam2);
	func_207(uParam0, iParam3);
	func_205(uParam0, iParam5);
	func_206(uParam0, iParam4);
	func_204(uParam0, iParam6);
}

int func_241(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_242(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*uParam0))
		{
			unk_0xB71D41C0310C93DE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*uParam0);
			}
			unk_0x22321800954A532E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*uParam0, 0);
			}
		}
		unk_0x02537C8C1BEEB477(uParam0);
	}
}


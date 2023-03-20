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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
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
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	char* sLocal_82 = NULL;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	char* sLocal_85 = NULL;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	float fLocal_118 = 0f;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	struct<10> Local_121[16];
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	char* sLocal_286 = NULL;
	char* sLocal_287 = NULL;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	char* sLocal_290 = NULL;
	char* sLocal_291 = NULL;
	char* sLocal_292 = NULL;
	char[] cLocal_293[8] = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_325 = { 0, 0, 0 } ;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 1000;
	var uLocal_339 = 1000;
	var uLocal_340 = 0;
	bool bLocal_341 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_55 = 10f;
	fLocal_56 = 7f;
	iLocal_57 = 1;
	sLocal_83 = "random@car_thief@waving_ig_1";
	fLocal_118 = 1f;
	iLocal_298 = 786603;
	iLocal_299 = 786469;
	sLocal_306 = "car_returned_peyote";
	sLocal_307 = "girl_car_returned";
	sLocal_308 = "player_car_returned";
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_54 = ScriptParam_0.f_17[0];
	if (unk_0xD63E63DFACCEB80E(11))
	{
		func_220();
	}
	func_219();
	if (iLocal_300 == 2)
	{
		if (func_218(34))
		{
			unk_0xE60DEFFB2A853900();
		}
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x75766A2EF9F81DB3(unk_0x9F92518438215DD0()))
			{
				Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
				if (Var0.f_2 > 23f || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0xE60DEFFB2A853900();
				}
			}
		}
	}
	if (func_177(Local_51, 17, iLocal_300, 0, 0))
	{
		func_174(-1);
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_173();
		func_172(uLocal_62, &uLocal_65);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x4E685BBAA467115C(unk_0xCFC72E446B0B3AD7());
		}
		func_171();
		if (!func_170())
		{
			if (func_169())
			{
				func_220();
			}
			if (unk_0xB819D1DD7DA58F08())
			{
				switch (iLocal_47)
				{
					case 0:
						if (func_152())
						{
							unk_0xDF569D00AB746851(0);
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x3E0478C40AB5B38D(iLocal_75))
						{
							if (((!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !unk_0x3E0478C40AB5B38D(iLocal_74)) && func_151(iLocal_76)) && !func_150(0))
							{
								if (func_149())
								{
									if (func_151(iLocal_79))
									{
										unk_0x5C7436C87A3920CE(iLocal_79, 0);
									}
									func_140(1);
									unk_0xB1E35D138037D248(0.1f);
									func_135(39, 1);
									func_135(40, 1);
									func_135(41, 1);
									func_135(42, 1);
									func_135(43, 1);
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else
							{
								if (!unk_0x3E0478C40AB5B38D(iLocal_74))
								{
									unk_0x722E6B3A5162A6BB(iLocal_74, unk_0x9F92518438215DD0(), 150f, -1, 0, 0);
									unk_0xE8105B7E3908547D(iLocal_74, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_220();
							}
						}
						else
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_74) && func_151(iLocal_76))
							{
								unk_0xAFFE01EF7078CAD9(iLocal_74, iLocal_76, 20f, iLocal_298);
								unk_0xE8105B7E3908547D(iLocal_74, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_103(0);
						}
						break;
				}
			}
			else
			{
				func_220();
			}
		}
		else
		{
			if (unk_0x3E0478C40AB5B38D(iLocal_75))
			{
				if (Local_121[2 /*10*/].f_7)
				{
					func_102(&Local_121, 2);
				}
			}
			unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
			func_94();
			if (func_151(iLocal_76) && !func_93())
			{
				if (func_91())
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_74))
					{
						switch (iLocal_48)
						{
							case 0:
								if (!unk_0x3E0478C40AB5B38D(iLocal_75))
								{
									if (unk_0x44E080690DA76A2A(iLocal_75, iLocal_76, 0))
									{
										if (iLocal_300 == 2)
										{
											unk_0x512E0C109ACECCA1(iLocal_75, 1);
											unk_0x512E0C109ACECCA1(iLocal_76, 1);
											unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
											unk_0x7FC0EEAECC1615C3(0, iLocal_76, unk_0x9F92518438215DD0(), 8, 30f, iLocal_299, 200f, 10f, 0);
											unk_0x3179CCC77CBAB31F(uLocal_77);
											unk_0xC7EBE3C9AC83FAAA(iLocal_75, uLocal_77);
											unk_0xCD02E3C29B8253A6(&uLocal_77);
										}
										else
										{
											unk_0x512E0C109ACECCA1(iLocal_75, 1);
											unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
											unk_0xF89257C590FF140F(0, iLocal_76, 30, 1000);
											unk_0x7FC0EEAECC1615C3(0, iLocal_76, unk_0x9F92518438215DD0(), 8, 40f, iLocal_299, 200f, 10f, 1);
											unk_0x3179CCC77CBAB31F(uLocal_77);
											unk_0xC7EBE3C9AC83FAAA(iLocal_75, uLocal_77);
											unk_0xCD02E3C29B8253A6(&uLocal_77);
										}
										Local_316 = { unk_0x038249BAB926B732(iLocal_76, unk_0xB96C39A95065BDE2(iLocal_76, "wheel_lr")) };
										Local_319 = { unk_0xA9C270DECAAAE361(iLocal_76, Local_316) };
										unk_0xACCC0049A47E21C3("scr_wheel_burnout", iLocal_76, Local_319 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_322 = { unk_0x038249BAB926B732(iLocal_76, unk_0xB96C39A95065BDE2(iLocal_76, "wheel_rr")) };
										Local_325 = { unk_0xA9C270DECAAAE361(iLocal_76, Local_322) };
										unk_0xACCC0049A47E21C3("scr_wheel_burnout", iLocal_76, Local_325 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0x2E6E8D325977B3EC(uLocal_63))
										{
											uLocal_63 = func_89(iLocal_76, 1, 0);
										}
										unk_0xA65F8C84413BA46B(2);
										iLocal_48 = 1;
									}
									else if (unk_0xE99AF5B1B3F0BB7C(iLocal_76, unk_0x9F92518438215DD0(), 1))
									{
										if (!unk_0x3E0478C40AB5B38D(iLocal_75))
										{
											unk_0x722E6B3A5162A6BB(iLocal_75, unk_0x9F92518438215DD0(), 150f, -1, 0, 0);
											unk_0xE8105B7E3908547D(iLocal_75, 1);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_220();
									}
								}
								else
								{
									unk_0xAFFE01EF7078CAD9(iLocal_74, iLocal_76, 20f, iLocal_298);
									unk_0xE8105B7E3908547D(iLocal_74, 1);
									unk_0x4EDE34FBADD967A6(0);
									func_103(0);
								}
								break;
							
							case 1:
								if (func_151(iLocal_76))
								{
									if (iLocal_300 == 1)
									{
										if (unk_0x83666F9FB8FEBD4B() < 5000)
										{
											if (unk_0x83666F9FB8FEBD4B() > 2000)
											{
												fLocal_118 = (fLocal_118 + 0.4f);
											}
											else
											{
												fLocal_118 = (fLocal_118 + 0.2f);
											}
											if (fLocal_118 > 30f)
											{
												fLocal_118 = 30f;
											}
											unk_0xBF3459C0ACC7B82F(iLocal_76, fLocal_118);
											iVar3 = unk_0x86ED1EA56B0ED915(unk_0x77009B1C011405A9(iLocal_76, 1), 5f, 0, 4);
											if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
											{
												if (func_151(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
												{
													if (unk_0x30281E710B12FB9F(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), iLocal_76))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_151(iVar3))
												{
													if (iVar3 != iLocal_76)
													{
														if (unk_0x30281E710B12FB9F(iVar3, iLocal_76))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x5252DDFA0FA75C54(iLocal_76) < 700f)
									{
										func_220();
									}
								}
								func_66();
								if ((((((func_65() || func_64()) || unk_0xB602FFF24CBFD2C5(iLocal_76)) || unk_0xED6198B6F71F1E6F(iLocal_76, 1, 5000)) || unk_0x0FC809E10EF0EAC3(iLocal_76)) || unk_0x3E0478C40AB5B38D(iLocal_75)) || !unk_0x44E080690DA76A2A(iLocal_75, iLocal_76, 0))
								{
									if (unk_0x370603716EC2D420("RE_CAR_STEAL_SCENE"))
									{
										if (func_151(iLocal_76))
										{
											unk_0xC932874B6133A2D2(iLocal_76, 0);
										}
										unk_0x6041FBFC1EE8196A("RE_CAR_STEAL_SCENE");
									}
									if (unk_0x2E6E8D325977B3EC(uLocal_63))
									{
										unk_0x0451B5D93A4BDAA0(&uLocal_63);
									}
									func_63();
									if (unk_0x2E6E8D325977B3EC(uLocal_62))
									{
										unk_0x0451B5D93A4BDAA0(&uLocal_62);
									}
									unk_0x87659527DF5C44B5(iLocal_74);
									unk_0xEF5DFB41E5585C16(iLocal_76, 50f, 5, 0);
									uLocal_64 = func_89(iLocal_76, 0, 0);
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_76, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1));
									fLocal_106 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_76, 1), unk_0x77009B1C011405A9(iLocal_74, 1));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_74, 1));
									func_61(&uLocal_329, 0, 0);
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								if (func_151(iLocal_76))
								{
									if (unk_0x5252DDFA0FA75C54(iLocal_76) < 700f)
									{
										func_220();
									}
								}
								if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
								{
									func_220();
								}
								if (!unk_0x0BA451447C3B1A8D(iLocal_75))
								{
									if (!unk_0x44E080690DA76A2A(iLocal_75, iLocal_76, 0))
									{
										func_60(iLocal_75, &uLocal_66, -1, 0, 0, 0, -1082130432, 0);
									}
								}
								else
								{
									func_59(&uLocal_66);
								}
								if (!unk_0x3E0478C40AB5B38D(iLocal_75))
								{
									if (!unk_0x5D1AEC61B1517F38(iLocal_75, unk_0x9F92518438215DD0()))
									{
										unk_0xF78316EFCA911012(iLocal_75, unk_0x9F92518438215DD0(), 0, 16);
										unk_0x0880E86251A44B7F(unk_0xB6A50C909A8FABC3(iLocal_75));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_76, 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > (fLocal_108 + 220f) || unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_76, 1), unk_0x77009B1C011405A9(iLocal_74, 1)) > (fLocal_106 + 220f)) || unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_74, 1)) > (fLocal_107 + 220f))
								{
									if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_76, 0))
									{
										func_103(0);
									}
									else
									{
										func_220();
									}
								}
								if (unk_0x2E6E8D325977B3EC(uLocal_64))
								{
									if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_76, 0))
									{
										unk_0x0451B5D93A4BDAA0(&uLocal_64);
										uLocal_62 = func_55(iLocal_74, 0, 0);
										func_54(&uLocal_65);
										func_61(&uLocal_329, 0, 0);
										if (!iLocal_59)
										{
											if (iLocal_300 == 1)
											{
												Local_92 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_60)
											{
												Local_92 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												Local_92 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!unk_0xE298336AB6E66F7E(Local_92, 2f) && !unk_0x0FF9FE2CB115CFB9(iLocal_74))
											{
												unk_0xFA51DC22F6E34F6E(iLocal_74, Local_92, 1, 0, 0, 1);
												unk_0x03D97EDECF2E1859(iLocal_74, fLocal_105);
												iLocal_59 = 1;
											}
										}
										iLocal_49 = 3;
										iLocal_303 = unk_0x17103F66FBB44C3C();
									}
									else if (unk_0x5093D6F9140AD109(iLocal_76, iLocal_74, 20f, 20f, 7f, 0, 1, 0))
									{
										func_53();
										if (func_52())
										{
											if (unk_0x8C612717241D72F3(iLocal_74, iLocal_76, -1, 0, 0))
											{
												if (!bLocal_295)
												{
													if (func_42(&Local_121, cLocal_293, sLocal_289, 4, 0, 0, 0))
													{
													}
												}
												unk_0xAFFE01EF7078CAD9(iLocal_74, iLocal_76, 35f, iLocal_298);
												unk_0xE8105B7E3908547D(iLocal_74, 1);
												func_103(1);
											}
										}
									}
								}
								else if (unk_0x2E6E8D325977B3EC(uLocal_62))
								{
									if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_76, 0))
									{
										if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_74, fLocal_55, fLocal_55, fLocal_55, 0, 1, 0))
										{
											if (func_41(1, 0, 1))
											{
												unk_0x0451B5D93A4BDAA0(&uLocal_62);
												if (iLocal_300 == 1)
												{
													if (func_40(unk_0xE691E4EA6B4440C6(iLocal_76), 336f, 90f))
													{
														sLocal_305 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_305 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_305 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0xDA293E5084610B09(sLocal_305);
												iLocal_49 = 4;
												iLocal_48 = 3;
											}
										}
										else
										{
											func_38(unk_0x77009B1C011405A9(iLocal_74, 1), &fLocal_55, &fLocal_56);
										}
									}
									else
									{
										unk_0x0451B5D93A4BDAA0(&uLocal_62);
										uLocal_64 = func_89(iLocal_76, 0, 0);
										iLocal_49 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_300 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_74))
										{
											unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
										}
										func_103(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_74))
									{
										unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
									}
									func_103(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x3E0478C40AB5B38D(iLocal_75))
						{
							if (unk_0x44E080690DA76A2A(iLocal_75, iLocal_76, 0))
							{
								unk_0x7FC0EEAECC1615C3(iLocal_75, iLocal_76, unk_0x9F92518438215DD0(), 8, 50f, iLocal_299, 10f, 10f, 0);
								unk_0xE8105B7E3908547D(iLocal_75, 1);
								unk_0x0880E86251A44B7F(unk_0xB6A50C909A8FABC3(iLocal_75));
							}
							else
							{
								unk_0x722E6B3A5162A6BB(iLocal_75, unk_0x9F92518438215DD0(), 150f, -1, 0, 0);
								unk_0xE8105B7E3908547D(iLocal_75, 1);
								unk_0x0880E86251A44B7F(unk_0xB6A50C909A8FABC3(iLocal_75));
							}
						}
						unk_0x4EDE34FBADD967A6(0);
						func_220();
					}
				}
				else
				{
					if (iLocal_48 == 1)
					{
						if (func_151(iLocal_76))
						{
							unk_0xCD3EBB4EAE50293F(&iLocal_76);
						}
						if (!unk_0x3E0478C40AB5B38D(iLocal_75))
						{
							unk_0x7763EDCBED8A5840(&iLocal_75);
						}
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_74))
					{
						if (unk_0x3C17D9ED0E5F3FCA(iLocal_74, sLocal_82, "agitated_idle_a", 3))
						{
							unk_0xFB869E37B04C158F(iLocal_74, "waiting", sLocal_82, -2f);
						}
						func_1(iLocal_74, "GENERIC_CURSE_HIGH", 24);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
						unk_0xB64A0ADA3D251EDE(0, Local_101, 1f, 20000, 40000f, 1056964608);
						unk_0x18CA21B07F636243(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x3179CCC77CBAB31F(uLocal_77);
						unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
						unk_0xCD02E3C29B8253A6(&uLocal_77);
					}
					func_220();
				}
			}
			else
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_75))
				{
					unk_0x722E6B3A5162A6BB(iLocal_75, unk_0x9F92518438215DD0(), 150f, -1, 0, 0);
					unk_0xE8105B7E3908547D(iLocal_75, 1);
				}
				if (unk_0x746960881FB19A89(iLocal_76))
				{
					unk_0x8063FF52148C1749(iLocal_76, 50f);
				}
				func_220();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0xA3F41D007914F399(iParam0, sParam1, func_2(iParam2), 1);
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
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
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
	func_53();
	if (((!unk_0x3E0478C40AB5B38D(iLocal_74) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && func_151(iLocal_76)) && unk_0x3DA2EED4204CE591(sLocal_305))
	{
		switch (iLocal_50)
		{
			case 0:
				if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
				{
					if (func_41(1, 0, 1))
					{
						if (!unk_0x94E72F17611BCD3C(Global_2263, 11))
						{
							if (!unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
							{
								func_31(1, 1, 1, 0);
								if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
								{
									unk_0x35611EEE7A1FFEDB(1);
									while (!func_30(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), fLocal_56, 1, 1056964608, 0, 1))
									{
										unk_0x10663E41E1571A19();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), fLocal_56, 0, 1056964608, 0, 1);
								}
								unk_0x10663E41E1571A19();
								if (!unk_0x3E0478C40AB5B38D(iLocal_74))
								{
									unk_0x29C0F4A5219281BA(iLocal_74, 0);
								}
								func_28();
								func_23();
								unk_0x10663E41E1571A19();
								iLocal_50 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
				unk_0x66258686DD0DE921(iLocal_76, 0, 0, 0f);
				unk_0x15C12E2DB98B2253(iLocal_76, 0, 1, 1, 1);
				unk_0x10663E41E1571A19();
				if (iLocal_300 == 1)
				{
					if (func_151(iLocal_76))
					{
						if (func_40(unk_0xE691E4EA6B4440C6(iLocal_76), 336f, 90f))
						{
							Local_89 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_104 = 336.6557f;
							Local_86 = { -2252.683f, 4274.16f, 45.0612f };
							Local_92 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_105 = 272.8688f;
							Local_112 = { -2254.588f, 4277.307f, 45.6133f };
							Local_115 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_89 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_104 = 148.0287f;
							Local_92 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_105 = 179.4774f;
							Local_86 = { -2257.088f, 4268.938f, 44.6456f };
							Local_112 = { -2255.775f, 4274.144f, 46.0666f };
							Local_115 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var4 = { -2269.34f, 4279.89f, 45.47f };
					fVar7 = 53.23f;
					fLocal_111 = 50f;
					unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Local_86, 1, 0, 0, 1);
					unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
					unk_0xFA51DC22F6E34F6E(iLocal_74, Local_92, 1, 0, 0, 1);
					unk_0x03D97EDECF2E1859(iLocal_76, fLocal_104);
					unk_0xFA51DC22F6E34F6E(iLocal_76, Local_89, 1, 0, 0, 1);
				}
				else
				{
					if (!func_40(unk_0xE691E4EA6B4440C6(iLocal_76), 64.6764f, 90f))
					{
						Local_112 = { -478.7095f, -2163.598f, 10.3091f };
						Local_115 = { -7.4391f, 0.0006f, 35.6865f };
						Local_89 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_104 = 243.308f;
						fLocal_111 = 22f;
					}
					else
					{
						Local_112 = { -488.0143f, -2149.419f, 9.9817f };
						Local_115 = { -11.7475f, 0.0006f, -145.0045f };
						Local_89 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_104 = 64.6764f;
						fLocal_111 = 36.9289f;
					}
					Var4 = { -486.92f, -2169.01f, 8.89f };
					fVar7 = 63.1f;
					unk_0xFA51DC22F6E34F6E(iLocal_76, Local_89, 1, 0, 0, 1);
					unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
					unk_0x03D97EDECF2E1859(iLocal_76, fLocal_104);
				}
				unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 0, 0);
				if (func_151(iLocal_76))
				{
					unk_0x77C765087051EDD6(iLocal_76);
					if (unk_0x746960881FB19A89(iLocal_75))
					{
						if (unk_0x44E080690DA76A2A(iLocal_75, iLocal_76, 0))
						{
							unk_0x7763EDCBED8A5840(&iLocal_75);
						}
					}
				}
				Local_309 = { 0f, 0f, 0f };
				Local_312 = { 0f, 0f, 0f };
				uLocal_301 = unk_0x8E83718430E22797(Local_309, Local_312, 2);
				unk_0x2DDE6F600C12637C(uLocal_301, iLocal_76, unk_0xB96C39A95065BDE2(iLocal_76, sVar3));
				unk_0xD12D66B95AE958B2(uLocal_301, Local_309, Local_312, 2);
				unk_0x6C4954C76B25F972(iLocal_74, uLocal_301, sLocal_305, sLocal_307, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uLocal_301, sLocal_305, sLocal_308, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_78 = unk_0x7B03062EABD76E3E("DEFAULT_ANIMATED_CAMERA", Local_112, Local_115, fLocal_111, 0, 2);
				unk_0x7293A816EC05CF5F(uLocal_78, uLocal_301, "car_returned_cam", sLocal_305);
				unk_0x70605753AED89021(iLocal_76, sLocal_306, sLocal_305, 1000f, 0, 0, 0, 0, 262144);
				Local_309 = { unk_0x77009B1C011405A9(iLocal_76, 1) };
				Local_312 = { unk_0x045015AED79BD50E(iLocal_76, 2) };
				if (func_151(iLocal_79))
				{
					if (func_22(iLocal_79, Local_89, 1) <= 11f)
					{
						unk_0xFA51DC22F6E34F6E(iLocal_79, Var4, 1, 0, 0, 1);
						unk_0x03D97EDECF2E1859(iLocal_79, fVar7);
						unk_0x77C765087051EDD6(iLocal_79);
						unk_0x336AE92FD68DEF98(iLocal_79, 1, 0);
					}
				}
				unk_0xFC90BEDEE248C76D(Local_89, 10f, 1, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_300 == 2)
				{
					unk_0xE9767715F4B83DEE(joaat("rocoto"), 15);
				}
				else
				{
					unk_0xE9767715F4B83DEE(joaat("peyote"), 15);
				}
				unk_0x35875163F311FBEF(Local_89, 15f);
				unk_0x45826D2663F7FD9C(uLocal_78, 1);
				unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
				iLocal_50 = 3;
				unk_0x8A63A305A0B03AF2(1f);
				break;
			
			case 3:
				unk_0x10663E41E1571A19();
				if (func_19())
				{
					iLocal_50 = 4;
				}
				if (iLocal_300 == 1)
				{
					if (unk_0x83666F9FB8FEBD4B() > 1500 && !bLocal_341)
					{
						if (func_42(&Local_121, cLocal_293, sLocal_120, 4, 0, 0, 0))
						{
							iLocal_50 = 4;
						}
					}
				}
				else if (unk_0xAA446425C3A969F9(uLocal_301) && !bLocal_341)
				{
					if (unk_0xF9F2ADAEAB471E70(uLocal_301) >= 0.2f)
					{
						if (func_42(&Local_121, cLocal_293, sLocal_120, 4, 0, 0, 0))
						{
							iLocal_61 = 0;
							iLocal_50 = 4;
						}
					}
				}
				unk_0x8A63A305A0B03AF2(1f);
				break;
			
			case 4:
				unk_0x10663E41E1571A19();
				if (iLocal_300 == 2)
				{
					if (!func_18())
					{
						if (iLocal_61 == 0)
						{
							if (func_42(&Local_121, cLocal_293, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_61 = 1;
							}
						}
					}
				}
				unk_0x8A63A305A0B03AF2(1f);
				if (iLocal_300 == 1)
				{
					if (unk_0xAA446425C3A969F9(uLocal_301))
					{
						if (iLocal_315 == 0)
						{
							if (unk_0xF9F2ADAEAB471E70(uLocal_301) >= 0.83f)
							{
								unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
								unk_0x7CF15DD8B3815A0D(unk_0x9F92518438215DD0(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, unk_0xF9F2ADAEAB471E70(uLocal_301), 0, 0, 0);
								unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 1, 0);
								iLocal_315 = 1;
							}
						}
						if (!unk_0x3E0478C40AB5B38D(iLocal_74))
						{
							if (unk_0xF9F2ADAEAB471E70(uLocal_301) >= 0.83f)
							{
								if (unk_0x3C17D9ED0E5F3FCA(iLocal_74, sLocal_305, sLocal_307, 2))
								{
									unk_0xFCD8CBB0DC357C30(iLocal_74, -1000f, 0);
									if (!unk_0x827151D7B70CB853(iLocal_74, 0))
									{
										if (func_151(iLocal_76))
										{
											unk_0x4DB6897DB04DE279(iLocal_74, iLocal_76, -1);
											unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
										}
									}
									unk_0xF0875A1DC909B469(iLocal_74, 1, 0);
								}
								else
								{
									unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0xAA446425C3A969F9(uLocal_301))
				{
					if (iLocal_315 == 0)
					{
						if (unk_0xF9F2ADAEAB471E70(uLocal_301) >= 0.86f)
						{
							unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
							unk_0x7CF15DD8B3815A0D(unk_0x9F92518438215DD0(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, unk_0xF9F2ADAEAB471E70(uLocal_301), 0, 0, 0);
							unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 1, 0);
							iLocal_315 = 1;
						}
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_74))
					{
						if (unk_0xF9F2ADAEAB471E70(uLocal_301) > 0.847f)
						{
							if (unk_0x3C17D9ED0E5F3FCA(iLocal_74, sLocal_305, sLocal_307, 2))
							{
								unk_0xFCD8CBB0DC357C30(iLocal_74, -1000f, 0);
								if (!unk_0x827151D7B70CB853(iLocal_74, 0))
								{
									if (func_151(iLocal_76))
									{
										unk_0x4DB6897DB04DE279(iLocal_74, iLocal_76, -1);
										unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
									}
								}
								unk_0xF0875A1DC909B469(iLocal_74, 1, 0);
							}
							else
							{
								unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
							}
						}
					}
				}
				if (((unk_0xAA446425C3A969F9(uLocal_301) && unk_0xF9F2ADAEAB471E70(uLocal_301) >= 0.99f) || !unk_0xAA446425C3A969F9(uLocal_301)) || func_19())
				{
					if (!unk_0x0BA451447C3B1A8D(iLocal_76) && unk_0x3C17D9ED0E5F3FCA(iLocal_76, sLocal_305, sLocal_306, 3))
					{
						unk_0x4A0F05AE369A5C44(iLocal_76, sLocal_305, sLocal_306, 1f);
					}
					if (unk_0xAA446425C3A969F9(uLocal_301))
					{
						unk_0x47E1E12B5E2888D4(uLocal_301, 1f);
					}
					if (bLocal_341)
					{
						Var0 = { unk_0x912936BEF22F435D(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						unk_0x7844FB9DB5F9220C(Var0, &(Var0.f_2));
						unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0xC8C8823F9304528E(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), Var0.f_2);
						unk_0x203B2685C1715644(0, 1065353216);
						unk_0x5EF916489F3787FC(0);
					}
					unk_0xC9FC7EC443B3E63E(unk_0x9F92518438215DD0(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x827151D7B70CB853(iLocal_74, 0))
					{
						if (func_151(iLocal_76))
						{
							unk_0x4DB6897DB04DE279(iLocal_74, iLocal_76, -1);
							unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
						}
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_74))
					{
						if (unk_0x827151D7B70CB853(iLocal_74, 0))
						{
							if (func_151(iLocal_76))
							{
								unk_0x66258686DD0DE921(iLocal_76, 0, 0, 0f);
								unk_0x15C12E2DB98B2253(iLocal_76, 0, 1, 1, 1);
								iLocal_304 = unk_0x17103F66FBB44C3C();
								iLocal_50 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x10663E41E1571A19();
				if ((unk_0x17103F66FBB44C3C() - iLocal_304) > 100)
				{
					if (func_3(iLocal_74) && func_151(iLocal_76))
					{
						unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
						unk_0xF89257C590FF140F(0, iLocal_76, 9, 1000);
						unk_0xAFFE01EF7078CAD9(0, iLocal_76, 25f, iLocal_298);
						unk_0x3179CCC77CBAB31F(uLocal_77);
						unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
						unk_0xCD02E3C29B8253A6(&uLocal_77);
						unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
					}
					func_31(0, 1, 1, 0);
					if (bLocal_341)
					{
						if (unk_0x5329DB72517417AE(uLocal_78))
						{
							unk_0x45826D2663F7FD9C(uLocal_78, 0);
							unk_0x0CF4B2266E47C15F(uLocal_78, 0);
						}
						unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0x203B2685C1715644(0, 1065353216);
						unk_0x5EF916489F3787FC(0);
						func_17(500, 1);
					}
					else
					{
						unk_0x5561AF15AEF3E06B(0, 0, 3, 0);
						unk_0x45826D2663F7FD9C(uLocal_78, 0);
					}
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
					func_16(&iLocal_76);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_74))
				{
					unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
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
			Global_97358.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97358.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3015;
			switch (iParam1)
			{
				case 1:
					iVar1 = 75;
					break;
				
				case 3:
					iVar1 = 77;
					break;
				
				case 2:
					iVar1 = 76;
					break;
				
				case 4:
					iVar1 = 78;
					break;
				
				case 5:
					iVar1 = 79;
					break;
				
				case 6:
					iVar1 = 80;
					break;
				
				case 7:
					iVar1 = 81;
					break;
			}
			if (iVar1 != 3015)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
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
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312737;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_7(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_15(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_14(unk_0x9F92518438215DD0());
			if (func_13(iVar0) && (!func_12(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_12(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (unk_0x746960881FB19A89(*iParam0))
	{
		unk_0x0BA451447C3B1A8D(*iParam0);
		if (unk_0x34E74FF8690AA4B1(*iParam0) && unk_0xAD2C236C4A4B83C9(*iParam0, 1))
		{
			unk_0x9187463EB4918A4D(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0x2E9CF5C574019636() || unk_0x351E8373AE3D741D())
	{
		if (!unk_0xA0CD269F4B0B4468())
		{
			unk_0xF391B7BD1F131C3F(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x9685D9855970A029())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_300 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (unk_0xA47ACCCE5495BCDB(iVar0))
		{
			unk_0x45826D2663F7FD9C(uLocal_78, 0);
			unk_0xC6EA7B53F52F1DF9(500);
			while (unk_0x351E8373AE3D741D())
			{
				unk_0x10663E41E1571A19();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_341 = true;
			return 1;
		}
	}
	if (unk_0x2E9CF5C574019636())
	{
		if (unk_0xA47ACCCE5495BCDB(iVar0))
		{
			bLocal_341 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x9685D9855970A029())
	{
		if ((unk_0x17103F66FBB44C3C() - Global_27) > iParam0)
		{
			Global_26 = unk_0x17103F66FBB44C3C();
		}
		Global_27 = unk_0x17103F66FBB44C3C();
		if ((unk_0x17103F66FBB44C3C() - Global_26) > iParam0)
		{
			if (func_21())
			{
				Global_26 = unk_0x17103F66FBB44C3C();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0xC8557993A78C1B3E())
	{
		return 0;
	}
	if (unk_0x205C5BF7277043DF(0, 18) || unk_0x205C5BF7277043DF(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

void func_23()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		unk_0xEDB9A377CD8B7F03(&Global_2264, 2);
	}
}

void func_24(int iParam0)
{
	if (Global_14551)
	{
		func_26(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_25())
	{
		Global_14393.f_1 = 3;
	}
}

int func_25()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
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
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_28()
{
	Global_14558 = 0;
	func_29();
}

void func_29()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_37(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_25())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_36(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_37(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_36(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_32(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_32(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_33())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_33()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_38(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) - Param0 };
		fVar4 = unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1);
		if (func_39(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
		fVar4 = unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1);
		if (func_39(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) > 10f)
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

int func_39(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		fVar0 = unk_0xE691E4EA6B4440C6(iParam0);
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

int func_40(float fParam0, float fParam1, float fParam2)
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

int func_41(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

bool func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_51(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xC318E8D9E0AA1394(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_50();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_49(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_48();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_47();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
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
				switch (Global_14393.f_1)
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_45();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_44();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_50();
	}
	return 0;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_45()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_47()
{
	if (func_12(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_10();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_50()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_52()
{
	if (unk_0x3E0478C40AB5B38D(iLocal_75))
	{
		return 1;
	}
	else if (func_151(iLocal_76))
	{
		if (!unk_0x5093D6F9140AD109(iLocal_75, iLocal_76, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_53()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_151(iLocal_76))
	{
		fVar0 = unk_0x9D878480FA8925BB(iLocal_76);
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
		if (iVar1 && unk_0xCFD57B4713B151E2(iLocal_76))
		{
			sLocal_120 = sLocal_292;
		}
		else if (bVar2)
		{
			sLocal_120 = sLocal_291;
		}
		else
		{
			sLocal_120 = sLocal_290;
		}
	}
}

void func_54(var uParam0)
{
	*uParam0 = -99;
}

var func_55(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_56(iParam0, bParam1, 145);
}

var func_56(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_57(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_58(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_58(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_58(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
		bVar0 = true;
	}
	if (unk_0x2E6E8D325977B3EC(uParam0->f_1))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x746960881FB19A89(uParam0->f_7))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_7))
		{
			if (unk_0x1E340411F75B44FE(uParam0->f_7))
			{
				unk_0x27C3EE559D11736B(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_60(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2563F6EECD8726D3();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x1E340411F75B44FE(iParam0))
		{
			unk_0x27C3EE559D11736B(iParam0, 1);
			uParam1->f_7 = iParam0;
			unk_0x133C33898A6B7C79(iParam0, iParam2);
			unk_0x6B5627EADD89528C(iParam0, fParam6);
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				unk_0x15DE80E4F3BF69A9(*uParam1, 7);
			}
		}
		unk_0x033F95F6DD2BC600(iParam0, iParam4);
		unk_0x9918D2663AD80E71(iParam0, iParam5);
		*uParam1 = unk_0xD7BCCE63E1CFE522(iParam0);
		if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 2))
		{
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				if (!unk_0x9E9AFDBF482248F6(iParam7))
				{
					unk_0x6398AE6DC472AD55("MCUSTBLIP");
					unk_0x7FAFF3E791AF486A(iParam7);
					unk_0x6421BFEE42CFEB56(*uParam1);
				}
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			uParam1->f_1 = unk_0xDB36DF958B95DEBD(iParam0);
			if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 3))
			{
				if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
				{
					unk_0x15DE80E4F3BF69A9(uParam1->f_1, 7);
					unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_62(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_62(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

bool func_62(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_63()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_75))
	{
		unk_0x64277E0EB39C1162(iLocal_75, 2, 0);
		unk_0x64277E0EB39C1162(iLocal_75, 6, 0);
		unk_0x64277E0EB39C1162(iLocal_75, 3, 1);
		unk_0x64277E0EB39C1162(iLocal_75, 1, 0);
		unk_0xF78316EFCA911012(iLocal_75, unk_0x9F92518438215DD0(), 0, 16);
		unk_0x4A1AC49BA4A747F7(iLocal_75, 0);
		unk_0x0880E86251A44B7F(unk_0xB6A50C909A8FABC3(iLocal_75));
	}
	else
	{
		unk_0x0880E86251A44B7F(unk_0xB6A50C909A8FABC3(iLocal_75));
	}
	if (func_151(iLocal_76))
	{
		unk_0x993B4D0D3CD44124(iLocal_76, 1);
	}
}

int func_64()
{
	if (func_151(iLocal_76))
	{
		if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_76, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_80)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_75))
				{
					if (!iLocal_297)
					{
						if (!unk_0x9663302DF2957F36(iLocal_76))
						{
							unk_0x46374ECB1C118DE5(iLocal_75, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_297 = 1;
						}
					}
					if (unk_0x17103F66FBB44C3C() > iLocal_302 + 7000)
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_76, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_42(&Local_121, cLocal_293, sLocal_288, 4, 0, 0, 0))
							{
								iLocal_302 = unk_0x17103F66FBB44C3C();
							}
						}
					}
					unk_0x87659527DF5C44B5(iLocal_76);
					unk_0xCAC368BCF4CD9FE8(iLocal_76);
					iLocal_80 = 0;
				}
			}
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_76, unk_0x9F92518438215DD0(), 1))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_75))
				{
					func_42(&Local_121, cLocal_293, sLocal_288, 4, 0, 0, 0);
				}
				iLocal_81++;
				iLocal_80 = 1;
			}
			if (iLocal_81 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_297 = 0;
			iLocal_80 = 0;
		}
	}
	return 0;
}

int func_65()
{
	if (func_151(iLocal_76))
	{
		if (((unk_0xD8E4239907299552(iLocal_76, 0, 0) || unk_0xD8E4239907299552(iLocal_76, 1, 0)) || unk_0xD8E4239907299552(iLocal_76, 4, 0)) || unk_0xD8E4239907299552(iLocal_76, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	if (func_151(iLocal_76) && unk_0x2E6E8D325977B3EC(uLocal_63))
	{
		func_67(&uLocal_329, iLocal_76, 0, 0, 1, 1, 1);
	}
}

void func_67(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_68(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_69(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		func_61(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_70(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_62(iVar0))
	{
		func_88();
	}
	if (func_87(uParam1) && unk_0xB3CC729BBAA21637(uParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(uParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
		{
			if (func_82(uParam0, bParam7, bParam9, 0))
			{
				func_78(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_75(iVar0))
				{
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_62(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
								{
									func_73(1);
								}
							}
						}
					}
				}
			}
			else if (func_75(iVar0))
			{
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_62(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_73(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_62(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
				{
					func_61(uParam0, iVar0, 1);
				}
			}
			if (!func_82(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_72(uParam0))
				{
					func_71(uParam0);
				}
			}
		}
	}
	else
	{
		func_61(uParam0, iVar0, 0);
	}
}

void func_71(var uParam0)
{
	if (func_87(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_72(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_62(sParam0)) || func_62("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_73(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_73(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_73(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_76(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		return 0;
	}
	if (func_27(0))
	{
		return 0;
	}
	if (func_77())
	{
		return 0;
	}
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

void func_78(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(uParam1))
	{
		func_61(uParam0, 0, 0);
	}
	if (func_81(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			uVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(uVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_79())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_79()
{
	return func_80(unk_0xCFC72E446B0B3AD7());
}

int func_80(var uParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_81(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_82(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_72(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_85(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (func_84(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_72(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_76(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_88();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_83(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_90(iParam0, bParam1, 0);
}

int func_90(var uParam0, bool bParam1, bool bParam2)
{
	return func_57(uParam0, !bParam1, bParam2);
}

int func_91()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_300 == 1)
	{
		fVar0 = 220f;
	}
	if (func_151(iLocal_76))
	{
		func_92(uLocal_63, iLocal_76, fVar0, 1061158912, 0);
		if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_76, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0xC7FF9739199F83C9(iLocal_76))
		{
			return 1;
		}
	}
	return 0;
}

void func_92(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		if ((unk_0x746960881FB19A89(iParam1) && unk_0x746960881FB19A89(unk_0x9F92518438215DD0())) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x2B1914308D0376C8(iParam1))
			{
				if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam1), 0))
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam1, 1), 1);
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
						unk_0xA0BFA3F6C43DF44B(uParam0, 1);
						unk_0xFBF7E9E330FE936E(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA0BFA3F6C43DF44B(uParam0, 0);
						unk_0xFBF7E9E330FE936E(uParam0, 255);
					}
				}
			}
			else if (unk_0x4E178F5D4155391A(iParam1))
			{
				if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam1)))
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam1, 1), 1);
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
						unk_0xA0BFA3F6C43DF44B(uParam0, 1);
						unk_0xFBF7E9E330FE936E(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA0BFA3F6C43DF44B(uParam0, 0);
						unk_0xFBF7E9E330FE936E(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_93()
{
	if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_76, 0) && unk_0x37A3C3737EB1B394(iLocal_76))
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_74) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		switch (iLocal_49)
		{
			case 0:
				iLocal_57 = iLocal_57;
				if (!unk_0x827151D7B70CB853(iLocal_74, 0))
				{
					if (iLocal_300 == 1)
					{
						if (func_101())
						{
							iLocal_49 = 1;
						}
					}
					else if (!unk_0xBD280C076BC69C97(iLocal_74) && !unk_0x11579615465D25B4(iLocal_74))
					{
						unk_0x402A96371F34E6D8(iLocal_74, unk_0x9F92518438215DD0(), -1, 0, 2);
						if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0x70A8B8D6374F080F(iLocal_74, 345f, 0);
							iLocal_49 = 1;
						}
						else
						{
							unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
							unk_0x7CF15DD8B3815A0D(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x7CF15DD8B3815A0D(0, sLocal_83, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x7CF15DD8B3815A0D(0, sLocal_83, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x3179CCC77CBAB31F(uLocal_77);
							unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
							unk_0xCD02E3C29B8253A6(&uLocal_77);
							iLocal_303 = unk_0x17103F66FBB44C3C();
							iLocal_49 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_300 == 1)
				{
					unk_0x402A96371F34E6D8(iLocal_74, unk_0x9F92518438215DD0(), -1, 0, 2);
					if (unk_0xE962BD784DD0E442(iLocal_74, 242628503) != 1)
					{
						unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
						unk_0x7CF15DD8B3815A0D(0, sLocal_83, sLocal_85, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x3179CCC77CBAB31F(uLocal_77);
						unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
						unk_0xCD02E3C29B8253A6(&uLocal_77);
						iLocal_49 = 2;
					}
				}
				else if (unk_0x53C8F92CF78772BF(iLocal_74, unk_0x9F92518438215DD0(), 60f))
				{
					if (unk_0xE962BD784DD0E442(iLocal_74, 242628503) != 1)
					{
						unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
						unk_0x7CF15DD8B3815A0D(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_60 == 0)
						{
							unk_0x7CF15DD8B3815A0D(0, sLocal_83, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x3179CCC77CBAB31F(uLocal_77);
						unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
						unk_0xCD02E3C29B8253A6(&uLocal_77);
						iLocal_49 = 2;
					}
				}
				if (func_101())
				{
					if (func_100())
					{
					}
				}
				break;
			
			case 2:
				if (func_101())
				{
					if (func_100())
					{
					}
				}
				if (iLocal_300 == 2)
				{
					if (!unk_0x53C8F92CF78772BF(iLocal_74, unk_0x9F92518438215DD0(), 60f) && !func_98(iLocal_74, -875674219))
					{
						unk_0x23F243BF5B07DA90(iLocal_74, unk_0x9F92518438215DD0(), 0);
					}
					if (func_97(iLocal_74, unk_0x9F92518438215DD0(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x17103F66FBB44C3C() - iLocal_303) > 6000)
							{
								func_96();
							}
						}
					}
				}
				if (unk_0xE962BD784DD0E442(iLocal_74, 242628503) != 1 && !func_98(iLocal_74, -875674219))
				{
					if (iLocal_300 == 1)
					{
						Local_92 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x41EEB10CCC2497A8(iLocal_74, Local_92, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0xE962BD784DD0E442(iLocal_74, 242628503) == 7)
							{
								unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
								unk_0xB64A0ADA3D251EDE(0, Local_92, 1f, 20000, fLocal_105, 1056964608);
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								unk_0x3179CCC77CBAB31F(uLocal_77);
								unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
								unk_0xCD02E3C29B8253A6(&uLocal_77);
							}
						}
						else if (!unk_0x3C17D9ED0E5F3FCA(iLocal_74, sLocal_82, "waiting", 3))
						{
							unk_0x7CF15DD8B3815A0D(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_97(iLocal_74, unk_0x9F92518438215DD0(), 1) < 25f)
							{
								func_96();
							}
						}
					}
					else if (!unk_0x3C17D9ED0E5F3FCA(iLocal_74, sLocal_82, "waiting", 3))
					{
						unk_0x7CF15DD8B3815A0D(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xD398F07877741739(iLocal_74, unk_0x9F92518438215DD0()))
				{
					unk_0x402A96371F34E6D8(iLocal_74, unk_0x9F92518438215DD0(), -1, 0, 2);
				}
				if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_74, 40f, 40f, 10f, 0, 1, 0) && !unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_74, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_95())
					{
						if (iLocal_58)
						{
							if (iLocal_300 == 1)
							{
								unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								unk_0x7CF15DD8B3815A0D(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x3179CCC77CBAB31F(uLocal_77);
								unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
								unk_0xCD02E3C29B8253A6(&uLocal_77);
								iLocal_58 = 0;
								iLocal_303 = unk_0x17103F66FBB44C3C();
							}
							else
							{
								unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								unk_0x7CF15DD8B3815A0D(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x3179CCC77CBAB31F(uLocal_77);
								unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
								unk_0xCD02E3C29B8253A6(&uLocal_77);
								iLocal_58 = 0;
								iLocal_303 = unk_0x17103F66FBB44C3C();
							}
						}
						else if (!unk_0x3C17D9ED0E5F3FCA(iLocal_74, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xE962BD784DD0E442(iLocal_74, 242628503) == 7)
							{
								if (!unk_0x53C8F92CF78772BF(iLocal_74, unk_0x9F92518438215DD0(), 45f))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
									unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
									unk_0x3179CCC77CBAB31F(uLocal_77);
									unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
									unk_0xCD02E3C29B8253A6(&uLocal_77);
								}
								else if ((unk_0x17103F66FBB44C3C() - iLocal_303) > 6000)
								{
									iLocal_58 = 1;
								}
							}
						}
						else if (!unk_0x53C8F92CF78772BF(iLocal_74, unk_0x9F92518438215DD0(), 70f))
						{
							unk_0x32D18ECD9E6F9BE2(iLocal_74);
							unk_0xF87DA7F5BA8C7D0F(&uLocal_77);
							unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
							unk_0x3179CCC77CBAB31F(uLocal_77);
							unk_0xC7EBE3C9AC83FAAA(iLocal_74, uLocal_77);
							unk_0xCD02E3C29B8253A6(&uLocal_77);
							iLocal_303 += 4000;
						}
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_75))
					{
						unk_0x722E6B3A5162A6BB(iLocal_75, unk_0x9F92518438215DD0(), 150f, -1, 0, 0);
						unk_0xE8105B7E3908547D(iLocal_75, 1);
						unk_0x995B3705D02B0401(&iLocal_75);
					}
				}
				else
				{
					if (iLocal_300 == 1)
					{
						Local_92 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_60)
					{
						Local_92 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						Local_92 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0x41EEB10CCC2497A8(iLocal_74, Local_92, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0xE962BD784DD0E442(iLocal_74, 2106541073) == 7)
						{
							unk_0xB64A0ADA3D251EDE(iLocal_74, Local_92, 1f, 20000, fLocal_105, 1056964608);
						}
					}
					else if (!unk_0x53C8F92CF78772BF(iLocal_74, unk_0x9F92518438215DD0(), 50f))
					{
						unk_0x23F243BF5B07DA90(iLocal_74, unk_0x9F92518438215DD0(), -1);
					}
					iLocal_58 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_150(1))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_74))
		{
			unk_0x722E6B3A5162A6BB(iLocal_74, unk_0x9F92518438215DD0(), 150f, -1, 0, 0);
			unk_0xE8105B7E3908547D(iLocal_74, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_220();
	}
}

bool func_95()
{
	if (!bLocal_295)
	{
		if (func_42(&Local_121, cLocal_293, sLocal_289, 4, 0, 0, 0))
		{
			bLocal_295 = true;
		}
	}
	return bLocal_295;
}

int func_96()
{
	if (!iLocal_296)
	{
		if (func_42(&Local_121, cLocal_293, sLocal_287, 4, 0, 0, 0))
		{
			iLocal_296 = 1;
		}
	}
	return iLocal_296;
}

float func_97(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(uParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

int func_98(int iParam0, int iParam1)
{
	if (func_99(uParam0))
	{
		if (unk_0xE962BD784DD0E442(uParam0, iParam1) == 1 || unk_0xE962BD784DD0E442(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (func_3(uParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_100()
{
	if (!iLocal_294)
	{
		if (unk_0x83666F9FB8FEBD4B() > 2000)
		{
			if (func_42(&Local_121, cLocal_293, sLocal_286, 4, 0, 0, 0))
			{
				iLocal_294 = 1;
			}
		}
	}
	return iLocal_294;
}

int func_101()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_75) && !unk_0x3E0478C40AB5B38D(iLocal_74))
	{
		if (func_151(iLocal_76))
		{
			if (unk_0x2A2DBEFFFC03A22F(iLocal_75, iLocal_76))
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

void func_102(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_103(bool bParam0)
{
	int iVar0;
	
	if (iLocal_300 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_126(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_126(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_126(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_125(8);
	}
	func_107(17, iLocal_300);
	func_104();
	func_220();
}

void func_104()
{
	func_105();
}

int func_105()
{
	if (func_106(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_106(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_107(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_122(iParam0))
	{
		func_121(iParam0, iParam1);
		if (!func_120(51))
		{
			func_116("RE_REWARD", 1, 0, 4000, 10000, func_119(), 0, 138, 0);
			func_115(51);
		}
		if (func_114(iParam0))
		{
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_113(iParam0, iParam1) != 322)
		{
			func_108(func_113(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_125(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
			{
				func_125(7);
			}
			else
			{
				func_125(1);
			}
		}
	}
}

void func_108(int iParam0, var uParam1, var uParam2)
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
		func_112((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_109();
	}
}

void func_109()
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_111(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_110() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_105();
				}
			}
		}
	}
}

int func_110()
{
	return Global_24444;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

int func_112(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
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

void func_115(int iParam0)
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
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_117(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_117(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
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
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_118();
	}
}

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_119()
{
	func_11();
	switch (Global_97358.f_1729.f_539.f_3213)
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

int func_120(int iParam0)
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
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_121(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
}

int func_122(int iParam0)
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

int func_123()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_124(Var0);
	return uVar16;
}

int func_124(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x398F092142D37E17(&cParam0))
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

void func_125(int iParam0)
{
	Global_97344 = iParam0;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_106(0))
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
		if (unk_0x94E72F17611BCD3C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_97358.f_5944.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_134(iParam1);
		Var0.f_4 = (unk_0x17103F66FBB44C3C() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xF76EE56D3E7DAF1B(&(Var0.f_1), 0);
		Global_97358.f_5944.f_765[Global_97358.f_5944.f_866 /*10*/] = { Var0 };
		Global_97358.f_5944.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_133(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_132(&iVar20);
		iVar21 = func_131(Var10, Global_97358.f_5944.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_129(Global_97358.f_5944.f_765[iVar20 /*10*/]);
			Global_97358.f_5944.f_765[iVar20 /*10*/] = { Var10 };
			func_128(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_127(Var10))
			{
				func_129(Global_97358.f_5944.f_765[iVar20 /*10*/]);
				Global_97358.f_5944.f_765[iVar20 /*10*/] = { Var10 };
				func_128(&Var10);
				return 1;
			}
			else
			{
				if (!func_127(Global_97358.f_5944.f_765[iVar20 /*10*/]))
				{
					Global_97358.f_5944.f_765[iVar20 /*10*/] = { Var10 };
					func_128(&Var10);
					return 1;
				}
				func_128(&Var10);
				return 1;
			}
		}
		else
		{
			func_129(Var10);
			func_128(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_127(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_128(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_129(struct<10> Param0)
{
	if (func_127(Param0))
	{
		func_130(Param0.f_8, 0);
	}
}

void func_130(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97358.f_6869[iParam0] = 1;
	Global_97358.f_6869.f_236[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
}

int func_131(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
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

void func_132(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_866)
	{
		if (func_131(Global_97358.f_5944.f_765[iVar0 /*10*/], Global_97358.f_5944.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_134(iParam1);
	Var0.f_4 = (unk_0x17103F66FBB44C3C() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0xF76EE56D3E7DAF1B(&(Var0.f_1), 0);
	return Var0;
}

int func_134(int iParam0)
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

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_139(iParam0, 2, 1))
		{
			func_138(iParam0, 2, 1);
		}
	}
	else if (func_139(iParam0, 2, 1))
	{
		func_136(iParam0, 2, 1);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_137(iParam0), -1, 0);
			unk_0xF76EE56D3E7DAF1B(&uVar0, iParam1);
			func_6(func_137(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_137(iParam0), -1, 0);
			unk_0xEDB9A377CD8B7F03(&uVar0, iParam1);
			func_6(func_137(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_110() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_9(func_137(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_140(int iParam0)
{
	if (func_143())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_114(Global_97347))
		{
			func_141(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_114(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
		}
		return 1;
	}
	return 0;
}

void func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_74(func_142(iParam0), -1);
					Global_97358.f_28192.f_2++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 1))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_74(func_142(iParam0), -1);
					Global_97358.f_28192.f_3++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 2))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_74(func_142(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
				}
			}
			break;
	}
}

char* func_142(int iParam0)
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

int func_143()
{
	switch (func_144(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
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

int func_144(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_148(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_146(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_145(uParam0, iParam4);
		}
	}
	return 2;
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_146(int iParam0)
{
	return func_147(iParam0, Global_34913);
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_146(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_149()
{
	float fVar0;
	
	switch (iLocal_300)
	{
		case 1:
			if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_60)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x4A92EC439A129446())
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_74))
		{
			if (unk_0x0FF9FE2CB115CFB9(iLocal_74))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_150(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_74))
		{
			if (iParam0 == 0 || func_97(iLocal_74, iLocal_75, 1) > 15f)
			{
				if (unk_0xD18D82BE9A1A5E43(unk_0xAA04EEFB14FDE2E9(iLocal_74, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0xAA04EEFB14FDE2E9(iLocal_74, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0xAA04EEFB14FDE2E9(iLocal_74, 31086, 0f, 0f, 0f) };
				if ((unk_0x34B6D387C9A70A16(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x34B6D387C9A70A16(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0x34B6D387C9A70A16(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x2EF36063171DEEDD(unk_0xAA04EEFB14FDE2E9(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x24E7720869956FA9(-1, unk_0xAA04EEFB14FDE2E9(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_74, unk_0x9F92518438215DD0(), 1))
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

int func_151(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (!unk_0x0FC809E10EF0EAC3(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152()
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
	
	Var3 = { Local_98 };
	fVar6 = fLocal_110;
	switch (iLocal_300)
	{
		case 1:
			Local_95 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_109 = 293.9091f;
			Local_98 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_110 = 185.5212f;
			iVar7 = joaat("a_f_y_vinewood_04");
			iVar9 = joaat("peyote");
			iVar8 = joaat("g_m_y_salvagoon_01");
			sVar10 = "CThiefVictim";
			sVar11 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_286 = "RECT1_ATTR";
			sLocal_287 = "RECT1_HELP";
			sLocal_288 = "RECT1_FYOU";
			sLocal_289 = "RECT1_JOY";
			sLocal_290 = "RECT1_OK";
			sLocal_291 = "RECT1_BAD";
			sLocal_292 = "RECT1_GOOD";
			cLocal_293 = "RECT1AU";
			sLocal_82 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_84 = "random@car_thief@waving_ig_1";
			Local_101 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_56 = 3f;
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_95) < unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_98))
			{
				Var3 = { Local_95 };
				fVar6 = fLocal_109;
				bLocal_60 = true;
				sLocal_83 = "random@car_thief@waving_ig_2";
				sLocal_85 = "waving_l";
			}
			else
			{
				sLocal_85 = "waving";
				sLocal_83 = "random@car_thief@waving_ig_1";
				Var3 = { Local_98 };
				fVar6 = fLocal_110;
			}
			break;
		
		case 2:
			Local_98 = { -538.6718f, -2183.442f, 5.2336f };
			Local_95 = { -365.7f, -2179.26f, 9.3184f };
			iVar7 = joaat("a_f_y_indian_01");
			iVar9 = joaat("rocoto");
			iVar8 = joaat("a_m_m_soucent_04");
			sVar10 = "CThiefGolfer";
			sVar12 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_286 = "RECT2_ATTR";
			sLocal_287 = "RECT2_HELP";
			sLocal_288 = "RECT2_FYOU";
			sLocal_289 = "RECT2_JOY";
			sLocal_290 = "RECT2_OK";
			sLocal_291 = "RECT2_BAD";
			sLocal_292 = "RECT2_GOOD";
			cLocal_293 = "RECT2AU";
			sLocal_82 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_83 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_101 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_55 = 15f;
			fLocal_56 = 3f;
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_95) < unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_98))
			{
				bLocal_60 = true;
			}
			break;
	}
	unk_0x3BC6D217451D6BB7(iVar7);
	unk_0x3BC6D217451D6BB7(iVar8);
	unk_0x3BC6D217451D6BB7(iVar9);
	unk_0xDA293E5084610B09(sLocal_82);
	unk_0xDA293E5084610B09(sLocal_83);
	unk_0xDA293E5084610B09(sLocal_84);
	unk_0xDA293E5084610B09("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x21ED45FD62BE6E8D();
	if (((((((unk_0x149162179DBAEDB0(iVar7) && unk_0x149162179DBAEDB0(iVar8)) && unk_0x149162179DBAEDB0(iVar9)) && unk_0x3DA2EED4204CE591(sLocal_82)) && unk_0x3DA2EED4204CE591(sLocal_83)) && unk_0x3DA2EED4204CE591(sLocal_84)) && unk_0x3DA2EED4204CE591("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x3749C5550F0953F2())
	{
		if (iLocal_300 == 1)
		{
			func_166("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_95));
			func_166("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_98));
			iLocal_76 = unk_0xB0694AD0A3BB8936(iVar9, Var3, fVar6, 1, 1);
			unk_0x53C1D7D0D117C6BA(iLocal_76, 0, 0);
			unk_0x5C7436C87A3920CE(iLocal_76, 0);
			unk_0xA27F610688163CA9(iLocal_76, 1);
			unk_0x7FAB46C418640A64(iLocal_76, 0);
			unk_0x629271E0FB6556E2(iLocal_76, 0);
			unk_0x2125574BF8773B98(iLocal_76, 2, 0);
			iLocal_75 = unk_0xAD7526C9AA33EE39(iLocal_76, 22, iVar8, -1, 1, 1);
			unk_0x9001FCB58244C11D(iLocal_75, 42, 1);
			unk_0x64277E0EB39C1162(iLocal_75, 3, 1);
			unk_0x46D3B8FF073CD238(iLocal_75, joaat("weapon_pistol"), -1, 1, 1);
			unk_0x488909512824324E(iLocal_75, 10);
			unk_0x61099D55069BD6BE(iLocal_75, 1f);
			unk_0x0848F9C26DFE1BC2(iLocal_75, 1f);
			unk_0x0F8D3599CAFC9EEE(iLocal_76, 135, 135);
			unk_0x4B38C66919CC2E48("re_cartheft relGroupThief", &iLocal_328);
			unk_0xF2061C15946C53A2(5, iLocal_328, joaat("player"));
			unk_0xF2061C15946C53A2(2, iLocal_328, joaat("CIVMALE"));
			unk_0xF2061C15946C53A2(2, joaat("CIVMALE"), iLocal_328);
			unk_0xA50AD6983D49A772(iLocal_75, iLocal_328);
			unk_0x69C5E202565B9651(iLocal_76, 1);
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) - Local_51 };
				uLocal_54 = unk_0x4F034F83AF91EC27(Var0.f_0, Var0.f_1);
			}
			iLocal_74 = unk_0xA00B5D954AD320BF(5, iVar7, Local_51, uLocal_54, 1, 1);
			unk_0x1B0EED08D8CF2596(iLocal_74, sVar11);
			unk_0x402A96371F34E6D8(iLocal_74, unk_0x9F92518438215DD0(), -1, 2048, 2);
			unk_0xB27BF64B02C0107E(iLocal_74, 0, 0, 1, 0);
			unk_0xB27BF64B02C0107E(iLocal_74, 2, 2, 0, 0);
			unk_0xB27BF64B02C0107E(iLocal_74, 3, 1, 1, 0);
			unk_0xB27BF64B02C0107E(iLocal_74, 4, 1, 1, 0);
			unk_0x5E4D9888EEC3124B(iLocal_74, 1);
			if (bLocal_60)
			{
				Local_89 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_104 = 124.6557f;
				Local_86 = { -2252.683f, 4274.16f, 45.0612f };
				Local_92 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_105 = 272.8688f;
				Local_112 = { -2258.04f, 4272.244f, 45.75466f };
				Local_115 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				Local_89 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_104 = 336.143f;
				Local_92 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_105 = 179.4774f;
				Local_86 = { -2257.088f, 4268.938f, 44.6456f };
				Local_112 = { -2254.886f, 4273.539f, 46.2282f };
				Local_115 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_60)
			{
				iLocal_76 = unk_0xB0694AD0A3BB8936(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_76 = unk_0xB0694AD0A3BB8936(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			unk_0x53C1D7D0D117C6BA(iLocal_76, 0, 0);
			unk_0x5C7436C87A3920CE(iLocal_76, 0);
			unk_0xDFA36C740458266A(iLocal_76, 3);
			unk_0xA27F610688163CA9(iLocal_76, 1);
			unk_0xCC6111FBD13C5A22(iLocal_76, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_76, 11, 2, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_76, 16, 3, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_76, 12, 1, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_76, 13, 1, 0);
			unk_0x92BB9830DC0F4EB5(iLocal_76, 3);
			unk_0x3E9FFBB0E33D344F(iLocal_76, 23, 6, 0);
			unk_0x22501E8B882CF156(iLocal_76, 3);
			unk_0x88B205B70CF73BF1(iLocal_76, 18, 1);
			unk_0x88B205B70CF73BF1(iLocal_76, 22, 1);
			unk_0x0F8D3599CAFC9EEE(iLocal_76, 143, 0);
			unk_0x32C2810FAE38E8CD(iLocal_76, 31, 2);
			unk_0x7FAB46C418640A64(iLocal_76, 0);
			unk_0x629271E0FB6556E2(iLocal_76, 0);
			if (bLocal_60)
			{
				iLocal_74 = unk_0xA00B5D954AD320BF(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_74 = unk_0xA00B5D954AD320BF(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_74 = unk_0xA00B5D954AD320BF(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0xB27BF64B02C0107E(iLocal_74, 0, 0, 0, 0);
			unk_0xB27BF64B02C0107E(iLocal_74, 2, 1, 0, 0);
			unk_0xB27BF64B02C0107E(iLocal_74, 3, 1, 2, 0);
			unk_0xB27BF64B02C0107E(iLocal_74, 4, 1, 2, 0);
			iLocal_75 = unk_0xAD7526C9AA33EE39(iLocal_76, 22, iVar8, -1, 1, 1);
			unk_0x46D3B8FF073CD238(iLocal_75, joaat("weapon_pistol"), -1, 1, 1);
			unk_0x488909512824324E(iLocal_75, 10);
			unk_0x61099D55069BD6BE(iLocal_75, 1f);
			unk_0x0848F9C26DFE1BC2(iLocal_75, 1f);
			unk_0x9001FCB58244C11D(iLocal_75, 42, 1);
			unk_0x1B0EED08D8CF2596(iLocal_75, sVar12);
			Local_89 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_104 = 294.4744f;
			Local_86 = { -501.0442f, -2150.799f, 8.139f };
			Local_92 = { -493.8062f, -2156.036f, 8.1978f };
			Local_112 = { -504.365f, -2144.534f, 9.8585f };
			Local_115 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x0CFE85F88BE373C8(iLocal_74, 0);
		unk_0x9001FCB58244C11D(iLocal_74, 185, 1);
		unk_0xF51C342F3B3AAD67(iLocal_76, 0);
		unk_0x6FD45FA39DD18625(iLocal_76, 1, 1);
		unk_0x4A1AC49BA4A747F7(iLocal_74, 1);
		unk_0x4A1AC49BA4A747F7(iLocal_75, 1);
		unk_0x402A96371F34E6D8(iLocal_74, iLocal_75, -1, 0, 2);
		unk_0x013A216DDFCAE218(iLocal_76);
		unk_0x69C5E202565B9651(iLocal_76, 1);
		unk_0x003E17A8BE5EA5B6(iLocal_76, 0, 0);
		unk_0x60DAE84D0B296FD2(iVar9, 1);
		unk_0x9B517A4FE28A719F("RE_CAR_STEAL_SCENE");
		unk_0x060D3260330D112D(iLocal_76, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0xDA8341EDE399E312(iLocal_76, 1);
		unk_0x64277E0EB39C1162(iLocal_74, 17, 0);
		unk_0xA334EDA2335A13CA(iLocal_74, 512, 1);
		switch (func_10())
		{
			case 0:
				sLocal_119 = "MICHAEL";
				break;
			
			case 1:
				sLocal_119 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_119 = "TREVOR";
				break;
		}
		func_165(&Local_121, 0, unk_0x9F92518438215DD0(), sLocal_119, 0, 1);
		func_165(&Local_121, 1, iLocal_74, sVar10, 0, 1);
		func_165(&Local_121, 2, iLocal_75, "CThief", 0, 1);
		return 1;
	}
	else if (func_153())
	{
		func_220();
	}
	return 0;
}

int func_153()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_119();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
					fVar35 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var0.f_6, 1);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_159(iParam0) };
	if (unk_0x9E9AFDBF482248F6(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_97076 > 0;
}

int func_162()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

void func_166(char* sParam0, float fParam1)
{
	func_168(sParam0);
	func_167(fParam1);
}

void func_167(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_168(char* sParam0)
{
	if (unk_0x6B08EC9A88700FBB(uParam0, uParam0))
	{
	}
}

int func_169()
{
	if (!func_146(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_170()
{
	if ((Global_97347 == func_123() && unk_0x5B668B6112C83376()) && Global_97348)
	{
		return 1;
	}
	return 0;
}

void func_171()
{
	if (func_99(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0) != iLocal_76 && unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0) != iLocal_79)
			{
				iLocal_79 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			}
		}
	}
}

void func_172(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x17103F66FBB44C3C();
	}
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		iVar0 = (unk_0x17103F66FBB44C3C() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xDA8AC653AAD36D4F(uParam0) != 255)
				{
					unk_0xFBF7E9E330FE936E(uParam0, 255);
				}
			}
			else if (unk_0xDA8AC653AAD36D4F(uParam0) != 0)
			{
				unk_0xFBF7E9E330FE936E(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xDA8AC653AAD36D4F(uParam0) != 255)
			{
				unk_0xFBF7E9E330FE936E(uParam0, 255);
			}
		}
	}
}

void func_173()
{
}

void func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_176(iParam0);
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_175();
}

void func_175()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0x60DAE84D0B296FD2(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)), 1);
		}
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	}
}

void func_176(int iParam0)
{
	Global_97347 = iParam0;
}

int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131425)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_123();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_217())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
		{
			return 0;
		}
		if (func_106(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (Global_97347 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_215(iParam3))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_214(func_10()) == 4 || func_214(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_213(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_212(Global_97358.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x17103F66FBB44C3C() - Global_97349) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_211())
		{
			return 0;
		}
		if (unk_0xDC8D2FA0A650F78B())
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
		{
			return 0;
		}
		if (!func_202(4))
		{
			return 0;
		}
		if (!func_146(5))
		{
			return 0;
		}
		if (func_201(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF67FA89DDC5D0BDC(unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())))
		{
			if ((unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(377.153f, -717.567f, 10.0536f) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(320.9934f, 265.2515f, 82.1221f)) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_201(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_215(30) && !func_201(30, 0))
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
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_81(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
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

bool func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
	return func_179(iVar0);
}

int func_179(int iParam0)
{
	return func_180(iParam0, 1);
}

int func_180(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_200(iParam0))
	{
		return 0;
	}
	func_181(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_181(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_182(func_193(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_182(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_192(iParam0, iParam1))
	{
		iVar0 = func_191(iParam1);
		iVar1 = func_189(iParam0);
		iVar2 = (func_189(iParam0) - func_189(iParam1));
		iVar3 = (func_191(iParam0) - func_191(iParam1));
		iVar4 = (func_188(iParam0) - func_188(iParam1));
		iVar5 = (func_187(iParam0) - func_187(iParam1));
		iVar6 = (func_186(iParam0) - func_186(iParam1));
		iVar7 = (func_185(iParam0) - func_185(iParam1));
	}
	else
	{
		iVar0 = func_191(iParam0);
		iVar1 = func_189(iParam1);
		iVar2 = (func_189(iParam1) - func_189(iParam0));
		iVar3 = (func_191(iParam1) - func_191(iParam0));
		iVar4 = (func_188(iParam1) - func_188(iParam0));
		iVar5 = (func_187(iParam1) - func_187(iParam0));
		iVar6 = (func_186(iParam1) - func_186(iParam0));
		iVar7 = (func_185(iParam1) - func_185(iParam0));
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
		iVar4 = (iVar4 + func_184(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_183(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_183(float fParam0, float fParam1, float fParam2)
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

int func_184(int iParam0, int iParam1)
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

int func_185(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_186(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_187(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_188(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_189(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_190(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_190(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_191(int iParam0)
{
	return iParam0 & 15;
}

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_200(iParam1) || !func_200(iParam0))
	{
		return 1;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	var uVar0;
	
	func_199(&uVar0, unk_0xD9940DF735CED1D5());
	func_198(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_197(&uVar0, unk_0x3E15607264E063C3());
	func_196(&uVar0, unk_0xA2C54D866C588926());
	func_195(&uVar0, unk_0x35E06151CD8A2DD1());
	func_194(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_194(var uParam0, int iParam1)
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

void func_195(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_196(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(*uParam0);
	iVar1 = func_189(*uParam0);
	if (iParam1 < 1 || iParam1 > func_184(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_197(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_198(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_200(int iParam0)
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
	iVar0 = func_185(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_186(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_187(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_189(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_191(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_188(iParam0);
	if (iVar5 < 1 || iVar5 > func_184(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_201(int iParam0, int iParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
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
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_210()) || Global_96405) || Global_24446) || func_209()) || func_49(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_210()) || Global_24446) || func_209()) || func_49(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_210()) || Global_96405) || Global_24446) || func_209()) || func_49(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_210()) || Global_96405) || Global_24446) || func_209()) || func_49(8, -1)) || func_208()) || func_207()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_210() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_49(8, -1)) || func_205()) || func_204()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_49(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_210()) || Global_24446) || func_209()) || func_49(8, -1)) || func_207()) || func_206()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_210()) || func_207()) || Global_96405) || Global_24446) || func_209()) || Global_35957) || func_49(8, -1)) || func_206()) || func_204()) || func_205()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_210()) || Global_96405) || Global_24446) || func_209()) || func_49(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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

var func_203()
{
	return Global_90001.f_1;
}

int func_204()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_205()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_90014.f_291 > 0;
}

bool func_208()
{
	return Global_90014.f_290 > 0;
}

var func_209()
{
	return Global_1315900;
}

int func_210()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_211()
{
	func_47();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0)
{
	return func_192(func_193(), iParam0);
}

int func_213(int iParam0, int iParam1, int iParam2)
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

int func_214(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_97358.f_5944.f_919[iParam0];
}

bool func_215(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_217())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_216()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_217()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_84352[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_81119)
	{
		if (Global_81119[iVar0 /*5*/] != -1)
		{
			if (Global_68514.f_109[Global_81119[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_219()
{
	if (unk_0x2A488C176D52CCA5(Local_51, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_300 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_51, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_300 = 2;
	}
}

void func_220()
{
	if (unk_0x746960881FB19A89(iLocal_75) && !unk_0x0BA451447C3B1A8D(iLocal_75))
	{
		unk_0x4A1AC49BA4A747F7(iLocal_75, 0);
		unk_0x0880E86251A44B7F(unk_0xB6A50C909A8FABC3(iLocal_75));
		func_232(&iLocal_75, 1, 0, 1);
	}
	if (unk_0x746960881FB19A89(iLocal_74) && !unk_0x0BA451447C3B1A8D(iLocal_74))
	{
		unk_0xE69F90D298F4217D(iLocal_74, 310, 1);
		unk_0x4A1AC49BA4A747F7(iLocal_74, 0);
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_63))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_63);
	}
	func_59(&uLocal_66);
	if (unk_0x2E6E8D325977B3EC(uLocal_64))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_64);
	}
	if (unk_0x370603716EC2D420("RE_CAR_STEAL_SCENE"))
	{
		if (func_151(iLocal_76))
		{
			unk_0xC932874B6133A2D2(iLocal_76, 0);
		}
		unk_0x6041FBFC1EE8196A("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_300 == 2)
	{
		unk_0x789B551AB7557D47(joaat("rocoto"));
	}
	else
	{
		unk_0x789B551AB7557D47(joaat("peyote"));
	}
	func_16(&iLocal_76);
	if (func_151(iLocal_79))
	{
		unk_0x5C7436C87A3920CE(iLocal_79, 1);
	}
	unk_0xA65F8C84413BA46B(0);
	unk_0xB1E35D138037D248(1f);
	func_135(39, 0);
	func_135(40, 0);
	func_135(41, 0);
	func_135(42, 0);
	func_135(43, 0);
	func_221(-1);
	func_61(&uLocal_329, 0, 0);
	unk_0xE60DEFFB2A853900();
}

void func_221(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170())
	{
		func_225(iParam0);
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_224(30000);
		StringCopy(&cVar0, func_223(Global_97347, 1), 64);
		if (func_122(Global_97347) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97346, 64);
		}
		unk_0xB87D4A9CC02132A5(&cVar0, Global_97344, (unk_0x17103F66FBB44C3C() - Global_97345), 0);
	}
	else if (unk_0x94E72F17611BCD3C(Global_97354, 0) && Global_97358.f_28192.f_2 < 3)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_97354, 0);
	}
	func_222(&Global_24503);
	Global_97348 = 0;
	func_176(-1);
}

void func_222(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_223(int iParam0, bool bParam1)
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

void func_224(int iParam0)
{
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
}

void func_225(int iParam0)
{
	func_226(iParam0, 0, func_231(iParam0));
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_193();
	func_229(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_228(iParam0, &uVar0);
	Var1 = { func_227(&uVar0) };
}

struct<16> func_227(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_188(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_191(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_189(*uParam0), 64);
	return Var0;
}

void func_228(int iParam0, var uParam1)
{
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
}

void func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_189(*uParam0);
	iVar1 = func_191(*uParam0);
	iVar2 = func_188(*uParam0);
	iVar3 = func_187(*uParam0);
	iVar4 = func_186(*uParam0);
	iVar5 = func_185(*uParam0);
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
	iVar6 = func_184(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_184(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_230(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_199(uParam0, iParam1);
	func_198(uParam0, iParam2);
	func_197(uParam0, iParam3);
	func_196(uParam0, iParam4);
	func_195(uParam0, iParam5);
	func_194(uParam0, iParam6);
}

int func_231(int iParam0)
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

void func_232(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(*uParam0))
		{
			unk_0x512E0C109ACECCA1(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5B1A1DA8A0D20935(*uParam0);
			}
			unk_0xE8105B7E3908547D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4A1AC49BA4A747F7(*uParam0, 0);
			}
		}
		unk_0x995B3705D02B0401(uParam0);
	}
}


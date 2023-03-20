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
	if (unk_0x2170E7BC25114A22(11))
	{
		func_222();
	}
	func_221();
	if (iLocal_301 == 2)
	{
		if (func_220(34))
		{
			unk_0x01DFCA3621B68C4A();
		}
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x51D836BF46000450(unk_0xD5A676B97920D126()))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				if (Var0.f_2 > 23f || unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0x01DFCA3621B68C4A();
				}
			}
		}
	}
	if (func_179(Local_52, 17, iLocal_301, 0, 0))
	{
		func_176(-1);
	}
	else
	{
		unk_0x01DFCA3621B68C4A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_175();
		func_174(uLocal_63, &uLocal_66);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB345C952E0B0D2D1(unk_0xFB6B3EEFAB2DD12C());
		}
		func_173();
		if (!func_172())
		{
			if (func_171())
			{
				func_222();
			}
			if (unk_0x0943F317505D1E39())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_154())
						{
							unk_0x1B0911E42F22C137(0);
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x00B5B0B68211D89B(iLocal_76))
						{
							if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !unk_0x00B5B0B68211D89B(iLocal_75)) && func_153(iLocal_77)) && !func_152(0))
							{
								if (func_151())
								{
									if (func_153(iLocal_80))
									{
										unk_0x5919F7382C7F12DB(iLocal_80, 0);
									}
									func_142(1);
									unk_0xFA5E84DCAE200259(0.1f);
									func_137(39, 1);
									func_137(40, 1);
									func_137(41, 1);
									func_137(42, 1);
									func_137(43, 1);
									func_137(44, 1);
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else
							{
								if (!unk_0x00B5B0B68211D89B(iLocal_75))
								{
									unk_0xBB8F1D58B7578137(iLocal_75, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
									unk_0x7D99F00F48D15ADB(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_222();
							}
						}
						else
						{
							if (!unk_0x00B5B0B68211D89B(iLocal_75) && func_153(iLocal_77))
							{
								unk_0xB192238F4F854097(iLocal_75, iLocal_77, 20f, iLocal_299);
								unk_0x7D99F00F48D15ADB(iLocal_75, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_105(0);
						}
						break;
				}
			}
			else
			{
				func_222();
			}
		}
		else
		{
			if (unk_0x00B5B0B68211D89B(iLocal_76))
			{
				if (Local_122[2 /*10*/].f_7)
				{
					func_104(&Local_122, 2);
				}
			}
			unk_0x3F931C10896E8434(unk_0xFB6B3EEFAB2DD12C());
			func_96();
			if (func_153(iLocal_77) && !func_95())
			{
				if (func_93())
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!unk_0x00B5B0B68211D89B(iLocal_76))
								{
									if (unk_0x04D83291EB9DE51D(iLocal_76, iLocal_77, 0))
									{
										if (iLocal_301 == 2)
										{
											unk_0x6D20A3AA82585D8C(iLocal_76, 1);
											unk_0x6D20A3AA82585D8C(iLocal_77, 1);
											unk_0x456121A0AAC868D4(&uLocal_78);
											unk_0x1DC0501F19F1A583(0, iLocal_77, unk_0xD5A676B97920D126(), 8, 30f, iLocal_300, 200f, 10f, 0);
											unk_0xCFE67FBB69F1C410(uLocal_78);
											unk_0x8B06B801B92CEC2D(iLocal_76, uLocal_78);
											unk_0x873418BFBF9A6780(&uLocal_78);
										}
										else
										{
											unk_0x6D20A3AA82585D8C(iLocal_76, 1);
											unk_0x456121A0AAC868D4(&uLocal_78);
											unk_0x941873B91F73B0BA(0, iLocal_77, 30, 1000);
											unk_0x1DC0501F19F1A583(0, iLocal_77, unk_0xD5A676B97920D126(), 8, 40f, iLocal_300, 200f, 10f, 1);
											unk_0xCFE67FBB69F1C410(uLocal_78);
											unk_0x8B06B801B92CEC2D(iLocal_76, uLocal_78);
											unk_0x873418BFBF9A6780(&uLocal_78);
										}
										Local_317 = { unk_0xA277059EBE3B154A(iLocal_77, unk_0x96C78339A82E0B67(iLocal_77, "wheel_lr")) };
										Local_320 = { unk_0x483D90C99A690DBF(iLocal_77, Local_317) };
										unk_0x613C35B63D0905A3("scr_wheel_burnout", iLocal_77, Local_320 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_323 = { unk_0xA277059EBE3B154A(iLocal_77, unk_0x96C78339A82E0B67(iLocal_77, "wheel_rr")) };
										Local_326 = { unk_0x483D90C99A690DBF(iLocal_77, Local_323) };
										unk_0x613C35B63D0905A3("scr_wheel_burnout", iLocal_77, Local_326 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0x6901135DDCC4904D(uLocal_64))
										{
											uLocal_64 = func_91(iLocal_77, 1, 0);
										}
										unk_0x8FE45474D7594498(2);
										iLocal_49 = 1;
									}
									else if (unk_0x7D720C677145C91C(iLocal_77, unk_0xD5A676B97920D126(), 1))
									{
										if (!unk_0x00B5B0B68211D89B(iLocal_76))
										{
											unk_0xBB8F1D58B7578137(iLocal_76, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
											unk_0x7D99F00F48D15ADB(iLocal_76, 1);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_222();
									}
								}
								else
								{
									unk_0xB192238F4F854097(iLocal_75, iLocal_77, 20f, iLocal_299);
									unk_0x7D99F00F48D15ADB(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
									func_105(0);
								}
								break;
							
							case 1:
								if (func_153(iLocal_77))
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
											unk_0x9773EF10686D53C8(iLocal_77, fLocal_119);
											iVar3 = unk_0xC2F89F29527CAB64(unk_0xC086F8D75730FA3A(iLocal_77, 1), 5f, 0, 4);
											if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
											{
												if (func_153(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
												{
													if (unk_0xC85EEB48C05E2A8A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), iLocal_77))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_153(iVar3))
												{
													if (iVar3 != iLocal_77)
													{
														if (unk_0xC85EEB48C05E2A8A(iVar3, iLocal_77))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x3FE948D881FDB558(iLocal_77) < 700f)
									{
										func_222();
									}
								}
								func_68();
								if ((((((func_67() || func_66()) || unk_0x04B02215CFC8E89F(iLocal_77)) || unk_0x4EC2DD24B6F44441(iLocal_77, 1, 5000)) || unk_0xF60B0BCAFB1D30FF(iLocal_77)) || unk_0x00B5B0B68211D89B(iLocal_76)) || !unk_0x04D83291EB9DE51D(iLocal_76, iLocal_77, 0))
								{
									if (unk_0x0FE8D1B72C1924FE("RE_CAR_STEAL_SCENE"))
									{
										if (func_153(iLocal_77))
										{
											unk_0xC1CDF4F2825C3F22(iLocal_77, 0);
										}
										unk_0xB3C38A4B84C152BF("RE_CAR_STEAL_SCENE");
									}
									if (unk_0x6901135DDCC4904D(uLocal_64))
									{
										unk_0x8A3D7569826A325D(&uLocal_64);
									}
									func_65();
									if (unk_0x6901135DDCC4904D(uLocal_63))
									{
										unk_0x8A3D7569826A325D(&uLocal_63);
									}
									unk_0x3C05FE2296BF5F53(iLocal_75);
									unk_0xF351193474DA13BB(iLocal_77, 50f, 5, 0);
									uLocal_65 = func_91(iLocal_77, 0, 0);
									fLocal_109 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iLocal_77, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iLocal_77, 1), unk_0xC086F8D75730FA3A(iLocal_75, 1));
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iLocal_75, 1));
									func_63(&uLocal_330, 0, 0);
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if (func_153(iLocal_77))
								{
									if (unk_0x3FE948D881FDB558(iLocal_77) < 700f)
									{
										func_222();
									}
								}
								if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
								{
									func_222();
								}
								if (!unk_0xB529B2A4B7C64D6D(iLocal_76, 0))
								{
									if (!unk_0x04D83291EB9DE51D(iLocal_76, iLocal_77, 0))
									{
										func_62(iLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_61(&uLocal_67);
								}
								if (!unk_0x00B5B0B68211D89B(iLocal_76))
								{
									if (!unk_0xDA4E21D6BC58AB75(iLocal_76, unk_0xD5A676B97920D126()))
									{
										unk_0x182DAF81B229194E(iLocal_76, unk_0xD5A676B97920D126(), 0, 16);
										unk_0x8188DB74546FF484(unk_0xA0A4DA31DEDFAC4F(iLocal_76));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iLocal_77, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > (fLocal_109 + 220f) || unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iLocal_77, 1), unk_0xC086F8D75730FA3A(iLocal_75, 1)) > (fLocal_107 + 220f)) || unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iLocal_75, 1)) > (fLocal_108 + 220f))
								{
									if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_77, 0))
									{
										func_105(0);
									}
									else
									{
										func_222();
									}
								}
								if (unk_0x6901135DDCC4904D(uLocal_65))
								{
									if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_77, 0))
									{
										unk_0x8A3D7569826A325D(&uLocal_65);
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
											if (!unk_0xBB36CABE30AE5FC4(Local_93, 2f) && !unk_0xBB5DD90D4926F21A(iLocal_75))
											{
												unk_0xBB9A2DB94A862D7A(iLocal_75, Local_93, 1, 0, 0, 1);
												unk_0x99569FEC2425586D(iLocal_75, fLocal_106);
												iLocal_60 = 1;
											}
										}
										iLocal_50 = 3;
										iLocal_304 = unk_0x84A97C70FFDEC0C8();
									}
									else if (unk_0x108650178993C477(iLocal_77, iLocal_75, 20f, 20f, 7f, 0, 1, 0))
									{
										func_55();
										if (func_54())
										{
											if (unk_0xD1E7D11D552B5D62(iLocal_75, iLocal_77, -1, 0, 0))
											{
												if (!bLocal_296)
												{
													if (func_44(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
													{
													}
												}
												unk_0xB192238F4F854097(iLocal_75, iLocal_77, 35f, iLocal_299);
												unk_0x7D99F00F48D15ADB(iLocal_75, 1);
												func_105(1);
											}
										}
									}
								}
								else if (unk_0x6901135DDCC4904D(uLocal_63))
								{
									if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_77, 0))
									{
										if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_75, fLocal_56, fLocal_56, fLocal_56, 0, 1, 0))
										{
											if (func_43(1, 0, 1))
											{
												unk_0x8A3D7569826A325D(&uLocal_63);
												if (iLocal_301 == 1)
												{
													if (func_42(unk_0x714F015B4D2DE1DC(iLocal_77), 336f, 90f))
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
												unk_0x49E996A1E39EAAD7(sLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_40(unk_0xC086F8D75730FA3A(iLocal_75, 1), &fLocal_56, &fLocal_57);
										}
									}
									else
									{
										unk_0x8A3D7569826A325D(&uLocal_63);
										uLocal_65 = func_91(iLocal_77, 0, 0);
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
											unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
										}
										func_105(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_75))
									{
										unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
									}
									func_105(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_76))
						{
							if (unk_0x04D83291EB9DE51D(iLocal_76, iLocal_77, 0))
							{
								unk_0x1DC0501F19F1A583(iLocal_76, iLocal_77, unk_0xD5A676B97920D126(), 8, 50f, iLocal_300, 10f, 10f, 0);
								unk_0x7D99F00F48D15ADB(iLocal_76, 1);
								unk_0x8188DB74546FF484(unk_0xA0A4DA31DEDFAC4F(iLocal_76));
							}
							else
							{
								unk_0xBB8F1D58B7578137(iLocal_76, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
								unk_0x7D99F00F48D15ADB(iLocal_76, 1);
								unk_0x8188DB74546FF484(unk_0xA0A4DA31DEDFAC4F(iLocal_76));
							}
						}
						unk_0x4EDE34FBADD967A6(0);
						func_222();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_153(iLocal_77))
						{
							unk_0xAA8D7DFFDAAB903E(&iLocal_77);
						}
						if (!unk_0x00B5B0B68211D89B(iLocal_76))
						{
							unk_0xA2AC407F9132DD0B(&iLocal_76);
						}
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_75))
					{
						if (unk_0xEBA40DFF7CCE3511(iLocal_75, sLocal_83, "agitated_idle_a", 3))
						{
							unk_0x574775F87916800D(iLocal_75, "waiting", sLocal_83, -2f);
						}
						func_1(iLocal_75, "GENERIC_CURSE_HIGH", 24);
						unk_0x456121A0AAC868D4(&uLocal_78);
						unk_0xBB64ADC3483D3A47(0, Local_102, 1f, 20000, 40000f, 1056964608);
						unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_78);
						unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
						unk_0x873418BFBF9A6780(&uLocal_78);
					}
					func_222();
				}
			}
			else
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_76))
				{
					unk_0xBB8F1D58B7578137(iLocal_76, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_76, 1);
				}
				if (unk_0x7887B64A08364778(iLocal_77))
				{
					unk_0x26F5F15AFEF0CC8A(iLocal_77, 50f);
				}
				func_222();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0x66D323B3A964108A(iParam0, sParam1, func_2(iParam2), 1);
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
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
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
	if (((!unk_0x00B5B0B68211D89B(iLocal_75) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126())) && func_153(iLocal_77)) && unk_0xD7669BF035CDA5F6(sLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_43(1, 0, 1))
					{
						if (!unk_0xF44A5E894FE76438(Global_2313, 11))
						{
							if (!unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
							{
								func_32(1, 1, 1, 0);
								if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
								{
									unk_0x04890EB0282525A5(1);
									while (!func_30(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), fLocal_57, 1, 1056964608, 0, 1, 0))
									{
										unk_0xC7E06EC513BE0881();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), fLocal_57, 0, 1056964608, 0, 1, 0);
								}
								unk_0xC7E06EC513BE0881();
								if (!unk_0x00B5B0B68211D89B(iLocal_75))
								{
									unk_0x7195C098F080A083(iLocal_75, 0);
								}
								func_28();
								func_23();
								unk_0xC7E06EC513BE0881();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
				unk_0x12C2DF66EA2F61B3(iLocal_77, 0, 0, 0f);
				unk_0x822761181320D610(iLocal_77, 0, 1, 1, 1);
				unk_0xC7E06EC513BE0881();
				if (iLocal_301 == 1)
				{
					if (func_153(iLocal_77))
					{
						if (func_42(unk_0x714F015B4D2DE1DC(iLocal_77), 336f, 90f))
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
					unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Local_87, 1, 0, 0, 1);
					unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
					unk_0xBB9A2DB94A862D7A(iLocal_75, Local_93, 1, 0, 0, 1);
					unk_0x99569FEC2425586D(iLocal_77, fLocal_105);
					unk_0xBB9A2DB94A862D7A(iLocal_77, Local_90, 1, 0, 0, 1);
				}
				else
				{
					if (!func_42(unk_0x714F015B4D2DE1DC(iLocal_77), 64.6764f, 90f))
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
					unk_0xBB9A2DB94A862D7A(iLocal_77, Local_90, 1, 0, 0, 1);
					unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
					unk_0x99569FEC2425586D(iLocal_77, fLocal_105);
				}
				unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
				if (func_153(iLocal_77))
				{
					unk_0x2D739561304957CC(iLocal_77, 1084227584);
					if (unk_0x7887B64A08364778(iLocal_76))
					{
						if (unk_0x04D83291EB9DE51D(iLocal_76, iLocal_77, 0))
						{
							unk_0xA2AC407F9132DD0B(&iLocal_76);
						}
					}
				}
				Local_310 = { 0f, 0f, 0f };
				Local_313 = { 0f, 0f, 0f };
				uLocal_302 = unk_0x0C17C9FDFC9120BD(Local_310, Local_313, 2);
				unk_0x867776403B3AB7D8(uLocal_302, iLocal_77, unk_0x96C78339A82E0B67(iLocal_77, sVar3));
				unk_0xB81243C4052EF7C8(uLocal_302, Local_310, Local_313, 2);
				unk_0xECA52D26609A09F3(iLocal_75, uLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0xECA52D26609A09F3(unk_0xD5A676B97920D126(), uLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_79 = unk_0xB43345EE5335C48B("DEFAULT_ANIMATED_CAMERA", Local_113, Local_116, fLocal_112, 0, 2);
				unk_0x03AFD6D4FDAD7307(uLocal_79, uLocal_302, "car_returned_cam", sLocal_306);
				unk_0x20F221A8F789EDA5(iLocal_77, sLocal_307, sLocal_306, 1000f, 0, 0, 0, 0, 262144);
				Local_310 = { unk_0xC086F8D75730FA3A(iLocal_77, 1) };
				Local_313 = { unk_0xB73B9913DD4EE2AA(iLocal_77, 2) };
				if (func_153(iLocal_80))
				{
					if (func_22(iLocal_80, Local_90, 1) <= 11f)
					{
						unk_0xBB9A2DB94A862D7A(iLocal_80, Var4, 1, 0, 0, 1);
						unk_0x99569FEC2425586D(iLocal_80, fVar7);
						unk_0x2D739561304957CC(iLocal_80, 1084227584);
						unk_0xC53606C390BE2727(iLocal_80, 1, 0);
					}
				}
				unk_0x500FFA49AC5ABB1D(Local_90, 10f, 1, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_301 == 2)
				{
					unk_0xD4A0A19150A63589(joaat("rocoto"), 15);
				}
				else
				{
					unk_0xD4A0A19150A63589(joaat("peyote"), 15);
				}
				unk_0xCDB3CF095121B4E2(Local_90, 15f);
				unk_0x55EB2099508DD1C3(uLocal_79, 1);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
				iLocal_51 = 3;
				unk_0xAA0AAA580B3E94C4(1f);
				break;
			
			case 3:
				unk_0xC7E06EC513BE0881();
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
				else if (unk_0xC8FC1161FDD0E597(uLocal_302) && !bLocal_342)
				{
					if (unk_0x2C3B61BDCED77B45(uLocal_302) >= 0.2f)
					{
						if (func_44(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
				unk_0xAA0AAA580B3E94C4(1f);
				break;
			
			case 4:
				unk_0xC7E06EC513BE0881();
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
				unk_0xAA0AAA580B3E94C4(1f);
				if (iLocal_301 == 1)
				{
					if (unk_0xC8FC1161FDD0E597(uLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (unk_0x2C3B61BDCED77B45(uLocal_302) >= 0.83f)
							{
								unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
								unk_0x290A57C93304EF16(unk_0xD5A676B97920D126(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x2C3B61BDCED77B45(uLocal_302), 0, 0, 0);
								unk_0xCE607BF2D136923E(unk_0xD5A676B97920D126(), 1, 0);
								iLocal_316 = 1;
							}
						}
						if (!unk_0x00B5B0B68211D89B(iLocal_75))
						{
							if (unk_0x2C3B61BDCED77B45(uLocal_302) >= 0.83f)
							{
								if (unk_0xEBA40DFF7CCE3511(iLocal_75, sLocal_306, sLocal_308, 2))
								{
									unk_0x7CEA05BD33244307(iLocal_75, -1000f, 0);
									if (!unk_0x6A0583ECFCCECC9B(iLocal_75, 0))
									{
										if (func_153(iLocal_77))
										{
											unk_0x5467EF651716201E(iLocal_75, iLocal_77, -1);
											unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
										}
									}
									unk_0xCE607BF2D136923E(iLocal_75, 1, 0);
								}
								else
								{
									unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0xC8FC1161FDD0E597(uLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (unk_0x2C3B61BDCED77B45(uLocal_302) >= 0.86f)
						{
							unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
							unk_0x290A57C93304EF16(unk_0xD5A676B97920D126(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x2C3B61BDCED77B45(uLocal_302), 0, 0, 0);
							unk_0xCE607BF2D136923E(unk_0xD5A676B97920D126(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_75))
					{
						if (unk_0x2C3B61BDCED77B45(uLocal_302) > 0.847f)
						{
							if (unk_0xEBA40DFF7CCE3511(iLocal_75, sLocal_306, sLocal_308, 2))
							{
								unk_0x7CEA05BD33244307(iLocal_75, -1000f, 0);
								if (!unk_0x6A0583ECFCCECC9B(iLocal_75, 0))
								{
									if (func_153(iLocal_77))
									{
										unk_0x5467EF651716201E(iLocal_75, iLocal_77, -1);
										unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
									}
								}
								unk_0xCE607BF2D136923E(iLocal_75, 1, 0);
							}
							else
							{
								unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
							}
						}
					}
				}
				if (((unk_0xC8FC1161FDD0E597(uLocal_302) && unk_0x2C3B61BDCED77B45(uLocal_302) >= 0.99f) || !unk_0xC8FC1161FDD0E597(uLocal_302)) || func_19())
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_77, 0) && unk_0xEBA40DFF7CCE3511(iLocal_77, sLocal_306, sLocal_307, 3))
					{
						unk_0x42B3643EB0DE4C5B(iLocal_77, sLocal_306, sLocal_307, 1f);
					}
					if (unk_0xC8FC1161FDD0E597(uLocal_302))
					{
						unk_0x858A25577AF15EA9(uLocal_302, 1f);
					}
					if (bLocal_342)
					{
						Var0 = { unk_0xEA0A18B7DA3DAB52(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0x87AA1B4BA52B1360(Var0, &(Var0.f_2), 0);
						unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0x4F8397C9BFE1A8C5(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), Var0.f_2);
						unk_0xCA3B54980FA9D86F(0, 1065353216);
						unk_0xB6AE7C18ADC0F901(0);
					}
					unk_0xD099DEFB49600743(unk_0xD5A676B97920D126(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x6A0583ECFCCECC9B(iLocal_75, 0))
					{
						if (func_153(iLocal_77))
						{
							unk_0x5467EF651716201E(iLocal_75, iLocal_77, -1);
							unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
						}
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_75))
					{
						if (unk_0x6A0583ECFCCECC9B(iLocal_75, 0))
						{
							if (func_153(iLocal_77))
							{
								unk_0x12C2DF66EA2F61B3(iLocal_77, 0, 0, 0f);
								unk_0x822761181320D610(iLocal_77, 0, 1, 1, 1);
								iLocal_305 = unk_0x84A97C70FFDEC0C8();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0xC7E06EC513BE0881();
				if ((unk_0x84A97C70FFDEC0C8() - iLocal_305) > 100)
				{
					if (func_3(iLocal_75) && func_153(iLocal_77))
					{
						unk_0x456121A0AAC868D4(&uLocal_78);
						unk_0x941873B91F73B0BA(0, iLocal_77, 9, 1000);
						unk_0xB192238F4F854097(0, iLocal_77, 25f, iLocal_299);
						unk_0xCFE67FBB69F1C410(uLocal_78);
						unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
						unk_0x873418BFBF9A6780(&uLocal_78);
						unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
					}
					func_32(0, 1, 1, 0);
					if (bLocal_342)
					{
						if (unk_0xE7E9CC62D1C4C0A8(uLocal_79))
						{
							unk_0x55EB2099508DD1C3(uLocal_79, 0);
							unk_0xAF191D67F49B35C9(uLocal_79, 0);
						}
						unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0xCA3B54980FA9D86F(0, 1065353216);
						unk_0xB6AE7C18ADC0F901(0);
						func_17(500, 1);
					}
					else
					{
						unk_0x7CFA1DBFD0DCBF1D(0, 0, 3, 0);
						unk_0x55EB2099508DD1C3(uLocal_79, 0);
					}
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
					func_16(&iLocal_77);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_75))
				{
					unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
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
			Global_101652.f_2079.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101652.f_2079.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 6022;
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
			if (iVar1 != 6022)
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
	iVar0 = Global_2503773[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
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

int func_8()
{
	return Global_1312731;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_15(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_14(unk_0xD5A676B97920D126());
			if (func_13(iVar0) && (!func_12(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_13(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return Global_35777 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (unk_0x7887B64A08364778(*iParam0))
	{
		unk_0xB529B2A4B7C64D6D(*iParam0, 0);
		if (unk_0x2A29BF08180E7ADF(*iParam0) && unk_0x67F42C4B7B64C593(*iParam0, 1))
		{
			unk_0xB24D3BF5DABD13AA(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0x7E3640C27B17457C() || unk_0x83D6BCB493FCFCBA())
	{
		if (!unk_0xF9B8AB338DC56ADD())
		{
			unk_0xFF11D473E95357D3(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x8AFBC859AA63D3D7())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
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
		if (unk_0xD58DA2C9C0B3826B(iVar0))
		{
			unk_0x55EB2099508DD1C3(uLocal_79, 0);
			unk_0x0FBCFDA15A0FB2D5(500);
			while (unk_0x83D6BCB493FCFCBA())
			{
				unk_0xC7E06EC513BE0881();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_342 = true;
			return 1;
		}
	}
	if (unk_0x7E3640C27B17457C())
	{
		if (unk_0xD58DA2C9C0B3826B(iVar0))
		{
			bLocal_342 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x8AFBC859AA63D3D7())
	{
		if ((unk_0x84A97C70FFDEC0C8() - Global_28) > iParam0)
		{
			Global_27 = unk_0x84A97C70FFDEC0C8();
		}
		Global_28 = unk_0x84A97C70FFDEC0C8();
		if ((unk_0x84A97C70FFDEC0C8() - Global_27) > iParam0)
		{
			if (func_21())
			{
				Global_27 = unk_0x84A97C70FFDEC0C8();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (unk_0x3CEEA45E4779F6BD(0, 18) || unk_0x3CEEA45E4779F6BD(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

void func_23()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

void func_24(int iParam0)
{
	if (Global_14604)
	{
		func_26(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_25())
	{
		Global_14443.f_1 = 3;
	}
}

int func_25()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_28()
{
	Global_14611 = 0;
	func_29();
}

void func_29()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_31(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

void func_32(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_39(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_25())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_38(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_39(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_38(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_36(unk_0xFB6B3EEFAB2DD12C())) && !func_34(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_33())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_36(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_33()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_36(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_37())
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

bool func_37()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_38(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

void func_40(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) - Param0 };
		fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
		if (func_41(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
		fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
		if (func_41(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 10f)
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
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		fVar0 = unk_0x714F015B4D2DE1DC(iParam0);
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
	
	if (unk_0x94EB20429840304E())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (bParam0)
		{
			if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x98BE504E8B389665(iVar0, -1, 0) != unk_0xD5A676B97920D126())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6016987E9628A7F6(iVar0) < 0.95f || unk_0x6016987E9628A7F6(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!unk_0x120A59070FBE9283(unk_0xFB6B3EEFAB2DD12C()))
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_45(sParam2, iParam3, 0);
}

int func_45(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x73998CD31AEFA620(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_50();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_49();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_48())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				switch (Global_14443.f_1)
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_47();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_46();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_47()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_10();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_52()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_54()
{
	if (unk_0x00B5B0B68211D89B(iLocal_76))
	{
		return 1;
	}
	else if (func_153(iLocal_77))
	{
		if (!unk_0x108650178993C477(iLocal_76, iLocal_77, 10f, 10f, 10f, 0, 1, 0))
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
	
	if (func_153(iLocal_77))
	{
		fVar0 = unk_0xD5ABCE2B8F82DD84(iLocal_77);
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
		if (iVar1 && unk_0x1F18A2782DCD16D2(iLocal_77))
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
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(uVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_60(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(uVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_60(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_60(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
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
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0x8A3D7569826A325D(uParam0);
		bVar0 = true;
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_1))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7887B64A08364778(uParam0->f_7))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_7))
		{
			if (unk_0x809387353710848E(uParam0->f_7))
			{
				unk_0x78E064446A641529(uParam0->f_7, 0);
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
		iParam3 = unk_0xF3F8195C98263BF5();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (!unk_0x809387353710848E(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x78E064446A641529(iParam0, 1);
			}
			else
			{
				unk_0xF12F7DD5C806C87C(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x15384506B12EE9D5(iParam0, iParam2);
			unk_0x542A2C3DC0374D53(iParam0, fParam6);
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x70F2D7B891171E48(iParam0, iParam9);
		}
		unk_0x445B259664586FAE(iParam0, iParam4);
		unk_0x9B38006BF68A10D5(iParam0, iParam5);
		*uParam1 = unk_0x6CABC22169F0A7EF(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x4F095059F1C175D5(*uParam1, iParam8);
				}
				unk_0xD5CB3DBDC39C94B8("STRING");
				if (bParam10)
				{
					unk_0x4C51E4FBCD1D8830(iParam7);
				}
				else
				{
					unk_0xB1953EBEF4D6BD85(iParam7);
				}
				unk_0x16754E7FB61E7A65(*uParam1);
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!unk_0xF44A5E894FE76438(uParam1->f_6, 2))
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!unk_0xC55B9553B3EDADE9(iParam7))
				{
					unk_0xD5CB3DBDC39C94B8("STRING");
					if (bParam10)
					{
						unk_0x4C51E4FBCD1D8830(iParam7);
					}
					else
					{
						unk_0xB1953EBEF4D6BD85(iParam7);
					}
					unk_0x16754E7FB61E7A65(*uParam1);
				}
				unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			uParam1->f_1 = unk_0x826D1C7EA579B9BB(iParam0);
			if (!unk_0xF44A5E894FE76438(uParam1->f_6, 3))
			{
				if (unk_0x6901135DDCC4904D(uParam1->f_1))
				{
					unk_0x0D792BA553E57B27(uParam1->f_1, 7);
					unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6901135DDCC4904D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x4EA098C870B73AB7(&(uParam1->f_6), 3);
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
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_64(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_64(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

bool func_64(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_65()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_76))
	{
		unk_0x77E24C0B92B4FC24(iLocal_76, 2, 0);
		unk_0x77E24C0B92B4FC24(iLocal_76, 6, 0);
		unk_0x77E24C0B92B4FC24(iLocal_76, 3, 1);
		unk_0x77E24C0B92B4FC24(iLocal_76, 1, 0);
		unk_0x182DAF81B229194E(iLocal_76, unk_0xD5A676B97920D126(), 0, 16);
		unk_0x5457695C257D1470(iLocal_76, 0);
		unk_0x8188DB74546FF484(unk_0xA0A4DA31DEDFAC4F(iLocal_76));
	}
	else
	{
		unk_0x8188DB74546FF484(unk_0xA0A4DA31DEDFAC4F(iLocal_76));
	}
	if (func_153(iLocal_77))
	{
		unk_0xAFC3B32426D08964(iLocal_77, 1);
	}
}

int func_66()
{
	if (func_153(iLocal_77))
	{
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_77, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_81)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_76))
				{
					if (!iLocal_298)
					{
						if (!unk_0x88D40E81D8E0AD6F(iLocal_77))
						{
							unk_0x71908EDA6E89A925(iLocal_76, unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_298 = 1;
						}
					}
					if (unk_0x84A97C70FFDEC0C8() > iLocal_303 + 7000)
					{
						if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_77, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_44(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0))
							{
								iLocal_303 = unk_0x84A97C70FFDEC0C8();
							}
						}
					}
					unk_0x3C05FE2296BF5F53(iLocal_77);
					unk_0xCECA1DE4BBA42130(iLocal_77);
					iLocal_81 = 0;
				}
			}
			if (unk_0x7D720C677145C91C(iLocal_77, unk_0xD5A676B97920D126(), 1))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_76))
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
	if (func_153(iLocal_77))
	{
		if (((unk_0xA53003F5B0019FFC(iLocal_77, 0, 0) || unk_0xA53003F5B0019FFC(iLocal_77, 1, 0)) || unk_0xA53003F5B0019FFC(iLocal_77, 4, 0)) || unk_0xA53003F5B0019FFC(iLocal_77, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_68()
{
	if (func_153(iLocal_77) && unk_0x6901135DDCC4904D(uLocal_64))
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
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
		func_90();
	}
	if (func_89(uParam1) && unk_0xA3E7DE487D314279(uParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(uParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
		{
			if (func_84(uParam0, bParam7, bParam9, 0))
			{
				func_80(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(iVar0))
				{
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_64(iVar0))
							{
								func_76(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
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
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_64(iVar0))
						{
							func_76(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
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
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_64(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
				{
					func_63(uParam0, iVar0, 1);
				}
			}
			if (!func_84(uParam0, bParam7, bParam9, 0))
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
	if (func_89(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_75(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_76(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_77(char* sParam0)
{
	if (!func_78(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_64(sParam0)) || func_64("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
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
	if (bParam0)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		return 0;
	}
	if (func_27(0))
	{
		return 0;
	}
	if (func_79())
	{
		return 0;
	}
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_79()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

void func_80(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB529B2A4B7C64D6D(uParam1, 0))
	{
		func_63(uParam0, 0, 0);
	}
	if (func_83(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			uVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(uVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_81())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
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
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_81()
{
	return func_82(unk_0xFB6B3EEFAB2DD12C());
}

int func_82(var uParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_83(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_87(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_86(bParam1, bParam2, bParam3))
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
		func_90();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_90()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

int func_91(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_92(iParam0, bParam1, 0);
}

int func_92(var uParam0, bool bParam1, bool bParam2)
{
	return func_59(uParam0, !bParam1, bParam2);
}

int func_93()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_301 == 1)
	{
		fVar0 = 220f;
	}
	if (func_153(iLocal_77))
	{
		func_94(uLocal_64, iLocal_77, fVar0, 1061158912, 0);
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_77, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x27A556D1AF39812E(iLocal_77))
		{
			return 1;
		}
	}
	return 0;
}

void func_94(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		if ((unk_0x7887B64A08364778(iParam1) && unk_0x7887B64A08364778(unk_0xD5A676B97920D126())) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (unk_0x8041FE602D4689B1(iParam1))
			{
				if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam1), 0))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
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
						unk_0x5AF5569613C76AC3(uParam0, 1);
						unk_0x97C445677A852D45(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(uParam0, 0);
						unk_0x97C445677A852D45(uParam0, 255);
					}
				}
			}
			else if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam1)))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
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
						unk_0x5AF5569613C76AC3(uParam0, 1);
						unk_0x97C445677A852D45(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(uParam0, 0);
						unk_0x97C445677A852D45(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_95()
{
	if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_77, 0) && unk_0xF7FB02DF50202630(iLocal_77))
	{
		return 1;
	}
	return 0;
}

void func_96()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_75) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
				if (!unk_0x6A0583ECFCCECC9B(iLocal_75, 0))
				{
					if (iLocal_301 == 1)
					{
						if (func_103())
						{
							iLocal_50 = 1;
						}
					}
					else if (!unk_0x9B0C8A2FC23E64AB(iLocal_75) && !unk_0x03D369634BAB7D91(iLocal_75))
					{
						unk_0x0988FFC0C75637DF(iLocal_75, unk_0xD5A676B97920D126(), -1, 0, 2);
						if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0xA7D2EDC881768869(iLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							unk_0x456121A0AAC868D4(&uLocal_78);
							unk_0x290A57C93304EF16(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x290A57C93304EF16(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x290A57C93304EF16(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0xCFE67FBB69F1C410(uLocal_78);
							unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
							unk_0x873418BFBF9A6780(&uLocal_78);
							iLocal_304 = unk_0x84A97C70FFDEC0C8();
							iLocal_50 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_301 == 1)
				{
					unk_0x0988FFC0C75637DF(iLocal_75, unk_0xD5A676B97920D126(), -1, 0, 2);
					if (unk_0x1774A68441553185(iLocal_75, 242628503) != 1)
					{
						unk_0x456121A0AAC868D4(&uLocal_78);
						unk_0x290A57C93304EF16(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_78);
						unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
						unk_0x873418BFBF9A6780(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (unk_0x205B4FC17ACAF4C8(iLocal_75, unk_0xD5A676B97920D126(), 60f))
				{
					if (unk_0x1774A68441553185(iLocal_75, 242628503) != 1)
					{
						unk_0x456121A0AAC868D4(&uLocal_78);
						unk_0x290A57C93304EF16(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_61 == 0)
						{
							unk_0x290A57C93304EF16(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xCFE67FBB69F1C410(uLocal_78);
						unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
						unk_0x873418BFBF9A6780(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				if (func_103())
				{
					if (func_102())
					{
					}
				}
				break;
			
			case 2:
				if (func_103())
				{
					if (func_102())
					{
					}
				}
				if (iLocal_301 == 2)
				{
					if (!unk_0x205B4FC17ACAF4C8(iLocal_75, unk_0xD5A676B97920D126(), 60f) && !func_100(iLocal_75, -875674219))
					{
						unk_0xBE29918F5B8EC2EF(iLocal_75, unk_0xD5A676B97920D126(), 0);
					}
					if (func_99(iLocal_75, unk_0xD5A676B97920D126(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_304) > 6000)
							{
								func_98();
							}
						}
					}
				}
				if (unk_0x1774A68441553185(iLocal_75, 242628503) != 1 && !func_100(iLocal_75, -875674219))
				{
					if (iLocal_301 == 1)
					{
						Local_93 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x1AAFFE4111587B35(iLocal_75, Local_93, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0x1774A68441553185(iLocal_75, 242628503) == 7)
							{
								unk_0x456121A0AAC868D4(&uLocal_78);
								unk_0xBB64ADC3483D3A47(0, Local_93, 1f, 20000, fLocal_106, 1056964608);
								unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
								unk_0xCFE67FBB69F1C410(uLocal_78);
								unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
								unk_0x873418BFBF9A6780(&uLocal_78);
							}
						}
						else if (!unk_0xEBA40DFF7CCE3511(iLocal_75, sLocal_83, "waiting", 3))
						{
							unk_0x290A57C93304EF16(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_99(iLocal_75, unk_0xD5A676B97920D126(), 1) < 25f)
							{
								func_98();
							}
						}
					}
					else if (!unk_0xEBA40DFF7CCE3511(iLocal_75, sLocal_83, "waiting", 3))
					{
						unk_0x290A57C93304EF16(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x6DE9CCF2FCE172BD(iLocal_75, unk_0xD5A676B97920D126()))
				{
					unk_0x0988FFC0C75637DF(iLocal_75, unk_0xD5A676B97920D126(), -1, 0, 2);
				}
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_75, 40f, 40f, 10f, 0, 1, 0) && !unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_75, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_97())
					{
						if (iLocal_59)
						{
							if (iLocal_301 == 1)
							{
								unk_0x456121A0AAC868D4(&uLocal_78);
								unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
								unk_0x290A57C93304EF16(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0xCFE67FBB69F1C410(uLocal_78);
								unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
								unk_0x873418BFBF9A6780(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x84A97C70FFDEC0C8();
							}
							else
							{
								unk_0x456121A0AAC868D4(&uLocal_78);
								unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
								unk_0x290A57C93304EF16(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0xCFE67FBB69F1C410(uLocal_78);
								unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
								unk_0x873418BFBF9A6780(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x84A97C70FFDEC0C8();
							}
						}
						else if (!unk_0xEBA40DFF7CCE3511(iLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0x1774A68441553185(iLocal_75, 242628503) == 7)
							{
								if (!unk_0x205B4FC17ACAF4C8(iLocal_75, unk_0xD5A676B97920D126(), 45f))
								{
									unk_0x456121A0AAC868D4(&uLocal_78);
									unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
									unk_0xCFE67FBB69F1C410(uLocal_78);
									unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
									unk_0x873418BFBF9A6780(&uLocal_78);
								}
								else if ((unk_0x84A97C70FFDEC0C8() - iLocal_304) > 6000)
								{
									iLocal_59 = 1;
								}
							}
						}
						else if (!unk_0x205B4FC17ACAF4C8(iLocal_75, unk_0xD5A676B97920D126(), 70f))
						{
							unk_0x37338B7B7C4982DC(iLocal_75);
							unk_0x456121A0AAC868D4(&uLocal_78);
							unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
							unk_0xCFE67FBB69F1C410(uLocal_78);
							unk_0x8B06B801B92CEC2D(iLocal_75, uLocal_78);
							unk_0x873418BFBF9A6780(&uLocal_78);
							iLocal_304 += 4000;
						}
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_76))
					{
						unk_0xBB8F1D58B7578137(iLocal_76, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_76, 1);
						unk_0xD4B3FF1E63C36391(&iLocal_76);
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
					if (!unk_0x1AAFFE4111587B35(iLocal_75, Local_93, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0x1774A68441553185(iLocal_75, 2106541073) == 7)
						{
							unk_0xBB64ADC3483D3A47(iLocal_75, Local_93, 1f, 20000, fLocal_106, 1056964608);
						}
					}
					else if (!unk_0x205B4FC17ACAF4C8(iLocal_75, unk_0xD5A676B97920D126(), 50f))
					{
						unk_0xBE29918F5B8EC2EF(iLocal_75, unk_0xD5A676B97920D126(), -1);
					}
					iLocal_59 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_152(1))
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_75))
		{
			unk_0xBB8F1D58B7578137(iLocal_75, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
			unk_0x7D99F00F48D15ADB(iLocal_75, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_222();
	}
}

bool func_97()
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

int func_98()
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

float func_99(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(uParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

int func_100(int iParam0, int iParam1)
{
	if (func_101(uParam0))
	{
		if (unk_0x1774A68441553185(uParam0, iParam1) == 1 || unk_0x1774A68441553185(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (func_3(uParam0))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_102()
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

int func_103()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_76) && !unk_0x00B5B0B68211D89B(iLocal_75))
	{
		if (func_153(iLocal_77))
		{
			if (unk_0xE4133A0C3C6C74A7(iLocal_76, iLocal_77))
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

void func_104(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_105(bool bParam0)
{
	int iVar0;
	
	if (iLocal_301 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_128(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_128(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_128(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_127(8);
	}
	func_109(17, iLocal_301);
	func_106();
	func_222();
}

void func_106()
{
	func_107();
}

int func_107()
{
	if (func_108(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_108(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_109(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_125();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_124(iParam0))
	{
		func_123(iParam0, iParam1);
		if (!func_122(51))
		{
			func_118("RE_REWARD", 1, 0, 4000, 10000, func_121(), 0, 138, 0);
			func_117(51);
		}
		if (func_116(iParam0))
		{
			Global_101652.f_23938.f_2 = 3;
		}
		if (func_115(iParam0, iParam1) != 322)
		{
			func_110(func_115(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_101640 = iParam1;
		if (Global_101638 == 0)
		{
			if (((Global_101641 == 1 || Global_101641 == 5) || Global_101641 == 11) || Global_101641 == 25)
			{
				func_127(2);
			}
			else if ((Global_101641 == 26 || Global_101641 == 8) || Global_101641 == 17)
			{
				func_127(7);
			}
			else
			{
				func_127(1);
			}
		}
	}
}

void func_110(int iParam0, var uParam1, var uParam2)
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
		func_114((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = uParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_111();
	}
}

void func_111()
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
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_113(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_112() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
				{
					func_107();
				}
			}
		}
	}
}

int func_112()
{
	return Global_25185;
}

int func_113(int iParam0, int iParam1)
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
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
	}
	return 0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_115(int iParam0, int iParam1)
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

int func_116(int iParam0)
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

void func_117(int iParam0)
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
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_19353.f_150[iVar1]), iVar0);
	}
}

void func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_119(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_119(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCC257DA11A122B5F(sParam0, ""))
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
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_101652.f_19353[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101652.f_19353.f_145 < 9)
	{
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_4), sParam1, 16);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_8 = (unk_0x84A97C70FFDEC0C8() + iParam3);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_9 = iParam5;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_11 = iParam6;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_12 = uParam2;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_13 = iParam7;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_14 = iParam8;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = ((unk_0x84A97C70FFDEC0C8() + iParam3) + iParam4);
		}
		else
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = -1;
		}
		Global_101652.f_19353.f_145++;
		func_120();
	}
}

void func_120()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101652.f_19353.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[0])
			{
				Global_101652.f_19353.f_146[0] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[1])
			{
				Global_101652.f_19353.f_146[1] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[2])
			{
				Global_101652.f_19353.f_146[2] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_121()
{
	func_11();
	switch (Global_101652.f_2079.f_539.f_3549)
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

int func_122(int iParam0)
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
		return unk_0xF44A5E894FE76438(Global_101652.f_19353.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_123(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_23938.f_8[iParam0]), iParam1);
}

int func_124(int iParam0)
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

int func_125()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0FBCE11007AF301F(), 64);
	uVar16 = func_126(Var0);
	return uVar16;
}

int func_126(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6D9FF4C899CD785F(&cParam0))
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

void func_127(int iParam0)
{
	Global_101638 = iParam0;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_108(0))
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
		if (unk_0xF44A5E894FE76438(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_101652.f_6631.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_136(iParam1);
		Var0.f_4 = (unk_0x84A97C70FFDEC0C8() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x4EA098C870B73AB7(&(Var0.f_1), 0);
		Global_101652.f_6631.f_765[Global_101652.f_6631.f_866 /*10*/] = { Var0 };
		Global_101652.f_6631.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_135(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_134(&iVar20);
		iVar21 = func_133(Var10, Global_101652.f_6631.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_131(Global_101652.f_6631.f_765[iVar20 /*10*/]);
			Global_101652.f_6631.f_765[iVar20 /*10*/] = { Var10 };
			func_130(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_129(Var10))
			{
				func_131(Global_101652.f_6631.f_765[iVar20 /*10*/]);
				Global_101652.f_6631.f_765[iVar20 /*10*/] = { Var10 };
				func_130(&Var10);
				return 1;
			}
			else
			{
				if (!func_129(Global_101652.f_6631.f_765[iVar20 /*10*/]))
				{
					Global_101652.f_6631.f_765[iVar20 /*10*/] = { Var10 };
					func_130(&Var10);
					return 1;
				}
				func_130(&Var10);
				return 1;
			}
		}
		else
		{
			func_131(Var10);
			func_130(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_129(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_130(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_131(struct<10> Param0)
{
	if (func_129(Param0))
	{
		func_132(Param0.f_8, 0);
	}
}

void func_132(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101652.f_7556[iParam0] = 1;
	Global_101652.f_7556.f_236[iParam0] = (unk_0x84A97C70FFDEC0C8() + iParam1);
}

int func_133(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
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

void func_134(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_866)
	{
		if (func_133(Global_101652.f_6631.f_765[iVar0 /*10*/], Global_101652.f_6631.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_136(iParam1);
	Var0.f_4 = (unk_0x84A97C70FFDEC0C8() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x4EA098C870B73AB7(&(Var0.f_1), 0);
	return Var0;
}

int func_136(int iParam0)
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

void func_137(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_141(iParam0, 2, 1))
		{
			func_140(iParam0, 2, 1);
		}
	}
	else if (func_141(iParam0, 2, 1))
	{
		func_138(iParam0, 2, 1);
	}
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_112() == 0)
		{
			uVar0 = func_9(func_139(iParam0), -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, iParam1);
			func_6(func_139(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

int func_139(int iParam0)
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

void func_140(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_112() == 0)
		{
			uVar0 = func_9(func_139(iParam0), -1, 0);
			unk_0xB8A73E7DA87B2968(&uVar0, iParam1);
			func_6(func_139(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

int func_141(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_112() == 0)
		{
			return unk_0xF44A5E894FE76438(func_9(func_139(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_142(int iParam0)
{
	if (func_145())
	{
		Global_101642 = 1;
		Global_101639 = unk_0x84A97C70FFDEC0C8();
		if (func_116(Global_101641))
		{
			func_143(0);
		}
		unk_0x2CD0538D8247BA65(1, "RE_TITLE");
		if (iParam0 && func_116(Global_101641))
		{
			unk_0xB77AFA5DEFB190B1();
		}
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101652.f_23938.f_2 < 3)
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_76(func_144(iParam0), -1);
					Global_101652.f_23938.f_2++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_101648, 1))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_76(func_144(iParam0), -1);
					Global_101652.f_23938.f_3++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_101648, 2))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_76(func_144(iParam0), -1);
					Global_101652.f_23938.f_4++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 2);
				}
			}
			break;
	}
}

char* func_144(int iParam0)
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

int func_145()
{
	switch (func_146(&Global_25244, 0, 5, 0, unk_0x3ED6DDB11A7AD67F()))
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

int func_146(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89297.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_150(0))
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		unk_0x680452B13E83C406(unk_0xF3F8195C98263BF5(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x503D3643C5FE49F7(8);
		}
		Global_35777 = iParam2;
		Global_35739 = *uParam0;
		Global_35740 = iParam4;
		Global_35738 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35738 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35738)
			{
				if (Global_35744[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35739 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_148(iParam2))
		{
			return 0;
		}
		if (Global_35738 == 8)
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		Global_35744[Global_35738 /*4*/] = Global_35741;
		Global_35744[Global_35738 /*4*/].f_1 = iParam1;
		Global_35744[Global_35738 /*4*/].f_2 = iParam2;
		Global_35744[Global_35738 /*4*/].f_3 = 0;
		Global_35738++;
		if (iParam4 != 0)
		{
			func_147(uParam0, iParam4);
		}
	}
	return 2;
}

void func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35738 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35738)
	{
		if (Global_35744[iVar0 /*4*/] == *uParam0)
		{
			Global_35744[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_148(int iParam0)
{
	return func_149(iParam0, Global_35777);
}

int func_149(int iParam0, int iParam1)
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

int func_150(int iParam0)
{
	if (Global_35777 == 15)
	{
		return 0;
	}
	if (func_148(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_151()
{
	float fVar0;
	
	switch (iLocal_301)
	{
		case 1:
			if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
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
			if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0xC7E79C4D1964F968())
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_75))
		{
			if (unk_0xBB5DD90D4926F21A(iLocal_75))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_75))
		{
			if (iParam0 == 0 || func_99(iLocal_75, iLocal_76, 1) > 15f)
			{
				if (unk_0x1DEB1994A3C25E35(unk_0x6DE9A8183DA7678E(iLocal_75, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0x6DE9A8183DA7678E(iLocal_75, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0x6DE9A8183DA7678E(iLocal_75, 31086, 0f, 0f, 0f) };
				if ((unk_0xC02F302EE238AE9E(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xC02F302EE238AE9E(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xC02F302EE238AE9E(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xB8BA2B805FCFD11B(unk_0x6DE9A8183DA7678E(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x4404F63C94223B29(-1, unk_0x6DE9A8183DA7678E(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x7D720C677145C91C(iLocal_75, unk_0xD5A676B97920D126(), 1))
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

int func_153(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154()
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
			if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_99))
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
			if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_99))
			{
				bLocal_61 = true;
			}
			break;
	}
	unk_0x4ACD1E4CBA159ED1(iVar7);
	unk_0x4ACD1E4CBA159ED1(iVar8);
	unk_0x4ACD1E4CBA159ED1(iVar9);
	unk_0x49E996A1E39EAAD7(sLocal_83);
	unk_0x49E996A1E39EAAD7(sLocal_84);
	unk_0x49E996A1E39EAAD7(sLocal_85);
	unk_0x49E996A1E39EAAD7("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x9CD38B75BED5A7C7();
	if (((((((unk_0x7AD0E9452821C95D(iVar7) && unk_0x7AD0E9452821C95D(iVar8)) && unk_0x7AD0E9452821C95D(iVar9)) && unk_0xD7669BF035CDA5F6(sLocal_83)) && unk_0xD7669BF035CDA5F6(sLocal_84)) && unk_0xD7669BF035CDA5F6(sLocal_85)) && unk_0xD7669BF035CDA5F6("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x65A854A1D5D4913A())
	{
		if (iLocal_301 == 1)
		{
			func_168("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_96));
			func_168("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_99));
			iLocal_77 = unk_0xDE8A46A23FDCBBFE(iVar9, Var3, fVar6, 1, 1);
			unk_0x174D5C2CC44ACF1E(iLocal_77, 0, 0);
			unk_0x5919F7382C7F12DB(iLocal_77, 0);
			unk_0x70057AC4F7A58052(iLocal_77, 1);
			unk_0x123D5C97D1DCD96F(iLocal_77, 0);
			unk_0xAD4F35B95A9724FD(iLocal_77, 0);
			unk_0xE1896E88D2301642(iLocal_77, 2, 0);
			iLocal_76 = unk_0x0BD2D83BDCAED6E6(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0x237B0CFB6EEBD3BA(iLocal_76, 42, 1);
			unk_0x77E24C0B92B4FC24(iLocal_76, 3, 1);
			unk_0x4408969E7EC5C720(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xCC1ADAE00A66FF6C(iLocal_76, 10);
			unk_0x48EBAFA43BB90FED(iLocal_76, 1f);
			unk_0xE621038DBF05CB54(iLocal_76, 1f);
			unk_0xC243EB5E21E9A4EE(iLocal_77, 135, 135);
			unk_0x5CF7BD3BFEB33582("re_cartheft relGroupThief", &iLocal_329);
			unk_0x42AFB71D42AF78EA(5, iLocal_329, joaat("player"));
			unk_0x42AFB71D42AF78EA(2, iLocal_329, joaat("CIVMALE"));
			unk_0x42AFB71D42AF78EA(2, joaat("CIVMALE"), iLocal_329);
			unk_0x417BCC1ECC12E9A2(iLocal_76, iLocal_329);
			unk_0x58A5671D02E335D1(iLocal_77, 1);
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) - Local_52 };
				uLocal_55 = unk_0x1467106C5D2966B9(Var0.f_0, Var0.f_1);
			}
			iLocal_75 = unk_0x8C855D8124E955CE(5, iVar7, Local_52, uLocal_55, 1, 1);
			unk_0x545EC2C7EB66F6DD(iLocal_75, sVar11);
			unk_0x0988FFC0C75637DF(iLocal_75, unk_0xD5A676B97920D126(), -1, 2048, 2);
			unk_0x5BD2F51088536150(iLocal_75, 0, 0, 1, 0);
			unk_0x5BD2F51088536150(iLocal_75, 2, 2, 0, 0);
			unk_0x5BD2F51088536150(iLocal_75, 3, 1, 1, 0);
			unk_0x5BD2F51088536150(iLocal_75, 4, 1, 1, 0);
			unk_0xBE1D89447A1203C9(iLocal_75, 1);
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
				iLocal_77 = unk_0xDE8A46A23FDCBBFE(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_77 = unk_0xDE8A46A23FDCBBFE(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			unk_0x174D5C2CC44ACF1E(iLocal_77, 0, 0);
			unk_0x5919F7382C7F12DB(iLocal_77, 0);
			unk_0xE7D6BFCADFE1076B(iLocal_77, 3);
			unk_0x70057AC4F7A58052(iLocal_77, 1);
			unk_0x8A541F8CF0625EB6(iLocal_77, 0);
			unk_0x47EE94F716B70695(iLocal_77, 11, 2, 0);
			unk_0x47EE94F716B70695(iLocal_77, 16, 3, 0);
			unk_0x47EE94F716B70695(iLocal_77, 12, 1, 0);
			unk_0x47EE94F716B70695(iLocal_77, 13, 1, 0);
			unk_0xC6DCC91FF2EE9D39(iLocal_77, 3);
			unk_0x47EE94F716B70695(iLocal_77, 23, 6, 0);
			unk_0xC97D204BBF00FC6C(iLocal_77, 3);
			unk_0xDEFD029E49A376A2(iLocal_77, 18, 1);
			unk_0xDEFD029E49A376A2(iLocal_77, 22, 1);
			unk_0xC243EB5E21E9A4EE(iLocal_77, 143, 0);
			unk_0x44ADE3DECA6FE50F(iLocal_77, 31, 2);
			unk_0x123D5C97D1DCD96F(iLocal_77, 0);
			unk_0xAD4F35B95A9724FD(iLocal_77, 0);
			if (bLocal_61)
			{
				iLocal_75 = unk_0x8C855D8124E955CE(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_75 = unk_0x8C855D8124E955CE(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_75 = unk_0x8C855D8124E955CE(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0x5BD2F51088536150(iLocal_75, 0, 0, 0, 0);
			unk_0x5BD2F51088536150(iLocal_75, 2, 1, 0, 0);
			unk_0x5BD2F51088536150(iLocal_75, 3, 1, 2, 0);
			unk_0x5BD2F51088536150(iLocal_75, 4, 1, 2, 0);
			iLocal_76 = unk_0x0BD2D83BDCAED6E6(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0x4408969E7EC5C720(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xCC1ADAE00A66FF6C(iLocal_76, 10);
			unk_0x48EBAFA43BB90FED(iLocal_76, 1f);
			unk_0xE621038DBF05CB54(iLocal_76, 1f);
			unk_0x237B0CFB6EEBD3BA(iLocal_76, 42, 1);
			unk_0x545EC2C7EB66F6DD(iLocal_76, sVar12);
			Local_90 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_105 = 294.4744f;
			Local_87 = { -501.0442f, -2150.799f, 8.139f };
			Local_93 = { -493.8062f, -2156.036f, 8.1978f };
			Local_113 = { -504.365f, -2144.534f, 9.8585f };
			Local_116 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x74084690B489CA8D(iLocal_75, 0);
		unk_0x237B0CFB6EEBD3BA(iLocal_75, 185, 1);
		unk_0xF23CD3081EEF16FC(iLocal_77, 0);
		unk_0x09AB636BA0F9BE90(iLocal_77, 1, 1, 0);
		unk_0x5457695C257D1470(iLocal_75, 1);
		unk_0x5457695C257D1470(iLocal_76, 1);
		unk_0x0988FFC0C75637DF(iLocal_75, iLocal_76, -1, 0, 2);
		unk_0xBC82BAA0C1572324(iLocal_77);
		unk_0x58A5671D02E335D1(iLocal_77, 1);
		unk_0x4790D4CCED5150A0(iLocal_77, 0, 0);
		unk_0xFA03BA297FE81584(iVar9, 1);
		unk_0xE3E53903AE9B5BD5("RE_CAR_STEAL_SCENE");
		unk_0x233D2784147A4FE4(iLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0x9170305A9FF2AF18(iLocal_77, 1);
		unk_0x77E24C0B92B4FC24(iLocal_75, 17, 0);
		unk_0x738326127C161284(iLocal_75, 512, 1);
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
		func_167(&Local_122, 0, unk_0xD5A676B97920D126(), sLocal_120, 0, 1);
		func_167(&Local_122, 1, iLocal_75, sVar10, 0, 1);
		func_167(&Local_122, 2, iLocal_76, "CThief", 0, 1);
		return 1;
	}
	else if (func_155())
	{
		func_222();
	}
	return 0;
}

int func_155()
{
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_166())
		{
			return 0;
		}
	}
	if (func_162())
	{
		return 1;
	}
	if (func_156(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_156(float fParam0, bool bParam1)
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
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_121();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 2) && !unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 3))
				{
					func_157(iVar32, &Var0);
					fVar35 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var0.f_6, 1);
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

void func_157(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_158(uParam1, "Abigail1", func_160(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 1:
			func_158(uParam1, "Abigail2", func_160(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 2:
			func_158(uParam1, "Barry1", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 3:
			func_158(uParam1, "Barry2", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 4:
			func_158(uParam1, "Barry3", func_160(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 5:
			func_158(uParam1, "Barry3A", func_160(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 6:
			func_158(uParam1, "Barry3C", func_160(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 7:
			func_158(uParam1, "Barry4", func_160(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_159(iParam0), 0, 0);
			break;
		
		case 8:
			func_158(uParam1, "Dreyfuss1", func_160(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 9:
			func_158(uParam1, "Epsilon1", func_160(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 10:
			func_158(uParam1, "Epsilon2", func_160(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 11:
			func_158(uParam1, "Epsilon3", func_160(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 12:
			func_158(uParam1, "Epsilon4", func_160(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 13:
			func_158(uParam1, "Epsilon5", func_160(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 14:
			func_158(uParam1, "Epsilon6", func_160(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 15:
			func_158(uParam1, "Epsilon7", func_160(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 16:
			func_158(uParam1, "Epsilon8", func_160(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 17:
			func_158(uParam1, "Extreme1", func_160(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 18:
			func_158(uParam1, "Extreme2", func_160(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 19:
			func_158(uParam1, "Extreme3", func_160(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 20:
			func_158(uParam1, "Extreme4", func_160(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 21:
			func_158(uParam1, "Fanatic1", func_160(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_159(iParam0), 1, 0);
			break;
		
		case 22:
			func_158(uParam1, "Fanatic2", func_160(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_159(iParam0), 1, 0);
			break;
		
		case 23:
			func_158(uParam1, "Fanatic3", func_160(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_159(iParam0), 0, 1);
			break;
		
		case 24:
			func_158(uParam1, "Hao1", func_160(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_159(iParam0), 0, 1);
			break;
		
		case 25:
			func_158(uParam1, "Hunting1", func_160(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 26:
			func_158(uParam1, "Hunting2", func_160(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 27:
			func_158(uParam1, "Josh1", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 28:
			func_158(uParam1, "Josh2", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 29:
			func_158(uParam1, "Josh3", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 30:
			func_158(uParam1, "Josh4", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 31:
			func_158(uParam1, "Maude1", func_160(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 32:
			func_158(uParam1, "Minute1", func_160(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 33:
			func_158(uParam1, "Minute2", func_160(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 34:
			func_158(uParam1, "Minute3", func_160(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 35:
			func_158(uParam1, "MrsPhilips1", func_160(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 36:
			func_158(uParam1, "MrsPhilips2", func_160(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 37:
			func_158(uParam1, "Nigel1", func_160(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 38:
			func_158(uParam1, "Nigel1A", func_160(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 39:
			func_158(uParam1, "Nigel1B", func_160(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		
		case 40:
			func_158(uParam1, "Nigel1C", func_160(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		
		case 41:
			func_158(uParam1, "Nigel1D", func_160(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		
		case 42:
			func_158(uParam1, "Nigel2", func_160(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 43:
			func_158(uParam1, "Nigel3", func_160(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		
		case 44:
			func_158(uParam1, "Omega1", func_160(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 45:
			func_158(uParam1, "Omega2", func_160(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 46:
			func_158(uParam1, "Paparazzo1", func_160(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 47:
			func_158(uParam1, "Paparazzo2", func_160(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 48:
			func_158(uParam1, "Paparazzo3", func_160(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 49:
			func_158(uParam1, "Paparazzo3A", func_160(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 50:
			func_158(uParam1, "Paparazzo3B", func_160(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 51:
			func_158(uParam1, "Paparazzo4", func_160(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 52:
			func_158(uParam1, "Rampage1", func_160(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 54:
			func_158(uParam1, "Rampage3", func_160(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 55:
			func_158(uParam1, "Rampage4", func_160(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 56:
			func_158(uParam1, "Rampage5", func_160(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		
		case 53:
			func_158(uParam1, "Rampage2", func_160(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		
		case 57:
			func_158(uParam1, "TheLastOne", func_160(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 58:
			func_158(uParam1, "Tonya1", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 59:
			func_158(uParam1, "Tonya2", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 60:
			func_158(uParam1, "Tonya3", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 61:
			func_158(uParam1, "Tonya4", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		case 62:
			func_158(uParam1, "Tonya5", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_158(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_159(int iParam0)
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

struct<2> func_160(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_161(iParam0) };
	if (unk_0xC55B9553B3EDADE9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_161(int iParam0)
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

int func_162()
{
	if (func_165() && !func_166())
	{
		return 1;
	}
	if (func_164() && func_163())
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_101370 > 0;
}

int func_164()
{
	if (Global_88741 != -1)
	{
		return 1;
	}
	return 0;
}

int func_165()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 20);
	}
	return 0;
}

int func_166()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x6DAE83305DF67FC4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_167(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_168(char* sParam0, float fParam1)
{
	func_170(sParam0);
	func_169(fParam1);
}

void func_169(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_170(char* sParam0)
{
	if (unk_0xCC257DA11A122B5F(uParam0, uParam0))
	{
	}
}

int func_171()
{
	if (!func_148(5))
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_166())
		{
			return 0;
		}
	}
	if (func_156(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if ((Global_101641 == func_125() && unk_0xC9DD3DCF0C4F247D()) && Global_101642)
	{
		return 1;
	}
	return 0;
}

void func_173()
{
	if (func_101(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0) != iLocal_77 && unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0) != iLocal_80)
			{
				iLocal_80 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			}
		}
	}
}

void func_174(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x84A97C70FFDEC0C8();
	}
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		iVar0 = (unk_0x84A97C70FFDEC0C8() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xDCA5942DC912553C(uParam0) != 255)
				{
					unk_0x97C445677A852D45(uParam0, 255);
				}
			}
			else if (unk_0xDCA5942DC912553C(uParam0) != 0)
			{
				unk_0x97C445677A852D45(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xDCA5942DC912553C(uParam0) != 255)
			{
				unk_0x97C445677A852D45(uParam0, 255);
			}
		}
	}
}

void func_175()
{
}

void func_176(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_125();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_178(iParam0);
	unk_0x2D619292AF9BA314(0);
	unk_0x9B7FB1F4FDC71D5B(1);
	Global_101638 = 0;
	func_177();
}

void func_177()
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			unk_0xFA03BA297FE81584(unk_0xA0A4DA31DEDFAC4F(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)), 1);
		}
		unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
	}
}

void func_178(int iParam0)
{
	Global_101641 = iParam0;
}

int func_179(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138860)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_125();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_219())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_166())
			{
				return 0;
			}
		}
		if (!Global_101652.f_8028)
		{
			return 0;
		}
		if (func_108(0))
		{
			return 0;
		}
		if (func_162())
		{
			return 0;
		}
		if (func_218())
		{
			return 0;
		}
		if (Global_101641 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_156(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_217(iParam3))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_216(func_10()) == 4 || func_216(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_215(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_214(Global_101652.f_23938.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x84A97C70FFDEC0C8() - Global_101643) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_213())
		{
			return 0;
		}
		if (unk_0xC19959490984F18E())
		{
			return 0;
		}
		if (unk_0xC9DD3DCF0C4F247D())
		{
			return 0;
		}
		if (!func_204(4))
		{
			return 0;
		}
		if (!func_148(5))
		{
			return 0;
		}
		if (func_203(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x7B66213B5E371C3F(unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126())))
		{
			if ((unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(377.153f, -717.567f, 10.0536f) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(320.9934f, 265.2515f, 82.1221f)) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_203(0, 0))
		{
			return 0;
		}
		if (Global_25331)
		{
			return 0;
		}
		if (func_217(30) && !func_203(30, 0))
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
				Var5 = { Global_101652.f_2079.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101652.f_2079.f_539.f_1524[iVar4];
				if (func_202(iVar8))
				{
					if (func_180(iVar4))
					{
						if (!func_83(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var5) < (210f * 210f))
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

bool func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101652.f_2079.f_539.f_1524[iParam0];
	return func_181(iVar0);
}

int func_181(int iParam0)
{
	return func_182(iParam0, 1);
}

int func_182(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_202(iParam0))
	{
		return 0;
	}
	func_183(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_184(func_195(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_184(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_194(iParam0, iParam1))
	{
		iVar0 = func_193(iParam1);
		iVar1 = func_191(iParam0);
		iVar2 = (func_191(iParam0) - func_191(iParam1));
		iVar3 = (func_193(iParam0) - func_193(iParam1));
		iVar4 = (func_190(iParam0) - func_190(iParam1));
		iVar5 = (func_189(iParam0) - func_189(iParam1));
		iVar6 = (func_188(iParam0) - func_188(iParam1));
		iVar7 = (func_187(iParam0) - func_187(iParam1));
	}
	else
	{
		iVar0 = func_193(iParam0);
		iVar1 = func_191(iParam1);
		iVar2 = (func_191(iParam1) - func_191(iParam0));
		iVar3 = (func_193(iParam1) - func_193(iParam0));
		iVar4 = (func_190(iParam1) - func_190(iParam0));
		iVar5 = (func_189(iParam1) - func_189(iParam0));
		iVar6 = (func_188(iParam1) - func_188(iParam0));
		iVar7 = (func_187(iParam1) - func_187(iParam0));
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
		iVar4 = (iVar4 + func_186(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_185(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_185(float fParam0, float fParam1, float fParam2)
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

int func_186(int iParam0, int iParam1)
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

int func_187(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_188(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_189(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_190(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_191(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_192(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_192(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_193(int iParam0)
{
	return iParam0 & 15;
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_202(iParam1) || !func_202(iParam0))
	{
		return 1;
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
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_190(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_195()
{
	var uVar0;
	
	func_201(&uVar0, unk_0xABA05E2C283C3D5F());
	func_200(&uVar0, unk_0xF72CA3D5BA977203());
	func_199(&uVar0, unk_0x83D6515EE2CBF18C());
	func_198(&uVar0, unk_0x3D13C79BF80EB767());
	func_197(&uVar0, unk_0xA93FEF8677A8AF58());
	func_196(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_196(var uParam0, int iParam1)
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

void func_197(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_198(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(*uParam0);
	iVar1 = func_191(*uParam0);
	if (iParam1 < 1 || iParam1 > func_186(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_200(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_201(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_202(int iParam0)
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
	iVar0 = func_187(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_188(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_189(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_191(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_193(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_190(iParam0);
	if (iVar5 < 1 || iVar5 > func_186(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0, int iParam1)
{
	if (unk_0xF44A5E894FE76438(Global_101652.f_23938.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
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
						if (((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_212()) || Global_100699) || Global_25187) || func_211()) || func_51(8, -1)) || func_210()) || func_209()) || func_208()) || func_207()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1) || func_212()) || Global_25187) || func_211()) || func_51(8, -1)) || func_208()) || func_210()) || func_209()) || func_207()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_212()) || Global_100699) || Global_25187) || func_211()) || func_51(8, -1)) || func_208()) || func_210()) || func_209()) || func_207()) || Global_101652.f_6631.f_919[iVar0] == 5) || Global_36324 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_212()) || Global_100699) || Global_25187) || func_211()) || func_51(8, -1)) || func_210()) || func_209()) || func_207()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_212() || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || func_51(8, -1)) || func_207()) || func_206()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_210()) || func_209()) || func_206()) || func_205())
						{
							return 0;
						}
						if ((unk_0xB0D174BA6F10DF7B() && unk_0xF5009C16308B9147() != 3) && unk_0x96A69406F234414D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
						{
							if ((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_212()) || Global_25187) || func_211()) || func_51(8, -1)) || func_209()) || func_208()) || func_207()) || Global_101652.f_6631.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || func_212()) || func_209()) || Global_100699) || Global_25187) || func_211()) || Global_36908) || func_51(8, -1)) || func_208()) || func_206()) || func_207()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x13A15A61A159801A(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_212()) || Global_100699) || Global_25187) || func_211()) || func_51(8, -1)) || func_208()) || func_206()) || func_210()) || func_209()) || func_207())
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

var func_205()
{
	return Global_91525.f_1;
}

int func_206()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 13);
	}
	return 0;
}

int func_207()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if (Global_69957)
	{
		return 1;
	}
	else if (Global_55812 && !Global_55818)
	{
		return 1;
	}
	return 0;
}

bool func_209()
{
	return Global_91538.f_304 > 0;
}

bool func_210()
{
	return Global_91538.f_303 > 0;
}

var func_211()
{
	return Global_1315229;
}

int func_212()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_213()
{
	func_49();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_214(int iParam0)
{
	return func_194(func_195(), iParam0);
}

int func_215(int iParam0, int iParam1, int iParam2)
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

int func_216(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_101652.f_6631.f_919[iParam0];
}

bool func_217(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_219())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938.f_1, iVar0);
	}
	return bVar1;
}

int func_218()
{
	var uVar0;
	
	if (Global_25335)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x98BE504E8B389665(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_219()
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

int func_220(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_85804[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82571)
	{
		if (Global_82571[iVar0 /*5*/] != -1)
		{
			if (Global_69966.f_109[Global_82571[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_221()
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

void func_222()
{
	if (unk_0x7887B64A08364778(iLocal_76) && !unk_0xB529B2A4B7C64D6D(iLocal_76, 0))
	{
		unk_0x5457695C257D1470(iLocal_76, 0);
		unk_0x8188DB74546FF484(unk_0xA0A4DA31DEDFAC4F(iLocal_76));
		func_234(&iLocal_76, 1, 0, 1);
	}
	if (unk_0x7887B64A08364778(iLocal_75) && !unk_0xB529B2A4B7C64D6D(iLocal_75, 0))
	{
		unk_0x12A60388636C9B1C(iLocal_75, 310, 1);
		unk_0x5457695C257D1470(iLocal_75, 0);
	}
	if (unk_0x6901135DDCC4904D(uLocal_64))
	{
		unk_0x8A3D7569826A325D(&uLocal_64);
	}
	func_61(&uLocal_67);
	if (unk_0x6901135DDCC4904D(uLocal_65))
	{
		unk_0x8A3D7569826A325D(&uLocal_65);
	}
	if (unk_0x0FE8D1B72C1924FE("RE_CAR_STEAL_SCENE"))
	{
		if (func_153(iLocal_77))
		{
			unk_0xC1CDF4F2825C3F22(iLocal_77, 0);
		}
		unk_0xB3C38A4B84C152BF("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_301 == 2)
	{
		unk_0xF704C514612D7CA3(joaat("rocoto"));
	}
	else
	{
		unk_0xF704C514612D7CA3(joaat("peyote"));
	}
	func_16(&iLocal_77);
	if (func_153(iLocal_80))
	{
		unk_0x5919F7382C7F12DB(iLocal_80, 1);
	}
	unk_0x8FE45474D7594498(0);
	unk_0xFA5E84DCAE200259(1f);
	func_137(39, 0);
	func_137(40, 0);
	func_137(41, 0);
	func_137(42, 0);
	func_137(43, 0);
	func_137(44, 0);
	func_223(-1);
	func_63(&uLocal_330, 0, 0);
	unk_0x01DFCA3621B68C4A();
}

void func_223(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_125();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_172())
	{
		func_227(iParam0);
		unk_0x2CD0538D8247BA65(0, 0);
		Global_101643 = unk_0x84A97C70FFDEC0C8();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_101641, 1), 64);
		if (func_124(Global_101641) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101640, 64);
		}
		unk_0x0ED8A10006DC8E99(&cVar0, Global_101638, (unk_0x84A97C70FFDEC0C8() - Global_101639), 0);
	}
	else if (unk_0xF44A5E894FE76438(Global_101648, 0) && Global_101652.f_23938.f_2 < 3)
	{
		unk_0x4EA098C870B73AB7(&Global_101648, 0);
	}
	func_224(&Global_25244);
	Global_101642 = 0;
	func_178(-1);
}

void func_224(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35739)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35738 = 0;
	Global_35740 = 0;
	Global_35777 = 15;
	Global_55815 = 0;
	Global_55816 = 0;
}

char* func_225(int iParam0, bool bParam1)
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

void func_226(int iParam0)
{
	Global_36328 = (unk_0x84A97C70FFDEC0C8() + iParam0);
}

void func_227(int iParam0)
{
	func_228(iParam0, 0, func_233(iParam0));
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_195();
	func_231(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_230(iParam0, &uVar0);
	Var1 = { func_229(&uVar0) };
}

struct<16> func_229(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_189(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_188(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_190(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_193(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_191(*uParam0), 64);
	return Var0;
}

void func_230(int iParam0, var uParam1)
{
	Global_101652.f_23938.f_43[iParam0] = *uParam1;
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_191(*uParam0);
	iVar1 = func_193(*uParam0);
	iVar2 = func_190(*uParam0);
	iVar3 = func_189(*uParam0);
	iVar4 = func_188(*uParam0);
	iVar5 = func_187(*uParam0);
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
	iVar6 = func_186(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_186(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_232(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_201(uParam0, iParam1);
	func_200(uParam0, iParam2);
	func_199(uParam0, iParam3);
	func_197(uParam0, iParam5);
	func_198(uParam0, iParam4);
	func_196(uParam0, iParam6);
}

int func_233(int iParam0)
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

void func_234(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0x00B5B0B68211D89B(*uParam0))
		{
			unk_0x6D20A3AA82585D8C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xB42E7901B9B18D2A(*uParam0);
			}
			unk_0x7D99F00F48D15ADB(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x5457695C257D1470(*uParam0, 0);
			}
		}
		unk_0xD4B3FF1E63C36391(uParam0);
	}
}


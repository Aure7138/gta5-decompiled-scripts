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
	if (unk_0x7547D7CF93115D6D(11))
	{
		func_213();
	}
	func_212();
	if (iLocal_300 == 2)
	{
		if (func_211(34))
		{
			unk_0x883793591E631A3B();
		}
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x7E94D7B1F9207611(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				if (Var0.f_2 > 23f || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0x883793591E631A3B();
				}
			}
		}
	}
	if (func_170(Local_51, 17, iLocal_300, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		unk_0x883793591E631A3B();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_166();
		func_165(uLocal_62, &uLocal_65);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xC6C656365A451A8F(unk_0xAF65E5A58BE87D95());
		}
		func_164();
		if (!func_163())
		{
			if (func_162())
			{
				func_213();
			}
			if (unk_0x3BCCCFB165E15A65())
			{
				switch (iLocal_47)
				{
					case 0:
						if (func_145())
						{
							unk_0xF83CD415BF55C455(0);
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
						{
							if (((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(iLocal_74)) && func_144(iLocal_76)) && !func_143(0))
							{
								if (func_142())
								{
									if (func_144(iLocal_79))
									{
										unk_0x668C5F7E7EE6BF09(iLocal_79, 0);
									}
									func_133(1);
									unk_0xA54C914AEB391F49(0.1f);
									func_128(39, 1);
									func_128(40, 1);
									func_128(41, 1);
									func_128(42, 1);
									func_128(43, 1);
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
								{
									unk_0xA859D289EEB2D72A(iLocal_74, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
									unk_0xA1E4BA3B17C6D931(iLocal_74, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_213();
							}
						}
						else
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_74) && func_144(iLocal_76))
							{
								unk_0xF40D4EBDC0BA2C26(iLocal_74, iLocal_76, 20f, iLocal_298);
								unk_0xA1E4BA3B17C6D931(iLocal_74, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_103(0);
						}
						break;
				}
			}
			else
			{
				func_213();
			}
		}
		else
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_75))
			{
				if (Local_121[2 /*10*/].f_7)
				{
					func_102(&Local_121, 2);
				}
			}
			unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
			func_94();
			if (func_144(iLocal_76) && !func_93())
			{
				if (func_91())
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
					{
						switch (iLocal_48)
						{
							case 0:
								if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
								{
									if (unk_0x53170344050F2301(iLocal_75, iLocal_76, 0))
									{
										if (iLocal_300 == 2)
										{
											unk_0x3C2614E45AB2F499(iLocal_75, 1);
											unk_0x3C2614E45AB2F499(iLocal_76, 1);
											unk_0xB5DC017AFD430D1B(&uLocal_77);
											unk_0x9C373E78BA27BAA4(0, iLocal_76, unk_0x507DA4994C3D8EBD(), 8, 30f, iLocal_299, 200f, 10f, 0);
											unk_0x6EE8A5CF9AC75F12(uLocal_77);
											unk_0x8229311A391A4EC6(iLocal_75, uLocal_77);
											unk_0x9F77DFFC61FCB68C(&uLocal_77);
										}
										else
										{
											unk_0x3C2614E45AB2F499(iLocal_75, 1);
											unk_0xB5DC017AFD430D1B(&uLocal_77);
											unk_0xDD4FB99FF9DED807(0, iLocal_76, 30, 1000);
											unk_0x9C373E78BA27BAA4(0, iLocal_76, unk_0x507DA4994C3D8EBD(), 8, 40f, iLocal_299, 200f, 10f, 1);
											unk_0x6EE8A5CF9AC75F12(uLocal_77);
											unk_0x8229311A391A4EC6(iLocal_75, uLocal_77);
											unk_0x9F77DFFC61FCB68C(&uLocal_77);
										}
										Local_316 = { unk_0xF72E61A2DB753A80(iLocal_76, unk_0xD33827A2E07C4BE6(iLocal_76, "wheel_lr")) };
										Local_319 = { unk_0xC9351EFF34BB33C0(iLocal_76, Local_316) };
										unk_0x8BCDEA8221B6D08A("scr_wheel_burnout", iLocal_76, Local_319 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_322 = { unk_0xF72E61A2DB753A80(iLocal_76, unk_0xD33827A2E07C4BE6(iLocal_76, "wheel_rr")) };
										Local_325 = { unk_0xC9351EFF34BB33C0(iLocal_76, Local_322) };
										unk_0x8BCDEA8221B6D08A("scr_wheel_burnout", iLocal_76, Local_325 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0xD361727124133DF3(uLocal_63))
										{
											uLocal_63 = func_89(iLocal_76, 1, 0);
										}
										unk_0x1CD86B48C55CAB17(2);
										iLocal_48 = 1;
									}
									else if (unk_0x6255AE2591FE7603(iLocal_76, unk_0x507DA4994C3D8EBD(), 1))
									{
										if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
										{
											unk_0xA859D289EEB2D72A(iLocal_75, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
											unk_0xA1E4BA3B17C6D931(iLocal_75, 1);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_213();
									}
								}
								else
								{
									unk_0xF40D4EBDC0BA2C26(iLocal_74, iLocal_76, 20f, iLocal_298);
									unk_0xA1E4BA3B17C6D931(iLocal_74, 1);
									unk_0x4EDE34FBADD967A6(0);
									func_103(0);
								}
								break;
							
							case 1:
								if (func_144(iLocal_76))
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
											unk_0xADE31BE382A60FA4(iLocal_76, fLocal_118);
											iVar3 = unk_0x9A67DC5FE3A03F32(unk_0xBF1B13057E5119A4(iLocal_76, 1), 5f, 0, 4);
											if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
											{
												if (func_144(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
												{
													if (unk_0x5D0DED2275F131C9(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), iLocal_76))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_144(iVar3))
												{
													if (iVar3 != iLocal_76)
													{
														if (unk_0x5D0DED2275F131C9(iVar3, iLocal_76))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x6E8B0986A202BDDE(iLocal_76) < 700f)
									{
										func_213();
									}
								}
								func_66();
								if ((((((func_65() || func_64()) || unk_0x932B30DC68C85A46(iLocal_76)) || unk_0xD803509E70F20530(iLocal_76, 1, 5000)) || unk_0xEF57771119A32DB2(iLocal_76)) || unk_0x9F94F2CFDCA78C55(iLocal_75)) || !unk_0x53170344050F2301(iLocal_75, iLocal_76, 0))
								{
									if (unk_0xA2A45E58AC3DF6C5("RE_CAR_STEAL_SCENE"))
									{
										if (func_144(iLocal_76))
										{
											unk_0x66685ABDD5A8BFC3(iLocal_76, 0);
										}
										unk_0xAB5C0FE0C680BC7F("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xD361727124133DF3(uLocal_63))
									{
										unk_0xA0A65B537B1F11EC(&uLocal_63);
									}
									func_63();
									if (unk_0xD361727124133DF3(uLocal_62))
									{
										unk_0xA0A65B537B1F11EC(&uLocal_62);
									}
									unk_0x7CEA616AE5D86DF7(iLocal_74);
									unk_0x7674FE6F22323056(iLocal_76, 50f, 5, 0);
									uLocal_64 = func_89(iLocal_76, 0, 0);
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iLocal_76, 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1));
									fLocal_106 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iLocal_76, 1), unk_0xBF1B13057E5119A4(iLocal_74, 1));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_74, 1));
									func_61(&uLocal_329, 0, 0);
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								if (func_144(iLocal_76))
								{
									if (unk_0x6E8B0986A202BDDE(iLocal_76) < 700f)
									{
										func_213();
									}
								}
								if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
								{
									func_213();
								}
								if (!unk_0xE5D56342B0FF1D0D(iLocal_75))
								{
									if (!unk_0x53170344050F2301(iLocal_75, iLocal_76, 0))
									{
										func_60(iLocal_75, &uLocal_66, -1, 0, 0, 0, -1082130432, 0);
									}
								}
								else
								{
									func_59(&uLocal_66);
								}
								if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
								{
									if (!unk_0xC20B334EFA64243F(iLocal_75, unk_0x507DA4994C3D8EBD()))
									{
										unk_0x247B2966C6C2A4C1(iLocal_75, unk_0x507DA4994C3D8EBD(), 0, 16);
										unk_0xFF467904A8A12BBE(unk_0x26EA758C2A691D06(iLocal_75));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iLocal_76, 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > (fLocal_108 + 220f) || unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iLocal_76, 1), unk_0xBF1B13057E5119A4(iLocal_74, 1)) > (fLocal_106 + 220f)) || unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_74, 1)) > (fLocal_107 + 220f))
								{
									if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_76, 0))
									{
										func_103(0);
									}
									else
									{
										func_213();
									}
								}
								if (unk_0xD361727124133DF3(uLocal_64))
								{
									if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_76, 0))
									{
										unk_0xA0A65B537B1F11EC(&uLocal_64);
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
											if (!unk_0x23A9305227426F8B(Local_92, 2f) && !unk_0x9226425D9E480D72(iLocal_74))
											{
												unk_0xF85858E5CBF4D9F0(iLocal_74, Local_92, 1, 0, 0, 1);
												unk_0x248DC16118AE5035(iLocal_74, fLocal_105);
												iLocal_59 = 1;
											}
										}
										iLocal_49 = 3;
										iLocal_303 = unk_0xF976C624234A4AA8();
									}
									else if (unk_0x2F406E91B59DB558(iLocal_76, iLocal_74, 20f, 20f, 7f, 0, 1, 0))
									{
										func_53();
										if (func_52())
										{
											if (unk_0xCA8508992C844A64(iLocal_74, iLocal_76, -1, 0, 0))
											{
												if (!bLocal_295)
												{
													if (func_42(&Local_121, cLocal_293, sLocal_289, 4, 0, 0, 0))
													{
													}
												}
												unk_0xF40D4EBDC0BA2C26(iLocal_74, iLocal_76, 35f, iLocal_298);
												unk_0xA1E4BA3B17C6D931(iLocal_74, 1);
												func_103(1);
											}
										}
									}
								}
								else if (unk_0xD361727124133DF3(uLocal_62))
								{
									if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_76, 0))
									{
										if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_74, fLocal_55, fLocal_55, fLocal_55, 0, 1, 0))
										{
											if (func_41(1, 0, 1))
											{
												unk_0xA0A65B537B1F11EC(&uLocal_62);
												if (iLocal_300 == 1)
												{
													if (func_40(unk_0xA9D6B28E708753B6(iLocal_76), 336f, 90f))
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
												unk_0x395C5D98343F0040(sLocal_305);
												iLocal_49 = 4;
												iLocal_48 = 3;
											}
										}
										else
										{
											func_38(unk_0xBF1B13057E5119A4(iLocal_74, 1), &fLocal_55, &fLocal_56);
										}
									}
									else
									{
										unk_0xA0A65B537B1F11EC(&uLocal_62);
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
											unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
										}
										func_103(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_74))
									{
										unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
									}
									func_103(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
						{
							if (unk_0x53170344050F2301(iLocal_75, iLocal_76, 0))
							{
								unk_0x9C373E78BA27BAA4(iLocal_75, iLocal_76, unk_0x507DA4994C3D8EBD(), 8, 50f, iLocal_299, 10f, 10f, 0);
								unk_0xA1E4BA3B17C6D931(iLocal_75, 1);
								unk_0xFF467904A8A12BBE(unk_0x26EA758C2A691D06(iLocal_75));
							}
							else
							{
								unk_0xA859D289EEB2D72A(iLocal_75, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
								unk_0xA1E4BA3B17C6D931(iLocal_75, 1);
								unk_0xFF467904A8A12BBE(unk_0x26EA758C2A691D06(iLocal_75));
							}
						}
						unk_0x4EDE34FBADD967A6(0);
						func_213();
					}
				}
				else
				{
					if (iLocal_48 == 1)
					{
						if (func_144(iLocal_76))
						{
							unk_0x10EA498723DC5A09(&iLocal_76);
						}
						if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
						{
							unk_0x8019BB3BA236A900(&iLocal_75);
						}
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
					{
						if (unk_0x22605DE2E6933CF2(iLocal_74, sLocal_82, "agitated_idle_a", 3))
						{
							unk_0x6F5A8AEA65939753(iLocal_74, "waiting", sLocal_82, -2f);
						}
						func_1(iLocal_74, "GENERIC_CURSE_HIGH", 24);
						unk_0xB5DC017AFD430D1B(&uLocal_77);
						unk_0x804E88DCA0C40FF8(0, Local_101, 1f, 20000, 40000f, 1056964608);
						unk_0x371C90C63129A983(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x6EE8A5CF9AC75F12(uLocal_77);
						unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
						unk_0x9F77DFFC61FCB68C(&uLocal_77);
					}
					func_213();
				}
			}
			else
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
				{
					unk_0xA859D289EEB2D72A(iLocal_75, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_75, 1);
				}
				if (unk_0xFD68187442384158(iLocal_76))
				{
					unk_0x240BBFD908B5DA09(iLocal_76, 50f);
				}
				func_213();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(iParam0, sParam1, func_2(iParam2), 1);
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
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
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
	if (((!unk_0x9F94F2CFDCA78C55(iLocal_74) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD())) && func_144(iLocal_76)) && unk_0xCE40391AB65FE305(sLocal_305))
	{
		switch (iLocal_50)
		{
			case 0:
				if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
				{
					if (func_41(1, 0, 1))
					{
						if (!unk_0x61D8FEAF64881CDA(Global_2263, 11))
						{
							if (!unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
							{
								func_31(1, 1, 1, 0);
								if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
								{
									unk_0x4A4C1A1BC79EFE8F(1);
									while (!func_30(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), fLocal_56, 1, 1056964608, 0, 1))
									{
										unk_0x0DCB93E7DEB1CC3F();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), fLocal_56, 0, 1056964608, 0, 1);
								}
								unk_0x0DCB93E7DEB1CC3F();
								if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
								{
									unk_0x6A8A5F1A990BB700(iLocal_74, 0);
								}
								func_28();
								func_23();
								unk_0x0DCB93E7DEB1CC3F();
								iLocal_50 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
				unk_0x377AA6DD990C0D26(iLocal_76, 0, 0, 0f);
				unk_0x82CD41B77AA3D46B(iLocal_76, 0, 1, 1, 1);
				unk_0x0DCB93E7DEB1CC3F();
				if (iLocal_300 == 1)
				{
					if (func_144(iLocal_76))
					{
						if (func_40(unk_0xA9D6B28E708753B6(iLocal_76), 336f, 90f))
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
					unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Local_86, 1, 0, 0, 1);
					unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
					unk_0xF85858E5CBF4D9F0(iLocal_74, Local_92, 1, 0, 0, 1);
					unk_0x248DC16118AE5035(iLocal_76, fLocal_104);
					unk_0xF85858E5CBF4D9F0(iLocal_76, Local_89, 1, 0, 0, 1);
				}
				else
				{
					if (!func_40(unk_0xA9D6B28E708753B6(iLocal_76), 64.6764f, 90f))
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
					unk_0xF85858E5CBF4D9F0(iLocal_76, Local_89, 1, 0, 0, 1);
					unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
					unk_0x248DC16118AE5035(iLocal_76, fLocal_104);
				}
				unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 0, 0);
				if (func_144(iLocal_76))
				{
					unk_0xD90C30D269B19096(iLocal_76);
					if (unk_0xFD68187442384158(iLocal_75))
					{
						if (unk_0x53170344050F2301(iLocal_75, iLocal_76, 0))
						{
							unk_0x8019BB3BA236A900(&iLocal_75);
						}
					}
				}
				Local_309 = { 0f, 0f, 0f };
				Local_312 = { 0f, 0f, 0f };
				uLocal_301 = unk_0x1BEDF9ACAEAB15F8(Local_309, Local_312, 2);
				unk_0xBC7DDBE5DB276E21(uLocal_301, iLocal_76, unk_0xD33827A2E07C4BE6(iLocal_76, sVar3));
				unk_0x37925BB9CC5A36FA(uLocal_301, Local_309, Local_312, 2);
				unk_0x206610E40EE4D7D9(iLocal_74, uLocal_301, sLocal_305, sLocal_307, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x206610E40EE4D7D9(unk_0x507DA4994C3D8EBD(), uLocal_301, sLocal_305, sLocal_308, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_78 = unk_0x690E3D6DDF30CA95("DEFAULT_ANIMATED_CAMERA", Local_112, Local_115, fLocal_111, 0, 2);
				unk_0xB754DFF4436CE5FF(uLocal_78, uLocal_301, "car_returned_cam", sLocal_305);
				unk_0x7FFC7B578074E5B8(iLocal_76, sLocal_306, sLocal_305, 1000f, 0, 0, 0, 0, 262144);
				Local_309 = { unk_0xBF1B13057E5119A4(iLocal_76, 1) };
				Local_312 = { unk_0xAD9A5677421290F3(iLocal_76, 2) };
				if (func_144(iLocal_79))
				{
					if (func_22(iLocal_79, Local_89, 1) <= 11f)
					{
						unk_0xF85858E5CBF4D9F0(iLocal_79, Var4, 1, 0, 0, 1);
						unk_0x248DC16118AE5035(iLocal_79, fVar7);
						unk_0xD90C30D269B19096(iLocal_79);
						unk_0xBAE5DF507EEC53C8(iLocal_79, 1, 0);
					}
				}
				unk_0x4BCBC9058A5CECE1(Local_89, 10f, 1, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_300 == 2)
				{
					unk_0x958003C8F1315BF5(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x958003C8F1315BF5(joaat("peyote"), 15);
				}
				unk_0xB895F3A5E3A84693(Local_89, 15f);
				unk_0x6F430D0F1783A56E(uLocal_78, 1);
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				iLocal_50 = 3;
				unk_0xF07E710BE9E8FA84(1f);
				break;
			
			case 3:
				unk_0x0DCB93E7DEB1CC3F();
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
				else if (unk_0x1955A5B9B65FEEBD(uLocal_301) && !bLocal_341)
				{
					if (unk_0x6385FE4ECBDF05D2(uLocal_301) >= 0.2f)
					{
						if (func_42(&Local_121, cLocal_293, sLocal_120, 4, 0, 0, 0))
						{
							iLocal_61 = 0;
							iLocal_50 = 4;
						}
					}
				}
				unk_0xF07E710BE9E8FA84(1f);
				break;
			
			case 4:
				unk_0x0DCB93E7DEB1CC3F();
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
				unk_0xF07E710BE9E8FA84(1f);
				if (iLocal_300 == 1)
				{
					if (unk_0x1955A5B9B65FEEBD(uLocal_301))
					{
						if (iLocal_315 == 0)
						{
							if (unk_0x6385FE4ECBDF05D2(uLocal_301) >= 0.83f)
							{
								unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
								unk_0xEC0A546609840086(unk_0x507DA4994C3D8EBD(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, unk_0x6385FE4ECBDF05D2(uLocal_301), 0, 0, 0);
								unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 1, 0);
								iLocal_315 = 1;
							}
						}
						if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
						{
							if (unk_0x6385FE4ECBDF05D2(uLocal_301) >= 0.83f)
							{
								if (unk_0x22605DE2E6933CF2(iLocal_74, sLocal_305, sLocal_307, 2))
								{
									unk_0x520A583BA5E4F9A7(iLocal_74, -1000f, 0);
									if (!unk_0x2A24448FF232F834(iLocal_74, 0))
									{
										if (func_144(iLocal_76))
										{
											unk_0x11460EBE0487B44F(iLocal_74, iLocal_76, -1);
											unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
										}
									}
									unk_0x243553B40CC46CFE(iLocal_74, 1, 0);
								}
								else
								{
									unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0x1955A5B9B65FEEBD(uLocal_301))
				{
					if (iLocal_315 == 0)
					{
						if (unk_0x6385FE4ECBDF05D2(uLocal_301) >= 0.86f)
						{
							unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
							unk_0xEC0A546609840086(unk_0x507DA4994C3D8EBD(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, unk_0x6385FE4ECBDF05D2(uLocal_301), 0, 0, 0);
							unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 1, 0);
							iLocal_315 = 1;
						}
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
					{
						if (unk_0x6385FE4ECBDF05D2(uLocal_301) > 0.847f)
						{
							if (unk_0x22605DE2E6933CF2(iLocal_74, sLocal_305, sLocal_307, 2))
							{
								unk_0x520A583BA5E4F9A7(iLocal_74, -1000f, 0);
								if (!unk_0x2A24448FF232F834(iLocal_74, 0))
								{
									if (func_144(iLocal_76))
									{
										unk_0x11460EBE0487B44F(iLocal_74, iLocal_76, -1);
										unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
									}
								}
								unk_0x243553B40CC46CFE(iLocal_74, 1, 0);
							}
							else
							{
								unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
							}
						}
					}
				}
				if (((unk_0x1955A5B9B65FEEBD(uLocal_301) && unk_0x6385FE4ECBDF05D2(uLocal_301) >= 0.99f) || !unk_0x1955A5B9B65FEEBD(uLocal_301)) || func_19())
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_76) && unk_0x22605DE2E6933CF2(iLocal_76, sLocal_305, sLocal_306, 3))
					{
						unk_0xADF6DEFE940F56B0(iLocal_76, sLocal_305, sLocal_306, 1f);
					}
					if (unk_0x1955A5B9B65FEEBD(uLocal_301))
					{
						unk_0x39ABDEE52B08CBD2(uLocal_301, 1f);
					}
					if (bLocal_341)
					{
						Var0 = { unk_0xE07FE144B472B7C8(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						unk_0xBC5E1C3D489E93FD(Var0, &(Var0.f_2));
						unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0x99E69251597182A2(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), Var0.f_2);
						unk_0x77CB1AAAF31275BE(0, 1065353216);
						unk_0xBE5E0E5A454F4D6A(0);
					}
					unk_0x832DBDBEA29906F5(unk_0x507DA4994C3D8EBD(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x2A24448FF232F834(iLocal_74, 0))
					{
						if (func_144(iLocal_76))
						{
							unk_0x11460EBE0487B44F(iLocal_74, iLocal_76, -1);
							unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
						}
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
					{
						if (unk_0x2A24448FF232F834(iLocal_74, 0))
						{
							if (func_144(iLocal_76))
							{
								unk_0x377AA6DD990C0D26(iLocal_76, 0, 0, 0f);
								unk_0x82CD41B77AA3D46B(iLocal_76, 0, 1, 1, 1);
								iLocal_304 = unk_0xF976C624234A4AA8();
								iLocal_50 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x0DCB93E7DEB1CC3F();
				if ((unk_0xF976C624234A4AA8() - iLocal_304) > 100)
				{
					if (func_3(iLocal_74) && func_144(iLocal_76))
					{
						unk_0xB5DC017AFD430D1B(&uLocal_77);
						unk_0xDD4FB99FF9DED807(0, iLocal_76, 9, 1000);
						unk_0xF40D4EBDC0BA2C26(0, iLocal_76, 25f, iLocal_298);
						unk_0x6EE8A5CF9AC75F12(uLocal_77);
						unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
						unk_0x9F77DFFC61FCB68C(&uLocal_77);
						unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
					}
					func_31(0, 1, 1, 0);
					if (bLocal_341)
					{
						if (unk_0x17D71902CA06091B(uLocal_78))
						{
							unk_0x6F430D0F1783A56E(uLocal_78, 0);
							unk_0x44151B6071157DDD(uLocal_78, 0);
						}
						unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0x77CB1AAAF31275BE(0, 1065353216);
						unk_0xBE5E0E5A454F4D6A(0);
						func_17(500, 1);
					}
					else
					{
						unk_0x28D21A983751927B(0, 0, 3, 0);
						unk_0x6F430D0F1783A56E(uLocal_78, 0);
					}
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
					func_16(&iLocal_76);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_74))
				{
					unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
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
			Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2829;
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
			if (iVar1 != 2829)
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
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
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
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
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
	uVar0 = Global_2454190[iParam0 /*6*/][func_7(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_14(unk_0x507DA4994C3D8EBD());
			if (func_13(iVar0) && (!func_12(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_12(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (unk_0xFD68187442384158(*iParam0))
	{
		unk_0xE5D56342B0FF1D0D(*iParam0);
		if (unk_0x73E2404DC70203CD(*iParam0) && unk_0x51BC2FF711F8CF71(*iParam0, 1))
		{
			unk_0xB67623A401171555(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0xC2C705ED6124A7C2() || unk_0xF468278E75CA2341())
	{
		if (!unk_0xC17F446CF864854D())
		{
			unk_0x662E87A876F1069D(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x8D4100BAA46EE198())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	if (func_20(1000))
	{
		if (unk_0xFA32E3333C5BD56A(joaat("rocoto")) || unk_0xFA32E3333C5BD56A(joaat("peyote")))
		{
			unk_0x6F430D0F1783A56E(uLocal_78, 0);
			unk_0x7C69A4879766A867(500);
			while (unk_0xF468278E75CA2341())
			{
				unk_0x0DCB93E7DEB1CC3F();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_341 = true;
			return 1;
		}
	}
	if (unk_0xC2C705ED6124A7C2())
	{
		if (unk_0xFA32E3333C5BD56A(joaat("rocoto")) || unk_0xFA32E3333C5BD56A(joaat("peyote")))
		{
			bLocal_341 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x8D4100BAA46EE198())
	{
		if ((unk_0xF976C624234A4AA8() - Global_27) > iParam0)
		{
			Global_26 = unk_0xF976C624234A4AA8();
		}
		Global_27 = unk_0xF976C624234A4AA8();
		if ((unk_0xF976C624234A4AA8() - Global_26) > iParam0)
		{
			if (func_21())
			{
				Global_26 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

void func_23()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
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
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
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
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
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
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
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
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_37(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_25())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_36(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_37(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_36(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_32(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
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
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_33()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
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

int func_36(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

void func_38(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) - Param0 };
		fVar4 = unk_0xA75239A5F28CBA62(Var1.f_0, Var1.f_1);
		if (func_39(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		fVar4 = unk_0xA75239A5F28CBA62(Var1.f_0, Var1.f_1);
		if (func_39(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 10f)
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
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		fVar0 = unk_0xA9D6B28E708753B6(iParam0);
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
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
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
					unk_0xD858EC6FECDB4B3F(0);
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
		if (unk_0xF611D1BB58990143())
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
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
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
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
	unk_0xD858EC6FECDB4B3F(0);
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		if (Global_68067)
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
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_50()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
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
	if (unk_0x9F94F2CFDCA78C55(iLocal_75))
	{
		return 1;
	}
	else if (func_144(iLocal_76))
	{
		if (!unk_0x2F406E91B59DB558(iLocal_75, iLocal_76, 10f, 10f, 10f, 0, 1, 0))
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
	
	if (func_144(iLocal_76))
	{
		fVar0 = unk_0xBA2FAB683F225FF0(iLocal_76);
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
		if (iVar1 && unk_0xD2EDB145978EF7B6(iLocal_76))
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
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_58(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_58(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_58(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
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
	
	if (unk_0xD361727124133DF3(*uParam0))
	{
		unk_0xA0A65B537B1F11EC(uParam0);
		bVar0 = true;
	}
	if (unk_0xD361727124133DF3(uParam0->f_1))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFD68187442384158(uParam0->f_7))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_7))
		{
			if (unk_0xF9A4CF70DB92FFF6(uParam0->f_7))
			{
				unk_0xADAC7AEDE592E5FF(uParam0->f_7, 0);
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
		iParam3 = unk_0x4D82797EF5035A9F();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (!unk_0xF9A4CF70DB92FFF6(iParam0))
		{
			unk_0xADAC7AEDE592E5FF(iParam0, 1);
			uParam1->f_7 = iParam0;
			unk_0x84A6F440181ACC23(iParam0, iParam2);
			unk_0x5A510F8866FE43EA(iParam0, fParam6);
			if (unk_0xD361727124133DF3(*uParam1))
			{
				unk_0xAE9EE75C62A1DACD(*uParam1, 7);
			}
		}
		unk_0x89B93927F67D1769(iParam0, iParam4);
		unk_0x9F23324EC3A61137(iParam0, iParam5);
		*uParam1 = unk_0x0D45FE2149D749B3(iParam0);
		if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 2))
		{
			if (unk_0xD361727124133DF3(*uParam1))
			{
				if (!unk_0x8FA72E132AAFA62F(iParam7))
				{
					unk_0x900AC0BD5F16D935("MCUSTBLIP");
					unk_0xD1F22DD7F7363AB6(iParam7);
					unk_0x3BF044F0B5B79140(*uParam1);
				}
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			uParam1->f_1 = unk_0x793BA2783243F773(iParam0);
			if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 3))
			{
				if (unk_0xD361727124133DF3(uParam1->f_1))
				{
					unk_0xAE9EE75C62A1DACD(uParam1->f_1, 7);
					unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD361727124133DF3(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xCD27BF29FB9012E2(&(uParam1->f_6), 3);
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
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_2446210.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x0D1C3C2B4975D8AC(iParam2);
		unk_0x33D978A3F3EC8BD3("FocusIn");
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x2E98407DE29E0D76(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD504011E20D63A81(sVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD504011E20D63A81(uParam0->f_3))
	{
		if (func_62(uParam0->f_3))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
	if (!unk_0xD504011E20D63A81(sVar0))
	{
		if (func_62(sVar0))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
}

bool func_62(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_63()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
	{
		unk_0x3A1E687904400847(iLocal_75, 2, 0);
		unk_0x3A1E687904400847(iLocal_75, 6, 0);
		unk_0x3A1E687904400847(iLocal_75, 3, 1);
		unk_0x3A1E687904400847(iLocal_75, 1, 0);
		unk_0x247B2966C6C2A4C1(iLocal_75, unk_0x507DA4994C3D8EBD(), 0, 16);
		unk_0x2DC5B31EBB810396(iLocal_75, 0);
		unk_0xFF467904A8A12BBE(unk_0x26EA758C2A691D06(iLocal_75));
	}
	else
	{
		unk_0xFF467904A8A12BBE(unk_0x26EA758C2A691D06(iLocal_75));
	}
	if (func_144(iLocal_76))
	{
		unk_0xCDC1FD4387DA32EC(iLocal_76, 1);
	}
}

int func_64()
{
	if (func_144(iLocal_76))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_76, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_80)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
				{
					if (!iLocal_297)
					{
						if (!unk_0x087F7B968CB47182(iLocal_76))
						{
							unk_0xE9A858D330662DC7(iLocal_75, unk_0x507DA4994C3D8EBD(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_297 = 1;
						}
					}
					if (unk_0xF976C624234A4AA8() > iLocal_302 + 7000)
					{
						if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_76, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_42(&Local_121, cLocal_293, sLocal_288, 4, 0, 0, 0))
							{
								iLocal_302 = unk_0xF976C624234A4AA8();
							}
						}
					}
					unk_0x7CEA616AE5D86DF7(iLocal_76);
					unk_0xE265BF17546FED93(iLocal_76);
					iLocal_80 = 0;
				}
			}
			if (unk_0x6255AE2591FE7603(iLocal_76, unk_0x507DA4994C3D8EBD(), 1))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
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
	if (func_144(iLocal_76))
	{
		if (((unk_0xEB461363EE450DCA(iLocal_76, 0, 0) || unk_0xEB461363EE450DCA(iLocal_76, 1, 0)) || unk_0xEB461363EE450DCA(iLocal_76, 4, 0)) || unk_0xEB461363EE450DCA(iLocal_76, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	if (func_144(iLocal_76) && unk_0xD361727124133DF3(uLocal_63))
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
	
	if (uParam0->f_1 && unk_0x4DA2E12E0157B5A3())
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD504011E20D63A81(iVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
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
	if (func_87(uParam1) && unk_0xDAB2315B565377E3(uParam1))
	{
		iVar1 = 0;
		if (unk_0x91F594068DF4424F(uParam1))
		{
			unk_0xF4127D3DAB8D011F(unk_0x274BAC44978F9161(iParam1));
			unk_0xB215D95552289435(unk_0x274BAC44978F9161(iParam1), 1);
			if (unk_0xC76769D28EAFDE03(unk_0x274BAC44978F9161(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1BA544973A67E699(iParam1))
		{
			unk_0x54E7B67452327959(unk_0x379620F9B34A512B(iParam1));
			if (unk_0xAEFA676AB984E73A(unk_0x379620F9B34A512B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam1))
		{
			unk_0xF30B2A027AD7244C(unk_0xB7E8BD80F6126D63(iParam1));
			if (unk_0x5F6DACBDBCB51121(unk_0xB7E8BD80F6126D63(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4DA2E12E0157B5A3())
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
					if ((unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0)) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						if ((iVar1 && !unk_0xBB51CB7A4D14453D()) && uParam8)
						{
							if (!func_62(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
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
				if (unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0))
				{
					if (((unk_0x9226425D9E480D72(iParam1) && iVar1) && !unk_0xBB51CB7A4D14453D()) && uParam8)
					{
						if (!func_62(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
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
			if (!unk_0xD504011E20D63A81(sParam5))
			{
				if (func_62(sParam5))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
			{
				if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
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
	if (func_87(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCBA47B699F417E4D(unk_0x507DA4994C3D8EBD());
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x2E98407DE29E0D76(1);
		unk_0x0D1C3C2B4975D8AC(0);
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		unk_0x33D978A3F3EC8BD3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0xF976C624234A4AA8()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0x8FA72E132AAFA62F(sParam0) && func_62(sParam0)) || func_62("CMN_HINT"))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
		return 0;
	}
	switch (Global_34909)
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
		if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA4ADA92842355D33())
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
	if (unk_0x1B3FC52C6D531434())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x25531002BCF0D968(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
		{
			if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
			{
				return 0;
			}
			if (unk_0x17883A5D027318C8())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

void func_78(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xE5D56342B0FF1D0D(uParam1))
	{
		func_61(uParam0, 0, 0);
	}
	if (func_81(Param2, 0f, 0f, 0f))
	{
		if (unk_0x91F594068DF4424F(iParam1))
		{
			uVar0 = unk_0x274BAC44978F9161(iParam1);
			if (!unk_0x2A24448FF232F834(uVar0, 0))
			{
				if (unk_0xBC57175ED22C698D(iVar0))
				{
					if (!func_79())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB9DC6B81F29B0CA8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x2E98407DE29E0D76(0);
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
	unk_0x05272DA4DFB8755D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iParam1, -1, iVar3, iVar4);
	unk_0x8EEEED91D5DD768C("FocusIn", 0, 0);
	unk_0xD56AC40382654643("HINT_CAM_SCENE");
	unk_0x84795EA8F54230A1(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xF976C624234A4AA8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_79()
{
	return func_80(unk_0xAF65E5A58BE87D95());
}

int func_80(var uParam0)
{
	if (unk_0x26EA758C2A691D06(unk_0x687D51F360787909(uParam0)) == joaat("mp_f_freemode_01"))
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
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
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
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
					{
						if (!func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xF976C624234A4AA8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
				if (!func_85(bParam1, bParam2, bParam3) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
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
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0xF34A5B7A9ABA0975(0, 80))
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
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0xF34A5B7A9ABA0975(0, 80))
			{
				unk_0x2E98407DE29E0D76(0);
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
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
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
			{
				unk_0x2E98407DE29E0D76(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0x1BA544973A67E699(iParam0))
		{
			if (unk_0xCA8794CE207FC6D5(unk_0x379620F9B34A512B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x91F594068DF4424F(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 4);
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
	if (func_144(iLocal_76))
	{
		func_92(uLocal_63, iLocal_76, fVar0, 1061158912, 0);
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_76, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x19F2D2C58150C825(iLocal_76))
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
	if (unk_0xD361727124133DF3(uParam0))
	{
		if ((unk_0xFD68187442384158(iParam1) && unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD())) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x1BA544973A67E699(iParam1))
			{
				if (unk_0xCA8794CE207FC6D5(unk_0x379620F9B34A512B(iParam1), 0))
				{
					fVar1 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam1, 1), 1);
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
						unk_0xE344B71AFE01D194(uParam0, 1);
						unk_0x80882386D3DF8627(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xE344B71AFE01D194(uParam0, 0);
						unk_0x80882386D3DF8627(uParam0, 255);
					}
				}
			}
			else if (unk_0x91F594068DF4424F(iParam1))
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(iParam1)))
				{
					fVar1 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam1, 1), 1);
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
						unk_0xE344B71AFE01D194(uParam0, 1);
						unk_0x80882386D3DF8627(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xE344B71AFE01D194(uParam0, 0);
						unk_0x80882386D3DF8627(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_93()
{
	if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_76, 0) && unk_0xFE5C9C2629E1907A(iLocal_76))
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_74) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		switch (iLocal_49)
		{
			case 0:
				iLocal_57 = iLocal_57;
				if (!unk_0x2A24448FF232F834(iLocal_74, 0))
				{
					if (iLocal_300 == 1)
					{
						if (func_101())
						{
							iLocal_49 = 1;
						}
					}
					else if (!unk_0x1983DA3C921BB046(iLocal_74) && !unk_0x08D60CA9F677F4AD(iLocal_74))
					{
						unk_0x8E759206778E571F(iLocal_74, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
						if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0xDA74C6C73AFEC1F3(iLocal_74, 345f, 0);
							iLocal_49 = 1;
						}
						else
						{
							unk_0xB5DC017AFD430D1B(&uLocal_77);
							unk_0xEC0A546609840086(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xEC0A546609840086(0, sLocal_83, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xEC0A546609840086(0, sLocal_83, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_77);
							unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
							unk_0x9F77DFFC61FCB68C(&uLocal_77);
							iLocal_303 = unk_0xF976C624234A4AA8();
							iLocal_49 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_300 == 1)
				{
					unk_0x8E759206778E571F(iLocal_74, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
					if (unk_0xEC043AB2FEE0E94F(iLocal_74, 242628503) != 1)
					{
						unk_0xB5DC017AFD430D1B(&uLocal_77);
						unk_0xEC0A546609840086(0, sLocal_83, sLocal_85, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uLocal_77);
						unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
						unk_0x9F77DFFC61FCB68C(&uLocal_77);
						iLocal_49 = 2;
					}
				}
				else if (unk_0x849DBD2D635C99D5(iLocal_74, unk_0x507DA4994C3D8EBD(), 60f))
				{
					if (unk_0xEC043AB2FEE0E94F(iLocal_74, 242628503) != 1)
					{
						unk_0xB5DC017AFD430D1B(&uLocal_77);
						unk_0xEC0A546609840086(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_60 == 0)
						{
							unk_0xEC0A546609840086(0, sLocal_83, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x6EE8A5CF9AC75F12(uLocal_77);
						unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
						unk_0x9F77DFFC61FCB68C(&uLocal_77);
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
					if (!unk_0x849DBD2D635C99D5(iLocal_74, unk_0x507DA4994C3D8EBD(), 60f) && !func_98(iLocal_74, -875674219))
					{
						unk_0xDE75E9DE5B6221E1(iLocal_74, unk_0x507DA4994C3D8EBD(), 0);
					}
					if (func_97(iLocal_74, unk_0x507DA4994C3D8EBD(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0xF976C624234A4AA8() - iLocal_303) > 6000)
							{
								func_96();
							}
						}
					}
				}
				if (unk_0xEC043AB2FEE0E94F(iLocal_74, 242628503) != 1 && !func_98(iLocal_74, -875674219))
				{
					if (iLocal_300 == 1)
					{
						Local_92 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x594EB70937EC1486(iLocal_74, Local_92, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0xEC043AB2FEE0E94F(iLocal_74, 242628503) == 7)
							{
								unk_0xB5DC017AFD430D1B(&uLocal_77);
								unk_0x804E88DCA0C40FF8(0, Local_92, 1f, 20000, fLocal_105, 1056964608);
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								unk_0x6EE8A5CF9AC75F12(uLocal_77);
								unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
								unk_0x9F77DFFC61FCB68C(&uLocal_77);
							}
						}
						else if (!unk_0x22605DE2E6933CF2(iLocal_74, sLocal_82, "waiting", 3))
						{
							unk_0xEC0A546609840086(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_97(iLocal_74, unk_0x507DA4994C3D8EBD(), 1) < 25f)
							{
								func_96();
							}
						}
					}
					else if (!unk_0x22605DE2E6933CF2(iLocal_74, sLocal_82, "waiting", 3))
					{
						unk_0xEC0A546609840086(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x59752F977A640536(iLocal_74, unk_0x507DA4994C3D8EBD()))
				{
					unk_0x8E759206778E571F(iLocal_74, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
				}
				if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_74, 40f, 40f, 10f, 0, 1, 0) && !unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_74, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_95())
					{
						if (iLocal_58)
						{
							if (iLocal_300 == 1)
							{
								unk_0xB5DC017AFD430D1B(&uLocal_77);
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								unk_0xEC0A546609840086(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x6EE8A5CF9AC75F12(uLocal_77);
								unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
								unk_0x9F77DFFC61FCB68C(&uLocal_77);
								iLocal_58 = 0;
								iLocal_303 = unk_0xF976C624234A4AA8();
							}
							else
							{
								unk_0xB5DC017AFD430D1B(&uLocal_77);
								unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
								unk_0xEC0A546609840086(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x6EE8A5CF9AC75F12(uLocal_77);
								unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
								unk_0x9F77DFFC61FCB68C(&uLocal_77);
								iLocal_58 = 0;
								iLocal_303 = unk_0xF976C624234A4AA8();
							}
						}
						else if (!unk_0x22605DE2E6933CF2(iLocal_74, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xEC043AB2FEE0E94F(iLocal_74, 242628503) == 7)
							{
								if (!unk_0x849DBD2D635C99D5(iLocal_74, unk_0x507DA4994C3D8EBD(), 45f))
								{
									unk_0xB5DC017AFD430D1B(&uLocal_77);
									unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
									unk_0x6EE8A5CF9AC75F12(uLocal_77);
									unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
									unk_0x9F77DFFC61FCB68C(&uLocal_77);
								}
								else if ((unk_0xF976C624234A4AA8() - iLocal_303) > 6000)
								{
									iLocal_58 = 1;
								}
							}
						}
						else if (!unk_0x849DBD2D635C99D5(iLocal_74, unk_0x507DA4994C3D8EBD(), 70f))
						{
							unk_0xAC57FBF981AB03F4(iLocal_74);
							unk_0xB5DC017AFD430D1B(&uLocal_77);
							unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_77);
							unk_0x8229311A391A4EC6(iLocal_74, uLocal_77);
							unk_0x9F77DFFC61FCB68C(&uLocal_77);
							iLocal_303 += 4000;
						}
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_75))
					{
						unk_0xA859D289EEB2D72A(iLocal_75, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_75, 1);
						unk_0xCA4DD92F1F2931F3(&iLocal_75);
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
					if (!unk_0x594EB70937EC1486(iLocal_74, Local_92, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_74, 2106541073) == 7)
						{
							unk_0x804E88DCA0C40FF8(iLocal_74, Local_92, 1f, 20000, fLocal_105, 1056964608);
						}
					}
					else if (!unk_0x849DBD2D635C99D5(iLocal_74, unk_0x507DA4994C3D8EBD(), 50f))
					{
						unk_0xDE75E9DE5B6221E1(iLocal_74, unk_0x507DA4994C3D8EBD(), -1);
					}
					iLocal_58 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_143(1))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
		{
			unk_0xA859D289EEB2D72A(iLocal_74, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
			unk_0xA1E4BA3B17C6D931(iLocal_74, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_213();
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
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(uParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_98(int iParam0, int iParam1)
{
	if (func_99(uParam0))
	{
		if (unk_0xEC043AB2FEE0E94F(uParam0, iParam1) == 1 || unk_0xEC043AB2FEE0E94F(iParam0, iParam1) == 0)
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
		if (!unk_0x9F94F2CFDCA78C55(uParam0))
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
	if (!unk_0x9F94F2CFDCA78C55(iLocal_75) && !unk_0x9F94F2CFDCA78C55(iLocal_74))
	{
		if (func_144(iLocal_76))
		{
			if (unk_0x764E7360C13E7383(iLocal_75, iLocal_76))
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
						unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_126(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_126(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
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
	func_213();
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
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_106(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
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
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_113(iParam0, iParam1) != 322)
		{
			func_108(func_113(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_125(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
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
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_111(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_110() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
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
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
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
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_117(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_117(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_118();
	}
}

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_119()
{
	func_11();
	switch (Global_97173.f_1729.f_539.f_3213)
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
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_121(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_124(Var0);
	return uVar16;
}

int func_124(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
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
	Global_97159 = iParam0;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	
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
		if (unk_0x61D8FEAF64881CDA(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_97173.f_5944.f_836 < 7)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_127(iParam1);
		Var0.f_4 = (unk_0xF976C624234A4AA8() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xCD27BF29FB9012E2(&(Var0.f_1), 0);
		Global_97173.f_5944.f_765[Global_97173.f_5944.f_836 /*10*/] = { Var0 };
		Global_97173.f_5944.f_836++;
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
		
		case 4:
			return 5;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_132(iParam0, 2, 1))
		{
			func_131(iParam0, 2, 1);
		}
	}
	else if (func_132(iParam0, 2, 1))
	{
		func_129(iParam0, 2, 1);
	}
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD27BF29FB9012E2(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_130(iParam0), -1, 0);
			unk_0xCD27BF29FB9012E2(&uVar0, iParam1);
			func_6(func_130(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

void func_131(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_130(iParam0), -1, 0);
			unk_0x3DBE2A7AF9E71C82(&uVar0, iParam1);
			func_6(func_130(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_132(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_110() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_9(func_130(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_114(Global_97162))
		{
			func_134(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_114(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_74(func_135(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_74(func_135(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_74(func_135(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)
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

int func_136()
{
	switch (func_137(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
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

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_141(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_139(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_34909);
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_142()
{
	float fVar0;
	
	switch (iLocal_300)
	{
		case 1:
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
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
			if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x4B1DB7F8007D3A8E())
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
		{
			if (unk_0x9226425D9E480D72(iLocal_74))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_143(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_74))
		{
			if (iParam0 == 0 || func_97(iLocal_74, iLocal_75, 1) > 15f)
			{
				if (unk_0x0982F2F40B035E77(unk_0xC5B1818639240D24(iLocal_74, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0xC5B1818639240D24(iLocal_74, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0xC5B1818639240D24(iLocal_74, 31086, 0f, 0f, 0f) };
				if ((unk_0x876E2901E525BE19(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x876E2901E525BE19(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0x876E2901E525BE19(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x0EECD6636717FFA3(unk_0xC5B1818639240D24(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x6588804F7BCB1101(-1, unk_0xC5B1818639240D24(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x6255AE2591FE7603(iLocal_74, unk_0x507DA4994C3D8EBD(), 1))
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

int func_144(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145()
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
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_95) < unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_98))
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
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_95) < unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_98))
			{
				bLocal_60 = true;
			}
			break;
	}
	unk_0xCBE6AC5010E5CE5C(iVar7);
	unk_0xCBE6AC5010E5CE5C(iVar8);
	unk_0xCBE6AC5010E5CE5C(iVar9);
	unk_0x395C5D98343F0040(sLocal_82);
	unk_0x395C5D98343F0040(sLocal_83);
	unk_0x395C5D98343F0040(sLocal_84);
	unk_0x395C5D98343F0040("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x903BC66D86D2CC1E();
	if (((((((unk_0xD291857D0C9C7FEC(iVar7) && unk_0xD291857D0C9C7FEC(iVar8)) && unk_0xD291857D0C9C7FEC(iVar9)) && unk_0xCE40391AB65FE305(sLocal_82)) && unk_0xCE40391AB65FE305(sLocal_83)) && unk_0xCE40391AB65FE305(sLocal_84)) && unk_0xCE40391AB65FE305("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x09B3E74864C634DA())
	{
		if (iLocal_300 == 1)
		{
			func_159("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_95));
			func_159("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_98));
			iLocal_76 = unk_0x546974B676313326(iVar9, Var3, fVar6, 1, 1);
			unk_0xC7523792059C60E4(iLocal_76, 0, 0);
			unk_0x668C5F7E7EE6BF09(iLocal_76, 0);
			unk_0xC158AF2A8304483D(iLocal_76, 1);
			unk_0x74032F41B7AB0FBB(iLocal_76, 0);
			unk_0x798A38BABF030708(iLocal_76, 0);
			unk_0x25A5C91E8079E04E(iLocal_76, 2, 0);
			iLocal_75 = unk_0xC68FBD37098CE438(iLocal_76, 22, iVar8, -1, 1, 1);
			unk_0x7FEDD088E489CE41(iLocal_75, 42, 1);
			unk_0x3A1E687904400847(iLocal_75, 3, 1);
			unk_0x3F9EDC2D18464273(iLocal_75, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xE7962295F4C99484(iLocal_75, 10);
			unk_0x96814E698DED4FE7(iLocal_75, 1f);
			unk_0x2C8D1FC52AC8C668(iLocal_75, 1f);
			unk_0x2972E055244638AD(iLocal_76, 135, 135);
			unk_0x46B6351EE89452C8("re_cartheft relGroupThief", &iLocal_328);
			unk_0xCA4EA7D4F6DCCD43(5, iLocal_328, joaat("player"));
			unk_0xCA4EA7D4F6DCCD43(2, iLocal_328, joaat("CIVMALE"));
			unk_0xCA4EA7D4F6DCCD43(2, joaat("CIVMALE"), iLocal_328);
			unk_0xE440546F94B26235(iLocal_75, iLocal_328);
			unk_0xCAFAFBAB1F150EFF(iLocal_76, 1);
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) - Local_51 };
				uLocal_54 = unk_0xA75239A5F28CBA62(Var0.f_0, Var0.f_1);
			}
			iLocal_74 = unk_0x7B88529CAE3B7F15(5, iVar7, Local_51, uLocal_54, 1, 1);
			unk_0x454E090239AFF6E8(iLocal_74, sVar11);
			unk_0x8E759206778E571F(iLocal_74, unk_0x507DA4994C3D8EBD(), -1, 2048, 2);
			unk_0xF2685765B7BEBCB0(iLocal_74, 0, 0, 1, 0);
			unk_0xF2685765B7BEBCB0(iLocal_74, 2, 2, 0, 0);
			unk_0xF2685765B7BEBCB0(iLocal_74, 3, 1, 1, 0);
			unk_0xF2685765B7BEBCB0(iLocal_74, 4, 1, 1, 0);
			unk_0x5466EB7A3FD9AFF0(iLocal_74, 1);
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
				iLocal_76 = unk_0x546974B676313326(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_76 = unk_0x546974B676313326(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			unk_0xC7523792059C60E4(iLocal_76, 0, 0);
			unk_0x668C5F7E7EE6BF09(iLocal_76, 0);
			unk_0x29CE15040B0080CB(iLocal_76, 3);
			unk_0xC158AF2A8304483D(iLocal_76, 1);
			unk_0xB7A7C917CF0448E6(iLocal_76, 0);
			unk_0x5D4B50E2007354F0(iLocal_76, 11, 2, 0);
			unk_0x5D4B50E2007354F0(iLocal_76, 16, 3, 0);
			unk_0x5D4B50E2007354F0(iLocal_76, 12, 1, 0);
			unk_0x5D4B50E2007354F0(iLocal_76, 13, 1, 0);
			unk_0x3B1F287A5A67026D(iLocal_76, 3);
			unk_0x5D4B50E2007354F0(iLocal_76, 23, 6, 0);
			unk_0xE181A03438FED412(iLocal_76, 3);
			unk_0xA157CC58CEE29910(iLocal_76, 18, 1);
			unk_0xA157CC58CEE29910(iLocal_76, 22, 1);
			unk_0x2972E055244638AD(iLocal_76, 143, 0);
			unk_0xA3A489EE6DDCCD16(iLocal_76, 31, 2);
			unk_0x74032F41B7AB0FBB(iLocal_76, 0);
			unk_0x798A38BABF030708(iLocal_76, 0);
			if (bLocal_60)
			{
				iLocal_74 = unk_0x7B88529CAE3B7F15(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_74 = unk_0x7B88529CAE3B7F15(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_74 = unk_0x7B88529CAE3B7F15(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0xF2685765B7BEBCB0(iLocal_74, 0, 0, 0, 0);
			unk_0xF2685765B7BEBCB0(iLocal_74, 2, 1, 0, 0);
			unk_0xF2685765B7BEBCB0(iLocal_74, 3, 1, 2, 0);
			unk_0xF2685765B7BEBCB0(iLocal_74, 4, 1, 2, 0);
			iLocal_75 = unk_0xC68FBD37098CE438(iLocal_76, 22, iVar8, -1, 1, 1);
			unk_0x3F9EDC2D18464273(iLocal_75, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xE7962295F4C99484(iLocal_75, 10);
			unk_0x96814E698DED4FE7(iLocal_75, 1f);
			unk_0x2C8D1FC52AC8C668(iLocal_75, 1f);
			unk_0x7FEDD088E489CE41(iLocal_75, 42, 1);
			unk_0x454E090239AFF6E8(iLocal_75, sVar12);
			Local_89 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_104 = 294.4744f;
			Local_86 = { -501.0442f, -2150.799f, 8.139f };
			Local_92 = { -493.8062f, -2156.036f, 8.1978f };
			Local_112 = { -504.365f, -2144.534f, 9.8585f };
			Local_115 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x6A750A31D18DA81A(iLocal_74, 0);
		unk_0x7FEDD088E489CE41(iLocal_74, 185, 1);
		unk_0x66C2903A9B8B3BCE(iLocal_76, 0);
		unk_0xE0E038A4E5C7727B(iLocal_76, 1, 1);
		unk_0x2DC5B31EBB810396(iLocal_74, 1);
		unk_0x2DC5B31EBB810396(iLocal_75, 1);
		unk_0x8E759206778E571F(iLocal_74, iLocal_75, -1, 0, 2);
		unk_0x6C5479F57AAC2554(iLocal_76);
		unk_0xCAFAFBAB1F150EFF(iLocal_76, 1);
		unk_0xCDED36A388C5C6F3(iLocal_76, 0, 0);
		unk_0x941F924D5E9C2140(iVar9, 1);
		unk_0xD56AC40382654643("RE_CAR_STEAL_SCENE");
		unk_0x182B7266FFDC76F3(iLocal_76, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0x9BE3CF0D916E6F6A(iLocal_76, 1);
		unk_0x3A1E687904400847(iLocal_74, 17, 0);
		unk_0xB2B080B88A4144B7(iLocal_74, 512, 1);
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
		func_158(&Local_121, 0, unk_0x507DA4994C3D8EBD(), sLocal_119, 0, 1);
		func_158(&Local_121, 1, iLocal_74, sVar10, 0, 1);
		func_158(&Local_121, 2, iLocal_75, "CThief", 0, 1);
		return 1;
	}
	else if (func_146())
	{
		func_213();
	}
	return 0;
}

int func_146()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_157())
		{
			return 0;
		}
	}
	if (func_153())
	{
		return 1;
	}
	if (func_147(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_147(float fParam0, bool bParam1)
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_119();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_148(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
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

void func_148(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_149(uParam1, "Abigail1", func_151(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 1:
			func_149(uParam1, "Abigail2", func_151(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 2:
			func_149(uParam1, "Barry1", func_151(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 3:
			func_149(uParam1, "Barry2", func_151(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 4:
			func_149(uParam1, "Barry3", func_151(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 5:
			func_149(uParam1, "Barry3A", func_151(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 6:
			func_149(uParam1, "Barry3C", func_151(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 7:
			func_149(uParam1, "Barry4", func_151(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_150(iParam0), 0, 0);
			break;
		
		case 8:
			func_149(uParam1, "Dreyfuss1", func_151(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 9:
			func_149(uParam1, "Epsilon1", func_151(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 10:
			func_149(uParam1, "Epsilon2", func_151(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 11:
			func_149(uParam1, "Epsilon3", func_151(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 12:
			func_149(uParam1, "Epsilon4", func_151(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 13:
			func_149(uParam1, "Epsilon5", func_151(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 14:
			func_149(uParam1, "Epsilon6", func_151(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 15:
			func_149(uParam1, "Epsilon7", func_151(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 16:
			func_149(uParam1, "Epsilon8", func_151(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 17:
			func_149(uParam1, "Extreme1", func_151(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 18:
			func_149(uParam1, "Extreme2", func_151(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 19:
			func_149(uParam1, "Extreme3", func_151(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 20:
			func_149(uParam1, "Extreme4", func_151(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 21:
			func_149(uParam1, "Fanatic1", func_151(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_150(iParam0), 1, 0);
			break;
		
		case 22:
			func_149(uParam1, "Fanatic2", func_151(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_150(iParam0), 1, 0);
			break;
		
		case 23:
			func_149(uParam1, "Fanatic3", func_151(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_150(iParam0), 0, 1);
			break;
		
		case 24:
			func_149(uParam1, "Hao1", func_151(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_150(iParam0), 0, 1);
			break;
		
		case 25:
			func_149(uParam1, "Hunting1", func_151(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 26:
			func_149(uParam1, "Hunting2", func_151(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 27:
			func_149(uParam1, "Josh1", func_151(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 28:
			func_149(uParam1, "Josh2", func_151(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 29:
			func_149(uParam1, "Josh3", func_151(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 30:
			func_149(uParam1, "Josh4", func_151(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 31:
			func_149(uParam1, "Maude1", func_151(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 32:
			func_149(uParam1, "Minute1", func_151(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 33:
			func_149(uParam1, "Minute2", func_151(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 34:
			func_149(uParam1, "Minute3", func_151(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 35:
			func_149(uParam1, "MrsPhilips1", func_151(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 36:
			func_149(uParam1, "MrsPhilips2", func_151(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 37:
			func_149(uParam1, "Nigel1", func_151(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 38:
			func_149(uParam1, "Nigel1A", func_151(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 39:
			func_149(uParam1, "Nigel1B", func_151(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 40:
			func_149(uParam1, "Nigel1C", func_151(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 41:
			func_149(uParam1, "Nigel1D", func_151(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 42:
			func_149(uParam1, "Nigel2", func_151(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 43:
			func_149(uParam1, "Nigel3", func_151(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 44:
			func_149(uParam1, "Omega1", func_151(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 45:
			func_149(uParam1, "Omega2", func_151(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 46:
			func_149(uParam1, "Paparazzo1", func_151(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 47:
			func_149(uParam1, "Paparazzo2", func_151(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 48:
			func_149(uParam1, "Paparazzo3", func_151(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 49:
			func_149(uParam1, "Paparazzo3A", func_151(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 50:
			func_149(uParam1, "Paparazzo3B", func_151(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 51:
			func_149(uParam1, "Paparazzo4", func_151(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 52:
			func_149(uParam1, "Rampage1", func_151(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 54:
			func_149(uParam1, "Rampage3", func_151(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 55:
			func_149(uParam1, "Rampage4", func_151(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 56:
			func_149(uParam1, "Rampage5", func_151(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 53:
			func_149(uParam1, "Rampage2", func_151(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 57:
			func_149(uParam1, "TheLastOne", func_151(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 58:
			func_149(uParam1, "Tonya1", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 59:
			func_149(uParam1, "Tonya2", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 60:
			func_149(uParam1, "Tonya3", func_151(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 61:
			func_149(uParam1, "Tonya4", func_151(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 62:
			func_149(uParam1, "Tonya5", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_149(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_150(int iParam0)
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

struct<2> func_151(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_152(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_152(int iParam0)
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

int func_153()
{
	if (func_156() && !func_157())
	{
		return 1;
	}
	if (func_155() && func_154())
	{
		return 1;
	}
	return 0;
}

bool func_154()
{
	return Global_96891 > 0;
}

int func_155()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_157()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_158(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_159(char* sParam0, float fParam1)
{
	func_161(sParam0);
	func_160(fParam1);
}

void func_160(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_161(char* sParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

int func_162()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_153())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_157())
		{
			return 0;
		}
	}
	if (func_147(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if ((Global_97162 == func_123() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_164()
{
	if (func_99(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0) != iLocal_76 && unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0) != iLocal_79)
			{
				iLocal_79 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			}
		}
	}
}

void func_165(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xF976C624234A4AA8();
	}
	if (unk_0xD361727124133DF3(uParam0))
	{
		iVar0 = (unk_0xF976C624234A4AA8() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x714F1BB644001893(uParam0) != 255)
				{
					unk_0x80882386D3DF8627(uParam0, 255);
				}
			}
			else if (unk_0x714F1BB644001893(uParam0) != 0)
			{
				unk_0x80882386D3DF8627(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x714F1BB644001893(uParam0) != 255)
			{
				unk_0x80882386D3DF8627(uParam0, 255);
			}
		}
	}
}

void func_166()
{
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_123();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_168();
}

void func_168()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_169(int iParam0)
{
	Global_97162 = iParam0;
}

int func_170(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
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
		if (!func_210())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_157())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_106(0))
		{
			return 0;
		}
		if (func_153())
		{
			return 0;
		}
		if (func_209())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_147(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_208(iParam3))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_207(func_10()) == 4 || func_207(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_206(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_205(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_204())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_195(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_194(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_194(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_208(30) && !func_194(30, 0))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_193(iVar8))
				{
					if (func_171(iVar4))
					{
						if (!func_81(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
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

bool func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_172(iVar0);
}

int func_172(int iParam0)
{
	return func_173(iParam0, 1);
}

int func_173(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_193(iParam0))
	{
		return 0;
	}
	func_174(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_174(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_175(func_186(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_175(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_185(iParam0, iParam1))
	{
		iVar0 = func_184(iParam1);
		iVar1 = func_182(iParam0);
		iVar2 = (func_182(iParam0) - func_182(iParam1));
		iVar3 = (func_184(iParam0) - func_184(iParam1));
		iVar4 = (func_181(iParam0) - func_181(iParam1));
		iVar5 = (func_180(iParam0) - func_180(iParam1));
		iVar6 = (func_179(iParam0) - func_179(iParam1));
		iVar7 = (func_178(iParam0) - func_178(iParam1));
	}
	else
	{
		iVar0 = func_184(iParam0);
		iVar1 = func_182(iParam1);
		iVar2 = (func_182(iParam1) - func_182(iParam0));
		iVar3 = (func_184(iParam1) - func_184(iParam0));
		iVar4 = (func_181(iParam1) - func_181(iParam0));
		iVar5 = (func_180(iParam1) - func_180(iParam0));
		iVar6 = (func_179(iParam1) - func_179(iParam0));
		iVar7 = (func_178(iParam1) - func_178(iParam0));
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
		iVar4 = (iVar4 + func_177(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_176(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_176(float fParam0, float fParam1, float fParam2)
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

int func_177(int iParam0, int iParam1)
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

int func_178(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_179(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_180(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_181(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_182(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_183(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_183(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_184(int iParam0)
{
	return iParam0 & 15;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_193(iParam1) || !func_193(iParam0))
	{
		return 1;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	iVar1 = func_178(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	var uVar0;
	
	func_192(&uVar0, unk_0x2784A8234E9B4202());
	func_191(&uVar0, unk_0x06F66CEDC24218A4());
	func_190(&uVar0, unk_0xE76C684D1C903A71());
	func_189(&uVar0, unk_0xA277D6C04B4B44C8());
	func_188(&uVar0, unk_0x1285C2DD1E4945FF());
	func_187(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_187(var uParam0, int iParam1)
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

void func_188(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_189(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_184(*uParam0);
	iVar1 = func_182(*uParam0);
	if (iParam1 < 1 || iParam1 > func_177(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_193(int iParam0)
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
	iVar0 = func_178(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_179(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_180(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_182(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_184(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_181(iParam0);
	if (iVar5 < 1 || iVar5 > func_177(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
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
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_201()) || func_200()) || func_199()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_203()) || Global_24446) || func_202()) || func_49(8, -1)) || func_199()) || func_201()) || func_200()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_199()) || func_201()) || func_200()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_201()) || func_200()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_203() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_49(8, -1)) || func_198()) || func_197()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_49(8, -1) || func_201()) || func_200()) || func_197()) || func_196())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_203()) || Global_24446) || func_202()) || func_49(8, -1)) || func_200()) || func_199()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_203()) || func_200()) || Global_96220) || Global_24446) || func_202()) || Global_35953) || func_49(8, -1)) || func_199()) || func_197()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_199()) || func_197()) || func_201()) || func_200()) || func_198())
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

var func_196()
{
	return Global_89823.f_1;
}

int func_197()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_198()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_200()
{
	return Global_89836.f_291 > 0;
}

bool func_201()
{
	return Global_89836.f_290 > 0;
}

var func_202()
{
	return Global_1315898;
}

int func_203()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_204()
{
	func_47();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_205(int iParam0)
{
	return func_185(func_186(), iParam0);
}

int func_206(int iParam0, int iParam1, int iParam2)
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

int func_207(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_208(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_210())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_209()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_84174[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_80941)
	{
		if (Global_80941[iVar0 /*5*/] != -1)
		{
			if (Global_68336.f_109[Global_80941[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_212()
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

void func_213()
{
	if (unk_0xFD68187442384158(iLocal_75) && !unk_0xE5D56342B0FF1D0D(iLocal_75))
	{
		unk_0x2DC5B31EBB810396(iLocal_75, 0);
		unk_0xFF467904A8A12BBE(unk_0x26EA758C2A691D06(iLocal_75));
		func_225(&iLocal_75, 1, 0, 1);
	}
	if (unk_0xFD68187442384158(iLocal_74) && !unk_0xE5D56342B0FF1D0D(iLocal_74))
	{
		unk_0xE131FC34DA8AD63F(iLocal_74, 310, 1);
		unk_0x2DC5B31EBB810396(iLocal_74, 0);
	}
	if (unk_0xD361727124133DF3(uLocal_63))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_63);
	}
	func_59(&uLocal_66);
	if (unk_0xD361727124133DF3(uLocal_64))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_64);
	}
	if (unk_0xA2A45E58AC3DF6C5("RE_CAR_STEAL_SCENE"))
	{
		if (func_144(iLocal_76))
		{
			unk_0x66685ABDD5A8BFC3(iLocal_76, 0);
		}
		unk_0xAB5C0FE0C680BC7F("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_300 == 2)
	{
		unk_0x3F5DB12BA017912F(joaat("rocoto"));
	}
	else
	{
		unk_0x3F5DB12BA017912F(joaat("peyote"));
	}
	func_16(&iLocal_76);
	if (func_144(iLocal_79))
	{
		unk_0x668C5F7E7EE6BF09(iLocal_79, 1);
	}
	unk_0x1CD86B48C55CAB17(0);
	unk_0xA54C914AEB391F49(1f);
	func_128(39, 0);
	func_128(40, 0);
	func_128(41, 0);
	func_128(42, 0);
	func_128(43, 0);
	func_214(-1);
	func_61(&uLocal_329, 0, 0);
	unk_0x883793591E631A3B();
}

void func_214(int iParam0)
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
	if (func_163())
	{
		func_218(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_217(30000);
		StringCopy(&cVar0, func_216(Global_97162, 1), 64);
		if (func_122(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_215(&Global_24503);
	Global_97163 = 0;
	func_169(-1);
}

void func_215(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_216(int iParam0, bool bParam1)
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

void func_217(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_218(int iParam0)
{
	func_219(iParam0, 0, func_224(iParam0));
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_186();
	func_222(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_221(iParam0, &uVar0);
	Var1 = { func_220(&uVar0) };
}

struct<16> func_220(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_180(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_178(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_181(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_184(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_182(*uParam0), 64);
	return Var0;
}

void func_221(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_182(*uParam0);
	iVar1 = func_184(*uParam0);
	iVar2 = func_181(*uParam0);
	iVar3 = func_180(*uParam0);
	iVar4 = func_179(*uParam0);
	iVar5 = func_178(*uParam0);
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
	iVar6 = func_177(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_177(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_223(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_192(uParam0, iParam1);
	func_191(uParam0, iParam2);
	func_190(uParam0, iParam3);
	func_189(uParam0, iParam4);
	func_188(uParam0, iParam5);
	func_187(uParam0, iParam6);
}

int func_224(int iParam0)
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

void func_225(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, 0);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}


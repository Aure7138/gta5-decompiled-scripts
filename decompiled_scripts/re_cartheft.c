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
	if (unk_0x89522B8E487D4EF9(11))
	{
		func_220();
	}
	func_219();
	if (iLocal_301 == 2)
	{
		if (func_218(34))
		{
			unk_0x52F20802944F8DCE();
		}
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xC62AC8D7E29686A2(unk_0xE7869D5D7816A9B6()))
			{
				Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				if (Var0.f_2 > 23f || unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0x52F20802944F8DCE();
				}
			}
		}
	}
	if (func_177(Local_52, 17, iLocal_301, 0, 0))
	{
		func_174(-1);
	}
	else
	{
		unk_0x52F20802944F8DCE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_173();
		func_172(uLocal_63, &uLocal_66);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x5EBAB4B3B3153030(unk_0x3F80C6638E3A1A90());
		}
		func_171();
		if (!func_170())
		{
			if (func_169())
			{
				func_220();
			}
			if (unk_0x18544C93469391DA())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_152())
						{
							unk_0x0DC2F8EF73751B15(0);
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						if (!unk_0xAF437D7C802AB246(iLocal_76))
						{
							if (((!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(iLocal_75)) && func_151(iLocal_77)) && !func_150(0))
							{
								if (func_149())
								{
									if (func_151(iLocal_80))
									{
										unk_0x0C27C841171728F7(iLocal_80, 0);
									}
									func_140(1);
									unk_0x63EB72E192731928(0.1f);
									func_135(39, 1);
									func_135(40, 1);
									func_135(41, 1);
									func_135(42, 1);
									func_135(43, 1);
									func_135(44, 1);
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else
							{
								if (!unk_0xAF437D7C802AB246(iLocal_75))
								{
									unk_0x4B79E06845D63B96(iLocal_75, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
									unk_0x8D6671D78D1F569B(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_220();
							}
						}
						else
						{
							if (!unk_0xAF437D7C802AB246(iLocal_75) && func_151(iLocal_77))
							{
								unk_0xE81313E76FEC1E97(iLocal_75, iLocal_77, 20f, iLocal_299);
								unk_0x8D6671D78D1F569B(iLocal_75, 1);
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
			if (unk_0xAF437D7C802AB246(iLocal_76))
			{
				if (Local_122[2 /*10*/].f_7)
				{
					func_102(&Local_122, 2);
				}
			}
			unk_0x175B431FD44549F5(unk_0x3F80C6638E3A1A90());
			func_94();
			if (func_151(iLocal_77) && !func_93())
			{
				if (func_91())
				{
					if (!unk_0xAF437D7C802AB246(iLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!unk_0xAF437D7C802AB246(iLocal_76))
								{
									if (unk_0x8AF655CC5761C7A2(iLocal_76, iLocal_77, 0))
									{
										if (iLocal_301 == 2)
										{
											unk_0xC602CB510D8B9EAE(iLocal_76, 1);
											unk_0xC602CB510D8B9EAE(iLocal_77, 1);
											unk_0x94026C1D1DB14225(&uLocal_78);
											unk_0x547730440687D355(0, iLocal_77, unk_0xE7869D5D7816A9B6(), 8, 30f, iLocal_300, 200f, 10f, 0);
											unk_0x911ECBCE73F8EC3F(uLocal_78);
											unk_0xC2C4A3A9FF2FBFFF(iLocal_76, uLocal_78);
											unk_0x33A90AD8FA327B72(&uLocal_78);
										}
										else
										{
											unk_0xC602CB510D8B9EAE(iLocal_76, 1);
											unk_0x94026C1D1DB14225(&uLocal_78);
											unk_0x94EB3B5D2CDEC0CD(0, iLocal_77, 30, 1000);
											unk_0x547730440687D355(0, iLocal_77, unk_0xE7869D5D7816A9B6(), 8, 40f, iLocal_300, 200f, 10f, 1);
											unk_0x911ECBCE73F8EC3F(uLocal_78);
											unk_0xC2C4A3A9FF2FBFFF(iLocal_76, uLocal_78);
											unk_0x33A90AD8FA327B72(&uLocal_78);
										}
										Local_317 = { unk_0x242AD66021ED4052(iLocal_77, unk_0x56ADDC5BECDDD8A5(iLocal_77, "wheel_lr")) };
										Local_320 = { unk_0x61CBEF33034AF6B9(iLocal_77, Local_317) };
										unk_0x48800639A234092B("scr_wheel_burnout", iLocal_77, Local_320 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_323 = { unk_0x242AD66021ED4052(iLocal_77, unk_0x56ADDC5BECDDD8A5(iLocal_77, "wheel_rr")) };
										Local_326 = { unk_0x61CBEF33034AF6B9(iLocal_77, Local_323) };
										unk_0x48800639A234092B("scr_wheel_burnout", iLocal_77, Local_326 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0xD11595488376CB53(uLocal_64))
										{
											uLocal_64 = func_89(iLocal_77, 1, 0);
										}
										unk_0x515F66600A2670E2(2);
										iLocal_49 = 1;
									}
									else if (unk_0x915685CA559C211B(iLocal_77, unk_0xE7869D5D7816A9B6(), 1))
									{
										if (!unk_0xAF437D7C802AB246(iLocal_76))
										{
											unk_0x4B79E06845D63B96(iLocal_76, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
											unk_0x8D6671D78D1F569B(iLocal_76, 1);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_220();
									}
								}
								else
								{
									unk_0xE81313E76FEC1E97(iLocal_75, iLocal_77, 20f, iLocal_299);
									unk_0x8D6671D78D1F569B(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
									func_103(0);
								}
								break;
							
							case 1:
								if (func_151(iLocal_77))
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
											unk_0xA299DFC4364AB573(iLocal_77, fLocal_119);
											iVar3 = unk_0x46B0F3CB5DC1CDFC(unk_0x1141852D07400777(iLocal_77, 1), 5f, 0, 4);
											if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
											{
												if (func_151(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
												{
													if (unk_0x3C1B1C07A878AE1D(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), iLocal_77))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_151(iVar3))
												{
													if (iVar3 != iLocal_77)
													{
														if (unk_0x3C1B1C07A878AE1D(iVar3, iLocal_77))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x28E83575387AA2B1(iLocal_77) < 700f)
									{
										func_220();
									}
								}
								func_66();
								if ((((((func_65() || func_64()) || unk_0xD1ED65515DA55794(iLocal_77)) || unk_0xF675ACE4149620B8(iLocal_77, 1, 5000)) || unk_0x9DD85FBDD5BC3BF1(iLocal_77)) || unk_0xAF437D7C802AB246(iLocal_76)) || !unk_0x8AF655CC5761C7A2(iLocal_76, iLocal_77, 0))
								{
									if (unk_0x64C1636D480771D9("RE_CAR_STEAL_SCENE"))
									{
										if (func_151(iLocal_77))
										{
											unk_0xD1AE9D189CB65173(iLocal_77, 0);
										}
										unk_0x61B624BA2305D0E5("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xD11595488376CB53(uLocal_64))
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_64);
									}
									func_63();
									if (unk_0xD11595488376CB53(uLocal_63))
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_63);
									}
									unk_0x29FD5B1A4BA65801(iLocal_75);
									unk_0x1B9F8E5CCC384F1E(iLocal_77, 50f, 5, 0);
									uLocal_65 = func_89(iLocal_77, 0, 0);
									fLocal_109 = unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iLocal_77, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iLocal_77, 1), unk_0x1141852D07400777(iLocal_75, 1));
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iLocal_75, 1));
									func_61(&uLocal_330, 0, 0);
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if (func_151(iLocal_77))
								{
									if (unk_0x28E83575387AA2B1(iLocal_77) < 700f)
									{
										func_220();
									}
								}
								if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
								{
									func_220();
								}
								if (!unk_0x76B2D234F1895632(iLocal_76))
								{
									if (!unk_0x8AF655CC5761C7A2(iLocal_76, iLocal_77, 0))
									{
										func_60(iLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432, 0, -1);
									}
								}
								else
								{
									func_59(&uLocal_67);
								}
								if (!unk_0xAF437D7C802AB246(iLocal_76))
								{
									if (!unk_0x0930CF2B56CCE2B8(iLocal_76, unk_0xE7869D5D7816A9B6()))
									{
										unk_0x13C351F151D49F89(iLocal_76, unk_0xE7869D5D7816A9B6(), 0, 16);
										unk_0x839E9476E54502A2(unk_0x1B2DC87EFB36DF80(iLocal_76));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iLocal_77, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) > (fLocal_109 + 220f) || unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iLocal_77, 1), unk_0x1141852D07400777(iLocal_75, 1)) > (fLocal_107 + 220f)) || unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iLocal_75, 1)) > (fLocal_108 + 220f))
								{
									if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_77, 0))
									{
										func_103(0);
									}
									else
									{
										func_220();
									}
								}
								if (unk_0xD11595488376CB53(uLocal_65))
								{
									if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_77, 0))
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_65);
										uLocal_63 = func_55(iLocal_75, 0, 0);
										func_54(&uLocal_66);
										func_61(&uLocal_330, 0, 0);
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
											if (!unk_0x86ECD59CFE6143AC(Local_93, 2f) && !unk_0xD525F9D50CBB6A5D(iLocal_75))
											{
												unk_0x88A973CE47FBEF95(iLocal_75, Local_93, 1, 0, 0, 1);
												unk_0x151F32CB40BE730C(iLocal_75, fLocal_106);
												iLocal_60 = 1;
											}
										}
										iLocal_50 = 3;
										iLocal_304 = unk_0x9D40BBF80D8F5E8A();
									}
									else if (unk_0x0E6C083BC5101C8B(iLocal_77, iLocal_75, 20f, 20f, 7f, 0, 1, 0))
									{
										func_53();
										if (func_52())
										{
											if (unk_0xE8C390D56BE854E1(iLocal_75, iLocal_77, -1, 0, 0))
											{
												if (!bLocal_296)
												{
													if (func_42(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
													{
													}
												}
												unk_0xE81313E76FEC1E97(iLocal_75, iLocal_77, 35f, iLocal_299);
												unk_0x8D6671D78D1F569B(iLocal_75, 1);
												func_103(1);
											}
										}
									}
								}
								else if (unk_0xD11595488376CB53(uLocal_63))
								{
									if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_77, 0))
									{
										if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_75, fLocal_56, fLocal_56, fLocal_56, 0, 1, 0))
										{
											if (func_41(1, 0, 1))
											{
												unk_0x5B62CAB9B0D6ABF1(&uLocal_63);
												if (iLocal_301 == 1)
												{
													if (func_40(unk_0x2CAFFCD9F5E16D2F(iLocal_77), 336f, 90f))
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
												unk_0x2B0BB514F9140141(sLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_38(unk_0x1141852D07400777(iLocal_75, 1), &fLocal_56, &fLocal_57);
										}
									}
									else
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_63);
										uLocal_65 = func_89(iLocal_77, 0, 0);
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
											unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
										}
										func_103(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_75))
									{
										unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
									}
									func_103(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0xAF437D7C802AB246(iLocal_76))
						{
							if (unk_0x8AF655CC5761C7A2(iLocal_76, iLocal_77, 0))
							{
								unk_0x547730440687D355(iLocal_76, iLocal_77, unk_0xE7869D5D7816A9B6(), 8, 50f, iLocal_300, 10f, 10f, 0);
								unk_0x8D6671D78D1F569B(iLocal_76, 1);
								unk_0x839E9476E54502A2(unk_0x1B2DC87EFB36DF80(iLocal_76));
							}
							else
							{
								unk_0x4B79E06845D63B96(iLocal_76, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
								unk_0x8D6671D78D1F569B(iLocal_76, 1);
								unk_0x839E9476E54502A2(unk_0x1B2DC87EFB36DF80(iLocal_76));
							}
						}
						unk_0x4EDE34FBADD967A6(0);
						func_220();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_151(iLocal_77))
						{
							unk_0x9E55BD45B84E7BDC(&iLocal_77);
						}
						if (!unk_0xAF437D7C802AB246(iLocal_76))
						{
							unk_0x2C9DDB5306DF417C(&iLocal_76);
						}
					}
					if (!unk_0xAF437D7C802AB246(iLocal_75))
					{
						if (unk_0x23417CDB252083F9(iLocal_75, sLocal_83, "agitated_idle_a", 3))
						{
							unk_0xB699CD2B7D14B97D(iLocal_75, "waiting", sLocal_83, -2f);
						}
						func_1(iLocal_75, "GENERIC_CURSE_HIGH", 24);
						unk_0x94026C1D1DB14225(&uLocal_78);
						unk_0x34912824AE482D65(0, Local_102, 1f, 20000, 40000f, 1056964608);
						unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_78);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
						unk_0x33A90AD8FA327B72(&uLocal_78);
					}
					func_220();
				}
			}
			else
			{
				if (!unk_0xAF437D7C802AB246(iLocal_76))
				{
					unk_0x4B79E06845D63B96(iLocal_76, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
					unk_0x8D6671D78D1F569B(iLocal_76, 1);
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_77))
				{
					unk_0x07C7B5F986353F8B(iLocal_77, 50f);
				}
				func_220();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0x489E3B00AFB0758C(iParam0, sParam1, func_2(iParam2), 1);
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
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0x76B2D234F1895632(iParam0))
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
	if (((!unk_0xAF437D7C802AB246(iLocal_75) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6())) && func_151(iLocal_77)) && unk_0x2917D5E1CB5CE43A(sLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
				{
					if (func_41(1, 0, 1))
					{
						if (!unk_0xB519E5386FBF69E5(Global_2283, 11))
						{
							if (!unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
							{
								func_31(1, 1, 1, 0);
								if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
								{
									unk_0x1D208E4A4E1D4FFE(1);
									while (!func_30(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), fLocal_57, 1, 1056964608, 0, 1, 0))
									{
										unk_0x3BE81935DF4C438C();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), fLocal_57, 0, 1056964608, 0, 1, 0);
								}
								unk_0x3BE81935DF4C438C();
								if (!unk_0xAF437D7C802AB246(iLocal_75))
								{
									unk_0xC16A68A8424A0340(iLocal_75, 0);
								}
								func_28();
								func_23();
								unk_0x3BE81935DF4C438C();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
				unk_0x6A7A2A686DF429B7(iLocal_77, 0, 0, 0f);
				unk_0x82AD6265A8FA7C49(iLocal_77, 0, 1, 1, 1);
				unk_0x3BE81935DF4C438C();
				if (iLocal_301 == 1)
				{
					if (func_151(iLocal_77))
					{
						if (func_40(unk_0x2CAFFCD9F5E16D2F(iLocal_77), 336f, 90f))
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
					unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_87, 1, 0, 0, 1);
					unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
					unk_0x88A973CE47FBEF95(iLocal_75, Local_93, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(iLocal_77, fLocal_105);
					unk_0x88A973CE47FBEF95(iLocal_77, Local_90, 1, 0, 0, 1);
				}
				else
				{
					if (!func_40(unk_0x2CAFFCD9F5E16D2F(iLocal_77), 64.6764f, 90f))
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
					unk_0x88A973CE47FBEF95(iLocal_77, Local_90, 1, 0, 0, 1);
					unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
					unk_0x151F32CB40BE730C(iLocal_77, fLocal_105);
				}
				unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 0);
				if (func_151(iLocal_77))
				{
					unk_0xC9CEB5227A733CE6(iLocal_77);
					if (unk_0xD51CFE69539DB6D8(iLocal_76))
					{
						if (unk_0x8AF655CC5761C7A2(iLocal_76, iLocal_77, 0))
						{
							unk_0x2C9DDB5306DF417C(&iLocal_76);
						}
					}
				}
				Local_310 = { 0f, 0f, 0f };
				Local_313 = { 0f, 0f, 0f };
				uLocal_302 = unk_0xB839A1C489B63ACC(Local_310, Local_313, 2);
				unk_0x50316D6F55CBD74A(uLocal_302, iLocal_77, unk_0x56ADDC5BECDDD8A5(iLocal_77, sVar3));
				unk_0xB03FD8132C75E089(uLocal_302, Local_310, Local_313, 2);
				unk_0x360F0D01112F8AD0(iLocal_75, uLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x360F0D01112F8AD0(unk_0xE7869D5D7816A9B6(), uLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_79 = unk_0xBC7920E419FEAF62("DEFAULT_ANIMATED_CAMERA", Local_113, Local_116, fLocal_112, 0, 2);
				unk_0x102A9C1517158BFA(uLocal_79, uLocal_302, "car_returned_cam", sLocal_306);
				unk_0x25C9465DC63B7255(iLocal_77, sLocal_307, sLocal_306, 1000f, 0, 0, 0, 0, 262144);
				Local_310 = { unk_0x1141852D07400777(iLocal_77, 1) };
				Local_313 = { unk_0x18AD8448B5C85E6D(iLocal_77, 2) };
				if (func_151(iLocal_80))
				{
					if (func_22(iLocal_80, Local_90, 1) <= 11f)
					{
						unk_0x88A973CE47FBEF95(iLocal_80, Var4, 1, 0, 0, 1);
						unk_0x151F32CB40BE730C(iLocal_80, fVar7);
						unk_0xC9CEB5227A733CE6(iLocal_80);
						unk_0x20BB4B94CC6DDC9A(iLocal_80, 1, 0);
					}
				}
				unk_0xB86B1248EA9B87EA(Local_90, 10f, 1, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_301 == 2)
				{
					unk_0xD016326278B5D42B(joaat("rocoto"), 15);
				}
				else
				{
					unk_0xD016326278B5D42B(joaat("peyote"), 15);
				}
				unk_0x86F1B61A4BF04972(Local_90, 15f);
				unk_0x63498CF6CF35C6A2(uLocal_79, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				iLocal_51 = 3;
				unk_0x81BA26DFC4716D4D(1f);
				break;
			
			case 3:
				unk_0x3BE81935DF4C438C();
				if (func_19())
				{
					iLocal_51 = 4;
				}
				if (iLocal_301 == 1)
				{
					if (unk_0x83666F9FB8FEBD4B() > 1500 && !bLocal_342)
					{
						if (func_42(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_51 = 4;
						}
					}
				}
				else if (unk_0x47B2F09FC779F5CD(uLocal_302) && !bLocal_342)
				{
					if (unk_0x4D221DFBB84DCF0B(uLocal_302) >= 0.2f)
					{
						if (func_42(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
				unk_0x81BA26DFC4716D4D(1f);
				break;
			
			case 4:
				unk_0x3BE81935DF4C438C();
				if (iLocal_301 == 2)
				{
					if (!func_18())
					{
						if (iLocal_62 == 0)
						{
							if (func_42(&Local_122, cLocal_294, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
							}
						}
					}
				}
				unk_0x81BA26DFC4716D4D(1f);
				if (iLocal_301 == 1)
				{
					if (unk_0x47B2F09FC779F5CD(uLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (unk_0x4D221DFBB84DCF0B(uLocal_302) >= 0.83f)
							{
								unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
								unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x4D221DFBB84DCF0B(uLocal_302), 0, 0, 0);
								unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 1, 0);
								iLocal_316 = 1;
							}
						}
						if (!unk_0xAF437D7C802AB246(iLocal_75))
						{
							if (unk_0x4D221DFBB84DCF0B(uLocal_302) >= 0.83f)
							{
								if (unk_0x23417CDB252083F9(iLocal_75, sLocal_306, sLocal_308, 2))
								{
									unk_0xB4E40069DFD4B86F(iLocal_75, -1000f, 0);
									if (!unk_0x51374A0BB2871E6E(iLocal_75, 0))
									{
										if (func_151(iLocal_77))
										{
											unk_0x0CC1C59D57D7212B(iLocal_75, iLocal_77, -1);
											unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
										}
									}
									unk_0xA573D5E64CDFAF83(iLocal_75, 1, 0);
								}
								else
								{
									unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0x47B2F09FC779F5CD(uLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (unk_0x4D221DFBB84DCF0B(uLocal_302) >= 0.86f)
						{
							unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
							unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x4D221DFBB84DCF0B(uLocal_302), 0, 0, 0);
							unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!unk_0xAF437D7C802AB246(iLocal_75))
					{
						if (unk_0x4D221DFBB84DCF0B(uLocal_302) > 0.847f)
						{
							if (unk_0x23417CDB252083F9(iLocal_75, sLocal_306, sLocal_308, 2))
							{
								unk_0xB4E40069DFD4B86F(iLocal_75, -1000f, 0);
								if (!unk_0x51374A0BB2871E6E(iLocal_75, 0))
								{
									if (func_151(iLocal_77))
									{
										unk_0x0CC1C59D57D7212B(iLocal_75, iLocal_77, -1);
										unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
									}
								}
								unk_0xA573D5E64CDFAF83(iLocal_75, 1, 0);
							}
							else
							{
								unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
							}
						}
					}
				}
				if (((unk_0x47B2F09FC779F5CD(uLocal_302) && unk_0x4D221DFBB84DCF0B(uLocal_302) >= 0.99f) || !unk_0x47B2F09FC779F5CD(uLocal_302)) || func_19())
				{
					if (!unk_0x76B2D234F1895632(iLocal_77) && unk_0x23417CDB252083F9(iLocal_77, sLocal_306, sLocal_307, 3))
					{
						unk_0xB06129278F33686E(iLocal_77, sLocal_306, sLocal_307, 1f);
					}
					if (unk_0x47B2F09FC779F5CD(uLocal_302))
					{
						unk_0x20679FECEB6BF5E3(uLocal_302, 1f);
					}
					if (bLocal_342)
					{
						Var0 = { unk_0x485562BFEB1B08F9(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0xC4A43A7E257E1FD9(Var0, &(Var0.f_2), 0);
						unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0x1F32EC24F499C0FC(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Var0.f_2);
						unk_0x6EF372C057320AD4(0, 1065353216);
						unk_0x7FB81B1DD14A3BE4(0);
					}
					unk_0x29F3FAC40F745C80(unk_0xE7869D5D7816A9B6(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x51374A0BB2871E6E(iLocal_75, 0))
					{
						if (func_151(iLocal_77))
						{
							unk_0x0CC1C59D57D7212B(iLocal_75, iLocal_77, -1);
							unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
						}
					}
					if (!unk_0xAF437D7C802AB246(iLocal_75))
					{
						if (unk_0x51374A0BB2871E6E(iLocal_75, 0))
						{
							if (func_151(iLocal_77))
							{
								unk_0x6A7A2A686DF429B7(iLocal_77, 0, 0, 0f);
								unk_0x82AD6265A8FA7C49(iLocal_77, 0, 1, 1, 1);
								iLocal_305 = unk_0x9D40BBF80D8F5E8A();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x3BE81935DF4C438C();
				if ((unk_0x9D40BBF80D8F5E8A() - iLocal_305) > 100)
				{
					if (func_3(iLocal_75) && func_151(iLocal_77))
					{
						unk_0x94026C1D1DB14225(&uLocal_78);
						unk_0x94EB3B5D2CDEC0CD(0, iLocal_77, 9, 1000);
						unk_0xE81313E76FEC1E97(0, iLocal_77, 25f, iLocal_299);
						unk_0x911ECBCE73F8EC3F(uLocal_78);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
						unk_0x33A90AD8FA327B72(&uLocal_78);
						unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
					}
					func_31(0, 1, 1, 0);
					if (bLocal_342)
					{
						if (unk_0xCF686B56FD5328B5(uLocal_79))
						{
							unk_0x63498CF6CF35C6A2(uLocal_79, 0);
							unk_0x74FF6D08DE291367(uLocal_79, 0);
						}
						unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0x6EF372C057320AD4(0, 1065353216);
						unk_0x7FB81B1DD14A3BE4(0);
						func_17(500, 1);
					}
					else
					{
						unk_0x83AD6129F0CF8C94(0, 0, 3, 0);
						unk_0x63498CF6CF35C6A2(uLocal_79, 0);
					}
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
					func_16(&iLocal_77);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_75))
				{
					unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
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
			Global_99155.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_99155.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3717;
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
			if (iVar1 != 3717)
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
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
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
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312746;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_7(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_15(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_14(unk_0xE7869D5D7816A9B6());
			if (func_13(iVar0) && (!func_12(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_13(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return Global_35619 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(*iParam0))
	{
		unk_0x76B2D234F1895632(*iParam0);
		if (unk_0x28D33422BA6C479D(*iParam0) && unk_0x4C5CA989AEF3A14C(*iParam0, 1))
		{
			unk_0xC1F2137782A816E9(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0xAEF17BDE274A1247() || unk_0xA864A37DA392324A())
	{
		if (!unk_0x845A95C48FA19489())
		{
			unk_0x2D3BB3EF936C4B76(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xDE185266FE919B68())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
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
		if (unk_0xE5ED4BE9950F1B30(iVar0))
		{
			unk_0x63498CF6CF35C6A2(uLocal_79, 0);
			unk_0x6A6E764D1DB633C7(500);
			while (unk_0xA864A37DA392324A())
			{
				unk_0x3BE81935DF4C438C();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_342 = true;
			return 1;
		}
	}
	if (unk_0xAEF17BDE274A1247())
	{
		if (unk_0xE5ED4BE9950F1B30(iVar0))
		{
			bLocal_342 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0xDE185266FE919B68())
	{
		if ((unk_0x9D40BBF80D8F5E8A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9D40BBF80D8F5E8A();
		}
		Global_28 = unk_0x9D40BBF80D8F5E8A();
		if ((unk_0x9D40BBF80D8F5E8A() - Global_27) > iParam0)
		{
			if (func_21())
			{
				Global_27 = unk_0x9D40BBF80D8F5E8A();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

void func_23()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_24(int iParam0)
{
	if (Global_14571)
	{
		func_26(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_25())
	{
		Global_14413.f_1 = 3;
	}
}

int func_25()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_28()
{
	Global_14578 = 0;
	func_29();
}

void func_29()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8CCCC48313B0F20F(0, 71, 1);
	unk_0x8CCCC48313B0F20F(0, 72, 1);
	unk_0x8CCCC48313B0F20F(0, 76, 1);
	unk_0x8CCCC48313B0F20F(0, 73, 1);
	unk_0x8CCCC48313B0F20F(0, 59, 1);
	unk_0x8CCCC48313B0F20F(0, 60, 1);
	if (bParam5)
	{
		unk_0x8CCCC48313B0F20F(0, 75, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8CCCC48313B0F20F(0, 69, 1);
		unk_0x8CCCC48313B0F20F(0, 70, 1);
		unk_0x8CCCC48313B0F20F(0, 68, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 74, 1);
	unk_0x8CCCC48313B0F20F(0, 86, 1);
	unk_0x8CCCC48313B0F20F(0, 81, 1);
	unk_0x8CCCC48313B0F20F(0, 82, 1);
	unk_0x8CCCC48313B0F20F(0, 138, 1);
	unk_0x8CCCC48313B0F20F(0, 136, 1);
	unk_0x8CCCC48313B0F20F(0, 114, 1);
	unk_0x8CCCC48313B0F20F(0, 107, 1);
	unk_0x8CCCC48313B0F20F(0, 110, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 87, 1);
	unk_0x8CCCC48313B0F20F(0, 88, 1);
	unk_0x8CCCC48313B0F20F(0, 113, 1);
	unk_0x8CCCC48313B0F20F(0, 115, 1);
	unk_0x8CCCC48313B0F20F(0, 116, 1);
	unk_0x8CCCC48313B0F20F(0, 117, 1);
	unk_0x8CCCC48313B0F20F(0, 118, 1);
	unk_0x8CCCC48313B0F20F(0, 119, 1);
	unk_0x8CCCC48313B0F20F(0, 131, 1);
	unk_0x8CCCC48313B0F20F(0, 132, 1);
	unk_0x8CCCC48313B0F20F(0, 123, 1);
	unk_0x8CCCC48313B0F20F(0, 126, 1);
	unk_0x8CCCC48313B0F20F(0, 129, 1);
	unk_0x8CCCC48313B0F20F(0, 130, 1);
	unk_0x8CCCC48313B0F20F(0, 133, 1);
	unk_0x8CCCC48313B0F20F(0, 134, 1);
	unk_0x01E20DCCA2C958A3();
	if ((unk_0x9D40BBF80D8F5E8A() - Global_29) > 500)
	{
		unk_0x1B9F8E5CCC384F1E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9D40BBF80D8F5E8A();
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x7F38A542899D217A(unk_0xD4F0FC8FFEDE152B(iParam0)) <= fParam3)
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
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_37(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_25())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_36(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_37(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_36(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_32(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
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
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_33()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

void func_38(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) - Param0 };
		fVar4 = unk_0x2C393A56EDEECDE4(Var1.f_0, Var1.f_1);
		if (func_39(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
		fVar4 = unk_0x2C393A56EDEECDE4(Var1.f_0, Var1.f_1);
		if (func_39(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) > 10f)
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		fVar0 = unk_0x2CAFFCD9F5E16D2F(iParam0);
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
	
	if (unk_0x9DAD36BD64512352())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (bParam0)
		{
			if (unk_0x76B2D234F1895632(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) != unk_0xE7869D5D7816A9B6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x58D00CB831F3E1D3(iVar0) < 0.95f || unk_0x58D00CB831F3E1D3(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!unk_0x380205D43AE9485A(unk_0x3F80C6638E3A1A90()))
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xDA09A6E60FE9645E(0);
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
					func_50();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_49(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_48();
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
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_47();
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
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_45();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_44();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_45()
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
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_10();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_48()
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

bool func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_50()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

int func_52()
{
	if (unk_0xAF437D7C802AB246(iLocal_76))
	{
		return 1;
	}
	else if (func_151(iLocal_77))
	{
		if (!unk_0x0E6C083BC5101C8B(iLocal_76, iLocal_77, 10f, 10f, 10f, 0, 1, 0))
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
	
	if (func_151(iLocal_77))
	{
		fVar0 = unk_0xF4E8009A18C52112(iLocal_77);
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
		if (iVar1 && unk_0x8BB2F55B762C91D6(iLocal_77))
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
	if ((iParam2 != 145 && unk_0xD11595488376CB53(uVar0)) && unk_0x33FD8E2E139F4FAC(&(Global_99155.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x227FC39A4871C64F(uVar0, &(Global_99155.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_58(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, bParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_58(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_58(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
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
	
	if (unk_0xD11595488376CB53(*uParam0))
	{
		unk_0x5B62CAB9B0D6ABF1(uParam0);
		bVar0 = true;
	}
	if (unk_0xD11595488376CB53(uParam0->f_1))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD51CFE69539DB6D8(uParam0->f_7))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_7))
		{
			if (unk_0x0B25DF5D53C8A538(uParam0->f_7))
			{
				unk_0x566A0CB935F3EEA8(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_60(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBFAE5F9DEC53DAE2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (!unk_0x0B25DF5D53C8A538(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x566A0CB935F3EEA8(iParam0, 1);
			}
			else
			{
				unk_0xB4D355A7DFE15BFC(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x2EFEB3EA1D6A46DE(iParam0, iParam2);
			unk_0xBE0219028260E31F(iParam0, fParam6);
			if (unk_0xD11595488376CB53(*uParam1))
			{
				unk_0xA09285173B92875E(*uParam1, 7);
			}
		}
		unk_0x83F4881BA5450FEF(iParam0, iParam4);
		unk_0xDCDE8A1D95BAAF08(iParam0, iParam5);
		*uParam1 = unk_0x7DAA0D3B6BB8AD16(iParam0);
		if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 2))
		{
			if (unk_0xD11595488376CB53(*uParam1))
			{
				if (!unk_0xF6917DE0E003509D(iParam7))
				{
					unk_0xD514AD97CE4B7796("MCUSTBLIP");
					unk_0x63E8D6007C32E426(iParam7);
					unk_0x33A8A7C6E127D3D4(*uParam1);
				}
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x2BC40A9A0319DB0F(iParam0);
			if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 3))
			{
				if (unk_0xD11595488376CB53(uParam1->f_1))
				{
					unk_0xA09285173B92875E(uParam1->f_1, 7);
					unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD11595488376CB53(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x73817D396768E4C6(&(uParam1->f_6), 3);
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
	
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_2457699.f_4416, 26))
		{
			return;
		}
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0xC36FD2B6875CA6EA(iParam2);
		unk_0x1E79BB0C6A422F63("FocusIn");
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x1B8E0930AB96444B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x356491C12DAD1A37(sVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x356491C12DAD1A37(uParam0->f_3))
	{
		if (func_62(uParam0->f_3))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
	if (!unk_0x356491C12DAD1A37(sVar0))
	{
		if (func_62(sVar0))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
}

bool func_62(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_63()
{
	if (!unk_0xAF437D7C802AB246(iLocal_76))
	{
		unk_0x7E3DC7ED30B648F0(iLocal_76, 2, 0);
		unk_0x7E3DC7ED30B648F0(iLocal_76, 6, 0);
		unk_0x7E3DC7ED30B648F0(iLocal_76, 3, 1);
		unk_0x7E3DC7ED30B648F0(iLocal_76, 1, 0);
		unk_0x13C351F151D49F89(iLocal_76, unk_0xE7869D5D7816A9B6(), 0, 16);
		unk_0x9BEE7E791BC4D38B(iLocal_76, 0);
		unk_0x839E9476E54502A2(unk_0x1B2DC87EFB36DF80(iLocal_76));
	}
	else
	{
		unk_0x839E9476E54502A2(unk_0x1B2DC87EFB36DF80(iLocal_76));
	}
	if (func_151(iLocal_77))
	{
		unk_0x18F90CF5D756C783(iLocal_77, 1);
	}
}

int func_64()
{
	if (func_151(iLocal_77))
	{
		if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_77, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_81)
			{
				if (!unk_0xAF437D7C802AB246(iLocal_76))
				{
					if (!iLocal_298)
					{
						if (!unk_0x3B2CF3CC08ABF68C(iLocal_77))
						{
							unk_0x66D2B52327C9F60D(iLocal_76, unk_0xE7869D5D7816A9B6(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_298 = 1;
						}
					}
					if (unk_0x9D40BBF80D8F5E8A() > iLocal_303 + 7000)
					{
						if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_77, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_42(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0))
							{
								iLocal_303 = unk_0x9D40BBF80D8F5E8A();
							}
						}
					}
					unk_0x29FD5B1A4BA65801(iLocal_77);
					unk_0xA2D9AE20AB412A1B(iLocal_77);
					iLocal_81 = 0;
				}
			}
			if (unk_0x915685CA559C211B(iLocal_77, unk_0xE7869D5D7816A9B6(), 1))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_76))
				{
					func_42(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0);
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

int func_65()
{
	if (func_151(iLocal_77))
	{
		if (((unk_0x3F916E486684A3A8(iLocal_77, 0, 0) || unk_0x3F916E486684A3A8(iLocal_77, 1, 0)) || unk_0x3F916E486684A3A8(iLocal_77, 4, 0)) || unk_0x3F916E486684A3A8(iLocal_77, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	if (func_151(iLocal_77) && unk_0xD11595488376CB53(uLocal_64))
	{
		func_67(&uLocal_330, iLocal_77, 0, 0, 1, 1, 1);
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
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
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
	
	if (uParam0->f_1 && unk_0xA16CC47187A94189())
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x356491C12DAD1A37(iVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
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
	if (func_87(uParam1) && unk_0xB756E8D139BDE124(uParam1))
	{
		iVar1 = 0;
		if (unk_0x41B17741CACC905E(uParam1))
		{
			unk_0xBF4FEE4E9AAA57D3(unk_0x10E754B2E0DF2A70(iParam1));
			unk_0x85E578E9EDFAA283(unk_0x10E754B2E0DF2A70(iParam1), 1);
			if (unk_0xB7FBD067DCB72466(unk_0x10E754B2E0DF2A70(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8C1ED5BB2888BA25(iParam1))
		{
			unk_0x62580637CC8C1B3F(unk_0xE59FAD6B5E1AA42D(iParam1));
			if (unk_0xF4CAF05E946FAF1C(unk_0xE59FAD6B5E1AA42D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC2F1E05878620398(iParam1))
		{
			unk_0xD033824AEAC999BE(unk_0x1652DF7B39293553(iParam1));
			if (unk_0x1B93A6975F1736AC(unk_0x1652DF7B39293553(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xA16CC47187A94189())
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
					if ((unk_0x356491C12DAD1A37(uParam0->f_3) && !unk_0x356491C12DAD1A37(iVar0)) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if ((iVar1 && !unk_0x23741E39BEA32E66()) && uParam8)
						{
							if (!func_62(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x04E7E853E31F41A3("CMN_HINT", iVar0))
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
				if (unk_0x356491C12DAD1A37(uParam0->f_3) && !unk_0x356491C12DAD1A37(iVar0))
				{
					if (((unk_0xD525F9D50CBB6A5D(iParam1) && iVar1) && !unk_0x23741E39BEA32E66()) && uParam8)
					{
						if (!func_62(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x04E7E853E31F41A3("CMN_HINT", iVar0))
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
			if (!unk_0x356491C12DAD1A37(sParam5))
			{
				if (func_62(sParam5))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
			{
				if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
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
	if (func_87(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x44C7AD5B54E267EE(unk_0xE7869D5D7816A9B6());
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0x1B8E0930AB96444B(1);
		unk_0xC36FD2B6875CA6EA(0);
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		unk_0x1E79BB0C6A422F63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x9D40BBF80D8F5E8A()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_35619)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_99155.f_8663.f_100++;
			}
			return Global_99155.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_99155.f_8663.f_101++;
			}
			return Global_99155.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_99155.f_8663.f_102++;
			}
			return Global_99155.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0xF6917DE0E003509D(sParam0) && func_62(sParam0)) || func_62("CMN_HINT"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		return 0;
	}
	switch (Global_35619)
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
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF478777FFCC96862())
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
	if (unk_0x29C4AA4F29B1E539())
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52760)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
		{
			if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
			{
				return 0;
			}
			if (unk_0x55B32F062B30EC90())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

void func_78(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x76B2D234F1895632(uParam1))
	{
		func_61(uParam0, 0, 0);
	}
	if (func_81(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x41B17741CACC905E(iParam1))
		{
			uVar0 = unk_0x10E754B2E0DF2A70(iParam1);
			if (!unk_0x51374A0BB2871E6E(uVar0, 0))
			{
				if (unk_0x1415CDB1128C3FBC(iVar0))
				{
					if (!func_79())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0C2FCAD5220719B8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x1B8E0930AB96444B(0);
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
	unk_0xA109811CF2C55706(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iParam1, -1, iVar3, iVar4);
	unk_0xCD0E4FEA8B60FCA3("FocusIn", 0, 0);
	unk_0x91523366B2FDCD40("HINT_CAM_SCENE");
	unk_0xCC18B241D266EF14(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_79()
{
	return func_80(unk_0x3F80C6638E3A1A90());
}

int func_80(var uParam0)
{
	if (unk_0x1B2DC87EFB36DF80(unk_0x91B73D905EA38F6B(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_81(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_82(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
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
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (!func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
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
				if (!func_85(bParam1, bParam2, bParam3) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
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
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
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
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
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
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x8B4FAB242D8FEF11(0, 80))
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
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x8B4FAB242D8FEF11(0, 80))
			{
				unk_0x1B8E0930AB96444B(0);
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
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
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
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
			{
				unk_0x1B8E0930AB96444B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (unk_0x8C1ED5BB2888BA25(iParam0))
		{
			if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x41B17741CACC905E(iParam0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC2F1E05878620398(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	unk_0x9956FB0E4B50ECB8(&Global_2284, 4);
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
	if (iLocal_301 == 1)
	{
		fVar0 = 220f;
	}
	if (func_151(iLocal_77))
	{
		func_92(uLocal_64, iLocal_77, fVar0, 1061158912, 0);
		if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_77, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x51AAB57E2FC16B14(iLocal_77))
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
	if (unk_0xD11595488376CB53(uParam0))
	{
		if ((unk_0xD51CFE69539DB6D8(iParam1) && unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6())) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x8C1ED5BB2888BA25(iParam1))
			{
				if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam1), 0))
				{
					fVar1 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iParam1, 1), 1);
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
						unk_0xDBFA9591B1E30DFA(uParam0, 1);
						unk_0x95FCF148333C6A88(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xDBFA9591B1E30DFA(uParam0, 0);
						unk_0x95FCF148333C6A88(uParam0, 255);
					}
				}
			}
			else if (unk_0x41B17741CACC905E(iParam1))
			{
				if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam1)))
				{
					fVar1 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iParam1, 1), 1);
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
						unk_0xDBFA9591B1E30DFA(uParam0, 1);
						unk_0x95FCF148333C6A88(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xDBFA9591B1E30DFA(uParam0, 0);
						unk_0x95FCF148333C6A88(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_93()
{
	if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_77, 0) && unk_0x082AD235E40A8FDE(iLocal_77))
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (!unk_0xAF437D7C802AB246(iLocal_75) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
				if (!unk_0x51374A0BB2871E6E(iLocal_75, 0))
				{
					if (iLocal_301 == 1)
					{
						if (func_101())
						{
							iLocal_50 = 1;
						}
					}
					else if (!unk_0x8E2CF6ACCED3BD0F(iLocal_75) && !unk_0x0BEB89C5B6DBEA8E(iLocal_75))
					{
						unk_0x6A8BCE61F660B8D0(iLocal_75, unk_0xE7869D5D7816A9B6(), -1, 0, 2);
						if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0xF78809EA8A08F2D1(iLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							unk_0x94026C1D1DB14225(&uLocal_78);
							unk_0xDCF460AE46C9489C(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xDCF460AE46C9489C(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xDCF460AE46C9489C(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x911ECBCE73F8EC3F(uLocal_78);
							unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
							unk_0x33A90AD8FA327B72(&uLocal_78);
							iLocal_304 = unk_0x9D40BBF80D8F5E8A();
							iLocal_50 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_301 == 1)
				{
					unk_0x6A8BCE61F660B8D0(iLocal_75, unk_0xE7869D5D7816A9B6(), -1, 0, 2);
					if (unk_0xC47857E5E74EA5AF(iLocal_75, 242628503) != 1)
					{
						unk_0x94026C1D1DB14225(&uLocal_78);
						unk_0xDCF460AE46C9489C(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_78);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
						unk_0x33A90AD8FA327B72(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (unk_0xFA68268DB708808B(iLocal_75, unk_0xE7869D5D7816A9B6(), 60f))
				{
					if (unk_0xC47857E5E74EA5AF(iLocal_75, 242628503) != 1)
					{
						unk_0x94026C1D1DB14225(&uLocal_78);
						unk_0xDCF460AE46C9489C(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_61 == 0)
						{
							unk_0xDCF460AE46C9489C(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x911ECBCE73F8EC3F(uLocal_78);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
						unk_0x33A90AD8FA327B72(&uLocal_78);
						iLocal_50 = 2;
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
				if (iLocal_301 == 2)
				{
					if (!unk_0xFA68268DB708808B(iLocal_75, unk_0xE7869D5D7816A9B6(), 60f) && !func_98(iLocal_75, -875674219))
					{
						unk_0x58F62EDF6111D598(iLocal_75, unk_0xE7869D5D7816A9B6(), 0);
					}
					if (func_97(iLocal_75, unk_0xE7869D5D7816A9B6(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x9D40BBF80D8F5E8A() - iLocal_304) > 6000)
							{
								func_96();
							}
						}
					}
				}
				if (unk_0xC47857E5E74EA5AF(iLocal_75, 242628503) != 1 && !func_98(iLocal_75, -875674219))
				{
					if (iLocal_301 == 1)
					{
						Local_93 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x3761EA7F8628B81A(iLocal_75, Local_93, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0xC47857E5E74EA5AF(iLocal_75, 242628503) == 7)
							{
								unk_0x94026C1D1DB14225(&uLocal_78);
								unk_0x34912824AE482D65(0, Local_93, 1f, 20000, fLocal_106, 1056964608);
								unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
								unk_0x911ECBCE73F8EC3F(uLocal_78);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
								unk_0x33A90AD8FA327B72(&uLocal_78);
							}
						}
						else if (!unk_0x23417CDB252083F9(iLocal_75, sLocal_83, "waiting", 3))
						{
							unk_0xDCF460AE46C9489C(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_97(iLocal_75, unk_0xE7869D5D7816A9B6(), 1) < 25f)
							{
								func_96();
							}
						}
					}
					else if (!unk_0x23417CDB252083F9(iLocal_75, sLocal_83, "waiting", 3))
					{
						unk_0xDCF460AE46C9489C(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x1022821BCC621056(iLocal_75, unk_0xE7869D5D7816A9B6()))
				{
					unk_0x6A8BCE61F660B8D0(iLocal_75, unk_0xE7869D5D7816A9B6(), -1, 0, 2);
				}
				if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_75, 40f, 40f, 10f, 0, 1, 0) && !unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_75, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_95())
					{
						if (iLocal_59)
						{
							if (iLocal_301 == 1)
							{
								unk_0x94026C1D1DB14225(&uLocal_78);
								unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
								unk_0xDCF460AE46C9489C(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x911ECBCE73F8EC3F(uLocal_78);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
								unk_0x33A90AD8FA327B72(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x9D40BBF80D8F5E8A();
							}
							else
							{
								unk_0x94026C1D1DB14225(&uLocal_78);
								unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
								unk_0xDCF460AE46C9489C(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x911ECBCE73F8EC3F(uLocal_78);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
								unk_0x33A90AD8FA327B72(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x9D40BBF80D8F5E8A();
							}
						}
						else if (!unk_0x23417CDB252083F9(iLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xC47857E5E74EA5AF(iLocal_75, 242628503) == 7)
							{
								if (!unk_0xFA68268DB708808B(iLocal_75, unk_0xE7869D5D7816A9B6(), 45f))
								{
									unk_0x94026C1D1DB14225(&uLocal_78);
									unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
									unk_0x911ECBCE73F8EC3F(uLocal_78);
									unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
									unk_0x33A90AD8FA327B72(&uLocal_78);
								}
								else if ((unk_0x9D40BBF80D8F5E8A() - iLocal_304) > 6000)
								{
									iLocal_59 = 1;
								}
							}
						}
						else if (!unk_0xFA68268DB708808B(iLocal_75, unk_0xE7869D5D7816A9B6(), 70f))
						{
							unk_0xFA2C5C2D054C888E(iLocal_75);
							unk_0x94026C1D1DB14225(&uLocal_78);
							unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
							unk_0x911ECBCE73F8EC3F(uLocal_78);
							unk_0xC2C4A3A9FF2FBFFF(iLocal_75, uLocal_78);
							unk_0x33A90AD8FA327B72(&uLocal_78);
							iLocal_304 += 4000;
						}
					}
					if (!unk_0xAF437D7C802AB246(iLocal_76))
					{
						unk_0x4B79E06845D63B96(iLocal_76, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
						unk_0x8D6671D78D1F569B(iLocal_76, 1);
						unk_0x506D42CB68AE4EA5(&iLocal_76);
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
					if (!unk_0x3761EA7F8628B81A(iLocal_75, Local_93, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0xC47857E5E74EA5AF(iLocal_75, 2106541073) == 7)
						{
							unk_0x34912824AE482D65(iLocal_75, Local_93, 1f, 20000, fLocal_106, 1056964608);
						}
					}
					else if (!unk_0xFA68268DB708808B(iLocal_75, unk_0xE7869D5D7816A9B6(), 50f))
					{
						unk_0x58F62EDF6111D598(iLocal_75, unk_0xE7869D5D7816A9B6(), -1);
					}
					iLocal_59 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_150(1))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_75))
		{
			unk_0x4B79E06845D63B96(iLocal_75, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
			unk_0x8D6671D78D1F569B(iLocal_75, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_220();
	}
}

bool func_95()
{
	if (!bLocal_296)
	{
		if (func_42(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
		{
			bLocal_296 = true;
		}
	}
	return bLocal_296;
}

int func_96()
{
	if (!iLocal_297)
	{
		if (func_42(&Local_122, cLocal_294, sLocal_288, 4, 0, 0, 0))
		{
			iLocal_297 = 1;
		}
	}
	return iLocal_297;
}

float func_97(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(uParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

int func_98(int iParam0, int iParam1)
{
	if (func_99(uParam0))
	{
		if (unk_0xC47857E5E74EA5AF(uParam0, iParam1) == 1 || unk_0xC47857E5E74EA5AF(iParam0, iParam1) == 0)
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
		if (!unk_0xAF437D7C802AB246(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_100()
{
	if (!iLocal_295)
	{
		if (unk_0x83666F9FB8FEBD4B() > 2000)
		{
			if (func_42(&Local_122, cLocal_294, sLocal_287, 4, 0, 0, 0))
			{
				iLocal_295 = 1;
			}
		}
	}
	return iLocal_295;
}

int func_101()
{
	if (!unk_0xAF437D7C802AB246(iLocal_76) && !unk_0xAF437D7C802AB246(iLocal_75))
	{
		if (func_151(iLocal_77))
		{
			if (unk_0xF50745B40235B5B8(iLocal_76, iLocal_77))
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
	
	if (iLocal_301 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_126(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_126(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_126(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
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
	func_107(17, iLocal_301);
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
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_106(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
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
			Global_99155.f_29444.f_2 = 3;
		}
		if (func_113(iParam0, iParam1) != 322)
		{
			func_108(func_113(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_99143 = iParam1;
		if (Global_99141 == 0)
		{
			if (((Global_99144 == 1 || Global_99144 == 5) || Global_99144 == 11) || Global_99144 == 25)
			{
				func_125(2);
			}
			else if ((Global_99144 == 26 || Global_99144 == 8) || Global_99144 == 17)
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
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_111(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_110() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
				{
					func_105();
				}
			}
		}
	}
}

int func_110()
{
	return Global_25034;
}

int func_111(int iParam0, int iParam1)
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
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
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_117(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_117(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_118();
	}
}

void func_118()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_119()
{
	func_11();
	switch (Global_99155.f_1750.f_539.f_3549)
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
		return unk_0xB519E5386FBF69E5(Global_99155.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_121(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29444.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x959E7FA37C0D0892(), 64);
	uVar16 = func_124(Var0);
	return uVar16;
}

int func_124(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xC7C6DDDE84A8E734(&cParam0))
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
	Global_99141 = iParam0;
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
		if (unk_0xB519E5386FBF69E5(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_99155.f_6302.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_134(iParam1);
		Var0.f_4 = (unk_0x9D40BBF80D8F5E8A() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x73817D396768E4C6(&(Var0.f_1), 0);
		Global_99155.f_6302.f_765[Global_99155.f_6302.f_866 /*10*/] = { Var0 };
		Global_99155.f_6302.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_133(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_132(&iVar20);
		iVar21 = func_131(Var10, Global_99155.f_6302.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_129(Global_99155.f_6302.f_765[iVar20 /*10*/]);
			Global_99155.f_6302.f_765[iVar20 /*10*/] = { Var10 };
			func_128(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_127(Var10))
			{
				func_129(Global_99155.f_6302.f_765[iVar20 /*10*/]);
				Global_99155.f_6302.f_765[iVar20 /*10*/] = { Var10 };
				func_128(&Var10);
				return 1;
			}
			else
			{
				if (!func_127(Global_99155.f_6302.f_765[iVar20 /*10*/]))
				{
					Global_99155.f_6302.f_765[iVar20 /*10*/] = { Var10 };
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
	Global_99155.f_7227[iParam0] = 1;
	Global_99155.f_7227.f_236[iParam0] = (unk_0x9D40BBF80D8F5E8A() + iParam1);
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
	while (iVar0 < Global_99155.f_6302.f_866)
	{
		if (func_131(Global_99155.f_6302.f_765[iVar0 /*10*/], Global_99155.f_6302.f_765[*iParam0 /*10*/]) == 0)
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
	Var0.f_4 = (unk_0x9D40BBF80D8F5E8A() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x73817D396768E4C6(&(Var0.f_1), 0);
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
		unk_0x73817D396768E4C6(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_137(iParam0), -1, 0);
			unk_0x73817D396768E4C6(&uVar0, iParam1);
			func_6(func_137(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_110() == 0)
		{
			uVar0 = func_9(func_137(iParam0), -1, 0);
			unk_0x9956FB0E4B50ECB8(&uVar0, iParam1);
			func_6(func_137(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_110() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_9(func_137(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_140(int iParam0)
{
	if (func_143())
	{
		Global_99145 = 1;
		Global_99142 = unk_0x9D40BBF80D8F5E8A();
		if (func_114(Global_99144))
		{
			func_141(0);
		}
		unk_0xFB04AECD5A11A220(1, "RE_TITLE");
		if (iParam0 && func_114(Global_99144))
		{
			unk_0xD84E02209FE454B0();
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
			if (Global_99155.f_29444.f_2 < 3)
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_74(func_142(iParam0), -1);
					Global_99155.f_29444.f_2++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB519E5386FBF69E5(Global_99151, 1))
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_74(func_142(iParam0), -1);
					Global_99155.f_29444.f_3++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB519E5386FBF69E5(Global_99151, 2))
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_74(func_142(iParam0), -1);
					Global_99155.f_29444.f_4++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 2);
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
	switch (func_144(&Global_25093, 0, 5, 0, unk_0xE3E113B4DB09AAF8()))
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
		if (Global_88836.f_44 == 1)
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
		Global_35583++;
		*uParam0 = Global_35583;
		unk_0xD30CBD7E69615F8C(unk_0xBFAE5F9DEC53DAE2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6581912D0AD8605D(8);
		}
		Global_35619 = iParam2;
		Global_35581 = *uParam0;
		Global_35582 = iParam4;
		Global_35580 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35580 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35580)
			{
				if (Global_35586[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35581 == *uParam0)
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
		if (Global_35580 == 8)
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		Global_35586[Global_35580 /*4*/] = Global_35583;
		Global_35586[Global_35580 /*4*/].f_1 = iParam1;
		Global_35586[Global_35580 /*4*/].f_2 = iParam2;
		Global_35586[Global_35580 /*4*/].f_3 = 0;
		Global_35580++;
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
	
	if (Global_35580 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35580)
	{
		if (Global_35586[iVar0 /*4*/] == *uParam0)
		{
			Global_35586[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_146(int iParam0)
{
	return func_147(iParam0, Global_35619);
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
	if (Global_35619 == 15)
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
	
	switch (iLocal_301)
	{
		case 1:
			if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
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
			if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x96EB9D652C716259())
	{
		if (!unk_0xAF437D7C802AB246(iLocal_75))
		{
			if (unk_0xD525F9D50CBB6A5D(iLocal_75))
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
	if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_75))
		{
			if (iParam0 == 0 || func_97(iLocal_75, iLocal_76, 1) > 15f)
			{
				if (unk_0x742CA22C114D89E4(unk_0x5D551231E967CD2B(iLocal_75, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0x5D551231E967CD2B(iLocal_75, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0x5D551231E967CD2B(iLocal_75, 31086, 0f, 0f, 0f) };
				if ((unk_0xE31E0B1502061553(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xE31E0B1502061553(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xE31E0B1502061553(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x7D7A581CD9045B46(unk_0x5D551231E967CD2B(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x048B85C1B162DC5D(-1, unk_0x5D551231E967CD2B(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x915685CA559C211B(iLocal_75, unk_0xE7869D5D7816A9B6(), 1))
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
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (!unk_0x9DD85FBDD5BC3BF1(iParam0))
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
			if (unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_99))
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
			if (unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_99))
			{
				bLocal_61 = true;
			}
			break;
	}
	unk_0x801429C020C467BA(iVar7);
	unk_0x801429C020C467BA(iVar8);
	unk_0x801429C020C467BA(iVar9);
	unk_0x2B0BB514F9140141(sLocal_83);
	unk_0x2B0BB514F9140141(sLocal_84);
	unk_0x2B0BB514F9140141(sLocal_85);
	unk_0x2B0BB514F9140141("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0xDF14478656A9018C();
	if (((((((unk_0x5053BF6D5604065B(iVar7) && unk_0x5053BF6D5604065B(iVar8)) && unk_0x5053BF6D5604065B(iVar9)) && unk_0x2917D5E1CB5CE43A(sLocal_83)) && unk_0x2917D5E1CB5CE43A(sLocal_84)) && unk_0x2917D5E1CB5CE43A(sLocal_85)) && unk_0x2917D5E1CB5CE43A("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0xD6306290BE90B505())
	{
		if (iLocal_301 == 1)
		{
			func_166("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_96));
			func_166("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_99));
			iLocal_77 = unk_0xD504D1FF5DD2FFD7(iVar9, Var3, fVar6, 1, 1);
			unk_0xD09991316D3221AD(iLocal_77, 0, 0);
			unk_0x0C27C841171728F7(iLocal_77, 0);
			unk_0x8100F8AA27EE924B(iLocal_77, 1);
			unk_0xDE0CF61779B63045(iLocal_77, 0);
			unk_0x79CA1891F45A343F(iLocal_77, 0);
			unk_0xC1DD29CFE93055E7(iLocal_77, 2, 0);
			iLocal_76 = unk_0xF430A9686E704FA3(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0x1C26C4B0DAB91B21(iLocal_76, 42, 1);
			unk_0x7E3DC7ED30B648F0(iLocal_76, 3, 1);
			unk_0xCC897563F1971D6A(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_76, 10);
			unk_0xE01CB20E43291B7D(iLocal_76, 1f);
			unk_0xD91F1EE796A923F6(iLocal_76, 1f);
			unk_0x408AD7E5AD0BB545(iLocal_77, 135, 135);
			unk_0x103FCC2BD24292A3("re_cartheft relGroupThief", &iLocal_329);
			unk_0xA9CA101B50B90993(5, iLocal_329, joaat("player"));
			unk_0xA9CA101B50B90993(2, iLocal_329, joaat("CIVMALE"));
			unk_0xA9CA101B50B90993(2, joaat("CIVMALE"), iLocal_329);
			unk_0x690C5239500171FE(iLocal_76, iLocal_329);
			unk_0x059F430B70190AB2(iLocal_77, 1);
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) - Local_52 };
				uLocal_55 = unk_0x2C393A56EDEECDE4(Var0.f_0, Var0.f_1);
			}
			iLocal_75 = unk_0xA7F4088D9A2629CC(5, iVar7, Local_52, uLocal_55, 1, 1);
			unk_0x0814FB03E16A03C1(iLocal_75, sVar11);
			unk_0x6A8BCE61F660B8D0(iLocal_75, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 0, 0, 1, 0);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 2, 2, 0, 0);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 3, 1, 1, 0);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 4, 1, 1, 0);
			unk_0x3AE219FD480C0ED6(iLocal_75, 1);
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
				iLocal_77 = unk_0xD504D1FF5DD2FFD7(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_77 = unk_0xD504D1FF5DD2FFD7(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			unk_0xD09991316D3221AD(iLocal_77, 0, 0);
			unk_0x0C27C841171728F7(iLocal_77, 0);
			unk_0x25E63F00F88CF099(iLocal_77, 3);
			unk_0x8100F8AA27EE924B(iLocal_77, 1);
			unk_0x5DAB69BA0BF447FC(iLocal_77, 0);
			unk_0x16580F6E093503C8(iLocal_77, 11, 2, 0);
			unk_0x16580F6E093503C8(iLocal_77, 16, 3, 0);
			unk_0x16580F6E093503C8(iLocal_77, 12, 1, 0);
			unk_0x16580F6E093503C8(iLocal_77, 13, 1, 0);
			unk_0xE9ECD7D720B42CB4(iLocal_77, 3);
			unk_0x16580F6E093503C8(iLocal_77, 23, 6, 0);
			unk_0x40B9990275E6AD59(iLocal_77, 3);
			unk_0xFB0870DB05D28CB1(iLocal_77, 18, 1);
			unk_0xFB0870DB05D28CB1(iLocal_77, 22, 1);
			unk_0x408AD7E5AD0BB545(iLocal_77, 143, 0);
			unk_0xC5F406A695E19D8A(iLocal_77, 31, 2);
			unk_0xDE0CF61779B63045(iLocal_77, 0);
			unk_0x79CA1891F45A343F(iLocal_77, 0);
			if (bLocal_61)
			{
				iLocal_75 = unk_0xA7F4088D9A2629CC(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_75 = unk_0xA7F4088D9A2629CC(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_75 = unk_0xA7F4088D9A2629CC(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0x497AFDFE79EEFE4F(iLocal_75, 0, 0, 0, 0);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 2, 1, 0, 0);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 3, 1, 2, 0);
			unk_0x497AFDFE79EEFE4F(iLocal_75, 4, 1, 2, 0);
			iLocal_76 = unk_0xF430A9686E704FA3(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_76, 10);
			unk_0xE01CB20E43291B7D(iLocal_76, 1f);
			unk_0xD91F1EE796A923F6(iLocal_76, 1f);
			unk_0x1C26C4B0DAB91B21(iLocal_76, 42, 1);
			unk_0x0814FB03E16A03C1(iLocal_76, sVar12);
			Local_90 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_105 = 294.4744f;
			Local_87 = { -501.0442f, -2150.799f, 8.139f };
			Local_93 = { -493.8062f, -2156.036f, 8.1978f };
			Local_113 = { -504.365f, -2144.534f, 9.8585f };
			Local_116 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x321C1AA209172C00(iLocal_75, 0);
		unk_0x1C26C4B0DAB91B21(iLocal_75, 185, 1);
		unk_0x883DA07E00F20460(iLocal_77, 0);
		unk_0xE9A614E9191BFB4A(iLocal_77, 1, 1, 0);
		unk_0x9BEE7E791BC4D38B(iLocal_75, 1);
		unk_0x9BEE7E791BC4D38B(iLocal_76, 1);
		unk_0x6A8BCE61F660B8D0(iLocal_75, iLocal_76, -1, 0, 2);
		unk_0x2EA9D513624CAB16(iLocal_77);
		unk_0x059F430B70190AB2(iLocal_77, 1);
		unk_0x742E15B6989E356E(iLocal_77, 0, 0);
		unk_0x7E38E815EF844C74(iVar9, 1);
		unk_0x91523366B2FDCD40("RE_CAR_STEAL_SCENE");
		unk_0x28EB71E26B7A2DE2(iLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0x8734A10B003ED2B6(iLocal_77, 1);
		unk_0x7E3DC7ED30B648F0(iLocal_75, 17, 0);
		unk_0x7346544C767CFCBF(iLocal_75, 512, 1);
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
		func_165(&Local_122, 0, unk_0xE7869D5D7816A9B6(), sLocal_120, 0, 1);
		func_165(&Local_122, 1, iLocal_75, sVar10, 0, 1);
		func_165(&Local_122, 2, iLocal_76, "CThief", 0, 1);
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
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_164())
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
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_119();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 2) && !unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
					fVar35 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var0.f_6, 1);
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
	if (unk_0xF6917DE0E003509D(&cVar2))
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
	return Global_98873 > 0;
}

int func_162()
{
	if (Global_88280 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xB6A14C2017960DFA() == 1f)
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
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
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
	if (unk_0x04E7E853E31F41A3(uParam0, uParam0))
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
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_164())
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
	if ((Global_99144 == func_123() && unk_0x4341FD2C227CC4C0()) && Global_99145)
	{
		return 1;
	}
	return 0;
}

void func_171()
{
	if (func_99(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0) != iLocal_77 && unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0) != iLocal_80)
			{
				iLocal_80 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
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
		*uParam1 = unk_0x9D40BBF80D8F5E8A();
	}
	if (unk_0xD11595488376CB53(uParam0))
	{
		iVar0 = (unk_0x9D40BBF80D8F5E8A() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x86EA9787AE151BBA(uParam0) != 255)
				{
					unk_0x95FCF148333C6A88(uParam0, 255);
				}
			}
			else if (unk_0x86EA9787AE151BBA(uParam0) != 0)
			{
				unk_0x95FCF148333C6A88(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x86EA9787AE151BBA(uParam0) != 255)
			{
				unk_0x95FCF148333C6A88(uParam0, 255);
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
	unk_0xCC7B0EAA74A0A981(0);
	unk_0x51FBA873FE592D01(1);
	Global_99141 = 0;
	func_175();
}

void func_175()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			unk_0x7E38E815EF844C74(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)), 1);
		}
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
	}
}

void func_176(int iParam0)
{
	Global_99144 = iParam0;
}

int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135947)
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
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_99155.f_7699)
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
		if (Global_99144 != -1)
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
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
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
		if (!func_212(Global_99155.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9D40BBF80D8F5E8A() - Global_99146) < 150000)
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
		if (unk_0xFCD171641347C2B0())
		{
			return 0;
		}
		if (unk_0x4341FD2C227CC4C0())
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
		if (unk_0x4443D8D533ACB547(unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6())))
		{
			if ((unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(377.153f, -717.567f, 10.0536f) || unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(320.9934f, 265.2515f, 82.1221f)) || unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_201(0, 0))
		{
			return 0;
		}
		if (Global_25180)
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
				Var5 = { Global_99155.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99155.f_1750.f_539.f_1524[iVar4];
				if (func_200(iVar8))
				{
					if (func_178(iVar4))
					{
						if (!func_81(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_99155.f_1750.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_190(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
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
	
	func_199(&uVar0, unk_0x0CE219089BDB83C5());
	func_198(&uVar0, unk_0x1B24A2CA27443F7B());
	func_197(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_196(&uVar0, unk_0x2DA3502053F9E535());
	func_195(&uVar0, unk_0xEB4EA596232DA76E());
	func_194(&uVar0, unk_0xB99227ECC84A576C());
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
	if (unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
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
						if (((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_210()) || Global_98202) || Global_25036) || func_209()) || func_49(8, -1)) || func_208()) || func_207()) || func_206()) || func_205()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1) || func_210()) || Global_25036) || func_209()) || func_49(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_210()) || Global_98202) || Global_25036) || func_209()) || func_49(8, -1)) || func_206()) || func_208()) || func_207()) || func_205()) || Global_99155.f_6302.f_919[iVar0] == 5) || Global_36166 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_210()) || Global_98202) || Global_25036) || func_209()) || func_49(8, -1)) || func_208()) || func_207()) || func_205()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_210() || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || func_49(8, -1)) || func_205()) || func_204()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_49(8, -1) || func_208()) || func_207()) || func_204()) || func_203())
						{
							return 0;
						}
						if ((unk_0xF478777FFCC96862() && unk_0x5824E40B4C3C5757() != 3) && unk_0x3ABB0F1D57A0AD8C() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
						{
							if ((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_210()) || Global_25036) || func_209()) || func_49(8, -1)) || func_207()) || func_206()) || func_205()) || Global_99155.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || func_210()) || func_207()) || Global_98202) || Global_25036) || func_209()) || Global_36669) || func_49(8, -1)) || func_206()) || func_204()) || func_205()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_210()) || Global_98202) || Global_25036) || func_209()) || func_49(8, -1)) || func_206()) || func_204()) || func_208()) || func_207()) || func_205())
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
	return Global_91064.f_1;
}

int func_204()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 13);
	}
	return 0;
}

int func_205()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_69496)
	{
		return 1;
	}
	else if (Global_55572 && !Global_55578)
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_91077.f_297 > 0;
}

bool func_208()
{
	return Global_91077.f_296 > 0;
}

var func_209()
{
	return Global_1315909;
}

int func_210()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
	}
	return 0;
}

int func_211()
{
	func_47();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_99155.f_6302.f_919[iParam0];
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
		bVar1 = unk_0xB519E5386FBF69E5(Global_99155.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_216()
{
	var uVar0;
	
	if (Global_25184)
	{
		uVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xC45A34912542C4EB(uVar0, 0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xBD6B21D725712BDE(iVar0, 0)))
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
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					iVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&iVar0, 0);
					unk_0x305E571F148D27EA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
		{
			return 1;
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
	if (Global_85343[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82110)
	{
		if (Global_82110[iVar0 /*5*/] != -1)
		{
			if (Global_69505.f_109[Global_82110[iVar0 /*5*/] /*4*/] == iParam0)
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
	if (unk_0x2A488C176D52CCA5(Local_52, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_301 = 1;
	}
	else if (unk_0x2A488C176D52CCA5(Local_52, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_301 = 2;
	}
}

void func_220()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_76) && !unk_0x76B2D234F1895632(iLocal_76))
	{
		unk_0x9BEE7E791BC4D38B(iLocal_76, 0);
		unk_0x839E9476E54502A2(unk_0x1B2DC87EFB36DF80(iLocal_76));
		func_232(&iLocal_76, 1, 0, 1);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_75) && !unk_0x76B2D234F1895632(iLocal_75))
	{
		unk_0xC31A3F1982C7B12B(iLocal_75, 310, 1);
		unk_0x9BEE7E791BC4D38B(iLocal_75, 0);
	}
	if (unk_0xD11595488376CB53(uLocal_64))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_64);
	}
	func_59(&uLocal_67);
	if (unk_0xD11595488376CB53(uLocal_65))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_65);
	}
	if (unk_0x64C1636D480771D9("RE_CAR_STEAL_SCENE"))
	{
		if (func_151(iLocal_77))
		{
			unk_0xD1AE9D189CB65173(iLocal_77, 0);
		}
		unk_0x61B624BA2305D0E5("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_301 == 2)
	{
		unk_0x22CA804442E37496(joaat("rocoto"));
	}
	else
	{
		unk_0x22CA804442E37496(joaat("peyote"));
	}
	func_16(&iLocal_77);
	if (func_151(iLocal_80))
	{
		unk_0x0C27C841171728F7(iLocal_80, 1);
	}
	unk_0x515F66600A2670E2(0);
	unk_0x63EB72E192731928(1f);
	func_135(39, 0);
	func_135(40, 0);
	func_135(41, 0);
	func_135(42, 0);
	func_135(43, 0);
	func_135(44, 0);
	func_221(-1);
	func_61(&uLocal_330, 0, 0);
	unk_0x52F20802944F8DCE();
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
		unk_0xFB04AECD5A11A220(0, 0);
		Global_99146 = unk_0x9D40BBF80D8F5E8A();
		func_224(30000);
		StringCopy(&cVar0, func_223(Global_99144, 1), 64);
		if (func_122(Global_99144) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99143, 64);
		}
		unk_0x2DE5A7EBFE83C154(&cVar0, Global_99141, (unk_0x9D40BBF80D8F5E8A() - Global_99142), 0);
	}
	else if (unk_0xB519E5386FBF69E5(Global_99151, 0) && Global_99155.f_29444.f_2 < 3)
	{
		unk_0x73817D396768E4C6(&Global_99151, 0);
	}
	func_222(&Global_25093);
	Global_99145 = 0;
	func_176(-1);
}

void func_222(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35581)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35580 = 0;
	Global_35582 = 0;
	Global_35619 = 15;
	Global_55575 = 0;
	Global_55576 = 0;
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
	Global_36170 = (unk_0x9D40BBF80D8F5E8A() + iParam0);
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
	Global_99155.f_29444.f_43[iParam0] = *uParam1;
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
	func_195(uParam0, iParam5);
	func_196(uParam0, iParam4);
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
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0xAF437D7C802AB246(*uParam0))
		{
			unk_0xC602CB510D8B9EAE(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xAA6742AEFA0B2BC4(*uParam0);
			}
			unk_0x8D6671D78D1F569B(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9BEE7E791BC4D38B(*uParam0, 0);
			}
		}
		unk_0x506D42CB68AE4EA5(uParam0);
	}
}


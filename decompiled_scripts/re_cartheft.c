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
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int* iLocal_66 = NULL;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
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
	int iLocal_301 = 0;
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
	fLocal_54 = ScriptParam_0.f_17[0];
	if (unk_0xC968670BFACE42D9(11))
	{
		func_213();
	}
	func_212();
	if (iLocal_300 == 2)
	{
		if (func_211(34))
		{
			unk_0x1090044AD1DA76FA();
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x9134873537FA419C(unk_0xD80958FC74E988A6()))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				if (Var0.f_2 > 23f || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, false, true, 0))
				{
					unk_0x1090044AD1DA76FA();
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
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_166();
		func_165(iLocal_62, &uLocal_65);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xC3376F42B1FACCC6(unk_0x4F8644AF03D0E0D6());
		}
		func_164();
		if (!func_163())
		{
			if (func_162())
			{
				func_213();
			}
			if (unk_0xC5042CC6F5E3D450())
			{
				switch (iLocal_47)
				{
					case 0:
						if (func_145())
						{
							unk_0x102E68B2024D536D(false);
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
						{
							if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(iLocal_74)) && func_144(iLocal_76)) && !func_143(0))
							{
								if (func_142())
								{
									if (func_144(iLocal_79))
									{
										unk_0xEB9DC3C7D8596C46(iLocal_79, false);
									}
									func_133(1);
									unk_0x020E5F00CDA207BA(0.1f);
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
								if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
								{
									unk_0x22B0D0E37CCB840D(iLocal_74, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
									unk_0x971D38760FBC02EF(iLocal_74, true);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_213();
							}
						}
						else
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_74) && func_144(iLocal_76))
							{
								unk_0x480142959D337D00(iLocal_74, iLocal_76, 20f, iLocal_298);
								unk_0x971D38760FBC02EF(iLocal_74, true);
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
			if (unk_0x84A2DD9AC37C35C1(iLocal_75))
			{
				if (Local_121[2 /*10*/].f_7)
				{
					func_102(&Local_121, 2);
				}
			}
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			func_94();
			if (func_144(iLocal_76) && !func_93())
			{
				if (func_91())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
					{
						switch (iLocal_48)
						{
							case 0:
								if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
								{
									if (unk_0xA3EE4A07279BB9DB(iLocal_75, iLocal_76, false))
									{
										if (iLocal_300 == 2)
										{
											unk_0x0DC7CABAB1E9B67E(iLocal_75, 1);
											unk_0x0DC7CABAB1E9B67E(iLocal_76, 1);
											unk_0xE8854A4326B9E12B(&iLocal_77);
											unk_0x9454528DF15D657A(0, iLocal_76, unk_0xD80958FC74E988A6(), 8, 30f, iLocal_299, 200f, 10f, false);
											unk_0x39E72BC99E6360CB(iLocal_77);
											unk_0x5ABA3986D90D8A3B(iLocal_75, iLocal_77);
											unk_0x3841422E9C488D8C(&iLocal_77);
										}
										else
										{
											unk_0x0DC7CABAB1E9B67E(iLocal_75, 1);
											unk_0xE8854A4326B9E12B(&iLocal_77);
											unk_0xC429DCEEB339E129(0, iLocal_76, 30, 1000);
											unk_0x9454528DF15D657A(0, iLocal_76, unk_0xD80958FC74E988A6(), 8, 40f, iLocal_299, 200f, 10f, true);
											unk_0x39E72BC99E6360CB(iLocal_77);
											unk_0x5ABA3986D90D8A3B(iLocal_75, iLocal_77);
											unk_0x3841422E9C488D8C(&iLocal_77);
										}
										Local_316 = { unk_0x44A8FCB8ED227738(iLocal_76, unk_0xFB71170B7E76ACBA(iLocal_76, "wheel_lr")) };
										Local_319 = { unk_0x2274BC1C4885E333(iLocal_76, Local_316) };
										unk_0x0D53A3B8DA0809D2("scr_wheel_burnout", iLocal_76, Local_319 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, false, false, false);
										Local_322 = { unk_0x44A8FCB8ED227738(iLocal_76, unk_0xFB71170B7E76ACBA(iLocal_76, "wheel_rr")) };
										Local_325 = { unk_0x2274BC1C4885E333(iLocal_76, Local_322) };
										unk_0x0D53A3B8DA0809D2("scr_wheel_burnout", iLocal_76, Local_325 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, false, false, false);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0xA6DB27D19ECBB7DA(iLocal_63))
										{
											iLocal_63 = func_89(iLocal_76, 1, 0);
										}
										unk_0xC5F0A8EBD3F361CE(2);
										iLocal_48 = 1;
									}
									else if (unk_0xC86D67D52A707CF8(iLocal_76, unk_0xD80958FC74E988A6(), true))
									{
										if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
										{
											unk_0x22B0D0E37CCB840D(iLocal_75, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
											unk_0x971D38760FBC02EF(iLocal_75, true);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_213();
									}
								}
								else
								{
									unk_0x480142959D337D00(iLocal_74, iLocal_76, 20f, iLocal_298);
									unk_0x971D38760FBC02EF(iLocal_74, true);
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
											unk_0xAB54A438726D25D5(iLocal_76, fLocal_118);
											iVar3 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(iLocal_76, true), 5f, 0, 4);
											if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
											{
												if (func_144(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
												{
													if (unk_0x17FFC1B2BA35A494(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), iLocal_76))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_144(iVar3))
												{
													if (iVar3 != iLocal_76)
													{
														if (unk_0x17FFC1B2BA35A494(iVar3, iLocal_76))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x7D5DABE888D2D074(iLocal_76) < 700f)
									{
										func_213();
									}
								}
								func_66();
								if ((((((func_65() || func_64()) || unk_0x1DBD58820FA61D71(iLocal_76)) || unk_0x679BE1DAF71DA874(iLocal_76, 1, 5000)) || unk_0x28D3FED7190D3A0B(iLocal_76)) || unk_0x84A2DD9AC37C35C1(iLocal_75)) || !unk_0xA3EE4A07279BB9DB(iLocal_75, iLocal_76, false))
								{
									if (unk_0xB65B60556E2A9225("RE_CAR_STEAL_SCENE"))
									{
										if (func_144(iLocal_76))
										{
											unk_0x18EB48CFC41F2EA0(iLocal_76, 0f);
										}
										unk_0xDFE8422B3B94E688("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xA6DB27D19ECBB7DA(iLocal_63))
									{
										unk_0x86A652570E5F25DD(&iLocal_63);
									}
									func_63();
									if (unk_0xA6DB27D19ECBB7DA(iLocal_62))
									{
										unk_0x86A652570E5F25DD(&iLocal_62);
									}
									unk_0xA72CD9CA74A5ECBA(iLocal_74);
									unk_0x260BE8F09E326A20(iLocal_76, 50f, 5, false);
									iLocal_64 = func_89(iLocal_76, 0, 0);
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_76, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
									fLocal_106 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_76, true), unk_0x3FEF770D40960D5A(iLocal_74, true));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_74, true));
									func_61(&uLocal_329, 0, 0);
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								if (func_144(iLocal_76))
								{
									if (unk_0x7D5DABE888D2D074(iLocal_76) < 700f)
									{
										func_213();
									}
								}
								if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
								{
									func_213();
								}
								if (!unk_0x5F9532F3B5CC2551(iLocal_75))
								{
									if (!unk_0xA3EE4A07279BB9DB(iLocal_75, iLocal_76, false))
									{
										func_60(iLocal_75, &iLocal_66, -1, 0, 0, 0, -1082130432, 0);
									}
								}
								else
								{
									func_59(&iLocal_66);
								}
								if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
								{
									if (!unk_0x4859F1FC66A6278E(iLocal_75, unk_0xD80958FC74E988A6()))
									{
										unk_0xF166E48407BAC484(iLocal_75, unk_0xD80958FC74E988A6(), 0, 16);
										unk_0xE532F5D78798DAAB(unk_0x9F47B058362C84B5(iLocal_75));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_76, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > (fLocal_108 + 220f) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_76, true), unk_0x3FEF770D40960D5A(iLocal_74, true)) > (fLocal_106 + 220f)) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_74, true)) > (fLocal_107 + 220f))
								{
									if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_76, false))
									{
										func_103(0);
									}
									else
									{
										func_213();
									}
								}
								if (unk_0xA6DB27D19ECBB7DA(iLocal_64))
								{
									if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_76, false))
									{
										unk_0x86A652570E5F25DD(&iLocal_64);
										iLocal_62 = func_55(iLocal_74, 0, 0);
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
											if (!unk_0xE33D59DA70B58FDF(Local_92, 2f) && !unk_0xE659E47AF827484B(iLocal_74))
											{
												unk_0x06843DA7060A026B(iLocal_74, Local_92, true, false, false, true);
												unk_0x8E2530AA8ADA980E(iLocal_74, fLocal_105);
												iLocal_59 = 1;
											}
										}
										iLocal_49 = 3;
										iLocal_303 = unk_0x9CD27B0045628463();
									}
									else if (unk_0x751B70C3D034E187(iLocal_76, iLocal_74, 20f, 20f, 7f, false, true, 0))
									{
										func_53();
										if (func_52())
										{
											if (unk_0x639431E895B9AA57(iLocal_74, iLocal_76, -1, false, false))
											{
												if (!bLocal_295)
												{
													if (func_42(&Local_121, cLocal_293, sLocal_289, 4, 0, 0, 0))
													{
													}
												}
												unk_0x480142959D337D00(iLocal_74, iLocal_76, 35f, iLocal_298);
												unk_0x971D38760FBC02EF(iLocal_74, true);
												func_103(1);
											}
										}
									}
								}
								else if (unk_0xA6DB27D19ECBB7DA(iLocal_62))
								{
									if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_76, false))
									{
										if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_74, fLocal_55, fLocal_55, fLocal_55, false, true, 0))
										{
											if (func_41(1, 0, 1))
											{
												unk_0x86A652570E5F25DD(&iLocal_62);
												if (iLocal_300 == 1)
												{
													if (func_40(unk_0xE83D4F9BA2A38914(iLocal_76), 336f, 90f))
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
												unk_0xD3BD40951412FEF6(sLocal_305);
												iLocal_49 = 4;
												iLocal_48 = 3;
											}
										}
										else
										{
											func_38(unk_0x3FEF770D40960D5A(iLocal_74, true), &fLocal_55, &fLocal_56);
										}
									}
									else
									{
										unk_0x86A652570E5F25DD(&iLocal_62);
										iLocal_64 = func_89(iLocal_76, 0, 0);
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
											unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
										}
										func_103(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_74))
									{
										unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
									}
									func_103(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
						{
							if (unk_0xA3EE4A07279BB9DB(iLocal_75, iLocal_76, false))
							{
								unk_0x9454528DF15D657A(iLocal_75, iLocal_76, unk_0xD80958FC74E988A6(), 8, 50f, iLocal_299, 10f, 10f, false);
								unk_0x971D38760FBC02EF(iLocal_75, true);
								unk_0xE532F5D78798DAAB(unk_0x9F47B058362C84B5(iLocal_75));
							}
							else
							{
								unk_0x22B0D0E37CCB840D(iLocal_75, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
								unk_0x971D38760FBC02EF(iLocal_75, true);
								unk_0xE532F5D78798DAAB(unk_0x9F47B058362C84B5(iLocal_75));
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
							unk_0xEA386986E786A54F(&iLocal_76);
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
						{
							unk_0x9614299DCB53E54B(&iLocal_75);
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
					{
						if (unk_0x1F0B79228E461EC9(iLocal_74, sLocal_82, "agitated_idle_a", 3))
						{
							unk_0x28004F88151E03E0(iLocal_74, "waiting", sLocal_82, -2f);
						}
						func_1(iLocal_74, "GENERIC_CURSE_HIGH", 24);
						unk_0xE8854A4326B9E12B(&iLocal_77);
						unk_0xD76B57B44F1E6F8B(0, Local_101, 1f, 20000, 40000f, 0.5f);
						unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
						unk_0x39E72BC99E6360CB(iLocal_77);
						unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
						unk_0x3841422E9C488D8C(&iLocal_77);
					}
					func_213();
				}
			}
			else
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
				{
					unk_0x22B0D0E37CCB840D(iLocal_75, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_75, true);
				}
				if (unk_0x7239B21A38F536BA(iLocal_76))
				{
					unk_0x45F6D8EEF34ABEF1(iLocal_76, 50f);
				}
				func_213();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_2(iParam2), 1);
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
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
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
	if (((!unk_0x84A2DD9AC37C35C1(iLocal_74) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && func_144(iLocal_76)) && unk_0xD031A9162D01088C(sLocal_305))
	{
		switch (iLocal_50)
		{
			case 0:
				if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
				{
					if (func_41(1, 0, 1))
					{
						if (!unk_0xA921AA820C25702F(Global_2263, 11))
						{
							if (!unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
							{
								func_31(1, 1, 1, 0);
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
								{
									unk_0x8DFCED7A656F8802(true);
									while (!func_30(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), fLocal_56, 1, 1056964608, 0, 1))
									{
										unk_0x719FF505F097FD20();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), fLocal_56, 0, 1056964608, 0, 1);
								}
								unk_0x719FF505F097FD20();
								if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
								{
									unk_0xB128377056A54E2A(iLocal_74, false);
								}
								func_28();
								func_23();
								unk_0x719FF505F097FD20();
								iLocal_50 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				unk_0xF2BFA0430F0A0FCB(iLocal_76, 0, 0, 0f);
				unk_0xA5A9653A8D2CAF48(iLocal_76, 0, true, true, true);
				unk_0x719FF505F097FD20();
				if (iLocal_300 == 1)
				{
					if (func_144(iLocal_76))
					{
						if (func_40(unk_0xE83D4F9BA2A38914(iLocal_76), 336f, 90f))
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
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Local_86, true, false, false, true);
					unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
					unk_0x06843DA7060A026B(iLocal_74, Local_92, true, false, false, true);
					unk_0x8E2530AA8ADA980E(iLocal_76, fLocal_104);
					unk_0x06843DA7060A026B(iLocal_76, Local_89, true, false, false, true);
				}
				else
				{
					if (!func_40(unk_0xE83D4F9BA2A38914(iLocal_76), 64.6764f, 90f))
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
					unk_0x06843DA7060A026B(iLocal_76, Local_89, true, false, false, true);
					unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
					unk_0x8E2530AA8ADA980E(iLocal_76, fLocal_104);
				}
				unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 0, false);
				if (func_144(iLocal_76))
				{
					unk_0x49733E92263139D1(iLocal_76);
					if (unk_0x7239B21A38F536BA(iLocal_75))
					{
						if (unk_0xA3EE4A07279BB9DB(iLocal_75, iLocal_76, false))
						{
							unk_0x9614299DCB53E54B(&iLocal_75);
						}
					}
				}
				Local_309 = { 0f, 0f, 0f };
				Local_312 = { 0f, 0f, 0f };
				iLocal_301 = unk_0x8C18E0F9080ADD73(Local_309, Local_312, 2);
				unk_0x272E4723B56A3B96(iLocal_301, iLocal_76, unk_0xFB71170B7E76ACBA(iLocal_76, sVar3));
				unk_0x6ACF6B7225801CD7(iLocal_301, Local_309, Local_312, 2);
				unk_0xEEA929141F699854(iLocal_74, iLocal_301, sLocal_305, sLocal_307, 1000f, -2f, 0, 0, 1000f, 0);
				unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iLocal_301, sLocal_305, sLocal_308, 1000f, -2f, 1024, 0, 1000f, 0);
				iLocal_78 = unk_0xB51194800B257161("DEFAULT_ANIMATED_CAMERA", Local_112, Local_115, fLocal_111, false, 2);
				unk_0xE32EFE9AB4A9AA0C(iLocal_78, iLocal_301, "car_returned_cam", sLocal_305);
				unk_0x7FB218262B810701(iLocal_76, sLocal_306, sLocal_305, 1000f, false, false, false, 0f, 262144);
				Local_309 = { unk_0x3FEF770D40960D5A(iLocal_76, true) };
				Local_312 = { unk_0xAFBD61CC738D9EB9(iLocal_76, 2) };
				if (func_144(iLocal_79))
				{
					if (func_22(iLocal_79, Local_89, 1) <= 11f)
					{
						unk_0x06843DA7060A026B(iLocal_79, Var4, true, false, false, true);
						unk_0x8E2530AA8ADA980E(iLocal_79, fVar7);
						unk_0x49733E92263139D1(iLocal_79);
						unk_0xAD738C3085FE7E11(iLocal_79, true, false);
					}
				}
				unk_0xA56F01F3765B93A0(Local_89, 10f, true, false, false, false);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_300 == 2)
				{
					unk_0x81A15811460FAB3A(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x81A15811460FAB3A(joaat("peyote"), 15);
				}
				unk_0x056A8A219B8E829F(Local_89, 15f);
				unk_0x026FB97D0A425F84(iLocal_78, true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				iLocal_50 = 3;
				unk_0xA76359FC80B2438E(1f);
				break;
			
			case 3:
				unk_0x719FF505F097FD20();
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
				else if (unk_0x25D39B935A038A26(iLocal_301) && !bLocal_341)
				{
					if (unk_0xE4A310B1D7FA73CC(iLocal_301) >= 0.2f)
					{
						if (func_42(&Local_121, cLocal_293, sLocal_120, 4, 0, 0, 0))
						{
							iLocal_61 = 0;
							iLocal_50 = 4;
						}
					}
				}
				unk_0xA76359FC80B2438E(1f);
				break;
			
			case 4:
				unk_0x719FF505F097FD20();
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
				unk_0xA76359FC80B2438E(1f);
				if (iLocal_300 == 1)
				{
					if (unk_0x25D39B935A038A26(iLocal_301))
					{
						if (iLocal_315 == 0)
						{
							if (unk_0xE4A310B1D7FA73CC(iLocal_301) >= 0.83f)
							{
								unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
								unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, unk_0xE4A310B1D7FA73CC(iLocal_301), false, false, false);
								unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), true, false);
								iLocal_315 = 1;
							}
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
						{
							if (unk_0xE4A310B1D7FA73CC(iLocal_301) >= 0.83f)
							{
								if (unk_0x1F0B79228E461EC9(iLocal_74, sLocal_305, sLocal_307, 2))
								{
									unk_0x43D3807C077261E3(iLocal_74, -1000f, false);
									if (!unk_0x997ABD671D25CA0B(iLocal_74, false))
									{
										if (func_144(iLocal_76))
										{
											unk_0xF75B0D629E1C063D(iLocal_74, iLocal_76, -1);
											unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
										}
									}
									unk_0x2208438012482A1A(iLocal_74, true, false);
								}
								else
								{
									unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
								}
							}
						}
					}
				}
				else if (unk_0x25D39B935A038A26(iLocal_301))
				{
					if (iLocal_315 == 0)
					{
						if (unk_0xE4A310B1D7FA73CC(iLocal_301) >= 0.86f)
						{
							unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
							unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, unk_0xE4A310B1D7FA73CC(iLocal_301), false, false, false);
							unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), true, false);
							iLocal_315 = 1;
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
					{
						if (unk_0xE4A310B1D7FA73CC(iLocal_301) > 0.847f)
						{
							if (unk_0x1F0B79228E461EC9(iLocal_74, sLocal_305, sLocal_307, 2))
							{
								unk_0x43D3807C077261E3(iLocal_74, -1000f, false);
								if (!unk_0x997ABD671D25CA0B(iLocal_74, false))
								{
									if (func_144(iLocal_76))
									{
										unk_0xF75B0D629E1C063D(iLocal_74, iLocal_76, -1);
										unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
									}
								}
								unk_0x2208438012482A1A(iLocal_74, true, false);
							}
							else
							{
								unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
							}
						}
					}
				}
				if (((unk_0x25D39B935A038A26(iLocal_301) && unk_0xE4A310B1D7FA73CC(iLocal_301) >= 0.99f) || !unk_0x25D39B935A038A26(iLocal_301)) || func_19())
				{
					if (!unk_0x5F9532F3B5CC2551(iLocal_76) && unk_0x1F0B79228E461EC9(iLocal_76, sLocal_305, sLocal_306, 3))
					{
						unk_0x4487C259F0F70977(iLocal_76, sLocal_305, sLocal_306, 1f);
					}
					if (unk_0x25D39B935A038A26(iLocal_301))
					{
						unk_0x734292F4F0ABF6D0(iLocal_301, 1f);
					}
					if (bLocal_341)
					{
						Var0 = { unk_0xBE22B26DD764C040(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2));
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
						Var0 = { unk_0x4B805E6046EE9E47(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), Var0.f_2);
						unk_0x6D0858B8EDFD2B7D(0f, 1f);
						unk_0xB4EC2312F4E5B1F1(0f);
					}
					unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Idle"), true, 0, true);
					if (!unk_0x997ABD671D25CA0B(iLocal_74, false))
					{
						if (func_144(iLocal_76))
						{
							unk_0xF75B0D629E1C063D(iLocal_74, iLocal_76, -1);
							unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
					{
						if (unk_0x997ABD671D25CA0B(iLocal_74, false))
						{
							if (func_144(iLocal_76))
							{
								unk_0xF2BFA0430F0A0FCB(iLocal_76, 0, 0, 0f);
								unk_0xA5A9653A8D2CAF48(iLocal_76, 0, true, true, true);
								iLocal_304 = unk_0x9CD27B0045628463();
								iLocal_50 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x719FF505F097FD20();
				if ((unk_0x9CD27B0045628463() - iLocal_304) > 100)
				{
					if (func_3(iLocal_74) && func_144(iLocal_76))
					{
						unk_0xE8854A4326B9E12B(&iLocal_77);
						unk_0xC429DCEEB339E129(0, iLocal_76, 9, 1000);
						unk_0x480142959D337D00(0, iLocal_76, 25f, iLocal_298);
						unk_0x39E72BC99E6360CB(iLocal_77);
						unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
						unk_0x3841422E9C488D8C(&iLocal_77);
						unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
					}
					func_31(0, 1, 1, 0);
					if (bLocal_341)
					{
						if (unk_0xA7A932170592B50E(iLocal_78))
						{
							unk_0x026FB97D0A425F84(iLocal_78, false);
							unk_0x865908C81A2C22E9(iLocal_78, false);
						}
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0x6D0858B8EDFD2B7D(0f, 1f);
						unk_0xB4EC2312F4E5B1F1(0f);
						func_17(500, 1);
					}
					else
					{
						unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
						unk_0x026FB97D0A425F84(iLocal_78, false);
					}
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_16(&iLocal_76);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_74))
				{
					unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
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
			iVar1 = 2827;
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
			if (iVar1 != 2827)
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

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
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
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
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
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_7(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_14(unk_0xD80958FC74E988A6());
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
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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

void func_16(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x5F9532F3B5CC2551(*iParam0);
		if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
		{
			unk_0x629BFA74418D6239(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0xB16FCE9DDC7BA182() || unk_0x797AC7CB535BA28F())
	{
		if (!unk_0x5C544BC6C57AC575())
		{
			unk_0xD4E8E24955024033(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x5A859503B0C08678())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	if (func_20(1000))
	{
		if (unk_0x1BBE0523B8DB9A21(joaat("rocoto")) || unk_0x1BBE0523B8DB9A21(joaat("peyote")))
		{
			unk_0x026FB97D0A425F84(iLocal_78, false);
			unk_0x891B5B39AC6302AF(500);
			while (unk_0x797AC7CB535BA28F())
			{
				unk_0x719FF505F097FD20();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_341 = true;
			return 1;
		}
	}
	if (unk_0xB16FCE9DDC7BA182())
	{
		if (unk_0x1BBE0523B8DB9A21(joaat("rocoto")) || unk_0x1BBE0523B8DB9A21(joaat("peyote")))
		{
			bLocal_341 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x5A859503B0C08678())
	{
		if ((unk_0x9CD27B0045628463() - Global_27) > iParam0)
		{
			Global_26 = unk_0x9CD27B0045628463();
		}
		Global_27 = unk_0x9CD27B0045628463();
		if ((unk_0x9CD27B0045628463() - Global_26) > iParam0)
		{
			if (func_21())
			{
				Global_26 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

void func_23()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_2264, 2);
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
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
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
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
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
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_37(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_25())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_36(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_37(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_36(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_32(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
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
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_33()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
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

int func_36(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_38(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - Param0 };
		fVar4 = unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1);
		if (func_39(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		fVar4 = unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1);
		if (func_39(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 10f)
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
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		fVar0 = unk_0xE83D4F9BA2A38914(iParam0);
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
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
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
					unk_0xD79DEEFB53455EBA(false);
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
		if (unk_0x16754C556D2EDE3D())
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
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
	unk_0xD79DEEFB53455EBA(false);
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_50()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
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
	if (unk_0x84A2DD9AC37C35C1(iLocal_75))
	{
		return 1;
	}
	else if (func_144(iLocal_76))
	{
		if (!unk_0x751B70C3D034E187(iLocal_75, iLocal_76, 10f, 10f, 10f, false, true, 0))
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
		fVar0 = unk_0xC45D23BAF168AAB8(iLocal_76);
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
		if (iVar1 && unk_0x11D862A3E977A9EF(iLocal_76))
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

int func_55(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_56(iParam0, bParam1, 145);
}

int func_56(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_57(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_58(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_58(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_58(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1))
	{
		unk_0x86A652570E5F25DD(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_7))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_7))
		{
			if (unk_0x15B8ECF844EE67ED(iParam0->f_7))
			{
				unk_0xD30C50DF888D58B5(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_60(int iParam0, int* iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA5EDC40EF369B48D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(iParam0))
		{
			unk_0xD30C50DF888D58B5(iParam0, true);
			iParam1->f_7 = iParam0;
			unk_0xE52B8E7F85D39A08(iParam0, iParam2);
			unk_0x97C65887D4B37FA9(iParam0, fParam6);
			if (unk_0xA6DB27D19ECBB7DA(*iParam1))
			{
				unk_0xAE9FC9EF6A9FAC79(*iParam1, 7);
			}
		}
		unk_0x0C4BBF625CA98C4E(iParam0, bParam4);
		unk_0x3EED80DFF7325CAA(iParam0, bParam5);
		*iParam1 = unk_0x7CD934010E115C2C(iParam0);
		if (!unk_0xA921AA820C25702F(iParam1->f_6, 2))
		{
			if (unk_0xA6DB27D19ECBB7DA(*iParam1))
			{
				if (!unk_0xCA042B6957743895(sParam7))
				{
					unk_0xF9113A30DE5C6670("MCUSTBLIP");
					unk_0x6C188BE134E074AA(sParam7);
					unk_0xBC38B49BCB83BC9B(*iParam1);
				}
				unk_0x933D6A9EEC1BACD0(&(iParam1->f_6), 2);
			}
		}
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			iParam1->f_1 = unk_0x56176892826A4FE8(iParam0);
			if (!unk_0xA921AA820C25702F(iParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(iParam1->f_1))
				{
					unk_0xAE9FC9EF6A9FAC79(iParam1->f_1, 7);
					unk_0x933D6A9EEC1BACD0(&(iParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(iParam1->f_1))
		{
			iParam1->f_1 = 0;
			unk_0xE80492A9AC099A93(&(iParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_2446208.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_62(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (func_62(sVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

bool func_62(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_63()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
	{
		unk_0x9F7794730795E019(iLocal_75, 2, false);
		unk_0x9F7794730795E019(iLocal_75, 6, false);
		unk_0x9F7794730795E019(iLocal_75, 3, true);
		unk_0x9F7794730795E019(iLocal_75, 1, false);
		unk_0xF166E48407BAC484(iLocal_75, unk_0xD80958FC74E988A6(), 0, 16);
		unk_0x9F8AA94D6D97DBF4(iLocal_75, false);
		unk_0xE532F5D78798DAAB(unk_0x9F47B058362C84B5(iLocal_75));
	}
	else
	{
		unk_0xE532F5D78798DAAB(unk_0x9F47B058362C84B5(iLocal_75));
	}
	if (func_144(iLocal_76))
	{
		unk_0xB664292EAECF7FA6(iLocal_76, 1);
	}
}

int func_64()
{
	if (func_144(iLocal_76))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_76, 40f, 40f, 10f, false, true, 0))
		{
			if (iLocal_80)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
				{
					if (!iLocal_297)
					{
						if (!unk_0xDFD5033FDBA0A9C8(iLocal_76))
						{
							unk_0x2F8AF0E82773A171(iLocal_75, unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 40f, 100, true, -753768974);
							iLocal_297 = 1;
						}
					}
					if (unk_0x9CD27B0045628463() > iLocal_302 + 7000)
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_76, 20f, 20f, 10f, false, true, 0))
						{
							if (func_42(&Local_121, cLocal_293, sLocal_288, 4, 0, 0, 0))
							{
								iLocal_302 = unk_0x9CD27B0045628463();
							}
						}
					}
					unk_0xA72CD9CA74A5ECBA(iLocal_76);
					unk_0xAC678E40BE7C74D2(iLocal_76);
					iLocal_80 = 0;
				}
			}
			if (unk_0xC86D67D52A707CF8(iLocal_76, unk_0xD80958FC74E988A6(), true))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
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
		if (((unk_0xBA291848A0815CA9(iLocal_76, 0, false) || unk_0xBA291848A0815CA9(iLocal_76, 1, false)) || unk_0xBA291848A0815CA9(iLocal_76, 4, false)) || unk_0xBA291848A0815CA9(iLocal_76, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	if (func_144(iLocal_76) && unk_0xA6DB27D19ECBB7DA(iLocal_63))
	{
		func_67(&uLocal_329, iLocal_76, 0, 0, 1, 1, 1);
	}
}

void func_67(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_68(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_69(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_69(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_61(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_70(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
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
	if (func_87(iParam1) && unk_0x47D6F43D77935C75(iParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(iParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(iParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(iParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(iParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(iParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
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
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam8)
						{
							if (!func_62(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
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
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
				{
					if (((unk_0xE659E47AF827484B(iParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam8)
					{
						if (!func_62(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
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
			if (!unk_0xF22B6C47C6EAB066(sParam5))
			{
				if (func_62(sParam5))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_61(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
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
	if (func_87(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
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
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
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
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(sParam0) && func_62(sParam0)) || func_62("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
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
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
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
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

void func_78(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
		func_61(uParam0, 0, 0);
	}
	if (func_81(Param2, 0f, 0f, 0f))
	{
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			iVar0 = unk_0x04A2A40C73395041(iParam1);
			if (!unk_0x997ABD671D25CA0B(iVar0, false))
			{
				if (unk_0x12534C348C6CB68B(iVar0))
				{
					if (!func_79())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
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
	unk_0x189E955A8313E298(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_79()
{
	return func_80(unk_0x4F8644AF03D0E0D6());
}

int func_80(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
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
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_85(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
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
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
				if (!func_85(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
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
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
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
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
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
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
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
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
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
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 4);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_90(iParam0, bParam1, 0);
}

int func_90(int iParam0, bool bParam1, bool bParam2)
{
	return func_57(iParam0, !bParam1, bParam2);
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
		func_92(iLocal_63, iLocal_76, fVar0, 1061158912, 0);
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_76, fVar0, fVar0, 100f, false, true, 0))
		{
			return 1;
		}
		else if (!unk_0xE31C2C72B8692B64(iLocal_76))
		{
			return 1;
		}
	}
	return 0;
}

void func_92(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		if ((unk_0x7239B21A38F536BA(iParam1) && unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x6AC7003FA6E5575E(iParam1))
			{
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam1), false))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam1, true), true);
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
						unk_0xB14552383D39CE3E(iParam0, true);
						unk_0x45FF974EEE1C8734(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(iParam0, false);
						unk_0x45FF974EEE1C8734(iParam0, 255);
					}
				}
			}
			else if (unk_0x524AC5ECEA15343E(iParam1))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam1)))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam1, true), true);
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
						unk_0xB14552383D39CE3E(iParam0, true);
						unk_0x45FF974EEE1C8734(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(iParam0, false);
						unk_0x45FF974EEE1C8734(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_93()
{
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_76, false) && unk_0xB497F06B288DCFDF(iLocal_76))
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_74) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		switch (iLocal_49)
		{
			case 0:
				iLocal_57 = iLocal_57;
				if (!unk_0x997ABD671D25CA0B(iLocal_74, false))
				{
					if (iLocal_300 == 1)
					{
						if (func_101())
						{
							iLocal_49 = 1;
						}
					}
					else if (!unk_0x47E4E977581C5B55(iLocal_74) && !unk_0x2A74E1D5F2F00EEC(iLocal_74))
					{
						unk_0x69F4BE8C8CC4796C(iLocal_74, unk_0xD80958FC74E988A6(), -1, 0, 2);
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, false, true, 0))
						{
							unk_0x93B93A37987F1F3D(iLocal_74, 345f, 0);
							iLocal_49 = 1;
						}
						else
						{
							unk_0xE8854A4326B9E12B(&iLocal_77);
							unk_0xEA47FE3719165B94(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0f, false, false, false);
							unk_0xEA47FE3719165B94(0, sLocal_83, "arms_waving", 8f, -8f, -1, 0, 0f, false, false, false);
							unk_0xEA47FE3719165B94(0, sLocal_83, "arms_waving", 8f, -2f, -1, 0, 0f, false, false, false);
							unk_0x39E72BC99E6360CB(iLocal_77);
							unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
							unk_0x3841422E9C488D8C(&iLocal_77);
							iLocal_303 = unk_0x9CD27B0045628463();
							iLocal_49 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_300 == 1)
				{
					unk_0x69F4BE8C8CC4796C(iLocal_74, unk_0xD80958FC74E988A6(), -1, 0, 2);
					if (unk_0x77F1BEB8863288D5(iLocal_74, 242628503) != 1)
					{
						unk_0xE8854A4326B9E12B(&iLocal_77);
						unk_0xEA47FE3719165B94(0, sLocal_83, sLocal_85, 4f, -2f, -1, 0, 0f, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_77);
						unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
						unk_0x3841422E9C488D8C(&iLocal_77);
						iLocal_49 = 2;
					}
				}
				else if (unk_0xD71649DB0A545AA3(iLocal_74, unk_0xD80958FC74E988A6(), 60f))
				{
					if (unk_0x77F1BEB8863288D5(iLocal_74, 242628503) != 1)
					{
						unk_0xE8854A4326B9E12B(&iLocal_77);
						unk_0xEA47FE3719165B94(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0f, false, false, false);
						if (bLocal_60 == 0)
						{
							unk_0xEA47FE3719165B94(0, sLocal_83, "pointing", 8f, -4f, -1, 0, 0f, false, false, false);
						}
						unk_0x39E72BC99E6360CB(iLocal_77);
						unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
						unk_0x3841422E9C488D8C(&iLocal_77);
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
					if (!unk_0xD71649DB0A545AA3(iLocal_74, unk_0xD80958FC74E988A6(), 60f) && !func_98(iLocal_74, -875674219))
					{
						unk_0x5AD23D40115353AC(iLocal_74, unk_0xD80958FC74E988A6(), 0);
					}
					if (func_97(iLocal_74, unk_0xD80958FC74E988A6(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x9CD27B0045628463() - iLocal_303) > 6000)
							{
								func_96();
							}
						}
					}
				}
				if (unk_0x77F1BEB8863288D5(iLocal_74, 242628503) != 1 && !func_98(iLocal_74, -875674219))
				{
					if (iLocal_300 == 1)
					{
						Local_92 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x20B60995556D004F(iLocal_74, Local_92, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (unk_0x77F1BEB8863288D5(iLocal_74, 242628503) == 7)
							{
								unk_0xE8854A4326B9E12B(&iLocal_77);
								unk_0xD76B57B44F1E6F8B(0, Local_92, 1f, 20000, fLocal_105, 0.5f);
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								unk_0x39E72BC99E6360CB(iLocal_77);
								unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
								unk_0x3841422E9C488D8C(&iLocal_77);
							}
						}
						else if (!unk_0x1F0B79228E461EC9(iLocal_74, sLocal_82, "waiting", 3))
						{
							unk_0xEA47FE3719165B94(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0f, false, false, false);
							if (func_97(iLocal_74, unk_0xD80958FC74E988A6(), 1) < 25f)
							{
								func_96();
							}
						}
					}
					else if (!unk_0x1F0B79228E461EC9(iLocal_74, sLocal_82, "waiting", 3))
					{
						unk_0xEA47FE3719165B94(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0f, false, false, false);
					}
				}
				break;
			
			case 3:
				if (!unk_0x5CD3CB88A7F8850D(iLocal_74, unk_0xD80958FC74E988A6()))
				{
					unk_0x69F4BE8C8CC4796C(iLocal_74, unk_0xD80958FC74E988A6(), -1, 0, 2);
				}
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_74, 40f, 40f, 10f, false, true, 0) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_74, 9f, 9f, 9f, false, true, 0))
				{
					if (func_95())
					{
						if (iLocal_58)
						{
							if (iLocal_300 == 1)
							{
								unk_0xE8854A4326B9E12B(&iLocal_77);
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								unk_0xEA47FE3719165B94(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
								unk_0x39E72BC99E6360CB(iLocal_77);
								unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
								unk_0x3841422E9C488D8C(&iLocal_77);
								iLocal_58 = 0;
								iLocal_303 = unk_0x9CD27B0045628463();
							}
							else
							{
								unk_0xE8854A4326B9E12B(&iLocal_77);
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								unk_0xEA47FE3719165B94(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
								unk_0x39E72BC99E6360CB(iLocal_77);
								unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
								unk_0x3841422E9C488D8C(&iLocal_77);
								iLocal_58 = 0;
								iLocal_303 = unk_0x9CD27B0045628463();
							}
						}
						else if (!unk_0x1F0B79228E461EC9(iLocal_74, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0x77F1BEB8863288D5(iLocal_74, 242628503) == 7)
							{
								if (!unk_0xD71649DB0A545AA3(iLocal_74, unk_0xD80958FC74E988A6(), 45f))
								{
									unk_0xE8854A4326B9E12B(&iLocal_77);
									unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
									unk_0x39E72BC99E6360CB(iLocal_77);
									unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
									unk_0x3841422E9C488D8C(&iLocal_77);
								}
								else if ((unk_0x9CD27B0045628463() - iLocal_303) > 6000)
								{
									iLocal_58 = 1;
								}
							}
						}
						else if (!unk_0xD71649DB0A545AA3(iLocal_74, unk_0xD80958FC74E988A6(), 70f))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_74);
							unk_0xE8854A4326B9E12B(&iLocal_77);
							unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
							unk_0x39E72BC99E6360CB(iLocal_77);
							unk_0x5ABA3986D90D8A3B(iLocal_74, iLocal_77);
							unk_0x3841422E9C488D8C(&iLocal_77);
							iLocal_303 += 4000;
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_75))
					{
						unk_0x22B0D0E37CCB840D(iLocal_75, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
						unk_0x971D38760FBC02EF(iLocal_75, true);
						unk_0x2595DD4236549CE3(&iLocal_75);
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
					if (!unk_0x20B60995556D004F(iLocal_74, Local_92, 4f, 4f, 4f, false, true, 0))
					{
						if (unk_0x77F1BEB8863288D5(iLocal_74, 2106541073) == 7)
						{
							unk_0xD76B57B44F1E6F8B(iLocal_74, Local_92, 1f, 20000, fLocal_105, 0.5f);
						}
					}
					else if (!unk_0xD71649DB0A545AA3(iLocal_74, unk_0xD80958FC74E988A6(), 50f))
					{
						unk_0x5AD23D40115353AC(iLocal_74, unk_0xD80958FC74E988A6(), -1);
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
		{
			unk_0x22B0D0E37CCB840D(iLocal_74, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
			unk_0x971D38760FBC02EF(iLocal_74, true);
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

float func_97(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

int func_98(int iParam0, int iParam1)
{
	if (func_99(iParam0))
	{
		if (unk_0x77F1BEB8863288D5(iParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_75) && !unk_0x84A2DD9AC37C35C1(iLocal_74))
	{
		if (func_144(iLocal_76))
		{
			if (unk_0xA808AA1D79230FC2(iLocal_75, iLocal_76))
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
						unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_126(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_126(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_74))
					{
						unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
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
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
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
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
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
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
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
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_111(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_110() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
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
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_116(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_117(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_117(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
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
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_121(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_124(Var0);
	return uVar16;
}

int func_124(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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
		if (unk_0xA921AA820C25702F(iParam2, iParam3))
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
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xE80492A9AC099A93(&(Var0.f_1), 0);
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
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_110() == 0)
		{
			iVar0 = func_9(func_130(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_6(func_130(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 813;
			break;
		
		case 1:
			return 814;
			break;
		
		case 2:
			return 815;
			break;
		
		case 3:
			return 816;
			break;
		
		case 4:
			return 817;
			break;
		
		case 5:
			return 818;
			break;
		
		case 6:
			return 819;
			break;
		
		case 7:
			return 820;
			break;
		
		case 8:
			return 821;
			break;
		
		case 9:
			return 822;
			break;
		
		case 10:
			return 823;
			break;
		
		case 11:
			return 824;
			break;
		
		case 12:
			return 825;
			break;
		
		case 13:
			return 826;
			break;
		
		case 14:
			return 827;
			break;
		
		case 15:
			return 829;
			break;
		
		case 16:
			return 830;
			break;
		
		case 17:
			return 831;
			break;
		
		case 18:
			return 832;
			break;
		
		case 19:
			return 833;
			break;
		
		case 20:
			return 834;
			break;
		
		case 21:
			return 835;
			break;
		
		case 22:
			return 836;
			break;
		
		case 23:
			return 837;
			break;
		
		case 24:
			return 838;
			break;
		
		case 25:
			return 839;
			break;
		
		case 26:
			return 840;
			break;
		
		case 27:
			return 841;
			break;
		
		case 28:
			return 842;
			break;
		
		case 29:
			return 843;
			break;
		
		case 30:
			return 844;
			break;
		
		case 31:
			return 845;
			break;
		
		case 32:
			return 846;
			break;
		
		case 33:
			return 847;
			break;
		
		case 34:
			return 848;
			break;
		
		case 35:
			return 849;
			break;
		
		case 36:
			return 850;
			break;
		
		case 37:
			return 851;
			break;
		
		case 38:
			return 852;
			break;
		
		case 39:
			return 853;
			break;
		
		case 40:
			return 857;
			break;
		
		case 41:
			return 858;
			break;
		
		case 42:
			return 859;
			break;
		
		case 43:
			return 860;
			break;
		
		default:
			break;
	}
	return 2827;
}

void func_131(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_110() == 0)
		{
			iVar0 = func_9(func_130(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_6(func_130(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_132(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_110() == 0)
		{
			return unk_0xA921AA820C25702F(func_9(func_130(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_114(Global_97162))
		{
			func_134(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_114(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
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
				if (!unk_0xDAD37F45428801AE())
				{
					func_74(func_135(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_74(func_135(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_74(func_135(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
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
	switch (func_137(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
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
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, false, true, 0))
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
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x5E346D934122613F())
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
		{
			if (unk_0xE659E47AF827484B(iLocal_74))
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
	if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_74))
		{
			if (iParam0 == 0 || func_97(iLocal_74, iLocal_75, 1) > 15f)
			{
				if (unk_0x3F2023999AD51C1F(unk_0x17C07FC640E86B4E(iLocal_74, 31086, 0f, 0f, 0f), 4f, false))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0x17C07FC640E86B4E(iLocal_74, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0x17C07FC640E86B4E(iLocal_74, 31086, 0f, 0f, 0f) };
				if ((unk_0x2E0DC353342C4A6D(Var4, Var1, joaat("weapon_smokegrenade"), true) || unk_0x2E0DC353342C4A6D(Var4, Var1, joaat("weapon_grenade"), true)) || unk_0x2E0DC353342C4A6D(Var4, Var1, joaat("weapon_stickybomb"), true))
				{
					bVar0 = true;
				}
			}
			if (unk_0x2F09F7976C512404(unk_0x17C07FC640E86B4E(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xAB0F816885B0E483(-1, unk_0x17C07FC640E86B4E(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xC86D67D52A707CF8(iLocal_74, unk_0xD80958FC74E988A6(), true))
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
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
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
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_95) < unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_98))
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
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_95) < unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_98))
			{
				bLocal_60 = true;
			}
			break;
	}
	unk_0x963D27A58DF860AC(iVar7);
	unk_0x963D27A58DF860AC(iVar8);
	unk_0x963D27A58DF860AC(iVar9);
	unk_0xD3BD40951412FEF6(sLocal_82);
	unk_0xD3BD40951412FEF6(sLocal_83);
	unk_0xD3BD40951412FEF6(sLocal_84);
	unk_0xD3BD40951412FEF6("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x944955FB2A3935C8();
	if (((((((unk_0x98A4EB5D89A0C952(iVar7) && unk_0x98A4EB5D89A0C952(iVar8)) && unk_0x98A4EB5D89A0C952(iVar9)) && unk_0xD031A9162D01088C(sLocal_82)) && unk_0xD031A9162D01088C(sLocal_83)) && unk_0xD031A9162D01088C(sLocal_84)) && unk_0xD031A9162D01088C("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0xCA7D9B86ECA7481B())
	{
		if (iLocal_300 == 1)
		{
			func_159("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_95));
			func_159("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_98));
			iLocal_76 = unk_0xAF35D0D2583051B0(iVar9, Var3, fVar6, 1, 1);
			unk_0x2FA133A4A9D37ED8(iLocal_76, 0, false);
			unk_0xEB9DC3C7D8596C46(iLocal_76, false);
			unk_0x92F0CF722BC4202F(iLocal_76, true);
			unk_0x51BB2D88D31A914B(iLocal_76, false);
			unk_0x192547247864DFDD(iLocal_76, false);
			unk_0x7EE3A3C5E4A40CC9(iLocal_76, 2, false);
			iLocal_75 = unk_0x7DD959874C1FD534(iLocal_76, 22, iVar8, -1, true, true);
			unk_0x1913FE4CBF41C463(iLocal_75, 42, true);
			unk_0x9F7794730795E019(iLocal_75, 3, true);
			unk_0xBF0FD6E56C964FCB(iLocal_75, joaat("weapon_pistol"), -1, true, true);
			unk_0x7AEFB85C1D49DEB6(iLocal_75, 10);
			unk_0xB195FFA8042FC5C3(iLocal_75, 1f);
			unk_0xDED5AF5A0EA4B297(iLocal_75, 1f);
			unk_0x4F1D4BE3A7F24601(iLocal_76, 135, 135);
			unk_0xF372BC22FCB88606("re_cartheft relGroupThief", &iLocal_328);
			unk_0xBF25EB89375A37AD(5, iLocal_328, joaat("player"));
			unk_0xBF25EB89375A37AD(2, iLocal_328, joaat("CIVMALE"));
			unk_0xBF25EB89375A37AD(2, joaat("CIVMALE"), iLocal_328);
			unk_0xC80A74AC829DDD92(iLocal_75, iLocal_328);
			unk_0x79F020FF9EDC0748(iLocal_76, true);
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - Local_51 };
				fLocal_54 = unk_0x2FFB6B224F4B2926(Var0.f_0, Var0.f_1);
			}
			iLocal_74 = unk_0xD49F9B0955C367DE(5, iVar7, Local_51, fLocal_54, true, true);
			unk_0x6C8065A3B780185B(iLocal_74, sVar11);
			unk_0x69F4BE8C8CC4796C(iLocal_74, unk_0xD80958FC74E988A6(), -1, 2048, 2);
			unk_0x262B14F48D29DE80(iLocal_74, 0, 0, 1, 0);
			unk_0x262B14F48D29DE80(iLocal_74, 2, 2, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_74, 3, 1, 1, 0);
			unk_0x262B14F48D29DE80(iLocal_74, 4, 1, 1, 0);
			unk_0x9D64D7405520E3D3(iLocal_74, true);
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
				iLocal_76 = unk_0xAF35D0D2583051B0(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_76 = unk_0xAF35D0D2583051B0(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			unk_0x2FA133A4A9D37ED8(iLocal_76, 0, false);
			unk_0xEB9DC3C7D8596C46(iLocal_76, false);
			unk_0x33E8CD3322E2FE31(iLocal_76, 3);
			unk_0x92F0CF722BC4202F(iLocal_76, true);
			unk_0x1F2AA07F00B3217A(iLocal_76, 0);
			unk_0x6AF0636DDEDCB6DD(iLocal_76, 11, 2, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_76, 16, 3, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_76, 12, 1, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_76, 13, 1, false);
			unk_0x487EB21CC7295BA1(iLocal_76, 3);
			unk_0x6AF0636DDEDCB6DD(iLocal_76, 23, 6, false);
			unk_0x57C51E6BAD752696(iLocal_76, 3);
			unk_0x2A1F4F37F95BAD08(iLocal_76, 18, true);
			unk_0x2A1F4F37F95BAD08(iLocal_76, 22, true);
			unk_0x4F1D4BE3A7F24601(iLocal_76, 143, 0);
			unk_0x2036F561ADD12E33(iLocal_76, 31, 2);
			unk_0x51BB2D88D31A914B(iLocal_76, false);
			unk_0x192547247864DFDD(iLocal_76, false);
			if (bLocal_60)
			{
				iLocal_74 = unk_0xD49F9B0955C367DE(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, true, true);
			}
			else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, false, true, 0))
			{
				iLocal_74 = unk_0xD49F9B0955C367DE(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, true, true);
			}
			else
			{
				iLocal_74 = unk_0xD49F9B0955C367DE(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, true, true);
			}
			unk_0x262B14F48D29DE80(iLocal_74, 0, 0, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_74, 2, 1, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_74, 3, 1, 2, 0);
			unk_0x262B14F48D29DE80(iLocal_74, 4, 1, 2, 0);
			iLocal_75 = unk_0x7DD959874C1FD534(iLocal_76, 22, iVar8, -1, true, true);
			unk_0xBF0FD6E56C964FCB(iLocal_75, joaat("weapon_pistol"), -1, true, true);
			unk_0x7AEFB85C1D49DEB6(iLocal_75, 10);
			unk_0xB195FFA8042FC5C3(iLocal_75, 1f);
			unk_0xDED5AF5A0EA4B297(iLocal_75, 1f);
			unk_0x1913FE4CBF41C463(iLocal_75, 42, true);
			unk_0x6C8065A3B780185B(iLocal_75, sVar12);
			Local_89 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_104 = 294.4744f;
			Local_86 = { -501.0442f, -2150.799f, 8.139f };
			Local_92 = { -493.8062f, -2156.036f, 8.1978f };
			Local_112 = { -504.365f, -2144.534f, 9.8585f };
			Local_115 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x63F58F7C80513AAD(iLocal_74, false);
		unk_0x1913FE4CBF41C463(iLocal_74, 185, true);
		unk_0x52BBA29D5EC69356(iLocal_76, false);
		unk_0x2497C4717C8B881E(iLocal_76, 1, 1);
		unk_0x9F8AA94D6D97DBF4(iLocal_74, true);
		unk_0x9F8AA94D6D97DBF4(iLocal_75, true);
		unk_0x69F4BE8C8CC4796C(iLocal_74, iLocal_75, -1, 0, 2);
		unk_0xB72E26D81006005B(iLocal_76);
		unk_0x79F020FF9EDC0748(iLocal_76, true);
		unk_0x8BA6F76BC53A1493(iLocal_76, false, 0);
		unk_0x0FC2D89AC25A5814(iVar9, true);
		unk_0x013A80FC08F6E4F2("RE_CAR_STEAL_SCENE");
		unk_0x153973AB99FE8980(iLocal_76, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		unk_0x25367DE49D64CF16(iLocal_76, true);
		unk_0x9F7794730795E019(iLocal_74, 17, false);
		unk_0x70A2D1137C8ED7C9(iLocal_74, 512, true);
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
		func_158(&Local_121, 0, unk_0xD80958FC74E988A6(), sLocal_119, 0, 1);
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_157())
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_119();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_148(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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
	if (unk_0xCA042B6957743895(&cVar2))
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
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_157()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
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
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
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
	if (unk_0x0C515FAB3FF9EA92(sParam0, sParam0))
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_157())
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
	if ((Global_97162 == func_123() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_164()
{
	if (func_99(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) != iLocal_76 && unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) != iLocal_79)
			{
				iLocal_79 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			}
		}
	}
}

void func_165(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x9CD27B0045628463();
	}
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		iVar0 = (unk_0x9CD27B0045628463() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x970F608F0EE6C885(iParam0) != 255)
				{
					unk_0x45FF974EEE1C8734(iParam0, 255);
				}
			}
			else if (unk_0x970F608F0EE6C885(iParam0) != 0)
			{
				unk_0x45FF974EEE1C8734(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x970F608F0EE6C885(iParam0) != 255)
			{
				unk_0x45FF974EEE1C8734(iParam0, 255);
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
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_168();
}

void func_168()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_157())
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
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
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
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
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
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
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
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
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_183(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
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
	
	func_192(&uVar0, unk_0x494E97C2EF27C470());
	func_191(&uVar0, unk_0x13D2B8ADD79640F2());
	func_190(&uVar0, unk_0x25223CA6B4D20B7F());
	func_189(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_188(&uVar0, unk_0xBBC72712E80257A1());
	func_187(&uVar0, unk_0x961777E64BDAF717());
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
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_201()) || func_200()) || func_199()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_203()) || Global_24446) || func_202()) || func_49(8, -1)) || func_199()) || func_201()) || func_200()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_199()) || func_201()) || func_200()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_201()) || func_200()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_203() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_49(8, -1)) || func_198()) || func_197()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_49(8, -1) || func_201()) || func_200()) || func_197()) || func_196())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_203()) || Global_24446) || func_202()) || func_49(8, -1)) || func_200()) || func_199()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_203()) || func_200()) || Global_96220) || Global_24446) || func_202()) || Global_35953) || func_49(8, -1)) || func_199()) || func_197()) || func_198()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_203()) || Global_96220) || Global_24446) || func_202()) || func_49(8, -1)) || func_199()) || func_197()) || func_201()) || func_200()) || func_198())
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
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_198()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
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
	if (!unk_0x10FAB35428CCC9D7())
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
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_209()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
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
	if (unk_0x7239B21A38F536BA(iLocal_75) && !unk_0x5F9532F3B5CC2551(iLocal_75))
	{
		unk_0x9F8AA94D6D97DBF4(iLocal_75, false);
		unk_0xE532F5D78798DAAB(unk_0x9F47B058362C84B5(iLocal_75));
		func_225(&iLocal_75, 1, 0, 1);
	}
	if (unk_0x7239B21A38F536BA(iLocal_74) && !unk_0x5F9532F3B5CC2551(iLocal_74))
	{
		unk_0xC1E8A365BF3B29F2(iLocal_74, 310, true);
		unk_0x9F8AA94D6D97DBF4(iLocal_74, false);
	}
	if (unk_0xA6DB27D19ECBB7DA(iLocal_63))
	{
		unk_0x86A652570E5F25DD(&iLocal_63);
	}
	func_59(&iLocal_66);
	if (unk_0xA6DB27D19ECBB7DA(iLocal_64))
	{
		unk_0x86A652570E5F25DD(&iLocal_64);
	}
	if (unk_0xB65B60556E2A9225("RE_CAR_STEAL_SCENE"))
	{
		if (func_144(iLocal_76))
		{
			unk_0x18EB48CFC41F2EA0(iLocal_76, 0f);
		}
		unk_0xDFE8422B3B94E688("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_300 == 2)
	{
		unk_0xACE699C71AB9DEB5(joaat("rocoto"));
	}
	else
	{
		unk_0xACE699C71AB9DEB5(joaat("peyote"));
	}
	func_16(&iLocal_76);
	if (func_144(iLocal_79))
	{
		unk_0xEB9DC3C7D8596C46(iLocal_79, true);
	}
	unk_0xC5F0A8EBD3F361CE(0);
	unk_0x020E5F00CDA207BA(1f);
	func_128(39, 0);
	func_128(40, 0);
	func_128(41, 0);
	func_128(42, 0);
	func_128(43, 0);
	func_214(-1);
	func_61(&uLocal_329, 0, 0);
	unk_0x1090044AD1DA76FA();
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
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_217(30000);
		StringCopy(&cVar0, func_216(Global_97162, 1), 64);
		if (func_122(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
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
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
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

void func_225(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*iParam0);
			}
			unk_0x971D38760FBC02EF(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*iParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(iParam0);
	}
}


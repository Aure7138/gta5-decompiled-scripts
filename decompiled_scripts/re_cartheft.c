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
	if (unk_0x9CEB376419A71A96(11))
	{
		func_221();
	}
	func_220();
	if (iLocal_301 == 2)
	{
		if (func_219(34))
		{
			unk_0xF5DF8F3392CDD07B();
		}
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (!unk_0x211EB61B2F3222D0(unk_0x06736567F820A39E()))
			{
				Var0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
				if (Var0.f_2 > 23f || unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0xF5DF8F3392CDD07B();
				}
			}
		}
	}
	if (func_178(Local_52, 17, iLocal_301, 0, 0))
	{
		func_175(-1);
	}
	else
	{
		unk_0xF5DF8F3392CDD07B();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_174();
		func_173(uLocal_63, &uLocal_66);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xACFA2ED6C3AABF8A(unk_0xE0BDAFA1A39552D6());
		}
		func_172();
		if (!func_171())
		{
			if (func_170())
			{
				func_221();
			}
			if (unk_0x920167EE0888FA4E())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_153())
						{
							unk_0xC3A9543A81E69268(0);
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						if (!unk_0xCFC04A38F256EE06(iLocal_76))
						{
							if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !unk_0xCFC04A38F256EE06(iLocal_75)) && func_152(iLocal_77)) && !func_151(0))
							{
								if (func_150())
								{
									if (func_152(iLocal_80))
									{
										unk_0x3013DF83C9A8EBF2(iLocal_80, 0);
									}
									func_141(1);
									unk_0x71543B3C24188223(0.1f);
									func_136(39, 1);
									func_136(40, 1);
									func_136(41, 1);
									func_136(42, 1);
									func_136(43, 1);
									func_136(44, 1);
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else
							{
								if (!unk_0xCFC04A38F256EE06(iLocal_75))
								{
									unk_0xFEDD46326A41DB46(iLocal_75, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
									unk_0x97C5D2BB8E47131D(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								func_221();
							}
						}
						else
						{
							if (!unk_0xCFC04A38F256EE06(iLocal_75) && func_152(iLocal_77))
							{
								unk_0x2AF5979C8A445B16(iLocal_75, iLocal_77, 20f, iLocal_299);
								unk_0x97C5D2BB8E47131D(iLocal_75, 1);
								unk_0x4EDE34FBADD967A6(0);
							}
							func_104(0);
						}
						break;
				}
			}
			else
			{
				func_221();
			}
		}
		else
		{
			if (unk_0xCFC04A38F256EE06(iLocal_76))
			{
				if (Local_122[2 /*10*/].f_7)
				{
					func_103(&Local_122, 2);
				}
			}
			unk_0xFC01730D781E8C65(unk_0xE0BDAFA1A39552D6());
			func_95();
			if (func_152(iLocal_77) && !func_94())
			{
				if (func_92())
				{
					if (!unk_0xCFC04A38F256EE06(iLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!unk_0xCFC04A38F256EE06(iLocal_76))
								{
									if (unk_0x93E49C491856D7AD(iLocal_76, iLocal_77, 0))
									{
										if (iLocal_301 == 2)
										{
											unk_0x215FFA3EE011BA3C(iLocal_76, 1);
											unk_0x215FFA3EE011BA3C(iLocal_77, 1);
											unk_0xD6763C9F81772BAE(&uLocal_78);
											unk_0x480BD8426B2323B0(0, iLocal_77, unk_0x06736567F820A39E(), 8, 30f, iLocal_300, 200f, 10f, 0);
											unk_0x6F275D9063DAF754(uLocal_78);
											unk_0x457C4844450FF70E(iLocal_76, uLocal_78);
											unk_0xDD1A4EE55D86FE71(&uLocal_78);
										}
										else
										{
											unk_0x215FFA3EE011BA3C(iLocal_76, 1);
											unk_0xD6763C9F81772BAE(&uLocal_78);
											unk_0x82E2E577EC002BA8(0, iLocal_77, 30, 1000);
											unk_0x480BD8426B2323B0(0, iLocal_77, unk_0x06736567F820A39E(), 8, 40f, iLocal_300, 200f, 10f, 1);
											unk_0x6F275D9063DAF754(uLocal_78);
											unk_0x457C4844450FF70E(iLocal_76, uLocal_78);
											unk_0xDD1A4EE55D86FE71(&uLocal_78);
										}
										Local_317 = { unk_0x309DFDF8C715AF38(iLocal_77, unk_0x2B2E3E2C18EAC4F5(iLocal_77, "wheel_lr")) };
										Local_320 = { unk_0xE58515B4F840AB2C(iLocal_77, Local_317) };
										unk_0x2DB1C07C291A0CB5("scr_wheel_burnout", iLocal_77, Local_320 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_323 = { unk_0x309DFDF8C715AF38(iLocal_77, unk_0x2B2E3E2C18EAC4F5(iLocal_77, "wheel_rr")) };
										Local_326 = { unk_0xE58515B4F840AB2C(iLocal_77, Local_323) };
										unk_0x2DB1C07C291A0CB5("scr_wheel_burnout", iLocal_77, Local_326 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										if (!unk_0xCDB4C4200A9B478A(uLocal_64))
										{
											uLocal_64 = func_90(iLocal_77, 1, 0);
										}
										unk_0x93CEFE7E186CB641(2);
										iLocal_49 = 1;
									}
									else if (unk_0x1D58D319587D567F(iLocal_77, unk_0x06736567F820A39E(), 1))
									{
										if (!unk_0xCFC04A38F256EE06(iLocal_76))
										{
											unk_0xFEDD46326A41DB46(iLocal_76, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
											unk_0x97C5D2BB8E47131D(iLocal_76, 1);
											unk_0x4EDE34FBADD967A6(0);
										}
										func_221();
									}
								}
								else
								{
									unk_0x2AF5979C8A445B16(iLocal_75, iLocal_77, 20f, iLocal_299);
									unk_0x97C5D2BB8E47131D(iLocal_75, 1);
									unk_0x4EDE34FBADD967A6(0);
									func_104(0);
								}
								break;
							
							case 1:
								if (func_152(iLocal_77))
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
											unk_0xF503C01D671985ED(iLocal_77, fLocal_119);
											iVar3 = unk_0xAA1502685413BDDD(unk_0xF4745590D18D14B8(iLocal_77, 1), 5f, 0, 4);
											if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
											{
												if (func_152(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0)))
												{
													if (unk_0x0280B42925DCFDEC(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), iLocal_77))
													{
														unk_0xC1B1E9A034A63A62(5000);
													}
												}
												if (func_152(iVar3))
												{
													if (iVar3 != iLocal_77)
													{
														if (unk_0x0280B42925DCFDEC(iVar3, iLocal_77))
														{
															unk_0xC1B1E9A034A63A62(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x4B2FB28E87E96C63(iLocal_77) < 700f)
									{
										func_221();
									}
								}
								func_67();
								if ((((((func_66() || func_65()) || unk_0x005CADD5DDB686BE(iLocal_77)) || unk_0x5B69019B28C95DD8(iLocal_77, 1, 5000)) || unk_0x64B7FCF50C031E4A(iLocal_77)) || unk_0xCFC04A38F256EE06(iLocal_76)) || !unk_0x93E49C491856D7AD(iLocal_76, iLocal_77, 0))
								{
									if (unk_0x83667584AACBB09C("RE_CAR_STEAL_SCENE"))
									{
										if (func_152(iLocal_77))
										{
											unk_0xA4455EB3EFA97C1A(iLocal_77, 0);
										}
										unk_0x8D72E02348CB74D2("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xCDB4C4200A9B478A(uLocal_64))
									{
										unk_0x2239ED27B231AE2E(&uLocal_64);
									}
									func_64();
									if (unk_0xCDB4C4200A9B478A(uLocal_63))
									{
										unk_0x2239ED27B231AE2E(&uLocal_63);
									}
									unk_0xFE26A2643AFB7A3B(iLocal_75);
									unk_0xD5739C1C2A4441D5(iLocal_77, 50f, 5, 0);
									uLocal_65 = func_90(iLocal_77, 0, 0);
									fLocal_109 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_77, 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1));
									fLocal_107 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_77, 1), unk_0xF4745590D18D14B8(iLocal_75, 1));
									fLocal_108 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_75, 1));
									func_62(&uLocal_330, 0, 0);
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if (func_152(iLocal_77))
								{
									if (unk_0x4B2FB28E87E96C63(iLocal_77) < 700f)
									{
										func_221();
									}
								}
								if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
								{
									func_221();
								}
								if (!unk_0xBDA1F5E8A36BFA07(iLocal_76, 0))
								{
									if (!unk_0x93E49C491856D7AD(iLocal_76, iLocal_77, 0))
									{
										func_61(iLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432, 0, -1);
									}
								}
								else
								{
									func_60(&uLocal_67);
								}
								if (!unk_0xCFC04A38F256EE06(iLocal_76))
								{
									if (!unk_0x7C6333A22EDB4BF7(iLocal_76, unk_0x06736567F820A39E()))
									{
										unk_0xFB9941AAF643A23C(iLocal_76, unk_0x06736567F820A39E(), 0, 16);
										unk_0x0B87AFC0B2EECA19(unk_0x79469DA5833EACA8(iLocal_76));
									}
								}
								if ((unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_77, 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) > (fLocal_109 + 220f) || unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_77, 1), unk_0xF4745590D18D14B8(iLocal_75, 1)) > (fLocal_107 + 220f)) || unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_75, 1)) > (fLocal_108 + 220f))
								{
									if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_77, 0))
									{
										func_104(0);
									}
									else
									{
										func_221();
									}
								}
								if (unk_0xCDB4C4200A9B478A(uLocal_65))
								{
									if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_77, 0))
									{
										unk_0x2239ED27B231AE2E(&uLocal_65);
										uLocal_63 = func_56(iLocal_75, 0, 0);
										func_55(&uLocal_66);
										func_62(&uLocal_330, 0, 0);
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
											if (!unk_0x7515D29C901C4E76(Local_93, 2f) && !unk_0xE72EEEBA742753B0(iLocal_75))
											{
												unk_0xA9AD2484206C8140(iLocal_75, Local_93, 1, 0, 0, 1);
												unk_0xEF32567B3A5047F5(iLocal_75, fLocal_106);
												iLocal_60 = 1;
											}
										}
										iLocal_50 = 3;
										iLocal_304 = unk_0x1ADBAAC322D61F73();
									}
									else if (unk_0x53B456945AE5C7DE(iLocal_77, iLocal_75, 20f, 20f, 7f, 0, 1, 0))
									{
										func_54();
										if (func_53())
										{
											if (unk_0xE53003D20DBC318E(iLocal_75, iLocal_77, -1, 0, 0))
											{
												if (!bLocal_296)
												{
													if (func_43(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
													{
													}
												}
												unk_0x2AF5979C8A445B16(iLocal_75, iLocal_77, 35f, iLocal_299);
												unk_0x97C5D2BB8E47131D(iLocal_75, 1);
												func_104(1);
											}
										}
									}
								}
								else if (unk_0xCDB4C4200A9B478A(uLocal_63))
								{
									if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_77, 0))
									{
										if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_75, fLocal_56, fLocal_56, fLocal_56, 0, 1, 0))
										{
											if (func_42(1, 0, 1))
											{
												unk_0x2239ED27B231AE2E(&uLocal_63);
												if (iLocal_301 == 1)
												{
													if (func_41(unk_0x3CAD22C2D36A7F14(iLocal_77), 336f, 90f))
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
												unk_0x198E497B820DA913(sLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_39(unk_0xF4745590D18D14B8(iLocal_75, 1), &fLocal_56, &fLocal_57);
										}
									}
									else
									{
										unk_0x2239ED27B231AE2E(&uLocal_63);
										uLocal_65 = func_90(iLocal_77, 0, 0);
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
											unk_0xE736C729727B547E(iLocal_75, 310, 1);
										}
										func_104(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_75))
									{
										unk_0xE736C729727B547E(iLocal_75, 310, 1);
									}
									func_104(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0xCFC04A38F256EE06(iLocal_76))
						{
							if (unk_0x93E49C491856D7AD(iLocal_76, iLocal_77, 0))
							{
								unk_0x480BD8426B2323B0(iLocal_76, iLocal_77, unk_0x06736567F820A39E(), 8, 50f, iLocal_300, 10f, 10f, 0);
								unk_0x97C5D2BB8E47131D(iLocal_76, 1);
								unk_0x0B87AFC0B2EECA19(unk_0x79469DA5833EACA8(iLocal_76));
							}
							else
							{
								unk_0xFEDD46326A41DB46(iLocal_76, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
								unk_0x97C5D2BB8E47131D(iLocal_76, 1);
								unk_0x0B87AFC0B2EECA19(unk_0x79469DA5833EACA8(iLocal_76));
							}
						}
						unk_0x4EDE34FBADD967A6(0);
						func_221();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_152(iLocal_77))
						{
							unk_0x5D91DDE62ED9EC5E(&iLocal_77);
						}
						if (!unk_0xCFC04A38F256EE06(iLocal_76))
						{
							unk_0xDAF1451794AD09A3(&iLocal_76);
						}
					}
					if (!unk_0xCFC04A38F256EE06(iLocal_75))
					{
						if (unk_0x46E9388908C80483(iLocal_75, sLocal_83, "agitated_idle_a", 3))
						{
							unk_0x5A847D74F5D84B36(iLocal_75, "waiting", sLocal_83, -2f);
						}
						func_1(iLocal_75, "GENERIC_CURSE_HIGH", 24);
						unk_0xD6763C9F81772BAE(&uLocal_78);
						unk_0x45B6AF61833199EC(0, Local_102, 1f, 20000, 40000f, 1056964608);
						unk_0xD5FDD0DED35FFF91(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x6F275D9063DAF754(uLocal_78);
						unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
						unk_0xDD1A4EE55D86FE71(&uLocal_78);
					}
					func_221();
				}
			}
			else
			{
				if (!unk_0xCFC04A38F256EE06(iLocal_76))
				{
					unk_0xFEDD46326A41DB46(iLocal_76, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
					unk_0x97C5D2BB8E47131D(iLocal_76, 1);
				}
				if (unk_0xC1EDB61CE0A4B94E(iLocal_77))
				{
					unk_0xFC462627D90533FE(iLocal_77, 50f);
				}
				func_221();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0x6057437695115495(iParam0, sParam1, func_2(iParam2), 1);
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
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
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
	func_54();
	if (((!unk_0xCFC04A38F256EE06(iLocal_75) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E())) && func_152(iLocal_77)) && unk_0x7B43775D6E0D7325(sLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
				{
					if (func_42(1, 0, 1))
					{
						if (!unk_0x7DA173D4FD42F36B(Global_2283, 11))
						{
							if (!unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
							{
								func_31(1, 1, 1, 0);
								if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
								{
									unk_0x310F6B4E168A8F5D(1);
									while (!func_30(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), fLocal_57, 1, 1056964608, 0, 1, 0))
									{
										unk_0xEA8377A713D575EE();
										unk_0x4EDE34FBADD967A6(0);
									}
									func_30(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), fLocal_57, 0, 1056964608, 0, 1, 0);
								}
								unk_0xEA8377A713D575EE();
								if (!unk_0xCFC04A38F256EE06(iLocal_75))
								{
									unk_0x7F075F9DEA8FE763(iLocal_75, 0);
								}
								func_28();
								func_23();
								unk_0xEA8377A713D575EE();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 0);
				unk_0x07F9E7A373EE431B(iLocal_77, 0, 0, 0f);
				unk_0x28038661A095FD94(iLocal_77, 0, 1, 1, 1);
				unk_0xEA8377A713D575EE();
				if (iLocal_301 == 1)
				{
					if (func_152(iLocal_77))
					{
						if (func_41(unk_0x3CAD22C2D36A7F14(iLocal_77), 336f, 90f))
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
					unk_0xA9AD2484206C8140(unk_0x06736567F820A39E(), Local_87, 1, 0, 0, 1);
					unk_0xDC8345A5D9F4B348(unk_0x06736567F820A39E(), joaat("weapon_unarmed"), 1);
					unk_0xA9AD2484206C8140(iLocal_75, Local_93, 1, 0, 0, 1);
					unk_0xEF32567B3A5047F5(iLocal_77, fLocal_105);
					unk_0xA9AD2484206C8140(iLocal_77, Local_90, 1, 0, 0, 1);
				}
				else
				{
					if (!func_41(unk_0x3CAD22C2D36A7F14(iLocal_77), 64.6764f, 90f))
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
					unk_0xA9AD2484206C8140(iLocal_77, Local_90, 1, 0, 0, 1);
					unk_0xDC8345A5D9F4B348(unk_0x06736567F820A39E(), joaat("weapon_unarmed"), 1);
					unk_0xEF32567B3A5047F5(iLocal_77, fLocal_105);
				}
				unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
				if (func_152(iLocal_77))
				{
					unk_0xCE889B96E78E6DC5(iLocal_77);
					if (unk_0xC1EDB61CE0A4B94E(iLocal_76))
					{
						if (unk_0x93E49C491856D7AD(iLocal_76, iLocal_77, 0))
						{
							unk_0xDAF1451794AD09A3(&iLocal_76);
						}
					}
				}
				Local_310 = { 0f, 0f, 0f };
				Local_313 = { 0f, 0f, 0f };
				uLocal_302 = unk_0x70D62E1C98FBC411(Local_310, Local_313, 2);
				unk_0x1600613AA1488D23(uLocal_302, iLocal_77, unk_0x2B2E3E2C18EAC4F5(iLocal_77, sVar3));
				unk_0x40AB9559420E4BE3(uLocal_302, Local_310, Local_313, 2);
				unk_0x13F17EF7A260536D(iLocal_75, uLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x13F17EF7A260536D(unk_0x06736567F820A39E(), uLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_79 = unk_0x3378F2E29D29F7A7("DEFAULT_ANIMATED_CAMERA", Local_113, Local_116, fLocal_112, 0, 2);
				unk_0x0EE4AE2956B8434F(uLocal_79, uLocal_302, "car_returned_cam", sLocal_306);
				unk_0xBCEDA21437BEF498(iLocal_77, sLocal_307, sLocal_306, 1000f, 0, 0, 0, 0, 262144);
				Local_310 = { unk_0xF4745590D18D14B8(iLocal_77, 1) };
				Local_313 = { unk_0xB3EAD8911713F6A6(iLocal_77, 2) };
				if (func_152(iLocal_80))
				{
					if (func_22(iLocal_80, Local_90, 1) <= 11f)
					{
						unk_0xA9AD2484206C8140(iLocal_80, Var4, 1, 0, 0, 1);
						unk_0xEF32567B3A5047F5(iLocal_80, fVar7);
						unk_0xCE889B96E78E6DC5(iLocal_80);
						unk_0xB7E6C6AE18F1EDA6(iLocal_80, 1, 0);
					}
				}
				unk_0x79D9EC458879E8B8(Local_90, 10f, 1, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				if (iLocal_301 == 2)
				{
					unk_0xFC00665DF1889C62(joaat("rocoto"), 15);
				}
				else
				{
					unk_0xFC00665DF1889C62(joaat("peyote"), 15);
				}
				unk_0x1D2204CE0D02765E(Local_90, 15f);
				unk_0x78EE57C40B1C74AA(uLocal_79, 1);
				unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
				iLocal_51 = 3;
				unk_0x1D544AF75617CBAD(1f);
				break;
			
			case 3:
				unk_0xEA8377A713D575EE();
				if (func_19())
				{
					iLocal_51 = 4;
				}
				if (iLocal_301 == 1)
				{
					if (unk_0x83666F9FB8FEBD4B() > 1500 && !bLocal_342)
					{
						if (func_43(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_51 = 4;
						}
					}
				}
				else if (unk_0x4958900440DDE4E4(uLocal_302) && !bLocal_342)
				{
					if (unk_0x3B5FD456D45F2AAE(uLocal_302) >= 0.2f)
					{
						if (func_43(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
				unk_0x1D544AF75617CBAD(1f);
				break;
			
			case 4:
				unk_0xEA8377A713D575EE();
				if (iLocal_301 == 2)
				{
					if (!func_18())
					{
						if (iLocal_62 == 0)
						{
							if (func_43(&Local_122, cLocal_294, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
							}
						}
					}
				}
				unk_0x1D544AF75617CBAD(1f);
				if (iLocal_301 == 1)
				{
					if (unk_0x4958900440DDE4E4(uLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (unk_0x3B5FD456D45F2AAE(uLocal_302) >= 0.83f)
							{
								unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
								unk_0x28B5966B12DC5B0F(unk_0x06736567F820A39E(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x3B5FD456D45F2AAE(uLocal_302), 0, 0, 0);
								unk_0xA9FA4149DF18912C(unk_0x06736567F820A39E(), 1, 0);
								iLocal_316 = 1;
							}
						}
						if (!unk_0xCFC04A38F256EE06(iLocal_75))
						{
							if (unk_0x3B5FD456D45F2AAE(uLocal_302) >= 0.83f)
							{
								if (unk_0x46E9388908C80483(iLocal_75, sLocal_306, sLocal_308, 2))
								{
									unk_0xC1DCFD0B8D2E4221(iLocal_75, -1000f, 0);
									if (!unk_0x0FDFEC0DD29106EE(iLocal_75, 0))
									{
										if (func_152(iLocal_77))
										{
											unk_0xE47DEDA2D353E92B(iLocal_75, iLocal_77, -1);
											unk_0xE736C729727B547E(iLocal_75, 310, 1);
										}
									}
									unk_0xA9FA4149DF18912C(iLocal_75, 1, 0);
								}
								else
								{
									unk_0xE736C729727B547E(iLocal_75, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0x4958900440DDE4E4(uLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (unk_0x3B5FD456D45F2AAE(uLocal_302) >= 0.86f)
						{
							unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
							unk_0x28B5966B12DC5B0F(unk_0x06736567F820A39E(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, unk_0x3B5FD456D45F2AAE(uLocal_302), 0, 0, 0);
							unk_0xA9FA4149DF18912C(unk_0x06736567F820A39E(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!unk_0xCFC04A38F256EE06(iLocal_75))
					{
						if (unk_0x3B5FD456D45F2AAE(uLocal_302) > 0.847f)
						{
							if (unk_0x46E9388908C80483(iLocal_75, sLocal_306, sLocal_308, 2))
							{
								unk_0xC1DCFD0B8D2E4221(iLocal_75, -1000f, 0);
								if (!unk_0x0FDFEC0DD29106EE(iLocal_75, 0))
								{
									if (func_152(iLocal_77))
									{
										unk_0xE47DEDA2D353E92B(iLocal_75, iLocal_77, -1);
										unk_0xE736C729727B547E(iLocal_75, 310, 1);
									}
								}
								unk_0xA9FA4149DF18912C(iLocal_75, 1, 0);
							}
							else
							{
								unk_0xE736C729727B547E(iLocal_75, 310, 1);
							}
						}
					}
				}
				if (((unk_0x4958900440DDE4E4(uLocal_302) && unk_0x3B5FD456D45F2AAE(uLocal_302) >= 0.99f) || !unk_0x4958900440DDE4E4(uLocal_302)) || func_19())
				{
					if (!unk_0xBDA1F5E8A36BFA07(iLocal_77, 0) && unk_0x46E9388908C80483(iLocal_77, sLocal_306, sLocal_307, 3))
					{
						unk_0x8B950944C37E128D(iLocal_77, sLocal_306, sLocal_307, 1f);
					}
					if (unk_0x4958900440DDE4E4(uLocal_302))
					{
						unk_0x963D11E545E699A3(uLocal_302, 1f);
					}
					if (bLocal_342)
					{
						Var0 = { unk_0xF7CF52D5D69E32BB(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0x00FBAE9BB89D4FC2(Var0, &(Var0.f_2), 0);
						unk_0xA9AD2484206C8140(unk_0x06736567F820A39E(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0xF368E2B5887962DB(sLocal_306, sLocal_309, Local_310, Local_313, 1f, 2) };
						unk_0xEF32567B3A5047F5(unk_0x06736567F820A39E(), Var0.f_2);
						unk_0xA71476EEBE45FF73(0, 1065353216);
						unk_0x086A554C80BC6C5D(0);
					}
					unk_0x968F3EF866966AAB(unk_0x06736567F820A39E(), joaat("MotionState_Idle"), 1, 0, 1);
					if (!unk_0x0FDFEC0DD29106EE(iLocal_75, 0))
					{
						if (func_152(iLocal_77))
						{
							unk_0xE47DEDA2D353E92B(iLocal_75, iLocal_77, -1);
							unk_0xE736C729727B547E(iLocal_75, 310, 1);
						}
					}
					if (!unk_0xCFC04A38F256EE06(iLocal_75))
					{
						if (unk_0x0FDFEC0DD29106EE(iLocal_75, 0))
						{
							if (func_152(iLocal_77))
							{
								unk_0x07F9E7A373EE431B(iLocal_77, 0, 0, 0f);
								unk_0x28038661A095FD94(iLocal_77, 0, 1, 1, 1);
								iLocal_305 = unk_0x1ADBAAC322D61F73();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0xEA8377A713D575EE();
				if ((unk_0x1ADBAAC322D61F73() - iLocal_305) > 100)
				{
					if (func_3(iLocal_75) && func_152(iLocal_77))
					{
						unk_0xD6763C9F81772BAE(&uLocal_78);
						unk_0x82E2E577EC002BA8(0, iLocal_77, 9, 1000);
						unk_0x2AF5979C8A445B16(0, iLocal_77, 25f, iLocal_299);
						unk_0x6F275D9063DAF754(uLocal_78);
						unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
						unk_0xDD1A4EE55D86FE71(&uLocal_78);
						unk_0xE736C729727B547E(iLocal_75, 310, 1);
					}
					func_31(0, 1, 1, 0);
					if (bLocal_342)
					{
						if (unk_0x97A9CC2DDCDAA0A8(uLocal_79))
						{
							unk_0x78EE57C40B1C74AA(uLocal_79, 0);
							unk_0xC2F547D33F9342CC(uLocal_79, 0);
						}
						unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(750);
						unk_0xA71476EEBE45FF73(0, 1065353216);
						unk_0x086A554C80BC6C5D(0);
						func_17(500, 1);
					}
					else
					{
						unk_0x9DA0B763BB403976(0, 0, 3, 0);
						unk_0x78EE57C40B1C74AA(uLocal_79, 0);
					}
					unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
					func_16(&iLocal_77);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_75))
				{
					unk_0xE736C729727B547E(iLocal_75, 310, 1);
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
			Global_101186.f_1902.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101186.f_1902.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3976;
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
			if (iVar1 != 3976)
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
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
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
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312747;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_7(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_15(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_14(unk_0x06736567F820A39E());
			if (func_13(iVar0) && (!func_12(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_13(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return Global_35742 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
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
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*iParam0))
	{
		unk_0xBDA1F5E8A36BFA07(*iParam0, 0);
		if (unk_0xC9A01F9792B3D486(*iParam0) && unk_0x7292AF41BC6C644F(*iParam0, 1))
		{
			unk_0x768B37F1452D4834(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0x4FF34B5B023875E1() || unk_0x58CFBE8B8644D59B())
	{
		if (!unk_0xEC708A793EB17979())
		{
			unk_0x8EA2EEF67922F899(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xDF916BCF4D39E8C2())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

int func_18()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
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
		if (unk_0xB62FD07A104AD57E(iVar0))
		{
			unk_0x78EE57C40B1C74AA(uLocal_79, 0);
			unk_0xEBA0934AA600C515(500);
			while (unk_0x58CFBE8B8644D59B())
			{
				unk_0xEA8377A713D575EE();
				unk_0x4EDE34FBADD967A6(0);
			}
			bLocal_342 = true;
			return 1;
		}
	}
	if (unk_0x4FF34B5B023875E1())
	{
		if (unk_0xB62FD07A104AD57E(iVar0))
		{
			bLocal_342 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0xDF916BCF4D39E8C2())
	{
		if ((unk_0x1ADBAAC322D61F73() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1ADBAAC322D61F73();
		}
		Global_28 = unk_0x1ADBAAC322D61F73();
		if ((unk_0x1ADBAAC322D61F73() - Global_27) > iParam0)
		{
			if (func_21())
			{
				Global_27 = unk_0x1ADBAAC322D61F73();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (unk_0xD471C64C0898A7BF(0, 18) || unk_0xD471C64C0898A7BF(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Param1, iParam4);
}

void func_23()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(0);
		}
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
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
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
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
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
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
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC80D2B3478FFF428(0, 71, 1);
	unk_0xC80D2B3478FFF428(0, 72, 1);
	unk_0xC80D2B3478FFF428(0, 76, 1);
	unk_0xC80D2B3478FFF428(0, 73, 1);
	unk_0xC80D2B3478FFF428(0, 59, 1);
	unk_0xC80D2B3478FFF428(0, 60, 1);
	if (bParam5)
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
	unk_0xC80D2B3478FFF428(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC80D2B3478FFF428(0, 69, 1);
		unk_0xC80D2B3478FFF428(0, 70, 1);
		unk_0xC80D2B3478FFF428(0, 68, 1);
	}
	unk_0xC80D2B3478FFF428(0, 74, 1);
	unk_0xC80D2B3478FFF428(0, 86, 1);
	unk_0xC80D2B3478FFF428(0, 81, 1);
	unk_0xC80D2B3478FFF428(0, 82, 1);
	unk_0xC80D2B3478FFF428(0, 138, 1);
	unk_0xC80D2B3478FFF428(0, 136, 1);
	unk_0xC80D2B3478FFF428(0, 114, 1);
	unk_0xC80D2B3478FFF428(0, 107, 1);
	unk_0xC80D2B3478FFF428(0, 110, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 87, 1);
	unk_0xC80D2B3478FFF428(0, 88, 1);
	unk_0xC80D2B3478FFF428(0, 113, 1);
	unk_0xC80D2B3478FFF428(0, 115, 1);
	unk_0xC80D2B3478FFF428(0, 116, 1);
	unk_0xC80D2B3478FFF428(0, 117, 1);
	unk_0xC80D2B3478FFF428(0, 118, 1);
	unk_0xC80D2B3478FFF428(0, 119, 1);
	unk_0xC80D2B3478FFF428(0, 131, 1);
	unk_0xC80D2B3478FFF428(0, 132, 1);
	unk_0xC80D2B3478FFF428(0, 123, 1);
	unk_0xC80D2B3478FFF428(0, 126, 1);
	unk_0xC80D2B3478FFF428(0, 129, 1);
	unk_0xC80D2B3478FFF428(0, 130, 1);
	unk_0xC80D2B3478FFF428(0, 133, 1);
	unk_0xC80D2B3478FFF428(0, 134, 1);
	unk_0xEEB3EB1EAE3ADA8E();
	if ((unk_0x1ADBAAC322D61F73() - Global_29) > 500)
	{
		unk_0xD5739C1C2A4441D5(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1ADBAAC322D61F73();
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (unk_0xF87C669B882D93C0(unk_0x137B8B7A1CAD742A(iParam0)) <= fParam3)
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
		unk_0x0E7D7A2D525FF714(unk_0xE0BDAFA1A39552D6());
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 1);
		func_38(1);
		unk_0xBB767E7625FB7ED6();
		unk_0xCE3C0BD3070B4018();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x1FB728BC68674B71())
			{
				unk_0xC48487554D051523(0);
			}
			if (!func_25())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_37(1, iParam3, iParam2, 0);
		Global_55786 = 1;
		Global_68092 = 1;
		Global_69519 = 1;
	}
	else
	{
		func_38(0);
		unk_0x8355AD5145EA3FA6();
		Global_55786 = 0;
		if (bParam1)
		{
			unk_0xEC46418588F2FEF5();
		}
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 0);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 0);
		func_37(0, iParam3, iParam2, 0);
		if (unk_0x17CC0D5008835470())
		{
			if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_35(unk_0xE0BDAFA1A39552D6())) && !func_33(unk_0xE0BDAFA1A39552D6(), 0)) && !func_32())
			{
				unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_35(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
		}
		Global_69519 = 0;
	}
}

bool func_32()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_34(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_35(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_36())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_36()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_37(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x640152C8EE973B5B() != iParam0 && uParam2)
		{
			unk_0x1ECC86329E4F43F8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 13);
	}
}

void func_39(struct<3> Param0, float fParam3, float fParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) - Param0 };
		fVar4 = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
		if (func_40(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
		fVar4 = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
		if (func_40(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x137B8B7A1CAD742A(unk_0x06736567F820A39E()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (unk_0x137B8B7A1CAD742A(unk_0x06736567F820A39E()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (unk_0x137B8B7A1CAD742A(unk_0x06736567F820A39E()) > 10f)
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

int func_40(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x1B6292EA51632C25(iParam0, 0))
	{
		fVar0 = unk_0x3CAD22C2D36A7F14(iParam0);
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

int func_41(float fParam0, float fParam1, float fParam2)
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

int func_42(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x937BE2ED4FE56FFA())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (!unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
		{
			return 0;
		}
		iVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
		if (bParam0)
		{
			if (unk_0xBDA1F5E8A36BFA07(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
			{
				if (unk_0x4321FC7479614822(iVar0, -1) != unk_0x06736567F820A39E())
				{
					return 0;
				}
			}
		}
		if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
		{
			if (unk_0x47595E8E5571263C(iVar0) < 0.95f || unk_0x47595E8E5571263C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!unk_0xFAA527C349D56C09(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

bool func_43(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_44(sParam2, iParam3, 0);
}

int func_44(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC48487554D051523(0);
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
					func_51();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_49();
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
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_48();
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
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_47())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_46();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_45();
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
		func_51();
	}
	return 0;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_46()
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
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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

void func_48()
{
	if (func_12(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
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
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_49()
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

bool func_50(int iParam0, int iParam1)
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
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

void func_51()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_53()
{
	if (unk_0xCFC04A38F256EE06(iLocal_76))
	{
		return 1;
	}
	else if (func_152(iLocal_77))
	{
		if (!unk_0x53B456945AE5C7DE(iLocal_76, iLocal_77, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_54()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_152(iLocal_77))
	{
		fVar0 = unk_0xA1B16F2399008FCA(iLocal_77);
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
		if (iVar1 && unk_0xC19B385EC320C9F5(iLocal_77))
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

void func_55(var uParam0)
{
	*uParam0 = -99;
}

var func_56(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_57(iParam0, bParam1, 145);
}

var func_57(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_58(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCDB4C4200A9B478A(uVar0)) && unk_0xDC1F9F222D09400F(&(Global_101186.f_32651[iParam2 /*29*/].f_3)))
	{
		unk_0x4BFEA7590F203BDF(uVar0, &(Global_101186.f_32651[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDB8B533098769F4F(iParam0);
	if (unk_0xFCBEC4C2079B0872(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_59(unk_0x17CC0D5008835470(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF2B74C6AE979DE74(uVar0, bParam1);
		}
		else
		{
			unk_0x8A6C20F61A3C4CFA(uVar0, 2);
		}
	}
	else if (unk_0x77CB3F400804EDD1(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_59(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
		unk_0xF2B74C6AE979DE74(uVar0, bParam1);
	}
	else if (unk_0x25EBA3BDCAE4CD26(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_59(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_60(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x2239ED27B231AE2E(uParam0);
		bVar0 = true;
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_1))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_7))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_7))
		{
			if (unk_0xE60A28942E3AC2F4(uParam0->f_7))
			{
				unk_0x02301F37BFDE4853(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_61(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBC628C78D8ECD5F1();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		if (!unk_0xE60A28942E3AC2F4(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x02301F37BFDE4853(iParam0, 1);
			}
			else
			{
				unk_0x1BFD1B2D060B4D7B(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x64C4679AB573D014(iParam0, iParam2);
			unk_0x8071A84CFEF9473E(iParam0, fParam6);
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				unk_0xA4E8F868373B09C0(*uParam1, 7);
			}
		}
		unk_0x4E4EE0053F5CC360(iParam0, iParam4);
		unk_0xD8980636C77E9E15(iParam0, iParam5);
		*uParam1 = unk_0x02474D0091F9C4C7(iParam0);
		if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 2))
		{
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				if (!unk_0x226FA58470A21AEF(iParam7))
				{
					unk_0x029684F77EB71B8F("MCUSTBLIP");
					unk_0x9C174A0D56FFB64A(iParam7);
					unk_0xA16AF6FEBF65A3F0(*uParam1);
				}
				unk_0xE27C8E42A97895CF(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x0FDFEC0DD29106EE(iParam0, 0))
		{
			uParam1->f_1 = unk_0xC449C2B2F01617A0(iParam0);
			if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 3))
			{
				if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
				{
					unk_0xA4E8F868373B09C0(uParam1->f_1, 7);
					unk_0xE27C8E42A97895CF(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x99BCB15F954AF579(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4429, 26))
		{
			return;
		}
	}
	if (unk_0x4C0D45C16561CFBA())
	{
		unk_0xC07D0B27D5ABBE46(iParam2);
		unk_0xBDC149D7C67DBF2E("FocusIn");
		unk_0x8D72E02348CB74D2("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xD82614F454EB2C8B("FocusOut", 0, 0);
			unk_0x962E604CCA53388F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x2246B8E07D62C4EA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x60D87DA27F70EBBC(sVar0))
	{
		if (!unk_0x17CC0D5008835470())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x60D87DA27F70EBBC(uParam0->f_3))
	{
		if (func_63(uParam0->f_3))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
	}
	if (!unk_0x60D87DA27F70EBBC(sVar0))
	{
		if (func_63(sVar0))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
	}
}

bool func_63(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_64()
{
	if (!unk_0xCFC04A38F256EE06(iLocal_76))
	{
		unk_0xD14E5ED9D5665519(iLocal_76, 2, 0);
		unk_0xD14E5ED9D5665519(iLocal_76, 6, 0);
		unk_0xD14E5ED9D5665519(iLocal_76, 3, 1);
		unk_0xD14E5ED9D5665519(iLocal_76, 1, 0);
		unk_0xFB9941AAF643A23C(iLocal_76, unk_0x06736567F820A39E(), 0, 16);
		unk_0xBA63517ADBC1E5E3(iLocal_76, 0);
		unk_0x0B87AFC0B2EECA19(unk_0x79469DA5833EACA8(iLocal_76));
	}
	else
	{
		unk_0x0B87AFC0B2EECA19(unk_0x79469DA5833EACA8(iLocal_76));
	}
	if (func_152(iLocal_77))
	{
		unk_0x818E8D7BA45E01E7(iLocal_77, 1);
	}
}

int func_65()
{
	if (func_152(iLocal_77))
	{
		if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_77, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_81)
			{
				if (!unk_0xCFC04A38F256EE06(iLocal_76))
				{
					if (!iLocal_298)
					{
						if (!unk_0xCCC1EF74C8029770(iLocal_77))
						{
							unk_0x074EB0A5006FA161(iLocal_76, unk_0x06736567F820A39E(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_298 = 1;
						}
					}
					if (unk_0x1ADBAAC322D61F73() > iLocal_303 + 7000)
					{
						if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_77, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_43(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0))
							{
								iLocal_303 = unk_0x1ADBAAC322D61F73();
							}
						}
					}
					unk_0xFE26A2643AFB7A3B(iLocal_77);
					unk_0xA9F54E67717A76ED(iLocal_77);
					iLocal_81 = 0;
				}
			}
			if (unk_0x1D58D319587D567F(iLocal_77, unk_0x06736567F820A39E(), 1))
			{
				if (!unk_0xCFC04A38F256EE06(iLocal_76))
				{
					func_43(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0);
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

int func_66()
{
	if (func_152(iLocal_77))
	{
		if (((unk_0x80067D81CF30A39F(iLocal_77, 0, 0) || unk_0x80067D81CF30A39F(iLocal_77, 1, 0)) || unk_0x80067D81CF30A39F(iLocal_77, 4, 0)) || unk_0x80067D81CF30A39F(iLocal_77, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_67()
{
	if (func_152(iLocal_77) && unk_0xCDB4C4200A9B478A(uLocal_64))
	{
		func_68(&uLocal_330, iLocal_77, 0, 0, 1, 1, 1);
	}
}

void func_68(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_69(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_70(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_70(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
	{
		func_62(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4C0D45C16561CFBA())
	{
		if (unk_0x1ADBAAC322D61F73() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x60D87DA27F70EBBC(iVar0))
	{
		if (!unk_0x17CC0D5008835470())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_63(iVar0))
	{
		func_89();
	}
	if (func_88(uParam1) && unk_0x666D4D13AC213458(uParam1))
	{
		iVar1 = 0;
		if (unk_0x77CB3F400804EDD1(uParam1))
		{
			unk_0x56898685C45E424B(unk_0x406B8F450D0105AB(iParam1));
			unk_0x29F75EF74CF24F1A(unk_0x406B8F450D0105AB(iParam1), 1);
			if (unk_0x8AEE6D3E2059C808(unk_0x406B8F450D0105AB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xFCBEC4C2079B0872(iParam1))
		{
			unk_0x422538D0C109DC17(unk_0x43AB2E726FCE3BF7(iParam1));
			if (unk_0xD5D290CFF286A197(unk_0x43AB2E726FCE3BF7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x25EBA3BDCAE4CD26(iParam1))
		{
			unk_0x0A616F5DE79114F2(unk_0x9197467AFDAFBDB6(iParam1));
			if (unk_0x335F01273990728E(unk_0x9197467AFDAFBDB6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4C0D45C16561CFBA())
		{
			if (func_83(uParam0, bParam7, bParam9, 0))
			{
				func_79(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x60D87DA27F70EBBC(uParam0->f_3) && !unk_0x60D87DA27F70EBBC(iVar0)) && unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
					{
						if ((iVar1 && !unk_0x6146EFE5BC2DD8DC()) && uParam8)
						{
							if (!func_63(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2F6869889D97DFED("CMN_HINT", iVar0))
								{
									func_74(1);
								}
							}
						}
					}
				}
			}
			else if (func_76(iVar0))
			{
				if (unk_0x60D87DA27F70EBBC(uParam0->f_3) && !unk_0x60D87DA27F70EBBC(iVar0))
				{
					if (((unk_0xE72EEEBA742753B0(iParam1) && iVar1) && !unk_0x6146EFE5BC2DD8DC()) && uParam8)
					{
						if (!func_63(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2F6869889D97DFED("CMN_HINT", iVar0))
							{
								func_74(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x60D87DA27F70EBBC(sParam5))
			{
				if (func_63(sParam5))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
			}
			if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
			{
				if (unk_0xB2EE69B49C21F2E0(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(3) == 3 || unk_0x20EC647BB13B981D(3) == 4)
					{
						func_62(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC32E6148FEFD72AD(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(6) == 3 || unk_0x20EC647BB13B981D(6) == 4)
					{
						func_62(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x06071C128D7E648A(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(4) == 3 || unk_0x20EC647BB13B981D(4) == 4)
					{
						func_62(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF090AA685D55F909(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(5) == 3 || unk_0x20EC647BB13B981D(5) == 4)
					{
						func_62(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC1B8A2E022EFC2C3(unk_0x06736567F820A39E()))
				{
					if (unk_0x20EC647BB13B981D(2) == 3 || unk_0x20EC647BB13B981D(2) == 4)
					{
						func_62(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8997C0D6F8CACEDC() == 3 || unk_0x8997C0D6F8CACEDC() == 4)
				{
					func_62(uParam0, iVar0, 1);
				}
			}
			if (!func_83(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_73(uParam0))
				{
					func_72(uParam0);
				}
			}
		}
	}
	else
	{
		func_62(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_88(unk_0x06736567F820A39E()))
	{
		unk_0x9A12E803B1184012(unk_0x06736567F820A39E());
	}
	if (unk_0x4C0D45C16561CFBA())
	{
		unk_0x2246B8E07D62C4EA(1);
		unk_0xC07D0B27D5ABBE46(0);
		unk_0x8D72E02348CB74D2("HINT_CAM_SCENE");
		unk_0xBDC149D7C67DBF2E("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xD82614F454EB2C8B("FocusOut", 0, 0);
			unk_0x962E604CCA53388F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1ADBAAC322D61F73()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_35742)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101186.f_8815.f_100++;
			}
			return Global_101186.f_8815.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101186.f_8815.f_101++;
			}
			return Global_101186.f_8815.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101186.f_8815.f_102++;
			}
			return Global_101186.f_8815.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0x226FA58470A21AEF(sParam0) && func_63(sParam0)) || func_63("CMN_HINT"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return 0;
	}
	switch (Global_35742)
	{
		case 0:
		case 3:
			if (func_74(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xAD79840A082ADD7F())
	{
		return 0;
	}
	if (func_27(0))
	{
		return 0;
	}
	if (func_78())
	{
		return 0;
	}
	if (unk_0x28E650D9BD8DC870())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (unk_0x98934607F8D0FB03(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52961)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
		{
			if (unk_0xB2EE69B49C21F2E0(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(3) == 3 || unk_0x20EC647BB13B981D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC32E6148FEFD72AD(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(6) == 3 || unk_0x20EC647BB13B981D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x06071C128D7E648A(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(4) == 3 || unk_0x20EC647BB13B981D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF090AA685D55F909(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(5) == 3 || unk_0x20EC647BB13B981D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC1B8A2E022EFC2C3(unk_0x06736567F820A39E()))
			{
				if (unk_0x20EC647BB13B981D(2) == 3 || unk_0x20EC647BB13B981D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8997C0D6F8CACEDC() == 3 || unk_0x8997C0D6F8CACEDC() == 4)
			{
				return 0;
			}
			if (unk_0x18375133AFD06D12())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_78()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

void func_79(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		func_62(uParam0, 0, 0);
	}
	if (func_82(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x77CB3F400804EDD1(iParam1))
		{
			uVar0 = unk_0x406B8F450D0105AB(iParam1);
			if (!unk_0x0FDFEC0DD29106EE(uVar0, 0))
			{
				if (unk_0x4E75E5867592AC01(iVar0))
				{
					if (!func_80())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xFB27C72734065835(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x2246B8E07D62C4EA(0);
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
	unk_0x0FE275F91FA13532(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x3195125C126B79C6(unk_0x06736567F820A39E(), iParam1, -1, iVar3, iVar4);
	unk_0xD82614F454EB2C8B("FocusIn", 0, 0);
	unk_0xE491AB346B56AC9F("HINT_CAM_SCENE");
	unk_0x962E604CCA53388F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1ADBAAC322D61F73();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_80()
{
	return func_81(unk_0xE0BDAFA1A39552D6());
}

int func_81(var uParam0)
{
	if (unk_0x79469DA5833EACA8(unk_0x44A9253132E1DDE0(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_82(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1ADBAAC322D61F73() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					if (func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1ADBAAC322D61F73();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1ADBAAC322D61F73() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
					{
						if (!func_87(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1ADBAAC322D61F73();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1ADBAAC322D61F73();
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
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_86(bParam1, bParam2, bParam3) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || unk_0x1DE8FA479639B7F5(unk_0x06736567F820A39E(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1ADBAAC322D61F73() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1))
					{
						if (func_85(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1) || unk_0x1DE8FA479639B7F5(unk_0x06736567F820A39E(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_73(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_89();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_84(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (!unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xC80D2B3478FFF428(0, 140, 1);
			unk_0xC80D2B3478FFF428(0, 80, 1);
			if (unk_0x4EC803EBF471F8D9(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		unk_0xC80D2B3478FFF428(0, 80, 1);
		if (unk_0xBF6A9D598B3CA6F9())
		{
			if (unk_0x4EC803EBF471F8D9(0, 80))
			{
				unk_0x2246B8E07D62C4EA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (!unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xC80D2B3478FFF428(0, 140, 1);
			unk_0xC80D2B3478FFF428(0, 80, 1);
			if (unk_0x7A4571218C06A722(0, 80) && unk_0x1ADBAAC322D61F73() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		unk_0xC80D2B3478FFF428(0, 80, 1);
		if (unk_0xBF6A9D598B3CA6F9())
		{
			if (unk_0x7A4571218C06A722(0, 80) && unk_0x1ADBAAC322D61F73() > Global_116)
			{
				unk_0x2246B8E07D62C4EA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (unk_0xFCBEC4C2079B0872(iParam0))
		{
			if (unk_0x1B6292EA51632C25(unk_0x43AB2E726FCE3BF7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x77CB3F400804EDD1(iParam0))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x406B8F450D0105AB(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x25EBA3BDCAE4CD26(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	unk_0xE27C8E42A97895CF(&Global_2284, 4);
}

int func_90(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_91(iParam0, bParam1, 0);
}

int func_91(var uParam0, bool bParam1, bool bParam2)
{
	return func_58(uParam0, !bParam1, bParam2);
}

int func_92()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_301 == 1)
	{
		fVar0 = 220f;
	}
	if (func_152(iLocal_77))
	{
		func_93(uLocal_64, iLocal_77, fVar0, 1061158912, 0);
		if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_77, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x8831C606DC492098(iLocal_77))
		{
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xCDB4C4200A9B478A(uParam0))
	{
		if ((unk_0xC1EDB61CE0A4B94E(iParam1) && unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E())) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (unk_0xFCBEC4C2079B0872(iParam1))
			{
				if (unk_0x1B6292EA51632C25(unk_0x43AB2E726FCE3BF7(iParam1), 0))
				{
					fVar1 = unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iParam1, 1), 1);
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
						unk_0xC450F6DE1A06C309(uParam0, 1);
						unk_0x7535364E752B61AE(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xC450F6DE1A06C309(uParam0, 0);
						unk_0x7535364E752B61AE(uParam0, 255);
					}
				}
			}
			else if (unk_0x77CB3F400804EDD1(iParam1))
			{
				if (!unk_0xCFC04A38F256EE06(unk_0x406B8F450D0105AB(iParam1)))
				{
					fVar1 = unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iParam1, 1), 1);
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
						unk_0xC450F6DE1A06C309(uParam0, 1);
						unk_0x7535364E752B61AE(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xC450F6DE1A06C309(uParam0, 0);
						unk_0x7535364E752B61AE(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_94()
{
	if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_77, 0) && unk_0x847F144A1FC7D9DA(iLocal_77))
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	if (!unk_0xCFC04A38F256EE06(iLocal_75) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
				if (!unk_0x0FDFEC0DD29106EE(iLocal_75, 0))
				{
					if (iLocal_301 == 1)
					{
						if (func_102())
						{
							iLocal_50 = 1;
						}
					}
					else if (!unk_0x9C4162CAC2B459EC(iLocal_75) && !unk_0x1514DF028FBE7449(iLocal_75))
					{
						unk_0x3195125C126B79C6(iLocal_75, unk_0x06736567F820A39E(), -1, 0, 2);
						if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0x88D1C6255C7A4BE9(iLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							unk_0xD6763C9F81772BAE(&uLocal_78);
							unk_0x28B5966B12DC5B0F(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x28B5966B12DC5B0F(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x28B5966B12DC5B0F(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x6F275D9063DAF754(uLocal_78);
							unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
							unk_0xDD1A4EE55D86FE71(&uLocal_78);
							iLocal_304 = unk_0x1ADBAAC322D61F73();
							iLocal_50 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_301 == 1)
				{
					unk_0x3195125C126B79C6(iLocal_75, unk_0x06736567F820A39E(), -1, 0, 2);
					if (unk_0xFB900D9EE2ACC400(iLocal_75, 242628503) != 1)
					{
						unk_0xD6763C9F81772BAE(&uLocal_78);
						unk_0x28B5966B12DC5B0F(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x6F275D9063DAF754(uLocal_78);
						unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
						unk_0xDD1A4EE55D86FE71(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (unk_0xE722F1A5D8B43C06(iLocal_75, unk_0x06736567F820A39E(), 60f))
				{
					if (unk_0xFB900D9EE2ACC400(iLocal_75, 242628503) != 1)
					{
						unk_0xD6763C9F81772BAE(&uLocal_78);
						unk_0x28B5966B12DC5B0F(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_61 == 0)
						{
							unk_0x28B5966B12DC5B0F(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x6F275D9063DAF754(uLocal_78);
						unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
						unk_0xDD1A4EE55D86FE71(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				if (func_102())
				{
					if (func_101())
					{
					}
				}
				break;
			
			case 2:
				if (func_102())
				{
					if (func_101())
					{
					}
				}
				if (iLocal_301 == 2)
				{
					if (!unk_0xE722F1A5D8B43C06(iLocal_75, unk_0x06736567F820A39E(), 60f) && !func_99(iLocal_75, -875674219))
					{
						unk_0x608A9ECA218C4D24(iLocal_75, unk_0x06736567F820A39E(), 0);
					}
					if (func_98(iLocal_75, unk_0x06736567F820A39E(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x1ADBAAC322D61F73() - iLocal_304) > 6000)
							{
								func_97();
							}
						}
					}
				}
				if (unk_0xFB900D9EE2ACC400(iLocal_75, 242628503) != 1 && !func_99(iLocal_75, -875674219))
				{
					if (iLocal_301 == 1)
					{
						Local_93 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x8853522CEFF93BE9(iLocal_75, Local_93, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0xFB900D9EE2ACC400(iLocal_75, 242628503) == 7)
							{
								unk_0xD6763C9F81772BAE(&uLocal_78);
								unk_0x45B6AF61833199EC(0, Local_93, 1f, 20000, fLocal_106, 1056964608);
								unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
								unk_0x6F275D9063DAF754(uLocal_78);
								unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
								unk_0xDD1A4EE55D86FE71(&uLocal_78);
							}
						}
						else if (!unk_0x46E9388908C80483(iLocal_75, sLocal_83, "waiting", 3))
						{
							unk_0x28B5966B12DC5B0F(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_98(iLocal_75, unk_0x06736567F820A39E(), 1) < 25f)
							{
								func_97();
							}
						}
					}
					else if (!unk_0x46E9388908C80483(iLocal_75, sLocal_83, "waiting", 3))
					{
						unk_0x28B5966B12DC5B0F(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x583C5BC4A11B6FC5(iLocal_75, unk_0x06736567F820A39E()))
				{
					unk_0x3195125C126B79C6(iLocal_75, unk_0x06736567F820A39E(), -1, 0, 2);
				}
				if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_75, 40f, 40f, 10f, 0, 1, 0) && !unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iLocal_75, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_96())
					{
						if (iLocal_59)
						{
							if (iLocal_301 == 1)
							{
								unk_0xD6763C9F81772BAE(&uLocal_78);
								unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
								unk_0x28B5966B12DC5B0F(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x6F275D9063DAF754(uLocal_78);
								unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
								unk_0xDD1A4EE55D86FE71(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x1ADBAAC322D61F73();
							}
							else
							{
								unk_0xD6763C9F81772BAE(&uLocal_78);
								unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
								unk_0x28B5966B12DC5B0F(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x6F275D9063DAF754(uLocal_78);
								unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
								unk_0xDD1A4EE55D86FE71(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = unk_0x1ADBAAC322D61F73();
							}
						}
						else if (!unk_0x46E9388908C80483(iLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xFB900D9EE2ACC400(iLocal_75, 242628503) == 7)
							{
								if (!unk_0xE722F1A5D8B43C06(iLocal_75, unk_0x06736567F820A39E(), 45f))
								{
									unk_0xD6763C9F81772BAE(&uLocal_78);
									unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
									unk_0x6F275D9063DAF754(uLocal_78);
									unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
									unk_0xDD1A4EE55D86FE71(&uLocal_78);
								}
								else if ((unk_0x1ADBAAC322D61F73() - iLocal_304) > 6000)
								{
									iLocal_59 = 1;
								}
							}
						}
						else if (!unk_0xE722F1A5D8B43C06(iLocal_75, unk_0x06736567F820A39E(), 70f))
						{
							unk_0x1F6717C33A02B7AC(iLocal_75);
							unk_0xD6763C9F81772BAE(&uLocal_78);
							unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
							unk_0x6F275D9063DAF754(uLocal_78);
							unk_0x457C4844450FF70E(iLocal_75, uLocal_78);
							unk_0xDD1A4EE55D86FE71(&uLocal_78);
							iLocal_304 += 4000;
						}
					}
					if (!unk_0xCFC04A38F256EE06(iLocal_76))
					{
						unk_0xFEDD46326A41DB46(iLocal_76, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
						unk_0x97C5D2BB8E47131D(iLocal_76, 1);
						unk_0x5318F6C4C2B82FA7(&iLocal_76);
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
					if (!unk_0x8853522CEFF93BE9(iLocal_75, Local_93, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0xFB900D9EE2ACC400(iLocal_75, 2106541073) == 7)
						{
							unk_0x45B6AF61833199EC(iLocal_75, Local_93, 1f, 20000, fLocal_106, 1056964608);
						}
					}
					else if (!unk_0xE722F1A5D8B43C06(iLocal_75, unk_0x06736567F820A39E(), 50f))
					{
						unk_0x608A9ECA218C4D24(iLocal_75, unk_0x06736567F820A39E(), -1);
					}
					iLocal_59 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_151(1))
	{
		if (!unk_0xCFC04A38F256EE06(iLocal_75))
		{
			unk_0xFEDD46326A41DB46(iLocal_75, unk_0x06736567F820A39E(), 150f, -1, 0, 0);
			unk_0x97C5D2BB8E47131D(iLocal_75, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_221();
	}
}

bool func_96()
{
	if (!bLocal_296)
	{
		if (func_43(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
		{
			bLocal_296 = true;
		}
	}
	return bLocal_296;
}

int func_97()
{
	if (!iLocal_297)
	{
		if (func_43(&Local_122, cLocal_294, sLocal_288, 4, 0, 0, 0))
		{
			iLocal_297 = 1;
		}
	}
	return iLocal_297;
}

float func_98(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

int func_99(int iParam0, int iParam1)
{
	if (func_100(uParam0))
	{
		if (unk_0xFB900D9EE2ACC400(uParam0, iParam1) == 1 || unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_3(uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	if (!iLocal_295)
	{
		if (unk_0x83666F9FB8FEBD4B() > 2000)
		{
			if (func_43(&Local_122, cLocal_294, sLocal_287, 4, 0, 0, 0))
			{
				iLocal_295 = 1;
			}
		}
	}
	return iLocal_295;
}

int func_102()
{
	if (!unk_0xCFC04A38F256EE06(iLocal_76) && !unk_0xCFC04A38F256EE06(iLocal_75))
	{
		if (func_152(iLocal_77))
		{
			if (unk_0x954A6C5EBD942B9E(iLocal_76, iLocal_77))
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

void func_103(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_104(bool bParam0)
{
	int iVar0;
	
	if (iLocal_301 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_127(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0xE736C729727B547E(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_127(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0xE736C729727B547E(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_127(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_75))
					{
						unk_0xE736C729727B547E(iLocal_75, 310, 1);
					}
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_126(8);
	}
	func_108(17, iLocal_301);
	func_105();
	func_221();
}

void func_105()
{
	func_106();
}

int func_106()
{
	if (func_107(0))
	{
		return 0;
	}
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

bool func_107(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_108(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_124();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_123(iParam0))
	{
		func_122(iParam0, iParam1);
		if (!func_121(51))
		{
			func_117("RE_REWARD", 1, 0, 4000, 10000, func_120(), 0, 138, 0);
			func_116(51);
		}
		if (func_115(iParam0))
		{
			Global_101186.f_29596.f_2 = 3;
		}
		if (func_114(iParam0, iParam1) != 322)
		{
			func_109(func_114(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_101174 = iParam1;
		if (Global_101172 == 0)
		{
			if (((Global_101175 == 1 || Global_101175 == 5) || Global_101175 == 11) || Global_101175 == 25)
			{
				func_126(2);
			}
			else if ((Global_101175 == 26 || Global_101175 == 8) || Global_101175 == 17)
			{
				func_126(7);
			}
			else
			{
				func_126(1);
			}
		}
	}
}

void func_109(int iParam0, var uParam1, var uParam2)
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
		func_113((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101186.f_8960[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101186.f_8960[iParam0 /*12*/].f_6 == 11 || Global_101186.f_8960[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101186.f_8960[iParam0 /*12*/].f_5 = 1;
		Global_101186.f_8960[iParam0 /*12*/].f_10 = uParam1;
		Global_101186.f_8960[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_110();
	}
}

void func_110()
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
	Global_100922 = 0;
	Global_100923 = 0;
	Global_100924 = 0;
	Global_100925 = 0;
	Global_100926 = 0;
	Global_100927 = 0;
	Global_100928 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101186.f_8960.f_3853;
	Global_101186.f_8960.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101186.f_8960[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101186.f_8960[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100922++;
					fVar1 = (fVar1 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100923++;
					fVar2 = (fVar2 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100924++;
					fVar3 = (fVar3 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100925++;
					fVar4 = (fVar4 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100926++;
					fVar5 = (fVar5 + (Global_101186.f_8960[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100927++;
					fVar6 = (fVar6 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100928++;
					fVar7 = (fVar7 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100905 > 0)
	{
		if (Global_100922 == Global_100905)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100906 > 0)
	{
		if (Global_100923 == Global_100906)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100907 > 0)
	{
		if (Global_100924 == Global_100907)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100908 > 0)
	{
		if (Global_100925 == Global_100908)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100909 > 0)
	{
		if (((Global_100926 == Global_100909 || (Global_100909 * 10 / Global_100926) < 41) || Global_100926 > Global_100912) || Global_100926 == Global_100912)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_101186.f_8960.f_3856, 14))
			{
				if (Global_100926 == Global_100909)
				{
					unk_0x1B6939A0FB3A66B3(joaat("num_rndevents_completed"), Global_100909, 0);
					unk_0xE27C8E42A97895CF(&(Global_101186.f_8960.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100910 > 0)
	{
		if (Global_100927 == Global_100910)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100911 > 0)
	{
		if (Global_100928 == Global_100911)
		{
			fVar7 = 5f;
		}
	}
	Global_101186.f_8960.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100926 > Global_100912 || Global_100926 == Global_100912)
	{
		iVar9 = Global_100912;
	}
	else
	{
		iVar9 = Global_100926;
	}
	unk_0x57B5A527FBAC251E(joaat("num_missions_completed"), Global_100922, 1);
	unk_0x57B5A527FBAC251E(joaat("num_missions_available"), Global_100905, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_completed"), Global_100923, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_available"), Global_100906, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_completed"), Global_100924, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_available"), Global_100907, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_completed"), Global_100925, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_available"), Global_100908, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_available"), Global_100912, 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_completed"), (Global_100928 + Global_100927), 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_available"), (Global_100911 + Global_100910), 1);
	Global_100929 = (Global_100922 * 100 / Global_100905);
	Global_100931 = ((Global_100924 + Global_100923) * 100 / (Global_100907 + Global_100906));
	Global_100930 = ((Global_100925 + iVar9) * 100 / (Global_100908 + Global_100912));
	Global_100932 = ((Global_100927 + Global_100928) * 100 / (Global_100910 + Global_100911));
	unk_0x81278411EC120DEA(joaat("total_progress_made"), Global_101186.f_8960.f_3853, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_story_missions"), Global_100929, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_ambient_missions"), Global_100930, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_oddjobs"), Global_100931, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853))
	{
		func_112(13, unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853));
	}
	if (!unk_0xD67AADBB828CC3BE())
	{
		if (!Global_69521)
		{
			if (func_111() == 2 == 0 && !unk_0x17CC0D5008835470())
			{
				if (unk_0x614D6A182129DE96())
				{
					Global_100920 = 0;
				}
				if (!Global_55780)
				{
					func_106();
				}
			}
		}
	}
}

int func_111()
{
	return Global_25152;
}

int func_112(int iParam0, int iParam1)
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
	iVar0 = unk_0x752CB313BE10D01F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEFFB38447380C1DE(iParam0, iParam1);
	}
	return 0;
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xEBF0170044DAFCC1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x962F55EEC297B13E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xEBF0170044DAFCC1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x962F55EEC297B13E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xEBF0170044DAFCC1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x962F55EEC297B13E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xEBF0170044DAFCC1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x962F55EEC297B13E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x57523A7BBB9C991D((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x962F55EEC297B13E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x57523A7BBB9C991D((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x962F55EEC297B13E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1DE02059C7818E12((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x962F55EEC297B13E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1DE02059C7818E12((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x962F55EEC297B13E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1DE02059C7818E12((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x962F55EEC297B13E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x1DE02059C7818E12((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x962F55EEC297B13E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x1DE02059C7818E12((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x962F55EEC297B13E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0)
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

void func_116(int iParam0)
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
		unk_0xE27C8E42A97895CF(&(Global_101186.f_25011.f_150[iVar1]), iVar0);
	}
}

void func_117(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_118(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_118(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2F6869889D97DFED(sParam0, ""))
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
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(&(Global_101186.f_25011[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101186.f_25011.f_145 < 9)
	{
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_4), sParam1, 16);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_8 = (unk_0x1ADBAAC322D61F73() + iParam3);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_9 = iParam5;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_11 = iParam6;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_12 = uParam2;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_13 = iParam7;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_14 = iParam8;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = ((unk_0x1ADBAAC322D61F73() + iParam3) + iParam4);
		}
		else
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = -1;
		}
		Global_101186.f_25011.f_145++;
		func_119();
	}
}

void func_119()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101186.f_25011.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[0])
			{
				Global_101186.f_25011.f_146[0] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[1])
			{
				Global_101186.f_25011.f_146[1] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[2])
			{
				Global_101186.f_25011.f_146[2] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_120()
{
	func_11();
	switch (Global_101186.f_1902.f_539.f_3549)
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

int func_121(int iParam0)
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
		return unk_0x7DA173D4FD42F36B(Global_101186.f_25011.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_122(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_101186.f_29596.f_8[iParam0]), iParam1);
}

int func_123(int iParam0)
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

int func_124()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x47B34031F915C179(), 64);
	uVar16 = func_125(Var0);
	return uVar16;
}

int func_125(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x9F7CDE7B20BCB675(&cParam0))
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

void func_126(int iParam0)
{
	Global_101172 = iParam0;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_107(0))
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
		if (unk_0x7DA173D4FD42F36B(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_101186.f_6454.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_135(iParam1);
		Var0.f_4 = (unk_0x1ADBAAC322D61F73() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x99BCB15F954AF579(&(Var0.f_1), 0);
		Global_101186.f_6454.f_765[Global_101186.f_6454.f_866 /*10*/] = { Var0 };
		Global_101186.f_6454.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_134(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_133(&iVar20);
		iVar21 = func_132(Var10, Global_101186.f_6454.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_130(Global_101186.f_6454.f_765[iVar20 /*10*/]);
			Global_101186.f_6454.f_765[iVar20 /*10*/] = { Var10 };
			func_129(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_128(Var10))
			{
				func_130(Global_101186.f_6454.f_765[iVar20 /*10*/]);
				Global_101186.f_6454.f_765[iVar20 /*10*/] = { Var10 };
				func_129(&Var10);
				return 1;
			}
			else
			{
				if (!func_128(Global_101186.f_6454.f_765[iVar20 /*10*/]))
				{
					Global_101186.f_6454.f_765[iVar20 /*10*/] = { Var10 };
					func_129(&Var10);
					return 1;
				}
				func_129(&Var10);
				return 1;
			}
		}
		else
		{
			func_130(Var10);
			func_129(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_128(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_129(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_130(struct<10> Param0)
{
	if (func_128(Param0))
	{
		func_131(Param0.f_8, 0);
	}
}

void func_131(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101186.f_7379[iParam0] = 1;
	Global_101186.f_7379.f_236[iParam0] = (unk_0x1ADBAAC322D61F73() + iParam1);
}

int func_132(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
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

void func_133(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101186.f_6454.f_866)
	{
		if (func_132(Global_101186.f_6454.f_765[iVar0 /*10*/], Global_101186.f_6454.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_134(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_135(iParam1);
	Var0.f_4 = (unk_0x1ADBAAC322D61F73() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x99BCB15F954AF579(&(Var0.f_1), 0);
	return Var0;
}

int func_135(int iParam0)
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

void func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_140(iParam0, 2, 1))
		{
			func_139(iParam0, 2, 1);
		}
	}
	else if (func_140(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x99BCB15F954AF579(&(Global_91362.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_111() == 0)
		{
			uVar0 = func_9(func_138(iParam0), -1, 0);
			unk_0x99BCB15F954AF579(&uVar0, iParam1);
			func_6(func_138(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_101186.f_668[iParam0]), iParam1);
	}
}

int func_138(int iParam0)
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
			return 3879;
			break;
		
		default:
			break;
	}
	return 3976;
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xE27C8E42A97895CF(&(Global_91362.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_111() == 0)
		{
			uVar0 = func_9(func_138(iParam0), -1, 0);
			unk_0xE27C8E42A97895CF(&uVar0, iParam1);
			func_6(func_138(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE27C8E42A97895CF(&(Global_101186.f_668[iParam0]), iParam1);
	}
}

int func_140(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x7DA173D4FD42F36B(Global_91362.f_1300[iParam0], iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_111() == 0)
		{
			return unk_0x7DA173D4FD42F36B(func_9(func_138(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_141(int iParam0)
{
	if (func_144())
	{
		Global_101176 = 1;
		Global_101173 = unk_0x1ADBAAC322D61F73();
		if (func_115(Global_101175))
		{
			func_142(0);
		}
		unk_0xEEAF3825AA9B5231(1, "RE_TITLE");
		if (iParam0 && func_115(Global_101175))
		{
			unk_0xCB8EBF02739FC8EA();
		}
		return 1;
	}
	return 0;
}

void func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101186.f_29596.f_2 < 3)
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_75(func_143(iParam0), -1);
					Global_101186.f_29596.f_2++;
					unk_0xE27C8E42A97895CF(&Global_101182, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x7DA173D4FD42F36B(Global_101182, 1))
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_75(func_143(iParam0), -1);
					Global_101186.f_29596.f_3++;
					unk_0xE27C8E42A97895CF(&Global_101182, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x7DA173D4FD42F36B(Global_101182, 2))
			{
				if (!unk_0x02EB4679E7E8BC81())
				{
					func_75(func_143(iParam0), -1);
					Global_101186.f_29596.f_4++;
					unk_0xE27C8E42A97895CF(&Global_101182, 2);
				}
			}
			break;
	}
}

char* func_143(int iParam0)
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

int func_144()
{
	switch (func_145(&Global_25211, 0, 5, 0, unk_0xAE832DCCE9CD3242()))
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

int func_145(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89121.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_149(0))
		{
			return 0;
		}
		Global_35706++;
		*uParam0 = Global_35706;
		unk_0xFEC8E17ADA862FEA(unk_0xBC628C78D8ECD5F1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x0C174B9E4848D171(8);
		}
		Global_35742 = iParam2;
		Global_35704 = *uParam0;
		Global_35705 = iParam4;
		Global_35703 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35703 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35703)
			{
				if (Global_35709[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35704 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_147(iParam2))
		{
			return 0;
		}
		if (Global_35703 == 8)
		{
			return 0;
		}
		Global_35706++;
		*uParam0 = Global_35706;
		Global_35709[Global_35703 /*4*/] = Global_35706;
		Global_35709[Global_35703 /*4*/].f_1 = iParam1;
		Global_35709[Global_35703 /*4*/].f_2 = iParam2;
		Global_35709[Global_35703 /*4*/].f_3 = 0;
		Global_35703++;
		if (iParam4 != 0)
		{
			func_146(uParam0, iParam4);
		}
	}
	return 2;
}

void func_146(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35703 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35703)
	{
		if (Global_35709[iVar0 /*4*/] == *uParam0)
		{
			Global_35709[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_147(int iParam0)
{
	return func_148(iParam0, Global_35742);
}

int func_148(int iParam0, int iParam1)
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

int func_149(int iParam0)
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	if (func_147(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_150()
{
	float fVar0;
	
	switch (iLocal_301)
	{
		case 1:
			if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
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
			if (unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x8B2DC483C96C65F6())
	{
		if (!unk_0xCFC04A38F256EE06(iLocal_75))
		{
			if (unk_0xE72EEEBA742753B0(iLocal_75))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_151(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
	{
		if (!unk_0xCFC04A38F256EE06(iLocal_75))
		{
			if (iParam0 == 0 || func_98(iLocal_75, iLocal_76, 1) > 15f)
			{
				if (unk_0xDECA6CE314913AC1(unk_0xB90C4C04BACF96A1(iLocal_75, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0xB90C4C04BACF96A1(iLocal_75, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + unk_0xB90C4C04BACF96A1(iLocal_75, 31086, 0f, 0f, 0f) };
				if ((unk_0xC5F6414F04D65DF6(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xC5F6414F04D65DF6(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xC5F6414F04D65DF6(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xC2CECF0E5D6DD55B(unk_0xB90C4C04BACF96A1(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x3A55B6AA596FF586(-1, unk_0xB90C4C04BACF96A1(iLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x1D58D319587D567F(iLocal_75, unk_0x06736567F820A39E(), 1))
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

int func_152(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0x1B6292EA51632C25(iParam0, 0))
		{
			if (!unk_0x64B7FCF50C031E4A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153()
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
			if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_99))
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
			if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_96) < unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_99))
			{
				bLocal_61 = true;
			}
			break;
	}
	unk_0xBECC89ACB4E5D4ED(iVar7);
	unk_0xBECC89ACB4E5D4ED(iVar8);
	unk_0xBECC89ACB4E5D4ED(iVar9);
	unk_0x198E497B820DA913(sLocal_83);
	unk_0x198E497B820DA913(sLocal_84);
	unk_0x198E497B820DA913(sLocal_85);
	unk_0x198E497B820DA913("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x400383B21251468A();
	if (((((((unk_0x5C9FE32E2FF37989(iVar7) && unk_0x5C9FE32E2FF37989(iVar8)) && unk_0x5C9FE32E2FF37989(iVar9)) && unk_0x7B43775D6E0D7325(sLocal_83)) && unk_0x7B43775D6E0D7325(sLocal_84)) && unk_0x7B43775D6E0D7325(sLocal_85)) && unk_0x7B43775D6E0D7325("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x137D26BF6B6827A1())
	{
		if (iLocal_301 == 1)
		{
			func_167("re_cartheft - Distance to vTop = ", unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_96));
			func_167("re_cartheft - Distance to vBottom = ", unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_99));
			iLocal_77 = unk_0x75409DE1FC985A9D(iVar9, Var3, fVar6, 1, 1);
			unk_0x51C0D2C5E7CCC540(iLocal_77, 0, 0);
			unk_0x3013DF83C9A8EBF2(iLocal_77, 0);
			unk_0x590C7568C3E71544(iLocal_77, 1);
			unk_0x1FA3FA93BAAC64F0(iLocal_77, 0);
			unk_0x89FEA50F04D34AD7(iLocal_77, 0);
			unk_0xF8411E00E003A905(iLocal_77, 2, 0);
			iLocal_76 = unk_0x064835636E49C34D(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0x6553935614875699(iLocal_76, 42, 1);
			unk_0xD14E5ED9D5665519(iLocal_76, 3, 1);
			unk_0xF0683EF788D4342B(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0x49BD4C1B5817C978(iLocal_76, 10);
			unk_0x22E2498099C88B21(iLocal_76, 1f);
			unk_0x43E6829B18B95914(iLocal_76, 1f);
			unk_0x22984397339DE6D1(iLocal_77, 135, 135);
			unk_0x3ECE0E645B1530B3("re_cartheft relGroupThief", &iLocal_329);
			unk_0x054CBFE90FAA6840(5, iLocal_329, joaat("player"));
			unk_0x054CBFE90FAA6840(2, iLocal_329, joaat("CIVMALE"));
			unk_0x054CBFE90FAA6840(2, joaat("CIVMALE"), iLocal_329);
			unk_0xDEA5F99894469373(iLocal_76, iLocal_329);
			unk_0x1BBC7C4B775BFAAD(iLocal_77, 1);
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				Var0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) - Local_52 };
				uLocal_55 = unk_0x10BFB9592B558291(Var0.f_0, Var0.f_1);
			}
			iLocal_75 = unk_0xB500796AAD639F82(5, iVar7, Local_52, uLocal_55, 1, 1);
			unk_0x0AB51FD6583D814C(iLocal_75, sVar11);
			unk_0x3195125C126B79C6(iLocal_75, unk_0x06736567F820A39E(), -1, 2048, 2);
			unk_0x47222A663B914109(iLocal_75, 0, 0, 1, 0);
			unk_0x47222A663B914109(iLocal_75, 2, 2, 0, 0);
			unk_0x47222A663B914109(iLocal_75, 3, 1, 1, 0);
			unk_0x47222A663B914109(iLocal_75, 4, 1, 1, 0);
			unk_0x66ADFA638E00731E(iLocal_75, 1);
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
				iLocal_77 = unk_0x75409DE1FC985A9D(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_77 = unk_0x75409DE1FC985A9D(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			unk_0x51C0D2C5E7CCC540(iLocal_77, 0, 0);
			unk_0x3013DF83C9A8EBF2(iLocal_77, 0);
			unk_0x5B9D79C27A5B31DC(iLocal_77, 3);
			unk_0x590C7568C3E71544(iLocal_77, 1);
			unk_0x54F98A3B0380DD61(iLocal_77, 0);
			unk_0x67867FC0711CB640(iLocal_77, 11, 2, 0);
			unk_0x67867FC0711CB640(iLocal_77, 16, 3, 0);
			unk_0x67867FC0711CB640(iLocal_77, 12, 1, 0);
			unk_0x67867FC0711CB640(iLocal_77, 13, 1, 0);
			unk_0xCFBB37BF7D41A2A6(iLocal_77, 3);
			unk_0x67867FC0711CB640(iLocal_77, 23, 6, 0);
			unk_0xAEFEBAA3958B88B9(iLocal_77, 3);
			unk_0x4A7A7C104CE5DD89(iLocal_77, 18, 1);
			unk_0x4A7A7C104CE5DD89(iLocal_77, 22, 1);
			unk_0x22984397339DE6D1(iLocal_77, 143, 0);
			unk_0xACDED0164ADC06D7(iLocal_77, 31, 2);
			unk_0x1FA3FA93BAAC64F0(iLocal_77, 0);
			unk_0x89FEA50F04D34AD7(iLocal_77, 0);
			if (bLocal_61)
			{
				iLocal_75 = unk_0xB500796AAD639F82(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_75 = unk_0xB500796AAD639F82(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_75 = unk_0xB500796AAD639F82(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0x47222A663B914109(iLocal_75, 0, 0, 0, 0);
			unk_0x47222A663B914109(iLocal_75, 2, 1, 0, 0);
			unk_0x47222A663B914109(iLocal_75, 3, 1, 2, 0);
			unk_0x47222A663B914109(iLocal_75, 4, 1, 2, 0);
			iLocal_76 = unk_0x064835636E49C34D(iLocal_77, 22, iVar8, -1, 1, 1);
			unk_0xF0683EF788D4342B(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			unk_0x49BD4C1B5817C978(iLocal_76, 10);
			unk_0x22E2498099C88B21(iLocal_76, 1f);
			unk_0x43E6829B18B95914(iLocal_76, 1f);
			unk_0x6553935614875699(iLocal_76, 42, 1);
			unk_0x0AB51FD6583D814C(iLocal_76, sVar12);
			Local_90 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_105 = 294.4744f;
			Local_87 = { -501.0442f, -2150.799f, 8.139f };
			Local_93 = { -493.8062f, -2156.036f, 8.1978f };
			Local_113 = { -504.365f, -2144.534f, 9.8585f };
			Local_116 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0xA26A1133034ECD59(iLocal_75, 0);
		unk_0x6553935614875699(iLocal_75, 185, 1);
		unk_0x671106A73871D0AB(iLocal_77, 0);
		unk_0x68018E1A807B2CF1(iLocal_77, 1, 1, 0);
		unk_0xBA63517ADBC1E5E3(iLocal_75, 1);
		unk_0xBA63517ADBC1E5E3(iLocal_76, 1);
		unk_0x3195125C126B79C6(iLocal_75, iLocal_76, -1, 0, 2);
		unk_0xA05011CDAF5DD6A1(iLocal_77);
		unk_0x1BBC7C4B775BFAAD(iLocal_77, 1);
		unk_0x02AA51E28DECDB1B(iLocal_77, 0, 0);
		unk_0x2CC3164B94BF6E73(iVar9, 1);
		unk_0xE491AB346B56AC9F("RE_CAR_STEAL_SCENE");
		unk_0x5643A9465B73BCAB(iLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0xB7768D1080F53979(iLocal_77, 1);
		unk_0xD14E5ED9D5665519(iLocal_75, 17, 0);
		unk_0x6E2532A21AB2C125(iLocal_75, 512, 1);
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
		func_166(&Local_122, 0, unk_0x06736567F820A39E(), sLocal_120, 0, 1);
		func_166(&Local_122, 1, iLocal_75, sVar10, 0, 1);
		func_166(&Local_122, 2, iLocal_76, "CThief", 0, 1);
		return 1;
	}
	else if (func_154())
	{
		func_221();
	}
	return 0;
}

int func_154()
{
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_155(float fParam0, bool bParam1)
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
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_120();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iVar32 /*6*/], 2) && !unk_0x7DA173D4FD42F36B(Global_101186.f_17340[iVar32 /*6*/], 3))
				{
					func_156(iVar32, &Var0);
					fVar35 = unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var0.f_6, 1);
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

void func_156(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 1:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 2:
			func_157(uParam1, "Barry1", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 3:
			func_157(uParam1, "Barry2", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 4:
			func_157(uParam1, "Barry3", func_159(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 5:
			func_157(uParam1, "Barry3A", func_159(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 6:
			func_157(uParam1, "Barry3C", func_159(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 7:
			func_157(uParam1, "Barry4", func_159(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_158(iParam0), 0, 0);
			break;
		
		case 8:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 9:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 10:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 11:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 12:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 13:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 14:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 15:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 16:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 17:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 18:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 19:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 20:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 21:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 22:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 23:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_158(iParam0), 0, 1);
			break;
		
		case 24:
			func_157(uParam1, "Hao1", func_159(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_158(iParam0), 0, 1);
			break;
		
		case 25:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 26:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 27:
			func_157(uParam1, "Josh1", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 28:
			func_157(uParam1, "Josh2", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 29:
			func_157(uParam1, "Josh3", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 30:
			func_157(uParam1, "Josh4", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 31:
			func_157(uParam1, "Maude1", func_159(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 32:
			func_157(uParam1, "Minute1", func_159(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 33:
			func_157(uParam1, "Minute2", func_159(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 34:
			func_157(uParam1, "Minute3", func_159(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 35:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 36:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 37:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 38:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 39:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 40:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 41:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 42:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 43:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 44:
			func_157(uParam1, "Omega1", func_159(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 45:
			func_157(uParam1, "Omega2", func_159(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 46:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 47:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 48:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 49:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 50:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 51:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 52:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 54:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 55:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 56:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 53:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 57:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 58:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 59:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 60:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 61:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 62:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_158(int iParam0)
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

struct<2> func_159(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_160(iParam0) };
	if (unk_0x226FA58470A21AEF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_160(int iParam0)
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

int func_161()
{
	if (func_164() && !func_165())
	{
		return 1;
	}
	if (func_163() && func_162())
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_100904 > 0;
}

int func_163()
{
	if (Global_88565 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()
{
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x02DE5BF2453C475D() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_166(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
			}
		}
	}
}

void func_167(char* sParam0, float fParam1)
{
	func_169(sParam0);
	func_168(fParam1);
}

void func_168(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_169(char* sParam0)
{
	if (unk_0x2F6869889D97DFED(uParam0, uParam0))
	{
	}
}

int func_170()
{
	if (!func_147(5))
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if ((Global_101175 == func_124() && unk_0x8B2C262B815BC3D1()) && Global_101176)
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (func_100(unk_0x06736567F820A39E()))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0) != iLocal_77 && unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0) != iLocal_80)
			{
				iLocal_80 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			}
		}
	}
}

void func_173(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x1ADBAAC322D61F73();
	}
	if (unk_0xCDB4C4200A9B478A(uParam0))
	{
		iVar0 = (unk_0x1ADBAAC322D61F73() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x736983525DD90B1D(uParam0) != 255)
				{
					unk_0x7535364E752B61AE(uParam0, 255);
				}
			}
			else if (unk_0x736983525DD90B1D(uParam0) != 0)
			{
				unk_0x7535364E752B61AE(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x736983525DD90B1D(uParam0) != 255)
			{
				unk_0x7535364E752B61AE(uParam0, 255);
			}
		}
	}
}

void func_174()
{
}

void func_175(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_124();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_177(iParam0);
	unk_0x3DD2E6934C5B4B1B(0);
	unk_0xCD2EAE5EF958BEB1(1);
	Global_101172 = 0;
	func_176();
}

void func_176()
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			unk_0x2CC3164B94BF6E73(unk_0x79469DA5833EACA8(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0)), 1);
		}
		unk_0x6553935614875699(unk_0x06736567F820A39E(), 32, 0);
	}
}

void func_177(int iParam0)
{
	Global_101175 = iParam0;
}

int func_178(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138130)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_124();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			Var1 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC104F226F4D4A296(unk_0x06736567F820A39E())) > 1369f && !func_165())
			{
				return 0;
			}
		}
		if (!Global_101186.f_7851)
		{
			return 0;
		}
		if (func_107(0))
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_217())
		{
			return 0;
		}
		if (Global_101175 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_155(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_216(iParam3))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_215(func_10()) == 4 || func_215(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_214(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_213(Global_101186.f_29596.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x1ADBAAC322D61F73() - Global_101177) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_212())
		{
			return 0;
		}
		if (unk_0x80C449C5D85C42A1())
		{
			return 0;
		}
		if (unk_0x8B2C262B815BC3D1())
		{
			return 0;
		}
		if (!func_203(4))
		{
			return 0;
		}
		if (!func_147(5))
		{
			return 0;
		}
		if (func_202(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x80B7B1E21DC40E6E(unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E())))
		{
			if ((unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xED1A87B65DEE4375(377.153f, -717.567f, 10.0536f) || unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xED1A87B65DEE4375(320.9934f, 265.2515f, 82.1221f)) || unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xED1A87B65DEE4375(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_202(0, 0))
		{
			return 0;
		}
		if (Global_25298)
		{
			return 0;
		}
		if (func_216(30) && !func_202(30, 0))
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
				Var5 = { Global_101186.f_1902.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101186.f_1902.f_539.f_1524[iVar4];
				if (func_201(iVar8))
				{
					if (func_179(iVar4))
					{
						if (!func_82(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var5) < (210f * 210f))
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

bool func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101186.f_1902.f_539.f_1524[iParam0];
	return func_180(iVar0);
}

int func_180(int iParam0)
{
	return func_181(iParam0, 1);
}

int func_181(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_201(iParam0))
	{
		return 0;
	}
	func_182(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_182(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_183(func_194(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_183(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_193(iParam0, iParam1))
	{
		iVar0 = func_192(iParam1);
		iVar1 = func_190(iParam0);
		iVar2 = (func_190(iParam0) - func_190(iParam1));
		iVar3 = (func_192(iParam0) - func_192(iParam1));
		iVar4 = (func_189(iParam0) - func_189(iParam1));
		iVar5 = (func_188(iParam0) - func_188(iParam1));
		iVar6 = (func_187(iParam0) - func_187(iParam1));
		iVar7 = (func_186(iParam0) - func_186(iParam1));
	}
	else
	{
		iVar0 = func_192(iParam0);
		iVar1 = func_190(iParam1);
		iVar2 = (func_190(iParam1) - func_190(iParam0));
		iVar3 = (func_192(iParam1) - func_192(iParam0));
		iVar4 = (func_189(iParam1) - func_189(iParam0));
		iVar5 = (func_188(iParam1) - func_188(iParam0));
		iVar6 = (func_187(iParam1) - func_187(iParam0));
		iVar7 = (func_186(iParam1) - func_186(iParam0));
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
		iVar4 = (iVar4 + func_185(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_184(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_184(float fParam0, float fParam1, float fParam2)
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

int func_185(int iParam0, int iParam1)
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

int func_186(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_187(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_188(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_189(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_190(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_191(unk_0x7DA173D4FD42F36B(iParam0, 31), -1, 1)) + 2011;
}

int func_191(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_192(int iParam0)
{
	return iParam0 & 15;
}

int func_193(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_201(iParam1) || !func_201(iParam0))
	{
		return 1;
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
	iVar0 = func_192(iParam0);
	iVar1 = func_192(iParam1);
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
	return 0;
}

int func_194()
{
	var uVar0;
	
	func_200(&uVar0, unk_0xF14A94DD5AC25E5A());
	func_199(&uVar0, unk_0x4DD90C24B73F9042());
	func_198(&uVar0, unk_0xEC5C0F25A9A364A0());
	func_197(&uVar0, unk_0xED13857F967C0912());
	func_196(&uVar0, unk_0x39BDC971C31BA81C());
	func_195(&uVar0, unk_0x6EBF2ECA5972D1E7());
	return uVar0;
}

void func_195(var uParam0, int iParam1)
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

void func_196(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_197(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_192(*uParam0);
	iVar1 = func_190(*uParam0);
	if (iParam1 < 1 || iParam1 > func_185(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_198(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_200(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_201(int iParam0)
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
	iVar0 = func_186(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_187(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_188(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_190(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_192(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_189(iParam0);
	if (iVar5 < 1 || iVar5 > func_185(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0, int iParam1)
{
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_29596.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
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
						if (((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_211()) || Global_100233) || Global_25154) || func_210()) || func_50(8, -1)) || func_209()) || func_208()) || func_207()) || func_206()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1) || func_211()) || Global_25154) || func_210()) || func_50(8, -1)) || func_207()) || func_209()) || func_208()) || func_206()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_211()) || Global_100233) || Global_25154) || func_210()) || func_50(8, -1)) || func_207()) || func_209()) || func_208()) || func_206()) || Global_101186.f_6454.f_919[iVar0] == 5) || Global_36289 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_211()) || Global_100233) || Global_25154) || func_210()) || func_50(8, -1)) || func_209()) || func_208()) || func_206()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_211() || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || func_50(8, -1)) || func_206()) || func_205()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_209()) || func_208()) || func_205()) || func_204())
						{
							return 0;
						}
						if ((unk_0xAD79840A082ADD7F() && unk_0xCB6A4452D5152B74() != 3) && unk_0xA4D01763320ADBAE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
						{
							if ((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_211()) || Global_25154) || func_210()) || func_50(8, -1)) || func_208()) || func_207()) || func_206()) || Global_101186.f_6454.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || func_211()) || func_208()) || Global_100233) || Global_25154) || func_210()) || Global_36870) || func_50(8, -1)) || func_207()) || func_205()) || func_206()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0)) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1)) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_211()) || Global_100233) || Global_25154) || func_210()) || func_50(8, -1)) || func_207()) || func_205()) || func_209()) || func_208()) || func_206())
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

var func_204()
{
	return Global_91349.f_1;
}

int func_205()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 13);
	}
	return 0;
}

int func_206()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if (Global_69781)
	{
		return 1;
	}
	else if (Global_55774 && !Global_55780)
	{
		return 1;
	}
	return 0;
}

bool func_208()
{
	return Global_91362.f_297 > 0;
}

bool func_209()
{
	return Global_91362.f_296 > 0;
}

var func_210()
{
	return Global_1315913;
}

int func_211()
{
	if (!unk_0x17CC0D5008835470())
	{
		return Global_89121.f_44 == 1;
	}
	return 0;
}

int func_212()
{
	func_48();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_213(int iParam0)
{
	return func_193(func_194(), iParam0);
}

int func_214(int iParam0, int iParam1, int iParam2)
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

int func_215(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_101186.f_6454.f_919[iParam0];
}

bool func_216(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_218())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x7DA173D4FD42F36B(Global_101186.f_29596, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x7DA173D4FD42F36B(Global_101186.f_29596.f_1, iVar0);
	}
	return bVar1;
}

int func_217()
{
	var uVar0;
	
	if (Global_25302)
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			uVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			if (unk_0x1B6292EA51632C25(uVar0, 0))
			{
				if (!unk_0xCFC04A38F256EE06(unk_0x4321FC7479614822(iVar0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_218()
{
	var uVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		if (unk_0x8885412CB28B8667())
		{
			if (unk_0x85D4C81816DC7E73())
			{
				unk_0xFF4D252D25F54A29(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xE27C8E42A97895CF(&uVar0, 2);
				unk_0xE27C8E42A97895CF(&uVar0, 4);
				unk_0xE27C8E42A97895CF(&uVar0, 6);
				unk_0xE27C8E42A97895CF(&Global_25, 2);
				unk_0xE27C8E42A97895CF(&Global_25, 4);
				unk_0xE27C8E42A97895CF(&Global_25, 6);
				unk_0x57B5A527FBAC251E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x68BFEB8408A751AF())
				{
					iVar0 = unk_0x424297F730B39FD1(866);
					unk_0xE27C8E42A97895CF(&iVar0, 0);
					unk_0x57EDFB763ADA5656(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138382 == 2)
	{
		return 1;
	}
	else if (Global_138382 == 3)
	{
		return 0;
	}
	if (unk_0x68BFEB8408A751AF())
	{
		if (unk_0x7DA173D4FD42F36B(unk_0x424297F730B39FD1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_85628[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82395)
	{
		if (Global_82395[iVar0 /*5*/] != -1)
		{
			if (Global_69790.f_109[Global_82395[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_220()
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

void func_221()
{
	if (unk_0xC1EDB61CE0A4B94E(iLocal_76) && !unk_0xBDA1F5E8A36BFA07(iLocal_76, 0))
	{
		unk_0xBA63517ADBC1E5E3(iLocal_76, 0);
		unk_0x0B87AFC0B2EECA19(unk_0x79469DA5833EACA8(iLocal_76));
		func_233(&iLocal_76, 1, 0, 1);
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_75) && !unk_0xBDA1F5E8A36BFA07(iLocal_75, 0))
	{
		unk_0xE736C729727B547E(iLocal_75, 310, 1);
		unk_0xBA63517ADBC1E5E3(iLocal_75, 0);
	}
	if (unk_0xCDB4C4200A9B478A(uLocal_64))
	{
		unk_0x2239ED27B231AE2E(&uLocal_64);
	}
	func_60(&uLocal_67);
	if (unk_0xCDB4C4200A9B478A(uLocal_65))
	{
		unk_0x2239ED27B231AE2E(&uLocal_65);
	}
	if (unk_0x83667584AACBB09C("RE_CAR_STEAL_SCENE"))
	{
		if (func_152(iLocal_77))
		{
			unk_0xA4455EB3EFA97C1A(iLocal_77, 0);
		}
		unk_0x8D72E02348CB74D2("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_301 == 2)
	{
		unk_0x00F8AD3B0A842784(joaat("rocoto"));
	}
	else
	{
		unk_0x00F8AD3B0A842784(joaat("peyote"));
	}
	func_16(&iLocal_77);
	if (func_152(iLocal_80))
	{
		unk_0x3013DF83C9A8EBF2(iLocal_80, 1);
	}
	unk_0x93CEFE7E186CB641(0);
	unk_0x71543B3C24188223(1f);
	func_136(39, 0);
	func_136(40, 0);
	func_136(41, 0);
	func_136(42, 0);
	func_136(43, 0);
	func_136(44, 0);
	func_222(-1);
	func_62(&uLocal_330, 0, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_222(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_124();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_171())
	{
		func_226(iParam0);
		unk_0xEEAF3825AA9B5231(0, 0);
		Global_101177 = unk_0x1ADBAAC322D61F73();
		func_225(30000);
		StringCopy(&cVar0, func_224(Global_101175, 1), 64);
		if (func_123(Global_101175) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101174, 64);
		}
		unk_0x659BEAF3C40E9AAB(&cVar0, Global_101172, (unk_0x1ADBAAC322D61F73() - Global_101173), 0);
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101182, 0) && Global_101186.f_29596.f_2 < 3)
	{
		unk_0x99BCB15F954AF579(&Global_101182, 0);
	}
	func_223(&Global_25211);
	Global_101176 = 0;
	func_177(-1);
}

void func_223(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35704)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35703 = 0;
	Global_35705 = 0;
	Global_35742 = 15;
	Global_55777 = 0;
	Global_55778 = 0;
}

char* func_224(int iParam0, bool bParam1)
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

void func_225(int iParam0)
{
	Global_36293 = (unk_0x1ADBAAC322D61F73() + iParam0);
}

void func_226(int iParam0)
{
	func_227(iParam0, 0, func_232(iParam0));
}

void func_227(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_194();
	func_230(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_229(iParam0, &uVar0);
	Var1 = { func_228(&uVar0) };
}

struct<16> func_228(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_189(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_192(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_190(*uParam0), 64);
	return Var0;
}

void func_229(int iParam0, var uParam1)
{
	Global_101186.f_29596.f_43[iParam0] = *uParam1;
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_190(*uParam0);
	iVar1 = func_192(*uParam0);
	iVar2 = func_189(*uParam0);
	iVar3 = func_188(*uParam0);
	iVar4 = func_187(*uParam0);
	iVar5 = func_186(*uParam0);
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
	iVar6 = func_185(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_185(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_231(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_200(uParam0, iParam1);
	func_199(uParam0, iParam2);
	func_198(uParam0, iParam3);
	func_196(uParam0, iParam5);
	func_197(uParam0, iParam4);
	func_195(uParam0, iParam6);
}

int func_232(int iParam0)
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

void func_233(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(*uParam0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFB31564A849CEAF4(*uParam0);
			}
			unk_0x97C5D2BB8E47131D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBA63517ADBC1E5E3(*uParam0, 0);
			}
		}
		unk_0x5318F6C4C2B82FA7(uParam0);
	}
}

